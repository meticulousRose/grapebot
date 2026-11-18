
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/mapping/CCKeypadDispatcher.hpp>
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

auto cocos2d::CCKeypadDispatcher::addDelegate(cocos2d::CCKeypadDelegate* p0) -> decltype(addDelegate(p0)) {
	using FunctionType = decltype(addDelegate(p0))(*)(cocos2d::CCKeypadDispatcher*, cocos2d::CCKeypadDelegate*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5e7820, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto cocos2d::CCKeypadDispatcher::dispatchKeypadMSG(cocos2d::ccKeypadMSGType p0) -> decltype(dispatchKeypadMSG(p0)) {
	using FunctionType = decltype(dispatchKeypadMSG(p0))(*)(cocos2d::CCKeypadDispatcher*, cocos2d::ccKeypadMSGType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5e78b8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto cocos2d::CCKeypadDispatcher::forceAddDelegate(cocos2d::CCKeypadDelegate* p0) -> decltype(forceAddDelegate(p0)) {
	using FunctionType = decltype(forceAddDelegate(p0))(*)(cocos2d::CCKeypadDispatcher*, cocos2d::CCKeypadDelegate*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5e787c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}
