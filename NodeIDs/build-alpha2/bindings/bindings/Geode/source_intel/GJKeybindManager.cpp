
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/GJKeybindManager.hpp>
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

auto GJKeybindManager::actionToString(int action) -> decltype(actionToString(action)) {
	using FunctionType = decltype(actionToString(action))(*)(int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x617450, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(action);
}

auto GJKeybindManager::chordToString(int chord) -> decltype(chordToString(chord)) {
	using FunctionType = decltype(chordToString(chord))(*)(int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x617360, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(chord);
}

auto GJKeybindManager::encodeChord(cocos2d::enumKeyCodes key, bool ctrl, bool alt, bool shift) -> decltype(encodeChord(key, ctrl, alt, shift)) {
	using FunctionType = decltype(encodeChord(key, ctrl, alt, shift))(*)(cocos2d::enumKeyCodes, bool, bool, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x614e20, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(key, ctrl, alt, shift);
}

auto GJKeybindManager::groupsConflict(int groupA, int groupB) -> decltype(groupsConflict(groupA, groupB)) {
	using FunctionType = decltype(groupsConflict(groupA, groupB))(*)(int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x615690, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(groupA, groupB);
}

auto GJKeybindManager::isControllerChord(int chord) -> decltype(isControllerChord(chord)) {
	using FunctionType = decltype(isControllerChord(chord))(*)(int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x616dc0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(chord);
}

auto GJKeybindManager::isExclusive(int action) -> decltype(isExclusive(action)) {
	using FunctionType = decltype(isExclusive(action))(*)(int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x614e60, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(action);
}

auto GJKeybindManager::isKnownAction(int action) -> decltype(isKnownAction(action)) {
	using FunctionType = decltype(isKnownAction(action))(*)(int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x618d10, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(action);
}

auto GJKeybindManager::isMovementAction(int action) -> decltype(isMovementAction(action)) {
	using FunctionType = decltype(isMovementAction(action))(*)(int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x615b50, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(action);
}

auto GJKeybindManager::sharedState() -> decltype(sharedState()) {
	using FunctionType = decltype(sharedState())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x613e60, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto GJKeybindManager::actionsForKey(cocos2d::enumKeyCodes key, bool ctrl, bool alt, bool shift) -> decltype(actionsForKey(key, ctrl, alt, shift)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::enumKeyCodes, bool, bool, bool>::func(&GJKeybindManager::actionsForKey), this);
	using FunctionType = decltype(actionsForKey(key, ctrl, alt, shift))(*)(GJKeybindManager*, cocos2d::enumKeyCodes, bool, bool, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x614890, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, key, ctrl, alt, shift);
}

auto GJKeybindManager::handleGlobalAction(int action, bool down) -> decltype(handleGlobalAction(action, down)) {
	auto self = addresser::thunkAdjust(Resolve<int, bool>::func(&GJKeybindManager::handleGlobalAction), this);
	using FunctionType = decltype(handleGlobalAction(action, down))(*)(GJKeybindManager*, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x619cc0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, action, down);
}

auto GJKeybindManager::actionsForChord(int chord) -> decltype(actionsForChord(chord)) {
	using FunctionType = decltype(actionsForChord(chord))(*)(GJKeybindManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x615310, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, chord);
}

auto GJKeybindManager::applyMovementOverride(KeybindSource* keyboardSource, KeybindSource* controllerSource) -> decltype(applyMovementOverride(keyboardSource, controllerSource)) {
	using FunctionType = decltype(applyMovementOverride(keyboardSource, controllerSource))(*)(GJKeybindManager*, KeybindSource*, KeybindSource*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x615b70, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, keyboardSource, controllerSource);
}

auto GJKeybindManager::applyNewDefaults(int version) -> decltype(applyNewDefaults(version)) {
	using FunctionType = decltype(applyNewDefaults(version))(*)(GJKeybindManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x618d30, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, version);
}

auto GJKeybindManager::bindChord(int chord, int action) -> decltype(bindChord(chord, action)) {
	using FunctionType = decltype(bindChord(chord, action))(*)(GJKeybindManager*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x6159e0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, chord, action);
}

auto GJKeybindManager::bindKey(cocos2d::enumKeyCodes key, bool ctrl, bool alt, bool shift, int action) -> decltype(bindKey(key, ctrl, alt, shift, action)) {
	using FunctionType = decltype(bindKey(key, ctrl, alt, shift, action))(*)(GJKeybindManager*, cocos2d::enumKeyCodes, bool, bool, bool, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x6180c0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, key, ctrl, alt, shift, action);
}

auto GJKeybindManager::buildBindsBlob() -> decltype(buildBindsBlob()) {
	using FunctionType = decltype(buildBindsBlob())(*)(GJKeybindManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x618100, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJKeybindManager::chordsForAction(int action) -> decltype(chordsForAction(action)) {
	using FunctionType = decltype(chordsForAction(action))(*)(GJKeybindManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x614fb0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, action);
}

auto GJKeybindManager::clearMovementOverride() -> decltype(clearMovementOverride()) {
	using FunctionType = decltype(clearMovementOverride())(*)(GJKeybindManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x6169e0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJKeybindManager::dataLoaded(DS_Dictionary* dict) -> decltype(dataLoaded(dict)) {
	using FunctionType = decltype(dataLoaded(dict))(*)(GJKeybindManager*, DS_Dictionary*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x619160, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, dict);
}

auto GJKeybindManager::encodeDataTo(DS_Dictionary* dict) -> decltype(encodeDataTo(dict)) {
	using FunctionType = decltype(encodeDataTo(dict))(*)(GJKeybindManager*, DS_Dictionary*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x6190d0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, dict);
}

auto GJKeybindManager::exportBindingsToFile() -> decltype(exportBindingsToFile()) {
	using FunctionType = decltype(exportBindingsToFile())(*)(GJKeybindManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x619240, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJKeybindManager::firstSetup() -> decltype(firstSetup()) {
	using FunctionType = decltype(firstSetup())(*)(GJKeybindManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x617fd0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJKeybindManager::groupForAction(int action) -> decltype(groupForAction(action)) {
	using FunctionType = decltype(groupForAction(action))(*)(GJKeybindManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x615670, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, action);
}

auto GJKeybindManager::init() -> decltype(init()) {
	using FunctionType = decltype(init())(*)(GJKeybindManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x613f60, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJKeybindManager::loadDefaults() -> decltype(loadDefaults()) {
	using FunctionType = decltype(loadDefaults())(*)(GJKeybindManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x614100, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJKeybindManager::parseBindsBlob(std::string const& blob, bool apply, int* outApplied, int* outUnknown) -> decltype(parseBindsBlob(blob, apply, outApplied, outUnknown)) {
	using FunctionType = decltype(parseBindsBlob(blob, apply, outApplied, outUnknown))(*)(GJKeybindManager*, std::string const&, bool, int*, int*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x6187d0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, blob, apply, outApplied, outUnknown);
}

auto GJKeybindManager::unbindChord(int chord, int action) -> decltype(unbindChord(chord, action)) {
	using FunctionType = decltype(unbindChord(chord, action))(*)(GJKeybindManager*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x616de0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, chord, action);
}
