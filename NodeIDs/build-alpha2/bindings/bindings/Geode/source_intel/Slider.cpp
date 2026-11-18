#include <Geode/cocos/cocoa/CCObject.h>

#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/Slider.hpp>
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

Slider::~Slider() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(Slider*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x78fa0, tulip::hook::TulipConvention::Default);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) Slider(geode::CutoffConstructor, sizeof(Slider));
		geode::DestructorLock::addLock(this);
	}
}

auto Slider::create(cocos2d::CCNode* target, cocos2d::SEL_MenuHandler handler) -> decltype(create(target, handler)) {
	using FunctionType = decltype(create(target, handler))(*)(cocos2d::CCNode*, cocos2d::SEL_MenuHandler);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2ef3f0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(target, handler);
}

auto Slider::create(cocos2d::CCNode* target, cocos2d::SEL_MenuHandler handler, float scale) -> decltype(create(target, handler, scale)) {
	using FunctionType = decltype(create(target, handler, scale))(*)(cocos2d::CCNode*, cocos2d::SEL_MenuHandler, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2ef510, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(target, handler, scale);
}

auto Slider::create(cocos2d::CCNode* target, cocos2d::SEL_MenuHandler handler, char const* bar, char const* groove, char const* thumb, char const* thumbSel, float scale) -> decltype(create(target, handler, bar, groove, thumb, thumbSel, scale)) {
	using FunctionType = decltype(create(target, handler, bar, groove, thumb, thumbSel, scale))(*)(cocos2d::CCNode*, cocos2d::SEL_MenuHandler, char const*, char const*, char const*, char const*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2ef630, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(target, handler, bar, groove, thumb, thumbSel, scale);
}

auto Slider::ccTouchBegan(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) -> decltype(ccTouchBegan(touch, event)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&Slider::ccTouchBegan), this);
	using FunctionType = decltype(ccTouchBegan(touch, event))(*)(Slider*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2efcd0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, touch, event);
}

auto Slider::ccTouchMoved(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) -> decltype(ccTouchMoved(touch, event)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&Slider::ccTouchMoved), this);
	using FunctionType = decltype(ccTouchMoved(touch, event))(*)(Slider*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2efd50, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, touch, event);
}

auto Slider::ccTouchEnded(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) -> decltype(ccTouchEnded(touch, event)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&Slider::ccTouchEnded), this);
	using FunctionType = decltype(ccTouchEnded(touch, event))(*)(Slider*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2efd10, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, touch, event);
}

auto Slider::enableSlider() -> decltype(enableSlider()) {
	using FunctionType = decltype(enableSlider())(*)(Slider*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2efaa0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto Slider::getLiveDragging() -> decltype(getLiveDragging()) {
	using FunctionType = decltype(getLiveDragging())(*)(Slider*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2efc90, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto Slider::getThumb() -> decltype(getThumb()) {
	using FunctionType = decltype(getThumb())(*)(Slider*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2ef930, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto Slider::getValue() -> decltype(getValue()) {
	using FunctionType = decltype(getValue())(*)(Slider*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2efb60, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto Slider::hideGroove(bool visibility) -> decltype(hideGroove(visibility)) {
	using FunctionType = decltype(hideGroove(visibility))(*)(Slider*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2efe30, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, visibility);
}

auto Slider::init(cocos2d::CCNode* target, cocos2d::SEL_MenuHandler handler, char const* bar, char const* groove, char const* thumb, char const* thumbSel, float scale) -> decltype(init(target, handler, bar, groove, thumb, thumbSel, scale)) {
	using FunctionType = decltype(init(target, handler, bar, groove, thumb, thumbSel, scale))(*)(Slider*, cocos2d::CCNode*, cocos2d::SEL_MenuHandler, char const*, char const*, char const*, char const*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2ef750, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, target, handler, bar, groove, thumb, thumbSel, scale);
}

auto Slider::setBarVisibility(bool visibility) -> decltype(setBarVisibility(visibility)) {
	using FunctionType = decltype(setBarVisibility(visibility))(*)(Slider*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2efc70, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, visibility);
}

auto Slider::setLiveDragging(bool activateThumb) -> decltype(setLiveDragging(activateThumb)) {
	using FunctionType = decltype(setLiveDragging(activateThumb))(*)(Slider*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2efcb0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, activateThumb);
}

auto Slider::setRotated(bool rotated) -> decltype(setRotated(rotated)) {
	using FunctionType = decltype(setRotated(rotated))(*)(Slider*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x7208b0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, rotated);
}

auto Slider::setValue(float val) -> decltype(setValue(val)) {
	using FunctionType = decltype(setValue(val))(*)(Slider*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2efa70, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, val);
}

auto Slider::sliderBegan() -> decltype(sliderBegan()) {
	using FunctionType = decltype(sliderBegan())(*)(Slider*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2eedf0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto Slider::sliderEnded() -> decltype(sliderEnded()) {
	using FunctionType = decltype(sliderEnded())(*)(Slider*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2eef10, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto Slider::updateBar() -> decltype(updateBar()) {
	using FunctionType = decltype(updateBar())(*)(Slider*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2ef230, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}
