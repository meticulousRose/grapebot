
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/SetupTouchTogglePopup.hpp>
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

auto SetupTouchTogglePopup::determineStartValues() -> decltype(determineStartValues()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&SetupTouchTogglePopup::determineStartValues), this);
	using FunctionType = decltype(determineStartValues())(*)(SetupTouchTogglePopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2a7810, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto SetupTouchTogglePopup::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCObject*>::func(&SetupTouchTogglePopup::onClose), this);
	using FunctionType = decltype(onClose(sender))(*)(SetupTouchTogglePopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2a7b50, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, sender);
}

auto SetupTouchTogglePopup::textChanged(CCTextInputNode* node) -> decltype(textChanged(node)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&SetupTouchTogglePopup::textChanged), this);
	using FunctionType = decltype(textChanged(node))(*)(SetupTouchTogglePopup*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2a7990, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, node);
}

auto SetupTouchTogglePopup::onControlMode(cocos2d::CCObject* sender) -> decltype(onControlMode(sender)) {
	using FunctionType = decltype(onControlMode(sender))(*)(SetupTouchTogglePopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2a7740, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetupTouchTogglePopup::onDualTouchMode(cocos2d::CCObject* sender) -> decltype(onDualTouchMode(sender)) {
	using FunctionType = decltype(onDualTouchMode(sender))(*)(SetupTouchTogglePopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2a76b0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetupTouchTogglePopup::onHoldMode(cocos2d::CCObject* sender) -> decltype(onHoldMode(sender)) {
	using FunctionType = decltype(onHoldMode(sender))(*)(SetupTouchTogglePopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2a7550, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetupTouchTogglePopup::onTouchMode(cocos2d::CCObject* sender) -> decltype(onTouchMode(sender)) {
	using FunctionType = decltype(onTouchMode(sender))(*)(SetupTouchTogglePopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2a75e0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}
