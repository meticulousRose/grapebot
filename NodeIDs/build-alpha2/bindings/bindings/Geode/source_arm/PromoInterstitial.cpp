
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/PromoInterstitial.hpp>
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

auto PromoInterstitial::ccTouchBegan(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) -> decltype(ccTouchBegan(touch, event)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&PromoInterstitial::ccTouchBegan), this);
	using FunctionType = decltype(ccTouchBegan(touch, event))(*)(PromoInterstitial*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2613c4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, touch, event);
}

auto PromoInterstitial::ccTouchMoved(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) -> decltype(ccTouchMoved(touch, event)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&PromoInterstitial::ccTouchMoved), this);
	using FunctionType = decltype(ccTouchMoved(touch, event))(*)(PromoInterstitial*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x26162c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, touch, event);
}

auto PromoInterstitial::ccTouchEnded(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) -> decltype(ccTouchEnded(touch, event)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&PromoInterstitial::ccTouchEnded), this);
	using FunctionType = decltype(ccTouchEnded(touch, event))(*)(PromoInterstitial*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2614f4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, touch, event);
}

auto PromoInterstitial::ccTouchCancelled(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) -> decltype(ccTouchCancelled(touch, event)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&PromoInterstitial::ccTouchCancelled), this);
	using FunctionType = decltype(ccTouchCancelled(touch, event))(*)(PromoInterstitial*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2615b4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, touch, event);
}

auto PromoInterstitial::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&PromoInterstitial::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(PromoInterstitial*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x261230, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto PromoInterstitial::show() -> decltype(show()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&PromoInterstitial::show), this);
	using FunctionType = decltype(show())(*)(PromoInterstitial*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x261204, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto PromoInterstitial::init(bool fullVersion) -> decltype(init(fullVersion)) {
	using FunctionType = decltype(init(fullVersion))(*)(PromoInterstitial*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x260f84, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, fullVersion);
}

auto PromoInterstitial::onClick(cocos2d::CCObject* sender) -> decltype(onClick(sender)) {
	using FunctionType = decltype(onClick(sender))(*)(PromoInterstitial*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x261348, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto PromoInterstitial::setup() -> decltype(setup()) {
	using FunctionType = decltype(setup())(*)(PromoInterstitial*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x260fd8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}
