#include <Geode/cocos/cocoa/CCObject.h>

#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/GJRateLevelLayer.hpp>
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

GJRateLevelLayer::~GJRateLevelLayer() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(GJRateLevelLayer*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x22b500, tulip::hook::TulipConvention::Default);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) GJRateLevelLayer(geode::CutoffConstructor, sizeof(GJRateLevelLayer));
		geode::DestructorLock::addLock(this);
	}
}

auto GJRateLevelLayer::create(GJGameLevel* level) -> decltype(create(level)) {
	using FunctionType = decltype(create(level))(*)(GJGameLevel*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x24247c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(level);
}

auto GJRateLevelLayer::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GJRateLevelLayer::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(GJRateLevelLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x462afc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GJRateLevelLayer::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCObject*>::func(&GJRateLevelLayer::onClose), this);
	using FunctionType = decltype(onClose(sender))(*)(GJRateLevelLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x462af8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, sender);
}

auto GJRateLevelLayer::onCustomButton(cocos2d::CCObject* sender) -> decltype(onCustomButton(sender)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCObject*>::func(&GJRateLevelLayer::onCustomButton), this);
	using FunctionType = decltype(onCustomButton(sender))(*)(GJRateLevelLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4611a0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, sender);
}

auto GJRateLevelLayer::uploadActionFinished(int id, int response) -> decltype(uploadActionFinished(id, response)) {
	auto self = addresser::thunkAdjust(Resolve<int, int>::func(&GJRateLevelLayer::uploadActionFinished), this);
	using FunctionType = decltype(uploadActionFinished(id, response))(*)(GJRateLevelLayer*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x462788, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, id, response);
}

auto GJRateLevelLayer::uploadActionFailed(int id, int response) -> decltype(uploadActionFailed(id, response)) {
	auto self = addresser::thunkAdjust(Resolve<int, int>::func(&GJRateLevelLayer::uploadActionFailed), this);
	using FunctionType = decltype(uploadActionFailed(id, response))(*)(GJRateLevelLayer*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4628e0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, id, response);
}

auto GJRateLevelLayer::onClosePopup(UploadActionPopup* popup) -> decltype(onClosePopup(popup)) {
	auto self = addresser::thunkAdjust(Resolve<UploadActionPopup*>::func(&GJRateLevelLayer::onClosePopup), this);
	using FunctionType = decltype(onClosePopup(popup))(*)(GJRateLevelLayer*, UploadActionPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x462a58, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, popup);
}

auto GJRateLevelLayer::rateInfoFinished(int id, std::string info) -> decltype(rateInfoFinished(id, info)) {
	auto self = addresser::thunkAdjust(Resolve<int, std::string>::func(&GJRateLevelLayer::rateInfoFinished), this);
	using FunctionType = decltype(rateInfoFinished(id, info))(*)(GJRateLevelLayer*, int, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x46265c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, id, info);
}

auto GJRateLevelLayer::rateInfoFailed(int id, int response) -> decltype(rateInfoFailed(id, response)) {
	auto self = addresser::thunkAdjust(Resolve<int, int>::func(&GJRateLevelLayer::rateInfoFailed), this);
	using FunctionType = decltype(rateInfoFailed(id, response))(*)(GJRateLevelLayer*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x462728, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, id, response);
}

auto GJRateLevelLayer::FLAlert_Clicked(FLAlertLayer* layer, bool btn2) -> decltype(FLAlert_Clicked(layer, btn2)) {
	auto self = addresser::thunkAdjust(Resolve<FLAlertLayer*, bool>::func(&GJRateLevelLayer::FLAlert_Clicked), this);
	using FunctionType = decltype(FLAlert_Clicked(layer, btn2))(*)(GJRateLevelLayer*, FLAlertLayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x46136c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, layer, btn2);
}

auto GJRateLevelLayer::onFeature(cocos2d::CCObject* sender) -> decltype(onFeature(sender)) {
	using FunctionType = decltype(onFeature(sender))(*)(GJRateLevelLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x46106c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto GJRateLevelLayer::onRate(cocos2d::CCObject* sender) -> decltype(onRate(sender)) {
	using FunctionType = decltype(onRate(sender))(*)(GJRateLevelLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4610bc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto GJRateLevelLayer::setupRateInfo(std::string info) -> decltype(setupRateInfo(info)) {
	using FunctionType = decltype(setupRateInfo(info))(*)(GJRateLevelLayer*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x461454, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, info);
}
