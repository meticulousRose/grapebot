
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/CreatorSettingsPopup.hpp>
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

auto CreatorSettingsPopup::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCObject*>::func(&CreatorSettingsPopup::onClose), this);
	using FunctionType = decltype(onClose(sender))(*)(CreatorSettingsPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8b7060, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, sender);
}

auto CreatorSettingsPopup::setTextPopupClosed(SetTextPopup* p0, std::string p1) -> decltype(setTextPopupClosed(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<SetTextPopup*, std::string>::func(&CreatorSettingsPopup::setTextPopupClosed), this);
	using FunctionType = decltype(setTextPopupClosed(p0, p1))(*)(CreatorSettingsPopup*, SetTextPopup*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8b7070, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto CreatorSettingsPopup::uploadActionFinished(int p0, int p1) -> decltype(uploadActionFinished(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<int, int>::func(&CreatorSettingsPopup::uploadActionFinished), this);
	using FunctionType = decltype(uploadActionFinished(p0, p1))(*)(CreatorSettingsPopup*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8b7300, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto CreatorSettingsPopup::uploadActionFailed(int p0, int p1) -> decltype(uploadActionFailed(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<int, int>::func(&CreatorSettingsPopup::uploadActionFailed), this);
	using FunctionType = decltype(uploadActionFailed(p0, p1))(*)(CreatorSettingsPopup*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8b7450, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto CreatorSettingsPopup::onClosePopup(UploadActionPopup* p0) -> decltype(onClosePopup(p0)) {
	auto self = addresser::thunkAdjust(Resolve<UploadActionPopup*>::func(&CreatorSettingsPopup::onClosePopup), this);
	using FunctionType = decltype(onClosePopup(p0))(*)(CreatorSettingsPopup*, UploadActionPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8b7550, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}
