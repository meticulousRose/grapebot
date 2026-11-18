
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/LocalLevelManager.hpp>
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

auto LocalLevelManager::sharedState() -> decltype(sharedState()) {
	using FunctionType = decltype(sharedState())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5e1588, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto LocalLevelManager::init() -> decltype(init()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&LocalLevelManager::init), this);
	using FunctionType = decltype(init())(*)(LocalLevelManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5e1874, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto LocalLevelManager::encodeDataTo(DS_Dictionary* dict) -> decltype(encodeDataTo(dict)) {
	auto self = addresser::thunkAdjust(Resolve<DS_Dictionary*>::func(&LocalLevelManager::encodeDataTo), this);
	using FunctionType = decltype(encodeDataTo(dict))(*)(LocalLevelManager*, DS_Dictionary*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5e2af4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, dict);
}

auto LocalLevelManager::didEncodeForSave() -> decltype(didEncodeForSave()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&LocalLevelManager::didEncodeForSave), this);
	using FunctionType = decltype(didEncodeForSave())(*)(LocalLevelManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5e2b64, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto LocalLevelManager::saveFinished(bool p0) -> decltype(saveFinished(p0)) {
	auto self = addresser::thunkAdjust(Resolve<bool>::func(&LocalLevelManager::saveFinished), this);
	using FunctionType = decltype(saveFinished(p0))(*)(LocalLevelManager*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5e54f8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto LocalLevelManager::dataLoaded(DS_Dictionary* dict) -> decltype(dataLoaded(dict)) {
	auto self = addresser::thunkAdjust(Resolve<DS_Dictionary*>::func(&LocalLevelManager::dataLoaded), this);
	using FunctionType = decltype(dataLoaded(dict))(*)(LocalLevelManager*, DS_Dictionary*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5e2dc8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, dict);
}

auto LocalLevelManager::firstLoad() -> decltype(firstLoad()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&LocalLevelManager::firstLoad), this);
	using FunctionType = decltype(firstLoad())(*)(LocalLevelManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5e2a78, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto LocalLevelManager::filesPicked(std::vector<std::string> const& p0) -> decltype(filesPicked(p0)) {
	auto self = addresser::thunkAdjust(Resolve<std::vector<std::string> const&>::func(&LocalLevelManager::filesPicked), this);
	using FunctionType = decltype(filesPicked(p0))(*)(LocalLevelManager*, std::vector<std::string> const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5e66dc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto LocalLevelManager::fileShareFinished(bool p0) -> decltype(fileShareFinished(p0)) {
	auto self = addresser::thunkAdjust(Resolve<bool>::func(&LocalLevelManager::fileShareFinished), this);
	using FunctionType = decltype(fileShareFinished(p0))(*)(LocalLevelManager*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5e6958, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto LocalLevelManager::getAllLevelsInDict() -> decltype(getAllLevelsInDict()) {
	using FunctionType = decltype(getAllLevelsInDict())(*)(LocalLevelManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5e1eec, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto LocalLevelManager::getAllLevelsWithName(std::string name) -> decltype(getAllLevelsWithName(name)) {
	using FunctionType = decltype(getAllLevelsWithName(name))(*)(LocalLevelManager*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5e20d8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, name);
}

auto LocalLevelManager::getCreatedLevels(int folder) -> decltype(getCreatedLevels(folder)) {
	using FunctionType = decltype(getCreatedLevels(folder))(*)(LocalLevelManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5e287c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, folder);
}

auto LocalLevelManager::getCreatedLists(int folder) -> decltype(getCreatedLists(folder)) {
	using FunctionType = decltype(getCreatedLists(folder))(*)(LocalLevelManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5e29e8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, folder);
}

auto LocalLevelManager::getLevelsInNameGroups() -> decltype(getLevelsInNameGroups()) {
	using FunctionType = decltype(getLevelsInNameGroups())(*)(LocalLevelManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5e1d9c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto LocalLevelManager::getMainLevelString(int id) -> decltype(getMainLevelString(id)) {
	using FunctionType = decltype(getMainLevelString(id))(*)(LocalLevelManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5e1c18, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto LocalLevelManager::importLevelsFromFile(int p0) -> decltype(importLevelsFromFile(p0)) {
	using FunctionType = decltype(importLevelsFromFile(p0))(*)(LocalLevelManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5e62a4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto LocalLevelManager::importLevelsFromPaths(std::vector<std::string> const& p0, int p1) -> decltype(importLevelsFromPaths(p0, p1)) {
	using FunctionType = decltype(importLevelsFromPaths(p0, p1))(*)(LocalLevelManager*, std::vector<std::string> const&, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5e6390, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1);
}

auto LocalLevelManager::moveLevelToTop(GJGameLevel* level) -> decltype(moveLevelToTop(level)) {
	using FunctionType = decltype(moveLevelToTop(level))(*)(LocalLevelManager*, GJGameLevel*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5e25ec, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, level);
}

auto LocalLevelManager::reorderLevels() -> decltype(reorderLevels()) {
	using FunctionType = decltype(reorderLevels())(*)(LocalLevelManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5e282c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto LocalLevelManager::reorderLists() -> decltype(reorderLists()) {
	using FunctionType = decltype(reorderLists())(*)(LocalLevelManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5e2998, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto LocalLevelManager::tryLoadMainLevelString(int id) -> decltype(tryLoadMainLevelString(id)) {
	using FunctionType = decltype(tryLoadMainLevelString(id))(*)(LocalLevelManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5e18b4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto LocalLevelManager::updateLevelOrder() -> decltype(updateLevelOrder()) {
	using FunctionType = decltype(updateLevelOrder())(*)(LocalLevelManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5e290c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto LocalLevelManager::updateLevelRevision() -> decltype(updateLevelRevision()) {
	using FunctionType = decltype(updateLevelRevision())(*)(LocalLevelManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5e2200, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto LocalLevelManager::updateListOrder() -> decltype(updateListOrder()) {
	using FunctionType = decltype(updateListOrder())(*)(LocalLevelManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5e290c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}
