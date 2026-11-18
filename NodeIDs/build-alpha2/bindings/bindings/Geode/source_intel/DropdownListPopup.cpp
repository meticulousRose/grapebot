
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/DropdownListPopup.hpp>
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

auto DropdownListPopup::ccTouchBegan(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) -> decltype(ccTouchBegan(touch, event)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&DropdownListPopup::ccTouchBegan), this);
	using FunctionType = decltype(ccTouchBegan(touch, event))(*)(DropdownListPopup*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8db890, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, touch, event);
}

auto DropdownListPopup::ccTouchMoved(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) -> decltype(ccTouchMoved(touch, event)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&DropdownListPopup::ccTouchMoved), this);
	using FunctionType = decltype(ccTouchMoved(touch, event))(*)(DropdownListPopup*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8db9e0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, touch, event);
}

auto DropdownListPopup::ccTouchEnded(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) -> decltype(ccTouchEnded(touch, event)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&DropdownListPopup::ccTouchEnded), this);
	using FunctionType = decltype(ccTouchEnded(touch, event))(*)(DropdownListPopup*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8dbb60, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, touch, event);
}

auto DropdownListPopup::ccTouchCancelled(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) -> decltype(ccTouchCancelled(touch, event)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&DropdownListPopup::ccTouchCancelled), this);
	using FunctionType = decltype(ccTouchCancelled(touch, event))(*)(DropdownListPopup*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8dbc80, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, touch, event);
}

auto DropdownListPopup::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&DropdownListPopup::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(DropdownListPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8dbd60, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}
