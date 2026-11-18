
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/GameManager.hpp>
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

auto GameManager::sharedState() -> decltype(sharedState()) {
	using FunctionType = decltype(sharedState())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2eeb4c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto GameManager::update(float dt) -> decltype(update(dt)) {
	auto self = addresser::thunkAdjust(Resolve<float>::func(&GameManager::update), this);
	using FunctionType = decltype(update(dt))(*)(GameManager*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3027a8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, dt);
}

auto GameManager::init() -> decltype(init()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GameManager::init), this);
	using FunctionType = decltype(init())(*)(GameManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2eebb8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GameManager::encodeDataTo(DS_Dictionary* dict) -> decltype(encodeDataTo(dict)) {
	auto self = addresser::thunkAdjust(Resolve<DS_Dictionary*>::func(&GameManager::encodeDataTo), this);
	using FunctionType = decltype(encodeDataTo(dict))(*)(GameManager*, DS_Dictionary*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x301638, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, dict);
}

auto GameManager::didEncodeForSave() -> decltype(didEncodeForSave()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GameManager::didEncodeForSave), this);
	using FunctionType = decltype(didEncodeForSave())(*)(GameManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x302568, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GameManager::saveFinished(bool p0) -> decltype(saveFinished(p0)) {
	auto self = addresser::thunkAdjust(Resolve<bool>::func(&GameManager::saveFinished), this);
	using FunctionType = decltype(saveFinished(p0))(*)(GameManager*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x30266c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto GameManager::dataLoaded(DS_Dictionary* dict) -> decltype(dataLoaded(dict)) {
	auto self = addresser::thunkAdjust(Resolve<DS_Dictionary*>::func(&GameManager::dataLoaded), this);
	using FunctionType = decltype(dataLoaded(dict))(*)(GameManager*, DS_Dictionary*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2ff2e4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, dict);
}

auto GameManager::firstLoad() -> decltype(firstLoad()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GameManager::firstLoad), this);
	using FunctionType = decltype(firstLoad())(*)(GameManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x300c5c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GameManager::accountPostsRestricted() -> decltype(accountPostsRestricted()) {
	using FunctionType = decltype(accountPostsRestricted())(*)(GameManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2fabd8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameManager::accountStatusChanged() -> decltype(accountStatusChanged()) {
	using FunctionType = decltype(accountStatusChanged())(*)(GameManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2fb8ac, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameManager::activeIconForType(IconType type) -> decltype(activeIconForType(type)) {
	using FunctionType = decltype(activeIconForType(type))(*)(GameManager*, IconType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2f75fc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, type);
}

auto GameManager::addCustomAnimationFrame(int objectID, int frameIndex, std::string mainFrame, std::string detailFrame) -> decltype(addCustomAnimationFrame(objectID, frameIndex, mainFrame, detailFrame)) {
	using FunctionType = decltype(addCustomAnimationFrame(objectID, frameIndex, mainFrame, detailFrame))(*)(GameManager*, int, int, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1f965c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, objectID, frameIndex, mainFrame, detailFrame);
}

auto GameManager::addDuplicateLastFrame(int objectID) -> decltype(addDuplicateLastFrame(objectID)) {
	using FunctionType = decltype(addDuplicateLastFrame(objectID))(*)(GameManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1f9774, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, objectID);
}

auto GameManager::addGameAnimation(int objectID, int frames, float frameTime, std::string mainAnimFrame, std::string detailAnimFrame, int defaultFrame) -> decltype(addGameAnimation(objectID, frames, frameTime, mainAnimFrame, detailAnimFrame, defaultFrame)) {
	using FunctionType = decltype(addGameAnimation(objectID, frames, frameTime, mainAnimFrame, detailAnimFrame, defaultFrame))(*)(GameManager*, int, int, float, std::string, std::string, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1f93ec, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, objectID, frames, frameTime, mainAnimFrame, detailAnimFrame, defaultFrame);
}

auto GameManager::addIconDelegate(cocos2d::CCObject* delegate, int key) -> decltype(addIconDelegate(delegate, key)) {
	using FunctionType = decltype(addIconDelegate(delegate, key))(*)(GameManager*, cocos2d::CCObject*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2f7fa4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, delegate, key);
}

auto GameManager::addNewCustomObject(std::string str) -> decltype(addNewCustomObject(str)) {
	using FunctionType = decltype(addNewCustomObject(str))(*)(GameManager*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2fb128, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, str);
}

auto GameManager::addToGJLog(cocos2d::CCString* str) -> decltype(addToGJLog(str)) {
	using FunctionType = decltype(addToGJLog(str))(*)(GameManager*, cocos2d::CCString*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2fd014, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, str);
}

auto GameManager::applicationDidEnterBackground() -> decltype(applicationDidEnterBackground()) {
	using FunctionType = decltype(applicationDidEnterBackground())(*)(GameManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3027f4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameManager::applicationWillEnterForeground() -> decltype(applicationWillEnterForeground()) {
	using FunctionType = decltype(applicationWillEnterForeground())(*)(GameManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3027f8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameManager::calculateBaseKeyForIcons() -> decltype(calculateBaseKeyForIcons()) {
	using FunctionType = decltype(calculateBaseKeyForIcons())(*)(GameManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2eec88, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameManager::canShowRewardedVideo() -> decltype(canShowRewardedVideo()) {
	using FunctionType = decltype(canShowRewardedVideo())(*)(GameManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2f6c80, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameManager::checkSteamAchievementUnlock() -> decltype(checkSteamAchievementUnlock()) {
	using FunctionType = decltype(checkSteamAchievementUnlock())(*)(GameManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2f1d50, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameManager::checkUsedIcons() -> decltype(checkUsedIcons()) {
	using FunctionType = decltype(checkUsedIcons())(*)(GameManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2f57a4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameManager::claimItemsResponse(std::string str) -> decltype(claimItemsResponse(str)) {
	using FunctionType = decltype(claimItemsResponse(str))(*)(GameManager*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2f6524, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, str);
}

auto GameManager::clearGJLog() -> decltype(clearGJLog()) {
	using FunctionType = decltype(clearGJLog())(*)(GameManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2fd01c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameManager::colorForIdx(int index) -> decltype(colorForIdx(index)) {
	using FunctionType = decltype(colorForIdx(index))(*)(GameManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2f6528, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, index);
}

auto GameManager::colorForPos(int pos) -> decltype(colorForPos(pos)) {
	using FunctionType = decltype(colorForPos(pos))(*)(GameManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2f69f4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, pos);
}

auto GameManager::colorKey(int id, UnlockType type) -> decltype(colorKey(id, type)) {
	using FunctionType = decltype(colorKey(id, type))(*)(GameManager*, int, UnlockType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2f00a0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id, type);
}

auto GameManager::commentsRestricted() -> decltype(commentsRestricted()) {
	using FunctionType = decltype(commentsRestricted())(*)(GameManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2fab7c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameManager::completedAchievement(std::string key) -> decltype(completedAchievement(key)) {
	using FunctionType = decltype(completedAchievement(key))(*)(GameManager*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2f0f5c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, key);
}

auto GameManager::countForType(IconType type) -> decltype(countForType(type)) {
	using FunctionType = decltype(countForType(type))(*)(GameManager*, IconType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2f770c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, type);
}

auto GameManager::defaultFrameForAnimation(int objectID) -> decltype(defaultFrameForAnimation(objectID)) {
	using FunctionType = decltype(defaultFrameForAnimation(objectID))(*)(GameManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1f12f4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, objectID);
}

auto GameManager::didExitPlayscene() -> decltype(didExitPlayscene()) {
	using FunctionType = decltype(didExitPlayscene())(*)(GameManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3026f8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameManager::doQuickSave() -> decltype(doQuickSave()) {
	using FunctionType = decltype(doQuickSave())(*)(GameManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3026c8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameManager::dpadConfigToString(UIButtonConfig& config) -> decltype(dpadConfigToString(config)) {
	using FunctionType = decltype(dpadConfigToString(config))(*)(GameManager*, UIButtonConfig&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2fda80, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, config);
}

auto GameManager::eventUnlockFeature(char const* key) -> decltype(eventUnlockFeature(key)) {
	using FunctionType = decltype(eventUnlockFeature(key))(*)(GameManager*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2f6510, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, key);
}

auto GameManager::fadeInMenuMusic() -> decltype(fadeInMenuMusic()) {
	using FunctionType = decltype(fadeInMenuMusic())(*)(GameManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2ef460, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameManager::fadeInMusic(std::string path) -> decltype(fadeInMusic(path)) {
	using FunctionType = decltype(fadeInMusic(path))(*)(GameManager*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2ef558, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, path);
}

auto GameManager::finishedLoadingBGAsync(cocos2d::CCObject* obj) -> decltype(finishedLoadingBGAsync(obj)) {
	using FunctionType = decltype(finishedLoadingBGAsync(obj))(*)(GameManager*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2f9b00, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, obj);
}

auto GameManager::finishedLoadingIconAsync(cocos2d::CCObject* obj) -> decltype(finishedLoadingIconAsync(obj)) {
	using FunctionType = decltype(finishedLoadingIconAsync(obj))(*)(GameManager*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2f8118, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, obj);
}

auto GameManager::framesForAnimation(int objectID) -> decltype(framesForAnimation(objectID)) {
	using FunctionType = decltype(framesForAnimation(objectID))(*)(GameManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1f14cc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, objectID);
}

auto GameManager::frameTimeForAnimation(int objectID) -> decltype(frameTimeForAnimation(objectID)) {
	using FunctionType = decltype(frameTimeForAnimation(objectID))(*)(GameManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1f14fc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, objectID);
}

auto GameManager::generateSecretNumber() -> decltype(generateSecretNumber()) {
	using FunctionType = decltype(generateSecretNumber())(*)(GameManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2fce58, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameManager::getBGTexture(int index) -> decltype(getBGTexture(index)) {
	using FunctionType = decltype(getBGTexture(index))(*)(GameManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2fa224, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, index);
}

auto GameManager::getFontFile(int index) -> decltype(getFontFile(index)) {
	using FunctionType = decltype(getFontFile(index))(*)(GameManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2f9758, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, index);
}

auto GameManager::getFontTexture(int index) -> decltype(getFontTexture(index)) {
	using FunctionType = decltype(getFontTexture(index))(*)(GameManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2f97c4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, index);
}

auto GameManager::getGameVariable(char const* key) -> decltype(getGameVariable(key)) {
	using FunctionType = decltype(getGameVariable(key))(*)(GameManager*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2ef2c0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, key);
}

auto GameManager::getGTexture(int index) -> decltype(getGTexture(index)) {
	using FunctionType = decltype(getGTexture(index))(*)(GameManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2fa2bc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, index);
}

auto GameManager::getIconRequestID() -> decltype(getIconRequestID()) {
	using FunctionType = decltype(getIconRequestID())(*)(GameManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2f95b8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameManager::getIntGameVariable(char const* key) -> decltype(getIntGameVariable(key)) {
	using FunctionType = decltype(getIntGameVariable(key))(*)(GameManager*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2faa90, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, key);
}

auto GameManager::getMenuMusicFile() -> decltype(getMenuMusicFile()) {
	using FunctionType = decltype(getMenuMusicFile())(*)(GameManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2eee08, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameManager::getMGTexture(int index) -> decltype(getMGTexture(index)) {
	using FunctionType = decltype(getMGTexture(index))(*)(GameManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2fa270, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, index);
}

auto GameManager::getNextUniqueObjectKey() -> decltype(getNextUniqueObjectKey()) {
	using FunctionType = decltype(getNextUniqueObjectKey())(*)(GameManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2faf00, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameManager::getNextUsedKey(int index, bool up) -> decltype(getNextUsedKey(index, up)) {
	using FunctionType = decltype(getNextUsedKey(index, up))(*)(GameManager*, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2faff8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, index, up);
}

auto GameManager::getOrderedCustomObjectKeys() -> decltype(getOrderedCustomObjectKeys()) {
	using FunctionType = decltype(getOrderedCustomObjectKeys())(*)(GameManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2fafac, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameManager::getPracticeMusicFile() -> decltype(getPracticeMusicFile()) {
	using FunctionType = decltype(getPracticeMusicFile())(*)(GameManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2eef7c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameManager::getUGV(char const* key) -> decltype(getUGV(key)) {
	using FunctionType = decltype(getUGV(key))(*)(GameManager*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2fa848, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, key);
}

auto GameManager::getUnlockForAchievement(std::string key, int& id, UnlockType& type) -> decltype(getUnlockForAchievement(key, id, type)) {
	using FunctionType = decltype(getUnlockForAchievement(key, id, type))(*)(GameManager*, std::string, int&, UnlockType&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2f04c4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, key, id, type);
}

auto GameManager::groundHasSecondaryColor(int index) -> decltype(groundHasSecondaryColor(index)) {
	using FunctionType = decltype(groundHasSecondaryColor(index))(*)(GameManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2f9ec4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, index);
}

auto GameManager::iconAndTypeForKey(int key, int& id, int& type) -> decltype(iconAndTypeForKey(key, id, type)) {
	using FunctionType = decltype(iconAndTypeForKey(key, id, type))(*)(GameManager*, int, int&, int&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2f84d4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, key, id, type);
}

auto GameManager::iconKey(int id, IconType type) -> decltype(iconKey(id, type)) {
	using FunctionType = decltype(iconKey(id, type))(*)(GameManager*, int, IconType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2efa48, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id, type);
}

auto GameManager::iconTypeToUnlockType(IconType type) -> decltype(iconTypeToUnlockType(type)) {
	using FunctionType = decltype(iconTypeToUnlockType(type))(*)(GameManager*, IconType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2efecc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, type);
}

auto GameManager::isColorUnlocked(int id, UnlockType type) -> decltype(isColorUnlocked(id, type)) {
	using FunctionType = decltype(isColorUnlocked(id, type))(*)(GameManager*, int, UnlockType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2f02d0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id, type);
}

auto GameManager::isIconLoaded(int id, int type) -> decltype(isIconLoaded(id, type)) {
	using FunctionType = decltype(isIconLoaded(id, type))(*)(GameManager*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2f77e8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id, type);
}

auto GameManager::isIconUnlocked(int id, IconType type) -> decltype(isIconUnlocked(id, type)) {
	using FunctionType = decltype(isIconUnlocked(id, type))(*)(GameManager*, int, IconType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2efdb8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id, type);
}

auto GameManager::itemPurchased(char const* key) -> decltype(itemPurchased(key)) {
	using FunctionType = decltype(itemPurchased(key))(*)(GameManager*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2f6518, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, key);
}

auto GameManager::keyForIcon(int id, int type) -> decltype(keyForIcon(id, type)) {
	using FunctionType = decltype(keyForIcon(id, type))(*)(GameManager*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2f78bc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id, type);
}

auto GameManager::levelIsPremium(int unk1, int unk2) -> decltype(levelIsPremium(unk1, unk2)) {
	using FunctionType = decltype(levelIsPremium(unk1, unk2))(*)(GameManager*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2f651c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, unk1, unk2);
}

auto GameManager::loadBackground(int index) -> decltype(loadBackground(index)) {
	using FunctionType = decltype(loadBackground(index))(*)(GameManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2f99b0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, index);
}

auto GameManager::loadBackgroundAsync(int index) -> decltype(loadBackgroundAsync(index)) {
	using FunctionType = decltype(loadBackgroundAsync(index))(*)(GameManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2f9a54, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, index);
}

auto GameManager::loadDeathEffect(int id) -> decltype(loadDeathEffect(id)) {
	using FunctionType = decltype(loadDeathEffect(id))(*)(GameManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2f9830, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto GameManager::loadDpadFromString(UIButtonConfig& config, std::string str) -> decltype(loadDpadFromString(config, str)) {
	using FunctionType = decltype(loadDpadFromString(config, str))(*)(GameManager*, UIButtonConfig&, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2fe83c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, config, str);
}

auto GameManager::loadDPadLayout(int index, bool dual) -> decltype(loadDPadLayout(index, dual)) {
	using FunctionType = decltype(loadDPadLayout(index, dual))(*)(GameManager*, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2fe424, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, index, dual);
}

auto GameManager::loadFont(int index) -> decltype(loadFont(index)) {
	using FunctionType = decltype(loadFont(index))(*)(GameManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2f96ac, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, index);
}

auto GameManager::loadGround(int index) -> decltype(loadGround(index)) {
	using FunctionType = decltype(loadGround(index))(*)(GameManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2f9ed4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, index);
}

auto GameManager::loadGroundAsync(int index) -> decltype(loadGroundAsync(index)) {
	using FunctionType = decltype(loadGroundAsync(index))(*)(GameManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2f9fe8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, index);
}

auto GameManager::loadIcon(int id, int type, int requestID) -> decltype(loadIcon(id, type, requestID)) {
	using FunctionType = decltype(loadIcon(id, type, requestID))(*)(GameManager*, int, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2f858c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id, type, requestID);
}

auto GameManager::loadIconAsync(int id, int type, int requestID, cocos2d::CCObject* delegate) -> decltype(loadIconAsync(id, type, requestID, delegate)) {
	using FunctionType = decltype(loadIconAsync(id, type, requestID, delegate))(*)(GameManager*, int, int, int, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2f78d0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id, type, requestID, delegate);
}

auto GameManager::loadMiddleground(int index) -> decltype(loadMiddleground(index)) {
	using FunctionType = decltype(loadMiddleground(index))(*)(GameManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2f9b9c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, index);
}

auto GameManager::loadMiddlegroundAsync(int index) -> decltype(loadMiddlegroundAsync(index)) {
	using FunctionType = decltype(loadMiddlegroundAsync(index))(*)(GameManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2f9c9c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, index);
}

auto GameManager::loadVideoSettings() -> decltype(loadVideoSettings()) {
	using FunctionType = decltype(loadVideoSettings())(*)(GameManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2ff188, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameManager::lockColor(int id, UnlockType type) -> decltype(lockColor(id, type)) {
	using FunctionType = decltype(lockColor(id, type))(*)(GameManager*, int, UnlockType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2f0450, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id, type);
}

auto GameManager::lockIcon(int id, IconType type) -> decltype(lockIcon(id, type)) {
	using FunctionType = decltype(lockIcon(id, type))(*)(GameManager*, int, IconType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2f002c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id, type);
}

auto GameManager::logLoadedIconInfo() -> decltype(logLoadedIconInfo()) {
	using FunctionType = decltype(logLoadedIconInfo())(*)(GameManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2f95cc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameManager::modUIRank() -> decltype(modUIRank()) {
	using FunctionType = decltype(modUIRank())(*)(GameManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2fa578, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameManager::offlineModeEnabled() -> decltype(offlineModeEnabled()) {
	using FunctionType = decltype(offlineModeEnabled())(*)(GameManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2fab70, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameManager::onlyCuratedLevels() -> decltype(onlyCuratedLevels()) {
	using FunctionType = decltype(onlyCuratedLevels())(*)(GameManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2fad48, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameManager::playMenuMusic() -> decltype(playMenuMusic()) {
	using FunctionType = decltype(playMenuMusic())(*)(GameManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xc9b4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameManager::playSFXTrigger(SFXTriggerGameObject* object) -> decltype(playSFXTrigger(object)) {
	using FunctionType = decltype(playSFXTrigger(object))(*)(GameManager*, SFXTriggerGameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2ef690, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto GameManager::printGJLog() -> decltype(printGJLog()) {
	using FunctionType = decltype(printGJLog())(*)(GameManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2fd018, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameManager::rateGame() -> decltype(rateGame()) {
	using FunctionType = decltype(rateGame())(*)(GameManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2f711c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameManager::recountUserStats(std::string str) -> decltype(recountUserStats(str)) {
	using FunctionType = decltype(recountUserStats(str))(*)(GameManager*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2fc00c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, str);
}

auto GameManager::reloadAll(bool switchingModes, bool toFullscreen, bool borderless, bool fix, bool unused) -> decltype(reloadAll(switchingModes, toFullscreen, borderless, fix, unused)) {
	using FunctionType = decltype(reloadAll(switchingModes, toFullscreen, borderless, fix, unused))(*)(GameManager*, bool, bool, bool, bool, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3031c0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, switchingModes, toFullscreen, borderless, fix, unused);
}

auto GameManager::reloadAllStep2() -> decltype(reloadAllStep2()) {
	using FunctionType = decltype(reloadAllStep2())(*)(GameManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x303264, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameManager::reloadAllStep3() -> decltype(reloadAllStep3()) {
	using FunctionType = decltype(reloadAllStep3())(*)(GameManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x303350, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameManager::reloadAllStep4() -> decltype(reloadAllStep4()) {
	using FunctionType = decltype(reloadAllStep4())(*)(GameManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3033d8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameManager::reloadAllStep5() -> decltype(reloadAllStep5()) {
	using FunctionType = decltype(reloadAllStep5())(*)(GameManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x303444, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameManager::reloadMenu() -> decltype(reloadMenu()) {
	using FunctionType = decltype(reloadMenu())(*)(GameManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x776cec, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameManager::removeCustomObject(int key) -> decltype(removeCustomObject(key)) {
	using FunctionType = decltype(removeCustomObject(key))(*)(GameManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2fb7a0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, key);
}

auto GameManager::reorderKey(int index, bool up) -> decltype(reorderKey(index, up)) {
	using FunctionType = decltype(reorderKey(index, up))(*)(GameManager*, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2fb444, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, index, up);
}

auto GameManager::reportAchievementWithID(char const* key, int percent, bool dontNotify) -> decltype(reportAchievementWithID(key, percent, dontNotify)) {
	using FunctionType = decltype(reportAchievementWithID(key, percent, dontNotify))(*)(GameManager*, char const*, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2f1c34, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, key, percent, dontNotify);
}

auto GameManager::reportPercentageForLevel(int levelID, int percentage, bool isPlatformer) -> decltype(reportPercentageForLevel(levelID, percentage, isPlatformer)) {
	using FunctionType = decltype(reportPercentageForLevel(levelID, percentage, isPlatformer))(*)(GameManager*, int, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2f12ac, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, levelID, percentage, isPlatformer);
}

auto GameManager::resetAchievement(std::string key) -> decltype(resetAchievement(key)) {
	using FunctionType = decltype(resetAchievement(key))(*)(GameManager*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2f110c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, key);
}

auto GameManager::resetAdTimer() -> decltype(resetAdTimer()) {
	using FunctionType = decltype(resetAdTimer())(*)(GameManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2f6a18, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameManager::resetAllIcons() -> decltype(resetAllIcons()) {
	using FunctionType = decltype(resetAllIcons())(*)(GameManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2fb8bc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameManager::resetCoinUnlocks() -> decltype(resetCoinUnlocks()) {
	using FunctionType = decltype(resetCoinUnlocks())(*)(GameManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2f4f18, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameManager::resetDPadSettings(bool dual) -> decltype(resetDPadSettings(dual)) {
	using FunctionType = decltype(resetDPadSettings(dual))(*)(GameManager*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2feee8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, dual);
}

auto GameManager::resolutionForKey(int key) -> decltype(resolutionForKey(key)) {
	using FunctionType = decltype(resolutionForKey(key))(*)(GameManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x303498, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, key);
}

auto GameManager::resumeAudioDelayed() -> decltype(resumeAudioDelayed()) {
	using FunctionType = decltype(resumeAudioDelayed())(*)(GameManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2f6bb8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameManager::returnToLastScene(GJGameLevel* level) -> decltype(returnToLastScene(level)) {
	using FunctionType = decltype(returnToLastScene(level))(*)(GameManager*, GJGameLevel*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x302cc8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, level);
}

auto GameManager::rewardedVideoAdFinished(int unused) -> decltype(rewardedVideoAdFinished(unused)) {
	using FunctionType = decltype(rewardedVideoAdFinished(unused))(*)(GameManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2f6ce8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, unused);
}

auto GameManager::rewardedVideoHidden() -> decltype(rewardedVideoHidden()) {
	using FunctionType = decltype(rewardedVideoHidden())(*)(GameManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2f6e28, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameManager::rewardedVideoHiddenDelayed() -> decltype(rewardedVideoHiddenDelayed()) {
	using FunctionType = decltype(rewardedVideoHiddenDelayed())(*)(GameManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2f6da4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameManager::safeModeEnabled() -> decltype(safeModeEnabled()) {
	using FunctionType = decltype(safeModeEnabled())(*)(GameManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2fab28, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameManager::safePopScene() -> decltype(safePopScene()) {
	using FunctionType = decltype(safePopScene())(*)(GameManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x303004, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameManager::saveDPadLayout(int index, bool dual) -> decltype(saveDPadLayout(index, dual)) {
	using FunctionType = decltype(saveDPadLayout(index, dual))(*)(GameManager*, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2fd024, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, index, dual);
}

auto GameManager::setGameVariable(char const* key, bool value) -> decltype(setGameVariable(key, value)) {
	using FunctionType = decltype(setGameVariable(key, value))(*)(GameManager*, char const*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2fa308, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, key, value);
}

auto GameManager::setIntGameVariable(char const* key, int value) -> decltype(setIntGameVariable(key, value)) {
	using FunctionType = decltype(setIntGameVariable(key, value))(*)(GameManager*, char const*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2fa9ec, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, key, value);
}

auto GameManager::setUGV(char const* key, bool value) -> decltype(setUGV(key, value)) {
	using FunctionType = decltype(setUGV(key, value))(*)(GameManager*, char const*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2fa6a4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, key, value);
}

auto GameManager::setupGameAnimations() -> decltype(setupGameAnimations()) {
	using FunctionType = decltype(setupGameAnimations())(*)(GameManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1f2b60, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameManager::sheetNameForIcon(int id, int type) -> decltype(sheetNameForIcon(id, type)) {
	using FunctionType = decltype(sheetNameForIcon(id, type))(*)(GameManager*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2f7b98, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id, type);
}

auto GameManager::shortenAdTimer(float time) -> decltype(shortenAdTimer(time)) {
	using FunctionType = decltype(shortenAdTimer(time))(*)(GameManager*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2f6a20, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, time);
}

auto GameManager::shouldShowInterstitial(int unk1, int unk2, int unk3) -> decltype(shouldShowInterstitial(unk1, unk2, unk3)) {
	using FunctionType = decltype(shouldShowInterstitial(unk1, unk2, unk3))(*)(GameManager*, int, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2f6a8c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, unk1, unk2, unk3);
}

auto GameManager::showInterstitial() -> decltype(showInterstitial()) {
	using FunctionType = decltype(showInterstitial())(*)(GameManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2f6a94, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameManager::showInterstitialForced() -> decltype(showInterstitialForced()) {
	using FunctionType = decltype(showInterstitialForced())(*)(GameManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2f6b38, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameManager::showMainMenuAd() -> decltype(showMainMenuAd()) {
	using FunctionType = decltype(showMainMenuAd())(*)(GameManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2f6a10, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameManager::showParentalRestrictedAlert() -> decltype(showParentalRestrictedAlert()) {
	using FunctionType = decltype(showParentalRestrictedAlert())(*)(GameManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2fae3c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameManager::startUpdate() -> decltype(startUpdate()) {
	using FunctionType = decltype(startUpdate())(*)(GameManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2eedc0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameManager::stringForCustomObject(int customObjectID) -> decltype(stringForCustomObject(customObjectID)) {
	using FunctionType = decltype(stringForCustomObject(customObjectID))(*)(GameManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2fb2bc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, customObjectID);
}

auto GameManager::switchCustomObjects(int key1, int key2) -> decltype(switchCustomObjects(key1, key2)) {
	using FunctionType = decltype(switchCustomObjects(key1, key2))(*)(GameManager*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2fb490, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, key1, key2);
}

auto GameManager::syncPlatformAchievements() -> decltype(syncPlatformAchievements()) {
	using FunctionType = decltype(syncPlatformAchievements())(*)(GameManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2f74e0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameManager::toggleGameVariable(char const* key) -> decltype(toggleGameVariable(key)) {
	using FunctionType = decltype(toggleGameVariable(key))(*)(GameManager*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2fa5c0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, key);
}

auto GameManager::tryShowInterstitial(int unk1, int unk2, int unk3) -> decltype(tryShowInterstitial(unk1, unk2, unk3)) {
	using FunctionType = decltype(tryShowInterstitial(unk1, unk2, unk3))(*)(GameManager*, int, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2f6a88, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, unk1, unk2, unk3);
}

auto GameManager::unloadBackground() -> decltype(unloadBackground()) {
	using FunctionType = decltype(unloadBackground())(*)(GameManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2f9918, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameManager::unloadIcon(int id, int type, int requestID) -> decltype(unloadIcon(id, type, requestID)) {
	using FunctionType = decltype(unloadIcon(id, type, requestID))(*)(GameManager*, int, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2f8be0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id, type, requestID);
}

auto GameManager::unloadIcons(int requestID) -> decltype(unloadIcons(requestID)) {
	using FunctionType = decltype(unloadIcons(requestID))(*)(GameManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2f9334, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, requestID);
}

auto GameManager::unlockedPremium() -> decltype(unlockedPremium()) {
	using FunctionType = decltype(unlockedPremium())(*)(GameManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2f6514, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameManager::unlockTypeToIconType(int type) -> decltype(unlockTypeToIconType(type)) {
	using FunctionType = decltype(unlockTypeToIconType(type))(*)(GameManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2eff5c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, type);
}

auto GameManager::updateCustomFPS() -> decltype(updateCustomFPS()) {
	using FunctionType = decltype(updateCustomFPS())(*)(GameManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x30374c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameManager::updateMusic() -> decltype(updateMusic()) {
	using FunctionType = decltype(updateMusic())(*)(GameManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2f70d8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameManager::verifyAchievementUnlocks() -> decltype(verifyAchievementUnlocks()) {
	using FunctionType = decltype(verifyAchievementUnlocks())(*)(GameManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2f1e78, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameManager::verifyCoinUnlocks() -> decltype(verifyCoinUnlocks()) {
	using FunctionType = decltype(verifyCoinUnlocks())(*)(GameManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2f2084, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameManager::verifyStarUnlocks() -> decltype(verifyStarUnlocks()) {
	using FunctionType = decltype(verifyStarUnlocks())(*)(GameManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2f2024, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameManager::verifySyncedCoins() -> decltype(verifySyncedCoins()) {
	using FunctionType = decltype(verifySyncedCoins())(*)(GameManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2f619c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameManager::videoAdHidden() -> decltype(videoAdHidden()) {
	using FunctionType = decltype(videoAdHidden())(*)(GameManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2f6b84, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameManager::videoAdShowed() -> decltype(videoAdShowed()) {
	using FunctionType = decltype(videoAdShowed())(*)(GameManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2f6b40, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}
