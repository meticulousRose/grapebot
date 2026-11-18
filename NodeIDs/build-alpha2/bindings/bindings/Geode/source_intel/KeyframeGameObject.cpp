
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/KeyframeGameObject.hpp>
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

auto KeyframeGameObject::create() -> decltype(create()) {
	using FunctionType = decltype(create())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1a7050, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto KeyframeGameObject::init() -> decltype(init()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&KeyframeGameObject::init), this);
	using FunctionType = decltype(init())(*)(KeyframeGameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1a7150, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto KeyframeGameObject::setOpacity(unsigned char opacity) -> decltype(setOpacity(opacity)) {
	auto self = addresser::thunkAdjust(Resolve<unsigned char>::func(&KeyframeGameObject::setOpacity), this);
	using FunctionType = decltype(setOpacity(opacity))(*)(KeyframeGameObject*, unsigned char);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1a7430, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, opacity);
}

auto KeyframeGameObject::customObjectSetup(std::vector<std::string>& values, std::vector<void*>& exists) -> decltype(customObjectSetup(values, exists)) {
	auto self = addresser::thunkAdjust(Resolve<std::vector<std::string>&, std::vector<void*>&>::func(&KeyframeGameObject::customObjectSetup), this);
	using FunctionType = decltype(customObjectSetup(values, exists))(*)(KeyframeGameObject*, std::vector<std::string>&, std::vector<void*>&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1a7590, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, values, exists);
}

auto KeyframeGameObject::getSaveString(GJBaseGameLayer* layer) -> decltype(getSaveString(layer)) {
	auto self = addresser::thunkAdjust(Resolve<GJBaseGameLayer*>::func(&KeyframeGameObject::getSaveString), this);
	using FunctionType = decltype(getSaveString(layer))(*)(KeyframeGameObject*, GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1a7bb0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, layer);
}

auto KeyframeGameObject::updateShadowObjects(GJBaseGameLayer* layer, EditorUI* ui) -> decltype(updateShadowObjects(layer, ui)) {
	using FunctionType = decltype(updateShadowObjects(layer, ui))(*)(KeyframeGameObject*, GJBaseGameLayer*, EditorUI*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1a71c0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, layer, ui);
}
