
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/GJLevelList.hpp>
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

auto GJLevelList::create() -> decltype(create()) {
	using FunctionType = decltype(create())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x496444, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto GJLevelList::create(cocos2d::CCDictionary* dict) -> decltype(create(dict)) {
	using FunctionType = decltype(create(dict))(*)(cocos2d::CCDictionary*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x499aa0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(dict);
}

auto GJLevelList::createWithCoder(DS_Dictionary* dict) -> decltype(createWithCoder(dict)) {
	using FunctionType = decltype(createWithCoder(dict))(*)(DS_Dictionary*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4e01f8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(dict);
}

auto GJLevelList::frameForListDifficulty(int diff, DifficultyIconType type) -> decltype(frameForListDifficulty(diff, type)) {
	using FunctionType = decltype(frameForListDifficulty(diff, type))(*)(int, DifficultyIconType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4e0794, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(diff, type);
}

auto GJLevelList::encodeWithCoder(DS_Dictionary* dict) -> decltype(encodeWithCoder(dict)) {
	auto self = addresser::thunkAdjust(Resolve<DS_Dictionary*>::func(&GJLevelList::encodeWithCoder), this);
	using FunctionType = decltype(encodeWithCoder(dict))(*)(GJLevelList*, DS_Dictionary*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4e0554, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, dict);
}

auto GJLevelList::canEncode() -> decltype(canEncode()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GJLevelList::canEncode), this);
	using FunctionType = decltype(canEncode())(*)(GJLevelList*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4e078c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GJLevelList::init() -> decltype(init()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GJLevelList::init), this);
	using FunctionType = decltype(init())(*)(GJLevelList*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4ded38, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GJLevelList::addLevelToList(GJGameLevel* level) -> decltype(addLevelToList(level)) {
	using FunctionType = decltype(addLevelToList(level))(*)(GJLevelList*, GJGameLevel*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4df48c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, level);
}

auto GJLevelList::completedLevels() -> decltype(completedLevels()) {
	using FunctionType = decltype(completedLevels())(*)(GJLevelList*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4dfd10, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJLevelList::dataLoaded(DS_Dictionary* dict) -> decltype(dataLoaded(dict)) {
	using FunctionType = decltype(dataLoaded(dict))(*)(GJLevelList*, DS_Dictionary*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4e0228, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, dict);
}

auto GJLevelList::duplicateListLevels(GJLevelList* list) -> decltype(duplicateListLevels(list)) {
	using FunctionType = decltype(duplicateListLevels(list))(*)(GJLevelList*, GJLevelList*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4df030, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, list);
}

auto GJLevelList::getListLevelsArray(cocos2d::CCArray* levels) -> decltype(getListLevelsArray(levels)) {
	using FunctionType = decltype(getListLevelsArray(levels))(*)(GJLevelList*, cocos2d::CCArray*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4df09c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, levels);
}

auto GJLevelList::getUnpackedDescription() -> decltype(getUnpackedDescription()) {
	using FunctionType = decltype(getUnpackedDescription())(*)(GJLevelList*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4def74, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJLevelList::handleStatsConflict(GJLevelList* list) -> decltype(handleStatsConflict(list)) {
	using FunctionType = decltype(handleStatsConflict(list))(*)(GJLevelList*, GJLevelList*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4dedb0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, list);
}

auto GJLevelList::hasMatchingLevels(GJLevelList* list) -> decltype(hasMatchingLevels(list)) {
	using FunctionType = decltype(hasMatchingLevels(list))(*)(GJLevelList*, GJLevelList*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4dedc8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, list);
}

auto GJLevelList::orderForLevel(int id) -> decltype(orderForLevel(id)) {
	using FunctionType = decltype(orderForLevel(id))(*)(GJLevelList*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4df9b0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto GJLevelList::parseListLevels(std::string str) -> decltype(parseListLevels(str)) {
	using FunctionType = decltype(parseListLevels(str))(*)(GJLevelList*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4b1598, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, str);
}

auto GJLevelList::removeLevelFromList(int id) -> decltype(removeLevelFromList(id)) {
	using FunctionType = decltype(removeLevelFromList(id))(*)(GJLevelList*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4df868, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto GJLevelList::reorderLevel(int levelID, int newPosition) -> decltype(reorderLevel(levelID, newPosition)) {
	using FunctionType = decltype(reorderLevel(levelID, newPosition))(*)(GJLevelList*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4df9e8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, levelID, newPosition);
}

auto GJLevelList::reorderLevelStep(int id, bool up) -> decltype(reorderLevelStep(id, up)) {
	using FunctionType = decltype(reorderLevelStep(id, up))(*)(GJLevelList*, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4dfb38, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id, up);
}

auto GJLevelList::showListInfo() -> decltype(showListInfo()) {
	using FunctionType = decltype(showListInfo())(*)(GJLevelList*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4dfd74, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJLevelList::totalLevels() -> decltype(totalLevels()) {
	using FunctionType = decltype(totalLevels())(*)(GJLevelList*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4dfd00, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJLevelList::updateLevelsString() -> decltype(updateLevelsString()) {
	using FunctionType = decltype(updateLevelsString())(*)(GJLevelList*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4a7370, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}
