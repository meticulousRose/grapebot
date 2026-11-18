#include <Geode/cocos/cocoa/CCObject.h>

#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/EnterEffectObject.hpp>
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

EnterEffectObject::EnterEffectObject() : EnterEffectObject(geode::CutoffConstructor, sizeof(EnterEffectObject)) {
	// here we construct it as normal as we can, then destruct it
	// using the generated functions. this ensures no memory gets leaked
	// no crashes :pray:
	geode::DestructorLock::addLock(this);
	EnterEffectObject::~EnterEffectObject();

	using FunctionType = void(*)(EnterEffectObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1d63a0, tulip::hook::TulipConvention::Default);
	reinterpret_cast<FunctionType>(func)(this);
}

auto EnterEffectObject::create(char const* frame) -> decltype(create(frame)) {
	using FunctionType = decltype(create(frame))(*)(char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x163b90, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(frame);
}

auto EnterEffectObject::customSetup() -> decltype(customSetup()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&EnterEffectObject::customSetup), this);
	using FunctionType = decltype(customSetup())(*)(EnterEffectObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x175e50, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto EnterEffectObject::customObjectSetup(std::vector<std::string>& values, std::vector<void*>& exists) -> decltype(customObjectSetup(values, exists)) {
	auto self = addresser::thunkAdjust(Resolve<std::vector<std::string>&, std::vector<void*>&>::func(&EnterEffectObject::customObjectSetup), this);
	using FunctionType = decltype(customObjectSetup(values, exists))(*)(EnterEffectObject*, std::vector<std::string>&, std::vector<void*>&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x176230, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, values, exists);
}

auto EnterEffectObject::getSaveString(GJBaseGameLayer* layer) -> decltype(getSaveString(layer)) {
	auto self = addresser::thunkAdjust(Resolve<GJBaseGameLayer*>::func(&EnterEffectObject::getSaveString), this);
	using FunctionType = decltype(getSaveString(layer))(*)(EnterEffectObject*, GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x163d30, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, layer);
}

auto EnterEffectObject::init(char const* frame) -> decltype(init(frame)) {
	using FunctionType = decltype(init(frame))(*)(EnterEffectObject*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x163c30, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, frame);
}

auto EnterEffectObject::resetEnterAnimValues() -> decltype(resetEnterAnimValues()) {
	using FunctionType = decltype(resetEnterAnimValues())(*)(EnterEffectObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1761c0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}
