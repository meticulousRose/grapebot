#include <Geode/cocos/cocoa/CCObject.h>

#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/InfoAlertButton.hpp>
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

InfoAlertButton::~InfoAlertButton() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(InfoAlertButton*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x4f242c, tulip::hook::TulipConvention::Default);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) InfoAlertButton(geode::CutoffConstructor, sizeof(InfoAlertButton));
		geode::DestructorLock::addLock(this);
	}
}

auto InfoAlertButton::create(std::string title, std::string desc, float spriteScale) -> decltype(create(title, desc, spriteScale)) {
	using FunctionType = decltype(create(title, desc, spriteScale))(*)(std::string, std::string, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4f1fcc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(title, desc, spriteScale);
}

auto InfoAlertButton::activate() -> decltype(activate()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&InfoAlertButton::activate), this);
	using FunctionType = decltype(activate())(*)(InfoAlertButton*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4f225c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto InfoAlertButton::init(std::string title, std::string desc, float spriteScale) -> decltype(init(title, desc, spriteScale)) {
	using FunctionType = decltype(init(title, desc, spriteScale))(*)(InfoAlertButton*, std::string, std::string, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4f21b8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, title, desc, spriteScale);
}
