
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
	static auto func = wrapFunction<FunctionType>(base::get() + 0x499334, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(response, colon);
}

auto GameLevelManager::sharedState() -> decltype(sharedState()) {
	using FunctionType = decltype(sharedState())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4767c4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto GameLevelManager::init() -> decltype(init()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GameLevelManager::init), this);
	using FunctionType = decltype(init())(*)(GameLevelManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x494bc0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GameLevelManager::acceptFriendRequest(int accountID, int requestID) -> decltype(acceptFriendRequest(accountID, requestID)) {
	using FunctionType = decltype(acceptFriendRequest(accountID, requestID))(*)(GameLevelManager*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4c2128, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, accountID, requestID);
}

auto GameLevelManager::accountIDForUserID(int userID) -> decltype(accountIDForUserID(userID)) {
	using FunctionType = decltype(accountIDForUserID(userID))(*)(GameLevelManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4975d8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, userID);
}

auto GameLevelManager::addDLToActive(char const* key) -> decltype(addDLToActive(key)) {
	using FunctionType = decltype(addDLToActive(key))(*)(GameLevelManager*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4a06c4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, key);
}

auto GameLevelManager::adminCommentUnban(int p0, std::string const& p1) -> decltype(adminCommentUnban(p0, p1)) {
	using FunctionType = decltype(adminCommentUnban(p0, p1))(*)(GameLevelManager*, int, std::string const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4c1e10, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1);
}

auto GameLevelManager::adminDeleteUserComments(int p0, AdminDeleteScope p1, std::string const& p2, std::vector<int> const& p3) -> decltype(adminDeleteUserComments(p0, p1, p2, p3)) {
	using FunctionType = decltype(adminDeleteUserComments(p0, p1, p2, p3))(*)(GameLevelManager*, int, AdminDeleteScope, std::string const&, std::vector<int> const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4c1a48, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1, p2, p3);
}

auto GameLevelManager::areGauntletsLoaded() -> decltype(areGauntletsLoaded()) {
	using FunctionType = decltype(areGauntletsLoaded())(*)(GameLevelManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4b2778, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameLevelManager::banUser(int accountID) -> decltype(banUser(accountID)) {
	using FunctionType = decltype(banUser(accountID))(*)(GameLevelManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4b62a0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, accountID);
}

auto GameLevelManager::cleanupDailyLevels() -> decltype(cleanupDailyLevels()) {
	using FunctionType = decltype(cleanupDailyLevels())(*)(GameLevelManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4a3df4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameLevelManager::createAndGetMapPacks(std::string str) -> decltype(createAndGetMapPacks(str)) {
	using FunctionType = decltype(createAndGetMapPacks(str))(*)(GameLevelManager*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x49a294, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, str);
}

auto GameLevelManager::createAndGetScores(std::string str, GJScoreType type) -> decltype(createAndGetScores(str, type)) {
	using FunctionType = decltype(createAndGetScores(str, type))(*)(GameLevelManager*, std::string, GJScoreType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x49ada8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, str, type);
}

auto GameLevelManager::createNewLevel() -> decltype(createNewLevel()) {
	using FunctionType = decltype(createNewLevel())(*)(GameLevelManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x495280, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameLevelManager::createNewLevelList() -> decltype(createNewLevelList()) {
	using FunctionType = decltype(createNewLevelList())(*)(GameLevelManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4960b4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameLevelManager::createPageInfo(int total, int start, int count) -> decltype(createPageInfo(total, start, count)) {
	using FunctionType = decltype(createPageInfo(total, start, count))(*)(GameLevelManager*, int, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x10c2d4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, total, start, count);
}

auto GameLevelManager::createSmartTemplate() -> decltype(createSmartTemplate()) {
	using FunctionType = decltype(createSmartTemplate())(*)(GameLevelManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4a4bd8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameLevelManager::dataLoaded(DS_Dictionary* dict) -> decltype(dataLoaded(dict)) {
	using FunctionType = decltype(dataLoaded(dict))(*)(GameLevelManager*, DS_Dictionary*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4a5450, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, dict);
}

auto GameLevelManager::deleteFriendRequests(int accountID, cocos2d::CCArray* accounts, bool sent) -> decltype(deleteFriendRequests(accountID, accounts, sent)) {
	using FunctionType = decltype(deleteFriendRequests(accountID, accounts, sent))(*)(GameLevelManager*, int, cocos2d::CCArray*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4cc79c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, accountID, accounts, sent);
}

auto GameLevelManager::deleteLevel(GJGameLevel* level) -> decltype(deleteLevel(level)) {
	using FunctionType = decltype(deleteLevel(level))(*)(GameLevelManager*, GJGameLevel*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x495d18, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, level);
}

auto GameLevelManager::deleteLevelComment(int id, int levelID) -> decltype(deleteLevelComment(id, levelID)) {
	using FunctionType = decltype(deleteLevelComment(id, levelID))(*)(GameLevelManager*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4c08c8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id, levelID);
}

auto GameLevelManager::deleteLevelList(GJLevelList* list) -> decltype(deleteLevelList(list)) {
	using FunctionType = decltype(deleteLevelList(list))(*)(GameLevelManager*, GJLevelList*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x496558, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, list);
}

auto GameLevelManager::deleteSentFriendRequest(int accountID) -> decltype(deleteSentFriendRequest(accountID)) {
	using FunctionType = decltype(deleteSentFriendRequest(accountID))(*)(GameLevelManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4cc790, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, accountID);
}

auto GameLevelManager::deleteServerLevel(int p0, std::string const& p1, std::vector<int> const& p2) -> decltype(deleteServerLevel(p0, p1, p2)) {
	using FunctionType = decltype(deleteServerLevel(p0, p1, p2))(*)(GameLevelManager*, int, std::string const&, std::vector<int> const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4c95cc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1, p2);
}

auto GameLevelManager::deleteServerLevelList(int p0, std::string const& p1, std::vector<int> const& p2) -> decltype(deleteServerLevelList(p0, p1, p2)) {
	using FunctionType = decltype(deleteServerLevelList(p0, p1, p2))(*)(GameLevelManager*, int, std::string const&, std::vector<int> const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x413ec0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1, p2);
}

auto GameLevelManager::deleteSmartTemplate(GJSmartTemplate* smartTemplate) -> decltype(deleteSmartTemplate(smartTemplate)) {
	using FunctionType = decltype(deleteSmartTemplate(smartTemplate))(*)(GameLevelManager*, GJSmartTemplate*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4a4c1c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, smartTemplate);
}

auto GameLevelManager::deleteUserMessages(GJUserMessage* message, cocos2d::CCArray* messages, bool isSender) -> decltype(deleteUserMessages(message, messages, isSender)) {
	using FunctionType = decltype(deleteUserMessages(message, messages, isSender))(*)(GameLevelManager*, GJUserMessage*, cocos2d::CCArray*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4bc664, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, message, messages, isSender);
}

auto GameLevelManager::downloadLevel(int id, bool gauntletLevel, int dailyID) -> decltype(downloadLevel(id, gauntletLevel, dailyID)) {
	using FunctionType = decltype(downloadLevel(id, gauntletLevel, dailyID))(*)(GameLevelManager*, int, bool, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4b27cc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id, gauntletLevel, dailyID);
}

auto GameLevelManager::downloadUserMessage(int id, bool sent) -> decltype(downloadUserMessage(id, sent)) {
	using FunctionType = decltype(downloadUserMessage(id, sent))(*)(GameLevelManager*, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4bbd1c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id, sent);
}

auto GameLevelManager::encodeDataTo(DS_Dictionary* dict) -> decltype(encodeDataTo(dict)) {
	using FunctionType = decltype(encodeDataTo(dict))(*)(GameLevelManager*, DS_Dictionary*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4a4fa8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, dict);
}

auto GameLevelManager::firstSetup() -> decltype(firstSetup()) {
	using FunctionType = decltype(firstSetup())(*)(GameLevelManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4a4c7c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameLevelManager::followUser(int id) -> decltype(followUser(id)) {
	using FunctionType = decltype(followUser(id))(*)(GameLevelManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4a42a8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto GameLevelManager::friendRequestFromAccountID(int id) -> decltype(friendRequestFromAccountID(id)) {
	using FunctionType = decltype(friendRequestFromAccountID(id))(*)(GameLevelManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4bae94, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto GameLevelManager::getAccountCommentKey(int accountID, int page) -> decltype(getAccountCommentKey(accountID, page)) {
	using FunctionType = decltype(getAccountCommentKey(accountID, page))(*)(GameLevelManager*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4bd970, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, accountID, page);
}

auto GameLevelManager::getAccountComments(int accountID, int page, int total) -> decltype(getAccountComments(accountID, page, total)) {
	using FunctionType = decltype(getAccountComments(accountID, page, total))(*)(GameLevelManager*, int, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4bd640, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, accountID, page, total);
}

auto GameLevelManager::getActiveDailyID(GJTimedLevelType type) -> decltype(getActiveDailyID(type)) {
	using FunctionType = decltype(getActiveDailyID(type))(*)(GameLevelManager*, GJTimedLevelType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4d2c74, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, type);
}

auto GameLevelManager::getActiveSmartTemplate() -> decltype(getActiveSmartTemplate()) {
	using FunctionType = decltype(getActiveSmartTemplate())(*)(GameLevelManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4a4af8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameLevelManager::getAllSmartTemplates() -> decltype(getAllSmartTemplates()) {
	using FunctionType = decltype(getAllSmartTemplates())(*)(GameLevelManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4a4c4c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameLevelManager::getAllUsedSongIDs() -> decltype(getAllUsedSongIDs()) {
	using FunctionType = decltype(getAllUsedSongIDs())(*)(GameLevelManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4d4288, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameLevelManager::getBasePostString() -> decltype(getBasePostString()) {
	using FunctionType = decltype(getBasePostString())(*)(GameLevelManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4a7134, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameLevelManager::getCommentKey(int ID, int page, int mode, CommentKeyType keytype) -> decltype(getCommentKey(ID, page, mode, keytype)) {
	using FunctionType = decltype(getCommentKey(ID, page, mode, keytype))(*)(GameLevelManager*, int, int, int, CommentKeyType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4bd38c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, ID, page, mode, keytype);
}

auto GameLevelManager::getCompletedDailyLevels() -> decltype(getCompletedDailyLevels()) {
	using FunctionType = decltype(getCompletedDailyLevels())(*)(GameLevelManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x49eb48, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameLevelManager::getCompletedEventLevels(int minStars, int maxStars) -> decltype(getCompletedEventLevels(minStars, maxStars)) {
	using FunctionType = decltype(getCompletedEventLevels(minStars, maxStars))(*)(GameLevelManager*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x49ed14, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, minStars, maxStars);
}

auto GameLevelManager::getCompletedGauntletDemons() -> decltype(getCompletedGauntletDemons()) {
	using FunctionType = decltype(getCompletedGauntletDemons())(*)(GameLevelManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x49eef4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameLevelManager::getCompletedGauntletLevels() -> decltype(getCompletedGauntletLevels()) {
	using FunctionType = decltype(getCompletedGauntletLevels())(*)(GameLevelManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x49efcc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameLevelManager::getCompletedLevels(bool useOrbCompletion) -> decltype(getCompletedLevels(useOrbCompletion)) {
	using FunctionType = decltype(getCompletedLevels(useOrbCompletion))(*)(GameLevelManager*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x49d114, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, useOrbCompletion);
}

auto GameLevelManager::getCompletedWeeklyLevels() -> decltype(getCompletedWeeklyLevels()) {
	using FunctionType = decltype(getCompletedWeeklyLevels())(*)(GameLevelManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x49e974, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameLevelManager::getDailyID(GJTimedLevelType type) -> decltype(getDailyID(type)) {
	using FunctionType = decltype(getDailyID(type))(*)(GameLevelManager*, GJTimedLevelType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4d2c74, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, type);
}

auto GameLevelManager::getDailyTimer(GJTimedLevelType type) -> decltype(getDailyTimer(type)) {
	using FunctionType = decltype(getDailyTimer(type))(*)(GameLevelManager*, GJTimedLevelType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4d2ca8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, type);
}

auto GameLevelManager::getDeleteCommentKey(int parentID, int id, int type) -> decltype(getDeleteCommentKey(parentID, id, type)) {
	using FunctionType = decltype(getDeleteCommentKey(parentID, id, type))(*)(GameLevelManager*, int, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4bec90, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, parentID, id, type);
}

auto GameLevelManager::getDeleteMessageKey(int id, bool sent) -> decltype(getDeleteMessageKey(id, sent)) {
	using FunctionType = decltype(getDeleteMessageKey(id, sent))(*)(GameLevelManager*, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4bcb58, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id, sent);
}

auto GameLevelManager::getDemonLevelsString() -> decltype(getDemonLevelsString()) {
	using FunctionType = decltype(getDemonLevelsString())(*)(GameLevelManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x49d3b8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameLevelManager::getDescKey(int levelID) -> decltype(getDescKey(levelID)) {
	using FunctionType = decltype(getDescKey(levelID))(*)(GameLevelManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4bec40, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, levelID);
}

auto GameLevelManager::getDifficultyStr(bool isNA, bool isEasy, bool isNormal, bool isHard, bool isHarder, bool isInsane, bool isDemon, bool isAuto) -> decltype(getDifficultyStr(isNA, isEasy, isNormal, isHard, isHarder, isInsane, isDemon, isAuto)) {
	using FunctionType = decltype(getDifficultyStr(isNA, isEasy, isNormal, isHard, isHarder, isInsane, isDemon, isAuto))(*)(GameLevelManager*, bool, bool, bool, bool, bool, bool, bool, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4abc34, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, isNA, isEasy, isNormal, isHard, isHarder, isInsane, isDemon, isAuto);
}

auto GameLevelManager::getFolderName(int id, bool local) -> decltype(getFolderName(id, local)) {
	using FunctionType = decltype(getFolderName(id, local))(*)(GameLevelManager*, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4a483c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id, local);
}

auto GameLevelManager::getFollowing() -> decltype(getFollowing()) {
	using FunctionType = decltype(getFollowing())(*)(GameLevelManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4c8c0c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameLevelManager::getFriendRequests(bool p0, int p1, int p2, std::string const& p3, bool p4) -> decltype(getFriendRequests(p0, p1, p2, p3, p4)) {
	using FunctionType = decltype(getFriendRequests(p0, p1, p2, p3, p4))(*)(GameLevelManager*, bool, int, int, std::string const&, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4baee8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1, p2, p3, p4);
}

auto GameLevelManager::getGauntletLevels(int id) -> decltype(getGauntletLevels(id)) {
	using FunctionType = decltype(getGauntletLevels(id))(*)(GameLevelManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4b21e0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto GameLevelManager::getGauntlets() -> decltype(getGauntlets()) {
	using FunctionType = decltype(getGauntlets())(*)(GameLevelManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4b1ab0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameLevelManager::getGauntletSearchKey(int id) -> decltype(getGauntletSearchKey(id)) {
	using FunctionType = decltype(getGauntletSearchKey(id))(*)(GameLevelManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4b19f0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto GameLevelManager::getGJChallenges() -> decltype(getGJChallenges()) {
	using FunctionType = decltype(getGJChallenges())(*)(GameLevelManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4d2254, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameLevelManager::getGJRewards(int type) -> decltype(getGJRewards(type)) {
	using FunctionType = decltype(getGJRewards(type))(*)(GameLevelManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4d1c68, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, type);
}

auto GameLevelManager::getGJUserInfo(int id) -> decltype(getGJUserInfo(id)) {
	using FunctionType = decltype(getGJUserInfo(id))(*)(GameLevelManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4ba528, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto GameLevelManager::getHighestLevelOrder() -> decltype(getHighestLevelOrder()) {
	using FunctionType = decltype(getHighestLevelOrder())(*)(GameLevelManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x49ceb4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameLevelManager::getLeaderboardKey(LeaderboardType type, LeaderboardStat stat) -> decltype(getLeaderboardKey(type, stat)) {
	using FunctionType = decltype(getLeaderboardKey(type, stat))(*)(GameLevelManager*, LeaderboardType, LeaderboardStat);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4b62a4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, type, stat);
}

auto GameLevelManager::getLeaderboardScores(LeaderboardType type, LeaderboardStat stat) -> decltype(getLeaderboardScores(type, stat)) {
	using FunctionType = decltype(getLeaderboardScores(type, stat))(*)(GameLevelManager*, LeaderboardType, LeaderboardStat);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4b88c4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, type, stat);
}

auto GameLevelManager::getLengthStr(bool isTiny, bool isShort, bool isMedium, bool isLong, bool isXL, bool isPlat) -> decltype(getLengthStr(isTiny, isShort, isMedium, isLong, isXL, isPlat)) {
	using FunctionType = decltype(getLengthStr(isTiny, isShort, isMedium, isLong, isXL, isPlat))(*)(GameLevelManager*, bool, bool, bool, bool, bool, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4ac1c0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, isTiny, isShort, isMedium, isLong, isXL, isPlat);
}

auto GameLevelManager::getLevelComments(int ID, int page, int total, int mode, CommentKeyType keytype) -> decltype(getLevelComments(ID, page, total, mode, keytype)) {
	using FunctionType = decltype(getLevelComments(ID, page, total, mode, keytype))(*)(GameLevelManager*, int, int, int, int, CommentKeyType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4bcec8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, ID, page, total, mode, keytype);
}

auto GameLevelManager::getLevelDownloadKey(int levelID, bool isGauntlet, int dailyID) -> decltype(getLevelDownloadKey(levelID, isGauntlet, dailyID)) {
	using FunctionType = decltype(getLevelDownloadKey(levelID, isGauntlet, dailyID))(*)(GameLevelManager*, int, bool, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4b27a0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, levelID, isGauntlet, dailyID);
}

auto GameLevelManager::getLevelKey(int levelID) -> decltype(getLevelKey(levelID)) {
	using FunctionType = decltype(getLevelKey(levelID))(*)(GameLevelManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4950d4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, levelID);
}

auto GameLevelManager::getLevelLeaderboard(GJGameLevel* level, LevelLeaderboardType type, LevelLeaderboardMode mode) -> decltype(getLevelLeaderboard(level, type, mode)) {
	using FunctionType = decltype(getLevelLeaderboard(level, type, mode))(*)(GameLevelManager*, GJGameLevel*, LevelLeaderboardType, LevelLeaderboardMode);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4b8ee4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, level, type, mode);
}

auto GameLevelManager::getLevelLeaderboardKey(int levelID, LevelLeaderboardType type, LevelLeaderboardMode mode) -> decltype(getLevelLeaderboardKey(levelID, type, mode)) {
	using FunctionType = decltype(getLevelLeaderboardKey(levelID, type, mode))(*)(GameLevelManager*, int, LevelLeaderboardType, LevelLeaderboardMode);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4b9cec, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, levelID, type, mode);
}

auto GameLevelManager::getLevelListKey(int listID) -> decltype(getLevelListKey(listID)) {
	using FunctionType = decltype(getLevelListKey(listID))(*)(GameLevelManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x49669c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, listID);
}

auto GameLevelManager::getLevelSaveData() -> decltype(getLevelSaveData()) {
	using FunctionType = decltype(getLevelSaveData())(*)(GameLevelManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4ad9e4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameLevelManager::getLikeAccountItemKey(LikeItemType type, int id, bool liked, int parentID) -> decltype(getLikeAccountItemKey(type, id, liked, parentID)) {
	using FunctionType = decltype(getLikeAccountItemKey(type, id, liked, parentID))(*)(GameLevelManager*, LikeItemType, int, bool, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4d1608, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, type, id, liked, parentID);
}

auto GameLevelManager::getLikeItemKey(LikeItemType type, int id, bool liked, int parentID) -> decltype(getLikeItemKey(type, id, liked, parentID)) {
	using FunctionType = decltype(getLikeItemKey(type, id, liked, parentID))(*)(GameLevelManager*, LikeItemType, int, bool, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4d0f28, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, type, id, liked, parentID);
}

auto GameLevelManager::getLocalLevelByName(std::string name) -> decltype(getLocalLevelByName(name)) {
	using FunctionType = decltype(getLocalLevelByName(name))(*)(GameLevelManager*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4950fc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, name);
}

auto GameLevelManager::getLocalLevelList(int uniqueID) -> decltype(getLocalLevelList(uniqueID)) {
	using FunctionType = decltype(getLocalLevelList(uniqueID))(*)(GameLevelManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x495200, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, uniqueID);
}

auto GameLevelManager::getLowestLevelOrder() -> decltype(getLowestLevelOrder()) {
	using FunctionType = decltype(getLowestLevelOrder())(*)(GameLevelManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x49cef0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameLevelManager::getMainLevel(int levelID, bool dontGetLevelString) -> decltype(getMainLevel(levelID, dontGetLevelString)) {
	using FunctionType = decltype(getMainLevel(levelID, dontGetLevelString))(*)(GameLevelManager*, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x494d00, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, levelID, dontGetLevelString);
}

auto GameLevelManager::getMapPacks(GJSearchObject* object) -> decltype(getMapPacks(object)) {
	using FunctionType = decltype(getMapPacks(object))(*)(GameLevelManager*, GJSearchObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4adc94, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto GameLevelManager::getMessageKey(int id) -> decltype(getMessageKey(id)) {
	using FunctionType = decltype(getMessageKey(id))(*)(GameLevelManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4bc058, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto GameLevelManager::getMessagesKey(bool sent, int page) -> decltype(getMessagesKey(sent, page)) {
	using FunctionType = decltype(getMessagesKey(sent, page))(*)(GameLevelManager*, bool, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4bb22c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sent, page);
}

auto GameLevelManager::getNews() -> decltype(getNews()) {
	using FunctionType = decltype(getNews())(*)(GameLevelManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4bceb4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameLevelManager::getNextFreeTemplateID() -> decltype(getNextFreeTemplateID()) {
	using FunctionType = decltype(getNextFreeTemplateID())(*)(GameLevelManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4a4b08, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameLevelManager::getNextLevelName(std::string name) -> decltype(getNextLevelName(name)) {
	using FunctionType = decltype(getNextLevelName(name))(*)(GameLevelManager*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x495724, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, name);
}

auto GameLevelManager::getOnlineLevels(GJSearchObject* object) -> decltype(getOnlineLevels(object)) {
	using FunctionType = decltype(getOnlineLevels(object))(*)(GameLevelManager*, GJSearchObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4acc8c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto GameLevelManager::getPageInfo(char const* key) -> decltype(getPageInfo(key)) {
	using FunctionType = decltype(getPageInfo(key))(*)(GameLevelManager*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4a03e8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, key);
}

auto GameLevelManager::getPostCommentKey(int parentID) -> decltype(getPostCommentKey(parentID)) {
	using FunctionType = decltype(getPostCommentKey(parentID))(*)(GameLevelManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4bec68, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, parentID);
}

auto GameLevelManager::getRateStarsKey(int levelID) -> decltype(getRateStarsKey(levelID)) {
	using FunctionType = decltype(getRateStarsKey(levelID))(*)(GameLevelManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4b5a84, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, levelID);
}

auto GameLevelManager::getSavedDailyLevel(int dailyID) -> decltype(getSavedDailyLevel(dailyID)) {
	using FunctionType = decltype(getSavedDailyLevel(dailyID))(*)(GameLevelManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x49f0a4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, dailyID);
}

auto GameLevelManager::getSavedDailyLevelFromLevelID(int id) -> decltype(getSavedDailyLevelFromLevelID(id)) {
	using FunctionType = decltype(getSavedDailyLevelFromLevelID(id))(*)(GameLevelManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x49f3e0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto GameLevelManager::getSavedLevel(GJGameLevel* level) -> decltype(getSavedLevel(level)) {
	using FunctionType = decltype(getSavedLevel(level))(*)(GameLevelManager*, GJGameLevel*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4997ec, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, level);
}

auto GameLevelManager::getSavedLevel(int id) -> decltype(getSavedLevel(id)) {
	using FunctionType = decltype(getSavedLevel(id))(*)(GameLevelManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x49f2cc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto GameLevelManager::getSavedLevelLists(int folder) -> decltype(getSavedLevelLists(folder)) {
	using FunctionType = decltype(getSavedLevelLists(folder))(*)(GameLevelManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x49cdec, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, folder);
}

auto GameLevelManager::getSavedLevels(bool favorite, int folder) -> decltype(getSavedLevels(favorite, folder)) {
	using FunctionType = decltype(getSavedLevels(favorite, folder))(*)(GameLevelManager*, bool, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x49cc18, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, favorite, folder);
}

auto GameLevelManager::getSearchScene(char const* key) -> decltype(getSearchScene(key)) {
	using FunctionType = decltype(getSearchScene(key))(*)(GameLevelManager*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4a0c70, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, key);
}

auto GameLevelManager::getSplitIntFromKey(char const* key, int index) -> decltype(getSplitIntFromKey(key, index)) {
	using FunctionType = decltype(getSplitIntFromKey(key, index))(*)(GameLevelManager*, char const*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4b6844, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, key, index);
}

auto GameLevelManager::getStarLevelsString() -> decltype(getStarLevelsString()) {
	using FunctionType = decltype(getStarLevelsString())(*)(GameLevelManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x49d698, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameLevelManager::getStoredLevelComments(char const* key) -> decltype(getStoredLevelComments(key)) {
	using FunctionType = decltype(getStoredLevelComments(key))(*)(GameLevelManager*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4bf034, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, key);
}

auto GameLevelManager::getStoredOnlineLevels(char const* key) -> decltype(getStoredOnlineLevels(key)) {
	using FunctionType = decltype(getStoredOnlineLevels(key))(*)(GameLevelManager*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4a018c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, key);
}

auto GameLevelManager::getStoredUserMessage(int id) -> decltype(getStoredUserMessage(id)) {
	using FunctionType = decltype(getStoredUserMessage(id))(*)(GameLevelManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4baeb4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto GameLevelManager::getStoredUserMessageReply(int id) -> decltype(getStoredUserMessageReply(id)) {
	using FunctionType = decltype(getStoredUserMessageReply(id))(*)(GameLevelManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4baedc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto GameLevelManager::getThreadMembers(int id) -> decltype(getThreadMembers(id)) {
	using FunctionType = decltype(getThreadMembers(id))(*)(GameLevelManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4c77f0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto GameLevelManager::getThreads(int p0, std::string const& p1, int p2, std::string const& p3) -> decltype(getThreads(p0, p1, p2, p3)) {
	using FunctionType = decltype(getThreads(p0, p1, p2, p3))(*)(GameLevelManager*, int, std::string const&, int, std::string const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4c53d0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1, p2, p3);
}

auto GameLevelManager::getTopArtists(int page, int total) -> decltype(getTopArtists(page, total)) {
	using FunctionType = decltype(getTopArtists(page, total))(*)(GameLevelManager*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4b9db4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, page, total);
}

auto GameLevelManager::getTopArtistsKey(int page) -> decltype(getTopArtistsKey(page)) {
	using FunctionType = decltype(getTopArtistsKey(page))(*)(GameLevelManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4ba15c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, page);
}

auto GameLevelManager::getUploadMessageKey(int accountID) -> decltype(getUploadMessageKey(accountID)) {
	using FunctionType = decltype(getUploadMessageKey(accountID))(*)(GameLevelManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4bc080, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, accountID);
}

auto GameLevelManager::getUserInfoKey(int id) -> decltype(getUserInfoKey(id)) {
	using FunctionType = decltype(getUserInfoKey(id))(*)(GameLevelManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4ba500, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto GameLevelManager::getUserList(UserListType type) -> decltype(getUserList(type)) {
	using FunctionType = decltype(getUserList(type))(*)(GameLevelManager*, UserListType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x91948, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, type);
}

auto GameLevelManager::getUserMessages(bool sent, int page, int total) -> decltype(getUserMessages(sent, page, total)) {
	using FunctionType = decltype(getUserMessages(sent, page, total))(*)(GameLevelManager*, bool, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4baee8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sent, page, total);
}

auto GameLevelManager::gotoLevelPage(GJGameLevel* level) -> decltype(gotoLevelPage(level)) {
	using FunctionType = decltype(gotoLevelPage(level))(*)(GameLevelManager*, GJGameLevel*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x49fbf4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, level);
}

auto GameLevelManager::handleIt(bool success, std::string response, std::string tag, GJHttpType type) -> decltype(handleIt(success, response, tag, type)) {
	using FunctionType = decltype(handleIt(success, response, tag, type))(*)(GameLevelManager*, bool, std::string, std::string, GJHttpType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4770a8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, success, response, tag, type);
}

auto GameLevelManager::handleItDelayed(bool success, std::string response, std::string tag, GJHttpType type) -> decltype(handleItDelayed(success, response, tag, type)) {
	using FunctionType = decltype(handleItDelayed(success, response, tag, type))(*)(GameLevelManager*, bool, std::string, std::string, GJHttpType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x476f3c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, success, response, tag, type);
}

auto GameLevelManager::handleItND(cocos2d::CCNode* node, void* data) -> decltype(handleItND(node, data)) {
	using FunctionType = decltype(handleItND(node, data))(*)(GameLevelManager*, cocos2d::CCNode*, void*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x47be10, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, node, data);
}

auto GameLevelManager::hasDailyStateBeenLoaded(GJTimedLevelType type) -> decltype(hasDailyStateBeenLoaded(type)) {
	using FunctionType = decltype(hasDailyStateBeenLoaded(type))(*)(GameLevelManager*, GJTimedLevelType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4d2c28, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, type);
}

auto GameLevelManager::hasDownloadedLevel(int id) -> decltype(hasDownloadedLevel(id)) {
	using FunctionType = decltype(hasDownloadedLevel(id))(*)(GameLevelManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4b2fc0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto GameLevelManager::hasDownloadedList(int id) -> decltype(hasDownloadedList(id)) {
	using FunctionType = decltype(hasDownloadedList(id))(*)(GameLevelManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4ad9dc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto GameLevelManager::hasLikedItem(LikeItemType type, int id, bool liked, int parentID) -> decltype(hasLikedItem(type, id, liked, parentID)) {
	using FunctionType = decltype(hasLikedItem(type, id, liked, parentID))(*)(GameLevelManager*, LikeItemType, int, bool, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4d1634, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, type, id, liked, parentID);
}

auto GameLevelManager::hasLikedItemFullCheck(LikeItemType p0, int p1, int p2) -> decltype(hasLikedItemFullCheck(p0, p1, p2)) {
	using FunctionType = decltype(hasLikedItemFullCheck(p0, p1, p2))(*)(GameLevelManager*, LikeItemType, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4d0d7c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1, p2);
}

auto GameLevelManager::invalidateUserList(UserListType type, bool reload) -> decltype(invalidateUserList(type, reload)) {
	using FunctionType = decltype(invalidateUserList(type, reload))(*)(GameLevelManager*, UserListType, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4c870c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, type, reload);
}

auto GameLevelManager::isDLActive(char const* tag) -> decltype(isDLActive(tag)) {
	using FunctionType = decltype(isDLActive(tag))(*)(GameLevelManager*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4a05d0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, tag);
}

auto GameLevelManager::isFollowingUser(int id) -> decltype(isFollowingUser(id)) {
	using FunctionType = decltype(isFollowingUser(id))(*)(GameLevelManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4a41a4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto GameLevelManager::isPastDailyCopy(GJGameLevel* p0) -> decltype(isPastDailyCopy(p0)) {
	using FunctionType = decltype(isPastDailyCopy(p0))(*)(GameLevelManager*, GJGameLevel*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4a17a8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto GameLevelManager::isUpdateValid(int id) -> decltype(isUpdateValid(id)) {
	using FunctionType = decltype(isUpdateValid(id))(*)(GameLevelManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4b4d5c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto GameLevelManager::likeItem(LikeItemType type, int id, bool liked, int parentID) -> decltype(likeItem(type, id, liked, parentID)) {
	using FunctionType = decltype(likeItem(type, id, liked, parentID))(*)(GameLevelManager*, LikeItemType, int, bool, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4d0554, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, type, id, liked, parentID);
}

auto GameLevelManager::makeTimeStamp(char const* key) -> decltype(makeTimeStamp(key)) {
	using FunctionType = decltype(makeTimeStamp(key))(*)(GameLevelManager*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x19455c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, key);
}

auto GameLevelManager::markItemAsLiked(LikeItemType type, int id, bool liked, int parentID) -> decltype(markItemAsLiked(type, id, liked, parentID)) {
	using FunctionType = decltype(markItemAsLiked(type, id, liked, parentID))(*)(GameLevelManager*, LikeItemType, int, bool, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4d0e28, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, type, id, liked, parentID);
}

auto GameLevelManager::markListAsDownloaded(int id) -> decltype(markListAsDownloaded(id)) {
	using FunctionType = decltype(markListAsDownloaded(id))(*)(GameLevelManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4b4d54, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto GameLevelManager::onBanUserCompleted(std::string response, std::string tag) -> decltype(onBanUserCompleted(response, tag)) {
	using FunctionType = decltype(onBanUserCompleted(response, tag))(*)(GameLevelManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4847f0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onDeleteCommentCompleted(std::string response, std::string tag) -> decltype(onDeleteCommentCompleted(response, tag)) {
	using FunctionType = decltype(onDeleteCommentCompleted(response, tag))(*)(GameLevelManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x48008c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onDeleteServerLevelCompleted(std::string response, std::string tag) -> decltype(onDeleteServerLevelCompleted(response, tag)) {
	using FunctionType = decltype(onDeleteServerLevelCompleted(response, tag))(*)(GameLevelManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x47e1c8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onDeleteServerLevelListCompleted(std::string response, std::string tag) -> decltype(onDeleteServerLevelListCompleted(response, tag)) {
	using FunctionType = decltype(onDeleteServerLevelListCompleted(response, tag))(*)(GameLevelManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4886f8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onDownloadUserMessageCompleted(std::string response, std::string tag) -> decltype(onDownloadUserMessageCompleted(response, tag)) {
	using FunctionType = decltype(onDownloadUserMessageCompleted(response, tag))(*)(GameLevelManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x483fac, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onGetFriendRequestsCompleted(std::string response, std::string tag) -> decltype(onGetFriendRequestsCompleted(response, tag)) {
	using FunctionType = decltype(onGetFriendRequestsCompleted(response, tag))(*)(GameLevelManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x482ea0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onGetGauntletsCompleted(std::string response, std::string tag) -> decltype(onGetGauntletsCompleted(response, tag)) {
	using FunctionType = decltype(onGetGauntletsCompleted(response, tag))(*)(GameLevelManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x487298, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onGetGJDailyLevelStateCompleted(std::string response, std::string tag) -> decltype(onGetGJDailyLevelStateCompleted(response, tag)) {
	using FunctionType = decltype(onGetGJDailyLevelStateCompleted(response, tag))(*)(GameLevelManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x85f08c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onGetGJRewardsCompleted(std::string response, std::string tag) -> decltype(onGetGJRewardsCompleted(response, tag)) {
	using FunctionType = decltype(onGetGJRewardsCompleted(response, tag))(*)(GameLevelManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x485204, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onGetGJUserInfoCompleted(std::string response, std::string tag) -> decltype(onGetGJUserInfoCompleted(response, tag)) {
	using FunctionType = decltype(onGetGJUserInfoCompleted(response, tag))(*)(GameLevelManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4814e4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onGetLeaderboardScoresCompleted(std::string response, std::string tag) -> decltype(onGetLeaderboardScoresCompleted(response, tag)) {
	using FunctionType = decltype(onGetLeaderboardScoresCompleted(response, tag))(*)(GameLevelManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x47e644, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onGetLevelLeaderboardCompleted(std::string response, std::string tag) -> decltype(onGetLevelLeaderboardCompleted(response, tag)) {
	using FunctionType = decltype(onGetLevelLeaderboardCompleted(response, tag))(*)(GameLevelManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x487050, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onGetLevelListsCompleted(std::string response, std::string tag) -> decltype(onGetLevelListsCompleted(response, tag)) {
	using FunctionType = decltype(onGetLevelListsCompleted(response, tag))(*)(GameLevelManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x487e94, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onGetLevelRateInfoCompleted(std::string response, std::string tag) -> decltype(onGetLevelRateInfoCompleted(response, tag)) {
	using FunctionType = decltype(onGetLevelRateInfoCompleted(response, tag))(*)(GameLevelManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4896d4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onGetLevelSaveDataCompleted(std::string response, std::string tag) -> decltype(onGetLevelSaveDataCompleted(response, tag)) {
	using FunctionType = decltype(onGetLevelSaveDataCompleted(response, tag))(*)(GameLevelManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x484d38, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onGetMapPacksCompleted(std::string response, std::string tag) -> decltype(onGetMapPacksCompleted(response, tag)) {
	using FunctionType = decltype(onGetMapPacksCompleted(response, tag))(*)(GameLevelManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x47d4b4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onGetOnlineLevelsCompleted(std::string response, std::string tag) -> decltype(onGetOnlineLevelsCompleted(response, tag)) {
	using FunctionType = decltype(onGetOnlineLevelsCompleted(response, tag))(*)(GameLevelManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x47c9c4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onGetThreadsCompleted(std::string p0, std::string p1) -> decltype(onGetThreadsCompleted(p0, p1)) {
	using FunctionType = decltype(onGetThreadsCompleted(p0, p1))(*)(GameLevelManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4900a8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1);
}

auto GameLevelManager::onGetTopArtistsCompleted(std::string response, std::string tag) -> decltype(onGetTopArtistsCompleted(response, tag)) {
	using FunctionType = decltype(onGetTopArtistsCompleted(response, tag))(*)(GameLevelManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x487814, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onGetUserListCompleted(std::string response, std::string tag) -> decltype(onGetUserListCompleted(response, tag)) {
	using FunctionType = decltype(onGetUserListCompleted(response, tag))(*)(GameLevelManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4826a4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onGetUserMessagesCompleted(std::string response, std::string tag) -> decltype(onGetUserMessagesCompleted(response, tag)) {
	using FunctionType = decltype(onGetUserMessagesCompleted(response, tag))(*)(GameLevelManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x483670, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onGetUsersCompleted(std::string response, std::string tag) -> decltype(onGetUsersCompleted(response, tag)) {
	using FunctionType = decltype(onGetUsersCompleted(response, tag))(*)(GameLevelManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x48433c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onLikeItemCompleted(std::string response, std::string tag) -> decltype(onLikeItemCompleted(response, tag)) {
	using FunctionType = decltype(onLikeItemCompleted(response, tag))(*)(GameLevelManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4803bc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onProcessHttpRequestCompleted(cocos2d::extension::CCHttpClient* client, cocos2d::extension::CCHttpResponse* response) -> decltype(onProcessHttpRequestCompleted(client, response)) {
	using FunctionType = decltype(onProcessHttpRequestCompleted(client, response))(*)(GameLevelManager*, cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x476b24, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, client, response);
}

auto GameLevelManager::onRateDemonCompleted(std::string response, std::string tag) -> decltype(onRateDemonCompleted(response, tag)) {
	using FunctionType = decltype(onRateDemonCompleted(response, tag))(*)(GameLevelManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x486da8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onRateLevelAdminCompleted(std::string response, std::string tag) -> decltype(onRateLevelAdminCompleted(response, tag)) {
	using FunctionType = decltype(onRateLevelAdminCompleted(response, tag))(*)(GameLevelManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x758dac, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onRateStarsCompleted(std::string response, std::string tag) -> decltype(onRateStarsCompleted(response, tag)) {
	using FunctionType = decltype(onRateStarsCompleted(response, tag))(*)(GameLevelManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x47e034, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onReadFriendRequestCompleted(std::string response, std::string tag) -> decltype(onReadFriendRequestCompleted(response, tag)) {
	using FunctionType = decltype(onReadFriendRequestCompleted(response, tag))(*)(GameLevelManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x481d18, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onReportLevelCompleted(std::string response, std::string tag) -> decltype(onReportLevelCompleted(response, tag)) {
	using FunctionType = decltype(onReportLevelCompleted(response, tag))(*)(GameLevelManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4807b8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onRequestUserAccessCompleted(std::string response, std::string tag) -> decltype(onRequestUserAccessCompleted(response, tag)) {
	using FunctionType = decltype(onRequestUserAccessCompleted(response, tag))(*)(GameLevelManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x484b5c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onRestoreItemsCompleted(std::string response, std::string tag) -> decltype(onRestoreItemsCompleted(response, tag)) {
	using FunctionType = decltype(onRestoreItemsCompleted(response, tag))(*)(GameLevelManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4805a4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onSendThreadMessageCompleted(std::string p0, std::string p1) -> decltype(onSendThreadMessageCompleted(p0, p1)) {
	using FunctionType = decltype(onSendThreadMessageCompleted(p0, p1))(*)(GameLevelManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x48fd50, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1);
}

auto GameLevelManager::onSetLevelFeaturedCompleted(std::string response, std::string tag) -> decltype(onSetLevelFeaturedCompleted(response, tag)) {
	using FunctionType = decltype(onSetLevelFeaturedCompleted(response, tag))(*)(GameLevelManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x47e4c8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onSetLevelStarsCompleted(std::string response, std::string tag) -> decltype(onSetLevelStarsCompleted(response, tag)) {
	using FunctionType = decltype(onSetLevelStarsCompleted(response, tag))(*)(GameLevelManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x47e344, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onSubmitUserInfoCompleted(std::string response, std::string tag) -> decltype(onSubmitUserInfoCompleted(response, tag)) {
	using FunctionType = decltype(onSubmitUserInfoCompleted(response, tag))(*)(GameLevelManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4807b4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onSuggestLevelStarsCompleted(std::string response, std::string tag) -> decltype(onSuggestLevelStarsCompleted(response, tag)) {
	using FunctionType = decltype(onSuggestLevelStarsCompleted(response, tag))(*)(GameLevelManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x485014, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onUpdateDescriptionCompleted(std::string response, std::string tag) -> decltype(onUpdateDescriptionCompleted(response, tag)) {
	using FunctionType = decltype(onUpdateDescriptionCompleted(response, tag))(*)(GameLevelManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x48092c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onUpdateThreadCompleted(std::string p0, std::string p1) -> decltype(onUpdateThreadCompleted(p0, p1)) {
	using FunctionType = decltype(onUpdateThreadCompleted(p0, p1))(*)(GameLevelManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x491ed8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1);
}

auto GameLevelManager::onUpdateUserScoreCompleted(std::string response, std::string tag) -> decltype(onUpdateUserScoreCompleted(response, tag)) {
	using FunctionType = decltype(onUpdateUserScoreCompleted(response, tag))(*)(GameLevelManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x47e4cc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onUploadCommentCompleted(std::string response, std::string tag) -> decltype(onUploadCommentCompleted(response, tag)) {
	using FunctionType = decltype(onUploadCommentCompleted(response, tag))(*)(GameLevelManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x47f3c8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onUploadFriendRequestCompleted(std::string response, std::string tag) -> decltype(onUploadFriendRequestCompleted(response, tag)) {
	using FunctionType = decltype(onUploadFriendRequestCompleted(response, tag))(*)(GameLevelManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x481724, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onUploadLevelListCompleted(std::string response, std::string tag) -> decltype(onUploadLevelListCompleted(response, tag)) {
	using FunctionType = decltype(onUploadLevelListCompleted(response, tag))(*)(GameLevelManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x488554, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::parseRestoreData(std::string str) -> decltype(parseRestoreData(str)) {
	using FunctionType = decltype(parseRestoreData(str))(*)(GameLevelManager*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3f9394, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, str);
}

auto GameLevelManager::performNetworkTest() -> decltype(performNetworkTest()) {
	using FunctionType = decltype(performNetworkTest())(*)(GameLevelManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4769a0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameLevelManager::ProcessHttpRequest(std::string endpoint, std::string params, std::string tag, GJHttpType httpType) -> decltype(ProcessHttpRequest(endpoint, params, tag, httpType)) {
	using FunctionType = decltype(ProcessHttpRequest(endpoint, params, tag, httpType))(*)(GameLevelManager*, std::string, std::string, std::string, GJHttpType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x476d14, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, endpoint, params, tag, httpType);
}

auto GameLevelManager::purgeUnusedLevels() -> decltype(purgeUnusedLevels()) {
	using FunctionType = decltype(purgeUnusedLevels())(*)(GameLevelManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4a1800, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameLevelManager::rateDemon(int id, int diff, bool moderator) -> decltype(rateDemon(id, diff, moderator)) {
	using FunctionType = decltype(rateDemon(id, diff, moderator))(*)(GameLevelManager*, int, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4b6984, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id, diff, moderator);
}

auto GameLevelManager::rateLevelAdmin(int id, int stars, int feature, int rank, bool coins, bool updateRank) -> decltype(rateLevelAdmin(id, stars, feature, rank, coins, updateRank)) {
	using FunctionType = decltype(rateLevelAdmin(id, stars, feature, rank, coins, updateRank))(*)(GameLevelManager*, int, int, int, int, bool, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4cbdf8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id, stars, feature, rank, coins, updateRank);
}

auto GameLevelManager::rateStars(int id, int diff) -> decltype(rateStars(id, diff)) {
	using FunctionType = decltype(rateStars(id, diff))(*)(GameLevelManager*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4b50ec, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id, diff);
}

auto GameLevelManager::removeDelimiterChars(std::string str, bool colon) -> decltype(removeDelimiterChars(str, colon)) {
	using FunctionType = decltype(removeDelimiterChars(str, colon))(*)(GameLevelManager*, std::string, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4aaffc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, str, colon);
}

auto GameLevelManager::removeDLFromActive(char const* key) -> decltype(removeDLFromActive(key)) {
	using FunctionType = decltype(removeDLFromActive(key))(*)(GameLevelManager*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4a07c8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, key);
}

auto GameLevelManager::removeLevelDownloadedKeysFromDict(cocos2d::CCDictionary* dict) -> decltype(removeLevelDownloadedKeysFromDict(dict)) {
	using FunctionType = decltype(removeLevelDownloadedKeysFromDict(dict))(*)(GameLevelManager*, cocos2d::CCDictionary*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4a4538, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, dict);
}

auto GameLevelManager::removeUserFromList(int id, UserListType type) -> decltype(removeUserFromList(id, type)) {
	using FunctionType = decltype(removeUserFromList(id, type))(*)(GameLevelManager*, int, UserListType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4ce578, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id, type);
}

auto GameLevelManager::reportLevel(int id) -> decltype(reportLevel(id)) {
	using FunctionType = decltype(reportLevel(id))(*)(GameLevelManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4d2fc8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto GameLevelManager::requestUserAccess() -> decltype(requestUserAccess()) {
	using FunctionType = decltype(requestUserAccess())(*)(GameLevelManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4d12cc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameLevelManager::resetAccountComments(int accountID) -> decltype(resetAccountComments(accountID)) {
	using FunctionType = decltype(resetAccountComments(accountID))(*)(GameLevelManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4be920, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, accountID);
}

auto GameLevelManager::resetAllTimers() -> decltype(resetAllTimers()) {
	using FunctionType = decltype(resetAllTimers())(*)(GameLevelManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5fcf0c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameLevelManager::resetGauntlets() -> decltype(resetGauntlets()) {
	using FunctionType = decltype(resetGauntlets())(*)(GameLevelManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4b2798, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameLevelManager::resetStoredUserInfo(int id) -> decltype(resetStoredUserInfo(id)) {
	using FunctionType = decltype(resetStoredUserInfo(id))(*)(GameLevelManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4bae88, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto GameLevelManager::restoreItems() -> decltype(restoreItems()) {
	using FunctionType = decltype(restoreItems())(*)(GameLevelManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x90348, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameLevelManager::saveFetchedLevels(cocos2d::CCArray* levels) -> decltype(saveFetchedLevels(levels)) {
	using FunctionType = decltype(saveFetchedLevels(levels))(*)(GameLevelManager*, cocos2d::CCArray*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4995dc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, levels);
}

auto GameLevelManager::saveLevel(GJGameLevel* level) -> decltype(saveLevel(level)) {
	using FunctionType = decltype(saveLevel(level))(*)(GameLevelManager*, GJGameLevel*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x49f418, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, level);
}

auto GameLevelManager::saveLevelList(GJLevelList* list) -> decltype(saveLevelList(list)) {
	using FunctionType = decltype(saveLevelList(list))(*)(GameLevelManager*, GJLevelList*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x49a180, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, list);
}

auto GameLevelManager::saveLocalScore(int id, int value, int type) -> decltype(saveLocalScore(id, value, type)) {
	using FunctionType = decltype(saveLocalScore(id, value, type))(*)(GameLevelManager*, int, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4a4af4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id, value, type);
}

auto GameLevelManager::sendAdminAction(char const* p0, char const* p1, GJHttpType p2, int p3, std::string const& p4, std::string const& p5, std::vector<int> const& p6) -> decltype(sendAdminAction(p0, p1, p2, p3, p4, p5, p6)) {
	using FunctionType = decltype(sendAdminAction(p0, p1, p2, p3, p4, p5, p6))(*)(GameLevelManager*, char const*, char const*, GJHttpType, int, std::string const&, std::string const&, std::vector<int> const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4c152c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1, p2, p3, p4, p5, p6);
}

auto GameLevelManager::sendThreadMessage(int p0, int p1, std::string const& p2, std::string const& p3, uint64_t p4, std::string const& p5, bool p6, std::string const& p7, std::string const& p8) -> decltype(sendThreadMessage(p0, p1, p2, p3, p4, p5, p6, p7, p8)) {
	using FunctionType = decltype(sendThreadMessage(p0, p1, p2, p3, p4, p5, p6, p7, p8))(*)(GameLevelManager*, int, int, std::string const&, std::string const&, uint64_t, std::string const&, bool, std::string const&, std::string const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4c4bc0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1, p2, p3, p4, p5, p6, p7, p8);
}

auto GameLevelManager::setActiveSmartTemplate(GJSmartTemplate* smartTemplate) -> decltype(setActiveSmartTemplate(smartTemplate)) {
	using FunctionType = decltype(setActiveSmartTemplate(smartTemplate))(*)(GameLevelManager*, GJSmartTemplate*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4a4b00, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, smartTemplate);
}

auto GameLevelManager::setFolderName(int id, std::string name, bool local) -> decltype(setFolderName(id, name, local)) {
	using FunctionType = decltype(setFolderName(id, name, local))(*)(GameLevelManager*, int, std::string, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4a49c8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id, name, local);
}

auto GameLevelManager::setLevelFeatured(int id, int rank, bool epic) -> decltype(setLevelFeatured(id, rank, epic)) {
	using FunctionType = decltype(setLevelFeatured(id, rank, epic))(*)(GameLevelManager*, int, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4b6e40, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id, rank, epic);
}

auto GameLevelManager::setLevelStars(int id, int stars, bool coins) -> decltype(setLevelStars(id, stars, coins)) {
	using FunctionType = decltype(setLevelStars(id, stars, coins))(*)(GameLevelManager*, int, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4b6e38, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id, stars, coins);
}

auto GameLevelManager::storeCommentsResult(cocos2d::CCArray* comments, std::string pageInfo, char const* key) -> decltype(storeCommentsResult(comments, pageInfo, key)) {
	using FunctionType = decltype(storeCommentsResult(comments, pageInfo, key))(*)(GameLevelManager*, cocos2d::CCArray*, std::string, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4bba74, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, comments, pageInfo, key);
}

auto GameLevelManager::storeDailyLevelState(int id, int remaining, GJTimedLevelType type) -> decltype(storeDailyLevelState(id, remaining, type)) {
	using FunctionType = decltype(storeDailyLevelState(id, remaining, type))(*)(GameLevelManager*, int, int, GJTimedLevelType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4d2a60, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id, remaining, type);
}

auto GameLevelManager::storeFriendRequest(GJFriendRequest* request) -> decltype(storeFriendRequest(request)) {
	using FunctionType = decltype(storeFriendRequest(request))(*)(GameLevelManager*, GJFriendRequest*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4bae6c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, request);
}

auto GameLevelManager::storeSearchResult(cocos2d::CCArray* levels, std::string pageInfo, char const* searchKey) -> decltype(storeSearchResult(levels, pageInfo, searchKey)) {
	using FunctionType = decltype(storeSearchResult(levels, pageInfo, searchKey))(*)(GameLevelManager*, cocos2d::CCArray*, std::string, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x49fda4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, levels, pageInfo, searchKey);
}

auto GameLevelManager::storeUserMessage(GJUserMessage* message) -> decltype(storeUserMessage(message)) {
	using FunctionType = decltype(storeUserMessage(message))(*)(GameLevelManager*, GJUserMessage*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4baea0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, message);
}

auto GameLevelManager::storeUserMessageReply(int id, GJUserMessage* message) -> decltype(storeUserMessageReply(id, message)) {
	using FunctionType = decltype(storeUserMessageReply(id, message))(*)(GameLevelManager*, int, GJUserMessage*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4baec0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id, message);
}

auto GameLevelManager::storeUserNames(std::string usernameString) -> decltype(storeUserNames(usernameString)) {
	using FunctionType = decltype(storeUserNames(usernameString))(*)(GameLevelManager*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4966c4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, usernameString);
}

auto GameLevelManager::submitUserInfo() -> decltype(submitUserInfo()) {
	using FunctionType = decltype(submitUserInfo())(*)(GameLevelManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4b8294, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameLevelManager::syncFollowing() -> decltype(syncFollowing()) {
	using FunctionType = decltype(syncFollowing())(*)(GameLevelManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4c8eb8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameLevelManager::syncFollowListIfNeeded() -> decltype(syncFollowListIfNeeded()) {
	using FunctionType = decltype(syncFollowListIfNeeded())(*)(GameLevelManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4c9534, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameLevelManager::tryGetUsername(int accountID) -> decltype(tryGetUsername(accountID)) {
	using FunctionType = decltype(tryGetUsername(accountID))(*)(GameLevelManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x497344, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, accountID);
}

auto GameLevelManager::updateDescription(int id, std::string description) -> decltype(updateDescription(id, description)) {
	using FunctionType = decltype(updateDescription(id, description))(*)(GameLevelManager*, int, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4cf28c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id, description);
}

auto GameLevelManager::updateLevel(GJGameLevel* level) -> decltype(updateLevel(level)) {
	using FunctionType = decltype(updateLevel(level))(*)(GameLevelManager*, GJGameLevel*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x63008, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, level);
}

auto GameLevelManager::updateLevelOrders() -> decltype(updateLevelOrders()) {
	using FunctionType = decltype(updateLevelOrders())(*)(GameLevelManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x49cf2c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameLevelManager::updateLevelRewards(GJGameLevel* level) -> decltype(updateLevelRewards(level)) {
	using FunctionType = decltype(updateLevelRewards(level))(*)(GameLevelManager*, GJGameLevel*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x49776c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, level);
}

auto GameLevelManager::updateThread(int p0, int p1, std::string const& p2) -> decltype(updateThread(p0, p1, p2)) {
	using FunctionType = decltype(updateThread(p0, p1, p2))(*)(GameLevelManager*, int, int, std::string const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4ca540, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1, p2);
}

auto GameLevelManager::updateUsernames() -> decltype(updateUsernames()) {
	using FunctionType = decltype(updateUsernames())(*)(GameLevelManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3ec9fc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameLevelManager::updateUserScore() -> decltype(updateUserScore()) {
	using FunctionType = decltype(updateUserScore())(*)(GameLevelManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4b6e44, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameLevelManager::uploadAccountComment(std::string content) -> decltype(uploadAccountComment(content)) {
	using FunctionType = decltype(uploadAccountComment(content))(*)(GameLevelManager*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4c00b4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, content);
}

auto GameLevelManager::uploadFriendRequest(int accountID, std::string content) -> decltype(uploadFriendRequest(accountID, content)) {
	using FunctionType = decltype(uploadFriendRequest(accountID, content))(*)(GameLevelManager*, int, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4cc288, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, accountID, content);
}

auto GameLevelManager::uploadLevel(GJGameLevel* level) -> decltype(uploadLevel(level)) {
	using FunctionType = decltype(uploadLevel(level))(*)(GameLevelManager*, GJGameLevel*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4a9e8c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, level);
}

auto GameLevelManager::uploadLevelComment(int levelID, std::string content, int percent) -> decltype(uploadLevelComment(levelID, content, percent)) {
	using FunctionType = decltype(uploadLevelComment(levelID, content, percent))(*)(GameLevelManager*, int, std::string, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4bf150, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, levelID, content, percent);
}

auto GameLevelManager::uploadLevelList(GJLevelList* list) -> decltype(uploadLevelList(list)) {
	using FunctionType = decltype(uploadLevelList(list))(*)(GameLevelManager*, GJLevelList*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4ae0ec, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, list);
}

auto GameLevelManager::uploadUserMessage(int accountID, std::string subject, std::string content) -> decltype(uploadUserMessage(accountID, subject, content)) {
	using FunctionType = decltype(uploadUserMessage(accountID, subject, content))(*)(GameLevelManager*, int, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4bc0a8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, accountID, subject, content);
}

auto GameLevelManager::userIDForAccountID(int id) -> decltype(userIDForAccountID(id)) {
	using FunctionType = decltype(userIDForAccountID(id))(*)(GameLevelManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4975b0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto GameLevelManager::userInfoForAccountID(int id) -> decltype(userInfoForAccountID(id)) {
	using FunctionType = decltype(userInfoForAccountID(id))(*)(GameLevelManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4975cc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto GameLevelManager::userNameForUserID(int id) -> decltype(userNameForUserID(id)) {
	using FunctionType = decltype(userNameForUserID(id))(*)(GameLevelManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4971a4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto GameLevelManager::vaultTimedType(SearchType searchType, GJTimedLevelType& timedType) -> decltype(vaultTimedType(searchType, timedType)) {
	using FunctionType = decltype(vaultTimedType(searchType, timedType))(*)(SearchType, GJTimedLevelType&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4acc70, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(searchType, timedType);
}

auto GameLevelManager::verifyContainerOnlyHasLevels(cocos2d::CCDictionary* dict) -> decltype(verifyContainerOnlyHasLevels(dict)) {
	using FunctionType = decltype(verifyContainerOnlyHasLevels(dict))(*)(GameLevelManager*, cocos2d::CCDictionary*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4a5210, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, dict);
}

auto GameLevelManager::verifyLevelState(GJGameLevel* level) -> decltype(verifyLevelState(level)) {
	using FunctionType = decltype(verifyLevelState(level))(*)(GameLevelManager*, GJGameLevel*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4975f4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, level);
}

auto GameLevelManager::writePlatformerSaveJournal(GJGameLevel* level) -> decltype(writePlatformerSaveJournal(level)) {
	using FunctionType = decltype(writePlatformerSaveJournal(level))(*)(GameLevelManager*, GJGameLevel*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4a2294, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, level);
}

auto GameLevelManager::writeSpecialFilters(GJSearchObject* object) -> decltype(writeSpecialFilters(object)) {
	using FunctionType = decltype(writeSpecialFilters(object))(*)(GameLevelManager*, GJSearchObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4ac8a0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, object);
}
