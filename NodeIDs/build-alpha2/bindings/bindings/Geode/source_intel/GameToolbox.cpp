
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/GameToolbox.hpp>
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

auto GameToolbox::addBackButton(cocos2d::CCLayer* parent, cocos2d::CCMenuItem* menuItem) -> decltype(addBackButton(parent, menuItem)) {
	using FunctionType = decltype(addBackButton(parent, menuItem))(*)(cocos2d::CCLayer*, cocos2d::CCMenuItem*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4ebf90, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(parent, menuItem);
}

auto GameToolbox::addRThumbScrollButton(cocos2d::CCLayer* parent) -> decltype(addRThumbScrollButton(parent)) {
	using FunctionType = decltype(addRThumbScrollButton(parent))(*)(cocos2d::CCLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4ec060, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(parent);
}

auto GameToolbox::alignItemsHorisontally(cocos2d::CCArray* items, float gap, cocos2d::CCPoint position, bool skipSize) -> decltype(alignItemsHorisontally(items, gap, position, skipSize)) {
	using FunctionType = decltype(alignItemsHorisontally(items, gap, position, skipSize))(*)(cocos2d::CCArray*, float, cocos2d::CCPoint, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4e9150, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(items, gap, position, skipSize);
}

auto GameToolbox::alignItemsVertically(cocos2d::CCArray* items, float gap, cocos2d::CCPoint position) -> decltype(alignItemsVertically(items, gap, position)) {
	using FunctionType = decltype(alignItemsVertically(items, gap, position))(*)(cocos2d::CCArray*, float, cocos2d::CCPoint);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4e9480, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(items, gap, position);
}

auto GameToolbox::bounceTime(float time) -> decltype(bounceTime(time)) {
	using FunctionType = decltype(bounceTime(time))(*)(float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4f40a0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(time);
}

auto GameToolbox::colorToSepia(cocos2d::ccColor3B color, float factor) -> decltype(colorToSepia(color, factor)) {
	using FunctionType = decltype(colorToSepia(color, factor))(*)(cocos2d::ccColor3B, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4ec6e0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(color, factor);
}

auto GameToolbox::createHashString(std::string const& str, int length) -> decltype(createHashString(str, length)) {
	using FunctionType = decltype(createHashString(str, length))(*)(std::string const&, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4ede10, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(str, length);
}

auto GameToolbox::createToggleButton(std::string label, cocos2d::SEL_MenuHandler selector, bool state, cocos2d::CCMenu* menu, cocos2d::CCPoint position, cocos2d::CCNode* parent, cocos2d::CCNode* labelParent, cocos2d::CCArray* container) -> decltype(createToggleButton(label, selector, state, menu, position, parent, labelParent, container)) {
	using FunctionType = decltype(createToggleButton(label, selector, state, menu, position, parent, labelParent, container))(*)(std::string, cocos2d::SEL_MenuHandler, bool, cocos2d::CCMenu*, cocos2d::CCPoint, cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCArray*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4eb470, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(label, selector, state, menu, position, parent, labelParent, container);
}

auto GameToolbox::createToggleButton(std::string label, cocos2d::SEL_MenuHandler selector, bool state, cocos2d::CCMenu* menu, cocos2d::CCPoint position, cocos2d::CCNode* parent, cocos2d::CCNode* labelParent, float buttonScale, float maxLabelScale, float maxLabelWidth, cocos2d::CCPoint labelOffset, char const* font, bool labelTop, int labelTag, cocos2d::CCArray* container) -> decltype(createToggleButton(label, selector, state, menu, position, parent, labelParent, buttonScale, maxLabelScale, maxLabelWidth, labelOffset, font, labelTop, labelTag, container)) {
	using FunctionType = decltype(createToggleButton(label, selector, state, menu, position, parent, labelParent, buttonScale, maxLabelScale, maxLabelWidth, labelOffset, font, labelTop, labelTag, container))(*)(std::string, cocos2d::SEL_MenuHandler, bool, cocos2d::CCMenu*, cocos2d::CCPoint, cocos2d::CCNode*, cocos2d::CCNode*, float, float, float, cocos2d::CCPoint, char const*, bool, int, cocos2d::CCArray*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4eb5a0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(label, selector, state, menu, position, parent, labelParent, buttonScale, maxLabelScale, maxLabelWidth, labelOffset, font, labelTop, labelTag, container);
}

auto GameToolbox::doWeHaveInternet() -> decltype(doWeHaveInternet()) {
	using FunctionType = decltype(doWeHaveInternet())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4e9640, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto GameToolbox::easeToText(int easingType) -> decltype(easeToText(easingType)) {
	using FunctionType = decltype(easeToText(easingType))(*)(int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4f3e00, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(easingType);
}

auto GameToolbox::extractServerPopup(std::string& response) -> decltype(extractServerPopup(response)) {
	using FunctionType = decltype(extractServerPopup(response))(*)(std::string&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4e9bc0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(response);
}

auto GameToolbox::fast_rand() -> decltype(fast_rand()) {
	using FunctionType = decltype(fast_rand())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4ef210, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto GameToolbox::fast_rand_0_1() -> decltype(fast_rand_0_1()) {
	using FunctionType = decltype(fast_rand_0_1())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4ef240, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto GameToolbox::fast_rand_minus1_1() -> decltype(fast_rand_minus1_1()) {
	using FunctionType = decltype(fast_rand_minus1_1())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4ef280, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto GameToolbox::fast_srand(uint64_t seed) -> decltype(fast_srand(seed)) {
	using FunctionType = decltype(fast_srand(seed))(*)(uint64_t);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4ef1f0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(seed);
}

auto GameToolbox::getDropActionWDelay(float delay, float duration, float scale, cocos2d::CCNode* target, cocos2d::SEL_CallFunc selector) -> decltype(getDropActionWDelay(delay, duration, scale, target, selector)) {
	using FunctionType = decltype(getDropActionWDelay(delay, duration, scale, target, selector))(*)(float, float, float, cocos2d::CCNode*, cocos2d::SEL_CallFunc);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4e8d00, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(delay, duration, scale, target, selector);
}

auto GameToolbox::getDropActionWEnd(float delay, float duration, float scale, cocos2d::CCAction* action, float actionDelay) -> decltype(getDropActionWEnd(delay, duration, scale, action, actionDelay)) {
	using FunctionType = decltype(getDropActionWEnd(delay, duration, scale, action, actionDelay))(*)(float, float, float, cocos2d::CCAction*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4e8dc0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(delay, duration, scale, action, actionDelay);
}

auto GameToolbox::getEasedAction(cocos2d::CCActionInterval* action, int easingType, float easingRate) -> decltype(getEasedAction(action, easingType, easingRate)) {
	using FunctionType = decltype(getEasedAction(action, easingType, easingRate))(*)(cocos2d::CCActionInterval*, int, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4eeec0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(action, easingType, easingRate);
}

auto GameToolbox::getEasedValue(float value, int easingType, float easingRate) -> decltype(getEasedValue(value, easingType, easingRate)) {
	using FunctionType = decltype(getEasedValue(value, easingType, easingRate))(*)(float, int, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4f4160, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(value, easingType, easingRate);
}

auto GameToolbox::getfast_srand() -> decltype(getfast_srand()) {
	using FunctionType = decltype(getfast_srand())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4ef200, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto GameToolbox::getInvertedEasing(int easingType) -> decltype(getInvertedEasing(easingType)) {
	using FunctionType = decltype(getInvertedEasing(easingType))(*)(int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4eefc0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(easingType);
}

auto GameToolbox::getLargestMergedIntDicts(cocos2d::CCDictionary* dict1, cocos2d::CCDictionary* dict2) -> decltype(getLargestMergedIntDicts(dict1, dict2)) {
	using FunctionType = decltype(getLargestMergedIntDicts(dict1, dict2))(*)(cocos2d::CCDictionary*, cocos2d::CCDictionary*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4eba30, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(dict1, dict2);
}

auto GameToolbox::getMultipliedHSV(cocos2d::ccHSVValue const& value, float factor) -> decltype(getMultipliedHSV(value, factor)) {
	using FunctionType = decltype(getMultipliedHSV(value, factor))(*)(cocos2d::ccHSVValue const&, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4ec870, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(value, factor);
}

auto GameToolbox::getRelativeOffset(GameObject* object, cocos2d::CCPoint offset) -> decltype(getRelativeOffset(object, offset)) {
	using FunctionType = decltype(getRelativeOffset(object, offset))(*)(GameObject*, cocos2d::CCPoint);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4eb800, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(object, offset);
}

auto GameToolbox::getResponse(cocos2d::extension::CCHttpResponse* response) -> decltype(getResponse(response)) {
	using FunctionType = decltype(getResponse(response))(*)(cocos2d::extension::CCHttpResponse*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4e98f0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(response);
}

auto GameToolbox::getTimeString(int seconds, bool noSeconds) -> decltype(getTimeString(seconds, noSeconds)) {
	using FunctionType = decltype(getTimeString(seconds, noSeconds))(*)(int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4eded0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(seconds, noSeconds);
}

auto GameToolbox::hsvFromString(std::string const& str, char const* delim) -> decltype(hsvFromString(str, delim)) {
	using FunctionType = decltype(hsvFromString(str, delim))(*)(std::string const&, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4ec910, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(str, delim);
}

auto GameToolbox::intToShortString(int p0, bool p1) -> decltype(intToShortString(p0, p1)) {
	using FunctionType = decltype(intToShortString(p0, p1))(*)(int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4f53d0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1);
}

auto GameToolbox::intToString(int value) -> decltype(intToString(value)) {
	using FunctionType = decltype(intToString(value))(*)(int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4f4870, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(value);
}

auto GameToolbox::isRateEasing(int easingType) -> decltype(isRateEasing(easingType)) {
	using FunctionType = decltype(isRateEasing(easingType))(*)(int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4eeff0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(easingType);
}

auto GameToolbox::mergeDictsSaveLargestInt(cocos2d::CCDictionary* toDict, cocos2d::CCDictionary* fromDict) -> decltype(mergeDictsSaveLargestInt(toDict, fromDict)) {
	using FunctionType = decltype(mergeDictsSaveLargestInt(toDict, fromDict))(*)(cocos2d::CCDictionary*, cocos2d::CCDictionary*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4eba80, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(toDict, fromDict);
}

auto GameToolbox::mergeDictsSkipConflict(cocos2d::CCDictionary* toDict, cocos2d::CCDictionary* fromDict) -> decltype(mergeDictsSkipConflict(toDict, fromDict)) {
	using FunctionType = decltype(mergeDictsSkipConflict(toDict, fromDict))(*)(cocos2d::CCDictionary*, cocos2d::CCDictionary*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4ebd10, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(toDict, fromDict);
}

auto GameToolbox::msToTimeString(int milliseconds, int formattingMode) -> decltype(msToTimeString(milliseconds, formattingMode)) {
	using FunctionType = decltype(msToTimeString(milliseconds, formattingMode))(*)(int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4f5e60, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(milliseconds, formattingMode);
}

auto GameToolbox::multipliedColorValue(cocos2d::ccColor3B minColor, cocos2d::ccColor3B maxColor, float factor) -> decltype(multipliedColorValue(minColor, maxColor, factor)) {
	using FunctionType = decltype(multipliedColorValue(minColor, maxColor, factor))(*)(cocos2d::ccColor3B, cocos2d::ccColor3B, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4ec610, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(minColor, maxColor, factor);
}

auto GameToolbox::openAppPage() -> decltype(openAppPage()) {
	using FunctionType = decltype(openAppPage())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4e98d0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto GameToolbox::openRateURL(std::string str1, std::string str2) -> decltype(openRateURL(str1, str2)) {
	using FunctionType = decltype(openRateURL(str1, str2))(*)(std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4e97d0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(str1, str2);
}

auto GameToolbox::particleFromString(std::string const& str, cocos2d::CCParticleSystemQuad* system, bool dontUpdate) -> decltype(particleFromString(str, system, dontUpdate)) {
	using FunctionType = decltype(particleFromString(str, system, dontUpdate))(*)(std::string const&, cocos2d::CCParticleSystemQuad*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4f37e0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(str, system, dontUpdate);
}

auto GameToolbox::particleFromStruct(cocos2d::ParticleStruct const& particleStruct, cocos2d::CCParticleSystemQuad* system, bool dontUpdate) -> decltype(particleFromStruct(particleStruct, system, dontUpdate)) {
	using FunctionType = decltype(particleFromStruct(particleStruct, system, dontUpdate))(*)(cocos2d::ParticleStruct const&, cocos2d::CCParticleSystemQuad*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4f38f0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(particleStruct, system, dontUpdate);
}

auto GameToolbox::particleStringToStruct(std::string const& str, cocos2d::ParticleStruct& particleStruct) -> decltype(particleStringToStruct(str, particleStruct)) {
	using FunctionType = decltype(particleStringToStruct(str, particleStruct))(*)(std::string const&, cocos2d::ParticleStruct&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4f2890, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(str, particleStruct);
}

auto GameToolbox::pointsToString(int points) -> decltype(pointsToString(points)) {
	using FunctionType = decltype(pointsToString(points))(*)(int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4f5fb0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(points);
}

auto GameToolbox::postClipVisit() -> decltype(postClipVisit()) {
	using FunctionType = decltype(postClipVisit())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4ead10, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto GameToolbox::preVisitWithClippingRect(cocos2d::CCNode* node, cocos2d::CCRect rect) -> decltype(preVisitWithClippingRect(node, rect)) {
	using FunctionType = decltype(preVisitWithClippingRect(node, rect))(*)(cocos2d::CCNode*, cocos2d::CCRect);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4eabf0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(node, rect);
}

auto GameToolbox::preVisitWithClipRect(cocos2d::CCRect rect) -> decltype(preVisitWithClipRect(rect)) {
	using FunctionType = decltype(preVisitWithClipRect(rect))(*)(cocos2d::CCRect);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4eacd0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(rect);
}

auto GameToolbox::saveParticleToString(cocos2d::CCParticleSystemQuad* system) -> decltype(saveParticleToString(system)) {
	using FunctionType = decltype(saveParticleToString(system))(*)(cocos2d::CCParticleSystemQuad*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4ef2c0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(system);
}

auto GameToolbox::showFolderDialog(char const* p0, std::string& p1) -> decltype(showFolderDialog(p0, p1)) {
	using FunctionType = decltype(showFolderDialog(p0, p1))(*)(char const*, std::string&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4f6390, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1);
}

auto GameToolbox::showOpenFileDialog(char const* p0, char const* p1, std::string const& p2, std::string& p3) -> decltype(showOpenFileDialog(p0, p1, p2, p3)) {
	using FunctionType = decltype(showOpenFileDialog(p0, p1, p2, p3))(*)(char const*, char const*, std::string const&, std::string&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4f6300, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1, p2, p3);
}

auto GameToolbox::showOpenFileDialogMulti(char const* p0, char const* p1, std::vector<std::string>& p2) -> decltype(showOpenFileDialogMulti(p0, p1, p2)) {
	using FunctionType = decltype(showOpenFileDialogMulti(p0, p1, p2))(*)(char const*, char const*, std::vector<std::string>&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4f6330, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1, p2);
}

auto GameToolbox::showSaveFileDialog(char const* p0, char const* p1, char const* p2, std::string const& p3, std::string& p4) -> decltype(showSaveFileDialog(p0, p1, p2, p3, p4)) {
	using FunctionType = decltype(showSaveFileDialog(p0, p1, p2, p3, p4))(*)(char const*, char const*, char const*, std::string const&, std::string&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4f62d0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1, p2, p3, p4);
}

auto GameToolbox::stringFromHSV(cocos2d::ccHSVValue value, char const* separator) -> decltype(stringFromHSV(value, separator)) {
	using FunctionType = decltype(stringFromHSV(value, separator))(*)(cocos2d::ccHSVValue, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4ece30, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(value, separator);
}

auto GameToolbox::stringSetupToDict(std::string const& str, char const* separator) -> decltype(stringSetupToDict(str, separator)) {
	using FunctionType = decltype(stringSetupToDict(str, separator))(*)(std::string const&, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4ed7a0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(str, separator);
}

auto GameToolbox::stringSetupToMap(std::string const& str, char const* separator, std::map<std::string, std::string>& setup) -> decltype(stringSetupToMap(str, separator, setup)) {
	using FunctionType = decltype(stringSetupToMap(str, separator, setup))(*)(std::string const&, char const*, std::map<std::string, std::string>&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4ed450, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(str, separator, setup);
}

auto GameToolbox::strongColor(cocos2d::ccColor3B color) -> decltype(strongColor(color)) {
	using FunctionType = decltype(strongColor(color))(*)(cocos2d::ccColor3B);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4edd70, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(color);
}

auto GameToolbox::timestampToHumanReadable(time_t timestamp) -> decltype(timestampToHumanReadable(timestamp)) {
	using FunctionType = decltype(timestampToHumanReadable(timestamp))(*)(time_t);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4f5850, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(timestamp);
}

auto GameToolbox::transformColor(cocos2d::ccColor3B const& color, cocos2d::ccHSVValue hsv) -> decltype(transformColor(color, hsv)) {
	using FunctionType = decltype(transformColor(color, hsv))(*)(cocos2d::ccColor3B const&, cocos2d::ccHSVValue);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4ec410, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(color, hsv);
}

auto GameToolbox::transformColor(cocos2d::ccColor3B const& color, float h, float s, float v) -> decltype(transformColor(color, h, s, v)) {
	using FunctionType = decltype(transformColor(color, h, s, v))(*)(cocos2d::ccColor3B const&, float, float, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4ec3e0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(color, h, s, v);
}
