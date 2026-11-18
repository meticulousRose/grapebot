#include <Geode/cocos/cocoa/CCObject.h>

#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/EditorWindowPopup.hpp>
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

EditorWindowPopup::EditorWindowPopup() : EditorWindowPopup(geode::CutoffConstructor, sizeof(EditorWindowPopup)) {
	// here we construct it as normal as we can, then destruct it
	// using the generated functions. this ensures no memory gets leaked
	// no crashes :pray:
	geode::DestructorLock::addLock(this);
	EditorWindowPopup::~EditorWindowPopup();

	using FunctionType = void(*)(EditorWindowPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8def40, tulip::hook::TulipConvention::Default);
	reinterpret_cast<FunctionType>(func)(this);
}

auto EditorWindowPopup::onExit() -> decltype(onExit()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&EditorWindowPopup::onExit), this);
	using FunctionType = decltype(onExit())(*)(EditorWindowPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x902190, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto EditorWindowPopup::ccTouchBegan(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) -> decltype(ccTouchBegan(touch, event)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&EditorWindowPopup::ccTouchBegan), this);
	using FunctionType = decltype(ccTouchBegan(touch, event))(*)(EditorWindowPopup*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x900ff0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, touch, event);
}

auto EditorWindowPopup::ccTouchMoved(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) -> decltype(ccTouchMoved(touch, event)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&EditorWindowPopup::ccTouchMoved), this);
	using FunctionType = decltype(ccTouchMoved(touch, event))(*)(EditorWindowPopup*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x901620, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, touch, event);
}

auto EditorWindowPopup::ccTouchEnded(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) -> decltype(ccTouchEnded(touch, event)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&EditorWindowPopup::ccTouchEnded), this);
	using FunctionType = decltype(ccTouchEnded(touch, event))(*)(EditorWindowPopup*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x901a00, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, touch, event);
}

auto EditorWindowPopup::ccTouchCancelled(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) -> decltype(ccTouchCancelled(touch, event)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&EditorWindowPopup::ccTouchCancelled), this);
	using FunctionType = decltype(ccTouchCancelled(touch, event))(*)(EditorWindowPopup*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x901bc0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, touch, event);
}

auto EditorWindowPopup::keyDown(cocos2d::enumKeyCodes key, double timestamp) -> decltype(keyDown(key, timestamp)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::enumKeyCodes, double>::func(&EditorWindowPopup::keyDown), this);
	using FunctionType = decltype(keyDown(key, timestamp))(*)(EditorWindowPopup*, cocos2d::enumKeyCodes, double);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x901d60, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, key, timestamp);
}

auto EditorWindowPopup::show() -> decltype(show()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&EditorWindowPopup::show), this);
	using FunctionType = decltype(show())(*)(EditorWindowPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x902170, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto EditorWindowPopup::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCObject*>::func(&EditorWindowPopup::onClose), this);
	using FunctionType = decltype(onClose(sender))(*)(EditorWindowPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x9021d0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, sender);
}

auto EditorWindowPopup::textInputClosed(CCTextInputNode* p0) -> decltype(textInputClosed(p0)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&EditorWindowPopup::textInputClosed), this);
	using FunctionType = decltype(textInputClosed(p0))(*)(EditorWindowPopup*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x902110, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto EditorWindowPopup::handleAction(int action, bool down, double timestamp) -> decltype(handleAction(action, down, timestamp)) {
	auto self = addresser::thunkAdjust(Resolve<int, bool, double>::func(&EditorWindowPopup::handleAction), this);
	using FunctionType = decltype(handleAction(action, down, timestamp))(*)(EditorWindowPopup*, int, bool, double);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x901f10, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, action, down, timestamp);
}

auto EditorWindowPopup::onFieldEnter() -> decltype(onFieldEnter()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&EditorWindowPopup::onFieldEnter), this);
	using FunctionType = decltype(onFieldEnter())(*)(EditorWindowPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x9020d0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto EditorWindowPopup::initWindow(EditorUI* editorUI, float width, float height, int windowID, int unused) -> decltype(initWindow(editorUI, width, height, windowID, unused)) {
	using FunctionType = decltype(initWindow(editorUI, width, height, windowID, unused))(*)(EditorWindowPopup*, EditorUI*, float, float, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8ffeb0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, editorUI, width, height, windowID, unused);
}

auto EditorWindowPopup::beginTouch(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) -> decltype(beginTouch(touch, event)) {
	using FunctionType = decltype(beginTouch(touch, event))(*)(EditorWindowPopup*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x901160, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, touch, event);
}

auto EditorWindowPopup::isInCloseButton(cocos2d::CCPoint point) const  -> decltype(isInCloseButton(point)) {
	using FunctionType = decltype(isInCloseButton(point))(*)(EditorWindowPopup const *, cocos2d::CCPoint);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x900b10, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, point);
}

auto EditorWindowPopup::applyWindowSize() -> decltype(applyWindowSize()) {
	using FunctionType = decltype(applyWindowSize())(*)(EditorWindowPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x9005e0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto EditorWindowPopup::getResizeCorner(cocos2d::CCPoint p0) const  -> decltype(getResizeCorner(p0)) {
	using FunctionType = decltype(getResizeCorner(p0))(*)(EditorWindowPopup const *, cocos2d::CCPoint);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x900a00, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto EditorWindowPopup::layoutWindow() -> decltype(layoutWindow()) {
	using FunctionType = decltype(layoutWindow())(*)(EditorWindowPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x9006b0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}
