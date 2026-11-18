
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/AccountRegisterLayer.hpp>
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

auto AccountRegisterLayer::init() -> decltype(init()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&AccountRegisterLayer::init), this);
	using FunctionType = decltype(init())(*)(AccountRegisterLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3f56d4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto AccountRegisterLayer::registerWithTouchDispatcher() -> decltype(registerWithTouchDispatcher()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&AccountRegisterLayer::registerWithTouchDispatcher), this);
	using FunctionType = decltype(registerWithTouchDispatcher())(*)(AccountRegisterLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3f8cfc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto AccountRegisterLayer::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&AccountRegisterLayer::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(AccountRegisterLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3f8af8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto AccountRegisterLayer::FLAlert_Clicked(FLAlertLayer* layer, bool btn2) -> decltype(FLAlert_Clicked(layer, btn2)) {
	auto self = addresser::thunkAdjust(Resolve<FLAlertLayer*, bool>::func(&AccountRegisterLayer::FLAlert_Clicked), this);
	using FunctionType = decltype(FLAlert_Clicked(layer, btn2))(*)(AccountRegisterLayer*, FLAlertLayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3f7838, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, layer, btn2);
}

auto AccountRegisterLayer::textInputOpened(CCTextInputNode* node) -> decltype(textInputOpened(node)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&AccountRegisterLayer::textInputOpened), this);
	using FunctionType = decltype(textInputOpened(node))(*)(AccountRegisterLayer*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3f9390, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, node);
}

auto AccountRegisterLayer::textInputClosed(CCTextInputNode* node) -> decltype(textInputClosed(node)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&AccountRegisterLayer::textInputClosed), this);
	using FunctionType = decltype(textInputClosed(node))(*)(AccountRegisterLayer*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3f8d34, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, node);
}

auto AccountRegisterLayer::textChanged(CCTextInputNode* node) -> decltype(textChanged(node)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&AccountRegisterLayer::textChanged), this);
	using FunctionType = decltype(textChanged(node))(*)(AccountRegisterLayer*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3f9398, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, node);
}

auto AccountRegisterLayer::allowTextInput(CCTextInputNode* node) -> decltype(allowTextInput(node)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&AccountRegisterLayer::allowTextInput), this);
	using FunctionType = decltype(allowTextInput(node))(*)(AccountRegisterLayer*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3f97c0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, node);
}

auto AccountRegisterLayer::registerAccountFinished() -> decltype(registerAccountFinished()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&AccountRegisterLayer::registerAccountFinished), this);
	using FunctionType = decltype(registerAccountFinished())(*)(AccountRegisterLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3f6f78, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto AccountRegisterLayer::registerAccountFailed(AccountError errorType) -> decltype(registerAccountFailed(errorType)) {
	auto self = addresser::thunkAdjust(Resolve<AccountError>::func(&AccountRegisterLayer::registerAccountFailed), this);
	using FunctionType = decltype(registerAccountFailed(errorType))(*)(AccountRegisterLayer*, AccountError);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3f7110, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, errorType);
}

auto AccountRegisterLayer::createTextBackground(cocos2d::CCPoint position, cocos2d::CCSize size) -> decltype(createTextBackground(position, size)) {
	using FunctionType = decltype(createTextBackground(position, size))(*)(AccountRegisterLayer*, cocos2d::CCPoint, cocos2d::CCSize);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3f6cc0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, position, size);
}

auto AccountRegisterLayer::createTextInput(cocos2d::CCPoint position, cocos2d::CCSize size, std::string text, int tag) -> decltype(createTextInput(position, size, text, tag)) {
	using FunctionType = decltype(createTextInput(position, size, text, tag))(*)(AccountRegisterLayer*, cocos2d::CCPoint, cocos2d::CCSize, std::string, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3f6e78, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, position, size, text, tag);
}

auto AccountRegisterLayer::createTextLabel(cocos2d::CCPoint position, std::string text, cocos2d::CCSize size) -> decltype(createTextLabel(position, text, size)) {
	using FunctionType = decltype(createTextLabel(position, text, size))(*)(AccountRegisterLayer*, cocos2d::CCPoint, std::string, cocos2d::CCSize);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3f6d84, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, position, text, size);
}

auto AccountRegisterLayer::disableNodes() -> decltype(disableNodes()) {
	using FunctionType = decltype(disableNodes())(*)(AccountRegisterLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3f79cc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto AccountRegisterLayer::hideLoadingUI() -> decltype(hideLoadingUI()) {
	using FunctionType = decltype(hideLoadingUI())(*)(AccountRegisterLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3f73fc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto AccountRegisterLayer::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	using FunctionType = decltype(onClose(sender))(*)(AccountRegisterLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3f65d4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto AccountRegisterLayer::resetLabel(int tag) -> decltype(resetLabel(tag)) {
	using FunctionType = decltype(resetLabel(tag))(*)(AccountRegisterLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3f76ec, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, tag);
}

auto AccountRegisterLayer::resetLabels() -> decltype(resetLabels()) {
	using FunctionType = decltype(resetLabels())(*)(AccountRegisterLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3f75a0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto AccountRegisterLayer::showLoadingUI() -> decltype(showLoadingUI()) {
	using FunctionType = decltype(showLoadingUI())(*)(AccountRegisterLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3f89c8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto AccountRegisterLayer::toggleUI(bool enable) -> decltype(toggleUI(enable)) {
	using FunctionType = decltype(toggleUI(enable))(*)(AccountRegisterLayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3f8c44, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, enable);
}

auto AccountRegisterLayer::validEmail(std::string email) -> decltype(validEmail(email)) {
	using FunctionType = decltype(validEmail(email))(*)(AccountRegisterLayer*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3f8908, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, email);
}

auto AccountRegisterLayer::validUser(std::string username) -> decltype(validUser(username)) {
	using FunctionType = decltype(validUser(username))(*)(AccountRegisterLayer*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3f8714, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, username);
}
