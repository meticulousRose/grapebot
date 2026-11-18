
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/FindObjectPopup.hpp>
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

auto FindObjectPopup::valueDidChange(int p0, float p1) -> decltype(valueDidChange(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<int, float>::func(&FindObjectPopup::valueDidChange), this);
	using FunctionType = decltype(valueDidChange(p0, p1))(*)(FindObjectPopup*, int, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x906670, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto FindObjectPopup::onBuildWindowContent() -> decltype(onBuildWindowContent()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&FindObjectPopup::onBuildWindowContent), this);
	using FunctionType = decltype(onBuildWindowContent())(*)(FindObjectPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x906060, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto FindObjectPopup::onFieldEnter() -> decltype(onFieldEnter()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&FindObjectPopup::onFieldEnter), this);
	using FunctionType = decltype(onFieldEnter())(*)(FindObjectPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x906850, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}
