
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/DailyLevelPage.hpp>
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

auto DailyLevelPage::registerWithTouchDispatcher() -> decltype(registerWithTouchDispatcher()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&DailyLevelPage::registerWithTouchDispatcher), this);
	using FunctionType = decltype(registerWithTouchDispatcher())(*)(DailyLevelPage*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1c60a0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto DailyLevelPage::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&DailyLevelPage::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(DailyLevelPage*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1c6004, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto DailyLevelPage::show() -> decltype(show()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&DailyLevelPage::show), this);
	using FunctionType = decltype(show())(*)(DailyLevelPage*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1c5e74, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto DailyLevelPage::FLAlert_Clicked(FLAlertLayer* layer, bool btn2) -> decltype(FLAlert_Clicked(layer, btn2)) {
	auto self = addresser::thunkAdjust(Resolve<FLAlertLayer*, bool>::func(&DailyLevelPage::FLAlert_Clicked), this);
	using FunctionType = decltype(FLAlert_Clicked(layer, btn2))(*)(DailyLevelPage*, FLAlertLayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1c5ffc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, layer, btn2);
}

auto DailyLevelPage::dailyStatusFinished(GJTimedLevelType type) -> decltype(dailyStatusFinished(type)) {
	auto self = addresser::thunkAdjust(Resolve<GJTimedLevelType>::func(&DailyLevelPage::dailyStatusFinished), this);
	using FunctionType = decltype(dailyStatusFinished(type))(*)(DailyLevelPage*, GJTimedLevelType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1c5520, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, type);
}

auto DailyLevelPage::dailyStatusFailed(GJTimedLevelType type, GJErrorCode errorType) -> decltype(dailyStatusFailed(type, errorType)) {
	auto self = addresser::thunkAdjust(Resolve<GJTimedLevelType, GJErrorCode>::func(&DailyLevelPage::dailyStatusFailed), this);
	using FunctionType = decltype(dailyStatusFailed(type, errorType))(*)(DailyLevelPage*, GJTimedLevelType, GJErrorCode);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1c592c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, type, errorType);
}

auto DailyLevelPage::levelDownloadFinished(GJGameLevel* level) -> decltype(levelDownloadFinished(level)) {
	auto self = addresser::thunkAdjust(Resolve<GJGameLevel*>::func(&DailyLevelPage::levelDownloadFinished), this);
	using FunctionType = decltype(levelDownloadFinished(level))(*)(DailyLevelPage*, GJGameLevel*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1c5b98, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, level);
}

auto DailyLevelPage::levelDownloadFailed(int response) -> decltype(levelDownloadFailed(response)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&DailyLevelPage::levelDownloadFailed), this);
	using FunctionType = decltype(levelDownloadFailed(response))(*)(DailyLevelPage*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1c5c54, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, response);
}

auto DailyLevelPage::claimLevelReward(DailyLevelNode* node, GJGameLevel* level, cocos2d::CCPoint position) -> decltype(claimLevelReward(node, level, position)) {
	using FunctionType = decltype(claimLevelReward(node, level, position))(*)(DailyLevelPage*, DailyLevelNode*, GJGameLevel*, cocos2d::CCPoint);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1c60d8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, node, level, position);
}

auto DailyLevelPage::createDailyNode(GJGameLevel* level, bool instant, float delay, bool isNew) -> decltype(createDailyNode(level, instant, delay, isNew)) {
	using FunctionType = decltype(createDailyNode(level, instant, delay, isNew))(*)(DailyLevelPage*, GJGameLevel*, bool, float, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1c533c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, level, instant, delay, isNew);
}

auto DailyLevelPage::downloadAndCreateNode() -> decltype(downloadAndCreateNode()) {
	using FunctionType = decltype(downloadAndCreateNode())(*)(DailyLevelPage*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x295c20, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto DailyLevelPage::exitDailyNode(DailyLevelNode* node, float delay) -> decltype(exitDailyNode(node, delay)) {
	using FunctionType = decltype(exitDailyNode(node, delay))(*)(DailyLevelPage*, DailyLevelNode*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1c578c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, node, delay);
}

auto DailyLevelPage::getDailyTime() -> decltype(getDailyTime()) {
	using FunctionType = decltype(getDailyTime())(*)(DailyLevelPage*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1c5e00, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto DailyLevelPage::getDailyTimeString(int timeLeft) -> decltype(getDailyTimeString(timeLeft)) {
	using FunctionType = decltype(getDailyTimeString(timeLeft))(*)(DailyLevelPage*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1c4ac4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, timeLeft);
}

auto DailyLevelPage::init(GJTimedLevelType type) -> decltype(init(type)) {
	using FunctionType = decltype(init(type))(*)(DailyLevelPage*, GJTimedLevelType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1c3b34, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, type);
}

auto DailyLevelPage::refreshDailyPage() -> decltype(refreshDailyPage()) {
	using FunctionType = decltype(refreshDailyPage())(*)(DailyLevelPage*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1c6384, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto DailyLevelPage::skipDailyLevel(DailyLevelNode* node, GJGameLevel* level) -> decltype(skipDailyLevel(node, level)) {
	using FunctionType = decltype(skipDailyLevel(node, level))(*)(DailyLevelPage*, DailyLevelNode*, GJGameLevel*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1c6290, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, node, level);
}

auto DailyLevelPage::tryGetDailyStatus() -> decltype(tryGetDailyStatus()) {
	using FunctionType = decltype(tryGetDailyStatus())(*)(DailyLevelPage*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1c5b28, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto DailyLevelPage::updateTimers(float dt) -> decltype(updateTimers(dt)) {
	using FunctionType = decltype(updateTimers(dt))(*)(DailyLevelPage*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1c50e4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, dt);
}
