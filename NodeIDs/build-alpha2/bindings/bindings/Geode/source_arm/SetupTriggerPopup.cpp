#include <Geode/cocos/cocoa/CCObject.h>

#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/SetupTriggerPopup.hpp>
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

SetupTriggerPopup::SetupTriggerPopup() : SetupTriggerPopup(geode::CutoffConstructor, sizeof(SetupTriggerPopup)) {
	// here we construct it as normal as we can, then destruct it
	// using the generated functions. this ensures no memory gets leaked
	// no crashes :pray:
	geode::DestructorLock::addLock(this);
	SetupTriggerPopup::~SetupTriggerPopup();

	using FunctionType = void(*)(SetupTriggerPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2914, tulip::hook::TulipConvention::Default);
	reinterpret_cast<FunctionType>(func)(this);
}

SetupTriggerPopup::~SetupTriggerPopup() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(SetupTriggerPopup*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x1c8a08, tulip::hook::TulipConvention::Default);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) SetupTriggerPopup(geode::CutoffConstructor, sizeof(SetupTriggerPopup));
		geode::DestructorLock::addLock(this);
	}
}

auto SetupTriggerPopup::create(EffectGameObject* trigger, cocos2d::CCArray* triggers, float width, float height, int background) -> decltype(create(trigger, triggers, width, height, background)) {
	using FunctionType = decltype(create(trigger, triggers, width, height, background))(*)(EffectGameObject*, cocos2d::CCArray*, float, float, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1c8bc8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(trigger, triggers, width, height, background);
}

auto SetupTriggerPopup::ccTouchBegan(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) -> decltype(ccTouchBegan(touch, event)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&SetupTriggerPopup::ccTouchBegan), this);
	using FunctionType = decltype(ccTouchBegan(touch, event))(*)(SetupTriggerPopup*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1d2c40, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, touch, event);
}

auto SetupTriggerPopup::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&SetupTriggerPopup::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(SetupTriggerPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1cbf10, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto SetupTriggerPopup::show() -> decltype(show()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&SetupTriggerPopup::show), this);
	using FunctionType = decltype(show())(*)(SetupTriggerPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1cbcd0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto SetupTriggerPopup::toggleGroup(int group, bool visible) -> decltype(toggleGroup(group, visible)) {
	auto self = addresser::thunkAdjust(Resolve<int, bool>::func(&SetupTriggerPopup::toggleGroup), this);
	using FunctionType = decltype(toggleGroup(group, visible))(*)(SetupTriggerPopup*, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1c99a0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, group, visible);
}

auto SetupTriggerPopup::determineStartValues() -> decltype(determineStartValues()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&SetupTriggerPopup::determineStartValues), this);
	using FunctionType = decltype(determineStartValues())(*)(SetupTriggerPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1caa20, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto SetupTriggerPopup::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCObject*>::func(&SetupTriggerPopup::onClose), this);
	using FunctionType = decltype(onClose(sender))(*)(SetupTriggerPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1cbd74, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, sender);
}

auto SetupTriggerPopup::textInputClosed(CCTextInputNode* node) -> decltype(textInputClosed(node)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&SetupTriggerPopup::textInputClosed), this);
	using FunctionType = decltype(textInputClosed(node))(*)(SetupTriggerPopup*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1cad20, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, node);
}

auto SetupTriggerPopup::textChanged(CCTextInputNode* node) -> decltype(textChanged(node)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&SetupTriggerPopup::textChanged), this);
	using FunctionType = decltype(textChanged(node))(*)(SetupTriggerPopup*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1cad3c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, node);
}

auto SetupTriggerPopup::sliderBegan(Slider* slider) -> decltype(sliderBegan(slider)) {
	auto self = addresser::thunkAdjust(Resolve<Slider*>::func(&SetupTriggerPopup::sliderBegan), this);
	using FunctionType = decltype(sliderBegan(slider))(*)(SetupTriggerPopup*, Slider*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1cbfa4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, slider);
}

auto SetupTriggerPopup::sliderEnded(Slider* slider) -> decltype(sliderEnded(slider)) {
	auto self = addresser::thunkAdjust(Resolve<Slider*>::func(&SetupTriggerPopup::sliderEnded), this);
	using FunctionType = decltype(sliderEnded(slider))(*)(SetupTriggerPopup*, Slider*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1cc0cc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, slider);
}

auto SetupTriggerPopup::updateDefaultTriggerValues() -> decltype(updateDefaultTriggerValues()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&SetupTriggerPopup::updateDefaultTriggerValues), this);
	using FunctionType = decltype(updateDefaultTriggerValues())(*)(SetupTriggerPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1ced64, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto SetupTriggerPopup::updateInputNode(int tag, float value) -> decltype(updateInputNode(tag, value)) {
	auto self = addresser::thunkAdjust(Resolve<int, float>::func(&SetupTriggerPopup::updateInputNode), this);
	using FunctionType = decltype(updateInputNode(tag, value))(*)(SetupTriggerPopup*, int, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1d0580, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, tag, value);
}

auto SetupTriggerPopup::updateToggleItem(int value, bool toggled) -> decltype(updateToggleItem(value, toggled)) {
	auto self = addresser::thunkAdjust(Resolve<int, bool>::func(&SetupTriggerPopup::updateToggleItem), this);
	using FunctionType = decltype(updateToggleItem(value, toggled))(*)(SetupTriggerPopup*, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1d07f0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, value, toggled);
}

auto SetupTriggerPopup::getValue(int tag) -> decltype(getValue(tag)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&SetupTriggerPopup::getValue), this);
	using FunctionType = decltype(getValue(tag))(*)(SetupTriggerPopup*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1d08a8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, tag);
}

auto SetupTriggerPopup::triggerValueFromSliderValue(int tag, float value) -> decltype(triggerValueFromSliderValue(tag, value)) {
	auto self = addresser::thunkAdjust(Resolve<int, float>::func(&SetupTriggerPopup::triggerValueFromSliderValue), this);
	using FunctionType = decltype(triggerValueFromSliderValue(tag, value))(*)(SetupTriggerPopup*, int, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1d0c74, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, tag, value);
}

auto SetupTriggerPopup::triggerSliderValueFromValue(int tag, float value) -> decltype(triggerSliderValueFromValue(tag, value)) {
	auto self = addresser::thunkAdjust(Resolve<int, float>::func(&SetupTriggerPopup::triggerSliderValueFromValue), this);
	using FunctionType = decltype(triggerSliderValueFromValue(tag, value))(*)(SetupTriggerPopup*, int, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1d0d00, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, tag, value);
}

auto SetupTriggerPopup::valuePopupClosed(ConfigureValuePopup* popup, float value) -> decltype(valuePopupClosed(popup, value)) {
	auto self = addresser::thunkAdjust(Resolve<ConfigureValuePopup*, float>::func(&SetupTriggerPopup::valuePopupClosed), this);
	using FunctionType = decltype(valuePopupClosed(popup, value))(*)(SetupTriggerPopup*, ConfigureValuePopup*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1d1c20, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, popup, value);
}

auto SetupTriggerPopup::keyDown(cocos2d::enumKeyCodes key, double timestamp) -> decltype(keyDown(key, timestamp)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::enumKeyCodes, double>::func(&SetupTriggerPopup::keyDown), this);
	using FunctionType = decltype(keyDown(key, timestamp))(*)(SetupTriggerPopup*, cocos2d::enumKeyCodes, double);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1cbf34, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, key, timestamp);
}

auto SetupTriggerPopup::addCloseButton(std::string text) -> decltype(addCloseButton(text)) {
	using FunctionType = decltype(addCloseButton(text))(*)(SetupTriggerPopup*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1c9e48, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, text);
}

auto SetupTriggerPopup::addCustomButton(int tag, ButtonSprite* sprite, cocos2d::CCPoint position, int page, int group) -> decltype(addCustomButton(tag, sprite, position, page, group)) {
	using FunctionType = decltype(addCustomButton(tag, sprite, position, page, group))(*)(SetupTriggerPopup*, int, ButtonSprite*, cocos2d::CCPoint, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1cebc8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, tag, sprite, position, page, group);
}

auto SetupTriggerPopup::addHelpButton(std::string title, std::string desc, float scale) -> decltype(addHelpButton(title, desc, scale)) {
	using FunctionType = decltype(addHelpButton(title, desc, scale))(*)(SetupTriggerPopup*, std::string, std::string, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1c9ec8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, title, desc, scale);
}

auto SetupTriggerPopup::addInfoLabel(std::string text, float scale, cocos2d::CCPoint position, int page, int group) -> decltype(addInfoLabel(text, scale, position, page, group)) {
	using FunctionType = decltype(addInfoLabel(text, scale, position, page, group))(*)(SetupTriggerPopup*, std::string, float, cocos2d::CCPoint, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1ce594, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, text, scale, position, page, group);
}

auto SetupTriggerPopup::addObjectsToGroup(cocos2d::CCArray* objects, int group) -> decltype(addObjectsToGroup(objects, group)) {
	using FunctionType = decltype(addObjectsToGroup(objects, group))(*)(SetupTriggerPopup*, cocos2d::CCArray*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1c9c94, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, objects, group);
}

auto SetupTriggerPopup::addObjectsToPage(cocos2d::CCArray* objects, int page) -> decltype(addObjectsToPage(objects, page)) {
	using FunctionType = decltype(addObjectsToPage(objects, page))(*)(SetupTriggerPopup*, cocos2d::CCArray*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1c9b40, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, objects, page);
}

auto SetupTriggerPopup::addObjectToGroup(cocos2d::CCObject* object, int group) -> decltype(addObjectToGroup(object, group)) {
	using FunctionType = decltype(addObjectToGroup(object, group))(*)(SetupTriggerPopup*, cocos2d::CCObject*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1c9c24, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, object, group);
}

auto SetupTriggerPopup::addObjectToPage(cocos2d::CCObject* object, int page) -> decltype(addObjectToPage(object, page)) {
	using FunctionType = decltype(addObjectToPage(object, page))(*)(SetupTriggerPopup*, cocos2d::CCObject*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1c9ad0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, object, page);
}

auto SetupTriggerPopup::addTitle(std::string title) -> decltype(addTitle(title)) {
	using FunctionType = decltype(addTitle(title))(*)(SetupTriggerPopup*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1c9d78, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, title);
}

auto SetupTriggerPopup::closeInputNodes() -> decltype(closeInputNodes()) {
	using FunctionType = decltype(closeInputNodes())(*)(SetupTriggerPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1cbec4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SetupTriggerPopup::createCustomButton(int tag, std::string text, std::string frame, cocos2d::CCPoint position, float buttonScale, float labelScale, bool vertical, int page, int group) -> decltype(createCustomButton(tag, text, frame, position, buttonScale, labelScale, vertical, page, group)) {
	using FunctionType = decltype(createCustomButton(tag, text, frame, position, buttonScale, labelScale, vertical, page, group))(*)(SetupTriggerPopup*, int, std::string, std::string, cocos2d::CCPoint, float, float, bool, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1ce890, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, tag, text, frame, position, buttonScale, labelScale, vertical, page, group);
}

auto SetupTriggerPopup::createCustomToggleValueControl(int property, bool toggled, bool notClickable, std::string text, cocos2d::CCPoint position, bool vertical, int page, int group) -> decltype(createCustomToggleValueControl(property, toggled, notClickable, text, position, vertical, page, group)) {
	using FunctionType = decltype(createCustomToggleValueControl(property, toggled, notClickable, text, position, vertical, page, group))(*)(SetupTriggerPopup*, int, bool, bool, std::string, cocos2d::CCPoint, bool, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1ce29c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, property, toggled, notClickable, text, position, vertical, page, group);
}

auto SetupTriggerPopup::createMultiTriggerItems(cocos2d::CCPoint touchPos, cocos2d::CCPoint spawnPos, cocos2d::CCPoint multiPos) -> decltype(createMultiTriggerItems(touchPos, spawnPos, multiPos)) {
	using FunctionType = decltype(createMultiTriggerItems(touchPos, spawnPos, multiPos))(*)(SetupTriggerPopup*, cocos2d::CCPoint, cocos2d::CCPoint, cocos2d::CCPoint);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1ca298, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, touchPos, spawnPos, multiPos);
}

auto SetupTriggerPopup::createPageButtons(float offset, int arrow) -> decltype(createPageButtons(offset, arrow)) {
	using FunctionType = decltype(createPageButtons(offset, arrow))(*)(SetupTriggerPopup*, float, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1c917c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, offset, arrow);
}

auto SetupTriggerPopup::createPlusButton(int tag, cocos2d::CCPoint position, float scale, std::string frame, int page, int group) -> decltype(createPlusButton(tag, position, scale, frame, page, group)) {
	using FunctionType = decltype(createPlusButton(tag, position, scale, frame, page, group))(*)(SetupTriggerPopup*, int, cocos2d::CCPoint, float, std::string, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1ce6d4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, tag, position, scale, frame, page, group);
}

auto SetupTriggerPopup::createToggleButton(std::string text, cocos2d::SEL_MenuHandler selector, bool toggled, cocos2d::CCPoint position) -> decltype(createToggleButton(text, selector, toggled, position)) {
	using FunctionType = decltype(createToggleButton(text, selector, toggled, position))(*)(SetupTriggerPopup*, std::string, cocos2d::SEL_MenuHandler, bool, cocos2d::CCPoint);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1ca07c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, text, selector, toggled, position);
}

auto SetupTriggerPopup::createToggleValueControl(int property, std::string label, cocos2d::CCPoint position, bool vertical, int page, int group, float scale) -> decltype(createToggleValueControl(property, label, position, vertical, page, group, scale)) {
	using FunctionType = decltype(createToggleValueControl(property, label, position, vertical, page, group, scale))(*)(SetupTriggerPopup*, int, std::string, cocos2d::CCPoint, bool, int, int, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1cdea8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, property, label, position, vertical, page, group, scale);
}

auto SetupTriggerPopup::createToggleValueControlAdvanced(int property, std::string label, cocos2d::CCPoint position, bool vertical, int page, int group, float buttonScale, float labelScale, float labelWidth, cocos2d::CCPoint offset) -> decltype(createToggleValueControlAdvanced(property, label, position, vertical, page, group, buttonScale, labelScale, labelWidth, offset)) {
	using FunctionType = decltype(createToggleValueControlAdvanced(property, label, position, vertical, page, group, buttonScale, labelScale, labelWidth, offset))(*)(SetupTriggerPopup*, int, std::string, cocos2d::CCPoint, bool, int, int, float, float, float, cocos2d::CCPoint);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1cdffc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, property, label, position, vertical, page, group, buttonScale, labelScale, labelWidth, offset);
}

auto SetupTriggerPopup::createValueControl(int property, std::string label, cocos2d::CCPoint position, float scale, float sliderMin, float sliderMax) -> decltype(createValueControl(property, label, position, scale, sliderMin, sliderMax)) {
	using FunctionType = decltype(createValueControl(property, label, position, scale, sliderMin, sliderMax))(*)(SetupTriggerPopup*, int, std::string, cocos2d::CCPoint, float, float, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1cc98c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, property, label, position, scale, sliderMin, sliderMax);
}

auto SetupTriggerPopup::createValueControlAdvanced(ValueControlSettings& settings) -> decltype(createValueControlAdvanced(settings)) {
	using FunctionType = decltype(createValueControlAdvanced(settings))(*)(SetupTriggerPopup*, ValueControlSettings&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1ccd5c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, settings);
}

auto SetupTriggerPopup::createValueControlAdvanced(int property, std::string label, cocos2d::CCPoint position, float scale, bool noSlider, InputValueType valueType, int length, bool arrows, float sliderMin, float sliderMax, int page, int group, GJInputStyle inputStyle, int decimalPlaces, bool allowDisable) -> decltype(createValueControlAdvanced(property, label, position, scale, noSlider, valueType, length, arrows, sliderMin, sliderMax, page, group, inputStyle, decimalPlaces, allowDisable)) {
	using FunctionType = decltype(createValueControlAdvanced(property, label, position, scale, noSlider, valueType, length, arrows, sliderMin, sliderMax, page, group, inputStyle, decimalPlaces, allowDisable))(*)(SetupTriggerPopup*, int, std::string, cocos2d::CCPoint, float, bool, InputValueType, int, bool, float, float, int, int, GJInputStyle, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1cca78, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, property, label, position, scale, noSlider, valueType, length, arrows, sliderMin, sliderMax, page, group, inputStyle, decimalPlaces, allowDisable);
}

auto SetupTriggerPopup::createValueControlWArrows(int property, std::string label, cocos2d::CCPoint position, float scale) -> decltype(createValueControlWArrows(property, label, position, scale)) {
	using FunctionType = decltype(createValueControlWArrows(property, label, position, scale))(*)(SetupTriggerPopup*, int, std::string, cocos2d::CCPoint, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1ccc68, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, property, label, position, scale);
}

auto SetupTriggerPopup::getGroupContainer(int group) -> decltype(getGroupContainer(group)) {
	using FunctionType = decltype(getGroupContainer(group))(*)(SetupTriggerPopup*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1c993c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, group);
}

auto SetupTriggerPopup::getMaxSliderValue(int property) -> decltype(getMaxSliderValue(property)) {
	using FunctionType = decltype(getMaxSliderValue(property))(*)(SetupTriggerPopup*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1d0c44, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, property);
}

auto SetupTriggerPopup::getMinSliderValue(int property) -> decltype(getMinSliderValue(property)) {
	using FunctionType = decltype(getMinSliderValue(property))(*)(SetupTriggerPopup*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1d0c14, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, property);
}

auto SetupTriggerPopup::getObjects() -> decltype(getObjects()) {
	using FunctionType = decltype(getObjects())(*)(SetupTriggerPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1ca9d4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SetupTriggerPopup::getPageContainer(int page) -> decltype(getPageContainer(page)) {
	using FunctionType = decltype(getPageContainer(page))(*)(SetupTriggerPopup*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1c9724, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, page);
}

auto SetupTriggerPopup::getTriggerValue(int property, GameObject* object) -> decltype(getTriggerValue(property, object)) {
	using FunctionType = decltype(getTriggerValue(property, object))(*)(SetupTriggerPopup*, int, GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1cf0e8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, property, object);
}

auto SetupTriggerPopup::getTruncatedValue(float value, int decimals) -> decltype(getTruncatedValue(value, decimals)) {
	using FunctionType = decltype(getTruncatedValue(value, decimals))(*)(SetupTriggerPopup*, float, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1caed8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, value, decimals);
}

auto SetupTriggerPopup::getTruncatedValueByTag(int tag, float value) -> decltype(getTruncatedValueByTag(tag, value)) {
	using FunctionType = decltype(getTruncatedValueByTag(tag, value))(*)(SetupTriggerPopup*, int, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1cc338, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, tag, value);
}

auto SetupTriggerPopup::goToPage(int page, bool hideAll) -> decltype(goToPage(page, hideAll)) {
	using FunctionType = decltype(goToPage(page, hideAll))(*)(SetupTriggerPopup*, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1c9524, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, page, hideAll);
}

auto SetupTriggerPopup::hideAll() -> decltype(hideAll()) {
	using FunctionType = decltype(hideAll())(*)(SetupTriggerPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1c9788, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SetupTriggerPopup::init(EffectGameObject* p0, cocos2d::CCArray* p1, float p2, float p3, int p4, float verticalOffset) -> decltype(init(p0, p1, p2, p3, p4, verticalOffset)) {
	using FunctionType = decltype(init(p0, p1, p2, p3, p4, verticalOffset))(*)(SetupTriggerPopup*, EffectGameObject*, cocos2d::CCArray*, float, float, int, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1c8c84, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1, p2, p3, p4, verticalOffset);
}

auto SetupTriggerPopup::onCustomEaseArrow(int property, bool up) -> decltype(onCustomEaseArrow(property, up)) {
	using FunctionType = decltype(onCustomEaseArrow(property, up))(*)(SetupTriggerPopup*, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1d2b9c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, property, up);
}

auto SetupTriggerPopup::onCustomEaseArrowDown(cocos2d::CCObject* sender) -> decltype(onCustomEaseArrowDown(sender)) {
	using FunctionType = decltype(onCustomEaseArrowDown(sender))(*)(SetupTriggerPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1d286c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetupTriggerPopup::onCustomEaseArrowUp(cocos2d::CCObject* sender) -> decltype(onCustomEaseArrowUp(sender)) {
	using FunctionType = decltype(onCustomEaseArrowUp(sender))(*)(SetupTriggerPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1d27b8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetupTriggerPopup::onCustomEaseRate(cocos2d::CCObject* sender) -> decltype(onCustomEaseRate(sender)) {
	using FunctionType = decltype(onCustomEaseRate(sender))(*)(SetupTriggerPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1d2678, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetupTriggerPopup::onDisableValue(cocos2d::CCObject* sender) -> decltype(onDisableValue(sender)) {
	using FunctionType = decltype(onDisableValue(sender))(*)(SetupTriggerPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1cdbac, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetupTriggerPopup::onEase(cocos2d::CCObject* sender) -> decltype(onEase(sender)) {
	using FunctionType = decltype(onEase(sender))(*)(SetupTriggerPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1d182c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetupTriggerPopup::onEaseRate(cocos2d::CCObject* sender) -> decltype(onEaseRate(sender)) {
	using FunctionType = decltype(onEaseRate(sender))(*)(SetupTriggerPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1d1508, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetupTriggerPopup::onMultiTrigger(cocos2d::CCObject* sender) -> decltype(onMultiTrigger(sender)) {
	using FunctionType = decltype(onMultiTrigger(sender))(*)(SetupTriggerPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x6552e4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetupTriggerPopup::onPage(cocos2d::CCObject* sender) -> decltype(onPage(sender)) {
	using FunctionType = decltype(onPage(sender))(*)(SetupTriggerPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1c9438, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetupTriggerPopup::onToggleTriggerValue(cocos2d::CCObject* sender) -> decltype(onToggleTriggerValue(sender)) {
	using FunctionType = decltype(onToggleTriggerValue(sender))(*)(SetupTriggerPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1ce220, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetupTriggerPopup::postSetup() -> decltype(postSetup()) {
	using FunctionType = decltype(postSetup())(*)(SetupTriggerPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1ced38, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SetupTriggerPopup::preSetup() -> decltype(preSetup()) {
	using FunctionType = decltype(preSetup())(*)(SetupTriggerPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1ced24, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SetupTriggerPopup::refreshGroupVisibility() -> decltype(refreshGroupVisibility()) {
	using FunctionType = decltype(refreshGroupVisibility())(*)(SetupTriggerPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1c9794, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SetupTriggerPopup::removeObjectFromGroup(cocos2d::CCObject* object, int group) -> decltype(removeObjectFromGroup(object, group)) {
	using FunctionType = decltype(removeObjectFromGroup(object, group))(*)(SetupTriggerPopup*, cocos2d::CCObject*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1c9d04, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, object, group);
}

auto SetupTriggerPopup::removeObjectFromPage(cocos2d::CCObject* object, int page) -> decltype(removeObjectFromPage(object, page)) {
	using FunctionType = decltype(removeObjectFromPage(object, page))(*)(SetupTriggerPopup*, cocos2d::CCObject*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1c9bb0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, object, page);
}

auto SetupTriggerPopup::resetDisabledValues() -> decltype(resetDisabledValues()) {
	using FunctionType = decltype(resetDisabledValues())(*)(SetupTriggerPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1cdcac, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SetupTriggerPopup::setCustomBGColor(cocos2d::ccColor3B const& p0) -> decltype(setCustomBGColor(p0)) {
	using FunctionType = decltype(setCustomBGColor(p0))(*)(SetupTriggerPopup*, cocos2d::ccColor3B const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1c90b8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto SetupTriggerPopup::setMaxSliderValue(float value, int property) -> decltype(setMaxSliderValue(value, property)) {
	using FunctionType = decltype(setMaxSliderValue(value, property))(*)(SetupTriggerPopup*, float, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1cdb2c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, value, property);
}

auto SetupTriggerPopup::setMinSliderValue(float value, int property) -> decltype(setMinSliderValue(value, property)) {
	using FunctionType = decltype(setMinSliderValue(value, property))(*)(SetupTriggerPopup*, float, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1cdaac, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, value, property);
}

auto SetupTriggerPopup::shouldLimitValue(int property) -> decltype(shouldLimitValue(property)) {
	using FunctionType = decltype(shouldLimitValue(property))(*)(SetupTriggerPopup*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1cc714, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, property);
}

auto SetupTriggerPopup::toggleCustomEaseRateVisibility(int property, int tag) -> decltype(toggleCustomEaseRateVisibility(property, tag)) {
	using FunctionType = decltype(toggleCustomEaseRateVisibility(property, tag))(*)(SetupTriggerPopup*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1d2a60, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, property, tag);
}

auto SetupTriggerPopup::toggleDisableButtons(bool visible) -> decltype(toggleDisableButtons(visible)) {
	using FunctionType = decltype(toggleDisableButtons(visible))(*)(SetupTriggerPopup*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1cdd90, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, visible);
}

auto SetupTriggerPopup::toggleLimitValue(int property, bool limit) -> decltype(toggleLimitValue(property, limit)) {
	using FunctionType = decltype(toggleLimitValue(property, limit))(*)(SetupTriggerPopup*, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1cc7d4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, property, limit);
}

auto SetupTriggerPopup::togglePageArrows(bool visible) -> decltype(togglePageArrows(visible)) {
	using FunctionType = decltype(togglePageArrows(visible))(*)(SetupTriggerPopup*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1c94ac, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, visible);
}

auto SetupTriggerPopup::triggerArrowLeft(cocos2d::CCObject* sender) -> decltype(triggerArrowLeft(sender)) {
	using FunctionType = decltype(triggerArrowLeft(sender))(*)(SetupTriggerPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1cc3ac, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetupTriggerPopup::triggerArrowRight(cocos2d::CCObject* sender) -> decltype(triggerArrowRight(sender)) {
	using FunctionType = decltype(triggerArrowRight(sender))(*)(SetupTriggerPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1cc6dc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetupTriggerPopup::triggerSliderChanged(cocos2d::CCObject* sender) -> decltype(triggerSliderChanged(sender)) {
	using FunctionType = decltype(triggerSliderChanged(sender))(*)(SetupTriggerPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1cc3e4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetupTriggerPopup::updateCustomEaseLabel(int property, int easingType) -> decltype(updateCustomEaseLabel(property, easingType)) {
	using FunctionType = decltype(updateCustomEaseLabel(property, easingType))(*)(SetupTriggerPopup*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1d2920, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, property, easingType);
}

auto SetupTriggerPopup::updateCustomEaseRateLabel(int property, float easingRate) -> decltype(updateCustomEaseRateLabel(property, easingRate)) {
	using FunctionType = decltype(updateCustomEaseRateLabel(property, easingRate))(*)(SetupTriggerPopup*, int, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1d1ce4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, property, easingRate);
}

auto SetupTriggerPopup::updateCustomToggleTrigger(int tag, bool toggled) -> decltype(updateCustomToggleTrigger(tag, toggled)) {
	using FunctionType = decltype(updateCustomToggleTrigger(tag, toggled))(*)(SetupTriggerPopup*, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1ce4f0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, tag, toggled);
}

auto SetupTriggerPopup::updateEaseLabel() -> decltype(updateEaseLabel()) {
	using FunctionType = decltype(updateEaseLabel())(*)(SetupTriggerPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1d1898, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SetupTriggerPopup::updateEditorLabel() -> decltype(updateEditorLabel()) {
	using FunctionType = decltype(updateEditorLabel())(*)(SetupTriggerPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1cab18, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SetupTriggerPopup::updateInputNodeLabel(int property, std::string text) -> decltype(updateInputNodeLabel(property, text)) {
	using FunctionType = decltype(updateInputNodeLabel(property, text))(*)(SetupTriggerPopup*, int, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1d0a74, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, property, text);
}

auto SetupTriggerPopup::updateLabel(int property, std::string text) -> decltype(updateLabel(property, text)) {
	using FunctionType = decltype(updateLabel(property, text))(*)(SetupTriggerPopup*, int, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1ce52c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, property, text);
}

auto SetupTriggerPopup::updateMultiTriggerBtn() -> decltype(updateMultiTriggerBtn()) {
	using FunctionType = decltype(updateMultiTriggerBtn())(*)(SetupTriggerPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1ca95c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SetupTriggerPopup::updateSlider(int property) -> decltype(updateSlider(property)) {
	using FunctionType = decltype(updateSlider(property))(*)(SetupTriggerPopup*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1d0780, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, property);
}

auto SetupTriggerPopup::updateSlider(int property, float value) -> decltype(updateSlider(property, value)) {
	using FunctionType = decltype(updateSlider(property, value))(*)(SetupTriggerPopup*, int, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1cbc8c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, property, value);
}

auto SetupTriggerPopup::updateSpawnedByTrigger() -> decltype(updateSpawnedByTrigger()) {
	using FunctionType = decltype(updateSpawnedByTrigger())(*)(SetupTriggerPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1cab90, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SetupTriggerPopup::updateTouchTriggered() -> decltype(updateTouchTriggered()) {
	using FunctionType = decltype(updateTouchTriggered())(*)(SetupTriggerPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1cac58, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SetupTriggerPopup::updateValue(int property, float value) -> decltype(updateValue(property, value)) {
	using FunctionType = decltype(updateValue(property, value))(*)(SetupTriggerPopup*, int, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1cdc34, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, property, value);
}

auto SetupTriggerPopup::updateValueControls(int property, float value) -> decltype(updateValueControls(property, value)) {
	using FunctionType = decltype(updateValueControls(property, value))(*)(SetupTriggerPopup*, int, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1cc898, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, property, value);
}
