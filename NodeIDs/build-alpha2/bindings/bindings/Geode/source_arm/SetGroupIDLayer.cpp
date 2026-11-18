
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/SetGroupIDLayer.hpp>
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

auto SetGroupIDLayer::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&SetGroupIDLayer::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(SetGroupIDLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x296ca0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto SetGroupIDLayer::valuePopupClosed(ConfigureValuePopup* popup, float value) -> decltype(valuePopupClosed(popup, value)) {
	auto self = addresser::thunkAdjust(Resolve<ConfigureValuePopup*, float>::func(&SetGroupIDLayer::valuePopupClosed), this);
	using FunctionType = decltype(valuePopupClosed(popup, value))(*)(SetGroupIDLayer*, ConfigureValuePopup*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x296bd0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, popup, value);
}

auto SetGroupIDLayer::textInputClosed(CCTextInputNode* node) -> decltype(textInputClosed(node)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&SetGroupIDLayer::textInputClosed), this);
	using FunctionType = decltype(textInputClosed(node))(*)(SetGroupIDLayer*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x295fdc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, node);
}

auto SetGroupIDLayer::textChanged(CCTextInputNode* node) -> decltype(textChanged(node)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&SetGroupIDLayer::textChanged), this);
	using FunctionType = decltype(textChanged(node))(*)(SetGroupIDLayer*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x295ff8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, node);
}

auto SetGroupIDLayer::ccTouchBegan(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) -> decltype(ccTouchBegan(touch, event)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&SetGroupIDLayer::ccTouchBegan), this);
	using FunctionType = decltype(ccTouchBegan(touch, event))(*)(SetGroupIDLayer*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2964d0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, touch, event);
}

auto SetGroupIDLayer::ccTouchMoved(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) -> decltype(ccTouchMoved(touch, event)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&SetGroupIDLayer::ccTouchMoved), this);
	using FunctionType = decltype(ccTouchMoved(touch, event))(*)(SetGroupIDLayer*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2965d0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, touch, event);
}

auto SetGroupIDLayer::ccTouchEnded(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) -> decltype(ccTouchEnded(touch, event)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&SetGroupIDLayer::ccTouchEnded), this);
	using FunctionType = decltype(ccTouchEnded(touch, event))(*)(SetGroupIDLayer*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x296710, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, touch, event);
}

auto SetGroupIDLayer::ccTouchCancelled(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) -> decltype(ccTouchCancelled(touch, event)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&SetGroupIDLayer::ccTouchCancelled), this);
	using FunctionType = decltype(ccTouchCancelled(touch, event))(*)(SetGroupIDLayer*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x296820, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, touch, event);
}

auto SetGroupIDLayer::addGroupID(int id) -> decltype(addGroupID(id)) {
	using FunctionType = decltype(addGroupID(id))(*)(SetGroupIDLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x296ae4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto SetGroupIDLayer::createTextInput(cocos2d::CCPoint position, int tag, int length, std::string placeholder, float width, int arrow) -> decltype(createTextInput(position, tag, length, placeholder, width, arrow)) {
	using FunctionType = decltype(createTextInput(position, tag, length, placeholder, width, arrow))(*)(SetGroupIDLayer*, cocos2d::CCPoint, int, int, std::string, float, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x293a6c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, position, tag, length, placeholder, width, arrow);
}

auto SetGroupIDLayer::determineStartValues() -> decltype(determineStartValues()) {
	using FunctionType = decltype(determineStartValues())(*)(SetGroupIDLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x29412c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SetGroupIDLayer::init(GameObject* obj, cocos2d::CCArray* objs) -> decltype(init(obj, objs)) {
	using FunctionType = decltype(init(obj, objs))(*)(SetGroupIDLayer*, GameObject*, cocos2d::CCArray*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2914d4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, obj, objs);
}

auto SetGroupIDLayer::onAddGroup(cocos2d::CCObject* sender) -> decltype(onAddGroup(sender)) {
	using FunctionType = decltype(onAddGroup(sender))(*)(SetGroupIDLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x293f88, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetGroupIDLayer::onAnim(cocos2d::CCObject* sender) -> decltype(onAnim(sender)) {
	using FunctionType = decltype(onAnim(sender))(*)(SetGroupIDLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x29552c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetGroupIDLayer::onArrow(int tag, int increment) -> decltype(onArrow(tag, increment)) {
	using FunctionType = decltype(onArrow(tag, increment))(*)(SetGroupIDLayer*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x29567c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, tag, increment);
}

auto SetGroupIDLayer::onArrowLeft(cocos2d::CCObject* sender) -> decltype(onArrowLeft(sender)) {
	using FunctionType = decltype(onArrowLeft(sender))(*)(SetGroupIDLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x29560c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetGroupIDLayer::onArrowRight(cocos2d::CCObject* sender) -> decltype(onArrowRight(sender)) {
	using FunctionType = decltype(onArrowRight(sender))(*)(SetGroupIDLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x295644, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetGroupIDLayer::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	using FunctionType = decltype(onClose(sender))(*)(SetGroupIDLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x293500, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetGroupIDLayer::onCopy(cocos2d::CCObject* sender) -> decltype(onCopy(sender)) {
	using FunctionType = decltype(onCopy(sender))(*)(SetGroupIDLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x29532c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetGroupIDLayer::onExtra2(cocos2d::CCObject* sender) -> decltype(onExtra2(sender)) {
	using FunctionType = decltype(onExtra2(sender))(*)(SetGroupIDLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x295434, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetGroupIDLayer::onGroupIDOptions(cocos2d::CCObject* sender) -> decltype(onGroupIDOptions(sender)) {
	using FunctionType = decltype(onGroupIDOptions(sender))(*)(SetGroupIDLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x293890, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetGroupIDLayer::onNextFreeEditorLayer1(cocos2d::CCObject* sender) -> decltype(onNextFreeEditorLayer1(sender)) {
	using FunctionType = decltype(onNextFreeEditorLayer1(sender))(*)(SetGroupIDLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2936b8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetGroupIDLayer::onNextFreeEditorLayer2(cocos2d::CCObject* sender) -> decltype(onNextFreeEditorLayer2(sender)) {
	using FunctionType = decltype(onNextFreeEditorLayer2(sender))(*)(SetGroupIDLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2937a4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetGroupIDLayer::onNextFreeOrderChannel(cocos2d::CCObject* sender) -> decltype(onNextFreeOrderChannel(sender)) {
	using FunctionType = decltype(onNextFreeOrderChannel(sender))(*)(SetGroupIDLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x294764, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetGroupIDLayer::onNextGroupID1(cocos2d::CCObject* sender) -> decltype(onNextGroupID1(sender)) {
	using FunctionType = decltype(onNextGroupID1(sender))(*)(SetGroupIDLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x296384, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetGroupIDLayer::onPaste(cocos2d::CCObject* sender) -> decltype(onPaste(sender)) {
	using FunctionType = decltype(onPaste(sender))(*)(SetGroupIDLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x295354, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetGroupIDLayer::onToggleGuide(cocos2d::CCObject* sender) -> decltype(onToggleGuide(sender)) {
	using FunctionType = decltype(onToggleGuide(sender))(*)(SetGroupIDLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x29555c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetGroupIDLayer::onToggleSelectedOrder(cocos2d::CCObject* sender) -> decltype(onToggleSelectedOrder(sender)) {
	using FunctionType = decltype(onToggleSelectedOrder(sender))(*)(SetGroupIDLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x295588, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetGroupIDLayer::onToggleTraceIn(cocos2d::CCObject* sender) -> decltype(onToggleTraceIn(sender)) {
	using FunctionType = decltype(onToggleTraceIn(sender))(*)(SetGroupIDLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2955e0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetGroupIDLayer::onToggleTraceOut(cocos2d::CCObject* sender) -> decltype(onToggleTraceOut(sender)) {
	using FunctionType = decltype(onToggleTraceOut(sender))(*)(SetGroupIDLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2955b4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetGroupIDLayer::onZLayer(cocos2d::CCObject* sender) -> decltype(onZLayer(sender)) {
	using FunctionType = decltype(onZLayer(sender))(*)(SetGroupIDLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x294024, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetGroupIDLayer::onZLayerShift(cocos2d::CCObject* sender) -> decltype(onZLayerShift(sender)) {
	using FunctionType = decltype(onZLayerShift(sender))(*)(SetGroupIDLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x294418, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetGroupIDLayer::updateEditorLayerID() -> decltype(updateEditorLayerID()) {
	using FunctionType = decltype(updateEditorLayerID())(*)(SetGroupIDLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x295a98, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SetGroupIDLayer::updateEditorLayerID2() -> decltype(updateEditorLayerID2()) {
	using FunctionType = decltype(updateEditorLayerID2())(*)(SetGroupIDLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x295b08, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SetGroupIDLayer::updateOrderChannel() -> decltype(updateOrderChannel()) {
	using FunctionType = decltype(updateOrderChannel())(*)(SetGroupIDLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x17408, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SetGroupIDLayer::updateZLayerButtons() -> decltype(updateZLayerButtons()) {
	using FunctionType = decltype(updateZLayerButtons())(*)(SetGroupIDLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x294d5c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}
