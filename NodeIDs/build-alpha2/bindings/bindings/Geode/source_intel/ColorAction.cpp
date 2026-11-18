
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/ColorAction.hpp>
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

auto ColorAction::create() -> decltype(create()) {
	using FunctionType = decltype(create())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2c3f90, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto ColorAction::create(cocos2d::ccColor3B color, bool blending, int playerColor) -> decltype(create(color, blending, playerColor)) {
	using FunctionType = decltype(create(color, blending, playerColor))(*)(cocos2d::ccColor3B, bool, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2c4190, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(color, blending, playerColor);
}

auto ColorAction::create(cocos2d::ccColor3B fromColor, cocos2d::ccColor3B toColor, float duration, double unused, bool blending) -> decltype(create(fromColor, toColor, duration, unused, blending)) {
	using FunctionType = decltype(create(fromColor, toColor, duration, unused, blending))(*)(cocos2d::ccColor3B, cocos2d::ccColor3B, float, double, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2c4280, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(fromColor, toColor, duration, unused, blending);
}

auto ColorAction::create(cocos2d::ccColor3B fromColor, cocos2d::ccColor3B toColor, float duration, double unused, bool blending, int playerColor, float fromOpacity, float toOpacity) -> decltype(create(fromColor, toColor, duration, unused, blending, playerColor, fromOpacity, toOpacity)) {
	using FunctionType = decltype(create(fromColor, toColor, duration, unused, blending, playerColor, fromOpacity, toOpacity))(*)(cocos2d::ccColor3B, cocos2d::ccColor3B, float, double, bool, int, float, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2c4070, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(fromColor, toColor, duration, unused, blending, playerColor, fromOpacity, toOpacity);
}

auto ColorAction::getCopy() -> decltype(getCopy()) {
	using FunctionType = decltype(getCopy())(*)(ColorAction*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2c6bc0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto ColorAction::init(cocos2d::ccColor3B fromColor, cocos2d::ccColor3B toColor, float duration, double unused, bool blending, int playerColor, float fromOpacity, float toOpacity) -> decltype(init(fromColor, toColor, duration, unused, blending, playerColor, fromOpacity, toOpacity)) {
	using FunctionType = decltype(init(fromColor, toColor, duration, unused, blending, playerColor, fromOpacity, toOpacity))(*)(ColorAction*, cocos2d::ccColor3B, cocos2d::ccColor3B, float, double, bool, int, float, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2c4380, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, fromColor, toColor, duration, unused, blending, playerColor, fromOpacity, toOpacity);
}

auto ColorAction::isInUse() -> decltype(isInUse()) {
	using FunctionType = decltype(isInUse())(*)(ColorAction*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2c44f0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto ColorAction::loadFromState(CAState& state) -> decltype(loadFromState(state)) {
	using FunctionType = decltype(loadFromState(state))(*)(ColorAction*, CAState&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2c4600, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, state);
}

auto ColorAction::resetAction() -> decltype(resetAction()) {
	using FunctionType = decltype(resetAction())(*)(ColorAction*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2c44d0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto ColorAction::saveToState(CAState& state) -> decltype(saveToState(state)) {
	using FunctionType = decltype(saveToState(state))(*)(ColorAction*, CAState&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2c4560, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, state);
}

auto ColorAction::setupFromMap(std::map<std::string, std::string>& setup) -> decltype(setupFromMap(setup)) {
	using FunctionType = decltype(setupFromMap(setup))(*)(ColorAction*, std::map<std::string, std::string>&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2c64d0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, setup);
}

auto ColorAction::setupFromString(std::string setup) -> decltype(setupFromString(setup)) {
	using FunctionType = decltype(setupFromString(setup))(*)(ColorAction*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2c6460, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, setup);
}

auto ColorAction::step(float dt) -> decltype(step(dt)) {
	using FunctionType = decltype(step(dt))(*)(ColorAction*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2c43c0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, dt);
}

auto ColorAction::updateCustomColor(cocos2d::ccColor3B color1, cocos2d::ccColor3B color2) -> decltype(updateCustomColor(color1, color2)) {
	using FunctionType = decltype(updateCustomColor(color1, color2))(*)(ColorAction*, cocos2d::ccColor3B, cocos2d::ccColor3B);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2c4540, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, color1, color2);
}
