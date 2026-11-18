
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/AppDelegate.hpp>
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

auto AppDelegate::get() -> decltype(get()) {
	using FunctionType = decltype(get())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x649374, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto AppDelegate::applicationDidFinishLaunching() -> decltype(applicationDidFinishLaunching()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&AppDelegate::applicationDidFinishLaunching), this);
	using FunctionType = decltype(applicationDidFinishLaunching())(*)(AppDelegate*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x6491e8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto AppDelegate::applicationDidEnterBackground() -> decltype(applicationDidEnterBackground()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&AppDelegate::applicationDidEnterBackground), this);
	using FunctionType = decltype(applicationDidEnterBackground())(*)(AppDelegate*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x6494b0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto AppDelegate::applicationWillEnterForeground() -> decltype(applicationWillEnterForeground()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&AppDelegate::applicationWillEnterForeground), this);
	using FunctionType = decltype(applicationWillEnterForeground())(*)(AppDelegate*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x649588, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto AppDelegate::applicationWillBecomeActive() -> decltype(applicationWillBecomeActive()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&AppDelegate::applicationWillBecomeActive), this);
	using FunctionType = decltype(applicationWillBecomeActive())(*)(AppDelegate*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x649398, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto AppDelegate::applicationWillResignActive() -> decltype(applicationWillResignActive()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&AppDelegate::applicationWillResignActive), this);
	using FunctionType = decltype(applicationWillResignActive())(*)(AppDelegate*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x6493ac, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto AppDelegate::applicationWillTerminate() -> decltype(applicationWillTerminate()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&AppDelegate::applicationWillTerminate), this);
	using FunctionType = decltype(applicationWillTerminate())(*)(AppDelegate*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x64947c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto AppDelegate::trySaveGame(bool force) -> decltype(trySaveGame(force)) {
	auto self = addresser::thunkAdjust(Resolve<bool>::func(&AppDelegate::trySaveGame), this);
	using FunctionType = decltype(trySaveGame(force))(*)(AppDelegate*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x64969c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, force);
}

auto AppDelegate::willSwitchToScene(cocos2d::CCScene* scene) -> decltype(willSwitchToScene(scene)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCScene*>::func(&AppDelegate::willSwitchToScene), this);
	using FunctionType = decltype(willSwitchToScene(scene))(*)(AppDelegate*, cocos2d::CCScene*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x6497b0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, scene);
}

auto AppDelegate::platformShutdown() -> decltype(platformShutdown()) {
	using FunctionType = decltype(platformShutdown())(*)(AppDelegate*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x6490f0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto AppDelegate::setIdleTimerDisabled(bool disabled) -> decltype(setIdleTimerDisabled(disabled)) {
	using FunctionType = decltype(setIdleTimerDisabled(disabled))(*)(AppDelegate*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x421e10, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, disabled);
}

auto AppDelegate::setupGLView() -> decltype(setupGLView()) {
	using FunctionType = decltype(setupGLView())(*)(AppDelegate*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x6490f4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto AppDelegate::showLoadingCircle(bool unk1, bool unk2, bool unk3) -> decltype(showLoadingCircle(unk1, unk2, unk3)) {
	using FunctionType = decltype(showLoadingCircle(unk1, unk2, unk3))(*)(AppDelegate*, bool, bool, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x649810, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, unk1, unk2, unk3);
}
