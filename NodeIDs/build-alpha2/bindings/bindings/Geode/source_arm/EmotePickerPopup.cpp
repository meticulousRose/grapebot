#include <Geode/cocos/cocoa/CCObject.h>

#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/EmotePickerPopup.hpp>
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

EmotePickerPopup::~EmotePickerPopup() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(EmotePickerPopup*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x7ead00, tulip::hook::TulipConvention::Default);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) EmotePickerPopup(geode::CutoffConstructor, sizeof(EmotePickerPopup));
		geode::DestructorLock::addLock(this);
	}
}

auto EmotePickerPopup::create(CCTextInputNode* input, cocos2d::CCPoint position, int maxEmotes, int maxLength) -> decltype(create(input, position, maxEmotes, maxLength)) {
	using FunctionType = decltype(create(input, position, maxEmotes, maxLength))(*)(CCTextInputNode*, cocos2d::CCPoint, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x7e9568, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(input, position, maxEmotes, maxLength);
}

auto EmotePickerPopup::toggle(EmotePickerPopup* existingPopup, EmotePickerDelegate* delegate, cocos2d::CCNode* node, CCTextInputNode* input, int maxEmotes, int maxLength) -> decltype(toggle(existingPopup, delegate, node, input, maxEmotes, maxLength)) {
	using FunctionType = decltype(toggle(existingPopup, delegate, node, input, maxEmotes, maxLength))(*)(EmotePickerPopup*, EmotePickerDelegate*, cocos2d::CCNode*, CCTextInputNode*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x7e9a38, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(existingPopup, delegate, node, input, maxEmotes, maxLength);
}

auto EmotePickerPopup::openAt(EmotePickerPopup* popup, EmotePickerDelegate* delegate, cocos2d::CCNode* node) -> decltype(openAt(popup, delegate, node)) {
	using FunctionType = decltype(openAt(popup, delegate, node))(*)(EmotePickerPopup*, EmotePickerDelegate*, cocos2d::CCNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x7e9b08, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(popup, delegate, node);
}

auto EmotePickerPopup::ccTouchBegan(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) -> decltype(ccTouchBegan(touch, event)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&EmotePickerPopup::ccTouchBegan), this);
	using FunctionType = decltype(ccTouchBegan(touch, event))(*)(EmotePickerPopup*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x7ea928, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, touch, event);
}

auto EmotePickerPopup::keyDown(cocos2d::enumKeyCodes key, double timestamp) -> decltype(keyDown(key, timestamp)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::enumKeyCodes, double>::func(&EmotePickerPopup::keyDown), this);
	using FunctionType = decltype(keyDown(key, timestamp))(*)(EmotePickerPopup*, cocos2d::enumKeyCodes, double);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x7eab24, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, key, timestamp);
}

auto EmotePickerPopup::show() -> decltype(show()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&EmotePickerPopup::show), this);
	using FunctionType = decltype(show())(*)(EmotePickerPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x7eac10, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto EmotePickerPopup::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCObject*>::func(&EmotePickerPopup::onClose), this);
	using FunctionType = decltype(onClose(sender))(*)(EmotePickerPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x7eac18, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, sender);
}

auto EmotePickerPopup::textChanged(CCTextInputNode* input) -> decltype(textChanged(input)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&EmotePickerPopup::textChanged), this);
	using FunctionType = decltype(textChanged(input))(*)(EmotePickerPopup*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x7e9e30, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, input);
}

auto EmotePickerPopup::onBuildWindowContent() -> decltype(onBuildWindowContent()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&EmotePickerPopup::onBuildWindowContent), this);
	using FunctionType = decltype(onBuildWindowContent())(*)(EmotePickerPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x7e9e3c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto EmotePickerPopup::onWindowResized() -> decltype(onWindowResized()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&EmotePickerPopup::onWindowResized), this);
	using FunctionType = decltype(onWindowResized())(*)(EmotePickerPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x7ea924, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto EmotePickerPopup::addCell(EmoteDef const* p0, int p1) -> decltype(addCell(p0, p1)) {
	using FunctionType = decltype(addCell(p0, p1))(*)(EmotePickerPopup*, EmoteDef const*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x7ea44c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1);
}

auto EmotePickerPopup::canAddEmote() -> decltype(canAddEmote()) {
	using FunctionType = decltype(canAddEmote())(*)(EmotePickerPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x7eaa58, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto EmotePickerPopup::init(CCTextInputNode* input, cocos2d::CCPoint position, int maxEmotes, int maxLength) -> decltype(init(input, position, maxEmotes, maxLength)) {
	using FunctionType = decltype(init(input, position, maxEmotes, maxLength))(*)(EmotePickerPopup*, CCTextInputNode*, cocos2d::CCPoint, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x7e96b8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, input, position, maxEmotes, maxLength);
}

auto EmotePickerPopup::layoutEmoteGrid() -> decltype(layoutEmoteGrid()) {
	using FunctionType = decltype(layoutEmoteGrid())(*)(EmotePickerPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x7ea548, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto EmotePickerPopup::refreshEnabled() -> decltype(refreshEnabled()) {
	using FunctionType = decltype(refreshEnabled())(*)(EmotePickerPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x7e9d00, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}
