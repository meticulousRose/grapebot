
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/PlatformerControlsPopup.hpp>
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

auto PlatformerControlsPopup::update(float dt) -> decltype(update(dt)) {
	auto self = addresser::thunkAdjust(Resolve<float>::func(&PlatformerControlsPopup::update), this);
	using FunctionType = decltype(update(dt))(*)(PlatformerControlsPopup*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x83d908, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, dt);
}

auto PlatformerControlsPopup::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCObject*>::func(&PlatformerControlsPopup::onClose), this);
	using FunctionType = decltype(onClose(sender))(*)(PlatformerControlsPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x83dbfc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, sender);
}

auto PlatformerControlsPopup::uploadActionFinished(int p0, int p1) -> decltype(uploadActionFinished(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<int, int>::func(&PlatformerControlsPopup::uploadActionFinished), this);
	using FunctionType = decltype(uploadActionFinished(p0, p1))(*)(PlatformerControlsPopup*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x83dc5c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto PlatformerControlsPopup::uploadActionFailed(int p0, int p1) -> decltype(uploadActionFailed(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<int, int>::func(&PlatformerControlsPopup::uploadActionFailed), this);
	using FunctionType = decltype(uploadActionFailed(p0, p1))(*)(PlatformerControlsPopup*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x83de4c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto PlatformerControlsPopup::onClosePopup(UploadActionPopup* p0) -> decltype(onClosePopup(p0)) {
	auto self = addresser::thunkAdjust(Resolve<UploadActionPopup*>::func(&PlatformerControlsPopup::onClosePopup), this);
	using FunctionType = decltype(onClosePopup(p0))(*)(PlatformerControlsPopup*, UploadActionPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x83e00c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto PlatformerControlsPopup::onLevelControlsRefreshed(int p0, int p1) -> decltype(onLevelControlsRefreshed(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<int, int>::func(&PlatformerControlsPopup::onLevelControlsRefreshed), this);
	using FunctionType = decltype(onLevelControlsRefreshed(p0, p1))(*)(PlatformerControlsPopup*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x83d94c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto PlatformerControlsPopup::FLAlert_Clicked(FLAlertLayer* p0, bool p1) -> decltype(FLAlert_Clicked(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<FLAlertLayer*, bool>::func(&PlatformerControlsPopup::FLAlert_Clicked), this);
	using FunctionType = decltype(FLAlert_Clicked(p0, p1))(*)(PlatformerControlsPopup*, FLAlertLayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x83df28, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}
