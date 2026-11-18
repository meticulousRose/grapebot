
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/MPLobbyLayer.hpp>
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

auto MPLobbyLayer::create(int type) -> decltype(create(type)) {
	using FunctionType = decltype(create(type))(*)(int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3f4020, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(type);
}

auto MPLobbyLayer::scene(int type) -> decltype(scene(type)) {
	using FunctionType = decltype(scene(type))(*)(int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3f3f30, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(type);
}

auto MPLobbyLayer::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&MPLobbyLayer::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(MPLobbyLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3f44a0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto MPLobbyLayer::keyDown(cocos2d::enumKeyCodes key, double timestamp) -> decltype(keyDown(key, timestamp)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::enumKeyCodes, double>::func(&MPLobbyLayer::keyDown), this);
	using FunctionType = decltype(keyDown(key, timestamp))(*)(MPLobbyLayer*, cocos2d::enumKeyCodes, double);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3f4bc4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, key, timestamp);
}

auto MPLobbyLayer::joinLobbyFinished(int id) -> decltype(joinLobbyFinished(id)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&MPLobbyLayer::joinLobbyFinished), this);
	using FunctionType = decltype(joinLobbyFinished(id))(*)(MPLobbyLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3f4600, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, id);
}

auto MPLobbyLayer::joinLobbyFailed(int id, GJMPErrorCode errorType) -> decltype(joinLobbyFailed(id, errorType)) {
	auto self = addresser::thunkAdjust(Resolve<int, GJMPErrorCode>::func(&MPLobbyLayer::joinLobbyFailed), this);
	using FunctionType = decltype(joinLobbyFailed(id, errorType))(*)(MPLobbyLayer*, int, GJMPErrorCode);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3f4a08, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, id, errorType);
}

auto MPLobbyLayer::updateComments() -> decltype(updateComments()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&MPLobbyLayer::updateComments), this);
	using FunctionType = decltype(updateComments())(*)(MPLobbyLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3f4900, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto MPLobbyLayer::didUploadMPComment(int id) -> decltype(didUploadMPComment(id)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&MPLobbyLayer::didUploadMPComment), this);
	using FunctionType = decltype(didUploadMPComment(id))(*)(MPLobbyLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3f49f0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, id);
}

auto MPLobbyLayer::textInputOpened(CCTextInputNode* node) -> decltype(textInputOpened(node)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&MPLobbyLayer::textInputOpened), this);
	using FunctionType = decltype(textInputOpened(node))(*)(MPLobbyLayer*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3f4b1c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, node);
}

auto MPLobbyLayer::textInputClosed(CCTextInputNode* node) -> decltype(textInputClosed(node)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&MPLobbyLayer::textInputClosed), this);
	using FunctionType = decltype(textInputClosed(node))(*)(MPLobbyLayer*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3f4b24, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, node);
}

auto MPLobbyLayer::textChanged(CCTextInputNode* node) -> decltype(textChanged(node)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&MPLobbyLayer::textChanged), this);
	using FunctionType = decltype(textChanged(node))(*)(MPLobbyLayer*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3f4b2c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, node);
}

auto MPLobbyLayer::keyUp(cocos2d::enumKeyCodes key, double timestamp) -> decltype(keyUp(key, timestamp)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::enumKeyCodes, double>::func(&MPLobbyLayer::keyUp), this);
	using FunctionType = decltype(keyUp(key, timestamp))(*)(MPLobbyLayer*, cocos2d::enumKeyCodes, double);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3f4be8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, key, timestamp);
}

auto MPLobbyLayer::FLAlert_Clicked(FLAlertLayer* layer, bool btn2) -> decltype(FLAlert_Clicked(layer, btn2)) {
	auto self = addresser::thunkAdjust(Resolve<FLAlertLayer*, bool>::func(&MPLobbyLayer::FLAlert_Clicked), this);
	using FunctionType = decltype(FLAlert_Clicked(layer, btn2))(*)(MPLobbyLayer*, FLAlertLayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3f4b34, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, layer, btn2);
}

auto MPLobbyLayer::uploadActionFinished(int id, int response) -> decltype(uploadActionFinished(id, response)) {
	auto self = addresser::thunkAdjust(Resolve<int, int>::func(&MPLobbyLayer::uploadActionFinished), this);
	using FunctionType = decltype(uploadActionFinished(id, response))(*)(MPLobbyLayer*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3f4bf0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, id, response);
}

auto MPLobbyLayer::uploadActionFailed(int id, int response) -> decltype(uploadActionFailed(id, response)) {
	auto self = addresser::thunkAdjust(Resolve<int, int>::func(&MPLobbyLayer::uploadActionFailed), this);
	using FunctionType = decltype(uploadActionFailed(id, response))(*)(MPLobbyLayer*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3f4e18, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, id, response);
}

auto MPLobbyLayer::onClosePopup(UploadActionPopup* popup) -> decltype(onClosePopup(popup)) {
	auto self = addresser::thunkAdjust(Resolve<UploadActionPopup*>::func(&MPLobbyLayer::onClosePopup), this);
	using FunctionType = decltype(onClosePopup(popup))(*)(MPLobbyLayer*, UploadActionPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3f4fd0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, popup);
}

auto MPLobbyLayer::init(int type) -> decltype(init(type)) {
	using FunctionType = decltype(init(type))(*)(MPLobbyLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3f40f8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, type);
}

auto MPLobbyLayer::onBack(cocos2d::CCObject* sender) -> decltype(onBack(sender)) {
	using FunctionType = decltype(onBack(sender))(*)(MPLobbyLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3f445c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto MPLobbyLayer::onBtn1(cocos2d::CCObject* sender) -> decltype(onBtn1(sender)) {
	using FunctionType = decltype(onBtn1(sender))(*)(MPLobbyLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3f4180, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto MPLobbyLayer::onBtn2(cocos2d::CCObject* sender) -> decltype(onBtn2(sender)) {
	using FunctionType = decltype(onBtn2(sender))(*)(MPLobbyLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3f427c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto MPLobbyLayer::onBtn3(cocos2d::CCObject* sender) -> decltype(onBtn3(sender)) {
	using FunctionType = decltype(onBtn3(sender))(*)(MPLobbyLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3f4280, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto MPLobbyLayer::onComment(cocos2d::CCObject* sender) -> decltype(onComment(sender)) {
	using FunctionType = decltype(onComment(sender))(*)(MPLobbyLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3f4284, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto MPLobbyLayer::onUpdateLobby() -> decltype(onUpdateLobby()) {
	using FunctionType = decltype(onUpdateLobby())(*)(MPLobbyLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3f4150, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto MPLobbyLayer::postComment() -> decltype(postComment()) {
	using FunctionType = decltype(postComment())(*)(MPLobbyLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3f4378, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto MPLobbyLayer::tryExitLobby() -> decltype(tryExitLobby()) {
	using FunctionType = decltype(tryExitLobby())(*)(MPLobbyLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3f452c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto MPLobbyLayer::updateLobby(float delay) -> decltype(updateLobby(delay)) {
	using FunctionType = decltype(updateLobby(delay))(*)(MPLobbyLayer*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3f40fc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, delay);
}
