
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/EditorSFXManager.hpp>
#include <Geode/cocos/kazmath/include/kazmath/kazmath.h>

using namespace geode;
using namespace geode::modifier;

#if !defined(GEODE_WRAP_FUNCTION)
#define GEODE_WRAP_FUNCTION
template <class F>
static auto wrapFunction(uintptr_t address, tulip::hook::TulipConvention convention) {
	auto wrapped = geode::hook::createWrapper(reinterpret_cast<void*>(address), tulip::hook::WrapperMetadata{
		.m_convention = geode::hook::createConvention(convention),
		.m_abstract = tulip::hook::AbstractFunction::from(F(nullptr)),
	});
	if (wrapped.isErr()) {
		throw std::runtime_error(wrapped.unwrapErr());
	}
	return wrapped.unwrap();
}
#endif

auto EditorSFXManager::createNewSound(int soundId) -> decltype(createNewSound(soundId)) {
	using FunctionType = decltype(createNewSound(soundId))(*)(int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8e3c70, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(soundId);
}

auto EditorSFXManager::sharedState() -> decltype(sharedState()) {
	using FunctionType = decltype(sharedState())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8e0df0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto EditorSFXManager::clearAll() -> decltype(clearAll()) {
	using FunctionType = decltype(clearAll())(*)(EditorSFXManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8e1150, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto EditorSFXManager::copyFavoriteToMyConfig(GJEditorSoundConfig* config) -> decltype(copyFavoriteToMyConfig(config)) {
	using FunctionType = decltype(copyFavoriteToMyConfig(config))(*)(EditorSFXManager*, GJEditorSoundConfig*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8ed940, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, config);
}

auto EditorSFXManager::createMyConfigFromLive(std::string const& name) -> decltype(createMyConfigFromLive(name)) {
	using FunctionType = decltype(createMyConfigFromLive(name))(*)(EditorSFXManager*, std::string const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8ed640, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, name);
}

auto EditorSFXManager::dataLoaded(DS_Dictionary* dict) -> decltype(dataLoaded(dict)) {
	using FunctionType = decltype(dataLoaded(dict))(*)(EditorSFXManager*, DS_Dictionary*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8ec7b0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, dict);
}

auto EditorSFXManager::decodeSound(std::string const& str) -> decltype(decodeSound(str)) {
	using FunctionType = decltype(decodeSound(str))(*)(EditorSFXManager*, std::string const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8ea380, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, str);
}

auto EditorSFXManager::deserializeAll(std::string const& str, bool destructive) -> decltype(deserializeAll(str, destructive)) {
	using FunctionType = decltype(deserializeAll(str, destructive))(*)(EditorSFXManager*, std::string const&, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8e14b0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, str, destructive);
}

auto EditorSFXManager::encodeDataTo(DS_Dictionary* dict) -> decltype(encodeDataTo(dict)) {
	using FunctionType = decltype(encodeDataTo(dict))(*)(EditorSFXManager*, DS_Dictionary*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8ec380, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, dict);
}

auto EditorSFXManager::ensureLoaded() -> decltype(ensureLoaded()) {
	using FunctionType = decltype(ensureLoaded())(*)(EditorSFXManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8e1420, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto EditorSFXManager::firstSetup() -> decltype(firstSetup()) {
	using FunctionType = decltype(firstSetup())(*)(EditorSFXManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8e1300, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto EditorSFXManager::getCustomSFXRawPath(int sfxId, int customSfxId) -> decltype(getCustomSFXRawPath(sfxId, customSfxId)) {
	using FunctionType = decltype(getCustomSFXRawPath(sfxId, customSfxId))(*)(EditorSFXManager*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8eb2e0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sfxId, customSfxId);
}

auto EditorSFXManager::hasSoundsForAction(int actionId) const  -> decltype(hasSoundsForAction(actionId)) {
	using FunctionType = decltype(hasSoundsForAction(actionId))(*)(EditorSFXManager const *, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8e2640, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, actionId);
}

auto EditorSFXManager::importFromString(std::string const& str, EditorSFXImportOptions const& options, std::string* errMsg) -> decltype(importFromString(str, options, errMsg)) {
	using FunctionType = decltype(importFromString(str, options, errMsg))(*)(EditorSFXManager*, std::string const&, EditorSFXImportOptions const&, std::string*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8ecdd0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, str, options, errMsg);
}

auto EditorSFXManager::init() -> decltype(init()) {
	using FunctionType = decltype(init())(*)(EditorSFXManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8e0f60, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto EditorSFXManager::playAction(int actionId) -> decltype(playAction(actionId)) {
	using FunctionType = decltype(playAction(actionId))(*)(EditorSFXManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8e27a0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, actionId);
}

auto EditorSFXManager::playAction(int primaryId, int fallbackId) -> decltype(playAction(primaryId, fallbackId)) {
	using FunctionType = decltype(playAction(primaryId, fallbackId))(*)(EditorSFXManager*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8e2600, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, primaryId, fallbackId);
}

auto EditorSFXManager::releaseBinding(EditorSFXBinding* binding) -> decltype(releaseBinding(binding)) {
	using FunctionType = decltype(releaseBinding(binding))(*)(EditorSFXManager*, EditorSFXBinding*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8e25a0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, binding);
}

auto EditorSFXManager::serializeAll() -> decltype(serializeAll()) {
	using FunctionType = decltype(serializeAll())(*)(EditorSFXManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8ea940, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto EditorSFXManager::serializeCompressed() -> decltype(serializeCompressed()) {
	using FunctionType = decltype(serializeCompressed())(*)(EditorSFXManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8ecd60, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto EditorSFXManager::soundsForAction(int actionId) -> decltype(soundsForAction(actionId)) {
	using FunctionType = decltype(soundsForAction(actionId))(*)(EditorSFXManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8e3140, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, actionId);
}
