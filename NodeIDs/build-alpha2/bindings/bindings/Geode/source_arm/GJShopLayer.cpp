
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/GJShopLayer.hpp>
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

auto GJShopLayer::create(ShopType type) -> decltype(create(type)) {
	using FunctionType = decltype(create(type))(*)(ShopType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2a1348, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(type);
}

auto GJShopLayer::scene(ShopType type) -> decltype(scene(type)) {
	using FunctionType = decltype(scene(type))(*)(ShopType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2a1244, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(type);
}

auto GJShopLayer::onExit() -> decltype(onExit()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GJShopLayer::onExit), this);
	using FunctionType = decltype(onExit())(*)(GJShopLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2a3000, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GJShopLayer::ccTouchBegan(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) -> decltype(ccTouchBegan(touch, event)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&GJShopLayer::ccTouchBegan), this);
	using FunctionType = decltype(ccTouchBegan(touch, event))(*)(GJShopLayer*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2a51d4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, touch, event);
}

auto GJShopLayer::ccTouchMoved(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) -> decltype(ccTouchMoved(touch, event)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&GJShopLayer::ccTouchMoved), this);
	using FunctionType = decltype(ccTouchMoved(touch, event))(*)(GJShopLayer*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2a5584, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, touch, event);
}

auto GJShopLayer::ccTouchEnded(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) -> decltype(ccTouchEnded(touch, event)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&GJShopLayer::ccTouchEnded), this);
	using FunctionType = decltype(ccTouchEnded(touch, event))(*)(GJShopLayer*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2a558c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, touch, event);
}

auto GJShopLayer::ccTouchCancelled(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) -> decltype(ccTouchCancelled(touch, event)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&GJShopLayer::ccTouchCancelled), this);
	using FunctionType = decltype(ccTouchCancelled(touch, event))(*)(GJShopLayer*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2a5594, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, touch, event);
}

auto GJShopLayer::registerWithTouchDispatcher() -> decltype(registerWithTouchDispatcher()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GJShopLayer::registerWithTouchDispatcher), this);
	using FunctionType = decltype(registerWithTouchDispatcher())(*)(GJShopLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2a55b0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GJShopLayer::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GJShopLayer::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(GJShopLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2a3f28, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GJShopLayer::didPurchaseItem(GJStoreItem* item) -> decltype(didPurchaseItem(item)) {
	auto self = addresser::thunkAdjust(Resolve<GJStoreItem*>::func(&GJShopLayer::didPurchaseItem), this);
	using FunctionType = decltype(didPurchaseItem(item))(*)(GJShopLayer*, GJStoreItem*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2a38bc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, item);
}

auto GJShopLayer::rewardedVideoFinished() -> decltype(rewardedVideoFinished()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GJShopLayer::rewardedVideoFinished), this);
	using FunctionType = decltype(rewardedVideoFinished())(*)(GJShopLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2a32d8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GJShopLayer::dialogClosed(DialogLayer* layer) -> decltype(dialogClosed(layer)) {
	auto self = addresser::thunkAdjust(Resolve<DialogLayer*>::func(&GJShopLayer::dialogClosed), this);
	using FunctionType = decltype(dialogClosed(layer))(*)(GJShopLayer*, DialogLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2a4ff0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, layer);
}

auto GJShopLayer::exitVideoAdItems() -> decltype(exitVideoAdItems()) {
	using FunctionType = decltype(exitVideoAdItems())(*)(GJShopLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2a3210, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJShopLayer::onBack(cocos2d::CCObject* sender) -> decltype(onBack(sender)) {
	using FunctionType = decltype(onBack(sender))(*)(GJShopLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2a2d18, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto GJShopLayer::onCommunityCredits(cocos2d::CCObject* sender) -> decltype(onCommunityCredits(sender)) {
	using FunctionType = decltype(onCommunityCredits(sender))(*)(GJShopLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2a2ca0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto GJShopLayer::onPlushies(cocos2d::CCObject* sender) -> decltype(onPlushies(sender)) {
	using FunctionType = decltype(onPlushies(sender))(*)(GJShopLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2a2c9c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto GJShopLayer::onSelectItem(cocos2d::CCObject* sender) -> decltype(onSelectItem(sender)) {
	using FunctionType = decltype(onSelectItem(sender))(*)(GJShopLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2a2ecc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto GJShopLayer::onVideoAd(cocos2d::CCObject* sender) -> decltype(onVideoAd(sender)) {
	using FunctionType = decltype(onVideoAd(sender))(*)(GJShopLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2a2ccc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto GJShopLayer::showReactMessage() -> decltype(showReactMessage()) {
	using FunctionType = decltype(showReactMessage())(*)(GJShopLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2a3f34, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJShopLayer::updateCurrencyCounter() -> decltype(updateCurrencyCounter()) {
	using FunctionType = decltype(updateCurrencyCounter())(*)(GJShopLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2a3334, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}
