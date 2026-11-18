
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/mapping/CCMouseDispatcher.hpp>
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

auto cocos2d::CCMouseDispatcher::addDelegate(cocos2d::CCMouseDelegate* p0) -> decltype(addDelegate(p0)) {
	using FunctionType = decltype(addDelegate(p0))(*)(cocos2d::CCMouseDispatcher*, cocos2d::CCMouseDelegate*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4ed244, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto cocos2d::CCMouseDispatcher::dispatchScrollMSG(float p0, float p1) -> decltype(dispatchScrollMSG(p0, p1)) {
	using FunctionType = decltype(dispatchScrollMSG(p0, p1))(*)(cocos2d::CCMouseDispatcher*, float, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4ed2dc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1);
}

auto cocos2d::CCMouseDispatcher::forceAddDelegate(cocos2d::CCMouseDelegate* p0) -> decltype(forceAddDelegate(p0)) {
	using FunctionType = decltype(forceAddDelegate(p0))(*)(cocos2d::CCMouseDispatcher*, cocos2d::CCMouseDelegate*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4ed2a0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto cocos2d::CCMouseDispatcher::removeDelegate(cocos2d::CCMouseDelegate* p0) -> decltype(removeDelegate(p0)) {
	using FunctionType = decltype(removeDelegate(p0))(*)(cocos2d::CCMouseDispatcher*, cocos2d::CCMouseDelegate*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4ed0e8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}
