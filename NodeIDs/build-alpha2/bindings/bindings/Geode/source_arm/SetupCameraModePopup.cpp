
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/SetupCameraModePopup.hpp>
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

auto SetupCameraModePopup::determineStartValues() -> decltype(determineStartValues()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&SetupCameraModePopup::determineStartValues), this);
	using FunctionType = decltype(determineStartValues())(*)(SetupCameraModePopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x40a2a8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto SetupCameraModePopup::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCObject*>::func(&SetupCameraModePopup::onClose), this);
	using FunctionType = decltype(onClose(sender))(*)(SetupCameraModePopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x40a554, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, sender);
}

auto SetupCameraModePopup::init(EffectGameObject* object, cocos2d::CCArray* objects) -> decltype(init(object, objects)) {
	using FunctionType = decltype(init(object, objects))(*)(SetupCameraModePopup*, EffectGameObject*, cocos2d::CCArray*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4095c0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, object, objects);
}

auto SetupCameraModePopup::updateCameraEasing() -> decltype(updateCameraEasing()) {
	using FunctionType = decltype(updateCameraEasing())(*)(SetupCameraModePopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x40a46c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SetupCameraModePopup::updateCameraPadding() -> decltype(updateCameraPadding()) {
	using FunctionType = decltype(updateCameraPadding())(*)(SetupCameraModePopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x40a4e4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SetupCameraModePopup::updateCameraPaddingLabel() -> decltype(updateCameraPaddingLabel()) {
	using FunctionType = decltype(updateCameraPaddingLabel())(*)(SetupCameraModePopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x40a1bc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SetupCameraModePopup::updateItemVisibility() -> decltype(updateItemVisibility()) {
	using FunctionType = decltype(updateItemVisibility())(*)(SetupCameraModePopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x40a20c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}
