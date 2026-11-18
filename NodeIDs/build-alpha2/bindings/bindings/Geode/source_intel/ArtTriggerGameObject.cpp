
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/ArtTriggerGameObject.hpp>
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

auto ArtTriggerGameObject::create(char const* frame) -> decltype(create(frame)) {
	using FunctionType = decltype(create(frame))(*)(char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1ce2c0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(frame);
}

auto ArtTriggerGameObject::triggerObject(GJBaseGameLayer* layer, int uniqueID, std::vector<int> const* remapKeys) -> decltype(triggerObject(layer, uniqueID, remapKeys)) {
	auto self = addresser::thunkAdjust(Resolve<GJBaseGameLayer*, int, std::vector<int> const*>::func(&ArtTriggerGameObject::triggerObject), this);
	using FunctionType = decltype(triggerObject(layer, uniqueID, remapKeys))(*)(ArtTriggerGameObject*, GJBaseGameLayer*, int, std::vector<int> const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1ce960, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, layer, uniqueID, remapKeys);
}

auto ArtTriggerGameObject::customObjectSetup(std::vector<std::string>& values, std::vector<void*>& exists) -> decltype(customObjectSetup(values, exists)) {
	auto self = addresser::thunkAdjust(Resolve<std::vector<std::string>&, std::vector<void*>&>::func(&ArtTriggerGameObject::customObjectSetup), this);
	using FunctionType = decltype(customObjectSetup(values, exists))(*)(ArtTriggerGameObject*, std::vector<std::string>&, std::vector<void*>&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1ce900, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, values, exists);
}

auto ArtTriggerGameObject::getSaveString(GJBaseGameLayer* layer) -> decltype(getSaveString(layer)) {
	auto self = addresser::thunkAdjust(Resolve<GJBaseGameLayer*>::func(&ArtTriggerGameObject::getSaveString), this);
	using FunctionType = decltype(getSaveString(layer))(*)(ArtTriggerGameObject*, GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1ce3d0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, layer);
}
