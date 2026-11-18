
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/DeathTrackerPopup.hpp>
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

auto DeathTrackerPopup::create(GJGameLevel* p0) -> decltype(create(p0)) {
	using FunctionType = decltype(create(p0))(*)(GJGameLevel*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8ca8f0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0);
}

auto DeathTrackerPopup::ccTouchBegan(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) -> decltype(ccTouchBegan(touch, event)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&DeathTrackerPopup::ccTouchBegan), this);
	using FunctionType = decltype(ccTouchBegan(touch, event))(*)(DeathTrackerPopup*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8d8230, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, touch, event);
}

auto DeathTrackerPopup::ccTouchMoved(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) -> decltype(ccTouchMoved(touch, event)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&DeathTrackerPopup::ccTouchMoved), this);
	using FunctionType = decltype(ccTouchMoved(touch, event))(*)(DeathTrackerPopup*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8d83a0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, touch, event);
}

auto DeathTrackerPopup::ccTouchEnded(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) -> decltype(ccTouchEnded(touch, event)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&DeathTrackerPopup::ccTouchEnded), this);
	using FunctionType = decltype(ccTouchEnded(touch, event))(*)(DeathTrackerPopup*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8d84d0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, touch, event);
}

auto DeathTrackerPopup::ccTouchCancelled(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) -> decltype(ccTouchCancelled(touch, event)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&DeathTrackerPopup::ccTouchCancelled), this);
	using FunctionType = decltype(ccTouchCancelled(touch, event))(*)(DeathTrackerPopup*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8d8600, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, touch, event);
}

auto DeathTrackerPopup::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&DeathTrackerPopup::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(DeathTrackerPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8d8100, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto DeathTrackerPopup::keyDown(cocos2d::enumKeyCodes key, double timestamp) -> decltype(keyDown(key, timestamp)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::enumKeyCodes, double>::func(&DeathTrackerPopup::keyDown), this);
	using FunctionType = decltype(keyDown(key, timestamp))(*)(DeathTrackerPopup*, cocos2d::enumKeyCodes, double);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8d8130, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, key, timestamp);
}

auto DeathTrackerPopup::show() -> decltype(show()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&DeathTrackerPopup::show), this);
	using FunctionType = decltype(show())(*)(DeathTrackerPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8d8080, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto DeathTrackerPopup::setIDPopupClosed(SetIDPopup* p0, int p1) -> decltype(setIDPopupClosed(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<SetIDPopup*, int>::func(&DeathTrackerPopup::setIDPopupClosed), this);
	using FunctionType = decltype(setIDPopupClosed(p0, p1))(*)(DeathTrackerPopup*, SetIDPopup*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8d7ff0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto DeathTrackerPopup::virtualRowCount() -> decltype(virtualRowCount()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&DeathTrackerPopup::virtualRowCount), this);
	using FunctionType = decltype(virtualRowCount())(*)(DeathTrackerPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8d73d0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto DeathTrackerPopup::virtualRowHeight(int p0) -> decltype(virtualRowHeight(p0)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&DeathTrackerPopup::virtualRowHeight), this);
	using FunctionType = decltype(virtualRowHeight(p0))(*)(DeathTrackerPopup*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8d7410, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto DeathTrackerPopup::mountVirtualRow(int p0, cocos2d::CCNode* p1, cocos2d::CCMenu* p2) -> decltype(mountVirtualRow(p0, p1, p2)) {
	auto self = addresser::thunkAdjust(Resolve<int, cocos2d::CCNode*, cocos2d::CCMenu*>::func(&DeathTrackerPopup::mountVirtualRow), this);
	using FunctionType = decltype(mountVirtualRow(p0, p1, p2))(*)(DeathTrackerPopup*, int, cocos2d::CCNode*, cocos2d::CCMenu*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8d7450, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1, p2);
}
