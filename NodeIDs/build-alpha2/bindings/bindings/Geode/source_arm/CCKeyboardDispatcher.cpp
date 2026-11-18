
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/mapping/CCKeyboardDispatcher.hpp>
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

auto cocos2d::CCKeyboardDispatcher::addDelegate(cocos2d::CCKeyboardDelegate* p0) -> decltype(addDelegate(p0)) {
	using FunctionType = decltype(addDelegate(p0))(*)(cocos2d::CCKeyboardDispatcher*, cocos2d::CCKeyboardDelegate*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4ed244, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto cocos2d::CCKeyboardDispatcher::dispatchKeyboardMSG(cocos2d::enumKeyCodes p0, bool p1, bool p2, double p3) -> decltype(dispatchKeyboardMSG(p0, p1, p2, p3)) {
	using FunctionType = decltype(dispatchKeyboardMSG(p0, p1, p2, p3))(*)(cocos2d::CCKeyboardDispatcher*, cocos2d::enumKeyCodes, bool, bool, double);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x19947c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1, p2, p3);
}

auto cocos2d::CCKeyboardDispatcher::forceAddDelegate(cocos2d::CCKeyboardDelegate* p0) -> decltype(forceAddDelegate(p0)) {
	using FunctionType = decltype(forceAddDelegate(p0))(*)(cocos2d::CCKeyboardDispatcher*, cocos2d::CCKeyboardDelegate*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4ed2a0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto cocos2d::CCKeyboardDispatcher::keyToString(cocos2d::enumKeyCodes p0) -> decltype(keyToString(p0)) {
	using FunctionType = decltype(keyToString(p0))(*)(cocos2d::CCKeyboardDispatcher*, cocos2d::enumKeyCodes);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x199fc4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto cocos2d::CCKeyboardDispatcher::updateModifierKeys(bool p0, bool p1, bool p2, bool p3) -> decltype(updateModifierKeys(p0, p1, p2, p3)) {
	using FunctionType = decltype(updateModifierKeys(p0, p1, p2, p3))(*)(cocos2d::CCKeyboardDispatcher*, bool, bool, bool, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x199fac, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1, p2, p3);
}
