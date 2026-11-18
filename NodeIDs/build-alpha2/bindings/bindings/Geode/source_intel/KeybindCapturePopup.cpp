
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/KeybindCapturePopup.hpp>
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

auto KeybindCapturePopup::create(KeybindSource* source, int action, int chord, KeybindingsLayer* layer, KeybindCaptureMode mode) -> decltype(create(source, action, chord, layer, mode)) {
	using FunctionType = decltype(create(source, action, chord, layer, mode))(*)(KeybindSource*, int, int, KeybindingsLayer*, KeybindCaptureMode);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5b49b0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(source, action, chord, layer, mode);
}

auto KeybindCapturePopup::keyDown(cocos2d::enumKeyCodes key, double timestamp) -> decltype(keyDown(key, timestamp)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::enumKeyCodes, double>::func(&KeybindCapturePopup::keyDown), this);
	using FunctionType = decltype(keyDown(key, timestamp))(*)(KeybindCapturePopup*, cocos2d::enumKeyCodes, double);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5b5ab0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, key, timestamp);
}

auto KeybindCapturePopup::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCObject*>::func(&KeybindCapturePopup::onClose), this);
	using FunctionType = decltype(onClose(sender))(*)(KeybindCapturePopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5b5a60, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, sender);
}

auto KeybindCapturePopup::inputKeySelected(int chord) -> decltype(inputKeySelected(chord)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&KeybindCapturePopup::inputKeySelected), this);
	using FunctionType = decltype(inputKeySelected(chord))(*)(KeybindCapturePopup*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5b5060, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, chord);
}

auto KeybindCapturePopup::keyUp(cocos2d::enumKeyCodes key, double timestamp) -> decltype(keyUp(key, timestamp)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::enumKeyCodes, double>::func(&KeybindCapturePopup::keyUp), this);
	using FunctionType = decltype(keyUp(key, timestamp))(*)(KeybindCapturePopup*, cocos2d::enumKeyCodes, double);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5b5cd0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, key, timestamp);
}

auto KeybindCapturePopup::init(KeybindSource* source, int action, int chord, KeybindingsLayer* layer, KeybindCaptureMode mode) -> decltype(init(source, action, chord, layer, mode)) {
	using FunctionType = decltype(init(source, action, chord, layer, mode))(*)(KeybindCapturePopup*, KeybindSource*, int, int, KeybindingsLayer*, KeybindCaptureMode);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5b3c50, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, source, action, chord, layer, mode);
}

auto KeybindCapturePopup::updateButtonStates() -> decltype(updateButtonStates()) {
	using FunctionType = decltype(updateButtonStates())(*)(KeybindCapturePopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5b5750, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto KeybindCapturePopup::updateChordDisplay() -> decltype(updateChordDisplay()) {
	using FunctionType = decltype(updateChordDisplay())(*)(KeybindCapturePopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5b48c0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto KeybindCapturePopup::updateConflictLabel() -> decltype(updateConflictLabel()) {
	using FunctionType = decltype(updateConflictLabel())(*)(KeybindCapturePopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5b5160, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}
