
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/SetupPulsePopup.hpp>
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

auto SetupPulsePopup::create(EffectGameObject* object, cocos2d::CCArray* objects) -> decltype(create(object, objects)) {
	using FunctionType = decltype(create(object, objects))(*)(EffectGameObject*, cocos2d::CCArray*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x83d078, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(object, objects);
}

auto SetupPulsePopup::show() -> decltype(show()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&SetupPulsePopup::show), this);
	using FunctionType = decltype(show())(*)(SetupPulsePopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x322278, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto SetupPulsePopup::determineStartValues() -> decltype(determineStartValues()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&SetupPulsePopup::determineStartValues), this);
	using FunctionType = decltype(determineStartValues())(*)(SetupPulsePopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3211f4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto SetupPulsePopup::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCObject*>::func(&SetupPulsePopup::onClose), this);
	using FunctionType = decltype(onClose(sender))(*)(SetupPulsePopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x321c24, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, sender);
}

auto SetupPulsePopup::textChanged(CCTextInputNode* node) -> decltype(textChanged(node)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&SetupPulsePopup::textChanged), this);
	using FunctionType = decltype(textChanged(node))(*)(SetupPulsePopup*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3222d4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, node);
}

auto SetupPulsePopup::colorValueChanged(cocos2d::ccColor3B color) -> decltype(colorValueChanged(color)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::ccColor3B>::func(&SetupPulsePopup::colorValueChanged), this);
	using FunctionType = decltype(colorValueChanged(color))(*)(SetupPulsePopup*, cocos2d::ccColor3B);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x321d9c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, color);
}

auto SetupPulsePopup::textInputOpened(CCTextInputNode* node) -> decltype(textInputOpened(node)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&SetupPulsePopup::textInputOpened), this);
	using FunctionType = decltype(textInputOpened(node))(*)(SetupPulsePopup*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3222cc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, node);
}

auto SetupPulsePopup::colorSelectClosed(GJSpecialColorSelect* select, int id) -> decltype(colorSelectClosed(select, id)) {
	auto self = addresser::thunkAdjust(Resolve<GJSpecialColorSelect*, int>::func(&SetupPulsePopup::colorSelectClosed), this);
	using FunctionType = decltype(colorSelectClosed(select, id))(*)(SetupPulsePopup*, GJSpecialColorSelect*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3216a8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, select, id);
}

auto SetupPulsePopup::getColorValue() -> decltype(getColorValue()) {
	using FunctionType = decltype(getColorValue())(*)(SetupPulsePopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x321a48, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SetupPulsePopup::init(EffectGameObject* object, cocos2d::CCArray* objects) -> decltype(init(object, objects)) {
	using FunctionType = decltype(init(object, objects))(*)(SetupPulsePopup*, EffectGameObject*, cocos2d::CCArray*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x31d450, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, object, objects);
}

auto SetupPulsePopup::onPaste(cocos2d::CCObject* sender) -> decltype(onPaste(sender)) {
	using FunctionType = decltype(onPaste(sender))(*)(SetupPulsePopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x320b48, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetupPulsePopup::onSelectPulseMode(cocos2d::CCObject* sender) -> decltype(onSelectPulseMode(sender)) {
	using FunctionType = decltype(onSelectPulseMode(sender))(*)(SetupPulsePopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x320678, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetupPulsePopup::onSelectSpecialColor(cocos2d::CCObject* sender) -> decltype(onSelectSpecialColor(sender)) {
	using FunctionType = decltype(onSelectSpecialColor(sender))(*)(SetupPulsePopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x320c7c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetupPulsePopup::onSelectSpecialTargetID(cocos2d::CCObject* sender) -> decltype(onSelectSpecialTargetID(sender)) {
	using FunctionType = decltype(onSelectSpecialTargetID(sender))(*)(SetupPulsePopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x32062c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetupPulsePopup::onSelectTargetMode(cocos2d::CCObject* sender) -> decltype(onSelectTargetMode(sender)) {
	using FunctionType = decltype(onSelectTargetMode(sender))(*)(SetupPulsePopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3203cc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetupPulsePopup::onUpdateCopyColor(cocos2d::CCObject* sender) -> decltype(onUpdateCopyColor(sender)) {
	using FunctionType = decltype(onUpdateCopyColor(sender))(*)(SetupPulsePopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x320bcc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetupPulsePopup::selectColor(cocos2d::ccColor3B color) -> decltype(selectColor(color)) {
	using FunctionType = decltype(selectColor(color))(*)(SetupPulsePopup*, cocos2d::ccColor3B);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x320b94, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, color);
}

auto SetupPulsePopup::sliderChanged(cocos2d::CCObject* sender) -> decltype(sliderChanged(sender)) {
	using FunctionType = decltype(sliderChanged(sender))(*)(SetupPulsePopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x31fdd8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetupPulsePopup::updateColorValue() -> decltype(updateColorValue()) {
	using FunctionType = decltype(updateColorValue())(*)(SetupPulsePopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x321e70, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SetupPulsePopup::updateCopyColor() -> decltype(updateCopyColor()) {
	using FunctionType = decltype(updateCopyColor())(*)(SetupPulsePopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3219d4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SetupPulsePopup::updateFadeInTime() -> decltype(updateFadeInTime()) {
	using FunctionType = decltype(updateFadeInTime())(*)(SetupPulsePopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x321a5c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SetupPulsePopup::updateGroupMainOnly() -> decltype(updateGroupMainOnly()) {
	using FunctionType = decltype(updateGroupMainOnly())(*)(SetupPulsePopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x32163c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SetupPulsePopup::updateGroupSecondaryOnly() -> decltype(updateGroupSecondaryOnly()) {
	using FunctionType = decltype(updateGroupSecondaryOnly())(*)(SetupPulsePopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3215d0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SetupPulsePopup::updateHoldTime() -> decltype(updateHoldTime()) {
	using FunctionType = decltype(updateHoldTime())(*)(SetupPulsePopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x321a5c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SetupPulsePopup::updatePulseMode() -> decltype(updatePulseMode()) {
	using FunctionType = decltype(updatePulseMode())(*)(SetupPulsePopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3210ac, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SetupPulsePopup::updatePulseTargetType() -> decltype(updatePulseTargetType()) {
	using FunctionType = decltype(updatePulseTargetType())(*)(SetupPulsePopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x321188, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SetupPulsePopup::updateTargetID() -> decltype(updateTargetID()) {
	using FunctionType = decltype(updateTargetID())(*)(SetupPulsePopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x321118, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SetupPulsePopup::updateTextInputLabel() -> decltype(updateTextInputLabel()) {
	using FunctionType = decltype(updateTextInputLabel())(*)(SetupPulsePopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x320cc8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}
