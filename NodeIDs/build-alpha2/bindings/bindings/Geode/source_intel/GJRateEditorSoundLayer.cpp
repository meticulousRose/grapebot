
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/GJRateEditorSoundLayer.hpp>
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

auto GJRateEditorSoundLayer::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCObject*>::func(&GJRateEditorSoundLayer::onClose), this);
	using FunctionType = decltype(onClose(sender))(*)(GJRateEditorSoundLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x509ca0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, sender);
}

auto GJRateEditorSoundLayer::onCustomButton(cocos2d::CCObject* sender) -> decltype(onCustomButton(sender)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCObject*>::func(&GJRateEditorSoundLayer::onCustomButton), this);
	using FunctionType = decltype(onCustomButton(sender))(*)(GJRateEditorSoundLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5096a0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, sender);
}

auto GJRateEditorSoundLayer::uploadActionFinished(int p0, int p1) -> decltype(uploadActionFinished(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<int, int>::func(&GJRateEditorSoundLayer::uploadActionFinished), this);
	using FunctionType = decltype(uploadActionFinished(p0, p1))(*)(GJRateEditorSoundLayer*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x509990, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto GJRateEditorSoundLayer::uploadActionFailed(int p0, int p1) -> decltype(uploadActionFailed(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<int, int>::func(&GJRateEditorSoundLayer::uploadActionFailed), this);
	using FunctionType = decltype(uploadActionFailed(p0, p1))(*)(GJRateEditorSoundLayer*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x509a90, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto GJRateEditorSoundLayer::onClosePopup(UploadActionPopup* p0) -> decltype(onClosePopup(p0)) {
	auto self = addresser::thunkAdjust(Resolve<UploadActionPopup*>::func(&GJRateEditorSoundLayer::onClosePopup), this);
	using FunctionType = decltype(onClosePopup(p0))(*)(GJRateEditorSoundLayer*, UploadActionPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x509c00, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto GJRateEditorSoundLayer::FLAlert_Clicked(FLAlertLayer* p0, bool p1) -> decltype(FLAlert_Clicked(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<FLAlertLayer*, bool>::func(&GJRateEditorSoundLayer::FLAlert_Clicked), this);
	using FunctionType = decltype(FLAlert_Clicked(p0, p1))(*)(GJRateEditorSoundLayer*, FLAlertLayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x509880, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}
