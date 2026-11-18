
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/ShareLevelLayer.hpp>
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

auto ShareLevelLayer::create(GJGameLevel* level) -> decltype(create(level)) {
	using FunctionType = decltype(create(level))(*)(GJGameLevel*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x213698, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(level);
}

auto ShareLevelLayer::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&ShareLevelLayer::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(ShareLevelLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x215528, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto ShareLevelLayer::getStarsButton(int btnID, cocos2d::SEL_MenuHandler selector, cocos2d::CCMenu* menu, float scale) -> decltype(getStarsButton(btnID, selector, menu, scale)) {
	using FunctionType = decltype(getStarsButton(btnID, selector, menu, scale))(*)(ShareLevelLayer*, int, cocos2d::SEL_MenuHandler, cocos2d::CCMenu*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x214e4c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, btnID, selector, menu, scale);
}

auto ShareLevelLayer::init(GJGameLevel* level) -> decltype(init(level)) {
	using FunctionType = decltype(init(level))(*)(ShareLevelLayer*, GJGameLevel*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x21381c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, level);
}

auto ShareLevelLayer::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	using FunctionType = decltype(onClose(sender))(*)(ShareLevelLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x214b18, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto ShareLevelLayer::onShare(cocos2d::CCObject* sender) -> decltype(onShare(sender)) {
	using FunctionType = decltype(onShare(sender))(*)(ShareLevelLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x214b54, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto ShareLevelLayer::selectRating(cocos2d::CCObject* sender) -> decltype(selectRating(sender)) {
	using FunctionType = decltype(selectRating(sender))(*)(ShareLevelLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x214f14, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto ShareLevelLayer::setupStars() -> decltype(setupStars()) {
	using FunctionType = decltype(setupStars())(*)(ShareLevelLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2143cc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}
