
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
	static auto func = wrapFunction<FunctionType>(base::get() + 0x29f040, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(type);
}

auto MPLobbyLayer::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&MPLobbyLayer::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(MPLobbyLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x48af60, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto MPLobbyLayer::keyDown(cocos2d::enumKeyCodes key, double timestamp) -> decltype(keyDown(key, timestamp)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::enumKeyCodes, double>::func(&MPLobbyLayer::keyDown), this);
	using FunctionType = decltype(keyDown(key, timestamp))(*)(MPLobbyLayer*, cocos2d::enumKeyCodes, double);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x48b760, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, key, timestamp);
}

auto MPLobbyLayer::joinLobbyFinished(int id) -> decltype(joinLobbyFinished(id)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&MPLobbyLayer::joinLobbyFinished), this);
	using FunctionType = decltype(joinLobbyFinished(id))(*)(MPLobbyLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x48b0e0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, id);
}

auto MPLobbyLayer::joinLobbyFailed(int id, GJMPErrorCode errorType) -> decltype(joinLobbyFailed(id, errorType)) {
	auto self = addresser::thunkAdjust(Resolve<int, GJMPErrorCode>::func(&MPLobbyLayer::joinLobbyFailed), this);
	using FunctionType = decltype(joinLobbyFailed(id, errorType))(*)(MPLobbyLayer*, int, GJMPErrorCode);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x48b590, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, id, errorType);
}

auto MPLobbyLayer::updateComments() -> decltype(updateComments()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&MPLobbyLayer::updateComments), this);
	using FunctionType = decltype(updateComments())(*)(MPLobbyLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x48b440, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto MPLobbyLayer::didUploadMPComment(int id) -> decltype(didUploadMPComment(id)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&MPLobbyLayer::didUploadMPComment), this);
	using FunctionType = decltype(didUploadMPComment(id))(*)(MPLobbyLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x48b570, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, id);
}

auto MPLobbyLayer::textInputOpened(CCTextInputNode* node) -> decltype(textInputOpened(node)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&MPLobbyLayer::textInputOpened), this);
	using FunctionType = decltype(textInputOpened(node))(*)(MPLobbyLayer*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x48b690, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, node);
}

auto MPLobbyLayer::textInputClosed(CCTextInputNode* node) -> decltype(textInputClosed(node)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&MPLobbyLayer::textInputClosed), this);
	using FunctionType = decltype(textInputClosed(node))(*)(MPLobbyLayer*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x48b6b0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, node);
}

auto MPLobbyLayer::textChanged(CCTextInputNode* node) -> decltype(textChanged(node)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&MPLobbyLayer::textChanged), this);
	using FunctionType = decltype(textChanged(node))(*)(MPLobbyLayer*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x48b6d0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, node);
}

auto MPLobbyLayer::keyUp(cocos2d::enumKeyCodes key, double timestamp) -> decltype(keyUp(key, timestamp)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::enumKeyCodes, double>::func(&MPLobbyLayer::keyUp), this);
	using FunctionType = decltype(keyUp(key, timestamp))(*)(MPLobbyLayer*, cocos2d::enumKeyCodes, double);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x48b7a0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, key, timestamp);
}

auto MPLobbyLayer::FLAlert_Clicked(FLAlertLayer* layer, bool btn2) -> decltype(FLAlert_Clicked(layer, btn2)) {
	auto self = addresser::thunkAdjust(Resolve<FLAlertLayer*, bool>::func(&MPLobbyLayer::FLAlert_Clicked), this);
	using FunctionType = decltype(FLAlert_Clicked(layer, btn2))(*)(MPLobbyLayer*, FLAlertLayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x48b6f0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, layer, btn2);
}

auto MPLobbyLayer::uploadActionFinished(int id, int response) -> decltype(uploadActionFinished(id, response)) {
	auto self = addresser::thunkAdjust(Resolve<int, int>::func(&MPLobbyLayer::uploadActionFinished), this);
	using FunctionType = decltype(uploadActionFinished(id, response))(*)(MPLobbyLayer*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x48b7c0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, id, response);
}

auto MPLobbyLayer::uploadActionFailed(int id, int response) -> decltype(uploadActionFailed(id, response)) {
	auto self = addresser::thunkAdjust(Resolve<int, int>::func(&MPLobbyLayer::uploadActionFailed), this);
	using FunctionType = decltype(uploadActionFailed(id, response))(*)(MPLobbyLayer*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x48b9e0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, id, response);
}

auto MPLobbyLayer::onClosePopup(UploadActionPopup* popup) -> decltype(onClosePopup(popup)) {
	auto self = addresser::thunkAdjust(Resolve<UploadActionPopup*>::func(&MPLobbyLayer::onClosePopup), this);
	using FunctionType = decltype(onClosePopup(popup))(*)(MPLobbyLayer*, UploadActionPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x48bb90, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, popup);
}

auto MPLobbyLayer::init(int type) -> decltype(init(type)) {
	using FunctionType = decltype(init(type))(*)(MPLobbyLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x48abf0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, type);
}

auto MPLobbyLayer::onBack(cocos2d::CCObject* sender) -> decltype(onBack(sender)) {
	using FunctionType = decltype(onBack(sender))(*)(MPLobbyLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x48af20, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto MPLobbyLayer::onBtn1(cocos2d::CCObject* sender) -> decltype(onBtn1(sender)) {
	using FunctionType = decltype(onBtn1(sender))(*)(MPLobbyLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x48ac80, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto MPLobbyLayer::onBtn2(cocos2d::CCObject* sender) -> decltype(onBtn2(sender)) {
	using FunctionType = decltype(onBtn2(sender))(*)(MPLobbyLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x48ad80, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto MPLobbyLayer::onBtn3(cocos2d::CCObject* sender) -> decltype(onBtn3(sender)) {
	using FunctionType = decltype(onBtn3(sender))(*)(MPLobbyLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x48ad90, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto MPLobbyLayer::onComment(cocos2d::CCObject* sender) -> decltype(onComment(sender)) {
	using FunctionType = decltype(onComment(sender))(*)(MPLobbyLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x48ada0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto MPLobbyLayer::onUpdateLobby() -> decltype(onUpdateLobby()) {
	using FunctionType = decltype(onUpdateLobby())(*)(MPLobbyLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x48ac50, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto MPLobbyLayer::postComment() -> decltype(postComment()) {
	using FunctionType = decltype(postComment())(*)(MPLobbyLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x48ae40, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto MPLobbyLayer::tryExitLobby() -> decltype(tryExitLobby()) {
	using FunctionType = decltype(tryExitLobby())(*)(MPLobbyLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x48aff0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto MPLobbyLayer::updateLobby(float delay) -> decltype(updateLobby(delay)) {
	using FunctionType = decltype(updateLobby(delay))(*)(MPLobbyLayer*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x48ac00, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, delay);
}
