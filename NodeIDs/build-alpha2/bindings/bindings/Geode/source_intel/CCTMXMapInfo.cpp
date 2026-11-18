#include <Geode/cocos/cocoa/CCObject.h>

#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/mapping/CCTMXMapInfo.hpp>
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

cocos2d::CCTMXMapInfo::CCTMXMapInfo() : cocos2d::CCTMXMapInfo(geode::CutoffConstructor, sizeof(cocos2d::CCTMXMapInfo)) {
	// here we construct it as normal as we can, then destruct it
	// using the generated functions. this ensures no memory gets leaked
	// no crashes :pray:
	geode::DestructorLock::addLock(this);
	cocos2d::CCTMXMapInfo::~CCTMXMapInfo();

	using FunctionType = void(*)(cocos2d::CCTMXMapInfo*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4c9360, tulip::hook::TulipConvention::Default);
	reinterpret_cast<FunctionType>(func)(this);
}

cocos2d::CCTMXMapInfo::~CCTMXMapInfo() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(cocos2d::CCTMXMapInfo*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x4c9400, tulip::hook::TulipConvention::Default);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) cocos2d::CCTMXMapInfo(geode::CutoffConstructor, sizeof(cocos2d::CCTMXMapInfo));
		geode::DestructorLock::addLock(this);
	}
}

auto cocos2d::CCTMXMapInfo::formatWithTMXFile(char const* p0) -> decltype(formatWithTMXFile(p0)) {
	using FunctionType = decltype(formatWithTMXFile(p0))(*)(char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4c8d40, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0);
}

auto cocos2d::CCTMXMapInfo::formatWithXML(char const* p0, char const* p1) -> decltype(formatWithXML(p0, p1)) {
	using FunctionType = decltype(formatWithXML(p0, p1))(*)(char const*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4c8f50, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1);
}

auto cocos2d::CCTMXMapInfo::getLayers() -> decltype(getLayers()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&cocos2d::CCTMXMapInfo::getLayers), this);
	using FunctionType = decltype(getLayers())(*)(cocos2d::CCTMXMapInfo*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4c9510, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto cocos2d::CCTMXMapInfo::setLayers(cocos2d::CCArray* p0) -> decltype(setLayers(p0)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCArray*>::func(&cocos2d::CCTMXMapInfo::setLayers), this);
	using FunctionType = decltype(setLayers(p0))(*)(cocos2d::CCTMXMapInfo*, cocos2d::CCArray*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4c9520, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto cocos2d::CCTMXMapInfo::getTilesets() -> decltype(getTilesets()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&cocos2d::CCTMXMapInfo::getTilesets), this);
	using FunctionType = decltype(getTilesets())(*)(cocos2d::CCTMXMapInfo*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4c9560, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto cocos2d::CCTMXMapInfo::setTilesets(cocos2d::CCArray* p0) -> decltype(setTilesets(p0)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCArray*>::func(&cocos2d::CCTMXMapInfo::setTilesets), this);
	using FunctionType = decltype(setTilesets(p0))(*)(cocos2d::CCTMXMapInfo*, cocos2d::CCArray*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4c9570, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto cocos2d::CCTMXMapInfo::getObjectGroups() -> decltype(getObjectGroups()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&cocos2d::CCTMXMapInfo::getObjectGroups), this);
	using FunctionType = decltype(getObjectGroups())(*)(cocos2d::CCTMXMapInfo*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4c95b0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto cocos2d::CCTMXMapInfo::setObjectGroups(cocos2d::CCArray* p0) -> decltype(setObjectGroups(p0)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCArray*>::func(&cocos2d::CCTMXMapInfo::setObjectGroups), this);
	using FunctionType = decltype(setObjectGroups(p0))(*)(cocos2d::CCTMXMapInfo*, cocos2d::CCArray*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4c95c0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto cocos2d::CCTMXMapInfo::getProperties() -> decltype(getProperties()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&cocos2d::CCTMXMapInfo::getProperties), this);
	using FunctionType = decltype(getProperties())(*)(cocos2d::CCTMXMapInfo*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4c9600, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto cocos2d::CCTMXMapInfo::setProperties(cocos2d::CCDictionary* p0) -> decltype(setProperties(p0)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCDictionary*>::func(&cocos2d::CCTMXMapInfo::setProperties), this);
	using FunctionType = decltype(setProperties(p0))(*)(cocos2d::CCTMXMapInfo*, cocos2d::CCDictionary*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4c9610, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto cocos2d::CCTMXMapInfo::startElement(void* p0, char const* p1, char const** p2) -> decltype(startElement(p0, p1, p2)) {
	auto self = addresser::thunkAdjust(Resolve<void*, char const*, char const**>::func(&cocos2d::CCTMXMapInfo::startElement), this);
	using FunctionType = decltype(startElement(p0, p1, p2))(*)(cocos2d::CCTMXMapInfo*, void*, char const*, char const**);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4c96a0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1, p2);
}

auto cocos2d::CCTMXMapInfo::endElement(void* p0, char const* p1) -> decltype(endElement(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<void*, char const*>::func(&cocos2d::CCTMXMapInfo::endElement), this);
	using FunctionType = decltype(endElement(p0, p1))(*)(cocos2d::CCTMXMapInfo*, void*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4cc840, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto cocos2d::CCTMXMapInfo::textHandler(void* p0, char const* p1, int p2) -> decltype(textHandler(p0, p1, p2)) {
	auto self = addresser::thunkAdjust(Resolve<void*, char const*, int>::func(&cocos2d::CCTMXMapInfo::textHandler), this);
	using FunctionType = decltype(textHandler(p0, p1, p2))(*)(cocos2d::CCTMXMapInfo*, void*, char const*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4ccc80, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1, p2);
}

auto cocos2d::CCTMXMapInfo::getTileProperties() -> decltype(getTileProperties()) {
	using FunctionType = decltype(getTileProperties())(*)(cocos2d::CCTMXMapInfo*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4c9650, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto cocos2d::CCTMXMapInfo::initWithTMXFile(char const* p0) -> decltype(initWithTMXFile(p0)) {
	using FunctionType = decltype(initWithTMXFile(p0))(*)(cocos2d::CCTMXMapInfo*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4c8f10, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto cocos2d::CCTMXMapInfo::initWithXML(char const* p0, char const* p1) -> decltype(initWithXML(p0, p1)) {
	using FunctionType = decltype(initWithXML(p0, p1))(*)(cocos2d::CCTMXMapInfo*, char const*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4c9060, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1);
}

auto cocos2d::CCTMXMapInfo::internalInit(char const* p0, char const* p1) -> decltype(internalInit(p0, p1)) {
	using FunctionType = decltype(internalInit(p0, p1))(*)(cocos2d::CCTMXMapInfo*, char const*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4c9090, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1);
}

auto cocos2d::CCTMXMapInfo::parseXMLFile(char const* p0) -> decltype(parseXMLFile(p0)) {
	using FunctionType = decltype(parseXMLFile(p0))(*)(cocos2d::CCTMXMapInfo*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4c9280, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto cocos2d::CCTMXMapInfo::parseXMLString(char const* p0) -> decltype(parseXMLString(p0)) {
	using FunctionType = decltype(parseXMLString(p0))(*)(cocos2d::CCTMXMapInfo*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4c91d0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto cocos2d::CCTMXMapInfo::setTileProperties(cocos2d::CCDictionary* p0) -> decltype(setTileProperties(p0)) {
	using FunctionType = decltype(setTileProperties(p0))(*)(cocos2d::CCTMXMapInfo*, cocos2d::CCDictionary*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4c9660, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}
