
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/EditorSFXManager.hpp>
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

auto EditorSFXManager::createNewSound(int soundId) -> decltype(createNewSound(soundId)) {
	using FunctionType = decltype(createNewSound(soundId))(*)(int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x7cf5c4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(soundId);
}

auto EditorSFXManager::sharedState() -> decltype(sharedState()) {
	using FunctionType = decltype(sharedState())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x7cd268, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto EditorSFXManager::addSound(int bindingId, SFXTriggerGameObject* sound) -> decltype(addSound(bindingId, sound)) {
	using FunctionType = decltype(addSound(bindingId, sound))(*)(EditorSFXManager*, int, SFXTriggerGameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x7cf0b8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, bindingId, sound);
}

auto EditorSFXManager::clearAll() -> decltype(clearAll()) {
	using FunctionType = decltype(clearAll())(*)(EditorSFXManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x7cd4fc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto EditorSFXManager::dataLoaded(DS_Dictionary* dict) -> decltype(dataLoaded(dict)) {
	using FunctionType = decltype(dataLoaded(dict))(*)(EditorSFXManager*, DS_Dictionary*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x7d5c50, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, dict);
}

auto EditorSFXManager::decodeSound(std::string const& str) -> decltype(decodeSound(str)) {
	using FunctionType = decltype(decodeSound(str))(*)(EditorSFXManager*, std::string const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x7d3fb4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, str);
}

auto EditorSFXManager::deserializeAll(std::string const& str, bool destructive) -> decltype(deserializeAll(str, destructive)) {
	using FunctionType = decltype(deserializeAll(str, destructive))(*)(EditorSFXManager*, std::string const&, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x7cd7bc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, str, destructive);
}

auto EditorSFXManager::encodeDataTo(DS_Dictionary* dict) -> decltype(encodeDataTo(dict)) {
	using FunctionType = decltype(encodeDataTo(dict))(*)(EditorSFXManager*, DS_Dictionary*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x7d5888, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, dict);
}

auto EditorSFXManager::ensureLoaded() -> decltype(ensureLoaded()) {
	using FunctionType = decltype(ensureLoaded())(*)(EditorSFXManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x7cd728, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto EditorSFXManager::firstSetup() -> decltype(firstSetup()) {
	using FunctionType = decltype(firstSetup())(*)(EditorSFXManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x7cd640, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto EditorSFXManager::hasSoundsForAction(int actionId) const  -> decltype(hasSoundsForAction(actionId)) {
	using FunctionType = decltype(hasSoundsForAction(actionId))(*)(EditorSFXManager const *, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x7ce538, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, actionId);
}

auto EditorSFXManager::importFromString(std::string const& str, EditorSFXImportOptions const& options, std::string* errMsg) -> decltype(importFromString(str, options, errMsg)) {
	using FunctionType = decltype(importFromString(str, options, errMsg))(*)(EditorSFXManager*, std::string const&, EditorSFXImportOptions const&, std::string*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x7d6210, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, str, options, errMsg);
}

auto EditorSFXManager::init() -> decltype(init()) {
	using FunctionType = decltype(init())(*)(EditorSFXManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x7cd37c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto EditorSFXManager::playAction(int actionId) -> decltype(playAction(actionId)) {
	using FunctionType = decltype(playAction(actionId))(*)(EditorSFXManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x7ce64c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, actionId);
}

auto EditorSFXManager::playAction(int primaryId, int fallbackId) -> decltype(playAction(primaryId, fallbackId)) {
	using FunctionType = decltype(playAction(primaryId, fallbackId))(*)(EditorSFXManager*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x7ce4fc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, primaryId, fallbackId);
}

auto EditorSFXManager::releaseBinding(EditorSFXBinding* binding) -> decltype(releaseBinding(binding)) {
	using FunctionType = decltype(releaseBinding(binding))(*)(EditorSFXManager*, EditorSFXBinding*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x7ce494, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, binding);
}

auto EditorSFXManager::removeSoundAt(int bindingId, int index) -> decltype(removeSoundAt(bindingId, index)) {
	using FunctionType = decltype(removeSoundAt(bindingId, index))(*)(EditorSFXManager*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x7cf0e8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, bindingId, index);
}
