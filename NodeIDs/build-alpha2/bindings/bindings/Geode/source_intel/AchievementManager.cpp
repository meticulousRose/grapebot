
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/AchievementManager.hpp>
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

auto AchievementManager::sharedState() -> decltype(sharedState()) {
	using FunctionType = decltype(sharedState())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x80a730, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto AchievementManager::init() -> decltype(init()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&AchievementManager::init), this);
	using FunctionType = decltype(init())(*)(AchievementManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x80a840, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto AchievementManager::achievementForUnlock(int id, UnlockType type) -> decltype(achievementForUnlock(id, type)) {
	using FunctionType = decltype(achievementForUnlock(id, type))(*)(AchievementManager*, int, UnlockType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x864530, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id, type);
}

auto AchievementManager::addAchievement(std::string identifier, std::string title, std::string achievedDescription, std::string unachievedDescription, std::string icon, int limits) -> decltype(addAchievement(identifier, title, achievedDescription, unachievedDescription, icon, limits)) {
	using FunctionType = decltype(addAchievement(identifier, title, achievedDescription, unachievedDescription, icon, limits))(*)(AchievementManager*, std::string, std::string, std::string, std::string, std::string, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x863d20, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, identifier, title, achievedDescription, unachievedDescription, icon, limits);
}

auto AchievementManager::addManualAchievements() -> decltype(addManualAchievements()) {
	using FunctionType = decltype(addManualAchievements())(*)(AchievementManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x80a8d0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto AchievementManager::areAchievementsEarned(cocos2d::CCArray* achievements) -> decltype(areAchievementsEarned(achievements)) {
	using FunctionType = decltype(areAchievementsEarned(achievements))(*)(AchievementManager*, cocos2d::CCArray*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x864170, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, achievements);
}

auto AchievementManager::checkAchFromUnlock(char const* id) -> decltype(checkAchFromUnlock(id)) {
	using FunctionType = decltype(checkAchFromUnlock(id))(*)(AchievementManager*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8640a0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto AchievementManager::dataLoaded(DS_Dictionary* dict) -> decltype(dataLoaded(dict)) {
	using FunctionType = decltype(dataLoaded(dict))(*)(AchievementManager*, DS_Dictionary*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x864000, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, dict);
}

auto AchievementManager::encodeDataTo(DS_Dictionary* dict) -> decltype(encodeDataTo(dict)) {
	using FunctionType = decltype(encodeDataTo(dict))(*)(AchievementManager*, DS_Dictionary*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x864070, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, dict);
}

auto AchievementManager::firstSetup() -> decltype(firstSetup()) {
	using FunctionType = decltype(firstSetup())(*)(AchievementManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x863fb0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto AchievementManager::getAchievementRewardDict() -> decltype(getAchievementRewardDict()) {
	using FunctionType = decltype(getAchievementRewardDict())(*)(AchievementManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x864f90, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto AchievementManager::getAchievementsWithID(char const* id) -> decltype(getAchievementsWithID(id)) {
	using FunctionType = decltype(getAchievementsWithID(id))(*)(AchievementManager*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x864330, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto AchievementManager::getAllAchievements() -> decltype(getAllAchievements()) {
	using FunctionType = decltype(getAllAchievements())(*)(AchievementManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x864320, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto AchievementManager::getAllAchievementsSorted(bool available) -> decltype(getAllAchievementsSorted(available)) {
	using FunctionType = decltype(getAllAchievementsSorted(available))(*)(AchievementManager*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x68140, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, available);
}

auto AchievementManager::isAchievementAvailable(std::string id) -> decltype(isAchievementAvailable(id)) {
	using FunctionType = decltype(isAchievementAvailable(id))(*)(AchievementManager*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x864410, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto AchievementManager::isAchievementEarned(char const* ach) -> decltype(isAchievementEarned(ach)) {
	using FunctionType = decltype(isAchievementEarned(ach))(*)(AchievementManager*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8641e0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, ach);
}

auto AchievementManager::limitForAchievement(std::string id) -> decltype(limitForAchievement(id)) {
	using FunctionType = decltype(limitForAchievement(id))(*)(AchievementManager*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x864490, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto AchievementManager::notifyAchievement(char const* title, char const* description, char const* icon) -> decltype(notifyAchievement(title, description, icon)) {
	using FunctionType = decltype(notifyAchievement(title, description, icon))(*)(AchievementManager*, char const*, char const*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x864cb0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, title, description, icon);
}

auto AchievementManager::notifyAchievementWithID(char const* id) -> decltype(notifyAchievementWithID(id)) {
	using FunctionType = decltype(notifyAchievementWithID(id))(*)(AchievementManager*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x864af0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto AchievementManager::percentageForCount(int count, int total) -> decltype(percentageForCount(count, total)) {
	using FunctionType = decltype(percentageForCount(count, total))(*)(AchievementManager*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8642f0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, count, total);
}

auto AchievementManager::percentForAchievement(char const* id) -> decltype(percentForAchievement(id)) {
	using FunctionType = decltype(percentForAchievement(id))(*)(AchievementManager*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x864200, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto AchievementManager::reportAchievementWithID(char const* id, int percent, bool dontNotify) -> decltype(reportAchievementWithID(id, percent, dontNotify)) {
	using FunctionType = decltype(reportAchievementWithID(id, percent, dontNotify))(*)(AchievementManager*, char const*, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x864de0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id, percent, dontNotify);
}

auto AchievementManager::reportPlatformAchievementWithID(char const* id, int percent) -> decltype(reportPlatformAchievementWithID(id, percent)) {
	using FunctionType = decltype(reportPlatformAchievementWithID(id, percent))(*)(AchievementManager*, char const*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x864f60, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id, percent);
}

auto AchievementManager::resetAchievement(char const* id) -> decltype(resetAchievement(id)) {
	using FunctionType = decltype(resetAchievement(id))(*)(AchievementManager*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x864d00, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto AchievementManager::resetAchievements() -> decltype(resetAchievements()) {
	using FunctionType = decltype(resetAchievements())(*)(AchievementManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x864f70, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto AchievementManager::setup() -> decltype(setup()) {
	using FunctionType = decltype(setup())(*)(AchievementManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x864090, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto AchievementManager::storeAchievementUnlocks() -> decltype(storeAchievementUnlocks()) {
	using FunctionType = decltype(storeAchievementUnlocks())(*)(AchievementManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8638b0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}
