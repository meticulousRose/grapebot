
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/GJMapPack.hpp>
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

auto GJMapPack::create() -> decltype(create()) {
	using FunctionType = decltype(create())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x58c470, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto GJMapPack::create(cocos2d::CCDictionary* dict) -> decltype(create(dict)) {
	using FunctionType = decltype(create(dict))(*)(cocos2d::CCDictionary*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x543bd0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(dict);
}

auto GJMapPack::init() -> decltype(init()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GJMapPack::init), this);
	using FunctionType = decltype(init())(*)(GJMapPack*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x58c8e0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GJMapPack::completedMaps() -> decltype(completedMaps()) {
	using FunctionType = decltype(completedMaps())(*)(GJMapPack*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x58c960, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJMapPack::hasCompletedMapPack() -> decltype(hasCompletedMapPack()) {
	using FunctionType = decltype(hasCompletedMapPack())(*)(GJMapPack*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x58ca10, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJMapPack::parsePackColors(std::string textColorStr, std::string barColorStr) -> decltype(parsePackColors(textColorStr, barColorStr)) {
	using FunctionType = decltype(parsePackColors(textColorStr, barColorStr))(*)(GJMapPack*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x58c640, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, textColorStr, barColorStr);
}

auto GJMapPack::parsePackLevels(std::string levelsStr) -> decltype(parsePackLevels(levelsStr)) {
	using FunctionType = decltype(parsePackLevels(levelsStr))(*)(GJMapPack*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x58c530, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, levelsStr);
}

auto GJMapPack::totalMaps() -> decltype(totalMaps()) {
	using FunctionType = decltype(totalMaps())(*)(GJMapPack*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x58c940, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}
