
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/SetupAreaTintTriggerPopup.hpp>
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

auto SetupAreaTintTriggerPopup::determineStartValues() -> decltype(determineStartValues()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&SetupAreaTintTriggerPopup::determineStartValues), this);
	using FunctionType = decltype(determineStartValues())(*)(SetupAreaTintTriggerPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4d4160, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto SetupAreaTintTriggerPopup::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCObject*>::func(&SetupAreaTintTriggerPopup::onClose), this);
	using FunctionType = decltype(onClose(sender))(*)(SetupAreaTintTriggerPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4d4490, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, sender);
}

auto SetupAreaTintTriggerPopup::valueDidChange(int tag, float value) -> decltype(valueDidChange(tag, value)) {
	auto self = addresser::thunkAdjust(Resolve<int, float>::func(&SetupAreaTintTriggerPopup::valueDidChange), this);
	using FunctionType = decltype(valueDidChange(tag, value))(*)(SetupAreaTintTriggerPopup*, int, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4d4080, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, tag, value);
}

auto SetupAreaTintTriggerPopup::hsvPopupClosed(HSVWidgetPopup* popup, cocos2d::ccHSVValue value) -> decltype(hsvPopupClosed(popup, value)) {
	auto self = addresser::thunkAdjust(Resolve<HSVWidgetPopup*, cocos2d::ccHSVValue>::func(&SetupAreaTintTriggerPopup::hsvPopupClosed), this);
	using FunctionType = decltype(hsvPopupClosed(popup, value))(*)(SetupAreaTintTriggerPopup*, HSVWidgetPopup*, cocos2d::ccHSVValue);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4d4310, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, popup, value);
}

auto SetupAreaTintTriggerPopup::updateHSVButton() -> decltype(updateHSVButton()) {
	using FunctionType = decltype(updateHSVButton())(*)(SetupAreaTintTriggerPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4d3fc0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}
