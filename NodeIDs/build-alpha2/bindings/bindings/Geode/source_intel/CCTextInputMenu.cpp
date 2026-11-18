
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/CCTextInputMenu.hpp>
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

auto CCTextInputMenu::ccTouchBegan(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) -> decltype(ccTouchBegan(touch, event)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&CCTextInputMenu::ccTouchBegan), this);
	using FunctionType = decltype(ccTouchBegan(touch, event))(*)(CCTextInputMenu*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x78e00, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, touch, event);
}

auto CCTextInputMenu::registerWithTouchDispatcher() -> decltype(registerWithTouchDispatcher()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&CCTextInputMenu::registerWithTouchDispatcher), this);
	using FunctionType = decltype(registerWithTouchDispatcher())(*)(CCTextInputMenu*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x78da0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto CCTextInputMenu::rightClick(float p0, float p1) -> decltype(rightClick(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<float, float>::func(&CCTextInputMenu::rightClick), this);
	using FunctionType = decltype(rightClick(p0, p1))(*)(CCTextInputMenu*, float, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x78ea0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}
