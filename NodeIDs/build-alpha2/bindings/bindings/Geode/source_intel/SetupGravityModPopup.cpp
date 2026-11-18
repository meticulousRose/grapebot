
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/SetupGravityModPopup.hpp>
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

auto SetupGravityModPopup::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&SetupGravityModPopup::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(SetupGravityModPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3c6560, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto SetupGravityModPopup::show() -> decltype(show()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&SetupGravityModPopup::show), this);
	using FunctionType = decltype(show())(*)(SetupGravityModPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3c6500, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto SetupGravityModPopup::textInputClosed(CCTextInputNode* node) -> decltype(textInputClosed(node)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&SetupGravityModPopup::textInputClosed), this);
	using FunctionType = decltype(textInputClosed(node))(*)(SetupGravityModPopup*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3c6320, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, node);
}

auto SetupGravityModPopup::textChanged(CCTextInputNode* node) -> decltype(textChanged(node)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&SetupGravityModPopup::textChanged), this);
	using FunctionType = decltype(textChanged(node))(*)(SetupGravityModPopup*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3c6360, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, node);
}

auto SetupGravityModPopup::determineStartValues() -> decltype(determineStartValues()) {
	using FunctionType = decltype(determineStartValues())(*)(SetupGravityModPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3c5e70, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SetupGravityModPopup::init(EffectGameObject* object, cocos2d::CCArray* objects, bool gravityTrigger) -> decltype(init(object, objects, gravityTrigger)) {
	using FunctionType = decltype(init(object, objects, gravityTrigger))(*)(SetupGravityModPopup*, EffectGameObject*, cocos2d::CCArray*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3c55e0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, object, objects, gravityTrigger);
}

auto SetupGravityModPopup::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	using FunctionType = decltype(onClose(sender))(*)(SetupGravityModPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3c5f90, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetupGravityModPopup::sliderChanged(cocos2d::CCObject* sender) -> decltype(sliderChanged(sender)) {
	using FunctionType = decltype(sliderChanged(sender))(*)(SetupGravityModPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3c5ff0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetupGravityModPopup::updateValueLabel() -> decltype(updateValueLabel()) {
	using FunctionType = decltype(updateValueLabel())(*)(SetupGravityModPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3c6120, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}
