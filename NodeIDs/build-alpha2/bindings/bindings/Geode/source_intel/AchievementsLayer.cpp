
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/AchievementsLayer.hpp>
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

auto AchievementsLayer::create() -> decltype(create()) {
	using FunctionType = decltype(create())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x35c580, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto AchievementsLayer::keyDown(cocos2d::enumKeyCodes key, double timestamp) -> decltype(keyDown(key, timestamp)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::enumKeyCodes, double>::func(&AchievementsLayer::keyDown), this);
	using FunctionType = decltype(keyDown(key, timestamp))(*)(AchievementsLayer*, cocos2d::enumKeyCodes, double);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x35cb30, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, key, timestamp);
}

auto AchievementsLayer::customSetup() -> decltype(customSetup()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&AchievementsLayer::customSetup), this);
	using FunctionType = decltype(customSetup())(*)(AchievementsLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x35c670, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto AchievementsLayer::loadPage(int page) -> decltype(loadPage(page)) {
	using FunctionType = decltype(loadPage(page))(*)(AchievementsLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x35c950, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, page);
}

auto AchievementsLayer::onNextPage(cocos2d::CCObject* sender) -> decltype(onNextPage(sender)) {
	using FunctionType = decltype(onNextPage(sender))(*)(AchievementsLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x35c930, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto AchievementsLayer::onPrevPage(cocos2d::CCObject* sender) -> decltype(onPrevPage(sender)) {
	using FunctionType = decltype(onPrevPage(sender))(*)(AchievementsLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x35c910, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto AchievementsLayer::setupLevelBrowser(cocos2d::CCArray* arr) -> decltype(setupLevelBrowser(arr)) {
	using FunctionType = decltype(setupLevelBrowser(arr))(*)(AchievementsLayer*, cocos2d::CCArray*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x35cc60, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, arr);
}

auto AchievementsLayer::setupPageInfo(int itemCount, int pageStartIdx, int pageEndIdx) -> decltype(setupPageInfo(itemCount, pageStartIdx, pageEndIdx)) {
	using FunctionType = decltype(setupPageInfo(itemCount, pageStartIdx, pageEndIdx))(*)(AchievementsLayer*, int, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x35cce0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, itemCount, pageStartIdx, pageEndIdx);
}
