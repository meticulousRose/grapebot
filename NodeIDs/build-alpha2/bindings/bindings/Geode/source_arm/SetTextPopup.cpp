
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/SetTextPopup.hpp>
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

auto SetTextPopup::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&SetTextPopup::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(SetTextPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x23f7cc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto SetTextPopup::show() -> decltype(show()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&SetTextPopup::show), this);
	using FunctionType = decltype(show())(*)(SetTextPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x23f580, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto SetTextPopup::textInputClosed(CCTextInputNode* node) -> decltype(textInputClosed(node)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&SetTextPopup::textInputClosed), this);
	using FunctionType = decltype(textInputClosed(node))(*)(SetTextPopup*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x23ef8c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, node);
}

auto SetTextPopup::textChanged(CCTextInputNode* node) -> decltype(textChanged(node)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&SetTextPopup::textChanged), this);
	using FunctionType = decltype(textChanged(node))(*)(SetTextPopup*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x23efa8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, node);
}

auto SetTextPopup::emotePickerClosed(EmotePickerPopup* p0) -> decltype(emotePickerClosed(p0)) {
	auto self = addresser::thunkAdjust(Resolve<EmotePickerPopup*>::func(&SetTextPopup::emotePickerClosed), this);
	using FunctionType = decltype(emotePickerClosed(p0))(*)(SetTextPopup*, EmotePickerPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x23f624, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto SetTextPopup::onCancel(cocos2d::CCObject* sender) -> decltype(onCancel(sender)) {
	using FunctionType = decltype(onCancel(sender))(*)(SetTextPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x23eed0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetTextPopup::onResetValue(cocos2d::CCObject* sender) -> decltype(onResetValue(sender)) {
	using FunctionType = decltype(onResetValue(sender))(*)(SetTextPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x23ee04, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}
