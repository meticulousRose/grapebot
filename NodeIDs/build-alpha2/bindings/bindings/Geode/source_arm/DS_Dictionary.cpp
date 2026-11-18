#include <Geode/cocos/cocoa/CCObject.h>

#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/mapping/DS_Dictionary.hpp>
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

DS_Dictionary::DS_Dictionary() {
	using FunctionType = void(*)(DS_Dictionary*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x124b20, tulip::hook::TulipConvention::Default);
	reinterpret_cast<FunctionType>(func)(this);
}

auto DS_Dictionary::copyFile(char const* p0, char const* p1) -> decltype(copyFile(p0, p1)) {
	using FunctionType = decltype(copyFile(p0, p1))(*)(char const*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x127534, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1);
}

auto DS_Dictionary::addBoolValuesToMapForKey(std::map<std::string, bool>& p0, char const* p1, bool p2) -> decltype(addBoolValuesToMapForKey(p0, p1, p2)) {
	using FunctionType = decltype(addBoolValuesToMapForKey(p0, p1, p2))(*)(DS_Dictionary*, std::map<std::string, bool>&, char const*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x12bc54, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1, p2);
}

auto DS_Dictionary::addBoolValuesToMapForKeySpecial(std::map<std::string, bool>& p0, char const* p1, bool p2) -> decltype(addBoolValuesToMapForKeySpecial(p0, p1, p2)) {
	using FunctionType = decltype(addBoolValuesToMapForKeySpecial(p0, p1, p2))(*)(DS_Dictionary*, std::map<std::string, bool>&, char const*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x12b92c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1, p2);
}

auto DS_Dictionary::checkCompatibility() -> decltype(checkCompatibility()) {
	using FunctionType = decltype(checkCompatibility())(*)(DS_Dictionary*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x125ba8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto DS_Dictionary::cleanStringWhiteSpace(std::string const& p0) -> decltype(cleanStringWhiteSpace(p0)) {
	using FunctionType = decltype(cleanStringWhiteSpace(p0))(*)(DS_Dictionary*, std::string const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x124cdc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto DS_Dictionary::decodeObjectForKey(char const* p0, bool p1, int p2) -> decltype(decodeObjectForKey(p0, p1, p2)) {
	using FunctionType = decltype(decodeObjectForKey(p0, p1, p2))(*)(DS_Dictionary*, char const*, bool, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x12c268, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1, p2);
}

auto DS_Dictionary::getAllKeys() -> decltype(getAllKeys()) {
	using FunctionType = decltype(getAllKeys())(*)(DS_Dictionary*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x127e28, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto DS_Dictionary::getArrayForKey(char const* p0, bool p1) -> decltype(getArrayForKey(p0, p1)) {
	using FunctionType = decltype(getArrayForKey(p0, p1))(*)(DS_Dictionary*, char const*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x12b060, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1);
}

auto DS_Dictionary::getBoolForKey(char const* p0) -> decltype(getBoolForKey(p0)) {
	using FunctionType = decltype(getBoolForKey(p0))(*)(DS_Dictionary*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x128468, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto DS_Dictionary::getDictForKey(char const* p0, bool p1) -> decltype(getDictForKey(p0, p1)) {
	using FunctionType = decltype(getDictForKey(p0, p1))(*)(DS_Dictionary*, char const*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x12bdf8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1);
}

auto DS_Dictionary::getFloatForKey(char const* p0) -> decltype(getFloatForKey(p0)) {
	using FunctionType = decltype(getFloatForKey(p0))(*)(DS_Dictionary*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x60fcc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto DS_Dictionary::getIndexOfKey(char const* p0) -> decltype(getIndexOfKey(p0)) {
	using FunctionType = decltype(getIndexOfKey(p0))(*)(DS_Dictionary*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x127f84, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto DS_Dictionary::getIndexOfKeyWithClosestAlphaNumericalMatch(char const* p0) -> decltype(getIndexOfKeyWithClosestAlphaNumericalMatch(p0)) {
	using FunctionType = decltype(getIndexOfKeyWithClosestAlphaNumericalMatch(p0))(*)(DS_Dictionary*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x12803c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto DS_Dictionary::getIntegerForKey(char const* p0) -> decltype(getIntegerForKey(p0)) {
	using FunctionType = decltype(getIntegerForKey(p0))(*)(DS_Dictionary*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x12835c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto DS_Dictionary::getKey(unsigned int p0) -> decltype(getKey(p0)) {
	using FunctionType = decltype(getKey(p0))(*)(DS_Dictionary*, unsigned int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x127d0c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto DS_Dictionary::getNumKeys() -> decltype(getNumKeys()) {
	using FunctionType = decltype(getNumKeys())(*)(DS_Dictionary*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x127ca0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto DS_Dictionary::getObjectForKey(char const* p0) -> decltype(getObjectForKey(p0)) {
	using FunctionType = decltype(getObjectForKey(p0))(*)(DS_Dictionary*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x12b1c8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto DS_Dictionary::getRectArrayForKey(char const* p0) -> decltype(getRectArrayForKey(p0)) {
	using FunctionType = decltype(getRectArrayForKey(p0))(*)(DS_Dictionary*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x128ec0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto DS_Dictionary::getRectForKey(char const* p0) -> decltype(getRectForKey(p0)) {
	using FunctionType = decltype(getRectForKey(p0))(*)(DS_Dictionary*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x12893c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto DS_Dictionary::getStringArrayForKey(char const* p0) -> decltype(getStringArrayForKey(p0)) {
	using FunctionType = decltype(getStringArrayForKey(p0))(*)(DS_Dictionary*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x128b30, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto DS_Dictionary::getStringForKey(char const* p0) -> decltype(getStringForKey(p0)) {
	using FunctionType = decltype(getStringForKey(p0))(*)(DS_Dictionary*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x128680, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto DS_Dictionary::getVec2ArrayForKey(char const* p0) -> decltype(getVec2ArrayForKey(p0)) {
	using FunctionType = decltype(getVec2ArrayForKey(p0))(*)(DS_Dictionary*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x128d50, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto DS_Dictionary::getVec2ForKey(char const* p0) -> decltype(getVec2ForKey(p0)) {
	using FunctionType = decltype(getVec2ForKey(p0))(*)(DS_Dictionary*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x128808, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto DS_Dictionary::loadRootSubDictFromFile(char const* p0) -> decltype(loadRootSubDictFromFile(p0)) {
	using FunctionType = decltype(loadRootSubDictFromFile(p0))(*)(DS_Dictionary*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x125c08, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto DS_Dictionary::loadRootSubDictFromString(std::string const& p0) -> decltype(loadRootSubDictFromString(p0)) {
	using FunctionType = decltype(loadRootSubDictFromString(p0))(*)(DS_Dictionary*, std::string const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x126248, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto DS_Dictionary::rectFromString(std::string const& p0, cocos2d::CCRect& p1) -> decltype(rectFromString(p0, p1)) {
	using FunctionType = decltype(rectFromString(p0, p1))(*)(DS_Dictionary*, std::string const&, cocos2d::CCRect&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1254c0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1);
}

auto DS_Dictionary::removeAllKeys() -> decltype(removeAllKeys()) {
	using FunctionType = decltype(removeAllKeys())(*)(DS_Dictionary*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1282b8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto DS_Dictionary::removeKey(char const* p0) -> decltype(removeKey(p0)) {
	using FunctionType = decltype(removeKey(p0))(*)(DS_Dictionary*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1281d4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto DS_Dictionary::removeKey(unsigned int p0) -> decltype(removeKey(p0)) {
	using FunctionType = decltype(removeKey(p0))(*)(DS_Dictionary*, unsigned int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1280f8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto DS_Dictionary::saveRootSubDictToCompressedFile(char const* p0, bool p1) -> decltype(saveRootSubDictToCompressedFile(p0, p1)) {
	using FunctionType = decltype(saveRootSubDictToCompressedFile(p0, p1))(*)(DS_Dictionary*, char const*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x50b398, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1);
}

auto DS_Dictionary::saveRootSubDictToFile(char const* p0) -> decltype(saveRootSubDictToFile(p0)) {
	using FunctionType = decltype(saveRootSubDictToFile(p0))(*)(DS_Dictionary*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x126418, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto DS_Dictionary::saveRootSubDictToString() -> decltype(saveRootSubDictToString()) {
	using FunctionType = decltype(saveRootSubDictToString())(*)(DS_Dictionary*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1274bc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto DS_Dictionary::setArrayForKey(char const* p0, cocos2d::CCArray* p1) -> decltype(setArrayForKey(p0, p1)) {
	using FunctionType = decltype(setArrayForKey(p0, p1))(*)(DS_Dictionary*, char const*, cocos2d::CCArray*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x12acf0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1);
}

auto DS_Dictionary::setBoolForKey(char const* p0, bool p1) -> decltype(setBoolForKey(p0, p1)) {
	using FunctionType = decltype(setBoolForKey(p0, p1))(*)(DS_Dictionary*, char const*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x12953c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1);
}

auto DS_Dictionary::setBoolForKey(char const* p0, bool p1, bool p2) -> decltype(setBoolForKey(p0, p1, p2)) {
	using FunctionType = decltype(setBoolForKey(p0, p1, p2))(*)(DS_Dictionary*, char const*, bool, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1295e4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1, p2);
}

auto DS_Dictionary::setBoolMapForKey(char const* p0, std::map<std::string, bool>& p1) -> decltype(setBoolMapForKey(p0, p1)) {
	using FunctionType = decltype(setBoolMapForKey(p0, p1))(*)(DS_Dictionary*, char const*, std::map<std::string, bool>&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x12b704, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1);
}

auto DS_Dictionary::setDictForKey(char const* p0, cocos2d::CCDictionary* p1) -> decltype(setDictForKey(p0, p1)) {
	using FunctionType = decltype(setDictForKey(p0, p1))(*)(DS_Dictionary*, char const*, cocos2d::CCDictionary*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x12b510, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1);
}

auto DS_Dictionary::setFloatForKey(char const* p0, float p1) -> decltype(setFloatForKey(p0, p1)) {
	using FunctionType = decltype(setFloatForKey(p0, p1))(*)(DS_Dictionary*, char const*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x129724, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1);
}

auto DS_Dictionary::setFloatForKey(char const* p0, float p1, bool p2) -> decltype(setFloatForKey(p0, p1, p2)) {
	using FunctionType = decltype(setFloatForKey(p0, p1, p2))(*)(DS_Dictionary*, char const*, float, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x12972c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1, p2);
}

auto DS_Dictionary::setIntegerForKey(char const* p0, int p1) -> decltype(setIntegerForKey(p0, p1)) {
	using FunctionType = decltype(setIntegerForKey(p0, p1))(*)(DS_Dictionary*, char const*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1292d0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1);
}

auto DS_Dictionary::setIntegerForKey(char const* p0, int p1, bool p2) -> decltype(setIntegerForKey(p0, p1, p2)) {
	using FunctionType = decltype(setIntegerForKey(p0, p1, p2))(*)(DS_Dictionary*, char const*, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1292d8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1, p2);
}

auto DS_Dictionary::setObjectForKey(char const* p0, cocos2d::CCObject* p1) -> decltype(setObjectForKey(p0, p1)) {
	using FunctionType = decltype(setObjectForKey(p0, p1))(*)(DS_Dictionary*, char const*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x12ae2c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1);
}

auto DS_Dictionary::setRectArrayForKey(char const* p0, std::vector<cocos2d::CCRect> const& p1) -> decltype(setRectArrayForKey(p0, p1)) {
	using FunctionType = decltype(setRectArrayForKey(p0, p1))(*)(DS_Dictionary*, char const*, std::vector<cocos2d::CCRect> const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x12a958, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1);
}

auto DS_Dictionary::setRectArrayForKey(char const* p0, std::vector<cocos2d::CCRect> const& p1, bool p2) -> decltype(setRectArrayForKey(p0, p1, p2)) {
	using FunctionType = decltype(setRectArrayForKey(p0, p1, p2))(*)(DS_Dictionary*, char const*, std::vector<cocos2d::CCRect> const&, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x12a960, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1, p2);
}

auto DS_Dictionary::setRectForKey(char const* p0, cocos2d::CCRect const& p1) -> decltype(setRectForKey(p0, p1)) {
	using FunctionType = decltype(setRectForKey(p0, p1))(*)(DS_Dictionary*, char const*, cocos2d::CCRect const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x12a07c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1);
}

auto DS_Dictionary::setRectForKey(char const* p0, cocos2d::CCRect const& p1, bool p2) -> decltype(setRectForKey(p0, p1, p2)) {
	using FunctionType = decltype(setRectForKey(p0, p1, p2))(*)(DS_Dictionary*, char const*, cocos2d::CCRect const&, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x12a084, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1, p2);
}

auto DS_Dictionary::setStringArrayForKey(char const* p0, std::vector<std::string> const& p1) -> decltype(setStringArrayForKey(p0, p1)) {
	using FunctionType = decltype(setStringArrayForKey(p0, p1))(*)(DS_Dictionary*, char const*, std::vector<std::string> const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x12a418, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1);
}

auto DS_Dictionary::setStringArrayForKey(char const* p0, std::vector<std::string> const& p1, bool p2) -> decltype(setStringArrayForKey(p0, p1, p2)) {
	using FunctionType = decltype(setStringArrayForKey(p0, p1, p2))(*)(DS_Dictionary*, char const*, std::vector<std::string> const&, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x12a420, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1, p2);
}

auto DS_Dictionary::setStringForKey(char const* p0, std::string const& p1) -> decltype(setStringForKey(p0, p1)) {
	using FunctionType = decltype(setStringForKey(p0, p1))(*)(DS_Dictionary*, char const*, std::string const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1299a8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1);
}

auto DS_Dictionary::setStringForKey(char const* p0, std::string const& p1, bool p2) -> decltype(setStringForKey(p0, p1, p2)) {
	using FunctionType = decltype(setStringForKey(p0, p1, p2))(*)(DS_Dictionary*, char const*, std::string const&, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1299b0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1, p2);
}

auto DS_Dictionary::setSubDictForKey(char const* p0) -> decltype(setSubDictForKey(p0)) {
	using FunctionType = decltype(setSubDictForKey(p0))(*)(DS_Dictionary*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x129030, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto DS_Dictionary::setSubDictForKey(char const* p0, bool p1, bool p2) -> decltype(setSubDictForKey(p0, p1, p2)) {
	using FunctionType = decltype(setSubDictForKey(p0, p1, p2))(*)(DS_Dictionary*, char const*, bool, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1290d4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1, p2);
}

auto DS_Dictionary::setVec2ArrayForKey(char const* p0, std::vector<cocos2d::CCPoint> const& p1) -> decltype(setVec2ArrayForKey(p0, p1)) {
	using FunctionType = decltype(setVec2ArrayForKey(p0, p1))(*)(DS_Dictionary*, char const*, std::vector<cocos2d::CCPoint> const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x12a610, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1);
}

auto DS_Dictionary::setVec2ArrayForKey(char const* p0, std::vector<cocos2d::CCPoint> const& p1, bool p2) -> decltype(setVec2ArrayForKey(p0, p1, p2)) {
	using FunctionType = decltype(setVec2ArrayForKey(p0, p1, p2))(*)(DS_Dictionary*, char const*, std::vector<cocos2d::CCPoint> const&, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x12a618, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1, p2);
}

auto DS_Dictionary::setVec2ForKey(char const* p0, cocos2d::CCPoint const& p1) -> decltype(setVec2ForKey(p0, p1)) {
	using FunctionType = decltype(setVec2ForKey(p0, p1))(*)(DS_Dictionary*, char const*, cocos2d::CCPoint const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x129b34, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1);
}

auto DS_Dictionary::setVec2ForKey(char const* p0, cocos2d::CCPoint const& p1, bool p2) -> decltype(setVec2ForKey(p0, p1, p2)) {
	using FunctionType = decltype(setVec2ForKey(p0, p1, p2))(*)(DS_Dictionary*, char const*, cocos2d::CCPoint const&, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x129b3c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1, p2);
}

auto DS_Dictionary::split(std::string const& p0, char const* p1, std::vector<std::string>& p2) -> decltype(split(p0, p1, p2)) {
	using FunctionType = decltype(split(p0, p1, p2))(*)(DS_Dictionary*, std::string const&, char const*, std::vector<std::string>&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x124e4c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1, p2);
}

auto DS_Dictionary::splitWithForm(std::string const& p0, std::vector<std::string>& p1) -> decltype(splitWithForm(p0, p1)) {
	using FunctionType = decltype(splitWithForm(p0, p1))(*)(DS_Dictionary*, std::string const&, std::vector<std::string>&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x125254, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1);
}

auto DS_Dictionary::stepBackToRootSubDict() -> decltype(stepBackToRootSubDict()) {
	using FunctionType = decltype(stepBackToRootSubDict())(*)(DS_Dictionary*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x127b74, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto DS_Dictionary::stepIntoSubDictWithKey(char const* p0) -> decltype(stepIntoSubDictWithKey(p0)) {
	using FunctionType = decltype(stepIntoSubDictWithKey(p0))(*)(DS_Dictionary*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1279b0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto DS_Dictionary::stepOutOfSubDict() -> decltype(stepOutOfSubDict()) {
	using FunctionType = decltype(stepOutOfSubDict())(*)(DS_Dictionary*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x127b58, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto DS_Dictionary::vec2FromString(std::string const& p0, cocos2d::CCPoint& p1) -> decltype(vec2FromString(p0, p1)) {
	using FunctionType = decltype(vec2FromString(p0, p1))(*)(DS_Dictionary*, std::string const&, cocos2d::CCPoint&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x125a4c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1);
}
