
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/SetupPortalPopup.hpp>
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

auto SetupPortalPopup::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&SetupPortalPopup::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(SetupPortalPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4ecdfc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto SetupPortalPopup::determineStartValues() -> decltype(determineStartValues()) {
	using FunctionType = decltype(determineStartValues())(*)(SetupPortalPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4ec6ec, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SetupPortalPopup::init(EffectGameObject* object, cocos2d::CCArray* objects) -> decltype(init(object, objects)) {
	using FunctionType = decltype(init(object, objects))(*)(SetupPortalPopup*, EffectGameObject*, cocos2d::CCArray*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4ebe00, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, object, objects);
}

auto SetupPortalPopup::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	using FunctionType = decltype(onClose(sender))(*)(SetupPortalPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4ec698, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetupPortalPopup::updateCameraEasing() -> decltype(updateCameraEasing()) {
	using FunctionType = decltype(updateCameraEasing())(*)(SetupPortalPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4ecd14, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SetupPortalPopup::updateCameraPadding() -> decltype(updateCameraPadding()) {
	using FunctionType = decltype(updateCameraPadding())(*)(SetupPortalPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4ecd8c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SetupPortalPopup::updateCameraPaddingLabel() -> decltype(updateCameraPaddingLabel()) {
	using FunctionType = decltype(updateCameraPaddingLabel())(*)(SetupPortalPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4ecc28, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SetupPortalPopup::updateItemVisibility() -> decltype(updateItemVisibility()) {
	using FunctionType = decltype(updateItemVisibility())(*)(SetupPortalPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4ecc78, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}
