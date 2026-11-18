#include <Geode/cocos/cocoa/CCObject.h>

#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/UILayer.hpp>
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

UILayer::~UILayer() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(UILayer*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x4c5cf0, tulip::hook::TulipConvention::Default);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) UILayer(geode::CutoffConstructor, sizeof(UILayer));
		geode::DestructorLock::addLock(this);
	}
}

auto UILayer::create(GJBaseGameLayer* layer) -> decltype(create(layer)) {
	using FunctionType = decltype(create(layer))(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4c1e90, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(layer);
}

auto UILayer::draw() -> decltype(draw()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&UILayer::draw), this);
	using FunctionType = decltype(draw())(*)(UILayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4c4f60, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto UILayer::ccTouchBegan(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) -> decltype(ccTouchBegan(touch, event)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&UILayer::ccTouchBegan), this);
	using FunctionType = decltype(ccTouchBegan(touch, event))(*)(UILayer*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4c4fd0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, touch, event);
}

auto UILayer::ccTouchMoved(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) -> decltype(ccTouchMoved(touch, event)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&UILayer::ccTouchMoved), this);
	using FunctionType = decltype(ccTouchMoved(touch, event))(*)(UILayer*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4c51d0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, touch, event);
}

auto UILayer::ccTouchEnded(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) -> decltype(ccTouchEnded(touch, event)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&UILayer::ccTouchEnded), this);
	using FunctionType = decltype(ccTouchEnded(touch, event))(*)(UILayer*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4c52e0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, touch, event);
}

auto UILayer::ccTouchCancelled(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) -> decltype(ccTouchCancelled(touch, event)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&UILayer::ccTouchCancelled), this);
	using FunctionType = decltype(ccTouchCancelled(touch, event))(*)(UILayer*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4c5c70, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, touch, event);
}

auto UILayer::registerWithTouchDispatcher() -> decltype(registerWithTouchDispatcher()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&UILayer::registerWithTouchDispatcher), this);
	using FunctionType = decltype(registerWithTouchDispatcher())(*)(UILayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4c5cb0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto UILayer::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&UILayer::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(UILayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4c4c10, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto UILayer::keyDown(cocos2d::enumKeyCodes key, double timestamp) -> decltype(keyDown(key, timestamp)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::enumKeyCodes, double>::func(&UILayer::keyDown), this);
	using FunctionType = decltype(keyDown(key, timestamp))(*)(UILayer*, cocos2d::enumKeyCodes, double);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4c38a0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, key, timestamp);
}

auto UILayer::handleAction(int action, bool down, double timestamp) -> decltype(handleAction(action, down, timestamp)) {
	auto self = addresser::thunkAdjust(Resolve<int, bool, double>::func(&UILayer::handleAction), this);
	using FunctionType = decltype(handleAction(action, down, timestamp))(*)(UILayer*, int, bool, double);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4c3960, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, action, down, timestamp);
}

auto UILayer::announceLevelControls() -> decltype(announceLevelControls()) {
	using FunctionType = decltype(announceLevelControls())(*)(UILayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4c3010, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto UILayer::applyLevelBindings() -> decltype(applyLevelBindings()) {
	using FunctionType = decltype(applyLevelBindings())(*)(UILayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4c2d10, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto UILayer::disableMenu() -> decltype(disableMenu()) {
	using FunctionType = decltype(disableMenu())(*)(UILayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4c36c0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto UILayer::doPause() -> decltype(doPause()) {
	using FunctionType = decltype(doPause())(*)(UILayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4c4cd0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto UILayer::editorPlaytest(bool visible) -> decltype(editorPlaytest(visible)) {
	using FunctionType = decltype(editorPlaytest(visible))(*)(UILayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4c36e0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, visible);
}

auto UILayer::enableEditorMode() -> decltype(enableEditorMode()) {
	using FunctionType = decltype(enableEditorMode())(*)(UILayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4c3670, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto UILayer::enableMenu() -> decltype(enableMenu()) {
	using FunctionType = decltype(enableMenu())(*)(UILayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4c4de0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto UILayer::init(GJBaseGameLayer* layer) -> decltype(init(layer)) {
	using FunctionType = decltype(init(layer))(*)(UILayer*, GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4c1fd0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, layer);
}

auto UILayer::isJumpButtonPressed() -> decltype(isJumpButtonPressed()) {
	using FunctionType = decltype(isJumpButtonPressed())(*)(UILayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4c4f70, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto UILayer::isJumpButtonPressed(bool player1) -> decltype(isJumpButtonPressed(player1)) {
	using FunctionType = decltype(isJumpButtonPressed(player1))(*)(UILayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4c4fa0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, player1);
}

auto UILayer::onCheck(cocos2d::CCObject* sender) -> decltype(onCheck(sender)) {
	using FunctionType = decltype(onCheck(sender))(*)(UILayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4c2800, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto UILayer::onDeleteCheck(cocos2d::CCObject* sender) -> decltype(onDeleteCheck(sender)) {
	using FunctionType = decltype(onDeleteCheck(sender))(*)(UILayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4c2860, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto UILayer::onPause(cocos2d::CCObject* sender) -> decltype(onPause(sender)) {
	using FunctionType = decltype(onPause(sender))(*)(UILayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4c27b0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto UILayer::processUINodesTouch(GJUITouchEvent event, cocos2d::CCTouch* touch) -> decltype(processUINodesTouch(event, touch)) {
	using FunctionType = decltype(processUINodesTouch(event, touch))(*)(UILayer*, GJUITouchEvent, cocos2d::CCTouch*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4c5110, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, event, touch);
}

auto UILayer::processUINodeTouch(GJUITouchEvent event, int touchID, cocos2d::CCPoint position, GJUINode* node, double timestamp) -> decltype(processUINodeTouch(event, touchID, position, node, timestamp)) {
	using FunctionType = decltype(processUINodeTouch(event, touchID, position, node, timestamp))(*)(UILayer*, GJUITouchEvent, int, cocos2d::CCPoint, GJUINode*, double);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4c5480, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, event, touchID, position, node, timestamp);
}

auto UILayer::reapplyLevelControls() -> decltype(reapplyLevelControls()) {
	using FunctionType = decltype(reapplyLevelControls())(*)(UILayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4c2d90, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto UILayer::refreshDpad() -> decltype(refreshDpad()) {
	using FunctionType = decltype(refreshDpad())(*)(UILayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4c2f00, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto UILayer::resetAllButtons() -> decltype(resetAllButtons()) {
	using FunctionType = decltype(resetAllButtons())(*)(UILayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4c2f20, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto UILayer::resetUINodeState() -> decltype(resetUINodeState()) {
	using FunctionType = decltype(resetUINodeState())(*)(UILayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4c3510, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto UILayer::resolveLevelControls() -> decltype(resolveLevelControls()) {
	using FunctionType = decltype(resolveLevelControls())(*)(UILayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4c2be0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto UILayer::showTextAlert(std::string text, bool isOn, bool useRawText, float delay) -> decltype(showTextAlert(text, isOn, useRawText, delay)) {
	using FunctionType = decltype(showTextAlert(text, isOn, useRawText, delay))(*)(UILayer*, std::string, bool, bool, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4c3270, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, text, isOn, useRawText, delay);
}

auto UILayer::toggleCheckpointsMenu(bool visible) -> decltype(toggleCheckpointsMenu(visible)) {
	using FunctionType = decltype(toggleCheckpointsMenu(visible))(*)(UILayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4c28a0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, visible);
}

auto UILayer::toggleMenuVisibility(bool visible) -> decltype(toggleMenuVisibility(visible)) {
	using FunctionType = decltype(toggleMenuVisibility(visible))(*)(UILayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4c4e00, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, visible);
}

auto UILayer::togglePlatformerMode(bool platformer) -> decltype(togglePlatformerMode(platformer)) {
	using FunctionType = decltype(togglePlatformerMode(platformer))(*)(UILayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4c2a70, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, platformer);
}

auto UILayer::updateCheckState() -> decltype(updateCheckState()) {
	using FunctionType = decltype(updateCheckState())(*)(UILayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4c28e0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto UILayer::updateDualMode(bool dual) -> decltype(updateDualMode(dual)) {
	using FunctionType = decltype(updateDualMode(dual))(*)(UILayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4c2bb0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, dual);
}

auto UILayer::updateUINodeVisibility(bool visible) -> decltype(updateUINodeVisibility(visible)) {
	using FunctionType = decltype(updateUINodeVisibility(visible))(*)(UILayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4c3430, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, visible);
}
