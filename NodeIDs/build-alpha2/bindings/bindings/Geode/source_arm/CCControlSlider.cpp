
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/mapping/CCControlSlider.hpp>
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

auto cocos2d::extension::CCControlSlider::create(char const* p0, char const* p1, char const* p2) -> decltype(create(p0, p1, p2)) {
	using FunctionType = decltype(create(p0, p1, p2))(*)(char const*, char const*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3141cc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1, p2);
}

auto cocos2d::extension::CCControlSlider::create(cocos2d::CCSprite* p0, cocos2d::CCSprite* p1, cocos2d::CCSprite* p2) -> decltype(create(p0, p1, p2)) {
	using FunctionType = decltype(create(p0, p1, p2))(*)(cocos2d::CCSprite*, cocos2d::CCSprite*, cocos2d::CCSprite*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x31429c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1, p2);
}

auto cocos2d::extension::CCControlSlider::setValue(float p0) -> decltype(setValue(p0)) {
	auto self = addresser::thunkAdjust(Resolve<float>::func(&cocos2d::extension::CCControlSlider::setValue), this);
	using FunctionType = decltype(setValue(p0))(*)(cocos2d::extension::CCControlSlider*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x31465c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto cocos2d::extension::CCControlSlider::setMinimumValue(float p0) -> decltype(setMinimumValue(p0)) {
	auto self = addresser::thunkAdjust(Resolve<float>::func(&cocos2d::extension::CCControlSlider::setMinimumValue), this);
	using FunctionType = decltype(setMinimumValue(p0))(*)(cocos2d::extension::CCControlSlider*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3146b0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto cocos2d::extension::CCControlSlider::setMaximumValue(float p0) -> decltype(setMaximumValue(p0)) {
	auto self = addresser::thunkAdjust(Resolve<float>::func(&cocos2d::extension::CCControlSlider::setMaximumValue), this);
	using FunctionType = decltype(setMaximumValue(p0))(*)(cocos2d::extension::CCControlSlider*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3146e0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto cocos2d::extension::CCControlSlider::setEnabled(bool p0) -> decltype(setEnabled(p0)) {
	auto self = addresser::thunkAdjust(Resolve<bool>::func(&cocos2d::extension::CCControlSlider::setEnabled), this);
	using FunctionType = decltype(setEnabled(p0))(*)(cocos2d::extension::CCControlSlider*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x31460c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto cocos2d::extension::CCControlSlider::isTouchInside(cocos2d::CCTouch* p0) -> decltype(isTouchInside(p0)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*>::func(&cocos2d::extension::CCControlSlider::isTouchInside), this);
	using FunctionType = decltype(isTouchInside(p0))(*)(cocos2d::extension::CCControlSlider*, cocos2d::CCTouch*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x314710, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto cocos2d::extension::CCControlSlider::initWithSprites(cocos2d::CCSprite* p0, cocos2d::CCSprite* p1, cocos2d::CCSprite* p2) -> decltype(initWithSprites(p0, p1, p2)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCSprite*, cocos2d::CCSprite*, cocos2d::CCSprite*>::func(&cocos2d::extension::CCControlSlider::initWithSprites), this);
	using FunctionType = decltype(initWithSprites(p0, p1, p2))(*)(cocos2d::extension::CCControlSlider*, cocos2d::CCSprite*, cocos2d::CCSprite*, cocos2d::CCSprite*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x314350, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1, p2);
}

auto cocos2d::extension::CCControlSlider::needsLayout() -> decltype(needsLayout()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&cocos2d::extension::CCControlSlider::needsLayout), this);
	using FunctionType = decltype(needsLayout())(*)(cocos2d::extension::CCControlSlider*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x314df0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto cocos2d::extension::CCControlSlider::ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1) -> decltype(ccTouchBegan(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&cocos2d::extension::CCControlSlider::ccTouchBegan), this);
	using FunctionType = decltype(ccTouchBegan(p0, p1))(*)(cocos2d::extension::CCControlSlider*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x314860, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto cocos2d::extension::CCControlSlider::ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1) -> decltype(ccTouchMoved(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&cocos2d::extension::CCControlSlider::ccTouchMoved), this);
	using FunctionType = decltype(ccTouchMoved(p0, p1))(*)(cocos2d::extension::CCControlSlider*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x314a90, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto cocos2d::extension::CCControlSlider::ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1) -> decltype(ccTouchEnded(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&cocos2d::extension::CCControlSlider::ccTouchEnded), this);
	using FunctionType = decltype(ccTouchEnded(p0, p1))(*)(cocos2d::extension::CCControlSlider*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x314c24, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto cocos2d::extension::CCControlSlider::locationFromTouch(cocos2d::CCTouch* p0) -> decltype(locationFromTouch(p0)) {
	using FunctionType = decltype(locationFromTouch(p0))(*)(cocos2d::extension::CCControlSlider*, cocos2d::CCTouch*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3147c8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto cocos2d::extension::CCControlSlider::sliderBegan(cocos2d::CCPoint p0) -> decltype(sliderBegan(p0)) {
	using FunctionType = decltype(sliderBegan(p0))(*)(cocos2d::extension::CCControlSlider*, cocos2d::CCPoint);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x10398, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto cocos2d::extension::CCControlSlider::sliderEnded(cocos2d::CCPoint p0) -> decltype(sliderEnded(p0)) {
	using FunctionType = decltype(sliderEnded(p0))(*)(cocos2d::extension::CCControlSlider*, cocos2d::CCPoint);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x314d10, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto cocos2d::extension::CCControlSlider::sliderMoved(cocos2d::CCPoint p0) -> decltype(sliderMoved(p0)) {
	using FunctionType = decltype(sliderMoved(p0))(*)(cocos2d::extension::CCControlSlider*, cocos2d::CCPoint);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x314b94, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto cocos2d::extension::CCControlSlider::valueForLocation(cocos2d::CCPoint p0) -> decltype(valueForLocation(p0)) {
	using FunctionType = decltype(valueForLocation(p0))(*)(cocos2d::extension::CCControlSlider*, cocos2d::CCPoint);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xf7158, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}
