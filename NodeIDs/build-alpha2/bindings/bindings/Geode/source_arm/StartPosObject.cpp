#include <Geode/cocos/cocoa/CCObject.h>

#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/StartPosObject.hpp>
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

StartPosObject::~StartPosObject() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(StartPosObject*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x15cf10, tulip::hook::TulipConvention::Default);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) StartPosObject(geode::CutoffConstructor, sizeof(StartPosObject));
		geode::DestructorLock::addLock(this);
	}
}

auto StartPosObject::create() -> decltype(create()) {
	using FunctionType = decltype(create())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x15cff8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto StartPosObject::init() -> decltype(init()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&StartPosObject::init), this);
	using FunctionType = decltype(init())(*)(StartPosObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x15d104, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto StartPosObject::customObjectSetup(std::vector<std::string>& values, std::vector<void*>& exists) -> decltype(customObjectSetup(values, exists)) {
	auto self = addresser::thunkAdjust(Resolve<std::vector<std::string>&, std::vector<void*>&>::func(&StartPosObject::customObjectSetup), this);
	using FunctionType = decltype(customObjectSetup(values, exists))(*)(StartPosObject*, std::vector<std::string>&, std::vector<void*>&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x15d248, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, values, exists);
}

auto StartPosObject::getSaveString(GJBaseGameLayer* layer) -> decltype(getSaveString(layer)) {
	auto self = addresser::thunkAdjust(Resolve<GJBaseGameLayer*>::func(&StartPosObject::getSaveString), this);
	using FunctionType = decltype(getSaveString(layer))(*)(StartPosObject*, GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x15d24c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, layer);
}

auto StartPosObject::getDisplayName() -> decltype(getDisplayName()) {
	using FunctionType = decltype(getDisplayName())(*)(StartPosObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x15d330, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto StartPosObject::loadSettingsFromString(std::string objectString) -> decltype(loadSettingsFromString(objectString)) {
	using FunctionType = decltype(loadSettingsFromString(objectString))(*)(StartPosObject*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x15d1e8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, objectString);
}

auto StartPosObject::setSettings(LevelSettingsObject* settings) -> decltype(setSettings(settings)) {
	using FunctionType = decltype(setSettings(settings))(*)(StartPosObject*, LevelSettingsObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x15d1a0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, settings);
}
