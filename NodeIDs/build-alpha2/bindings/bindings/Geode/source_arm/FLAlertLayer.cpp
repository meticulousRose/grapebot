#include <Geode/cocos/cocoa/CCObject.h>

#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/FLAlertLayer.hpp>
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

FLAlertLayer::~FLAlertLayer() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(FLAlertLayer*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x3fbed0, tulip::hook::TulipConvention::Default);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) FLAlertLayer(geode::CutoffConstructor, sizeof(FLAlertLayer));
		geode::DestructorLock::addLock(this);
	}
}

auto FLAlertLayer::create(FLAlertLayerProtocol* delegate, char const* title, std::string desc, char const* btn1, char const* btn2, float width) -> decltype(create(delegate, title, desc, btn1, btn2, width)) {
	using FunctionType = decltype(create(delegate, title, desc, btn1, btn2, width))(*)(FLAlertLayerProtocol*, char const*, std::string, char const*, char const*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3fc44c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(delegate, title, desc, btn1, btn2, width);
}

auto FLAlertLayer::create(FLAlertLayerProtocol* delegate, char const* title, std::string desc, char const* btn1, char const* btn2, float width, bool scroll, float height, float textScale) -> decltype(create(delegate, title, desc, btn1, btn2, width, scroll, height, textScale)) {
	using FunctionType = decltype(create(delegate, title, desc, btn1, btn2, width, scroll, height, textScale))(*)(FLAlertLayerProtocol*, char const*, std::string, char const*, char const*, float, bool, float, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3fc270, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(delegate, title, desc, btn1, btn2, width, scroll, height, textScale);
}

auto FLAlertLayer::onEnter() -> decltype(onEnter()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&FLAlertLayer::onEnter), this);
	using FunctionType = decltype(onEnter())(*)(FLAlertLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3fdce8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto FLAlertLayer::ccTouchBegan(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) -> decltype(ccTouchBegan(touch, event)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&FLAlertLayer::ccTouchBegan), this);
	using FunctionType = decltype(ccTouchBegan(touch, event))(*)(FLAlertLayer*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3fd45c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, touch, event);
}

auto FLAlertLayer::ccTouchMoved(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) -> decltype(ccTouchMoved(touch, event)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&FLAlertLayer::ccTouchMoved), this);
	using FunctionType = decltype(ccTouchMoved(touch, event))(*)(FLAlertLayer*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3fd73c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, touch, event);
}

auto FLAlertLayer::ccTouchEnded(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) -> decltype(ccTouchEnded(touch, event)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&FLAlertLayer::ccTouchEnded), this);
	using FunctionType = decltype(ccTouchEnded(touch, event))(*)(FLAlertLayer*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3fd5b4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, touch, event);
}

auto FLAlertLayer::ccTouchCancelled(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) -> decltype(ccTouchCancelled(touch, event)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&FLAlertLayer::ccTouchCancelled), this);
	using FunctionType = decltype(ccTouchCancelled(touch, event))(*)(FLAlertLayer*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3fd678, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, touch, event);
}

auto FLAlertLayer::registerWithTouchDispatcher() -> decltype(registerWithTouchDispatcher()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&FLAlertLayer::registerWithTouchDispatcher), this);
	using FunctionType = decltype(registerWithTouchDispatcher())(*)(FLAlertLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3fd9b8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto FLAlertLayer::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&FLAlertLayer::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(FLAlertLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3fd388, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto FLAlertLayer::keyDown(cocos2d::enumKeyCodes key, double timestamp) -> decltype(keyDown(key, timestamp)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::enumKeyCodes, double>::func(&FLAlertLayer::keyDown), this);
	using FunctionType = decltype(keyDown(key, timestamp))(*)(FLAlertLayer*, cocos2d::enumKeyCodes, double);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3fd278, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, key, timestamp);
}

auto FLAlertLayer::show() -> decltype(show()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&FLAlertLayer::show), this);
	using FunctionType = decltype(show())(*)(FLAlertLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3fd7d4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto FLAlertLayer::textInputShouldOffset(CCTextInputNode* p0, float p1) -> decltype(textInputShouldOffset(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*, float>::func(&FLAlertLayer::textInputShouldOffset), this);
	using FunctionType = decltype(textInputShouldOffset(p0, p1))(*)(FLAlertLayer*, CCTextInputNode*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3fda50, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto FLAlertLayer::textInputReturn(CCTextInputNode* p0) -> decltype(textInputReturn(p0)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&FLAlertLayer::textInputReturn), this);
	using FunctionType = decltype(textInputReturn(p0))(*)(FLAlertLayer*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3fdba8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto FLAlertLayer::init(int opacity) -> decltype(init(opacity)) {
	using FunctionType = decltype(init(opacity))(*)(FLAlertLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3fcf78, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, opacity);
}

auto FLAlertLayer::init(FLAlertLayerProtocol* delegate, char const* title, std::string desc, char const* btn1, char const* btn2, float width, bool scroll, float height, float textScale) -> decltype(init(delegate, title, desc, btn1, btn2, width, scroll, height, textScale)) {
	using FunctionType = decltype(init(delegate, title, desc, btn1, btn2, width, scroll, height, textScale))(*)(FLAlertLayer*, FLAlertLayerProtocol*, char const*, std::string, char const*, char const*, float, bool, float, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3fc534, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, delegate, title, desc, btn1, btn2, width, scroll, height, textScale);
}
