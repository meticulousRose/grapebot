#include <Geode/cocos/cocoa/CCObject.h>

#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/mapping/CCTransitionSlideInR.hpp>
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

cocos2d::CCTransitionSlideInR::~CCTransitionSlideInR() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(cocos2d::CCTransitionSlideInR*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0xa58d0, tulip::hook::TulipConvention::Default);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) cocos2d::CCTransitionSlideInR(geode::CutoffConstructor, sizeof(cocos2d::CCTransitionSlideInR));
		geode::DestructorLock::addLock(this);
	}
}

auto cocos2d::CCTransitionSlideInR::create(float p0, cocos2d::CCScene* p1) -> decltype(create(p0, p1)) {
	using FunctionType = decltype(create(p0, p1))(*)(float, cocos2d::CCScene*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xa5180, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1);
}

auto cocos2d::CCTransitionSlideInR::sceneOrder() -> decltype(sceneOrder()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&cocos2d::CCTransitionSlideInR::sceneOrder), this);
	using FunctionType = decltype(sceneOrder())(*)(cocos2d::CCTransitionSlideInR*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xa5210, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto cocos2d::CCTransitionSlideInR::initScenes() -> decltype(initScenes()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&cocos2d::CCTransitionSlideInR::initScenes), this);
	using FunctionType = decltype(initScenes())(*)(cocos2d::CCTransitionSlideInR*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xa5220, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto cocos2d::CCTransitionSlideInR::action() -> decltype(action()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&cocos2d::CCTransitionSlideInR::action), this);
	using FunctionType = decltype(action())(*)(cocos2d::CCTransitionSlideInR*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xa5280, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}
