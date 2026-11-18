
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/PlatformToolbox.hpp>
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

auto PlatformToolbox::activateGameCenter() -> decltype(activateGameCenter()) {
	using FunctionType = decltype(activateGameCenter())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4bce00, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto PlatformToolbox::copyToClipboard(std::string str) -> decltype(copyToClipboard(str)) {
	using FunctionType = decltype(copyToClipboard(str))(*)(std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4bdc30, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(str);
}

auto PlatformToolbox::doesFileExist(std::string path) -> decltype(doesFileExist(path)) {
	using FunctionType = decltype(doesFileExist(path))(*)(std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4bd450, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(path);
}

auto PlatformToolbox::downloadAndSavePromoImage(std::string url, std::string path) -> decltype(downloadAndSavePromoImage(url, path)) {
	using FunctionType = decltype(downloadAndSavePromoImage(url, path))(*)(std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4bd540, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(url, path);
}

auto PlatformToolbox::getDisplaySize() -> decltype(getDisplaySize()) {
	using FunctionType = decltype(getDisplaySize())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4bdf20, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto PlatformToolbox::getRawPath(char const* path) -> decltype(getRawPath(path)) {
	using FunctionType = decltype(getRawPath(path))(*)(char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4bdb20, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(path);
}

auto PlatformToolbox::getUniqueUserID() -> decltype(getUniqueUserID()) {
	using FunctionType = decltype(getUniqueUserID())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4bcc50, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto PlatformToolbox::getUserID() -> decltype(getUserID()) {
	using FunctionType = decltype(getUserID())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4bcd30, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto PlatformToolbox::hideCursor() -> decltype(hideCursor()) {
	using FunctionType = decltype(hideCursor())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4bcea0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto PlatformToolbox::isControllerConnected() -> decltype(isControllerConnected()) {
	using FunctionType = decltype(isControllerConnected())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4be070, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto PlatformToolbox::isHD() -> decltype(isHD()) {
	using FunctionType = decltype(isHD())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4bd420, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto PlatformToolbox::isLocalPlayerAuthenticated() -> decltype(isLocalPlayerAuthenticated()) {
	using FunctionType = decltype(isLocalPlayerAuthenticated())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4bce10, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto PlatformToolbox::isLowMemoryDevice() -> decltype(isLowMemoryDevice()) {
	using FunctionType = decltype(isLowMemoryDevice())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4bcd60, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto PlatformToolbox::isNetworkAvailable() -> decltype(isNetworkAvailable()) {
	using FunctionType = decltype(isNetworkAvailable())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4bcd50, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto PlatformToolbox::isSignedInGooglePlay() -> decltype(isSignedInGooglePlay()) {
	using FunctionType = decltype(isSignedInGooglePlay())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4bce20, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto PlatformToolbox::loadAndDecryptFileToString(char const* dirPath, char const* fileName, std::string& str) -> decltype(loadAndDecryptFileToString(dirPath, fileName, str)) {
	using FunctionType = decltype(loadAndDecryptFileToString(dirPath, fileName, str))(*)(char const*, char const*, std::string&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4bd270, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(dirPath, fileName, str);
}

auto PlatformToolbox::logEvent(char const* event) -> decltype(logEvent(event)) {
	using FunctionType = decltype(logEvent(event))(*)(char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4bcdf0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(event);
}

auto PlatformToolbox::onGameLaunch() -> decltype(onGameLaunch()) {
	using FunctionType = decltype(onGameLaunch())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4bcdc0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto PlatformToolbox::onNativePause() -> decltype(onNativePause()) {
	using FunctionType = decltype(onNativePause())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4bcd80, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto PlatformToolbox::onNativeResume() -> decltype(onNativeResume()) {
	using FunctionType = decltype(onNativeResume())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4bcd90, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto PlatformToolbox::onToggleKeyboard() -> decltype(onToggleKeyboard()) {
	using FunctionType = decltype(onToggleKeyboard())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4bcda0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto PlatformToolbox::reportAchievementWithID(char const* key, int percent) -> decltype(reportAchievementWithID(key, percent)) {
	using FunctionType = decltype(reportAchievementWithID(key, percent))(*)(char const*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4bce50, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(key, percent);
}

auto PlatformToolbox::reportLoadingFinished() -> decltype(reportLoadingFinished()) {
	using FunctionType = decltype(reportLoadingFinished())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4bcd70, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto PlatformToolbox::resizeWindow(float width, float height) -> decltype(resizeWindow(width, height)) {
	using FunctionType = decltype(resizeWindow(width, height))(*)(float, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4bde90, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(width, height);
}

auto PlatformToolbox::sendMail(char const* title, char const* content, char const* address) -> decltype(sendMail(title, content, address)) {
	using FunctionType = decltype(sendMail(title, content, address))(*)(char const*, char const*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4bce90, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(title, content, address);
}

auto PlatformToolbox::setBlockBackButton(bool block) -> decltype(setBlockBackButton(block)) {
	using FunctionType = decltype(setBlockBackButton(block))(*)(bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4bcdd0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(block);
}

auto PlatformToolbox::setKeyboardState(bool state) -> decltype(setKeyboardState(state)) {
	using FunctionType = decltype(setKeyboardState(state))(*)(bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4bcdb0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(state);
}

auto PlatformToolbox::shouldResumeSound() -> decltype(shouldResumeSound()) {
	using FunctionType = decltype(shouldResumeSound())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4bcde0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto PlatformToolbox::showAchievements() -> decltype(showAchievements()) {
	using FunctionType = decltype(showAchievements())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4bce80, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto PlatformToolbox::showCursor() -> decltype(showCursor()) {
	using FunctionType = decltype(showCursor())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4bcec0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto PlatformToolbox::signInGooglePlay() -> decltype(signInGooglePlay()) {
	using FunctionType = decltype(signInGooglePlay())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4bce30, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto PlatformToolbox::signOutGooglePlay() -> decltype(signOutGooglePlay()) {
	using FunctionType = decltype(signOutGooglePlay())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4bce40, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto PlatformToolbox::spriteFromSavedFile(std::string path) -> decltype(spriteFromSavedFile(path)) {
	using FunctionType = decltype(spriteFromSavedFile(path))(*)(std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4bd550, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(path);
}

auto PlatformToolbox::toggleCallGLFinish(bool enable) -> decltype(toggleCallGLFinish(enable)) {
	using FunctionType = decltype(toggleCallGLFinish(enable))(*)(bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4be0e0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(enable);
}

auto PlatformToolbox::toggleCPUSleepMode(bool enable) -> decltype(toggleCPUSleepMode(enable)) {
	using FunctionType = decltype(toggleCPUSleepMode(enable))(*)(bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4be0c0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(enable);
}

auto PlatformToolbox::toggleForceTimer(bool enable) -> decltype(toggleForceTimer(enable)) {
	using FunctionType = decltype(toggleForceTimer(enable))(*)(bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4be0f0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(enable);
}

auto PlatformToolbox::toggleFullScreen(bool fullscreen, bool borderless, bool fix) -> decltype(toggleFullScreen(fullscreen, borderless, fix)) {
	using FunctionType = decltype(toggleFullScreen(fullscreen, borderless, fix))(*)(bool, bool, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4bde20, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(fullscreen, borderless, fix);
}

auto PlatformToolbox::toggleLockCursor(bool isLocked) -> decltype(toggleLockCursor(isLocked)) {
	using FunctionType = decltype(toggleLockCursor(isLocked))(*)(bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4bde80, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(isLocked);
}

auto PlatformToolbox::toggleMouseControl(bool enable) -> decltype(toggleMouseControl(enable)) {
	using FunctionType = decltype(toggleMouseControl(enable))(*)(bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4be020, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(enable);
}

auto PlatformToolbox::toggleSmoothFix(bool enable) -> decltype(toggleSmoothFix(enable)) {
	using FunctionType = decltype(toggleSmoothFix(enable))(*)(bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4be100, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(enable);
}

auto PlatformToolbox::toggleVerticalSync(bool enable) -> decltype(toggleVerticalSync(enable)) {
	using FunctionType = decltype(toggleVerticalSync(enable))(*)(bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4be0d0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(enable);
}

auto PlatformToolbox::updateMouseControl() -> decltype(updateMouseControl()) {
	using FunctionType = decltype(updateMouseControl())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4bdfe0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto PlatformToolbox::updateWindowedSize(float width, float height) -> decltype(updateWindowedSize(width, height)) {
	using FunctionType = decltype(updateWindowedSize(width, height))(*)(float, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4bdf10, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(width, height);
}
