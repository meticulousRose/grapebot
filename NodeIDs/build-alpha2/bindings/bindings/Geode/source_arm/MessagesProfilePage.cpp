
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/MessagesProfilePage.hpp>
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

auto MessagesProfilePage::registerWithTouchDispatcher() -> decltype(registerWithTouchDispatcher()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&MessagesProfilePage::registerWithTouchDispatcher), this);
	using FunctionType = decltype(registerWithTouchDispatcher())(*)(MessagesProfilePage*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1c2c34, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto MessagesProfilePage::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&MessagesProfilePage::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(MessagesProfilePage*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1c2c28, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto MessagesProfilePage::FLAlert_Clicked(FLAlertLayer* layer, bool btn2) -> decltype(FLAlert_Clicked(layer, btn2)) {
	auto self = addresser::thunkAdjust(Resolve<FLAlertLayer*, bool>::func(&MessagesProfilePage::FLAlert_Clicked), this);
	using FunctionType = decltype(FLAlert_Clicked(layer, btn2))(*)(MessagesProfilePage*, FLAlertLayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1c27a0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, layer, btn2);
}

auto MessagesProfilePage::onClosePopup(UploadActionPopup* popup) -> decltype(onClosePopup(popup)) {
	auto self = addresser::thunkAdjust(Resolve<UploadActionPopup*>::func(&MessagesProfilePage::onClosePopup), this);
	using FunctionType = decltype(onClosePopup(popup))(*)(MessagesProfilePage*, UploadActionPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1c2830, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, popup);
}

auto MessagesProfilePage::uploadActionFinished(int id, int response) -> decltype(uploadActionFinished(id, response)) {
	auto self = addresser::thunkAdjust(Resolve<int, int>::func(&MessagesProfilePage::uploadActionFinished), this);
	using FunctionType = decltype(uploadActionFinished(id, response))(*)(MessagesProfilePage*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1c28b8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, id, response);
}

auto MessagesProfilePage::uploadActionFailed(int id, int response) -> decltype(uploadActionFailed(id, response)) {
	auto self = addresser::thunkAdjust(Resolve<int, int>::func(&MessagesProfilePage::uploadActionFailed), this);
	using FunctionType = decltype(uploadActionFailed(id, response))(*)(MessagesProfilePage*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1c2a78, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, id, response);
}

auto MessagesProfilePage::loadMessagesFinished(cocos2d::CCArray* messages, char const* key) -> decltype(loadMessagesFinished(messages, key)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCArray*, char const*>::func(&MessagesProfilePage::loadMessagesFinished), this);
	using FunctionType = decltype(loadMessagesFinished(messages, key))(*)(MessagesProfilePage*, cocos2d::CCArray*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1c2ed8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, messages, key);
}

auto MessagesProfilePage::loadMessagesFailed(char const* key, GJErrorCode errorType) -> decltype(loadMessagesFailed(key, errorType)) {
	auto self = addresser::thunkAdjust(Resolve<char const*, GJErrorCode>::func(&MessagesProfilePage::loadMessagesFailed), this);
	using FunctionType = decltype(loadMessagesFailed(key, errorType))(*)(MessagesProfilePage*, char const*, GJErrorCode);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1c3000, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, key, errorType);
}

auto MessagesProfilePage::forceReloadMessages(bool sent) -> decltype(forceReloadMessages(sent)) {
	auto self = addresser::thunkAdjust(Resolve<bool>::func(&MessagesProfilePage::forceReloadMessages), this);
	using FunctionType = decltype(forceReloadMessages(sent))(*)(MessagesProfilePage*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1c314c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, sent);
}

auto MessagesProfilePage::setupPageInfo(std::string info, char const* key) -> decltype(setupPageInfo(info, key)) {
	auto self = addresser::thunkAdjust(Resolve<std::string, char const*>::func(&MessagesProfilePage::setupPageInfo), this);
	using FunctionType = decltype(setupPageInfo(info, key))(*)(MessagesProfilePage*, std::string, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1c3180, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, info, key);
}

auto MessagesProfilePage::deleteSelected() -> decltype(deleteSelected()) {
	using FunctionType = decltype(deleteSelected())(*)(MessagesProfilePage*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1c25d4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto MessagesProfilePage::init(bool sent) -> decltype(init(sent)) {
	using FunctionType = decltype(init(sent))(*)(MessagesProfilePage*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1c11fc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sent);
}

auto MessagesProfilePage::onSentMessages(cocos2d::CCObject* sender) -> decltype(onSentMessages(sender)) {
	using FunctionType = decltype(onSentMessages(sender))(*)(MessagesProfilePage*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x80bc5c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto MessagesProfilePage::setupCommentsBrowser(cocos2d::CCArray* messages) -> decltype(setupCommentsBrowser(messages)) {
	using FunctionType = decltype(setupCommentsBrowser(messages))(*)(MessagesProfilePage*, cocos2d::CCArray*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1c2d74, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, messages);
}

auto MessagesProfilePage::updateLevelsLabel() -> decltype(updateLevelsLabel()) {
	using FunctionType = decltype(updateLevelsLabel())(*)(MessagesProfilePage*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x78a294, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto MessagesProfilePage::updatePageArrows() -> decltype(updatePageArrows()) {
	using FunctionType = decltype(updatePageArrows())(*)(MessagesProfilePage*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1c3720, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}
