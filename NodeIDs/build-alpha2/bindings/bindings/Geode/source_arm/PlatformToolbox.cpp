
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
	static auto func = wrapFunction<FunctionType>(base::get() + 0x420ef4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto PlatformToolbox::copyToClipboard(std::string str) -> decltype(copyToClipboard(str)) {
	using FunctionType = decltype(copyToClipboard(str))(*)(std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x421af0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(str);
}

auto PlatformToolbox::doesFileExist(std::string path) -> decltype(doesFileExist(path)) {
	using FunctionType = decltype(doesFileExist(path))(*)(std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x421400, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(path);
}

auto PlatformToolbox::downloadAndSavePromoImage(std::string url, std::string path) -> decltype(downloadAndSavePromoImage(url, path)) {
	using FunctionType = decltype(downloadAndSavePromoImage(url, path))(*)(std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4214b8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(url, path);
}

auto PlatformToolbox::getDisplaySize() -> decltype(getDisplaySize()) {
	using FunctionType = decltype(getDisplaySize())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x421d18, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto PlatformToolbox::getRawPath(char const* path) -> decltype(getRawPath(path)) {
	using FunctionType = decltype(getRawPath(path))(*)(char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x421a08, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(path);
}

auto PlatformToolbox::getUniqueUserID() -> decltype(getUniqueUserID()) {
	using FunctionType = decltype(getUniqueUserID())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x420ddc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto PlatformToolbox::getUserID() -> decltype(getUserID()) {
	using FunctionType = decltype(getUserID())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x420eb8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto PlatformToolbox::hideCursor() -> decltype(hideCursor()) {
	using FunctionType = decltype(hideCursor())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x420f48, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto PlatformToolbox::isControllerConnected() -> decltype(isControllerConnected()) {
	using FunctionType = decltype(isControllerConnected())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x421de4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto PlatformToolbox::isHD() -> decltype(isHD()) {
	using FunctionType = decltype(isHD())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4213dc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto PlatformToolbox::isLocalPlayerAuthenticated() -> decltype(isLocalPlayerAuthenticated()) {
	using FunctionType = decltype(isLocalPlayerAuthenticated())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x420ef8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto PlatformToolbox::isLowMemoryDevice() -> decltype(isLowMemoryDevice()) {
	using FunctionType = decltype(isLowMemoryDevice())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x420ec4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto PlatformToolbox::isNetworkAvailable() -> decltype(isNetworkAvailable()) {
	using FunctionType = decltype(isNetworkAvailable())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x420ebc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto PlatformToolbox::isSignedInGooglePlay() -> decltype(isSignedInGooglePlay()) {
	using FunctionType = decltype(isSignedInGooglePlay())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x420f00, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto PlatformToolbox::loadAndDecryptFileToString(char const* dirPath, char const* fileName, std::string& str) -> decltype(loadAndDecryptFileToString(dirPath, fileName, str)) {
	using FunctionType = decltype(loadAndDecryptFileToString(dirPath, fileName, str))(*)(char const*, char const*, std::string&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x421278, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(dirPath, fileName, str);
}

auto PlatformToolbox::logEvent(char const* event) -> decltype(logEvent(event)) {
	using FunctionType = decltype(logEvent(event))(*)(char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x420ef0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(event);
}

auto PlatformToolbox::onGameLaunch() -> decltype(onGameLaunch()) {
	using FunctionType = decltype(onGameLaunch())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x420ee0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto PlatformToolbox::onNativePause() -> decltype(onNativePause()) {
	using FunctionType = decltype(onNativePause())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x420ed0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto PlatformToolbox::onNativeResume() -> decltype(onNativeResume()) {
	using FunctionType = decltype(onNativeResume())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x420ed4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto PlatformToolbox::onToggleKeyboard() -> decltype(onToggleKeyboard()) {
	using FunctionType = decltype(onToggleKeyboard())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x420ed8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto PlatformToolbox::openAppPage() -> decltype(openAppPage()) {
	using FunctionType = decltype(openAppPage())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x40c6d8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto PlatformToolbox::reportAchievementWithID(char const* key, int percent) -> decltype(reportAchievementWithID(key, percent)) {
	using FunctionType = decltype(reportAchievementWithID(key, percent))(*)(char const*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x420f10, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(key, percent);
}

auto PlatformToolbox::reportLoadingFinished() -> decltype(reportLoadingFinished()) {
	using FunctionType = decltype(reportLoadingFinished())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x420ecc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto PlatformToolbox::resizeWindow(float width, float height) -> decltype(resizeWindow(width, height)) {
	using FunctionType = decltype(resizeWindow(width, height))(*)(float, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x421cd0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(width, height);
}

auto PlatformToolbox::saveAndEncryptStringToFile(std::string& str, char const* fileName, char const* dirPath) -> decltype(saveAndEncryptStringToFile(str, fileName, dirPath)) {
	using FunctionType = decltype(saveAndEncryptStringToFile(str, fileName, dirPath))(*)(std::string&, char const*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4210f4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(str, fileName, dirPath);
}

auto PlatformToolbox::sendMail(char const* title, char const* content, char const* address) -> decltype(sendMail(title, content, address)) {
	using FunctionType = decltype(sendMail(title, content, address))(*)(char const*, char const*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x420f44, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(title, content, address);
}

auto PlatformToolbox::setBlockBackButton(bool block) -> decltype(setBlockBackButton(block)) {
	using FunctionType = decltype(setBlockBackButton(block))(*)(bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x420ee4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(block);
}

auto PlatformToolbox::setKeyboardState(bool state) -> decltype(setKeyboardState(state)) {
	using FunctionType = decltype(setKeyboardState(state))(*)(bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x420edc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(state);
}

auto PlatformToolbox::shouldResumeSound() -> decltype(shouldResumeSound()) {
	using FunctionType = decltype(shouldResumeSound())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x420ee8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto PlatformToolbox::showAchievements() -> decltype(showAchievements()) {
	using FunctionType = decltype(showAchievements())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x420f40, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto PlatformToolbox::showCursor() -> decltype(showCursor()) {
	using FunctionType = decltype(showCursor())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x420f60, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto PlatformToolbox::signInGooglePlay() -> decltype(signInGooglePlay()) {
	using FunctionType = decltype(signInGooglePlay())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x420f08, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto PlatformToolbox::signOutGooglePlay() -> decltype(signOutGooglePlay()) {
	using FunctionType = decltype(signOutGooglePlay())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x420f0c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto PlatformToolbox::spriteFromSavedFile(std::string path) -> decltype(spriteFromSavedFile(path)) {
	using FunctionType = decltype(spriteFromSavedFile(path))(*)(std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4214bc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(path);
}

auto PlatformToolbox::toggleCPUSleepMode(bool enable) -> decltype(toggleCPUSleepMode(enable)) {
	using FunctionType = decltype(toggleCPUSleepMode(enable))(*)(bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x421e04, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(enable);
}

auto PlatformToolbox::toggleFullScreen(bool fullscreen, bool borderless, bool fix) -> decltype(toggleFullScreen(fullscreen, borderless, fix)) {
	using FunctionType = decltype(toggleFullScreen(fullscreen, borderless, fix))(*)(bool, bool, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x421c7c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(fullscreen, borderless, fix);
}

auto PlatformToolbox::toggleLockCursor(bool isLocked) -> decltype(toggleLockCursor(isLocked)) {
	using FunctionType = decltype(toggleLockCursor(isLocked))(*)(bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x421ccc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(isLocked);
}

auto PlatformToolbox::toggleMouseControl(bool enable) -> decltype(toggleMouseControl(enable)) {
	using FunctionType = decltype(toggleMouseControl(enable))(*)(bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x421db4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(enable);
}

auto PlatformToolbox::toggleVerticalSync(bool enable) -> decltype(toggleVerticalSync(enable)) {
	using FunctionType = decltype(toggleVerticalSync(enable))(*)(bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x421e08, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(enable);
}

auto PlatformToolbox::tryShowRateDialog(std::string gameName) -> decltype(tryShowRateDialog(gameName)) {
	using FunctionType = decltype(tryShowRateDialog(gameName))(*)(std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x40c6d4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(gameName);
}

auto PlatformToolbox::updateMouseControl() -> decltype(updateMouseControl()) {
	using FunctionType = decltype(updateMouseControl())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x421d94, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto PlatformToolbox::updateWindowedSize(float width, float height) -> decltype(updateWindowedSize(width, height)) {
	using FunctionType = decltype(updateWindowedSize(width, height))(*)(float, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x421d14, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(width, height);
}
