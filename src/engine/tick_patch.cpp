#include "tick_patch.hpp"

#include <Geode/Geode.hpp>

#if defined(GEODE_IS_MOBILE) || defined(GEODE_IS_MACOS)
#include <cmath>
#include <cstdint>
#include <cstring>
#include <span>
#include <vector>

#include "arm_encode.hpp"

#ifdef GEODE_IS_ANDROID
#include <dlfcn.h>
#endif
#endif

namespace grape::ticks {

#if defined(GEODE_IS_MOBILE) || defined(GEODE_IS_MACOS)
namespace {

#ifdef GEODE_IS_ANDROID64
using Cell = uint32_t;
#else
using Cell = float;
#endif

Cell g_cell = 0;
Cell* g_target = &g_cell;
bool g_patched = false;
bool g_tried = false;

// Written by setTickRate, read by the patched accounting block:
// [0] = warp (the vanilla code converted this from the layer's float),
// [1] = the timestep the delta accounting quantizes to.
double g_tickTime[2] = {1.0, 1.0 / 240.0};

using arm::ANY;

std::span<const uint8_t> codeWindow(uintptr_t start, std::size_t size) {
    return {reinterpret_cast<const uint8_t*>(start), size};
}

bool applyPatch(uintptr_t address, geode::ByteSpan bytes) {
    auto result =
        geode::Mod::get()->patch(reinterpret_cast<void*>(address), bytes);
    if (result.isErr()) {
        geode::log::error("Tick patch failed at {:#x}: {}", address,
                          result.unwrapErr());
        return false;
    }
    return true;
}

#ifdef GEODE_IS_ANDROID
uintptr_t updateAddress() {
    return reinterpret_cast<uintptr_t>(
        dlsym(RTLD_DEFAULT, "_ZN15GJBaseGameLayer6updateEf"));
}
#endif

#ifdef GEODE_IS_MACOS

constexpr uintptr_t MAC_UPDATE = 0x10663c;

// The delta-accounting timestep selection inside update(): ts = warp < 1
// ? warp / 240 : 1 / 240. Replaced with two mod-written doubles so the
// accounting quantizes to the mod's TPS instead of vanilla's 240 Hz.
constexpr uintptr_t MAC_TICK_RATE = 0x1068a0;
constexpr std::array<uint8_t, 36> MAC_TICK_RATE_ORIGINAL = {
    0x61, 0x32, 0x43, 0xbd, 0x22, 0xc0, 0x22, 0x1e, 0xe9, 0xe3, 0x00,
    0xb2, 0x29, 0xee, 0xe7, 0xf2, 0x23, 0x01, 0x67, 0x9e, 0x44, 0x08,
    0x63, 0x1e, 0x05, 0x10, 0x2e, 0x1e, 0x20, 0x20, 0x25, 0x1e, 0x81,
    0x4c, 0x63, 0x1e};

bool installPlatform() {
    const uintptr_t base = geode::base::get();
    if (!base) return false;



    constexpr int16_t roundSite[] = {0x01, 0x10, 0x2E, 0x1E, 0x00, 0x20,
                                     0x21, 0x1E, 0x20, 0xAC, 0x20, 0x1E};
    const auto found =
        arm::findMasked(codeWindow(base + MAC_UPDATE, 0x400), roundSite);
    if (!found) return false;
    const bool patchedCount =
        applyPatch(base + MAC_UPDATE + *found,
                   arm::a64SingleTickLoad(
                       reinterpret_cast<uintptr_t>(&g_cell)));

    // Accounting timestep: verify the original bytes first so a game update
    // can never get a blind write. Without it the tick count still works, but
    // deltas quantize to 240 Hz (frame advance and non-integer steps/frame
    // drift at high TPS).
    const auto* rateSite =
        reinterpret_cast<const uint8_t*>(base + MAC_TICK_RATE);
    if (std::memcmp(rateSite, MAC_TICK_RATE_ORIGINAL.data(), 36) == 0) {
        applyPatch(base + MAC_TICK_RATE,
                   arm::a64TickRateLoad(
                       reinterpret_cast<uintptr_t>(&g_tickTime)));
    } else {
        geode::log::warn("Tick rate site mismatch; delta accounting stays at 240 Hz");
    }
    return patchedCount;
}
#elif defined(GEODE_IS_ANDROID64)
bool installPlatform() {
    const uintptr_t update = updateAddress();
    if (!update) return false;
    constexpr int16_t roundSite[] = {0xAB, 0x19, 0x60, 0x1E, 0x0A, 0x10,
                                     0x62, 0x1E, 0x6A, 0x09, 0x6A, 0x1E};
    const auto found = arm::findMasked(codeWindow(update, 0x500), roundSite);
    if (!found) return false;
    const uintptr_t site = update + *found;
    return applyPatch(site, arm::a64WordTickLoad(
                                site, reinterpret_cast<uintptr_t>(&g_cell),
                                site + 0x28));
}
#elif defined(GEODE_IS_ANDROID32)
bool installPlatform() {
    const uintptr_t update = updateAddress() & ~uintptr_t{1};
    if (!update) return false;
    constexpr int16_t roundSite[] = {0xEE, ANY,  ANY,  ANY,  0xEE,
                                     ANY,  ANY,  0xF7, 0xEE, ANY,
                                     0x7B, 0x17, 0xEE, 0x90, 0x0A};
    constexpr std::size_t leadIn = 7;
    const auto found = arm::findMasked(codeWindow(update, 0x500), roundSite);
    if (!found) return false;
    return applyPatch(update + *found + leadIn,
                      arm::t32TickLoad(static_cast<uint32_t>(
                          reinterpret_cast<uintptr_t>(&g_cell))));
}
#elif defined(GEODE_IS_IOS)
#if GEODE_COMP_GD_VERSION == 22081
constexpr uintptr_t IOS_UPDATE = 0x1fe5c4;
constexpr uintptr_t IOS_TICK_SITE = 0x1fe724;
constexpr uintptr_t IOS_SPARE_CELL = 0x8c4008;

bool installPlatform() {
    const uintptr_t base = geode::base::get();
    if (geode::Loader::get()->isPatchless()) {
        GEODE_MOD_STATIC_PATCH(
            IOS_TICK_SITE,
            arm::a64SingleTickLoadRelative(IOS_TICK_SITE, IOS_SPARE_CELL));
        g_target = reinterpret_cast<Cell*>(base + IOS_SPARE_CELL);
        return true;
    }

    constexpr int16_t roundSite[] = {0x01, 0x10, 0x2E, 0x1E, 0x00, 0x20,
                                     0x21, 0x1E, 0x20, 0xAC, 0x20, 0x1E};
    const auto found =
        arm::findMasked(codeWindow(base + IOS_UPDATE, 0x400), roundSite);
    if (!found) return false;
    return applyPatch(base + IOS_UPDATE + *found,
                      arm::a64SingleTickLoad(
                          reinterpret_cast<uintptr_t>(&g_cell)));
}
#else


bool installPlatform() {
    geode::log::warn("Tick patch offsets are for GD 2.2081; TPS stays at 240");
    return false;
}
#endif
#endif

}

bool install() {
    if (g_tried) return g_patched;
    g_tried = true;
    g_patched = installPlatform();
    if (g_patched)
        geode::log::info("Tick count patch installed");
    else
        geode::log::error("Tick count patch unavailable; TPS stays at 240");
    return g_patched;
}

bool patched() { return g_patched; }

void setCount(int ticks) {
    *g_target = static_cast<Cell>(ticks < 0 ? 0 : ticks);
}

void setTickRate(double tps, double warp) {
    if (!(tps > 0.0) || !std::isfinite(tps)) tps = 240.0;
    if (!std::isfinite(warp) || warp <= 0.0) warp = 1.0;
    g_tickTime[0] = warp;
    g_tickTime[1] = warp < 1.0 ? warp / tps : 1.0 / tps;
}

#else

bool install() { return false; }
bool patched() { return false; }
void setCount(int) {}
void setTickRate(double, double) {}

#endif

}

#if defined(GEODE_IS_MOBILE) || defined(GEODE_IS_MACOS)
$execute { grape::ticks::install(); }
#endif
