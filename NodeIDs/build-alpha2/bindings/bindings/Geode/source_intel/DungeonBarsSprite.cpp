
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/DungeonBarsSprite.hpp>
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

auto DungeonBarsSprite::create() -> decltype(create()) {
	using FunctionType = decltype(create())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x49dba0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto DungeonBarsSprite::init() -> decltype(init()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&DungeonBarsSprite::init), this);
	using FunctionType = decltype(init())(*)(DungeonBarsSprite*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4a1490, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto DungeonBarsSprite::visit() -> decltype(visit()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&DungeonBarsSprite::visit), this);
	using FunctionType = decltype(visit())(*)(DungeonBarsSprite*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4a1510, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto DungeonBarsSprite::animateOutBars() -> decltype(animateOutBars()) {
	using FunctionType = decltype(animateOutBars())(*)(DungeonBarsSprite*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x49fe70, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}
