
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/SpecialAnimGameObject.hpp>
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

auto SpecialAnimGameObject::create(char const* frame) -> decltype(create(frame)) {
	using FunctionType = decltype(create(frame))(*)(char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x154834, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(frame);
}

auto SpecialAnimGameObject::resetObject() -> decltype(resetObject()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&SpecialAnimGameObject::resetObject), this);
	using FunctionType = decltype(resetObject())(*)(SpecialAnimGameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x154978, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto SpecialAnimGameObject::customObjectSetup(std::vector<std::string>& values, std::vector<void*>& exists) -> decltype(customObjectSetup(values, exists)) {
	auto self = addresser::thunkAdjust(Resolve<std::vector<std::string>&, std::vector<void*>&>::func(&SpecialAnimGameObject::customObjectSetup), this);
	using FunctionType = decltype(customObjectSetup(values, exists))(*)(SpecialAnimGameObject*, std::vector<std::string>&, std::vector<void*>&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x154984, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, values, exists);
}

auto SpecialAnimGameObject::getSaveString(GJBaseGameLayer* layer) -> decltype(getSaveString(layer)) {
	auto self = addresser::thunkAdjust(Resolve<GJBaseGameLayer*>::func(&SpecialAnimGameObject::getSaveString), this);
	using FunctionType = decltype(getSaveString(layer))(*)(SpecialAnimGameObject*, GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1549e4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, layer);
}

auto SpecialAnimGameObject::updateMainColor(cocos2d::ccColor3B const& color) -> decltype(updateMainColor(color)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::ccColor3B const&>::func(&SpecialAnimGameObject::updateMainColor), this);
	using FunctionType = decltype(updateMainColor(color))(*)(SpecialAnimGameObject*, cocos2d::ccColor3B const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x154958, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, color);
}

auto SpecialAnimGameObject::updateSecondaryColor(cocos2d::ccColor3B const& color) -> decltype(updateSecondaryColor(color)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::ccColor3B const&>::func(&SpecialAnimGameObject::updateSecondaryColor), this);
	using FunctionType = decltype(updateSecondaryColor(color))(*)(SpecialAnimGameObject*, cocos2d::ccColor3B const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x154968, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, color);
}

auto SpecialAnimGameObject::updateSyncedAnimation(float totalTime, int frameIndex) -> decltype(updateSyncedAnimation(totalTime, frameIndex)) {
	auto self = addresser::thunkAdjust(Resolve<float, int>::func(&SpecialAnimGameObject::updateSyncedAnimation), this);
	using FunctionType = decltype(updateSyncedAnimation(totalTime, frameIndex))(*)(SpecialAnimGameObject*, float, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1f1094, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, totalTime, frameIndex);
}

auto SpecialAnimGameObject::init(char const* frame) -> decltype(init(frame)) {
	using FunctionType = decltype(init(frame))(*)(SpecialAnimGameObject*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x154930, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, frame);
}
