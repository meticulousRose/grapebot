
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/GJRateLevelListLayer.hpp>
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

auto GJRateLevelListLayer::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GJRateLevelListLayer::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(GJRateLevelListLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x465684, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GJRateLevelListLayer::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCObject*>::func(&GJRateLevelListLayer::onClose), this);
	using FunctionType = decltype(onClose(sender))(*)(GJRateLevelListLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x464770, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, sender);
}

auto GJRateLevelListLayer::onCustomButton(cocos2d::CCObject* sender) -> decltype(onCustomButton(sender)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCObject*>::func(&GJRateLevelListLayer::onCustomButton), this);
	using FunctionType = decltype(onCustomButton(sender))(*)(GJRateLevelListLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x464174, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, sender);
}

auto GJRateLevelListLayer::valueDidChange(int p0, float p1) -> decltype(valueDidChange(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<int, float>::func(&GJRateLevelListLayer::valueDidChange), this);
	using FunctionType = decltype(valueDidChange(p0, p1))(*)(GJRateLevelListLayer*, int, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x464160, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto GJRateLevelListLayer::uploadActionFinished(int p0, int p1) -> decltype(uploadActionFinished(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<int, int>::func(&GJRateLevelListLayer::uploadActionFinished), this);
	using FunctionType = decltype(uploadActionFinished(p0, p1))(*)(GJRateLevelListLayer*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x464418, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto GJRateLevelListLayer::uploadActionFailed(int p0, int p1) -> decltype(uploadActionFailed(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<int, int>::func(&GJRateLevelListLayer::uploadActionFailed), this);
	using FunctionType = decltype(uploadActionFailed(p0, p1))(*)(GJRateLevelListLayer*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x464568, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto GJRateLevelListLayer::onClosePopup(UploadActionPopup* p0) -> decltype(onClosePopup(p0)) {
	auto self = addresser::thunkAdjust(Resolve<UploadActionPopup*>::func(&GJRateLevelListLayer::onClosePopup), this);
	using FunctionType = decltype(onClosePopup(p0))(*)(GJRateLevelListLayer*, UploadActionPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4646d0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto GJRateLevelListLayer::FLAlert_Clicked(FLAlertLayer* p0, bool p1) -> decltype(FLAlert_Clicked(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<FLAlertLayer*, bool>::func(&GJRateLevelListLayer::FLAlert_Clicked), this);
	using FunctionType = decltype(FLAlert_Clicked(p0, p1))(*)(GJRateLevelListLayer*, FLAlertLayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x46433c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}
