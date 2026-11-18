#include <Geode/cocos/cocoa/CCObject.h>

#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/CustomizeObjectLayer.hpp>
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

CustomizeObjectLayer::~CustomizeObjectLayer() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(CustomizeObjectLayer*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x18b844, tulip::hook::TulipConvention::Default);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) CustomizeObjectLayer(geode::CutoffConstructor, sizeof(CustomizeObjectLayer));
		geode::DestructorLock::addLock(this);
	}
}

auto CustomizeObjectLayer::create(GameObject* object, cocos2d::CCArray* objects) -> decltype(create(object, objects)) {
	using FunctionType = decltype(create(object, objects))(*)(GameObject*, cocos2d::CCArray*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1fe080, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(object, objects);
}

auto CustomizeObjectLayer::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&CustomizeObjectLayer::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(CustomizeObjectLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x18fbe0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto CustomizeObjectLayer::textInputOpened(CCTextInputNode* node) -> decltype(textInputOpened(node)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&CustomizeObjectLayer::textInputOpened), this);
	using FunctionType = decltype(textInputOpened(node))(*)(CustomizeObjectLayer*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x18f834, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, node);
}

auto CustomizeObjectLayer::textInputClosed(CCTextInputNode* node) -> decltype(textInputClosed(node)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&CustomizeObjectLayer::textInputClosed), this);
	using FunctionType = decltype(textInputClosed(node))(*)(CustomizeObjectLayer*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x18f958, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, node);
}

auto CustomizeObjectLayer::textChanged(CCTextInputNode* node) -> decltype(textChanged(node)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&CustomizeObjectLayer::textChanged), this);
	using FunctionType = decltype(textChanged(node))(*)(CustomizeObjectLayer*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x18f974, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, node);
}

auto CustomizeObjectLayer::hsvPopupClosed(HSVWidgetPopup* popup, cocos2d::ccHSVValue value) -> decltype(hsvPopupClosed(popup, value)) {
	auto self = addresser::thunkAdjust(Resolve<HSVWidgetPopup*, cocos2d::ccHSVValue>::func(&CustomizeObjectLayer::hsvPopupClosed), this);
	using FunctionType = decltype(hsvPopupClosed(popup, value))(*)(CustomizeObjectLayer*, HSVWidgetPopup*, cocos2d::ccHSVValue);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x18f634, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, popup, value);
}

auto CustomizeObjectLayer::colorSelectClosed(cocos2d::CCNode* popup) -> decltype(colorSelectClosed(popup)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCNode*>::func(&CustomizeObjectLayer::colorSelectClosed), this);
	using FunctionType = decltype(colorSelectClosed(popup))(*)(CustomizeObjectLayer*, cocos2d::CCNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x18f3f8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, popup);
}

auto CustomizeObjectLayer::colorSetupClosed(int id) -> decltype(colorSetupClosed(id)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&CustomizeObjectLayer::colorSetupClosed), this);
	using FunctionType = decltype(colorSetupClosed(id))(*)(CustomizeObjectLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x18efe8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, id);
}

auto CustomizeObjectLayer::createToggleButton(std::string text, cocos2d::SEL_MenuHandler selector, bool toggled, cocos2d::CCMenu* menu, cocos2d::CCPoint position) -> decltype(createToggleButton(text, selector, toggled, menu, position)) {
	using FunctionType = decltype(createToggleButton(text, selector, toggled, menu, position))(*)(CustomizeObjectLayer*, std::string, cocos2d::SEL_MenuHandler, bool, cocos2d::CCMenu*, cocos2d::CCPoint);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x18f404, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, text, selector, toggled, menu, position);
}

auto CustomizeObjectLayer::determineStartValues() -> decltype(determineStartValues()) {
	using FunctionType = decltype(determineStartValues())(*)(CustomizeObjectLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1fd9d0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto CustomizeObjectLayer::getActiveMode(bool ignoreDefault) -> decltype(getActiveMode(ignoreDefault)) {
	using FunctionType = decltype(getActiveMode(ignoreDefault))(*)(CustomizeObjectLayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x18eab0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, ignoreDefault);
}

auto CustomizeObjectLayer::getButtonByTag(int tag) -> decltype(getButtonByTag(tag)) {
	using FunctionType = decltype(getButtonByTag(tag))(*)(CustomizeObjectLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x18f360, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, tag);
}

auto CustomizeObjectLayer::getHSV() -> decltype(getHSV()) {
	using FunctionType = decltype(getHSV())(*)(CustomizeObjectLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x18f620, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto CustomizeObjectLayer::highlightSelected(ButtonSprite* sprite) -> decltype(highlightSelected(sprite)) {
	using FunctionType = decltype(highlightSelected(sprite))(*)(CustomizeObjectLayer*, ButtonSprite*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x18f244, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sprite);
}

auto CustomizeObjectLayer::init(GameObject* object, cocos2d::CCArray* objects) -> decltype(init(object, objects)) {
	using FunctionType = decltype(init(object, objects))(*)(CustomizeObjectLayer*, GameObject*, cocos2d::CCArray*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x18b9cc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, object, objects);
}

auto CustomizeObjectLayer::onBreakApart(cocos2d::CCObject* sender) -> decltype(onBreakApart(sender)) {
	using FunctionType = decltype(onBreakApart(sender))(*)(CustomizeObjectLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x18e714, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CustomizeObjectLayer::onBrowse(cocos2d::CCObject* sender) -> decltype(onBrowse(sender)) {
	using FunctionType = decltype(onBrowse(sender))(*)(CustomizeObjectLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x18ea6c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CustomizeObjectLayer::onClear(cocos2d::CCObject* sender) -> decltype(onClear(sender)) {
	using FunctionType = decltype(onClear(sender))(*)(CustomizeObjectLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x18e7c4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CustomizeObjectLayer::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	using FunctionType = decltype(onClose(sender))(*)(CustomizeObjectLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x18d950, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CustomizeObjectLayer::onCopy(cocos2d::CCObject* sender) -> decltype(onCopy(sender)) {
	using FunctionType = decltype(onCopy(sender))(*)(CustomizeObjectLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x18e9a0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CustomizeObjectLayer::onEditColor(cocos2d::CCObject* sender) -> decltype(onEditColor(sender)) {
	using FunctionType = decltype(onEditColor(sender))(*)(CustomizeObjectLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x18e44c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CustomizeObjectLayer::onHSV(cocos2d::CCObject* sender) -> decltype(onHSV(sender)) {
	using FunctionType = decltype(onHSV(sender))(*)(CustomizeObjectLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5133c0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CustomizeObjectLayer::onLiveEdit(cocos2d::CCObject* sender) -> decltype(onLiveEdit(sender)) {
	using FunctionType = decltype(onLiveEdit(sender))(*)(CustomizeObjectLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x18e4a0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CustomizeObjectLayer::onNextColorChannel(cocos2d::CCObject* sender) -> decltype(onNextColorChannel(sender)) {
	using FunctionType = decltype(onNextColorChannel(sender))(*)(CustomizeObjectLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x18e878, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CustomizeObjectLayer::onPaste(cocos2d::CCObject* sender) -> decltype(onPaste(sender)) {
	using FunctionType = decltype(onPaste(sender))(*)(CustomizeObjectLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x18e9c8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CustomizeObjectLayer::onSelectColor(cocos2d::CCObject* sender) -> decltype(onSelectColor(sender)) {
	using FunctionType = decltype(onSelectColor(sender))(*)(CustomizeObjectLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x18e190, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CustomizeObjectLayer::onSelectMode(cocos2d::CCObject* sender) -> decltype(onSelectMode(sender)) {
	using FunctionType = decltype(onSelectMode(sender))(*)(CustomizeObjectLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x18daf0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CustomizeObjectLayer::recreateLayer() -> decltype(recreateLayer()) {
	using FunctionType = decltype(recreateLayer())(*)(CustomizeObjectLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x18ee94, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto CustomizeObjectLayer::sliderChanged(cocos2d::CCObject* sender) -> decltype(sliderChanged(sender)) {
	using FunctionType = decltype(sliderChanged(sender))(*)(CustomizeObjectLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x18e554, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CustomizeObjectLayer::toggleVisible() -> decltype(toggleVisible()) {
	using FunctionType = decltype(toggleVisible())(*)(CustomizeObjectLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x18f6f4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto CustomizeObjectLayer::updateChannelLabel(int channel) -> decltype(updateChannelLabel(channel)) {
	using FunctionType = decltype(updateChannelLabel(channel))(*)(CustomizeObjectLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x18ed2c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, channel);
}

auto CustomizeObjectLayer::updateColorSprite() -> decltype(updateColorSprite()) {
	using FunctionType = decltype(updateColorSprite())(*)(CustomizeObjectLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x18ec5c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto CustomizeObjectLayer::updateCurrentSelection() -> decltype(updateCurrentSelection()) {
	using FunctionType = decltype(updateCurrentSelection())(*)(CustomizeObjectLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x18eb94, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto CustomizeObjectLayer::updateCustomColorLabels() -> decltype(updateCustomColorLabels()) {
	using FunctionType = decltype(updateCustomColorLabels())(*)(CustomizeObjectLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x18e32c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto CustomizeObjectLayer::updateHSVButtons() -> decltype(updateHSVButtons()) {
	using FunctionType = decltype(updateHSVButtons())(*)(CustomizeObjectLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x18dffc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto CustomizeObjectLayer::updateKerningLabel() -> decltype(updateKerningLabel()) {
	using FunctionType = decltype(updateKerningLabel())(*)(CustomizeObjectLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xa7d6c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto CustomizeObjectLayer::updateSelected(int id) -> decltype(updateSelected(id)) {
	using FunctionType = decltype(updateSelected(id))(*)(CustomizeObjectLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x18f0fc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id);
}
