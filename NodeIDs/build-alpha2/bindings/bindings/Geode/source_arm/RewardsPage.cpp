
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/RewardsPage.hpp>
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

auto RewardsPage::create() -> decltype(create()) {
	using FunctionType = decltype(create())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1aea8c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto RewardsPage::getRewardFrame(int type, int state) -> decltype(getRewardFrame(type, state)) {
	using FunctionType = decltype(getRewardFrame(type, state))(*)(int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1af938, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(type, state);
}

auto RewardsPage::init() -> decltype(init()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&RewardsPage::init), this);
	using FunctionType = decltype(init())(*)(RewardsPage*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1aec10, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto RewardsPage::registerWithTouchDispatcher() -> decltype(registerWithTouchDispatcher()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&RewardsPage::registerWithTouchDispatcher), this);
	using FunctionType = decltype(registerWithTouchDispatcher())(*)(RewardsPage*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1b04c8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto RewardsPage::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&RewardsPage::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(RewardsPage*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1b044c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto RewardsPage::show() -> decltype(show()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&RewardsPage::show), this);
	using FunctionType = decltype(show())(*)(RewardsPage*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1b02f0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto RewardsPage::FLAlert_Clicked(FLAlertLayer* layer, bool btn2) -> decltype(FLAlert_Clicked(layer, btn2)) {
	auto self = addresser::thunkAdjust(Resolve<FLAlertLayer*, bool>::func(&RewardsPage::FLAlert_Clicked), this);
	using FunctionType = decltype(FLAlert_Clicked(layer, btn2))(*)(RewardsPage*, FLAlertLayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1b0444, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, layer, btn2);
}

auto RewardsPage::rewardsStatusFinished(int type) -> decltype(rewardsStatusFinished(type)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&RewardsPage::rewardsStatusFinished), this);
	using FunctionType = decltype(rewardsStatusFinished(type))(*)(RewardsPage*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1aff7c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, type);
}

auto RewardsPage::rewardsStatusFailed() -> decltype(rewardsStatusFailed()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&RewardsPage::rewardsStatusFailed), this);
	using FunctionType = decltype(rewardsStatusFailed())(*)(RewardsPage*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1b01ec, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto RewardsPage::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	using FunctionType = decltype(onClose(sender))(*)(RewardsPage*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1af8d0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto RewardsPage::onFreeStuff(cocos2d::CCObject* sender) -> decltype(onFreeStuff(sender)) {
	using FunctionType = decltype(onFreeStuff(sender))(*)(RewardsPage*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1af90c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto RewardsPage::onReward(cocos2d::CCObject* sender) -> decltype(onReward(sender)) {
	using FunctionType = decltype(onReward(sender))(*)(RewardsPage*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1af960, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto RewardsPage::tryGetRewards() -> decltype(tryGetRewards()) {
	using FunctionType = decltype(tryGetRewards())(*)(RewardsPage*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1b0260, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto RewardsPage::unlockLayerClosed(RewardUnlockLayer* layer) -> decltype(unlockLayerClosed(layer)) {
	using FunctionType = decltype(unlockLayerClosed(layer))(*)(RewardsPage*, RewardUnlockLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1b0500, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, layer);
}

auto RewardsPage::updateTimers(float dt) -> decltype(updateTimers(dt)) {
	using FunctionType = decltype(updateTimers(dt))(*)(RewardsPage*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1afa80, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, dt);
}
