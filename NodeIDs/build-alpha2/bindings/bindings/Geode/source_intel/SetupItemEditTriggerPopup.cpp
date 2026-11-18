
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/SetupItemEditTriggerPopup.hpp>
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

auto SetupItemEditTriggerPopup::valueDidChange(int tag, float value) -> decltype(valueDidChange(tag, value)) {
	auto self = addresser::thunkAdjust(Resolve<int, float>::func(&SetupItemEditTriggerPopup::valueDidChange), this);
	using FunctionType = decltype(valueDidChange(tag, value))(*)(SetupItemEditTriggerPopup*, int, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5ad230, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, tag, value);
}

auto SetupItemEditTriggerPopup::onCustomToggleTriggerValue(cocos2d::CCObject* sender) -> decltype(onCustomToggleTriggerValue(sender)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCObject*>::func(&SetupItemEditTriggerPopup::onCustomToggleTriggerValue), this);
	using FunctionType = decltype(onCustomToggleTriggerValue(sender))(*)(SetupItemEditTriggerPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5acfe0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, sender);
}

auto SetupItemEditTriggerPopup::onOpButton(cocos2d::CCObject* sender) -> decltype(onOpButton(sender)) {
	using FunctionType = decltype(onOpButton(sender))(*)(SetupItemEditTriggerPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5abe00, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetupItemEditTriggerPopup::updateFormulaLabel() -> decltype(updateFormulaLabel()) {
	using FunctionType = decltype(updateFormulaLabel())(*)(SetupItemEditTriggerPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5ac0d0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SetupItemEditTriggerPopup::updateOpButton(CCMenuItemSpriteExtra* button, int key, int objectID) -> decltype(updateOpButton(button, key, objectID)) {
	using FunctionType = decltype(updateOpButton(button, key, objectID))(*)(SetupItemEditTriggerPopup*, CCMenuItemSpriteExtra*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5abed0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, button, key, objectID);
}
