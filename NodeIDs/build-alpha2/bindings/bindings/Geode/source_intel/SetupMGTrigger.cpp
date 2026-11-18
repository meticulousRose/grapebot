
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/SetupMGTrigger.hpp>
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

auto SetupMGTrigger::determineStartValues() -> decltype(determineStartValues()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&SetupMGTrigger::determineStartValues), this);
	using FunctionType = decltype(determineStartValues())(*)(SetupMGTrigger*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x50b660, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto SetupMGTrigger::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCObject*>::func(&SetupMGTrigger::onClose), this);
	using FunctionType = decltype(onClose(sender))(*)(SetupMGTrigger*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x50bf30, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, sender);
}

auto SetupMGTrigger::textChanged(CCTextInputNode* node) -> decltype(textChanged(node)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&SetupMGTrigger::textChanged), this);
	using FunctionType = decltype(textChanged(node))(*)(SetupMGTrigger*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x50bcd0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, node);
}

auto SetupMGTrigger::valuePopupClosed(ConfigureValuePopup* popup, float value) -> decltype(valuePopupClosed(popup, value)) {
	auto self = addresser::thunkAdjust(Resolve<ConfigureValuePopup*, float>::func(&SetupMGTrigger::valuePopupClosed), this);
	using FunctionType = decltype(valuePopupClosed(popup, value))(*)(SetupMGTrigger*, ConfigureValuePopup*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x50b990, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, popup, value);
}

auto SetupMGTrigger::sliderValueFromPos(int pos) -> decltype(sliderValueFromPos(pos)) {
	using FunctionType = decltype(sliderValueFromPos(pos))(*)(SetupMGTrigger*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x50b3f0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, pos);
}

auto SetupMGTrigger::sliderYChanged(cocos2d::CCObject* sender) -> decltype(sliderYChanged(sender)) {
	using FunctionType = decltype(sliderYChanged(sender))(*)(SetupMGTrigger*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x50b3a0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetupMGTrigger::updateDuration() -> decltype(updateDuration()) {
	using FunctionType = decltype(updateDuration())(*)(SetupMGTrigger*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x50bb60, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SetupMGTrigger::updateEasingLabel() -> decltype(updateEasingLabel()) {
	using FunctionType = decltype(updateEasingLabel())(*)(SetupMGTrigger*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x50b5a0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}
