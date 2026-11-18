
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/mapping/CCTransitionSceneOriented.hpp>
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

auto cocos2d::CCTransitionSceneOriented::create(float p0, cocos2d::CCScene* p1, cocos2d::tOrientation p2) -> decltype(create(p0, p1, p2)) {
	using FunctionType = decltype(create(p0, p1, p2))(*)(float, cocos2d::CCScene*, cocos2d::tOrientation);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x9311c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1, p2);
}

auto cocos2d::CCTransitionSceneOriented::initWithDuration(float p0, cocos2d::CCScene* p1, cocos2d::tOrientation p2) -> decltype(initWithDuration(p0, p1, p2)) {
	auto self = addresser::thunkAdjust(Resolve<float, cocos2d::CCScene*, cocos2d::tOrientation>::func(&cocos2d::CCTransitionSceneOriented::initWithDuration), this);
	using FunctionType = decltype(initWithDuration(p0, p1, p2))(*)(cocos2d::CCTransitionSceneOriented*, float, cocos2d::CCScene*, cocos2d::tOrientation);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x931a4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1, p2);
}
