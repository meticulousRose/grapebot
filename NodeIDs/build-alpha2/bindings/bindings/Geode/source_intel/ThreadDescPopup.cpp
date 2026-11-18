
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/ThreadDescPopup.hpp>
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

auto ThreadDescPopup::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&ThreadDescPopup::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(ThreadDescPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x953fa0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto ThreadDescPopup::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCObject*>::func(&ThreadDescPopup::onClose), this);
	using FunctionType = decltype(onClose(sender))(*)(ThreadDescPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x953f00, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, sender);
}

auto ThreadDescPopup::textChanged(CCTextInputNode* p0) -> decltype(textChanged(p0)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&ThreadDescPopup::textChanged), this);
	using FunctionType = decltype(textChanged(p0))(*)(ThreadDescPopup*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x953380, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto ThreadDescPopup::emotePicked(EmotePickerPopup* p0, EmoteDef const* p1) -> decltype(emotePicked(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<EmotePickerPopup*, EmoteDef const*>::func(&ThreadDescPopup::emotePicked), this);
	using FunctionType = decltype(emotePicked(p0, p1))(*)(ThreadDescPopup*, EmotePickerPopup*, EmoteDef const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x953550, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto ThreadDescPopup::emotePickerClosed(EmotePickerPopup* p0) -> decltype(emotePickerClosed(p0)) {
	auto self = addresser::thunkAdjust(Resolve<EmotePickerPopup*>::func(&ThreadDescPopup::emotePickerClosed), this);
	using FunctionType = decltype(emotePickerClosed(p0))(*)(ThreadDescPopup*, EmotePickerPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x9535d0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto ThreadDescPopup::threadUpdateFinished(int p0, int p1) -> decltype(threadUpdateFinished(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<int, int>::func(&ThreadDescPopup::threadUpdateFinished), this);
	using FunctionType = decltype(threadUpdateFinished(p0, p1))(*)(ThreadDescPopup*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x9537f0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto ThreadDescPopup::threadUpdateFailed(int p0, int p1) -> decltype(threadUpdateFailed(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<int, int>::func(&ThreadDescPopup::threadUpdateFailed), this);
	using FunctionType = decltype(threadUpdateFailed(p0, p1))(*)(ThreadDescPopup*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x953950, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto ThreadDescPopup::threadMessagesFinished(int p0, cocos2d::CCArray* p1, bool p2) -> decltype(threadMessagesFinished(p0, p1, p2)) {
	auto self = addresser::thunkAdjust(Resolve<int, cocos2d::CCArray*, bool>::func(&ThreadDescPopup::threadMessagesFinished), this);
	using FunctionType = decltype(threadMessagesFinished(p0, p1, p2))(*)(ThreadDescPopup*, int, cocos2d::CCArray*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x953b20, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1, p2);
}

auto ThreadDescPopup::threadMessagesFailed(int p0) -> decltype(threadMessagesFailed(p0)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&ThreadDescPopup::threadMessagesFailed), this);
	using FunctionType = decltype(threadMessagesFailed(p0))(*)(ThreadDescPopup*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x953bd0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto ThreadDescPopup::threadSearchFinished(int p0, cocos2d::CCArray* p1, bool p2) -> decltype(threadSearchFinished(p0, p1, p2)) {
	auto self = addresser::thunkAdjust(Resolve<int, cocos2d::CCArray*, bool>::func(&ThreadDescPopup::threadSearchFinished), this);
	using FunctionType = decltype(threadSearchFinished(p0, p1, p2))(*)(ThreadDescPopup*, int, cocos2d::CCArray*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x953c70, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1, p2);
}

auto ThreadDescPopup::threadSearchFailed(int p0) -> decltype(threadSearchFailed(p0)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&ThreadDescPopup::threadSearchFailed), this);
	using FunctionType = decltype(threadSearchFailed(p0))(*)(ThreadDescPopup*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x953d20, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto ThreadDescPopup::threadSendFailed() -> decltype(threadSendFailed()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&ThreadDescPopup::threadSendFailed), this);
	using FunctionType = decltype(threadSendFailed())(*)(ThreadDescPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x953e60, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto ThreadDescPopup::buildUI(bool p0, std::string const& p1, std::string const& p2) -> decltype(buildUI(p0, p1, p2)) {
	using FunctionType = decltype(buildUI(p0, p1, p2))(*)(ThreadDescPopup*, bool, std::string const&, std::string const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x952390, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1, p2);
}
