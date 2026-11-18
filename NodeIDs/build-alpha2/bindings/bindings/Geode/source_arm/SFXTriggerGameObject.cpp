
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/SFXTriggerGameObject.hpp>
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

auto SFXTriggerGameObject::create(char const* frame) -> decltype(create(frame)) {
	using FunctionType = decltype(create(frame))(*)(char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x16780c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(frame);
}

auto SFXTriggerGameObject::customObjectSetup(std::vector<std::string>& values, std::vector<void*>& exists) -> decltype(customObjectSetup(values, exists)) {
	auto self = addresser::thunkAdjust(Resolve<std::vector<std::string>&, std::vector<void*>&>::func(&SFXTriggerGameObject::customObjectSetup), this);
	using FunctionType = decltype(customObjectSetup(values, exists))(*)(SFXTriggerGameObject*, std::vector<std::string>&, std::vector<void*>&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x16c0f0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, values, exists);
}

auto SFXTriggerGameObject::getSaveString(GJBaseGameLayer* layer) -> decltype(getSaveString(layer)) {
	auto self = addresser::thunkAdjust(Resolve<GJBaseGameLayer*>::func(&SFXTriggerGameObject::getSaveString), this);
	using FunctionType = decltype(getSaveString(layer))(*)(SFXTriggerGameObject*, GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1679e8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, layer);
}

auto SFXTriggerGameObject::getSFXRefID() -> decltype(getSFXRefID()) {
	using FunctionType = decltype(getSFXRefID())(*)(SFXTriggerGameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1679c8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SFXTriggerGameObject::getUniqueSFXID() -> decltype(getUniqueSFXID()) {
	using FunctionType = decltype(getUniqueSFXID())(*)(SFXTriggerGameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x167994, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SFXTriggerGameObject::init(char const* frame) -> decltype(init(frame)) {
	using FunctionType = decltype(init(frame))(*)(SFXTriggerGameObject*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x16794c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, frame);
}
