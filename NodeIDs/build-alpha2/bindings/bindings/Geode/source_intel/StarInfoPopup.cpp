#include <Geode/cocos/cocoa/CCObject.h>

#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/StarInfoPopup.hpp>
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

StarInfoPopup::~StarInfoPopup() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(StarInfoPopup*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x1fd040, tulip::hook::TulipConvention::Default);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) StarInfoPopup(geode::CutoffConstructor, sizeof(StarInfoPopup));
		geode::DestructorLock::addLock(this);
	}
}

auto StarInfoPopup::createFromString(std::string str) -> decltype(createFromString(str)) {
	using FunctionType = decltype(createFromString(str))(*)(std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8a4810, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(str);
}

auto StarInfoPopup::createFromStringMoons(std::string str) -> decltype(createFromStringMoons(str)) {
	using FunctionType = decltype(createFromStringMoons(str))(*)(std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8a4aa0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(str);
}

auto StarInfoPopup::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&StarInfoPopup::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(StarInfoPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8a93b0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto StarInfoPopup::init(int autos, int easies, int normals, int hards, int harders, int insanes, int dailies, int gauntlets, int maps, bool platformer) -> decltype(init(autos, easies, normals, hards, harders, insanes, dailies, gauntlets, maps, platformer)) {
	using FunctionType = decltype(init(autos, easies, normals, hards, harders, insanes, dailies, gauntlets, maps, platformer))(*)(StarInfoPopup*, int, int, int, int, int, int, int, int, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8a8aa0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, autos, easies, normals, hards, harders, insanes, dailies, gauntlets, maps, platformer);
}
