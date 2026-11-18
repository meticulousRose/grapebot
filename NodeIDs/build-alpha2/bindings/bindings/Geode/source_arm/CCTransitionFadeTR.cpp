
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/mapping/CCTransitionFadeTR.hpp>
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

auto cocos2d::CCTransitionFadeTR::create(float p0, cocos2d::CCScene* p1) -> decltype(create(p0, p1)) {
	using FunctionType = decltype(create(p0, p1))(*)(float, cocos2d::CCScene*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x97974, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1);
}

auto cocos2d::CCTransitionFadeTR::onEnter() -> decltype(onEnter()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&cocos2d::CCTransitionFadeTR::onEnter), this);
	using FunctionType = decltype(onEnter())(*)(cocos2d::CCTransitionFadeTR*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x97a24, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto cocos2d::CCTransitionFadeTR::sceneOrder() -> decltype(sceneOrder()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&cocos2d::CCTransitionFadeTR::sceneOrder), this);
	using FunctionType = decltype(sceneOrder())(*)(cocos2d::CCTransitionFadeTR*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x97a1c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto cocos2d::CCTransitionFadeTR::actionWithSize(cocos2d::CCSize const& p0) -> decltype(actionWithSize(p0)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCSize const&>::func(&cocos2d::CCTransitionFadeTR::actionWithSize), this);
	using FunctionType = decltype(actionWithSize(p0))(*)(cocos2d::CCTransitionFadeTR*, cocos2d::CCSize const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x97b20, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto cocos2d::CCTransitionFadeTR::easeActionWithAction(cocos2d::CCActionInterval* p0) -> decltype(easeActionWithAction(p0)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCActionInterval*>::func(&cocos2d::CCTransitionFadeTR::easeActionWithAction), this);
	using FunctionType = decltype(easeActionWithAction(p0))(*)(cocos2d::CCTransitionFadeTR*, cocos2d::CCActionInterval*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x97b2c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}
