
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/ClearPlatformerSavesPopup.hpp>
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

auto ClearPlatformerSavesPopup::init() -> decltype(init()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&ClearPlatformerSavesPopup::init), this);
	using FunctionType = decltype(init())(*)(ClearPlatformerSavesPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x7a5480, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto ClearPlatformerSavesPopup::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&ClearPlatformerSavesPopup::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(ClearPlatformerSavesPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x7a6308, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto ClearPlatformerSavesPopup::FLAlert_Clicked(FLAlertLayer* p0, bool p1) -> decltype(FLAlert_Clicked(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<FLAlertLayer*, bool>::func(&ClearPlatformerSavesPopup::FLAlert_Clicked), this);
	using FunctionType = decltype(FLAlert_Clicked(p0, p1))(*)(ClearPlatformerSavesPopup*, FLAlertLayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x7a6120, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}
