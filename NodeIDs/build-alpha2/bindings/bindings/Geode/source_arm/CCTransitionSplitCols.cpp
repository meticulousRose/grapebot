
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/mapping/CCTransitionSplitCols.hpp>
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

auto cocos2d::CCTransitionSplitCols::create(float p0, cocos2d::CCScene* p1) -> decltype(create(p0, p1)) {
	using FunctionType = decltype(create(p0, p1))(*)(float, cocos2d::CCScene*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x974a8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1);
}

auto cocos2d::CCTransitionSplitCols::onEnter() -> decltype(onEnter()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&cocos2d::CCTransitionSplitCols::onEnter), this);
	using FunctionType = decltype(onEnter())(*)(cocos2d::CCTransitionSplitCols*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x97550, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto cocos2d::CCTransitionSplitCols::action() -> decltype(action()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&cocos2d::CCTransitionSplitCols::action), this);
	using FunctionType = decltype(action())(*)(cocos2d::CCTransitionSplitCols*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x97664, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto cocos2d::CCTransitionSplitCols::easeActionWithAction(cocos2d::CCActionInterval* p0) -> decltype(easeActionWithAction(p0)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCActionInterval*>::func(&cocos2d::CCTransitionSplitCols::easeActionWithAction), this);
	using FunctionType = decltype(easeActionWithAction(p0))(*)(cocos2d::CCTransitionSplitCols*, cocos2d::CCActionInterval*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x97678, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}
