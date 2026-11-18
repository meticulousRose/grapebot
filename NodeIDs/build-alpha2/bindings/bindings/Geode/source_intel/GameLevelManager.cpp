
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/GameLevelManager.hpp>
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

auto GameLevelManager::responseToDict(std::string response, bool colon) -> decltype(responseToDict(response, colon)) {
	using FunctionType = decltype(responseToDict(response, colon))(*)(std::string, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x542920, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(response, colon);
}

auto GameLevelManager::sharedState() -> decltype(sharedState()) {
	using FunctionType = decltype(sharedState())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x51bae0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto GameLevelManager::init() -> decltype(init()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GameLevelManager::init), this);
	using FunctionType = decltype(init())(*)(GameLevelManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x53d9b0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GameLevelManager::acceptFriendRequest(int accountID, int requestID) -> decltype(acceptFriendRequest(accountID, requestID)) {
	using FunctionType = decltype(acceptFriendRequest(accountID, requestID))(*)(GameLevelManager*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x56f560, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, accountID, requestID);
}

auto GameLevelManager::accountIDForUserID(int userID) -> decltype(accountIDForUserID(userID)) {
	using FunctionType = decltype(accountIDForUserID(userID))(*)(GameLevelManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x540740, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, userID);
}

auto GameLevelManager::areGauntletsLoaded() -> decltype(areGauntletsLoaded()) {
	using FunctionType = decltype(areGauntletsLoaded())(*)(GameLevelManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x55e520, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameLevelManager::banUser(int accountID) -> decltype(banUser(accountID)) {
	using FunctionType = decltype(banUser(accountID))(*)(GameLevelManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x562890, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, accountID);
}

auto GameLevelManager::claimNotificationReward(int p0) -> decltype(claimNotificationReward(p0)) {
	using FunctionType = decltype(claimNotificationReward(p0))(*)(GameLevelManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x576fc0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto GameLevelManager::cleanupDailyLevels() -> decltype(cleanupDailyLevels()) {
	using FunctionType = decltype(cleanupDailyLevels())(*)(GameLevelManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x54e1e0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameLevelManager::createAndGetAccountComments(std::string str, int accountID) -> decltype(createAndGetAccountComments(str, accountID)) {
	using FunctionType = decltype(createAndGetAccountComments(str, accountID))(*)(GameLevelManager*, std::string, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x56aa60, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, str, accountID);
}

auto GameLevelManager::createAndGetLevelComments(std::string p0, int p1, CommentKeyType p2) -> decltype(createAndGetLevelComments(p0, p1, p2)) {
	using FunctionType = decltype(createAndGetLevelComments(p0, p1, p2))(*)(GameLevelManager*, std::string, int, CommentKeyType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x56aa60, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1, p2);
}

auto GameLevelManager::createAndGetMapPacks(std::string str) -> decltype(createAndGetMapPacks(str)) {
	using FunctionType = decltype(createAndGetMapPacks(str))(*)(GameLevelManager*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x543950, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, str);
}

auto GameLevelManager::createAndGetScores(std::string str, GJScoreType type) -> decltype(createAndGetScores(str, type)) {
	using FunctionType = decltype(createAndGetScores(str, type))(*)(GameLevelManager*, std::string, GJScoreType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5445a0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, str, type);
}

auto GameLevelManager::createNewLevel() -> decltype(createNewLevel()) {
	using FunctionType = decltype(createNewLevel())(*)(GameLevelManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x53e200, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameLevelManager::createNewLevelList() -> decltype(createNewLevelList()) {
	using FunctionType = decltype(createNewLevelList())(*)(GameLevelManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x53f140, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameLevelManager::createPageInfo(int total, int start, int count) -> decltype(createPageInfo(total, start, count)) {
	using FunctionType = decltype(createPageInfo(total, start, count))(*)(GameLevelManager*, int, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x54a5e0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, total, start, count);
}

auto GameLevelManager::createSmartTemplate() -> decltype(createSmartTemplate()) {
	using FunctionType = decltype(createSmartTemplate())(*)(GameLevelManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x54f030, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameLevelManager::dataLoaded(DS_Dictionary* dict) -> decltype(dataLoaded(dict)) {
	using FunctionType = decltype(dataLoaded(dict))(*)(GameLevelManager*, DS_Dictionary*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x54f9d0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, dict);
}

auto GameLevelManager::deleteAccountComment(int id, int accountID) -> decltype(deleteAccountComment(id, accountID)) {
	using FunctionType = decltype(deleteAccountComment(id, accountID))(*)(GameLevelManager*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x56e430, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id, accountID);
}

auto GameLevelManager::deleteFriendRequests(int accountID, cocos2d::CCArray* accounts, bool sent) -> decltype(deleteFriendRequests(accountID, accounts, sent)) {
	using FunctionType = decltype(deleteFriendRequests(accountID, accounts, sent))(*)(GameLevelManager*, int, cocos2d::CCArray*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x57a610, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, accountID, accounts, sent);
}

auto GameLevelManager::deleteLevel(GJGameLevel* level) -> decltype(deleteLevel(level)) {
	using FunctionType = decltype(deleteLevel(level))(*)(GameLevelManager*, GJGameLevel*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x53ed90, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, level);
}

auto GameLevelManager::deleteLevelComment(int id, int levelID) -> decltype(deleteLevelComment(id, levelID)) {
	using FunctionType = decltype(deleteLevelComment(id, levelID))(*)(GameLevelManager*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x56dbb0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id, levelID);
}

auto GameLevelManager::deleteLevelList(GJLevelList* list) -> decltype(deleteLevelList(list)) {
	using FunctionType = decltype(deleteLevelList(list))(*)(GameLevelManager*, GJLevelList*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x53f690, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, list);
}

auto GameLevelManager::deleteSentFriendRequest(int accountID) -> decltype(deleteSentFriendRequest(accountID)) {
	using FunctionType = decltype(deleteSentFriendRequest(accountID))(*)(GameLevelManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x57a5f0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, accountID);
}

auto GameLevelManager::deleteServerLevelList(int p0, std::string const& p1, std::vector<int> const& p2) -> decltype(deleteServerLevelList(p0, p1, p2)) {
	using FunctionType = decltype(deleteServerLevelList(p0, p1, p2))(*)(GameLevelManager*, int, std::string const&, std::vector<int> const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x9083a0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1, p2);
}

auto GameLevelManager::deleteSmartTemplate(GJSmartTemplate* smartTemplate) -> decltype(deleteSmartTemplate(smartTemplate)) {
	using FunctionType = decltype(deleteSmartTemplate(smartTemplate))(*)(GameLevelManager*, GJSmartTemplate*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x54f070, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, smartTemplate);
}

auto GameLevelManager::deleteUserMessages(GJUserMessage* message, cocos2d::CCArray* messages, bool isSender) -> decltype(deleteUserMessages(message, messages, isSender)) {
	using FunctionType = decltype(deleteUserMessages(message, messages, isSender))(*)(GameLevelManager*, GJUserMessage*, cocos2d::CCArray*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5696d0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, message, messages, isSender);
}

auto GameLevelManager::downloadLevel(int id, bool gauntletLevel, int dailyID) -> decltype(downloadLevel(id, gauntletLevel, dailyID)) {
	using FunctionType = decltype(downloadLevel(id, gauntletLevel, dailyID))(*)(GameLevelManager*, int, bool, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x55e580, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id, gauntletLevel, dailyID);
}

auto GameLevelManager::downloadUserMessage(int id, bool sent) -> decltype(downloadUserMessage(id, sent)) {
	using FunctionType = decltype(downloadUserMessage(id, sent))(*)(GameLevelManager*, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x568d20, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id, sent);
}

auto GameLevelManager::encodeDataTo(DS_Dictionary* dict) -> decltype(encodeDataTo(dict)) {
	using FunctionType = decltype(encodeDataTo(dict))(*)(GameLevelManager*, DS_Dictionary*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x54f4b0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, dict);
}

auto GameLevelManager::firstSetup() -> decltype(firstSetup()) {
	using FunctionType = decltype(firstSetup())(*)(GameLevelManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x54f0f0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameLevelManager::followUser(int id) -> decltype(followUser(id)) {
	using FunctionType = decltype(followUser(id))(*)(GameLevelManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x54e6f0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto GameLevelManager::friendRequestFromAccountID(int id) -> decltype(friendRequestFromAccountID(id)) {
	using FunctionType = decltype(friendRequestFromAccountID(id))(*)(GameLevelManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x567d60, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto GameLevelManager::getAccountCommentKey(int accountID, int page) -> decltype(getAccountCommentKey(accountID, page)) {
	using FunctionType = decltype(getAccountCommentKey(accountID, page))(*)(GameLevelManager*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x56aa40, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, accountID, page);
}

auto GameLevelManager::getAccountComments(int accountID, int page, int total) -> decltype(getAccountComments(accountID, page, total)) {
	using FunctionType = decltype(getAccountComments(accountID, page, total))(*)(GameLevelManager*, int, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x56a6f0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, accountID, page, total);
}

auto GameLevelManager::getActiveDailyID(GJTimedLevelType type) -> decltype(getActiveDailyID(type)) {
	using FunctionType = decltype(getActiveDailyID(type))(*)(GameLevelManager*, GJTimedLevelType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x580fd0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, type);
}

auto GameLevelManager::getActiveSmartTemplate() -> decltype(getActiveSmartTemplate()) {
	using FunctionType = decltype(getActiveSmartTemplate())(*)(GameLevelManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x54ef40, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameLevelManager::getAllSmartTemplates() -> decltype(getAllSmartTemplates()) {
	using FunctionType = decltype(getAllSmartTemplates())(*)(GameLevelManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x54f0c0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameLevelManager::getAllUsedSongIDs() -> decltype(getAllUsedSongIDs()) {
	using FunctionType = decltype(getAllUsedSongIDs())(*)(GameLevelManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5825c0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameLevelManager::getBasePostString() -> decltype(getBasePostString()) {
	using FunctionType = decltype(getBasePostString())(*)(GameLevelManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x551c70, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameLevelManager::getBoolForKey(char const* key) -> decltype(getBoolForKey(key)) {
	using FunctionType = decltype(getBoolForKey(key))(*)(GameLevelManager*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5824d0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, key);
}

auto GameLevelManager::getCommentKey(int ID, int page, int mode, CommentKeyType keytype) -> decltype(getCommentKey(ID, page, mode, keytype)) {
	using FunctionType = decltype(getCommentKey(ID, page, mode, keytype))(*)(GameLevelManager*, int, int, int, CommentKeyType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x56a4a0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, ID, page, mode, keytype);
}

auto GameLevelManager::getCompletedDailyLevels() -> decltype(getCompletedDailyLevels()) {
	using FunctionType = decltype(getCompletedDailyLevels())(*)(GameLevelManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x548a20, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameLevelManager::getCompletedEventLevels(int minStars, int maxStars) -> decltype(getCompletedEventLevels(minStars, maxStars)) {
	using FunctionType = decltype(getCompletedEventLevels(minStars, maxStars))(*)(GameLevelManager*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x548c20, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, minStars, maxStars);
}

auto GameLevelManager::getCompletedGauntletDemons() -> decltype(getCompletedGauntletDemons()) {
	using FunctionType = decltype(getCompletedGauntletDemons())(*)(GameLevelManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x548e30, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameLevelManager::getCompletedGauntletLevels() -> decltype(getCompletedGauntletLevels()) {
	using FunctionType = decltype(getCompletedGauntletLevels())(*)(GameLevelManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x548ef0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameLevelManager::getCompletedLevels(bool useOrbCompletion) -> decltype(getCompletedLevels(useOrbCompletion)) {
	using FunctionType = decltype(getCompletedLevels(useOrbCompletion))(*)(GameLevelManager*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x546c40, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, useOrbCompletion);
}

auto GameLevelManager::getCompletedWeeklyLevels() -> decltype(getCompletedWeeklyLevels()) {
	using FunctionType = decltype(getCompletedWeeklyLevels())(*)(GameLevelManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x548820, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameLevelManager::getDailyID(GJTimedLevelType type) -> decltype(getDailyID(type)) {
	using FunctionType = decltype(getDailyID(type))(*)(GameLevelManager*, GJTimedLevelType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x580fd0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, type);
}

auto GameLevelManager::getDailyTimer(GJTimedLevelType type) -> decltype(getDailyTimer(type)) {
	using FunctionType = decltype(getDailyTimer(type))(*)(GameLevelManager*, GJTimedLevelType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x581000, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, type);
}

auto GameLevelManager::getDeleteMessageKey(int id, bool sent) -> decltype(getDeleteMessageKey(id, sent)) {
	using FunctionType = decltype(getDeleteMessageKey(id, sent))(*)(GameLevelManager*, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x569bd0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id, sent);
}

auto GameLevelManager::getDemonLevelsString() -> decltype(getDemonLevelsString()) {
	using FunctionType = decltype(getDemonLevelsString())(*)(GameLevelManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x546e10, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameLevelManager::getDescKey(int levelID) -> decltype(getDescKey(levelID)) {
	using FunctionType = decltype(getDescKey(levelID))(*)(GameLevelManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x56bdd0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, levelID);
}

auto GameLevelManager::getDifficultyStr(bool isNA, bool isEasy, bool isNormal, bool isHard, bool isHarder, bool isInsane, bool isDemon, bool isAuto) -> decltype(getDifficultyStr(isNA, isEasy, isNormal, isHard, isHarder, isInsane, isDemon, isAuto)) {
	using FunctionType = decltype(getDifficultyStr(isNA, isEasy, isNormal, isHard, isHarder, isInsane, isDemon, isAuto))(*)(GameLevelManager*, bool, bool, bool, bool, bool, bool, bool, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5572b0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, isNA, isEasy, isNormal, isHard, isHarder, isInsane, isDemon, isAuto);
}

auto GameLevelManager::getFolderName(int id, bool local) -> decltype(getFolderName(id, local)) {
	using FunctionType = decltype(getFolderName(id, local))(*)(GameLevelManager*, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x54ec70, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id, local);
}

auto GameLevelManager::getGauntletLevels(int id) -> decltype(getGauntletLevels(id)) {
	using FunctionType = decltype(getGauntletLevels(id))(*)(GameLevelManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x55df00, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto GameLevelManager::getGauntlets() -> decltype(getGauntlets()) {
	using FunctionType = decltype(getGauntlets())(*)(GameLevelManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x55d7c0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameLevelManager::getGauntletSearchKey(int id) -> decltype(getGauntletSearchKey(id)) {
	using FunctionType = decltype(getGauntletSearchKey(id))(*)(GameLevelManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x55d700, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto GameLevelManager::getGJChallenges() -> decltype(getGJChallenges()) {
	using FunctionType = decltype(getGJChallenges())(*)(GameLevelManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5768a0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameLevelManager::getGJDailyLevelState(GJTimedLevelType type) -> decltype(getGJDailyLevelState(type)) {
	using FunctionType = decltype(getGJDailyLevelState(type))(*)(GameLevelManager*, GJTimedLevelType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x580a20, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, type);
}

auto GameLevelManager::getGJRewards(int type) -> decltype(getGJRewards(type)) {
	using FunctionType = decltype(getGJRewards(type))(*)(GameLevelManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x57fe80, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, type);
}

auto GameLevelManager::getGJSecretReward(std::string key) -> decltype(getGJSecretReward(key)) {
	using FunctionType = decltype(getGJSecretReward(key))(*)(GameLevelManager*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x57fb70, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, key);
}

auto GameLevelManager::getGJUserInfo(int id) -> decltype(getGJUserInfo(id)) {
	using FunctionType = decltype(getGJUserInfo(id))(*)(GameLevelManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5673a0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto GameLevelManager::getHighestLevelOrder() -> decltype(getHighestLevelOrder()) {
	using FunctionType = decltype(getHighestLevelOrder())(*)(GameLevelManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5469b0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameLevelManager::getIntForKey(char const* key) -> decltype(getIntForKey(key)) {
	using FunctionType = decltype(getIntForKey(key))(*)(GameLevelManager*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5822e0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, key);
}

auto GameLevelManager::getLeaderboardKey(LeaderboardType type, LeaderboardStat stat) -> decltype(getLeaderboardKey(type, stat)) {
	using FunctionType = decltype(getLeaderboardKey(type, stat))(*)(GameLevelManager*, LeaderboardType, LeaderboardStat);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5628a0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, type, stat);
}

auto GameLevelManager::getLengthStr(bool isTiny, bool isShort, bool isMedium, bool isLong, bool isXL, bool isPlat) -> decltype(getLengthStr(isTiny, isShort, isMedium, isLong, isXL, isPlat)) {
	using FunctionType = decltype(getLengthStr(isTiny, isShort, isMedium, isLong, isXL, isPlat))(*)(GameLevelManager*, bool, bool, bool, bool, bool, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x557890, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, isTiny, isShort, isMedium, isLong, isXL, isPlat);
}

auto GameLevelManager::getLevelComments(int ID, int page, int total, int mode, CommentKeyType keytype) -> decltype(getLevelComments(ID, page, total, mode, keytype)) {
	using FunctionType = decltype(getLevelComments(ID, page, total, mode, keytype))(*)(GameLevelManager*, int, int, int, int, CommentKeyType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x569f80, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, ID, page, total, mode, keytype);
}

auto GameLevelManager::getLevelKey(int levelID) -> decltype(getLevelKey(levelID)) {
	using FunctionType = decltype(getLevelKey(levelID))(*)(GameLevelManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x53e030, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, levelID);
}

auto GameLevelManager::getLevelLeaderboard(GJGameLevel* level, LevelLeaderboardType type, LevelLeaderboardMode mode) -> decltype(getLevelLeaderboard(level, type, mode)) {
	using FunctionType = decltype(getLevelLeaderboard(level, type, mode))(*)(GameLevelManager*, GJGameLevel*, LevelLeaderboardType, LevelLeaderboardMode);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5659e0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, level, type, mode);
}

auto GameLevelManager::getLevelLeaderboardKey(int levelID, LevelLeaderboardType type, LevelLeaderboardMode mode) -> decltype(getLevelLeaderboardKey(levelID, type, mode)) {
	using FunctionType = decltype(getLevelLeaderboardKey(levelID, type, mode))(*)(GameLevelManager*, int, LevelLeaderboardType, LevelLeaderboardMode);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x566b40, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, levelID, type, mode);
}

auto GameLevelManager::getLevelListKey(int listID) -> decltype(getLevelListKey(listID)) {
	using FunctionType = decltype(getLevelListKey(listID))(*)(GameLevelManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x53f7c0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, listID);
}

auto GameLevelManager::getLevelLists(GJSearchObject* object) -> decltype(getLevelLists(object)) {
	using FunctionType = decltype(getLevelLists(object))(*)(GameLevelManager*, GJSearchObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x55b030, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto GameLevelManager::getLevelSaveData() -> decltype(getLevelSaveData()) {
	using FunctionType = decltype(getLevelSaveData())(*)(GameLevelManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x559470, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameLevelManager::getLikeAccountItemKey(LikeItemType type, int id, bool liked, int parentID) -> decltype(getLikeAccountItemKey(type, id, liked, parentID)) {
	using FunctionType = decltype(getLikeAccountItemKey(type, id, liked, parentID))(*)(GameLevelManager*, LikeItemType, int, bool, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x57f850, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, type, id, liked, parentID);
}

auto GameLevelManager::getLocalLevelByName(std::string name) -> decltype(getLocalLevelByName(name)) {
	using FunctionType = decltype(getLocalLevelByName(name))(*)(GameLevelManager*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x53e050, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, name);
}

auto GameLevelManager::getLocalLevelList(int uniqueID) -> decltype(getLocalLevelList(uniqueID)) {
	using FunctionType = decltype(getLocalLevelList(uniqueID))(*)(GameLevelManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x53e190, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, uniqueID);
}

auto GameLevelManager::getLowestLevelOrder() -> decltype(getLowestLevelOrder()) {
	using FunctionType = decltype(getLowestLevelOrder())(*)(GameLevelManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5469f0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameLevelManager::getMainLevel(int levelID, bool dontGetLevelString) -> decltype(getMainLevel(levelID, dontGetLevelString)) {
	using FunctionType = decltype(getMainLevel(levelID, dontGetLevelString))(*)(GameLevelManager*, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x53db90, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, levelID, dontGetLevelString);
}

auto GameLevelManager::getMapPacks(GJSearchObject* object) -> decltype(getMapPacks(object)) {
	using FunctionType = decltype(getMapPacks(object))(*)(GameLevelManager*, GJSearchObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x559700, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto GameLevelManager::getMessageKey(int id) -> decltype(getMessageKey(id)) {
	using FunctionType = decltype(getMessageKey(id))(*)(GameLevelManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x569070, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto GameLevelManager::getMessagesKey(bool sent, int page) -> decltype(getMessagesKey(sent, page)) {
	using FunctionType = decltype(getMessagesKey(sent, page))(*)(GameLevelManager*, bool, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x568170, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sent, page);
}

auto GameLevelManager::getNews() -> decltype(getNews()) {
	using FunctionType = decltype(getNews())(*)(GameLevelManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x569f60, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameLevelManager::getNextFreeTemplateID() -> decltype(getNextFreeTemplateID()) {
	using FunctionType = decltype(getNextFreeTemplateID())(*)(GameLevelManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x54ef60, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameLevelManager::getNextLevelName(std::string name) -> decltype(getNextLevelName(name)) {
	using FunctionType = decltype(getNextLevelName(name))(*)(GameLevelManager*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x53e6f0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, name);
}

auto GameLevelManager::getOnlineLevels(GJSearchObject* object) -> decltype(getOnlineLevels(object)) {
	using FunctionType = decltype(getOnlineLevels(object))(*)(GameLevelManager*, GJSearchObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x558520, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto GameLevelManager::getPageInfo(char const* key) -> decltype(getPageInfo(key)) {
	using FunctionType = decltype(getPageInfo(key))(*)(GameLevelManager*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x54a4f0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, key);
}

auto GameLevelManager::getPostCommentKey(int parentID) -> decltype(getPostCommentKey(parentID)) {
	using FunctionType = decltype(getPostCommentKey(parentID))(*)(GameLevelManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x56bdf0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, parentID);
}

auto GameLevelManager::getRateStarsKey(int levelID) -> decltype(getRateStarsKey(levelID)) {
	using FunctionType = decltype(getRateStarsKey(levelID))(*)(GameLevelManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x561fc0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, levelID);
}

auto GameLevelManager::getReportKey(int levelID) -> decltype(getReportKey(levelID)) {
	using FunctionType = decltype(getReportKey(levelID))(*)(GameLevelManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x569070, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, levelID);
}

auto GameLevelManager::getSavedDailyLevel(int dailyID) -> decltype(getSavedDailyLevel(dailyID)) {
	using FunctionType = decltype(getSavedDailyLevel(dailyID))(*)(GameLevelManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x548fb0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, dailyID);
}

auto GameLevelManager::getSavedDailyLevelFromLevelID(int id) -> decltype(getSavedDailyLevelFromLevelID(id)) {
	using FunctionType = decltype(getSavedDailyLevelFromLevelID(id))(*)(GameLevelManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5492b0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto GameLevelManager::getSavedLevel(GJGameLevel* level) -> decltype(getSavedLevel(level)) {
	using FunctionType = decltype(getSavedLevel(level))(*)(GameLevelManager*, GJGameLevel*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x542e90, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, level);
}

auto GameLevelManager::getSavedLevel(int id) -> decltype(getSavedLevel(id)) {
	using FunctionType = decltype(getSavedLevel(id))(*)(GameLevelManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5491b0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto GameLevelManager::getSavedLevelLists(int folder) -> decltype(getSavedLevelLists(folder)) {
	using FunctionType = decltype(getSavedLevelLists(folder))(*)(GameLevelManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5468e0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, folder);
}

auto GameLevelManager::getSavedLevels(bool favorite, int folder) -> decltype(getSavedLevels(favorite, folder)) {
	using FunctionType = decltype(getSavedLevels(favorite, folder))(*)(GameLevelManager*, bool, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5466f0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, favorite, folder);
}

auto GameLevelManager::getSearchScene(char const* key) -> decltype(getSearchScene(key)) {
	using FunctionType = decltype(getSearchScene(key))(*)(GameLevelManager*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x54ad10, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, key);
}

auto GameLevelManager::getSplitIntFromKey(char const* key, int index) -> decltype(getSplitIntFromKey(key, index)) {
	using FunctionType = decltype(getSplitIntFromKey(key, index))(*)(GameLevelManager*, char const*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x562e60, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, key, index);
}

auto GameLevelManager::getStarLevelsString() -> decltype(getStarLevelsString()) {
	using FunctionType = decltype(getStarLevelsString())(*)(GameLevelManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5471b0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameLevelManager::getStoredUserMessage(int id) -> decltype(getStoredUserMessage(id)) {
	using FunctionType = decltype(getStoredUserMessage(id))(*)(GameLevelManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x567da0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto GameLevelManager::getStoredUserMessageReply(int id) -> decltype(getStoredUserMessageReply(id)) {
	using FunctionType = decltype(getStoredUserMessageReply(id))(*)(GameLevelManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x567df0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto GameLevelManager::getThreadMembers(int id) -> decltype(getThreadMembers(id)) {
	using FunctionType = decltype(getThreadMembers(id))(*)(GameLevelManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x575170, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto GameLevelManager::getTopArtists(int page, int total) -> decltype(getTopArtists(page, total)) {
	using FunctionType = decltype(getTopArtists(page, total))(*)(GameLevelManager*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x566bd0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, page, total);
}

auto GameLevelManager::getTopArtistsKey(int page) -> decltype(getTopArtistsKey(page)) {
	using FunctionType = decltype(getTopArtistsKey(page))(*)(GameLevelManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x566fa0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, page);
}

auto GameLevelManager::getUploadMessageKey(int accountID) -> decltype(getUploadMessageKey(accountID)) {
	using FunctionType = decltype(getUploadMessageKey(accountID))(*)(GameLevelManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x569090, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, accountID);
}

auto GameLevelManager::getUserInfoKey(int id) -> decltype(getUserInfoKey(id)) {
	using FunctionType = decltype(getUserInfoKey(id))(*)(GameLevelManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x567380, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto GameLevelManager::getUsers(GJSearchObject* object) -> decltype(getUsers(object)) {
	using FunctionType = decltype(getUsers(object))(*)(GameLevelManager*, GJSearchObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x566fc0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto GameLevelManager::gotoLevelPage(GJGameLevel* level) -> decltype(gotoLevelPage(level)) {
	using FunctionType = decltype(gotoLevelPage(level))(*)(GameLevelManager*, GJGameLevel*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x549d70, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, level);
}

auto GameLevelManager::handleIt(bool success, std::string response, std::string tag, GJHttpType type) -> decltype(handleIt(success, response, tag, type)) {
	using FunctionType = decltype(handleIt(success, response, tag, type))(*)(GameLevelManager*, bool, std::string, std::string, GJHttpType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x51c4e0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, success, response, tag, type);
}

auto GameLevelManager::handleItDelayed(bool success, std::string response, std::string tag, GJHttpType type) -> decltype(handleItDelayed(success, response, tag, type)) {
	using FunctionType = decltype(handleItDelayed(success, response, tag, type))(*)(GameLevelManager*, bool, std::string, std::string, GJHttpType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x51c3a0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, success, response, tag, type);
}

auto GameLevelManager::handleItND(cocos2d::CCNode* node, void* data) -> decltype(handleItND(node, data)) {
	using FunctionType = decltype(handleItND(node, data))(*)(GameLevelManager*, cocos2d::CCNode*, void*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5225f0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, node, data);
}

auto GameLevelManager::hasDailyStateBeenLoaded(GJTimedLevelType type) -> decltype(hasDailyStateBeenLoaded(type)) {
	using FunctionType = decltype(hasDailyStateBeenLoaded(type))(*)(GameLevelManager*, GJTimedLevelType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x580f90, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, type);
}

auto GameLevelManager::hasDownloadedLevel(int id) -> decltype(hasDownloadedLevel(id)) {
	using FunctionType = decltype(hasDownloadedLevel(id))(*)(GameLevelManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x55eea0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto GameLevelManager::hasDownloadedList(int id) -> decltype(hasDownloadedList(id)) {
	using FunctionType = decltype(hasDownloadedList(id))(*)(GameLevelManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x559460, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto GameLevelManager::hasLikedItem(LikeItemType type, int id, bool liked, int parentID) -> decltype(hasLikedItem(type, id, liked, parentID)) {
	using FunctionType = decltype(hasLikedItem(type, id, liked, parentID))(*)(GameLevelManager*, LikeItemType, int, bool, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x57f870, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, type, id, liked, parentID);
}

auto GameLevelManager::hasLikedItemFullCheck(LikeItemType p0, int p1, int p2) -> decltype(hasLikedItemFullCheck(p0, p1, p2)) {
	using FunctionType = decltype(hasLikedItemFullCheck(p0, p1, p2))(*)(GameLevelManager*, LikeItemType, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x57f080, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1, p2);
}

auto GameLevelManager::invalidateUserList(UserListType type, bool reload) -> decltype(invalidateUserList(type, reload)) {
	using FunctionType = decltype(invalidateUserList(type, reload))(*)(GameLevelManager*, UserListType, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x576120, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, type, reload);
}

auto GameLevelManager::isDLActive(char const* tag) -> decltype(isDLActive(tag)) {
	using FunctionType = decltype(isDLActive(tag))(*)(GameLevelManager*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x54a6a0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, tag);
}

auto GameLevelManager::isFollowingUser(int id) -> decltype(isFollowingUser(id)) {
	using FunctionType = decltype(isFollowingUser(id))(*)(GameLevelManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x54e5f0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto GameLevelManager::isPastDailyCopy(GJGameLevel* p0) -> decltype(isPastDailyCopy(p0)) {
	using FunctionType = decltype(isPastDailyCopy(p0))(*)(GameLevelManager*, GJGameLevel*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x54b9a0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto GameLevelManager::isUpdateValid(int id) -> decltype(isUpdateValid(id)) {
	using FunctionType = decltype(isUpdateValid(id))(*)(GameLevelManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x561100, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto GameLevelManager::likeItem(LikeItemType type, int id, bool liked, int parentID) -> decltype(likeItem(type, id, liked, parentID)) {
	using FunctionType = decltype(likeItem(type, id, liked, parentID))(*)(GameLevelManager*, LikeItemType, int, bool, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x57e6f0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, type, id, liked, parentID);
}

auto GameLevelManager::makeTimeStamp(char const* key) -> decltype(makeTimeStamp(key)) {
	using FunctionType = decltype(makeTimeStamp(key))(*)(GameLevelManager*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x54a1a0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, key);
}

auto GameLevelManager::markItemAsLiked(LikeItemType type, int id, bool liked, int parentID) -> decltype(markItemAsLiked(type, id, liked, parentID)) {
	using FunctionType = decltype(markItemAsLiked(type, id, liked, parentID))(*)(GameLevelManager*, LikeItemType, int, bool, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x57f110, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, type, id, liked, parentID);
}

auto GameLevelManager::markListAsDownloaded(int id) -> decltype(markListAsDownloaded(id)) {
	using FunctionType = decltype(markListAsDownloaded(id))(*)(GameLevelManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5610f0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto GameLevelManager::onBanUserCompleted(std::string response, std::string tag) -> decltype(onBanUserCompleted(response, tag)) {
	using FunctionType = decltype(onBanUserCompleted(response, tag))(*)(GameLevelManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x52b750, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onDeleteCommentCompleted(std::string response, std::string tag) -> decltype(onDeleteCommentCompleted(response, tag)) {
	using FunctionType = decltype(onDeleteCommentCompleted(response, tag))(*)(GameLevelManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x526e90, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onDeleteServerLevelCompleted(std::string response, std::string tag) -> decltype(onDeleteServerLevelCompleted(response, tag)) {
	using FunctionType = decltype(onDeleteServerLevelCompleted(response, tag))(*)(GameLevelManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x524da0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onDeleteServerLevelListCompleted(std::string response, std::string tag) -> decltype(onDeleteServerLevelListCompleted(response, tag)) {
	using FunctionType = decltype(onDeleteServerLevelListCompleted(response, tag))(*)(GameLevelManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x52fc30, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onDeleteUserMessagesCompleted(std::string response, std::string tag) -> decltype(onDeleteUserMessagesCompleted(response, tag)) {
	using FunctionType = decltype(onDeleteUserMessagesCompleted(response, tag))(*)(GameLevelManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x52ad30, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onDownloadLevelCompleted(std::string response, std::string tag) -> decltype(onDownloadLevelCompleted(response, tag)) {
	using FunctionType = decltype(onDownloadLevelCompleted(response, tag))(*)(GameLevelManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x524a50, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onDownloadUserMessageCompleted(std::string response, std::string tag) -> decltype(onDownloadUserMessageCompleted(response, tag)) {
	using FunctionType = decltype(onDownloadUserMessageCompleted(response, tag))(*)(GameLevelManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x52aef0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onGetFriendRequestsCompleted(std::string response, std::string tag) -> decltype(onGetFriendRequestsCompleted(response, tag)) {
	using FunctionType = decltype(onGetFriendRequestsCompleted(response, tag))(*)(GameLevelManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x529cc0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onGetGauntletsCompleted(std::string response, std::string tag) -> decltype(onGetGauntletsCompleted(response, tag)) {
	using FunctionType = decltype(onGetGauntletsCompleted(response, tag))(*)(GameLevelManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x52e6a0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onGetGJSecretRewardCompleted(std::string response, std::string tag) -> decltype(onGetGJSecretRewardCompleted(response, tag)) {
	using FunctionType = decltype(onGetGJSecretRewardCompleted(response, tag))(*)(GameLevelManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x736f80, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onGetGJUserInfoCompleted(std::string response, std::string tag) -> decltype(onGetGJUserInfoCompleted(response, tag)) {
	using FunctionType = decltype(onGetGJUserInfoCompleted(response, tag))(*)(GameLevelManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5282b0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onGetLeaderboardScoresCompleted(std::string response, std::string tag) -> decltype(onGetLeaderboardScoresCompleted(response, tag)) {
	using FunctionType = decltype(onGetLeaderboardScoresCompleted(response, tag))(*)(GameLevelManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x525200, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onGetLevelLeaderboardCompleted(std::string response, std::string tag) -> decltype(onGetLevelLeaderboardCompleted(response, tag)) {
	using FunctionType = decltype(onGetLevelLeaderboardCompleted(response, tag))(*)(GameLevelManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x52e480, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onGetLevelListsCompleted(std::string response, std::string tag) -> decltype(onGetLevelListsCompleted(response, tag)) {
	using FunctionType = decltype(onGetLevelListsCompleted(response, tag))(*)(GameLevelManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x52f2c0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onGetLevelRateInfoCompleted(std::string response, std::string tag) -> decltype(onGetLevelRateInfoCompleted(response, tag)) {
	using FunctionType = decltype(onGetLevelRateInfoCompleted(response, tag))(*)(GameLevelManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x530e20, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onGetLevelSaveDataCompleted(std::string response, std::string tag) -> decltype(onGetLevelSaveDataCompleted(response, tag)) {
	using FunctionType = decltype(onGetLevelSaveDataCompleted(response, tag))(*)(GameLevelManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x52bcb0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onGetMapPacksCompleted(std::string response, std::string tag) -> decltype(onGetMapPacksCompleted(response, tag)) {
	using FunctionType = decltype(onGetMapPacksCompleted(response, tag))(*)(GameLevelManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x523f40, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onGetNewsCompleted(std::string response, std::string tag) -> decltype(onGetNewsCompleted(response, tag)) {
	using FunctionType = decltype(onGetNewsCompleted(response, tag))(*)(GameLevelManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x490870, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onGetOnlineLevelsCompleted(std::string response, std::string tag) -> decltype(onGetOnlineLevelsCompleted(response, tag)) {
	using FunctionType = decltype(onGetOnlineLevelsCompleted(response, tag))(*)(GameLevelManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x523250, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onGetTopArtistsCompleted(std::string response, std::string tag) -> decltype(onGetTopArtistsCompleted(response, tag)) {
	using FunctionType = decltype(onGetTopArtistsCompleted(response, tag))(*)(GameLevelManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x52ec00, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onGetUserMessagesCompleted(std::string response, std::string tag) -> decltype(onGetUserMessagesCompleted(response, tag)) {
	using FunctionType = decltype(onGetUserMessagesCompleted(response, tag))(*)(GameLevelManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x52a540, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onGetUsersCompleted(std::string response, std::string tag) -> decltype(onGetUsersCompleted(response, tag)) {
	using FunctionType = decltype(onGetUsersCompleted(response, tag))(*)(GameLevelManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3030c0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onLikeItemCompleted(std::string response, std::string tag) -> decltype(onLikeItemCompleted(response, tag)) {
	using FunctionType = decltype(onLikeItemCompleted(response, tag))(*)(GameLevelManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5271b0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onProcessHttpRequestCompleted(cocos2d::extension::CCHttpClient* client, cocos2d::extension::CCHttpResponse* response) -> decltype(onProcessHttpRequestCompleted(client, response)) {
	using FunctionType = decltype(onProcessHttpRequestCompleted(client, response))(*)(GameLevelManager*, cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x51bf80, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, client, response);
}

auto GameLevelManager::onRateDemonCompleted(std::string response, std::string tag) -> decltype(onRateDemonCompleted(response, tag)) {
	using FunctionType = decltype(onRateDemonCompleted(response, tag))(*)(GameLevelManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x52e190, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onRateLevelAdminCompleted(std::string response, std::string tag) -> decltype(onRateLevelAdminCompleted(response, tag)) {
	using FunctionType = decltype(onRateLevelAdminCompleted(response, tag))(*)(GameLevelManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8640a0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onRateStarsCompleted(std::string response, std::string tag) -> decltype(onRateStarsCompleted(response, tag)) {
	using FunctionType = decltype(onRateStarsCompleted(response, tag))(*)(GameLevelManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x524c20, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onReadFriendRequestCompleted(std::string response, std::string tag) -> decltype(onReadFriendRequestCompleted(response, tag)) {
	using FunctionType = decltype(onReadFriendRequestCompleted(response, tag))(*)(GameLevelManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x528ad0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onReportLevelCompleted(std::string response, std::string tag) -> decltype(onReportLevelCompleted(response, tag)) {
	using FunctionType = decltype(onReportLevelCompleted(response, tag))(*)(GameLevelManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x527530, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onRequestUserAccessCompleted(std::string response, std::string tag) -> decltype(onRequestUserAccessCompleted(response, tag)) {
	using FunctionType = decltype(onRequestUserAccessCompleted(response, tag))(*)(GameLevelManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x52bb00, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onRestoreItemsCompleted(std::string response, std::string tag) -> decltype(onRestoreItemsCompleted(response, tag)) {
	using FunctionType = decltype(onRestoreItemsCompleted(response, tag))(*)(GameLevelManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x527360, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onSetLevelFeaturedCompleted(std::string response, std::string tag) -> decltype(onSetLevelFeaturedCompleted(response, tag)) {
	using FunctionType = decltype(onSetLevelFeaturedCompleted(response, tag))(*)(GameLevelManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x525090, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onSetLevelStarsCompleted(std::string response, std::string tag) -> decltype(onSetLevelStarsCompleted(response, tag)) {
	using FunctionType = decltype(onSetLevelStarsCompleted(response, tag))(*)(GameLevelManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x524f10, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onSubmitUserInfoCompleted(std::string response, std::string tag) -> decltype(onSubmitUserInfoCompleted(response, tag)) {
	using FunctionType = decltype(onSubmitUserInfoCompleted(response, tag))(*)(GameLevelManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x527520, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onSuggestLevelStarsCompleted(std::string response, std::string tag) -> decltype(onSuggestLevelStarsCompleted(response, tag)) {
	using FunctionType = decltype(onSuggestLevelStarsCompleted(response, tag))(*)(GameLevelManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x52bfa0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onUpdateDescriptionCompleted(std::string response, std::string tag) -> decltype(onUpdateDescriptionCompleted(response, tag)) {
	using FunctionType = decltype(onUpdateDescriptionCompleted(response, tag))(*)(GameLevelManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5276a0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onUpdateLevelCompleted(std::string response, std::string tag) -> decltype(onUpdateLevelCompleted(response, tag)) {
	using FunctionType = decltype(onUpdateLevelCompleted(response, tag))(*)(GameLevelManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x524b30, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onUpdateUserScoreCompleted(std::string response, std::string tag) -> decltype(onUpdateUserScoreCompleted(response, tag)) {
	using FunctionType = decltype(onUpdateUserScoreCompleted(response, tag))(*)(GameLevelManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5250a0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onUploadCommentCompleted(std::string response, std::string tag) -> decltype(onUploadCommentCompleted(response, tag)) {
	using FunctionType = decltype(onUploadCommentCompleted(response, tag))(*)(GameLevelManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x526030, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onUploadLevelListCompleted(std::string response, std::string tag) -> decltype(onUploadLevelListCompleted(response, tag)) {
	using FunctionType = decltype(onUploadLevelListCompleted(response, tag))(*)(GameLevelManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x52fa40, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::parseRestoreData(std::string str) -> decltype(parseRestoreData(str)) {
	using FunctionType = decltype(parseRestoreData(str))(*)(GameLevelManager*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x581310, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, str);
}

auto GameLevelManager::performNetworkTest() -> decltype(performNetworkTest()) {
	using FunctionType = decltype(performNetworkTest())(*)(GameLevelManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x51bde0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameLevelManager::ProcessHttpRequest(std::string endpoint, std::string params, std::string tag, GJHttpType httpType) -> decltype(ProcessHttpRequest(endpoint, params, tag, httpType)) {
	using FunctionType = decltype(ProcessHttpRequest(endpoint, params, tag, httpType))(*)(GameLevelManager*, std::string, std::string, std::string, GJHttpType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x51c140, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, endpoint, params, tag, httpType);
}

auto GameLevelManager::purgeUnusedLevels() -> decltype(purgeUnusedLevels()) {
	using FunctionType = decltype(purgeUnusedLevels())(*)(GameLevelManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x54b9e0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameLevelManager::rateDemon(int id, int diff, bool moderator) -> decltype(rateDemon(id, diff, moderator)) {
	using FunctionType = decltype(rateDemon(id, diff, moderator))(*)(GameLevelManager*, int, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x562f70, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id, diff, moderator);
}

auto GameLevelManager::rateLevelAdmin(int id, int stars, int feature, int rank, bool coins, bool updateRank) -> decltype(rateLevelAdmin(id, stars, feature, rank, coins, updateRank)) {
	using FunctionType = decltype(rateLevelAdmin(id, stars, feature, rank, coins, updateRank))(*)(GameLevelManager*, int, int, int, int, bool, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x579b10, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id, stars, feature, rank, coins, updateRank);
}

auto GameLevelManager::rateStars(int id, int diff) -> decltype(rateStars(id, diff)) {
	using FunctionType = decltype(rateStars(id, diff))(*)(GameLevelManager*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5614a0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id, diff);
}

auto GameLevelManager::removeDelimiterChars(std::string str, bool colon) -> decltype(removeDelimiterChars(str, colon)) {
	using FunctionType = decltype(removeDelimiterChars(str, colon))(*)(GameLevelManager*, std::string, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x556560, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, str, colon);
}

auto GameLevelManager::removeDLFromActive(char const* key) -> decltype(removeDLFromActive(key)) {
	using FunctionType = decltype(removeDLFromActive(key))(*)(GameLevelManager*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x54a870, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, key);
}

auto GameLevelManager::removeLevelDownloadedKeysFromDict(cocos2d::CCDictionary* dict) -> decltype(removeLevelDownloadedKeysFromDict(dict)) {
	using FunctionType = decltype(removeLevelDownloadedKeysFromDict(dict))(*)(GameLevelManager*, cocos2d::CCDictionary*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x54e940, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, dict);
}

auto GameLevelManager::removeUserFromList(int id, UserListType type) -> decltype(removeUserFromList(id, type)) {
	using FunctionType = decltype(removeUserFromList(id, type))(*)(GameLevelManager*, int, UserListType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x57c590, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id, type);
}

auto GameLevelManager::reportLevel(int id) -> decltype(reportLevel(id)) {
	using FunctionType = decltype(reportLevel(id))(*)(GameLevelManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x581320, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto GameLevelManager::requestUserAccess() -> decltype(requestUserAccess()) {
	using FunctionType = decltype(requestUserAccess())(*)(GameLevelManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x575610, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameLevelManager::resetAccountComments(int accountID) -> decltype(resetAccountComments(accountID)) {
	using FunctionType = decltype(resetAccountComments(accountID))(*)(GameLevelManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x56ba50, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, accountID);
}

auto GameLevelManager::resetCommentTimersForAccountID(int id) -> decltype(resetCommentTimersForAccountID(id)) {
	using FunctionType = decltype(resetCommentTimersForAccountID(id))(*)(GameLevelManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x56da50, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto GameLevelManager::resetCommentTimersForLevelID(int id, CommentKeyType type) -> decltype(resetCommentTimersForLevelID(id, type)) {
	using FunctionType = decltype(resetCommentTimersForLevelID(id, type))(*)(GameLevelManager*, int, CommentKeyType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x56d430, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id, type);
}

auto GameLevelManager::resetDailyLevelState(GJTimedLevelType type) -> decltype(resetDailyLevelState(type)) {
	using FunctionType = decltype(resetDailyLevelState(type))(*)(GameLevelManager*, GJTimedLevelType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x580f50, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, type);
}

auto GameLevelManager::resetGauntlets() -> decltype(resetGauntlets()) {
	using FunctionType = decltype(resetGauntlets())(*)(GameLevelManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x55e540, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameLevelManager::resetStoredUserInfo(int id) -> decltype(resetStoredUserInfo(id)) {
	using FunctionType = decltype(resetStoredUserInfo(id))(*)(GameLevelManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x567d40, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto GameLevelManager::resetTimerForKey(char const* key) -> decltype(resetTimerForKey(key)) {
	using FunctionType = decltype(resetTimerForKey(key))(*)(GameLevelManager*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x54ab80, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, key);
}

auto GameLevelManager::restoreItems() -> decltype(restoreItems()) {
	using FunctionType = decltype(restoreItems())(*)(GameLevelManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x581030, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameLevelManager::saveFetchedLevels(cocos2d::CCArray* levels) -> decltype(saveFetchedLevels(levels)) {
	using FunctionType = decltype(saveFetchedLevels(levels))(*)(GameLevelManager*, cocos2d::CCArray*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x542be0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, levels);
}

auto GameLevelManager::saveLevel(GJGameLevel* level) -> decltype(saveLevel(level)) {
	using FunctionType = decltype(saveLevel(level))(*)(GameLevelManager*, GJGameLevel*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x549300, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, level);
}

auto GameLevelManager::saveLevelList(GJLevelList* list) -> decltype(saveLevelList(list)) {
	using FunctionType = decltype(saveLevelList(list))(*)(GameLevelManager*, GJLevelList*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x543840, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, list);
}

auto GameLevelManager::saveLocalScore(int id, int value, int type) -> decltype(saveLocalScore(id, value, type)) {
	using FunctionType = decltype(saveLocalScore(id, value, type))(*)(GameLevelManager*, int, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x54ef30, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id, value, type);
}

auto GameLevelManager::setActiveSmartTemplate(GJSmartTemplate* smartTemplate) -> decltype(setActiveSmartTemplate(smartTemplate)) {
	using FunctionType = decltype(setActiveSmartTemplate(smartTemplate))(*)(GameLevelManager*, GJSmartTemplate*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x54ef50, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, smartTemplate);
}

auto GameLevelManager::setFolderName(int id, std::string name, bool local) -> decltype(setFolderName(id, name, local)) {
	using FunctionType = decltype(setFolderName(id, name, local))(*)(GameLevelManager*, int, std::string, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x54ee10, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id, name, local);
}

auto GameLevelManager::setLevelFeatured(int id, int rank, bool epic) -> decltype(setLevelFeatured(id, rank, epic)) {
	using FunctionType = decltype(setLevelFeatured(id, rank, epic))(*)(GameLevelManager*, int, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x563490, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id, rank, epic);
}

auto GameLevelManager::setLevelStars(int id, int stars, bool coins) -> decltype(setLevelStars(id, stars, coins)) {
	using FunctionType = decltype(setLevelStars(id, stars, coins))(*)(GameLevelManager*, int, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x563480, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id, stars, coins);
}

auto GameLevelManager::storeCommentsResult(cocos2d::CCArray* comments, std::string pageInfo, char const* key) -> decltype(storeCommentsResult(comments, pageInfo, key)) {
	using FunctionType = decltype(storeCommentsResult(comments, pageInfo, key))(*)(GameLevelManager*, cocos2d::CCArray*, std::string, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x568aa0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, comments, pageInfo, key);
}

auto GameLevelManager::storeDailyLevelState(int id, int remaining, GJTimedLevelType type) -> decltype(storeDailyLevelState(id, remaining, type)) {
	using FunctionType = decltype(storeDailyLevelState(id, remaining, type))(*)(GameLevelManager*, int, int, GJTimedLevelType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x580df0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id, remaining, type);
}

auto GameLevelManager::storeFriendRequest(GJFriendRequest* request) -> decltype(storeFriendRequest(request)) {
	using FunctionType = decltype(storeFriendRequest(request))(*)(GameLevelManager*, GJFriendRequest*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x567d10, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, request);
}

auto GameLevelManager::storeSearchResult(cocos2d::CCArray* levels, std::string pageInfo, char const* searchKey) -> decltype(storeSearchResult(levels, pageInfo, searchKey)) {
	using FunctionType = decltype(storeSearchResult(levels, pageInfo, searchKey))(*)(GameLevelManager*, cocos2d::CCArray*, std::string, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x549f00, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, levels, pageInfo, searchKey);
}

auto GameLevelManager::storeUserInfo(GJUserScore* score) -> decltype(storeUserInfo(score)) {
	using FunctionType = decltype(storeUserInfo(score))(*)(GameLevelManager*, GJUserScore*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x567d10, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, score);
}

auto GameLevelManager::storeUserMessage(GJUserMessage* message) -> decltype(storeUserMessage(message)) {
	using FunctionType = decltype(storeUserMessage(message))(*)(GameLevelManager*, GJUserMessage*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x567d80, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, message);
}

auto GameLevelManager::storeUserMessageReply(int id, GJUserMessage* message) -> decltype(storeUserMessageReply(id, message)) {
	using FunctionType = decltype(storeUserMessageReply(id, message))(*)(GameLevelManager*, int, GJUserMessage*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x567dc0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id, message);
}

auto GameLevelManager::storeUserNames(std::string usernameString) -> decltype(storeUserNames(usernameString)) {
	using FunctionType = decltype(storeUserNames(usernameString))(*)(GameLevelManager*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x53f7e0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, usernameString);
}

auto GameLevelManager::submitUserInfo() -> decltype(submitUserInfo()) {
	using FunctionType = decltype(submitUserInfo())(*)(GameLevelManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x564c20, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameLevelManager::tryGetUsername(int accountID) -> decltype(tryGetUsername(accountID)) {
	using FunctionType = decltype(tryGetUsername(accountID))(*)(GameLevelManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x540400, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, accountID);
}

auto GameLevelManager::unrateLevelAdmin(int id) -> decltype(unrateLevelAdmin(id)) {
	using FunctionType = decltype(unrateLevelAdmin(id))(*)(GameLevelManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x579b80, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto GameLevelManager::updateDescription(int id, std::string description) -> decltype(updateDescription(id, description)) {
	using FunctionType = decltype(updateDescription(id, description))(*)(GameLevelManager*, int, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x57d340, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id, description);
}

auto GameLevelManager::updateLevel(GJGameLevel* level) -> decltype(updateLevel(level)) {
	using FunctionType = decltype(updateLevel(level))(*)(GameLevelManager*, GJGameLevel*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x561140, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, level);
}

auto GameLevelManager::updateLevelOrders() -> decltype(updateLevelOrders()) {
	using FunctionType = decltype(updateLevelOrders())(*)(GameLevelManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x546a30, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameLevelManager::updateLevelRewards(GJGameLevel* level) -> decltype(updateLevelRewards(level)) {
	using FunctionType = decltype(updateLevelRewards(level))(*)(GameLevelManager*, GJGameLevel*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x540930, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, level);
}

auto GameLevelManager::updateThread(int p0, int p1, std::string const& p2) -> decltype(updateThread(p0, p1, p2)) {
	using FunctionType = decltype(updateThread(p0, p1, p2))(*)(GameLevelManager*, int, int, std::string const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5780e0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1, p2);
}

auto GameLevelManager::updateUsernames() -> decltype(updateUsernames()) {
	using FunctionType = decltype(updateUsernames())(*)(GameLevelManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x54e4e0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameLevelManager::updateUserScore() -> decltype(updateUserScore()) {
	using FunctionType = decltype(updateUserScore())(*)(GameLevelManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5634a0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameLevelManager::uploadAccountComment(std::string content) -> decltype(uploadAccountComment(content)) {
	using FunctionType = decltype(uploadAccountComment(content))(*)(GameLevelManager*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x56d290, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, content);
}

auto GameLevelManager::uploadComment(std::string content, CommentType type, int levelID, int percent) -> decltype(uploadComment(content, type, levelID, percent)) {
	using FunctionType = decltype(uploadComment(content, type, levelID, percent))(*)(GameLevelManager*, std::string, CommentType, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x56c2c0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, content, type, levelID, percent);
}

auto GameLevelManager::uploadFriendRequest(int accountID, std::string content) -> decltype(uploadFriendRequest(accountID, content)) {
	using FunctionType = decltype(uploadFriendRequest(accountID, content))(*)(GameLevelManager*, int, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x57a060, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, accountID, content);
}

auto GameLevelManager::uploadLevel(GJGameLevel* level) -> decltype(uploadLevel(level)) {
	using FunctionType = decltype(uploadLevel(level))(*)(GameLevelManager*, GJGameLevel*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5551c0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, level);
}

auto GameLevelManager::uploadLevelComment(int levelID, std::string content, int percent) -> decltype(uploadLevelComment(levelID, content, percent)) {
	using FunctionType = decltype(uploadLevelComment(levelID, content, percent))(*)(GameLevelManager*, int, std::string, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x56c230, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, levelID, content, percent);
}

auto GameLevelManager::uploadLevelList(GJLevelList* list) -> decltype(uploadLevelList(list)) {
	using FunctionType = decltype(uploadLevelList(list))(*)(GameLevelManager*, GJLevelList*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x11b880, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, list);
}

auto GameLevelManager::uploadUserMessage(int accountID, std::string subject, std::string content) -> decltype(uploadUserMessage(accountID, subject, content)) {
	using FunctionType = decltype(uploadUserMessage(accountID, subject, content))(*)(GameLevelManager*, int, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x562240, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, accountID, subject, content);
}

auto GameLevelManager::userIDForAccountID(int id) -> decltype(userIDForAccountID(id)) {
	using FunctionType = decltype(userIDForAccountID(id))(*)(GameLevelManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x540700, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto GameLevelManager::userInfoForAccountID(int id) -> decltype(userInfoForAccountID(id)) {
	using FunctionType = decltype(userInfoForAccountID(id))(*)(GameLevelManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x540720, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto GameLevelManager::userNameForUserID(int id) -> decltype(userNameForUserID(id)) {
	using FunctionType = decltype(userNameForUserID(id))(*)(GameLevelManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x540260, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto GameLevelManager::vaultTimedType(SearchType searchType, GJTimedLevelType& timedType) -> decltype(vaultTimedType(searchType, timedType)) {
	using FunctionType = decltype(vaultTimedType(searchType, timedType))(*)(SearchType, GJTimedLevelType&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x558500, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(searchType, timedType);
}

auto GameLevelManager::verifyContainerOnlyHasLevels(cocos2d::CCDictionary* dict) -> decltype(verifyContainerOnlyHasLevels(dict)) {
	using FunctionType = decltype(verifyContainerOnlyHasLevels(dict))(*)(GameLevelManager*, cocos2d::CCDictionary*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x54f750, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, dict);
}

auto GameLevelManager::verifyLevelState(GJGameLevel* level) -> decltype(verifyLevelState(level)) {
	using FunctionType = decltype(verifyLevelState(level))(*)(GameLevelManager*, GJGameLevel*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x540760, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, level);
}

auto GameLevelManager::writeSpecialFilters(GJSearchObject* object) -> decltype(writeSpecialFilters(object)) {
	using FunctionType = decltype(writeSpecialFilters(object))(*)(GameLevelManager*, GJSearchObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x558000, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, object);
}
