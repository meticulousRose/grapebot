
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/mapping/CCControlSaturationBrightnessPicker.hpp>
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

auto cocos2d::extension::CCControlSaturationBrightnessPicker::create(cocos2d::CCNode* p0, cocos2d::CCPoint p1) -> decltype(create(p0, p1)) {
	using FunctionType = decltype(create(p0, p1))(*)(cocos2d::CCNode*, cocos2d::CCPoint);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2e1540, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1);
}

auto cocos2d::extension::CCControlSaturationBrightnessPicker::ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1) -> decltype(ccTouchBegan(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&cocos2d::extension::CCControlSaturationBrightnessPicker::ccTouchBegan), this);
	using FunctionType = decltype(ccTouchBegan(p0, p1))(*)(cocos2d::extension::CCControlSaturationBrightnessPicker*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2e1a2c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto cocos2d::extension::CCControlSaturationBrightnessPicker::ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1) -> decltype(ccTouchMoved(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&cocos2d::extension::CCControlSaturationBrightnessPicker::ccTouchMoved), this);
	using FunctionType = decltype(ccTouchMoved(p0, p1))(*)(cocos2d::extension::CCControlSaturationBrightnessPicker*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2e1b30, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto cocos2d::extension::CCControlSaturationBrightnessPicker::setEnabled(bool p0) -> decltype(setEnabled(p0)) {
	auto self = addresser::thunkAdjust(Resolve<bool>::func(&cocos2d::extension::CCControlSaturationBrightnessPicker::setEnabled), this);
	using FunctionType = decltype(setEnabled(p0))(*)(cocos2d::extension::CCControlSaturationBrightnessPicker*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2e1630, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto cocos2d::extension::CCControlSaturationBrightnessPicker::initWithTargetAndPos(cocos2d::CCNode* p0, cocos2d::CCPoint p1) -> decltype(initWithTargetAndPos(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCNode*, cocos2d::CCPoint>::func(&cocos2d::extension::CCControlSaturationBrightnessPicker::initWithTargetAndPos), this);
	using FunctionType = decltype(initWithTargetAndPos(p0, p1))(*)(cocos2d::extension::CCControlSaturationBrightnessPicker*, cocos2d::CCNode*, cocos2d::CCPoint);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2e13c4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto cocos2d::extension::CCControlSaturationBrightnessPicker::updateWithHSV(cocos2d::extension::HSV p0) -> decltype(updateWithHSV(p0)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::extension::HSV>::func(&cocos2d::extension::CCControlSaturationBrightnessPicker::updateWithHSV), this);
	using FunctionType = decltype(updateWithHSV(p0))(*)(cocos2d::extension::CCControlSaturationBrightnessPicker*, cocos2d::extension::HSV);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2e1680, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto cocos2d::extension::CCControlSaturationBrightnessPicker::updateDraggerWithHSV(cocos2d::extension::HSV p0) -> decltype(updateDraggerWithHSV(p0)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::extension::HSV>::func(&cocos2d::extension::CCControlSaturationBrightnessPicker::updateDraggerWithHSV), this);
	using FunctionType = decltype(updateDraggerWithHSV(p0))(*)(cocos2d::extension::CCControlSaturationBrightnessPicker*, cocos2d::extension::HSV);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2e16f4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto cocos2d::extension::CCControlSaturationBrightnessPicker::registerWithTouchDispatcher() -> decltype(registerWithTouchDispatcher()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&cocos2d::extension::CCControlSaturationBrightnessPicker::registerWithTouchDispatcher), this);
	using FunctionType = decltype(registerWithTouchDispatcher())(*)(cocos2d::extension::CCControlSaturationBrightnessPicker*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2e19f4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto cocos2d::extension::CCControlSaturationBrightnessPicker::checkSliderPosition(cocos2d::CCPoint p0) -> decltype(checkSliderPosition(p0)) {
	using FunctionType = decltype(checkSliderPosition(p0))(*)(cocos2d::extension::CCControlSaturationBrightnessPicker*, cocos2d::CCPoint);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2e1910, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto cocos2d::extension::CCControlSaturationBrightnessPicker::updateSliderPosition(cocos2d::CCPoint p0) -> decltype(updateSliderPosition(p0)) {
	using FunctionType = decltype(updateSliderPosition(p0))(*)(cocos2d::extension::CCControlSaturationBrightnessPicker*, cocos2d::CCPoint);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2e177c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}
