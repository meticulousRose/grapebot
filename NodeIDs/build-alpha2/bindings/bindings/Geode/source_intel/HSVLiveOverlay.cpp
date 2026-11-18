#include <Geode/cocos/cocoa/CCObject.h>

#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/HSVLiveOverlay.hpp>
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

HSVLiveOverlay::~HSVLiveOverlay() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(HSVLiveOverlay*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x5954f0, tulip::hook::TulipConvention::Default);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) HSVLiveOverlay(geode::CutoffConstructor, sizeof(HSVLiveOverlay));
		geode::DestructorLock::addLock(this);
	}
}

auto HSVLiveOverlay::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&HSVLiveOverlay::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(HSVLiveOverlay*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x255140, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto HSVLiveOverlay::show() -> decltype(show()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&HSVLiveOverlay::show), this);
	using FunctionType = decltype(show())(*)(HSVLiveOverlay*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2551f0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto HSVLiveOverlay::hsvChanged(ConfigureHSVWidget* widget) -> decltype(hsvChanged(widget)) {
	auto self = addresser::thunkAdjust(Resolve<ConfigureHSVWidget*>::func(&HSVLiveOverlay::hsvChanged), this);
	using FunctionType = decltype(hsvChanged(widget))(*)(HSVLiveOverlay*, ConfigureHSVWidget*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2552c0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, widget);
}

auto HSVLiveOverlay::closeColorSelect(cocos2d::CCObject* sender) -> decltype(closeColorSelect(sender)) {
	using FunctionType = decltype(closeColorSelect(sender))(*)(HSVLiveOverlay*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x254e20, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto HSVLiveOverlay::createHSVWidget(int tab) -> decltype(createHSVWidget(tab)) {
	using FunctionType = decltype(createHSVWidget(tab))(*)(HSVLiveOverlay*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x254fa0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, tab);
}

auto HSVLiveOverlay::determineStartValues() -> decltype(determineStartValues()) {
	using FunctionType = decltype(determineStartValues())(*)(HSVLiveOverlay*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x254e70, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto HSVLiveOverlay::onSelectTab(cocos2d::CCObject* sender) -> decltype(onSelectTab(sender)) {
	using FunctionType = decltype(onSelectTab(sender))(*)(HSVLiveOverlay*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x254f60, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto HSVLiveOverlay::toggleControls(bool visible) -> decltype(toggleControls(visible)) {
	using FunctionType = decltype(toggleControls(visible))(*)(HSVLiveOverlay*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x255250, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, visible);
}
