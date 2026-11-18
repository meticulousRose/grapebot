
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/CreatorLayer.hpp>
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

auto CreatorLayer::create() -> decltype(create()) {
	using FunctionType = decltype(create())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3de88c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto CreatorLayer::scene() -> decltype(scene()) {
	using FunctionType = decltype(scene())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2272fc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto CreatorLayer::init() -> decltype(init()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&CreatorLayer::init), this);
	using FunctionType = decltype(init())(*)(CreatorLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2274bc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto CreatorLayer::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&CreatorLayer::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(CreatorLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x229c2c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto CreatorLayer::sceneWillResume() -> decltype(sceneWillResume()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&CreatorLayer::sceneWillResume), this);
	using FunctionType = decltype(sceneWillResume())(*)(CreatorLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x229b38, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto CreatorLayer::dialogClosed(DialogLayer* layer) -> decltype(dialogClosed(layer)) {
	auto self = addresser::thunkAdjust(Resolve<DialogLayer*>::func(&CreatorLayer::dialogClosed), this);
	using FunctionType = decltype(dialogClosed(layer))(*)(CreatorLayer*, DialogLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x229a34, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, layer);
}

auto CreatorLayer::contentStatusFinished() -> decltype(contentStatusFinished()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&CreatorLayer::contentStatusFinished), this);
	using FunctionType = decltype(contentStatusFinished())(*)(CreatorLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x229a28, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto CreatorLayer::canPlayOnlineLevels() -> decltype(canPlayOnlineLevels()) {
	using FunctionType = decltype(canPlayOnlineLevels())(*)(CreatorLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2299d4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto CreatorLayer::onAdventureMap(cocos2d::CCObject* sender) -> decltype(onAdventureMap(sender)) {
	using FunctionType = decltype(onAdventureMap(sender))(*)(CreatorLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x228790, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CreatorLayer::onBack(cocos2d::CCObject* sender) -> decltype(onBack(sender)) {
	using FunctionType = decltype(onBack(sender))(*)(CreatorLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x229974, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CreatorLayer::onChallenge(cocos2d::CCObject* sender) -> decltype(onChallenge(sender)) {
	using FunctionType = decltype(onChallenge(sender))(*)(CreatorLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x228824, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CreatorLayer::onFeaturedLevels(cocos2d::CCObject* sender) -> decltype(onFeaturedLevels(sender)) {
	using FunctionType = decltype(onFeaturedLevels(sender))(*)(CreatorLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2289c0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CreatorLayer::onLeaderboards(cocos2d::CCObject* sender) -> decltype(onLeaderboards(sender)) {
	using FunctionType = decltype(onLeaderboards(sender))(*)(CreatorLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x228388, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CreatorLayer::onMapPacks(cocos2d::CCObject* sender) -> decltype(onMapPacks(sender)) {
	using FunctionType = decltype(onMapPacks(sender))(*)(CreatorLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x228a88, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CreatorLayer::onMultiplayer(cocos2d::CCObject* sender) -> decltype(onMultiplayer(sender)) {
	using FunctionType = decltype(onMultiplayer(sender))(*)(CreatorLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2283d0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CreatorLayer::onMyLevels(cocos2d::CCObject* sender) -> decltype(onMyLevels(sender)) {
	using FunctionType = decltype(onMyLevels(sender))(*)(CreatorLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x228b10, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CreatorLayer::onOnlineLevels(cocos2d::CCObject* sender) -> decltype(onOnlineLevels(sender)) {
	using FunctionType = decltype(onOnlineLevels(sender))(*)(CreatorLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x228ad4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CreatorLayer::onOnlyFullVersion(cocos2d::CCObject* sender) -> decltype(onOnlyFullVersion(sender)) {
	using FunctionType = decltype(onOnlyFullVersion(sender))(*)(CreatorLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x228bec, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CreatorLayer::onPaths(cocos2d::CCObject* sender) -> decltype(onPaths(sender)) {
	using FunctionType = decltype(onPaths(sender))(*)(CreatorLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x228a0c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CreatorLayer::onSecretVault(cocos2d::CCObject* sender) -> decltype(onSecretVault(sender)) {
	using FunctionType = decltype(onSecretVault(sender))(*)(CreatorLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x229194, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CreatorLayer::onTopLists(cocos2d::CCObject* sender) -> decltype(onTopLists(sender)) {
	using FunctionType = decltype(onTopLists(sender))(*)(CreatorLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x228a28, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CreatorLayer::onTreasureRoom(cocos2d::CCObject* sender) -> decltype(onTreasureRoom(sender)) {
	using FunctionType = decltype(onTreasureRoom(sender))(*)(CreatorLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2293e0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}
