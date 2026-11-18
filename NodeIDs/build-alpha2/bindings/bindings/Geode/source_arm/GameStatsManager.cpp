
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/GameStatsManager.hpp>
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

auto GameStatsManager::sharedState() -> decltype(sharedState()) {
	using FunctionType = decltype(sharedState())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1aebc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto GameStatsManager::dailyRecallPrice(int p0) -> decltype(dailyRecallPrice(p0)) {
	using FunctionType = decltype(dailyRecallPrice(p0))(*)(int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x34344, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0);
}

auto GameStatsManager::init() -> decltype(init()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GameStatsManager::init), this);
	using FunctionType = decltype(init())(*)(GameStatsManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1b200, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GameStatsManager::accountIDForIcon(int id, UnlockType type) -> decltype(accountIDForIcon(id, type)) {
	using FunctionType = decltype(accountIDForIcon(id, type))(*)(GameStatsManager*, int, UnlockType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2a8d08, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id, type);
}

auto GameStatsManager::addSimpleSpecialChestReward(std::string key, UnlockType type, int id, bool unused) -> decltype(addSimpleSpecialChestReward(key, type, id, unused)) {
	using FunctionType = decltype(addSimpleSpecialChestReward(key, type, id, unused))(*)(GameStatsManager*, std::string, UnlockType, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x37a34, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, key, type, id, unused);
}

auto GameStatsManager::addSpecialRewardDescription(std::string key, std::string description) -> decltype(addSpecialRewardDescription(key, description)) {
	using FunctionType = decltype(addSpecialRewardDescription(key, description))(*)(GameStatsManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x379e8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, key, description);
}

auto GameStatsManager::addStoreItem(int index, int id, int unlockType, int price, ShopType shopType) -> decltype(addStoreItem(index, id, unlockType, price, shopType)) {
	using FunctionType = decltype(addStoreItem(index, id, unlockType, price, shopType))(*)(GameStatsManager*, int, int, int, int, ShopType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x260f0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, index, id, unlockType, price, shopType);
}

auto GameStatsManager::areChallengesLoaded() -> decltype(areChallengesLoaded()) {
	using FunctionType = decltype(areChallengesLoaded())(*)(GameStatsManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x32658, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameStatsManager::areRewardsLoaded() -> decltype(areRewardsLoaded()) {
	using FunctionType = decltype(areRewardsLoaded())(*)(GameStatsManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x31b08, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameStatsManager::awardCurrencyForLevel(GJGameLevel* level) -> decltype(awardCurrencyForLevel(level)) {
	using FunctionType = decltype(awardCurrencyForLevel(level))(*)(GameStatsManager*, GJGameLevel*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x30738, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, level);
}

auto GameStatsManager::awardDiamondsForLevel(GJGameLevel* level) -> decltype(awardDiamondsForLevel(level)) {
	using FunctionType = decltype(awardDiamondsForLevel(level))(*)(GameStatsManager*, GJGameLevel*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x31020, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, level);
}

auto GameStatsManager::awardOldSpecialStats() -> decltype(awardOldSpecialStats()) {
	using FunctionType = decltype(awardOldSpecialStats())(*)(GameStatsManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x35774, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameStatsManager::awardSecretKey() -> decltype(awardSecretKey()) {
	using FunctionType = decltype(awardSecretKey())(*)(GameStatsManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4d03c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameStatsManager::canItemBeUnlocked(int id, UnlockType type) -> decltype(canItemBeUnlocked(id, type)) {
	using FunctionType = decltype(canItemBeUnlocked(id, type))(*)(GameStatsManager*, int, UnlockType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3748c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id, type);
}

auto GameStatsManager::checkAchievement(char const* statKey) -> decltype(checkAchievement(statKey)) {
	using FunctionType = decltype(checkAchievement(statKey))(*)(GameStatsManager*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x26c40, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, statKey);
}

auto GameStatsManager::checkCoinAchievement(GJGameLevel* level) -> decltype(checkCoinAchievement(level)) {
	using FunctionType = decltype(checkCoinAchievement(level))(*)(GameStatsManager*, GJGameLevel*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2c060, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, level);
}

auto GameStatsManager::checkCoinsForLevel(GJGameLevel* level) -> decltype(checkCoinsForLevel(level)) {
	using FunctionType = decltype(checkCoinsForLevel(level))(*)(GameStatsManager*, GJGameLevel*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2f1fc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, level);
}

auto GameStatsManager::claimListReward(GJLevelList* list) -> decltype(claimListReward(list)) {
	using FunctionType = decltype(claimListReward(list))(*)(GameStatsManager*, GJLevelList*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x335fc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, list);
}

auto GameStatsManager::collectReward(GJRewardType type, GJRewardItem* item) -> decltype(collectReward(type, item)) {
	using FunctionType = decltype(collectReward(type, item))(*)(GameStatsManager*, GJRewardType, GJRewardItem*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x31dd8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, type, item);
}

auto GameStatsManager::collectVideoReward(int orbs) -> decltype(collectVideoReward(orbs)) {
	using FunctionType = decltype(collectVideoReward(orbs))(*)(GameStatsManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4d0e0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, orbs);
}

auto GameStatsManager::completedChallenge(GJChallengeItem* item) -> decltype(completedChallenge(item)) {
	using FunctionType = decltype(completedChallenge(item))(*)(GameStatsManager*, GJChallengeItem*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x33248, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, item);
}

auto GameStatsManager::completedDailyLevel(GJGameLevel* level) -> decltype(completedDailyLevel(level)) {
	using FunctionType = decltype(completedDailyLevel(level))(*)(GameStatsManager*, GJGameLevel*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x33a80, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, level);
}

auto GameStatsManager::completedDemonLevel(GJGameLevel* level) -> decltype(completedDemonLevel(level)) {
	using FunctionType = decltype(completedDemonLevel(level))(*)(GameStatsManager*, GJGameLevel*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2d1ec, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, level);
}

auto GameStatsManager::completedLevel(GJGameLevel* level) -> decltype(completedLevel(level)) {
	using FunctionType = decltype(completedLevel(level))(*)(GameStatsManager*, GJGameLevel*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2d090, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, level);
}

auto GameStatsManager::completedMapPack(GJMapPack* pack) -> decltype(completedMapPack(pack)) {
	using FunctionType = decltype(completedMapPack(pack))(*)(GameStatsManager*, GJMapPack*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2dc04, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, pack);
}

auto GameStatsManager::completedStarLevel(GJGameLevel* level) -> decltype(completedStarLevel(level)) {
	using FunctionType = decltype(completedStarLevel(level))(*)(GameStatsManager*, GJGameLevel*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2d1ec, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, level);
}

auto GameStatsManager::countSecretChests(GJRewardType rewardType) -> decltype(countSecretChests(rewardType)) {
	using FunctionType = decltype(countSecretChests(rewardType))(*)(GameStatsManager*, GJRewardType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4cedc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, rewardType);
}

auto GameStatsManager::countUnlockedSecretChests(GJRewardType rewardType) -> decltype(countUnlockedSecretChests(rewardType)) {
	using FunctionType = decltype(countUnlockedSecretChests(rewardType))(*)(GameStatsManager*, GJRewardType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4cf20, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, rewardType);
}

auto GameStatsManager::createReward(GJRewardType type, int id, std::string str) -> decltype(createReward(type, id, str)) {
	using FunctionType = decltype(createReward(type, id, str))(*)(GameStatsManager*, GJRewardType, int, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x314e4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, type, id, str);
}

auto GameStatsManager::createSecretChestItems() -> decltype(createSecretChestItems()) {
	using FunctionType = decltype(createSecretChestItems())(*)(GameStatsManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1d1e4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameStatsManager::createSpecialChestItems() -> decltype(createSpecialChestItems()) {
	using FunctionType = decltype(createSpecialChestItems())(*)(GameStatsManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1d328, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameStatsManager::createStoreItems() -> decltype(createStoreItems()) {
	using FunctionType = decltype(createStoreItems())(*)(GameStatsManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1b2a8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameStatsManager::dataLoaded(DS_Dictionary* dict) -> decltype(dataLoaded(dict)) {
	using FunctionType = decltype(dataLoaded(dict))(*)(GameStatsManager*, DS_Dictionary*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4dd88, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, dict);
}

auto GameStatsManager::encodeDataTo(DS_Dictionary* dict) -> decltype(encodeDataTo(dict)) {
	using FunctionType = decltype(encodeDataTo(dict))(*)(GameStatsManager*, DS_Dictionary*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4d8b0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, dict);
}

auto GameStatsManager::firstSetup() -> decltype(firstSetup()) {
	using FunctionType = decltype(firstSetup())(*)(GameStatsManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4d250, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameStatsManager::generateItemUnlockableData() -> decltype(generateItemUnlockableData()) {
	using FunctionType = decltype(generateItemUnlockableData())(*)(GameStatsManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x254cc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameStatsManager::getAwardedCurrencyForLevel(GJGameLevel* level) -> decltype(getAwardedCurrencyForLevel(level)) {
	using FunctionType = decltype(getAwardedCurrencyForLevel(level))(*)(GameStatsManager*, GJGameLevel*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x30434, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, level);
}

auto GameStatsManager::getAwardedDiamondsForLevel(GJGameLevel* level) -> decltype(getAwardedDiamondsForLevel(level)) {
	using FunctionType = decltype(getAwardedDiamondsForLevel(level))(*)(GameStatsManager*, GJGameLevel*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x30e1c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, level);
}

auto GameStatsManager::getBaseCurrency(int stars, bool mainLevel, int levelID) -> decltype(getBaseCurrency(stars, mainLevel, levelID)) {
	using FunctionType = decltype(getBaseCurrency(stars, mainLevel, levelID))(*)(GameStatsManager*, int, bool, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x30190, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, stars, mainLevel, levelID);
}

auto GameStatsManager::getBaseCurrencyForLevel(GJGameLevel* level) -> decltype(getBaseCurrencyForLevel(level)) {
	using FunctionType = decltype(getBaseCurrencyForLevel(level))(*)(GameStatsManager*, GJGameLevel*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x301f0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, level);
}

auto GameStatsManager::getBaseDiamonds(int stars) -> decltype(getBaseDiamonds(stars)) {
	using FunctionType = decltype(getBaseDiamonds(stars))(*)(GameStatsManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x30dd4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, stars);
}

auto GameStatsManager::getBonusDiamonds(int stars) -> decltype(getBonusDiamonds(stars)) {
	using FunctionType = decltype(getBonusDiamonds(stars))(*)(GameStatsManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x30de8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, stars);
}

auto GameStatsManager::getChallenge(int id) -> decltype(getChallenge(id)) {
	using FunctionType = decltype(getChallenge(id))(*)(GameStatsManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x32cc4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto GameStatsManager::getChallengeKey(GJChallengeItem* chal) -> decltype(getChallengeKey(chal)) {
	using FunctionType = decltype(getChallengeKey(chal))(*)(GameStatsManager*, GJChallengeItem*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x33074, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, chal);
}

auto GameStatsManager::getCollectedCoinsForLevel(GJGameLevel* level) -> decltype(getCollectedCoinsForLevel(level)) {
	using FunctionType = decltype(getCollectedCoinsForLevel(level))(*)(GameStatsManager*, GJGameLevel*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2c524, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, level);
}

auto GameStatsManager::getCompletedMapPacks() -> decltype(getCompletedMapPacks()) {
	using FunctionType = decltype(getCompletedMapPacks())(*)(GameStatsManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2e0e4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameStatsManager::getCurrencyKey(GJGameLevel* level) -> decltype(getCurrencyKey(level)) {
	using FunctionType = decltype(getCurrencyKey(level))(*)(GameStatsManager*, GJGameLevel*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x300bc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, level);
}

auto GameStatsManager::getDailyLevelKey(int dailyID) -> decltype(getDailyLevelKey(dailyID)) {
	using FunctionType = decltype(getDailyLevelKey(dailyID))(*)(GameStatsManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x33890, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, dailyID);
}

auto GameStatsManager::getDailyStarKey(int p0) -> decltype(getDailyStarKey(p0)) {
	using FunctionType = decltype(getDailyStarKey(p0))(*)(GameStatsManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2cb18, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto GameStatsManager::getDemonLevelKey(GJGameLevel* level) -> decltype(getDemonLevelKey(level)) {
	using FunctionType = decltype(getDemonLevelKey(level))(*)(GameStatsManager*, GJGameLevel*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2c9f8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, level);
}

auto GameStatsManager::getEventRewardKey(int id) -> decltype(getEventRewardKey(id)) {
	using FunctionType = decltype(getEventRewardKey(id))(*)(GameStatsManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x386c4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto GameStatsManager::getGauntletRewardKey(int id) -> decltype(getGauntletRewardKey(id)) {
	using FunctionType = decltype(getGauntletRewardKey(id))(*)(GameStatsManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x37844, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto GameStatsManager::getItemKey(int id, int type) -> decltype(getItemKey(id, type)) {
	using FunctionType = decltype(getItemKey(id, type))(*)(GameStatsManager*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x25ed0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id, type);
}

auto GameStatsManager::getItemUnlockState(int itemID, UnlockType unlockType) -> decltype(getItemUnlockState(itemID, unlockType)) {
	using FunctionType = decltype(getItemUnlockState(itemID, unlockType))(*)(GameStatsManager*, int, UnlockType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x370a4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, itemID, unlockType);
}

auto GameStatsManager::getItemUnlockStateLite(int id, UnlockType type) -> decltype(getItemUnlockStateLite(id, type)) {
	using FunctionType = decltype(getItemUnlockStateLite(id, type))(*)(GameStatsManager*, int, UnlockType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x371a0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id, type);
}

auto GameStatsManager::getLevelKey(GJGameLevel* level) -> decltype(getLevelKey(level)) {
	using FunctionType = decltype(getLevelKey(level))(*)(GameStatsManager*, GJGameLevel*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2c6a4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, level);
}

auto GameStatsManager::getLevelKey(int levelID, bool isOnline, bool isDaily, bool isGauntlet, bool isEvent) -> decltype(getLevelKey(levelID, isOnline, isDaily, isGauntlet, isEvent)) {
	using FunctionType = decltype(getLevelKey(levelID, isOnline, isDaily, isGauntlet, isEvent))(*)(GameStatsManager*, int, bool, bool, bool, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2c6e8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, levelID, isOnline, isDaily, isGauntlet, isEvent);
}

auto GameStatsManager::getListRewardKey(GJLevelList* list) -> decltype(getListRewardKey(list)) {
	using FunctionType = decltype(getListRewardKey(list))(*)(GameStatsManager*, GJLevelList*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x33430, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, list);
}

auto GameStatsManager::getMapPackKey(int id) -> decltype(getMapPackKey(id)) {
	using FunctionType = decltype(getMapPackKey(id))(*)(GameStatsManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2dbdc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto GameStatsManager::getNextGoldChestID() -> decltype(getNextGoldChestID()) {
	using FunctionType = decltype(getNextGoldChestID())(*)(GameStatsManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4c928, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameStatsManager::getNextVideoAdReward() -> decltype(getNextVideoAdReward()) {
	using FunctionType = decltype(getNextVideoAdReward())(*)(GameStatsManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x37df4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameStatsManager::getPathRewardKey(int id) -> decltype(getPathRewardKey(id)) {
	using FunctionType = decltype(getPathRewardKey(id))(*)(GameStatsManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2bc4c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto GameStatsManager::getRewardForSecretChest(int id) -> decltype(getRewardForSecretChest(id)) {
	using FunctionType = decltype(getRewardForSecretChest(id))(*)(GameStatsManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4cd6c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto GameStatsManager::getRewardForSpecialChest(std::string key) -> decltype(getRewardForSpecialChest(key)) {
	using FunctionType = decltype(getRewardForSpecialChest(key))(*)(GameStatsManager*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x380e4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, key);
}

auto GameStatsManager::getRewardItem(GJRewardType type) -> decltype(getRewardItem(type)) {
	using FunctionType = decltype(getRewardItem(type))(*)(GameStatsManager*, GJRewardType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x31afc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, type);
}

auto GameStatsManager::getSecondaryQueuedChallenge(int id) -> decltype(getSecondaryQueuedChallenge(id)) {
	using FunctionType = decltype(getSecondaryQueuedChallenge(id))(*)(GameStatsManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x32eec, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto GameStatsManager::getSecretChestForItem(int id, UnlockType type) -> decltype(getSecretChestForItem(id, type)) {
	using FunctionType = decltype(getSecretChestForItem(id, type))(*)(GameStatsManager*, int, UnlockType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x25dcc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id, type);
}

auto GameStatsManager::getSecretCoinKey(char const* key) -> decltype(getSecretCoinKey(key)) {
	using FunctionType = decltype(getSecretCoinKey(key))(*)(GameStatsManager*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2f8f4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, key);
}

auto GameStatsManager::getSecretOnlineRewardKey(int id) -> decltype(getSecretOnlineRewardKey(id)) {
	using FunctionType = decltype(getSecretOnlineRewardKey(id))(*)(GameStatsManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x38870, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto GameStatsManager::getSpecialChestKeyForItem(int id, UnlockType type) -> decltype(getSpecialChestKeyForItem(id, type)) {
	using FunctionType = decltype(getSpecialChestKeyForItem(id, type))(*)(GameStatsManager*, int, UnlockType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x25e50, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id, type);
}

auto GameStatsManager::getSpecialRewardDescription(std::string key, bool unused) -> decltype(getSpecialRewardDescription(key, unused)) {
	using FunctionType = decltype(getSpecialRewardDescription(key, unused))(*)(GameStatsManager*, std::string, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x37c48, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, key, unused);
}

auto GameStatsManager::getSpecialUnlockDescription(int id, UnlockType type, bool unused) -> decltype(getSpecialUnlockDescription(id, type, unused)) {
	using FunctionType = decltype(getSpecialUnlockDescription(id, type, unused))(*)(GameStatsManager*, int, UnlockType, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x37cb0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id, type, unused);
}

auto GameStatsManager::getStarLevelKey(GJGameLevel* level) -> decltype(getStarLevelKey(level)) {
	using FunctionType = decltype(getStarLevelKey(level))(*)(GameStatsManager*, GJGameLevel*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2c9f8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, level);
}

auto GameStatsManager::getStat(char const* key) -> decltype(getStat(key)) {
	using FunctionType = decltype(getStat(key))(*)(GameStatsManager*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x26634, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, key);
}

auto GameStatsManager::getStatFromKey(StatKey key) -> decltype(getStatFromKey(key)) {
	using FunctionType = decltype(getStatFromKey(key))(*)(GameStatsManager*, StatKey);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2bbb8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, key);
}

auto GameStatsManager::getStoreItem(int index) -> decltype(getStoreItem(index)) {
	using FunctionType = decltype(getStoreItem(index))(*)(GameStatsManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x26304, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, index);
}

auto GameStatsManager::getStoreItem(int id, int type) -> decltype(getStoreItem(id, type)) {
	using FunctionType = decltype(getStoreItem(id, type))(*)(GameStatsManager*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x25d4c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id, type);
}

auto GameStatsManager::getTotalCollectedCurrency() -> decltype(getTotalCollectedCurrency()) {
	using FunctionType = decltype(getTotalCollectedCurrency())(*)(GameStatsManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x34614, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameStatsManager::getTotalCollectedDiamonds() -> decltype(getTotalCollectedDiamonds()) {
	using FunctionType = decltype(getTotalCollectedDiamonds())(*)(GameStatsManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3525c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameStatsManager::hasClaimedListReward(GJLevelList* list) -> decltype(hasClaimedListReward(list)) {
	using FunctionType = decltype(hasClaimedListReward(list))(*)(GameStatsManager*, GJLevelList*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x334f4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, list);
}

auto GameStatsManager::hasCompletedChallenge(GJChallengeItem* item) -> decltype(hasCompletedChallenge(item)) {
	using FunctionType = decltype(hasCompletedChallenge(item))(*)(GameStatsManager*, GJChallengeItem*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2cf38, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, item);
}

auto GameStatsManager::hasCompletedDailyLevel(int dailyID) -> decltype(hasCompletedDailyLevel(dailyID)) {
	using FunctionType = decltype(hasCompletedDailyLevel(dailyID))(*)(GameStatsManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x33950, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, dailyID);
}

auto GameStatsManager::hasCompletedDailyStars(int p0) -> decltype(hasCompletedDailyStars(p0)) {
	using FunctionType = decltype(hasCompletedDailyStars(p0))(*)(GameStatsManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x33ecc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto GameStatsManager::hasCompletedGauntletLevel(int id) -> decltype(hasCompletedGauntletLevel(id)) {
	using FunctionType = decltype(hasCompletedGauntletLevel(id))(*)(GameStatsManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2cd4c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto GameStatsManager::hasCompletedLevel(GJGameLevel* level) -> decltype(hasCompletedLevel(level)) {
	using FunctionType = decltype(hasCompletedLevel(level))(*)(GameStatsManager*, GJGameLevel*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2cbe4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, level);
}

auto GameStatsManager::hasCompletedMainLevel(int levelID) -> decltype(hasCompletedMainLevel(levelID)) {
	using FunctionType = decltype(hasCompletedMainLevel(levelID))(*)(GameStatsManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2cb48, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, levelID);
}

auto GameStatsManager::hasCompletedOnlineLevel(int id) -> decltype(hasCompletedOnlineLevel(id)) {
	using FunctionType = decltype(hasCompletedOnlineLevel(id))(*)(GameStatsManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2ccb0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto GameStatsManager::hasPendingUserCoin(char const* key) -> decltype(hasPendingUserCoin(key)) {
	using FunctionType = decltype(hasPendingUserCoin(key))(*)(GameStatsManager*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2f50c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, key);
}

auto GameStatsManager::hasRewardBeenCollected(GJRewardType type, int id) -> decltype(hasRewardBeenCollected(type, id)) {
	using FunctionType = decltype(hasRewardBeenCollected(type, id))(*)(GameStatsManager*, GJRewardType, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x31d4c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, type, id);
}

auto GameStatsManager::hasUserCoin(char const* key) -> decltype(hasUserCoin(key)) {
	using FunctionType = decltype(hasUserCoin(key))(*)(GameStatsManager*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2f600, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, key);
}

auto GameStatsManager::incrementActivePath(int amount) -> decltype(incrementActivePath(amount)) {
	using FunctionType = decltype(incrementActivePath(amount))(*)(GameStatsManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2a9d4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, amount);
}

auto GameStatsManager::incrementChallenge(GJChallengeType type, int amount) -> decltype(incrementChallenge(type, amount)) {
	using FunctionType = decltype(incrementChallenge(type, amount))(*)(GameStatsManager*, GJChallengeType, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2a3e4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, type, amount);
}

auto GameStatsManager::incrementStat(char const* key) -> decltype(incrementStat(key)) {
	using FunctionType = decltype(incrementStat(key))(*)(GameStatsManager*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2696c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, key);
}

auto GameStatsManager::incrementStat(char const* key, int amount) -> decltype(incrementStat(key, amount)) {
	using FunctionType = decltype(incrementStat(key, amount))(*)(GameStatsManager*, char const*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x26974, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, key, amount);
}

auto GameStatsManager::isDailyRecall(int p0) -> decltype(isDailyRecall(p0)) {
	using FunctionType = decltype(isDailyRecall(p0))(*)(GameStatsManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x30cac, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto GameStatsManager::isGauntletUnlocked(int id) -> decltype(isGauntletUnlocked(id)) {
	using FunctionType = decltype(isGauntletUnlocked(id))(*)(GameStatsManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x383bc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto GameStatsManager::isItemEnabled(UnlockType type, int id) -> decltype(isItemEnabled(type, id)) {
	using FunctionType = decltype(isItemEnabled(type, id))(*)(GameStatsManager*, UnlockType, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x37494, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, type, id);
}

auto GameStatsManager::isItemUnlocked(UnlockType type, int id) -> decltype(isItemUnlocked(type, id)) {
	using FunctionType = decltype(isItemUnlocked(type, id))(*)(GameStatsManager*, UnlockType, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2aaa8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, type, id);
}

auto GameStatsManager::isPathUnlocked(StatKey key) -> decltype(isPathUnlocked(key)) {
	using FunctionType = decltype(isPathUnlocked(key))(*)(GameStatsManager*, StatKey);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2aa80, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, key);
}

auto GameStatsManager::isSecretCoin(std::string key) -> decltype(isSecretCoin(key)) {
	using FunctionType = decltype(isSecretCoin(key))(*)(GameStatsManager*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2fa2c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, key);
}

auto GameStatsManager::isSecretCoinValid(std::string key) -> decltype(isSecretCoinValid(key)) {
	using FunctionType = decltype(isSecretCoinValid(key))(*)(GameStatsManager*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2fa5c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, key);
}

auto GameStatsManager::isSpecialChestLiteUnlockable(std::string key) -> decltype(isSpecialChestLiteUnlockable(key)) {
	using FunctionType = decltype(isSpecialChestLiteUnlockable(key))(*)(GameStatsManager*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x37468, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, key);
}

auto GameStatsManager::isSpecialChestUnlocked(std::string key) -> decltype(isSpecialChestUnlocked(key)) {
	using FunctionType = decltype(isSpecialChestUnlocked(key))(*)(GameStatsManager*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x36fa4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, key);
}

auto GameStatsManager::keyCostForSecretChest(int id) -> decltype(keyCostForSecretChest(id)) {
	using FunctionType = decltype(keyCostForSecretChest(id))(*)(GameStatsManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x36aac, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto GameStatsManager::linkSpecialChestUnlocks(GJRewardItem* item, std::string key) -> decltype(linkSpecialChestUnlocks(item, key)) {
	using FunctionType = decltype(linkSpecialChestUnlocks(item, key))(*)(GameStatsManager*, GJRewardItem*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x37b30, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, item, key);
}

auto GameStatsManager::logCoins() -> decltype(logCoins()) {
	using FunctionType = decltype(logCoins())(*)(GameStatsManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4f358, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameStatsManager::markLevelAsCompletedAndClaimed(GJGameLevel* level) -> decltype(markLevelAsCompletedAndClaimed(level)) {
	using FunctionType = decltype(markLevelAsCompletedAndClaimed(level))(*)(GameStatsManager*, GJGameLevel*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2d568, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, level);
}

auto GameStatsManager::postLoadGameStats() -> decltype(postLoadGameStats()) {
	using FunctionType = decltype(postLoadGameStats())(*)(GameStatsManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4ef48, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameStatsManager::preProcessReward(GJRewardItem* item) -> decltype(preProcessReward(item)) {
	using FunctionType = decltype(preProcessReward(item))(*)(GameStatsManager*, GJRewardItem*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x31f80, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, item);
}

auto GameStatsManager::preSaveGameStats() -> decltype(preSaveGameStats()) {
	using FunctionType = decltype(preSaveGameStats())(*)(GameStatsManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4db58, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameStatsManager::processChallengeQueue(int position) -> decltype(processChallengeQueue(position)) {
	using FunctionType = decltype(processChallengeQueue(position))(*)(GameStatsManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x33398, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, position);
}

auto GameStatsManager::processOnlineChests() -> decltype(processOnlineChests()) {
	using FunctionType = decltype(processOnlineChests())(*)(GameStatsManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4f198, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameStatsManager::purchaseItem(int index) -> decltype(purchaseItem(index)) {
	using FunctionType = decltype(purchaseItem(index))(*)(GameStatsManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x26414, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, index);
}

auto GameStatsManager::recountSpecialStats() -> decltype(recountSpecialStats()) {
	using FunctionType = decltype(recountSpecialStats())(*)(GameStatsManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3586c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameStatsManager::recountUserCoins(bool force) -> decltype(recountUserCoins(force)) {
	using FunctionType = decltype(recountUserCoins(force))(*)(GameStatsManager*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2e7f4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, force);
}

auto GameStatsManager::registerRewardsFromItem(GJRewardItem* item) -> decltype(registerRewardsFromItem(item)) {
	using FunctionType = decltype(registerRewardsFromItem(item))(*)(GameStatsManager*, GJRewardItem*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x31ec0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, item);
}

auto GameStatsManager::removeErrorFromSpecialChests() -> decltype(removeErrorFromSpecialChests()) {
	using FunctionType = decltype(removeErrorFromSpecialChests())(*)(GameStatsManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x368bc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameStatsManager::removeQueuedSecondaryChallenge(int position) -> decltype(removeQueuedSecondaryChallenge(position)) {
	using FunctionType = decltype(removeQueuedSecondaryChallenge(position))(*)(GameStatsManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x32bb8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, position);
}

auto GameStatsManager::resetChallengeTimer() -> decltype(resetChallengeTimer()) {
	using FunctionType = decltype(resetChallengeTimer())(*)(GameStatsManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x32650, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameStatsManager::resetPreSync() -> decltype(resetPreSync()) {
	using FunctionType = decltype(resetPreSync())(*)(GameStatsManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4f350, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameStatsManager::resetSpecialChest(std::string key) -> decltype(resetSpecialChest(key)) {
	using FunctionType = decltype(resetSpecialChest(key))(*)(GameStatsManager*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2bdf8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, key);
}

auto GameStatsManager::resetSpecialStatAchievements() -> decltype(resetSpecialStatAchievements()) {
	using FunctionType = decltype(resetSpecialStatAchievements())(*)(GameStatsManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x36b00, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameStatsManager::resetUserCoins() -> decltype(resetUserCoins()) {
	using FunctionType = decltype(resetUserCoins())(*)(GameStatsManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2e7bc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameStatsManager::restorePostSync() -> decltype(restorePostSync()) {
	using FunctionType = decltype(restorePostSync())(*)(GameStatsManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4f354, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameStatsManager::setStarsForMapPack(int id, int stars) -> decltype(setStarsForMapPack(id, stars)) {
	using FunctionType = decltype(setStarsForMapPack(id, stars))(*)(GameStatsManager*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2dea8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id, stars);
}

auto GameStatsManager::setStat(char const* key, int value) -> decltype(setStat(key, value)) {
	using FunctionType = decltype(setStat(key, value))(*)(GameStatsManager*, char const*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x267ac, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, key, value);
}

auto GameStatsManager::setStatIfHigher(char const* key, int value) -> decltype(setStatIfHigher(key, value)) {
	using FunctionType = decltype(setStatIfHigher(key, value))(*)(GameStatsManager*, char const*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2c00c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, key, value);
}

auto GameStatsManager::setupIconCredits() -> decltype(setupIconCredits()) {
	using FunctionType = decltype(setupIconCredits())(*)(GameStatsManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2a8dfc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameStatsManager::shopTypeForItemID(int index) -> decltype(shopTypeForItemID(index)) {
	using FunctionType = decltype(shopTypeForItemID(index))(*)(GameStatsManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x26948, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, index);
}

auto GameStatsManager::shouldAwardSecretKey() -> decltype(shouldAwardSecretKey()) {
	using FunctionType = decltype(shouldAwardSecretKey())(*)(GameStatsManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4cfe8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameStatsManager::storeChallengeTime(int remaining) -> decltype(storeChallengeTime(remaining)) {
	using FunctionType = decltype(storeChallengeTime(remaining))(*)(GameStatsManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x325f0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, remaining);
}

auto GameStatsManager::storeEventChest(int eventID, GJRewardItem* item) -> decltype(storeEventChest(eventID, item)) {
	using FunctionType = decltype(storeEventChest(eventID, item))(*)(GameStatsManager*, int, GJRewardItem*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3377c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, eventID, item);
}

auto GameStatsManager::storeOnlineChest(std::string key, GJRewardItem* item) -> decltype(storeOnlineChest(key, item)) {
	using FunctionType = decltype(storeOnlineChest(key, item))(*)(GameStatsManager*, std::string, GJRewardItem*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x341e8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, key, item);
}

auto GameStatsManager::storeRewardState(GJRewardType type, int id, int remaining, std::string str) -> decltype(storeRewardState(type, id, remaining, str)) {
	using FunctionType = decltype(storeRewardState(type, id, remaining, str))(*)(GameStatsManager*, GJRewardType, int, int, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3190c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, type, id, remaining, str);
}

auto GameStatsManager::storeSecondaryQueuedChallenge(int position, GJChallengeItem* challenge) -> decltype(storeSecondaryQueuedChallenge(position, challenge)) {
	using FunctionType = decltype(storeSecondaryQueuedChallenge(position, challenge))(*)(GameStatsManager*, int, GJChallengeItem*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x32aa0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, position, challenge);
}

auto GameStatsManager::storeSecretCoin(char const* key) -> decltype(storeSecretCoin(key)) {
	using FunctionType = decltype(storeSecretCoin(key))(*)(GameStatsManager*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2f91c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, key);
}

auto GameStatsManager::tempClear() -> decltype(tempClear()) {
	using FunctionType = decltype(tempClear())(*)(GameStatsManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x300b8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameStatsManager::toggleEnableItem(UnlockType type, int id, bool enabled) -> decltype(toggleEnableItem(type, id, enabled)) {
	using FunctionType = decltype(toggleEnableItem(type, id, enabled))(*)(GameStatsManager*, UnlockType, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3753c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, type, id, enabled);
}

auto GameStatsManager::tryFixPathBug() -> decltype(tryFixPathBug()) {
	using FunctionType = decltype(tryFixPathBug())(*)(GameStatsManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2b2d4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameStatsManager::trySelectActivePath() -> decltype(trySelectActivePath()) {
	using FunctionType = decltype(trySelectActivePath())(*)(GameStatsManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2ad24, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameStatsManager::uncompleteLevel(GJGameLevel* level) -> decltype(uncompleteLevel(level)) {
	using FunctionType = decltype(uncompleteLevel(level))(*)(GameStatsManager*, GJGameLevel*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2d8b0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, level);
}

auto GameStatsManager::unlockGauntlet(int id) -> decltype(unlockGauntlet(id)) {
	using FunctionType = decltype(unlockGauntlet(id))(*)(GameStatsManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3823c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto GameStatsManager::unlockGauntletChest(int id) -> decltype(unlockGauntletChest(id)) {
	using FunctionType = decltype(unlockGauntletChest(id))(*)(GameStatsManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x383c4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto GameStatsManager::unlockGoldChest(int id) -> decltype(unlockGoldChest(id)) {
	using FunctionType = decltype(unlockGoldChest(id))(*)(GameStatsManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4cd78, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto GameStatsManager::unlockOnlineChest(std::string key) -> decltype(unlockOnlineChest(key)) {
	using FunctionType = decltype(unlockOnlineChest(key))(*)(GameStatsManager*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x34204, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, key);
}

auto GameStatsManager::unlockSecretChest(int id) -> decltype(unlockSecretChest(id)) {
	using FunctionType = decltype(unlockSecretChest(id))(*)(GameStatsManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4cba0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto GameStatsManager::unlockSpecialChest(std::string key) -> decltype(unlockSpecialChest(key)) {
	using FunctionType = decltype(unlockSpecialChest(key))(*)(GameStatsManager*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x380ec, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, key);
}

auto GameStatsManager::updateActivePath(StatKey key) -> decltype(updateActivePath(key)) {
	using FunctionType = decltype(updateActivePath(key))(*)(GameStatsManager*, StatKey);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2ad10, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, key);
}

auto GameStatsManager::usernameForAccountID(int id) -> decltype(usernameForAccountID(id)) {
	using FunctionType = decltype(usernameForAccountID(id))(*)(GameStatsManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2a8d8c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto GameStatsManager::verifyPathAchievements() -> decltype(verifyPathAchievements()) {
	using FunctionType = decltype(verifyPathAchievements())(*)(GameStatsManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2be00, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameStatsManager::verifyUserCoins() -> decltype(verifyUserCoins()) {
	using FunctionType = decltype(verifyUserCoins())(*)(GameStatsManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2ed34, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}
