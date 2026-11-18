#include <Geode/cocos/cocoa/CCObject.h>

#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/GJGameLevel.hpp>
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

GJGameLevel::GJGameLevel() : GJGameLevel(geode::CutoffConstructor, sizeof(GJGameLevel)) {
	// here we construct it as normal as we can, then destruct it
	// using the generated functions. this ensures no memory gets leaked
	// no crashes :pray:
	geode::DestructorLock::addLock(this);
	GJGameLevel::~GJGameLevel();

	using FunctionType = void(*)(GJGameLevel*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x590e80, tulip::hook::TulipConvention::Default);
	reinterpret_cast<FunctionType>(func)(this);
}

GJGameLevel::~GJGameLevel() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(GJGameLevel*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x5826d0, tulip::hook::TulipConvention::Default);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) GJGameLevel(geode::CutoffConstructor, sizeof(GJGameLevel));
		geode::DestructorLock::addLock(this);
	}
}

auto GJGameLevel::create() -> decltype(create()) {
	using FunctionType = decltype(create())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x53e5d0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto GJGameLevel::create(cocos2d::CCDictionary* dict, bool download) -> decltype(create(dict, download)) {
	using FunctionType = decltype(create(dict, download))(*)(cocos2d::CCDictionary*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x540c90, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(dict, download);
}

auto GJGameLevel::createWithCoder(DS_Dictionary* dict) -> decltype(createWithCoder(dict)) {
	using FunctionType = decltype(createWithCoder(dict))(*)(DS_Dictionary*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x588f40, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(dict);
}

auto GJGameLevel::demonIconForDifficulty(DemonDifficultyType type) -> decltype(demonIconForDifficulty(type)) {
	using FunctionType = decltype(demonIconForDifficulty(type))(*)(DemonDifficultyType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x58c300, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(type);
}

auto GJGameLevel::getLengthKey(int length, bool platformer) -> decltype(getLengthKey(length, platformer)) {
	using FunctionType = decltype(getLengthKey(length, platformer))(*)(int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x583ed0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(length, platformer);
}

auto GJGameLevel::lengthKeyToString(int key) -> decltype(lengthKeyToString(key)) {
	using FunctionType = decltype(lengthKeyToString(key))(*)(int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x583f10, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(key);
}

auto GJGameLevel::encodeWithCoder(DS_Dictionary* dict) -> decltype(encodeWithCoder(dict)) {
	auto self = addresser::thunkAdjust(Resolve<DS_Dictionary*>::func(&GJGameLevel::encodeWithCoder), this);
	using FunctionType = decltype(encodeWithCoder(dict))(*)(GJGameLevel*, DS_Dictionary*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x58a8e0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, dict);
}

auto GJGameLevel::canEncode() -> decltype(canEncode()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GJGameLevel::canEncode), this);
	using FunctionType = decltype(canEncode())(*)(GJGameLevel*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x58bf40, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GJGameLevel::init() -> decltype(init()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GJGameLevel::init), this);
	using FunctionType = decltype(init())(*)(GJGameLevel*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x583420, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GJGameLevel::addPlaytime(int p0) -> decltype(addPlaytime(p0)) {
	using FunctionType = decltype(addPlaytime(p0))(*)(GJGameLevel*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5870e0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto GJGameLevel::areCoinsVerified() -> decltype(areCoinsVerified()) {
	using FunctionType = decltype(areCoinsVerified())(*)(GJGameLevel*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x58c1b0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJGameLevel::copyLevelInfo(GJGameLevel* level) -> decltype(copyLevelInfo(level)) {
	using FunctionType = decltype(copyLevelInfo(level))(*)(GJGameLevel*, GJGameLevel*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x588200, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, level);
}

auto GJGameLevel::dataLoaded(DS_Dictionary* dict) -> decltype(dataLoaded(dict)) {
	using FunctionType = decltype(dataLoaded(dict))(*)(GJGameLevel*, DS_Dictionary*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x588fb0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, dict);
}

auto GJGameLevel::dtSetCells(std::vector<int> const& p0) -> decltype(dtSetCells(p0)) {
	using FunctionType = decltype(dtSetCells(p0))(*)(GJGameLevel*, std::vector<int> const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x585fb0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto GJGameLevel::duplicate() -> decltype(duplicate()) {
	using FunctionType = decltype(duplicate())(*)(GJGameLevel*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x582c00, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJGameLevel::generateSettingsString() -> decltype(generateSettingsString()) {
	using FunctionType = decltype(generateSettingsString())(*)(GJGameLevel*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5844b0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJGameLevel::getAudioFileName() -> decltype(getAudioFileName()) {
	using FunctionType = decltype(getAudioFileName())(*)(GJGameLevel*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5842c0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJGameLevel::getAverageDifficulty() -> decltype(getAverageDifficulty()) {
	using FunctionType = decltype(getAverageDifficulty())(*)(GJGameLevel*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x583fe0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJGameLevel::getCoinKey(int coinNumber) -> decltype(getCoinKey(coinNumber)) {
	using FunctionType = decltype(getCoinKey(coinNumber))(*)(GJGameLevel*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x566b60, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, coinNumber);
}

auto GJGameLevel::getCoinKey(int coinNumber, int dailyID) -> decltype(getCoinKey(coinNumber, dailyID)) {
	using FunctionType = decltype(getCoinKey(coinNumber, dailyID))(*)(GJGameLevel*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x584030, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, coinNumber, dailyID);
}

auto GJGameLevel::getListSnapshot() -> decltype(getListSnapshot()) {
	using FunctionType = decltype(getListSnapshot())(*)(GJGameLevel*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x588b90, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJGameLevel::getNormalPercent() -> decltype(getNormalPercent()) {
	using FunctionType = decltype(getNormalPercent())(*)(GJGameLevel*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x53f070, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJGameLevel::getSongName() -> decltype(getSongName()) {
	using FunctionType = decltype(getSongName())(*)(GJGameLevel*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5843e0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJGameLevel::getUnpackedLevelDescription() -> decltype(getUnpackedLevelDescription()) {
	using FunctionType = decltype(getUnpackedLevelDescription())(*)(GJGameLevel*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x58c210, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJGameLevel::handleStatsConflict(GJGameLevel* level) -> decltype(handleStatsConflict(level)) {
	using FunctionType = decltype(handleStatsConflict(level))(*)(GJGameLevel*, GJGameLevel*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x551010, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, level);
}

auto GJGameLevel::isPlatformer() -> decltype(isPlatformer()) {
	using FunctionType = decltype(isPlatformer())(*)(GJGameLevel*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x548810, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJGameLevel::levelHasDiamonds() -> decltype(levelHasDiamonds()) {
	using FunctionType = decltype(levelHasDiamonds())(*)(GJGameLevel*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x58c2b0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJGameLevel::saveNewScore(int value, int type, int ticks, int clicks, int coins, std::string inputs, bool save) -> decltype(saveNewScore(value, type, ticks, clicks, coins, inputs, save)) {
	using FunctionType = decltype(saveNewScore(value, type, ticks, clicks, coins, inputs, save))(*)(GJGameLevel*, int, int, int, int, int, std::string, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x584610, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, value, type, ticks, clicks, coins, inputs, save);
}

auto GJGameLevel::savePercentage(int percent, bool isPracticeMode, int clicks, int attempts, bool isChkValid) -> decltype(savePercentage(percent, isPracticeMode, clicks, attempts, isChkValid)) {
	using FunctionType = decltype(savePercentage(percent, isPracticeMode, clicks, attempts, isChkValid))(*)(GJGameLevel*, int, bool, int, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x583a40, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, percent, isPracticeMode, clicks, attempts, isChkValid);
}

auto GJGameLevel::scoreStringToVector(std::string& str, std::vector<int>& vec) -> decltype(scoreStringToVector(str, vec)) {
	using FunctionType = decltype(scoreStringToVector(str, vec))(*)(GJGameLevel*, std::string&, std::vector<int>&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x584bf0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, str, vec);
}

auto GJGameLevel::scoreVectorToString(std::vector<int>& vec, int type) -> decltype(scoreVectorToString(vec, type)) {
	using FunctionType = decltype(scoreVectorToString(vec, type))(*)(GJGameLevel*, std::vector<int>&, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x584e60, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, vec, type);
}

auto GJGameLevel::setLastBuildPageForTab(int tab, int page) -> decltype(setLastBuildPageForTab(tab, page)) {
	using FunctionType = decltype(setLastBuildPageForTab(tab, page))(*)(GJGameLevel*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5841a0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, tab, page);
}

auto GJGameLevel::setNormalPercent(int percent) -> decltype(setNormalPercent(percent)) {
	using FunctionType = decltype(setNormalPercent(percent))(*)(GJGameLevel*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5408e0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, percent);
}

auto GJGameLevel::shouldCheatReset() -> decltype(shouldCheatReset()) {
	using FunctionType = decltype(shouldCheatReset())(*)(GJGameLevel*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5408a0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJGameLevel::storeNewLocalScore(int value, int type) -> decltype(storeNewLocalScore(value, type)) {
	using FunctionType = decltype(storeNewLocalScore(value, type))(*)(GJGameLevel*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x584a20, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, value, type);
}

auto GJGameLevel::unverifyCoins() -> decltype(unverifyCoins()) {
	using FunctionType = decltype(unverifyCoins())(*)(GJGameLevel*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5838f0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}
