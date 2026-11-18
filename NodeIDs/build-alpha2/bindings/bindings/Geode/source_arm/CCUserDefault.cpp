#include <Geode/cocos/cocoa/CCObject.h>

#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/mapping/CCUserDefault.hpp>
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

cocos2d::CCUserDefault::CCUserDefault() {
	using FunctionType = void(*)(cocos2d::CCUserDefault*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5c9b7c, tulip::hook::TulipConvention::Default);
	reinterpret_cast<FunctionType>(func)(this);
}

cocos2d::CCUserDefault::~CCUserDefault() {
	// basically we destruct it once by calling the gd function,
	// then we release the lock because there are no other destructors after this
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(cocos2d::CCUserDefault*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x5c9b34, tulip::hook::TulipConvention::Default);
		reinterpret_cast<FunctionType>(func)(this);
	}
	else {
		geode::DestructorLock::removeLock(this);
	}
}

auto cocos2d::CCUserDefault::createXMLFile() -> decltype(createXMLFile()) {
	using FunctionType = decltype(createXMLFile())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5cab40, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto cocos2d::CCUserDefault::getXMLFilePath() -> decltype(getXMLFilePath()) {
	using FunctionType = decltype(getXMLFilePath())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5cab48, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto cocos2d::CCUserDefault::initXMLFilePath() -> decltype(initXMLFilePath()) {
	using FunctionType = decltype(initXMLFilePath())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5caa68, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto cocos2d::CCUserDefault::isXMLFileExist() -> decltype(isXMLFileExist()) {
	using FunctionType = decltype(isXMLFileExist())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5caaec, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto cocos2d::CCUserDefault::purgeSharedUserDefault() -> decltype(purgeSharedUserDefault()) {
	using FunctionType = decltype(purgeSharedUserDefault())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5c9b94, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto cocos2d::CCUserDefault::sharedUserDefault() -> decltype(sharedUserDefault()) {
	using FunctionType = decltype(sharedUserDefault())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5ca9b0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto cocos2d::CCUserDefault::flush() -> decltype(flush()) {
	using FunctionType = decltype(flush())(*)(cocos2d::CCUserDefault*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5c9fe4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto cocos2d::CCUserDefault::getBoolForKey(char const* p0) -> decltype(getBoolForKey(p0)) {
	using FunctionType = decltype(getBoolForKey(p0))(*)(cocos2d::CCUserDefault*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5c9ba0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto cocos2d::CCUserDefault::getBoolForKey(char const* p0, bool p1) -> decltype(getBoolForKey(p0, p1)) {
	using FunctionType = decltype(getBoolForKey(p0, p1))(*)(cocos2d::CCUserDefault*, char const*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5c9ba8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1);
}

auto cocos2d::CCUserDefault::getDoubleForKey(char const* p0) -> decltype(getDoubleForKey(p0)) {
	using FunctionType = decltype(getDoubleForKey(p0))(*)(cocos2d::CCUserDefault*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x428588, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto cocos2d::CCUserDefault::getDoubleForKey(char const* p0, double p1) -> decltype(getDoubleForKey(p0, p1)) {
	using FunctionType = decltype(getDoubleForKey(p0, p1))(*)(cocos2d::CCUserDefault*, char const*, double);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x428590, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1);
}

auto cocos2d::CCUserDefault::getFloatForKey(char const* p0) -> decltype(getFloatForKey(p0)) {
	using FunctionType = decltype(getFloatForKey(p0))(*)(cocos2d::CCUserDefault*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5ca2c0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto cocos2d::CCUserDefault::getFloatForKey(char const* p0, float p1) -> decltype(getFloatForKey(p0, p1)) {
	using FunctionType = decltype(getFloatForKey(p0, p1))(*)(cocos2d::CCUserDefault*, char const*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5ca2c8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1);
}

auto cocos2d::CCUserDefault::getIntegerForKey(char const* p0) -> decltype(getIntegerForKey(p0)) {
	using FunctionType = decltype(getIntegerForKey(p0))(*)(cocos2d::CCUserDefault*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5ca0f0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto cocos2d::CCUserDefault::getIntegerForKey(char const* p0, int p1) -> decltype(getIntegerForKey(p0, p1)) {
	using FunctionType = decltype(getIntegerForKey(p0, p1))(*)(cocos2d::CCUserDefault*, char const*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5ca0f8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1);
}

auto cocos2d::CCUserDefault::getStringForKey(char const* p0) -> decltype(getStringForKey(p0)) {
	using FunctionType = decltype(getStringForKey(p0))(*)(cocos2d::CCUserDefault*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5ca688, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto cocos2d::CCUserDefault::getStringForKey(char const* p0, std::string const& p1) -> decltype(getStringForKey(p0, p1)) {
	using FunctionType = decltype(getStringForKey(p0, p1))(*)(cocos2d::CCUserDefault*, char const*, std::string const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5ca6b0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1);
}

auto cocos2d::CCUserDefault::setBoolForKey(char const* p0, bool p1) -> decltype(setBoolForKey(p0, p1)) {
	using FunctionType = decltype(setBoolForKey(p0, p1))(*)(cocos2d::CCUserDefault*, char const*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5c9f58, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1);
}

auto cocos2d::CCUserDefault::setDoubleForKey(char const* p0, double p1) -> decltype(setDoubleForKey(p0, p1)) {
	using FunctionType = decltype(setDoubleForKey(p0, p1))(*)(cocos2d::CCUserDefault*, char const*, double);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5ca5f4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1);
}

auto cocos2d::CCUserDefault::setFloatForKey(char const* p0, float p1) -> decltype(setFloatForKey(p0, p1)) {
	using FunctionType = decltype(setFloatForKey(p0, p1))(*)(cocos2d::CCUserDefault*, char const*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5ca410, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1);
}

auto cocos2d::CCUserDefault::setIntegerForKey(char const* p0, int p1) -> decltype(setIntegerForKey(p0, p1)) {
	using FunctionType = decltype(setIntegerForKey(p0, p1))(*)(cocos2d::CCUserDefault*, char const*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5ca234, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1);
}

auto cocos2d::CCUserDefault::setStringForKey(char const* p0, std::string const& p1) -> decltype(setStringForKey(p0, p1)) {
	using FunctionType = decltype(setStringForKey(p0, p1))(*)(cocos2d::CCUserDefault*, char const*, std::string const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5ca91c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1);
}
