
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/DialogLayer.hpp>
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

auto DialogLayer::create(DialogObject* object, int background) -> decltype(create(object, background)) {
	using FunctionType = decltype(create(object, background))(*)(DialogObject*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3376ec, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(object, background);
}

auto DialogLayer::createDialogLayer(DialogObject* object, cocos2d::CCArray* objects, int background) -> decltype(createDialogLayer(object, objects, background)) {
	using FunctionType = decltype(createDialogLayer(object, objects, background))(*)(DialogObject*, cocos2d::CCArray*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3376f8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(object, objects, background);
}

auto DialogLayer::createWithObjects(cocos2d::CCArray* objects, int background) -> decltype(createWithObjects(objects, background)) {
	using FunctionType = decltype(createWithObjects(objects, background))(*)(cocos2d::CCArray*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x337808, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(objects, background);
}

auto DialogLayer::onEnter() -> decltype(onEnter()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&DialogLayer::onEnter), this);
	using FunctionType = decltype(onEnter())(*)(DialogLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3387a4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto DialogLayer::ccTouchBegan(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) -> decltype(ccTouchBegan(touch, event)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&DialogLayer::ccTouchBegan), this);
	using FunctionType = decltype(ccTouchBegan(touch, event))(*)(DialogLayer*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x338678, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, touch, event);
}

auto DialogLayer::ccTouchMoved(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) -> decltype(ccTouchMoved(touch, event)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&DialogLayer::ccTouchMoved), this);
	using FunctionType = decltype(ccTouchMoved(touch, event))(*)(DialogLayer*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x338720, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, touch, event);
}

auto DialogLayer::ccTouchEnded(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) -> decltype(ccTouchEnded(touch, event)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&DialogLayer::ccTouchEnded), this);
	using FunctionType = decltype(ccTouchEnded(touch, event))(*)(DialogLayer*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3386e8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, touch, event);
}

auto DialogLayer::ccTouchCancelled(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) -> decltype(ccTouchCancelled(touch, event)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&DialogLayer::ccTouchCancelled), this);
	using FunctionType = decltype(ccTouchCancelled(touch, event))(*)(DialogLayer*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x338728, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, touch, event);
}

auto DialogLayer::registerWithTouchDispatcher() -> decltype(registerWithTouchDispatcher()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&DialogLayer::registerWithTouchDispatcher), this);
	using FunctionType = decltype(registerWithTouchDispatcher())(*)(DialogLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x33876c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto DialogLayer::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&DialogLayer::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(DialogLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x338554, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto DialogLayer::keyDown(cocos2d::enumKeyCodes key, double timestamp) -> decltype(keyDown(key, timestamp)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::enumKeyCodes, double>::func(&DialogLayer::keyDown), this);
	using FunctionType = decltype(keyDown(key, timestamp))(*)(DialogLayer*, cocos2d::enumKeyCodes, double);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x338af8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, key, timestamp);
}

auto DialogLayer::fadeInTextFinished(TextArea* textArea) -> decltype(fadeInTextFinished(textArea)) {
	auto self = addresser::thunkAdjust(Resolve<TextArea*>::func(&DialogLayer::fadeInTextFinished), this);
	using FunctionType = decltype(fadeInTextFinished(textArea))(*)(DialogLayer*, TextArea*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3387a8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, textArea);
}

auto DialogLayer::addToMainScene() -> decltype(addToMainScene()) {
	using FunctionType = decltype(addToMainScene())(*)(DialogLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3384fc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto DialogLayer::animateIn(DialogAnimationType type) -> decltype(animateIn(type)) {
	using FunctionType = decltype(animateIn(type))(*)(DialogLayer*, DialogAnimationType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3388f0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, type);
}

auto DialogLayer::animateInDialog() -> decltype(animateInDialog()) {
	using FunctionType = decltype(animateInDialog())(*)(DialogLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x338af0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto DialogLayer::animateInRandomSide() -> decltype(animateInRandomSide()) {
	using FunctionType = decltype(animateInRandomSide())(*)(DialogLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x338898, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto DialogLayer::displayDialogObject(DialogObject* object) -> decltype(displayDialogObject(object)) {
	using FunctionType = decltype(displayDialogObject(object))(*)(DialogLayer*, DialogObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x337d90, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto DialogLayer::displayNextObject() -> decltype(displayNextObject()) {
	using FunctionType = decltype(displayNextObject())(*)(DialogLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x337cf0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto DialogLayer::finishCurrentAnimation() -> decltype(finishCurrentAnimation()) {
	using FunctionType = decltype(finishCurrentAnimation())(*)(DialogLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3383d4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto DialogLayer::init(DialogObject* object, cocos2d::CCArray* objects, int background) -> decltype(init(object, objects, background)) {
	using FunctionType = decltype(init(object, objects, background))(*)(DialogLayer*, DialogObject*, cocos2d::CCArray*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x337818, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, object, objects, background);
}

auto DialogLayer::onClose() -> decltype(onClose()) {
	using FunctionType = decltype(onClose())(*)(DialogLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x33846c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto DialogLayer::updateChatPlacement(DialogChatPlacement placement) -> decltype(updateChatPlacement(placement)) {
	using FunctionType = decltype(updateChatPlacement(placement))(*)(DialogLayer*, DialogChatPlacement);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3381c0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, placement);
}

auto DialogLayer::updateNavButtonFrame() -> decltype(updateNavButtonFrame()) {
	using FunctionType = decltype(updateNavButtonFrame())(*)(DialogLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x338160, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}
