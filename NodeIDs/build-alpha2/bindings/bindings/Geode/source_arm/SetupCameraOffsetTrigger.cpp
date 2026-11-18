
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/SetupCameraOffsetTrigger.hpp>
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

auto SetupCameraOffsetTrigger::create(CameraTriggerGameObject* object, cocos2d::CCArray* objects) -> decltype(create(object, objects)) {
	using FunctionType = decltype(create(object, objects))(*)(CameraTriggerGameObject*, cocos2d::CCArray*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x18814, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(object, objects);
}

auto SetupCameraOffsetTrigger::determineStartValues() -> decltype(determineStartValues()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&SetupCameraOffsetTrigger::determineStartValues), this);
	using FunctionType = decltype(determineStartValues())(*)(SetupCameraOffsetTrigger*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x64fd40, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto SetupCameraOffsetTrigger::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCObject*>::func(&SetupCameraOffsetTrigger::onClose), this);
	using FunctionType = decltype(onClose(sender))(*)(SetupCameraOffsetTrigger*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x650778, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, sender);
}

auto SetupCameraOffsetTrigger::textChanged(CCTextInputNode* node) -> decltype(textChanged(node)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&SetupCameraOffsetTrigger::textChanged), this);
	using FunctionType = decltype(textChanged(node))(*)(SetupCameraOffsetTrigger*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x650510, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, node);
}

auto SetupCameraOffsetTrigger::valuePopupClosed(ConfigureValuePopup* popup, float value) -> decltype(valuePopupClosed(popup, value)) {
	auto self = addresser::thunkAdjust(Resolve<ConfigureValuePopup*, float>::func(&SetupCameraOffsetTrigger::valuePopupClosed), this);
	using FunctionType = decltype(valuePopupClosed(popup, value))(*)(SetupCameraOffsetTrigger*, ConfigureValuePopup*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x650154, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, popup, value);
}

auto SetupCameraOffsetTrigger::init(CameraTriggerGameObject* object, cocos2d::CCArray* objects) -> decltype(init(object, objects)) {
	using FunctionType = decltype(init(object, objects))(*)(SetupCameraOffsetTrigger*, CameraTriggerGameObject*, cocos2d::CCArray*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x64e150, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, object, objects);
}

auto SetupCameraOffsetTrigger::onTargetMode(cocos2d::CCObject* sender) -> decltype(onTargetMode(sender)) {
	using FunctionType = decltype(onTargetMode(sender))(*)(SetupCameraOffsetTrigger*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x64f918, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetupCameraOffsetTrigger::sliderValueFromPos(int pos) -> decltype(sliderValueFromPos(pos)) {
	using FunctionType = decltype(sliderValueFromPos(pos))(*)(SetupCameraOffsetTrigger*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x64f8c4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, pos);
}

auto SetupCameraOffsetTrigger::sliderXChanged(cocos2d::CCObject* sender) -> decltype(sliderXChanged(sender)) {
	using FunctionType = decltype(sliderXChanged(sender))(*)(SetupCameraOffsetTrigger*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x64f814, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetupCameraOffsetTrigger::sliderYChanged(cocos2d::CCObject* sender) -> decltype(sliderYChanged(sender)) {
	using FunctionType = decltype(sliderYChanged(sender))(*)(SetupCameraOffsetTrigger*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x64f86c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetupCameraOffsetTrigger::updateDuration() -> decltype(updateDuration()) {
	using FunctionType = decltype(updateDuration())(*)(SetupCameraOffsetTrigger*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x6502f0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SetupCameraOffsetTrigger::updateEasingLabel() -> decltype(updateEasingLabel()) {
	using FunctionType = decltype(updateEasingLabel())(*)(SetupCameraOffsetTrigger*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x64fc50, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SetupCameraOffsetTrigger::updateMoveCommandPosX() -> decltype(updateMoveCommandPosX()) {
	using FunctionType = decltype(updateMoveCommandPosX())(*)(SetupCameraOffsetTrigger*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x650360, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}
