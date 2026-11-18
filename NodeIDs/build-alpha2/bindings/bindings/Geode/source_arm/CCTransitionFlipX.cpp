
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/mapping/CCTransitionFlipX.hpp>
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

auto cocos2d::CCTransitionFlipX::create(float p0, cocos2d::CCScene* p1) -> decltype(create(p0, p1)) {
	using FunctionType = decltype(create(p0, p1))(*)(float, cocos2d::CCScene*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x953d0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1);
}

auto cocos2d::CCTransitionFlipX::create(float p0, cocos2d::CCScene* p1, cocos2d::tOrientation p2) -> decltype(create(p0, p1, p2)) {
	using FunctionType = decltype(create(p0, p1, p2))(*)(float, cocos2d::CCScene*, cocos2d::tOrientation);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x95348, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1, p2);
}

auto cocos2d::CCTransitionFlipX::onEnter() -> decltype(onEnter()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&cocos2d::CCTransitionFlipX::onEnter), this);
	using FunctionType = decltype(onEnter())(*)(cocos2d::CCTransitionFlipX*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x951c4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}
