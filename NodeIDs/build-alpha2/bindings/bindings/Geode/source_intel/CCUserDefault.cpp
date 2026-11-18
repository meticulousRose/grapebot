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
	static auto func = wrapFunction<FunctionType>(base::get() + 0x6afcb0, tulip::hook::TulipConvention::Default);
	reinterpret_cast<FunctionType>(func)(this);
}

cocos2d::CCUserDefault::~CCUserDefault() {
	// basically we destruct it once by calling the gd function,
	// then we release the lock because there are no other destructors after this
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(cocos2d::CCUserDefault*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x6afc60, tulip::hook::TulipConvention::Default);
		reinterpret_cast<FunctionType>(func)(this);
	}
	else {
		geode::DestructorLock::removeLock(this);
	}
}

auto cocos2d::CCUserDefault::createXMLFile() -> decltype(createXMLFile()) {
	using FunctionType = decltype(createXMLFile())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x6b0ec0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto cocos2d::CCUserDefault::getXMLFilePath() -> decltype(getXMLFilePath()) {
	using FunctionType = decltype(getXMLFilePath())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x6b0ed0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto cocos2d::CCUserDefault::initXMLFilePath() -> decltype(initXMLFilePath()) {
	using FunctionType = decltype(initXMLFilePath())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x6b0de0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto cocos2d::CCUserDefault::isXMLFileExist() -> decltype(isXMLFileExist()) {
	using FunctionType = decltype(isXMLFileExist())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x6b0e70, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto cocos2d::CCUserDefault::purgeSharedUserDefault() -> decltype(purgeSharedUserDefault()) {
	using FunctionType = decltype(purgeSharedUserDefault())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x6afcf0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto cocos2d::CCUserDefault::sharedUserDefault() -> decltype(sharedUserDefault()) {
	using FunctionType = decltype(sharedUserDefault())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x6b0d20, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto cocos2d::CCUserDefault::flush() -> decltype(flush()) {
	using FunctionType = decltype(flush())(*)(cocos2d::CCUserDefault*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x6b0130, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto cocos2d::CCUserDefault::getBoolForKey(char const* p0) -> decltype(getBoolForKey(p0)) {
	using FunctionType = decltype(getBoolForKey(p0))(*)(cocos2d::CCUserDefault*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x6afd10, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto cocos2d::CCUserDefault::getBoolForKey(char const* p0, bool p1) -> decltype(getBoolForKey(p0, p1)) {
	using FunctionType = decltype(getBoolForKey(p0, p1))(*)(cocos2d::CCUserDefault*, char const*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x6afd20, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1);
}

auto cocos2d::CCUserDefault::getDoubleForKey(char const* p0) -> decltype(getDoubleForKey(p0)) {
	using FunctionType = decltype(getDoubleForKey(p0))(*)(cocos2d::CCUserDefault*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x6b0680, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto cocos2d::CCUserDefault::getDoubleForKey(char const* p0, double p1) -> decltype(getDoubleForKey(p0, p1)) {
	using FunctionType = decltype(getDoubleForKey(p0, p1))(*)(cocos2d::CCUserDefault*, char const*, double);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x6b0690, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1);
}

auto cocos2d::CCUserDefault::getFloatForKey(char const* p0) -> decltype(getFloatForKey(p0)) {
	using FunctionType = decltype(getFloatForKey(p0))(*)(cocos2d::CCUserDefault*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x6b03f0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto cocos2d::CCUserDefault::getFloatForKey(char const* p0, float p1) -> decltype(getFloatForKey(p0, p1)) {
	using FunctionType = decltype(getFloatForKey(p0, p1))(*)(cocos2d::CCUserDefault*, char const*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x6b0400, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1);
}

auto cocos2d::CCUserDefault::getIntegerForKey(char const* p0) -> decltype(getIntegerForKey(p0)) {
	using FunctionType = decltype(getIntegerForKey(p0))(*)(cocos2d::CCUserDefault*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x6b0170, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto cocos2d::CCUserDefault::getIntegerForKey(char const* p0, int p1) -> decltype(getIntegerForKey(p0, p1)) {
	using FunctionType = decltype(getIntegerForKey(p0, p1))(*)(cocos2d::CCUserDefault*, char const*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x6b0180, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1);
}

auto cocos2d::CCUserDefault::getStringForKey(char const* p0) -> decltype(getStringForKey(p0)) {
	using FunctionType = decltype(getStringForKey(p0))(*)(cocos2d::CCUserDefault*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x6b0910, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto cocos2d::CCUserDefault::getStringForKey(char const* p0, std::string const& p1) -> decltype(getStringForKey(p0, p1)) {
	using FunctionType = decltype(getStringForKey(p0, p1))(*)(cocos2d::CCUserDefault*, char const*, std::string const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x6b0940, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1);
}

auto cocos2d::CCUserDefault::setBoolForKey(char const* p0, bool p1) -> decltype(setBoolForKey(p0, p1)) {
	using FunctionType = decltype(setBoolForKey(p0, p1))(*)(cocos2d::CCUserDefault*, char const*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x6b0050, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1);
}

auto cocos2d::CCUserDefault::setDoubleForKey(char const* p0, double p1) -> decltype(setDoubleForKey(p0, p1)) {
	using FunctionType = decltype(setDoubleForKey(p0, p1))(*)(cocos2d::CCUserDefault*, char const*, double);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x6b0820, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1);
}

auto cocos2d::CCUserDefault::setFloatForKey(char const* p0, float p1) -> decltype(setFloatForKey(p0, p1)) {
	using FunctionType = decltype(setFloatForKey(p0, p1))(*)(cocos2d::CCUserDefault*, char const*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x41e740, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1);
}

auto cocos2d::CCUserDefault::setIntegerForKey(char const* p0, int p1) -> decltype(setIntegerForKey(p0, p1)) {
	using FunctionType = decltype(setIntegerForKey(p0, p1))(*)(cocos2d::CCUserDefault*, char const*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x6b0310, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1);
}

auto cocos2d::CCUserDefault::setStringForKey(char const* p0, std::string const& p1) -> decltype(setStringForKey(p0, p1)) {
	using FunctionType = decltype(setStringForKey(p0, p1))(*)(cocos2d::CCUserDefault*, char const*, std::string const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x6b0c30, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1);
}
