
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/SetupCameraEdgePopup.hpp>
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

auto SetupCameraEdgePopup::determineStartValues() -> decltype(determineStartValues()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&SetupCameraEdgePopup::determineStartValues), this);
	using FunctionType = decltype(determineStartValues())(*)(SetupCameraEdgePopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x649170, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto SetupCameraEdgePopup::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCObject*>::func(&SetupCameraEdgePopup::onClose), this);
	using FunctionType = decltype(onClose(sender))(*)(SetupCameraEdgePopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x649410, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, sender);
}

auto SetupCameraEdgePopup::textChanged(CCTextInputNode* node) -> decltype(textChanged(node)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&SetupCameraEdgePopup::textChanged), this);
	using FunctionType = decltype(textChanged(node))(*)(SetupCameraEdgePopup*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x649300, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, node);
}

auto SetupCameraEdgePopup::onCameraEdge(cocos2d::CCObject* sender) -> decltype(onCameraEdge(sender)) {
	using FunctionType = decltype(onCameraEdge(sender))(*)(SetupCameraEdgePopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x648fa0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetupCameraEdgePopup::onUnlockEdge(cocos2d::CCObject* sender) -> decltype(onUnlockEdge(sender)) {
	using FunctionType = decltype(onUnlockEdge(sender))(*)(SetupCameraEdgePopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x6490d0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetupCameraEdgePopup::updateTargetID() -> decltype(updateTargetID()) {
	using FunctionType = decltype(updateTargetID())(*)(SetupCameraEdgePopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x649260, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}
