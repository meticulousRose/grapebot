#include <Geode/cocos/cocoa/CCObject.h>

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

SetGroupIDLayer::~SetGroupIDLayer() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(SetGroupIDLayer*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x2fcd10, tulip::hook::TulipConvention::Default);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) SetGroupIDLayer(geode::CutoffConstructor, sizeof(SetGroupIDLayer));
		geode::DestructorLock::addLock(this);
	}
}

auto SetGroupIDLayer::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&SetGroupIDLayer::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(SetGroupIDLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x302d40, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto SetGroupIDLayer::valuePopupClosed(ConfigureValuePopup* popup, float value) -> decltype(valuePopupClosed(popup, value)) {
	auto self = addresser::thunkAdjust(Resolve<ConfigureValuePopup*, float>::func(&SetGroupIDLayer::valuePopupClosed), this);
	using FunctionType = decltype(valuePopupClosed(popup, value))(*)(SetGroupIDLayer*, ConfigureValuePopup*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x302c40, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, popup, value);
}

auto SetGroupIDLayer::textInputClosed(CCTextInputNode* node) -> decltype(textInputClosed(node)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&SetGroupIDLayer::textInputClosed), this);
	using FunctionType = decltype(textInputClosed(node))(*)(SetGroupIDLayer*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x301f50, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, node);
}

auto SetGroupIDLayer::textChanged(CCTextInputNode* node) -> decltype(textChanged(node)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&SetGroupIDLayer::textChanged), this);
	using FunctionType = decltype(textChanged(node))(*)(SetGroupIDLayer*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x301f90, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, node);
}

auto SetGroupIDLayer::ccTouchBegan(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) -> decltype(ccTouchBegan(touch, event)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&SetGroupIDLayer::ccTouchBegan), this);
	using FunctionType = decltype(ccTouchBegan(touch, event))(*)(SetGroupIDLayer*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x302520, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, touch, event);
}

auto SetGroupIDLayer::ccTouchMoved(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) -> decltype(ccTouchMoved(touch, event)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&SetGroupIDLayer::ccTouchMoved), this);
	using FunctionType = decltype(ccTouchMoved(touch, event))(*)(SetGroupIDLayer*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x302610, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, touch, event);
}

auto SetGroupIDLayer::ccTouchEnded(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) -> decltype(ccTouchEnded(touch, event)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&SetGroupIDLayer::ccTouchEnded), this);
	using FunctionType = decltype(ccTouchEnded(touch, event))(*)(SetGroupIDLayer*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x302750, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, touch, event);
}

auto SetGroupIDLayer::ccTouchCancelled(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) -> decltype(ccTouchCancelled(touch, event)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&SetGroupIDLayer::ccTouchCancelled), this);
	using FunctionType = decltype(ccTouchCancelled(touch, event))(*)(SetGroupIDLayer*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x302870, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, touch, event);
}

auto SetGroupIDLayer::addGroupID(int id) -> decltype(addGroupID(id)) {
	using FunctionType = decltype(addGroupID(id))(*)(SetGroupIDLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x302b50, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto SetGroupIDLayer::callRemoveFromGroup(float dt) -> decltype(callRemoveFromGroup(dt)) {
	using FunctionType = decltype(callRemoveFromGroup(dt))(*)(SetGroupIDLayer*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x64d70, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, dt);
}

auto SetGroupIDLayer::createTextInput(cocos2d::CCPoint position, int tag, int length, std::string placeholder, float width, int arrow) -> decltype(createTextInput(position, tag, length, placeholder, width, arrow)) {
	using FunctionType = decltype(createTextInput(position, tag, length, placeholder, width, arrow))(*)(SetGroupIDLayer*, cocos2d::CCPoint, int, int, std::string, float, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2ff6d0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, position, tag, length, placeholder, width, arrow);
}

auto SetGroupIDLayer::determineStartValues() -> decltype(determineStartValues()) {
	using FunctionType = decltype(determineStartValues())(*)(SetGroupIDLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2ffd90, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SetGroupIDLayer::init(GameObject* obj, cocos2d::CCArray* objs) -> decltype(init(obj, objs)) {
	using FunctionType = decltype(init(obj, objs))(*)(SetGroupIDLayer*, GameObject*, cocos2d::CCArray*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2fcf00, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, obj, objs);
}

auto SetGroupIDLayer::onAddGroup(cocos2d::CCObject* sender) -> decltype(onAddGroup(sender)) {
	using FunctionType = decltype(onAddGroup(sender))(*)(SetGroupIDLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2ffbc0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetGroupIDLayer::onAnim(cocos2d::CCObject* sender) -> decltype(onAnim(sender)) {
	using FunctionType = decltype(onAnim(sender))(*)(SetGroupIDLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x301330, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetGroupIDLayer::onArrowLeft(cocos2d::CCObject* sender) -> decltype(onArrowLeft(sender)) {
	using FunctionType = decltype(onArrowLeft(sender))(*)(SetGroupIDLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x301420, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetGroupIDLayer::onArrowRight(cocos2d::CCObject* sender) -> decltype(onArrowRight(sender)) {
	using FunctionType = decltype(onArrowRight(sender))(*)(SetGroupIDLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x21e5c0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetGroupIDLayer::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	using FunctionType = decltype(onClose(sender))(*)(SetGroupIDLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2ff0f0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetGroupIDLayer::onCopy(cocos2d::CCObject* sender) -> decltype(onCopy(sender)) {
	using FunctionType = decltype(onCopy(sender))(*)(SetGroupIDLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3010d0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetGroupIDLayer::onGroupIDOptions(cocos2d::CCObject* sender) -> decltype(onGroupIDOptions(sender)) {
	using FunctionType = decltype(onGroupIDOptions(sender))(*)(SetGroupIDLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2ff510, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetGroupIDLayer::onNextFreeOrderChannel(cocos2d::CCObject* sender) -> decltype(onNextFreeOrderChannel(sender)) {
	using FunctionType = decltype(onNextFreeOrderChannel(sender))(*)(SetGroupIDLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x300470, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetGroupIDLayer::onNextGroupID1(cocos2d::CCObject* sender) -> decltype(onNextGroupID1(sender)) {
	using FunctionType = decltype(onNextGroupID1(sender))(*)(SetGroupIDLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3023c0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetGroupIDLayer::onPaste(cocos2d::CCObject* sender) -> decltype(onPaste(sender)) {
	using FunctionType = decltype(onPaste(sender))(*)(SetGroupIDLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x301100, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetGroupIDLayer::onRemoveFromGroup(cocos2d::CCObject* sender) -> decltype(onRemoveFromGroup(sender)) {
	using FunctionType = decltype(onRemoveFromGroup(sender))(*)(SetGroupIDLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x37a320, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetGroupIDLayer::onSmoothEase(cocos2d::CCObject* sender) -> decltype(onSmoothEase(sender)) {
	using FunctionType = decltype(onSmoothEase(sender))(*)(SetGroupIDLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x302d20, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetGroupIDLayer::onToggleGuide(cocos2d::CCObject* sender) -> decltype(onToggleGuide(sender)) {
	using FunctionType = decltype(onToggleGuide(sender))(*)(SetGroupIDLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x301360, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetGroupIDLayer::onToggleSelectedOrder(cocos2d::CCObject* sender) -> decltype(onToggleSelectedOrder(sender)) {
	using FunctionType = decltype(onToggleSelectedOrder(sender))(*)(SetGroupIDLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x301390, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetGroupIDLayer::onToggleTraceIn(cocos2d::CCObject* sender) -> decltype(onToggleTraceIn(sender)) {
	using FunctionType = decltype(onToggleTraceIn(sender))(*)(SetGroupIDLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3013f0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetGroupIDLayer::onToggleTraceOut(cocos2d::CCObject* sender) -> decltype(onToggleTraceOut(sender)) {
	using FunctionType = decltype(onToggleTraceOut(sender))(*)(SetGroupIDLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3013c0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetGroupIDLayer::onZLayer(cocos2d::CCObject* sender) -> decltype(onZLayer(sender)) {
	using FunctionType = decltype(onZLayer(sender))(*)(SetGroupIDLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2ffc70, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetGroupIDLayer::onZLayerShift(cocos2d::CCObject* sender) -> decltype(onZLayerShift(sender)) {
	using FunctionType = decltype(onZLayerShift(sender))(*)(SetGroupIDLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x300130, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetGroupIDLayer::removeGroupID(int id) -> decltype(removeGroupID(id)) {
	using FunctionType = decltype(removeGroupID(id))(*)(SetGroupIDLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x302a80, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto SetGroupIDLayer::updateEditorLayerID() -> decltype(updateEditorLayerID()) {
	using FunctionType = decltype(updateEditorLayerID())(*)(SetGroupIDLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x301930, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SetGroupIDLayer::updateEditorLayerID2() -> decltype(updateEditorLayerID2()) {
	using FunctionType = decltype(updateEditorLayerID2())(*)(SetGroupIDLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3019b0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SetGroupIDLayer::updateEditorOrder() -> decltype(updateEditorOrder()) {
	using FunctionType = decltype(updateEditorOrder())(*)(SetGroupIDLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x301a30, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SetGroupIDLayer::updateOrderChannel() -> decltype(updateOrderChannel()) {
	using FunctionType = decltype(updateOrderChannel())(*)(SetGroupIDLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x301ae0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SetGroupIDLayer::updateZLayerButtons() -> decltype(updateZLayerButtons()) {
	using FunctionType = decltype(updateZLayerButtons())(*)(SetGroupIDLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x300a70, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}
