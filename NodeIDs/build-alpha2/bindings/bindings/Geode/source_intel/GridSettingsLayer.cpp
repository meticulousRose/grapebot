
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/GridSettingsLayer.hpp>
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

auto GridSettingsLayer::valueDidChange(int p0, float p1) -> decltype(valueDidChange(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<int, float>::func(&GridSettingsLayer::valueDidChange), this);
	using FunctionType = decltype(valueDidChange(p0, p1))(*)(GridSettingsLayer*, int, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x908d10, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto GridSettingsLayer::getValue(int p0) -> decltype(getValue(p0)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&GridSettingsLayer::getValue), this);
	using FunctionType = decltype(getValue(p0))(*)(GridSettingsLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x908c90, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto GridSettingsLayer::onBuildWindowContent() -> decltype(onBuildWindowContent()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GridSettingsLayer::onBuildWindowContent), this);
	using FunctionType = decltype(onBuildWindowContent())(*)(GridSettingsLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x9083a0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}
