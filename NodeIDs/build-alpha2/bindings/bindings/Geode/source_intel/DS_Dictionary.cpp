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
	static auto func = wrapFunction<FunctionType>(base::get() + 0x158cb0, tulip::hook::TulipConvention::Default);
	reinterpret_cast<FunctionType>(func)(this);
}

auto DS_Dictionary::copyFile(char const* p0, char const* p1) -> decltype(copyFile(p0, p1)) {
	using FunctionType = decltype(copyFile(p0, p1))(*)(char const*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x15bc70, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1);
}

auto DS_Dictionary::addBoolValuesToMapForKey(std::map<std::string, bool>& p0, char const* p1, bool p2) -> decltype(addBoolValuesToMapForKey(p0, p1, p2)) {
	using FunctionType = decltype(addBoolValuesToMapForKey(p0, p1, p2))(*)(DS_Dictionary*, std::map<std::string, bool>&, char const*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x160b90, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1, p2);
}

auto DS_Dictionary::addBoolValuesToMapForKeySpecial(std::map<std::string, bool>& p0, char const* p1, bool p2) -> decltype(addBoolValuesToMapForKeySpecial(p0, p1, p2)) {
	using FunctionType = decltype(addBoolValuesToMapForKeySpecial(p0, p1, p2))(*)(DS_Dictionary*, std::map<std::string, bool>&, char const*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x160830, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1, p2);
}

auto DS_Dictionary::checkCompatibility() -> decltype(checkCompatibility()) {
	using FunctionType = decltype(checkCompatibility())(*)(DS_Dictionary*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x159e90, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto DS_Dictionary::cleanStringWhiteSpace(std::string const& p0) -> decltype(cleanStringWhiteSpace(p0)) {
	using FunctionType = decltype(cleanStringWhiteSpace(p0))(*)(DS_Dictionary*, std::string const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x158ec0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto DS_Dictionary::decodeObjectForKey(char const* p0, bool p1, int p2) -> decltype(decodeObjectForKey(p0, p1, p2)) {
	using FunctionType = decltype(decodeObjectForKey(p0, p1, p2))(*)(DS_Dictionary*, char const*, bool, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x161250, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1, p2);
}

auto DS_Dictionary::getAllKeys() -> decltype(getAllKeys()) {
	using FunctionType = decltype(getAllKeys())(*)(DS_Dictionary*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x15c760, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto DS_Dictionary::getArrayForKey(char const* p0, bool p1) -> decltype(getArrayForKey(p0, p1)) {
	using FunctionType = decltype(getArrayForKey(p0, p1))(*)(DS_Dictionary*, char const*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x15fe80, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1);
}

auto DS_Dictionary::getBoolForKey(char const* p0) -> decltype(getBoolForKey(p0)) {
	using FunctionType = decltype(getBoolForKey(p0))(*)(DS_Dictionary*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x15ce40, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto DS_Dictionary::getDictForKey(char const* p0, bool p1) -> decltype(getDictForKey(p0, p1)) {
	using FunctionType = decltype(getDictForKey(p0, p1))(*)(DS_Dictionary*, char const*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x160d60, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1);
}

auto DS_Dictionary::getFloatForKey(char const* p0) -> decltype(getFloatForKey(p0)) {
	using FunctionType = decltype(getFloatForKey(p0))(*)(DS_Dictionary*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x15cf40, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto DS_Dictionary::getIndexOfKey(char const* p0) -> decltype(getIndexOfKey(p0)) {
	using FunctionType = decltype(getIndexOfKey(p0))(*)(DS_Dictionary*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x15c8d0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto DS_Dictionary::getIndexOfKeyWithClosestAlphaNumericalMatch(char const* p0) -> decltype(getIndexOfKeyWithClosestAlphaNumericalMatch(p0)) {
	using FunctionType = decltype(getIndexOfKeyWithClosestAlphaNumericalMatch(p0))(*)(DS_Dictionary*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x15c990, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto DS_Dictionary::getIntegerForKey(char const* p0) -> decltype(getIntegerForKey(p0)) {
	using FunctionType = decltype(getIntegerForKey(p0))(*)(DS_Dictionary*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x15cd00, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto DS_Dictionary::getKey(unsigned int p0) -> decltype(getKey(p0)) {
	using FunctionType = decltype(getKey(p0))(*)(DS_Dictionary*, unsigned int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x15c640, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto DS_Dictionary::getNumKeys() -> decltype(getNumKeys()) {
	using FunctionType = decltype(getNumKeys())(*)(DS_Dictionary*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x15c5c0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto DS_Dictionary::getObjectForKey(char const* p0) -> decltype(getObjectForKey(p0)) {
	using FunctionType = decltype(getObjectForKey(p0))(*)(DS_Dictionary*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x160000, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto DS_Dictionary::getRectArrayForKey(char const* p0) -> decltype(getRectArrayForKey(p0)) {
	using FunctionType = decltype(getRectArrayForKey(p0))(*)(DS_Dictionary*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x15d970, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto DS_Dictionary::getRectForKey(char const* p0) -> decltype(getRectForKey(p0)) {
	using FunctionType = decltype(getRectForKey(p0))(*)(DS_Dictionary*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x15d380, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto DS_Dictionary::getStringArrayForKey(char const* p0) -> decltype(getStringArrayForKey(p0)) {
	using FunctionType = decltype(getStringArrayForKey(p0))(*)(DS_Dictionary*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x15d590, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto DS_Dictionary::getStringForKey(char const* p0) -> decltype(getStringForKey(p0)) {
	using FunctionType = decltype(getStringForKey(p0))(*)(DS_Dictionary*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x15d080, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto DS_Dictionary::getVec2ArrayForKey(char const* p0) -> decltype(getVec2ArrayForKey(p0)) {
	using FunctionType = decltype(getVec2ArrayForKey(p0))(*)(DS_Dictionary*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x15d800, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto DS_Dictionary::getVec2ForKey(char const* p0) -> decltype(getVec2ForKey(p0)) {
	using FunctionType = decltype(getVec2ForKey(p0))(*)(DS_Dictionary*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x15d230, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto DS_Dictionary::loadRootSubDictFromCompressedFile(char const* p0, bool p1) -> decltype(loadRootSubDictFromCompressedFile(p0, p1)) {
	using FunctionType = decltype(loadRootSubDictFromCompressedFile(p0, p1))(*)(DS_Dictionary*, char const*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x159ee0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1);
}

auto DS_Dictionary::loadRootSubDictFromFile(char const* p0) -> decltype(loadRootSubDictFromFile(p0)) {
	using FunctionType = decltype(loadRootSubDictFromFile(p0))(*)(DS_Dictionary*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x159ee0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto DS_Dictionary::loadRootSubDictFromString(std::string const& p0) -> decltype(loadRootSubDictFromString(p0)) {
	using FunctionType = decltype(loadRootSubDictFromString(p0))(*)(DS_Dictionary*, std::string const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x15a5d0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto DS_Dictionary::rectFromString(std::string const& p0, cocos2d::CCRect& p1) -> decltype(rectFromString(p0, p1)) {
	using FunctionType = decltype(rectFromString(p0, p1))(*)(DS_Dictionary*, std::string const&, cocos2d::CCRect&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x159740, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1);
}

auto DS_Dictionary::removeAllKeys() -> decltype(removeAllKeys()) {
	using FunctionType = decltype(removeAllKeys())(*)(DS_Dictionary*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x15cc20, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto DS_Dictionary::removeKey(char const* p0) -> decltype(removeKey(p0)) {
	using FunctionType = decltype(removeKey(p0))(*)(DS_Dictionary*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x15cb30, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto DS_Dictionary::removeKey(unsigned int p0) -> decltype(removeKey(p0)) {
	using FunctionType = decltype(removeKey(p0))(*)(DS_Dictionary*, unsigned int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x15ca50, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto DS_Dictionary::saveRootSubDictToCompressedFile(char const* p0, bool p1) -> decltype(saveRootSubDictToCompressedFile(p0, p1)) {
	using FunctionType = decltype(saveRootSubDictToCompressedFile(p0, p1))(*)(DS_Dictionary*, char const*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x15b370, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1);
}

auto DS_Dictionary::saveRootSubDictToFile(char const* p0) -> decltype(saveRootSubDictToFile(p0)) {
	using FunctionType = decltype(saveRootSubDictToFile(p0))(*)(DS_Dictionary*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x15a7f0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto DS_Dictionary::saveRootSubDictToString() -> decltype(saveRootSubDictToString()) {
	using FunctionType = decltype(saveRootSubDictToString())(*)(DS_Dictionary*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x15bc00, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto DS_Dictionary::setArrayForKey(char const* p0, cocos2d::CCArray* p1) -> decltype(setArrayForKey(p0, p1)) {
	using FunctionType = decltype(setArrayForKey(p0, p1))(*)(DS_Dictionary*, char const*, cocos2d::CCArray*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x15fb20, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1);
}

auto DS_Dictionary::setBoolForKey(char const* p0, bool p1) -> decltype(setBoolForKey(p0, p1)) {
	using FunctionType = decltype(setBoolForKey(p0, p1))(*)(DS_Dictionary*, char const*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x15e0e0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1);
}

auto DS_Dictionary::setBoolForKey(char const* p0, bool p1, bool p2) -> decltype(setBoolForKey(p0, p1, p2)) {
	using FunctionType = decltype(setBoolForKey(p0, p1, p2))(*)(DS_Dictionary*, char const*, bool, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x15e190, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1, p2);
}

auto DS_Dictionary::setBoolMapForKey(char const* p0, std::map<std::string, bool>& p1) -> decltype(setBoolMapForKey(p0, p1)) {
	using FunctionType = decltype(setBoolMapForKey(p0, p1))(*)(DS_Dictionary*, char const*, std::map<std::string, bool>&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1605f0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1);
}

auto DS_Dictionary::setDictForKey(char const* p0, cocos2d::CCDictionary* p1) -> decltype(setDictForKey(p0, p1)) {
	using FunctionType = decltype(setDictForKey(p0, p1))(*)(DS_Dictionary*, char const*, cocos2d::CCDictionary*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1603b0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1);
}

auto DS_Dictionary::setFloatForKey(char const* p0, float p1) -> decltype(setFloatForKey(p0, p1)) {
	using FunctionType = decltype(setFloatForKey(p0, p1))(*)(DS_Dictionary*, char const*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x15e310, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1);
}

auto DS_Dictionary::setFloatForKey(char const* p0, float p1, bool p2) -> decltype(setFloatForKey(p0, p1, p2)) {
	using FunctionType = decltype(setFloatForKey(p0, p1, p2))(*)(DS_Dictionary*, char const*, float, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x15e320, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1, p2);
}

auto DS_Dictionary::setIntegerForKey(char const* p0, int p1) -> decltype(setIntegerForKey(p0, p1)) {
	using FunctionType = decltype(setIntegerForKey(p0, p1))(*)(DS_Dictionary*, char const*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x15de00, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1);
}

auto DS_Dictionary::setIntegerForKey(char const* p0, int p1, bool p2) -> decltype(setIntegerForKey(p0, p1, p2)) {
	using FunctionType = decltype(setIntegerForKey(p0, p1, p2))(*)(DS_Dictionary*, char const*, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x15de10, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1, p2);
}

auto DS_Dictionary::setObjectForKey(char const* p0, cocos2d::CCObject* p1) -> decltype(setObjectForKey(p0, p1)) {
	using FunctionType = decltype(setObjectForKey(p0, p1))(*)(DS_Dictionary*, char const*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x15fc70, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1);
}

auto DS_Dictionary::setRectForKey(char const* p0, cocos2d::CCRect const& p1) -> decltype(setRectForKey(p0, p1)) {
	using FunctionType = decltype(setRectForKey(p0, p1))(*)(DS_Dictionary*, char const*, cocos2d::CCRect const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x15ed00, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1);
}

auto DS_Dictionary::setRectForKey(char const* p0, cocos2d::CCRect const& p1, bool p2) -> decltype(setRectForKey(p0, p1, p2)) {
	using FunctionType = decltype(setRectForKey(p0, p1, p2))(*)(DS_Dictionary*, char const*, cocos2d::CCRect const&, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x15ed10, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1, p2);
}

auto DS_Dictionary::setStringArrayForKey(char const* p0, std::vector<std::string> const& p1) -> decltype(setStringArrayForKey(p0, p1)) {
	using FunctionType = decltype(setStringArrayForKey(p0, p1))(*)(DS_Dictionary*, char const*, std::vector<std::string> const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x15f060, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1);
}

auto DS_Dictionary::setStringArrayForKey(char const* p0, std::vector<std::string> const& p1, bool p2) -> decltype(setStringArrayForKey(p0, p1, p2)) {
	using FunctionType = decltype(setStringArrayForKey(p0, p1, p2))(*)(DS_Dictionary*, char const*, std::vector<std::string> const&, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x15f070, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1, p2);
}

auto DS_Dictionary::setStringForKey(char const* p0, std::string const& p1) -> decltype(setStringForKey(p0, p1)) {
	using FunctionType = decltype(setStringForKey(p0, p1))(*)(DS_Dictionary*, char const*, std::string const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x15e610, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1);
}

auto DS_Dictionary::setStringForKey(char const* p0, std::string const& p1, bool p2) -> decltype(setStringForKey(p0, p1, p2)) {
	using FunctionType = decltype(setStringForKey(p0, p1, p2))(*)(DS_Dictionary*, char const*, std::string const&, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x15e620, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1, p2);
}

auto DS_Dictionary::setSubDictForKey(char const* p0) -> decltype(setSubDictForKey(p0)) {
	using FunctionType = decltype(setSubDictForKey(p0))(*)(DS_Dictionary*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x15dae0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto DS_Dictionary::setSubDictForKey(char const* p0, bool p1, bool p2) -> decltype(setSubDictForKey(p0, p1, p2)) {
	using FunctionType = decltype(setSubDictForKey(p0, p1, p2))(*)(DS_Dictionary*, char const*, bool, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x15db90, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1, p2);
}

auto DS_Dictionary::setVec2ForKey(char const* p0, cocos2d::CCPoint const& p1) -> decltype(setVec2ForKey(p0, p1)) {
	using FunctionType = decltype(setVec2ForKey(p0, p1))(*)(DS_Dictionary*, char const*, cocos2d::CCPoint const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x15e800, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1);
}

auto DS_Dictionary::setVec2ForKey(char const* p0, cocos2d::CCPoint const& p1, bool p2) -> decltype(setVec2ForKey(p0, p1, p2)) {
	using FunctionType = decltype(setVec2ForKey(p0, p1, p2))(*)(DS_Dictionary*, char const*, cocos2d::CCPoint const&, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x15e810, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1, p2);
}

auto DS_Dictionary::split(std::string const& p0, char const* p1, std::vector<std::string>& p2) -> decltype(split(p0, p1, p2)) {
	using FunctionType = decltype(split(p0, p1, p2))(*)(DS_Dictionary*, std::string const&, char const*, std::vector<std::string>&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x159050, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1, p2);
}

auto DS_Dictionary::splitWithForm(std::string const& p0, std::vector<std::string>& p1) -> decltype(splitWithForm(p0, p1)) {
	using FunctionType = decltype(splitWithForm(p0, p1))(*)(DS_Dictionary*, std::string const&, std::vector<std::string>&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x159500, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1);
}

auto DS_Dictionary::stepBackToRootSubDict() -> decltype(stepBackToRootSubDict()) {
	using FunctionType = decltype(stepBackToRootSubDict())(*)(DS_Dictionary*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x15c440, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto DS_Dictionary::stepIntoSubDictWithKey(char const* p0) -> decltype(stepIntoSubDictWithKey(p0)) {
	using FunctionType = decltype(stepIntoSubDictWithKey(p0))(*)(DS_Dictionary*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x15c200, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto DS_Dictionary::stepOutOfSubDict() -> decltype(stepOutOfSubDict()) {
	using FunctionType = decltype(stepOutOfSubDict())(*)(DS_Dictionary*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x15c410, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto DS_Dictionary::vec2FromString(std::string const& p0, cocos2d::CCPoint& p1) -> decltype(vec2FromString(p0, p1)) {
	using FunctionType = decltype(vec2FromString(p0, p1))(*)(DS_Dictionary*, std::string const&, cocos2d::CCPoint&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x159d60, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1);
}
