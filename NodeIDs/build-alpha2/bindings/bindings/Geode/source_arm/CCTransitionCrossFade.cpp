
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/mapping/CCTransitionCrossFade.hpp>
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

auto cocos2d::CCTransitionCrossFade::create(float p0, cocos2d::CCScene* p1) -> decltype(create(p0, p1)) {
	using FunctionType = decltype(create(p0, p1))(*)(float, cocos2d::CCScene*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x96c74, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1);
}

auto cocos2d::CCTransitionCrossFade::onEnter() -> decltype(onEnter()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&cocos2d::CCTransitionCrossFade::onEnter), this);
	using FunctionType = decltype(onEnter())(*)(cocos2d::CCTransitionCrossFade*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x96d18, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto cocos2d::CCTransitionCrossFade::onExit() -> decltype(onExit()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&cocos2d::CCTransitionCrossFade::onExit), this);
	using FunctionType = decltype(onExit())(*)(cocos2d::CCTransitionCrossFade*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x97050, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto cocos2d::CCTransitionCrossFade::draw() -> decltype(draw()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&cocos2d::CCTransitionCrossFade::draw), this);
	using FunctionType = decltype(draw())(*)(cocos2d::CCTransitionCrossFade*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x96d14, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}
