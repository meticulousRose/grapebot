
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/GManager.hpp>
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

auto GManager::init() -> decltype(init()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GManager::init), this);
	using FunctionType = decltype(init())(*)(GManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x40c028, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GManager::setup() -> decltype(setup()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GManager::setup), this);
	using FunctionType = decltype(setup())(*)(GManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x40c040, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GManager::encodeDataTo(DS_Dictionary* dict) -> decltype(encodeDataTo(dict)) {
	auto self = addresser::thunkAdjust(Resolve<DS_Dictionary*>::func(&GManager::encodeDataTo), this);
	using FunctionType = decltype(encodeDataTo(dict))(*)(GManager*, DS_Dictionary*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x40c6d0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, dict);
}

auto GManager::didEncodeForSave() -> decltype(didEncodeForSave()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GManager::didEncodeForSave), this);
	using FunctionType = decltype(didEncodeForSave())(*)(GManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x40c6d4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GManager::saveFinished(bool success) -> decltype(saveFinished(success)) {
	auto self = addresser::thunkAdjust(Resolve<bool>::func(&GManager::saveFinished), this);
	using FunctionType = decltype(saveFinished(success))(*)(GManager*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x40c6d8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, success);
}

auto GManager::dataLoaded(DS_Dictionary* dict) -> decltype(dataLoaded(dict)) {
	auto self = addresser::thunkAdjust(Resolve<DS_Dictionary*>::func(&GManager::dataLoaded), this);
	using FunctionType = decltype(dataLoaded(dict))(*)(GManager*, DS_Dictionary*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x40cd80, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, dict);
}

auto GManager::firstLoad() -> decltype(firstLoad()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GManager::firstLoad), this);
	using FunctionType = decltype(firstLoad())(*)(GManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x40cd84, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GManager::getCompressedSaveString() -> decltype(getCompressedSaveString()) {
	using FunctionType = decltype(getCompressedSaveString())(*)(GManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x40c0dc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GManager::getSaveString() -> decltype(getSaveString()) {
	using FunctionType = decltype(getSaveString())(*)(GManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x40c058, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GManager::load() -> decltype(load()) {
	using FunctionType = decltype(load())(*)(GManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x40c050, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GManager::loadDataFromFile(std::string const& filename) -> decltype(loadDataFromFile(filename)) {
	using FunctionType = decltype(loadDataFromFile(filename))(*)(GManager*, std::string const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x40c6dc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, filename);
}

auto GManager::loadFromCompressedString(std::string& str) -> decltype(loadFromCompressedString(str)) {
	using FunctionType = decltype(loadFromCompressedString(str))(*)(GManager*, std::string&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x40c208, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, str);
}

auto GManager::loadFromString(std::string& str) -> decltype(loadFromString(str)) {
	using FunctionType = decltype(loadFromString(str))(*)(GManager*, std::string&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x40c15c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, str);
}

auto GManager::save(bool async) -> decltype(save(async)) {
	using FunctionType = decltype(save(async))(*)(GManager*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x40c2ac, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, async);
}

auto GManager::tryLoadData(DS_Dictionary* dict, std::string const& filename) -> decltype(tryLoadData(dict, filename)) {
	using FunctionType = decltype(tryLoadData(dict, filename))(*)(GManager*, DS_Dictionary*, std::string const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x40c998, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, dict, filename);
}
