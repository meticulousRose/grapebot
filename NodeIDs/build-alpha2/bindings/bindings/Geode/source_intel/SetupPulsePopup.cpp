
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

auto SetupPulsePopup::show() -> decltype(show()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&SetupPulsePopup::show), this);
	using FunctionType = decltype(show())(*)(SetupPulsePopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3992b0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto SetupPulsePopup::determineStartValues() -> decltype(determineStartValues()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&SetupPulsePopup::determineStartValues), this);
	using FunctionType = decltype(determineStartValues())(*)(SetupPulsePopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x397eb0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto SetupPulsePopup::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCObject*>::func(&SetupPulsePopup::onClose), this);
	using FunctionType = decltype(onClose(sender))(*)(SetupPulsePopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x398b10, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, sender);
}

auto SetupPulsePopup::textChanged(CCTextInputNode* node) -> decltype(textChanged(node)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&SetupPulsePopup::textChanged), this);
	using FunctionType = decltype(textChanged(node))(*)(SetupPulsePopup*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x399330, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, node);
}

auto SetupPulsePopup::colorValueChanged(cocos2d::ccColor3B color) -> decltype(colorValueChanged(color)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::ccColor3B>::func(&SetupPulsePopup::colorValueChanged), this);
	using FunctionType = decltype(colorValueChanged(color))(*)(SetupPulsePopup*, cocos2d::ccColor3B);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x398cf0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, color);
}

auto SetupPulsePopup::textInputOpened(CCTextInputNode* node) -> decltype(textInputOpened(node)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&SetupPulsePopup::textInputOpened), this);
	using FunctionType = decltype(textInputOpened(node))(*)(SetupPulsePopup*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x399310, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, node);
}

auto SetupPulsePopup::colorSelectClosed(GJSpecialColorSelect* select, int id) -> decltype(colorSelectClosed(select, id)) {
	auto self = addresser::thunkAdjust(Resolve<GJSpecialColorSelect*, int>::func(&SetupPulsePopup::colorSelectClosed), this);
	using FunctionType = decltype(colorSelectClosed(select, id))(*)(SetupPulsePopup*, GJSpecialColorSelect*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x398460, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, select, id);
}

auto SetupPulsePopup::getColorValue() -> decltype(getColorValue()) {
	using FunctionType = decltype(getColorValue())(*)(SetupPulsePopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x398890, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SetupPulsePopup::onCopy(cocos2d::CCObject* sender) -> decltype(onCopy(sender)) {
	using FunctionType = decltype(onCopy(sender))(*)(SetupPulsePopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x397780, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetupPulsePopup::onExclusive(cocos2d::CCObject* sender) -> decltype(onExclusive(sender)) {
	using FunctionType = decltype(onExclusive(sender))(*)(SetupPulsePopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x397400, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetupPulsePopup::onHSVLegacyMode(cocos2d::CCObject* sender) -> decltype(onHSVLegacyMode(sender)) {
	using FunctionType = decltype(onHSVLegacyMode(sender))(*)(SetupPulsePopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3976f0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetupPulsePopup::onPaste(cocos2d::CCObject* sender) -> decltype(onPaste(sender)) {
	using FunctionType = decltype(onPaste(sender))(*)(SetupPulsePopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3977c0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetupPulsePopup::onSelectPulseMode(cocos2d::CCObject* sender) -> decltype(onSelectPulseMode(sender)) {
	using FunctionType = decltype(onSelectPulseMode(sender))(*)(SetupPulsePopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3971e0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetupPulsePopup::onSelectSpecialColor(cocos2d::CCObject* sender) -> decltype(onSelectSpecialColor(sender)) {
	using FunctionType = decltype(onSelectSpecialColor(sender))(*)(SetupPulsePopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x397900, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetupPulsePopup::onSelectSpecialTargetID(cocos2d::CCObject* sender) -> decltype(onSelectSpecialTargetID(sender)) {
	using FunctionType = decltype(onSelectSpecialTargetID(sender))(*)(SetupPulsePopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3971a0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetupPulsePopup::onSelectTargetMode(cocos2d::CCObject* sender) -> decltype(onSelectTargetMode(sender)) {
	using FunctionType = decltype(onSelectTargetMode(sender))(*)(SetupPulsePopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x396ef0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetupPulsePopup::onUpdateCopyColor(cocos2d::CCObject* sender) -> decltype(onUpdateCopyColor(sender)) {
	using FunctionType = decltype(onUpdateCopyColor(sender))(*)(SetupPulsePopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x397830, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetupPulsePopup::selectColor(cocos2d::ccColor3B color) -> decltype(selectColor(color)) {
	using FunctionType = decltype(selectColor(color))(*)(SetupPulsePopup*, cocos2d::ccColor3B);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x397800, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, color);
}

auto SetupPulsePopup::sliderChanged(cocos2d::CCObject* sender) -> decltype(sliderChanged(sender)) {
	using FunctionType = decltype(sliderChanged(sender))(*)(SetupPulsePopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3968d0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetupPulsePopup::updateColorValue() -> decltype(updateColorValue()) {
	using FunctionType = decltype(updateColorValue())(*)(SetupPulsePopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x398df0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SetupPulsePopup::updateCopyColor() -> decltype(updateCopyColor()) {
	using FunctionType = decltype(updateCopyColor())(*)(SetupPulsePopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3987f0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SetupPulsePopup::updateGroupMainOnly() -> decltype(updateGroupMainOnly()) {
	using FunctionType = decltype(updateGroupMainOnly())(*)(SetupPulsePopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3983e0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SetupPulsePopup::updateGroupSecondaryOnly() -> decltype(updateGroupSecondaryOnly()) {
	using FunctionType = decltype(updateGroupSecondaryOnly())(*)(SetupPulsePopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x398360, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SetupPulsePopup::updateHSVValue() -> decltype(updateHSVValue()) {
	using FunctionType = decltype(updateHSVValue())(*)(SetupPulsePopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x398a60, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SetupPulsePopup::updatePulseMode() -> decltype(updatePulseMode()) {
	using FunctionType = decltype(updatePulseMode())(*)(SetupPulsePopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x397d30, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SetupPulsePopup::updatePulseTargetType() -> decltype(updatePulseTargetType()) {
	using FunctionType = decltype(updatePulseTargetType())(*)(SetupPulsePopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x397e30, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SetupPulsePopup::updateTargetID() -> decltype(updateTargetID()) {
	using FunctionType = decltype(updateTargetID())(*)(SetupPulsePopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x397db0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SetupPulsePopup::updateTextInputLabel() -> decltype(updateTextInputLabel()) {
	using FunctionType = decltype(updateTextInputLabel())(*)(SetupPulsePopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x397940, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}
