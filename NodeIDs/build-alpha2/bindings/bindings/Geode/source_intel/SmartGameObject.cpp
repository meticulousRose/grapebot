
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/SmartGameObject.hpp>
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

auto SmartGameObject::create(char const* frame) -> decltype(create(frame)) {
	using FunctionType = decltype(create(frame))(*)(char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1911c0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(frame);
}

auto SmartGameObject::customObjectSetup(std::vector<std::string>& values, std::vector<void*>& exists) -> decltype(customObjectSetup(values, exists)) {
	auto self = addresser::thunkAdjust(Resolve<std::vector<std::string>&, std::vector<void*>&>::func(&SmartGameObject::customObjectSetup), this);
	using FunctionType = decltype(customObjectSetup(values, exists))(*)(SmartGameObject*, std::vector<std::string>&, std::vector<void*>&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x191ae0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, values, exists);
}

auto SmartGameObject::getSaveString(GJBaseGameLayer* layer) -> decltype(getSaveString(layer)) {
	auto self = addresser::thunkAdjust(Resolve<GJBaseGameLayer*>::func(&SmartGameObject::getSaveString), this);
	using FunctionType = decltype(getSaveString(layer))(*)(SmartGameObject*, GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x191510, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, layer);
}

auto SmartGameObject::init(char const* frame) -> decltype(init(frame)) {
	using FunctionType = decltype(init(frame))(*)(SmartGameObject*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x191290, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, frame);
}

auto SmartGameObject::updateSmartFrame() -> decltype(updateSmartFrame()) {
	using FunctionType = decltype(updateSmartFrame())(*)(SmartGameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1912e0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}
