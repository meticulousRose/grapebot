
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/SetupObjectOptionsPopup.hpp>
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

auto SetupObjectOptionsPopup::keyDown(cocos2d::enumKeyCodes p0, double p1) -> decltype(keyDown(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::enumKeyCodes, double>::func(&SetupObjectOptionsPopup::keyDown), this);
	using FunctionType = decltype(keyDown(p0, p1))(*)(SetupObjectOptionsPopup*, cocos2d::enumKeyCodes, double);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x299858, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto SetupObjectOptionsPopup::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&SetupObjectOptionsPopup::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(SetupObjectOptionsPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x299834, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto SetupObjectOptionsPopup::show() -> decltype(show()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&SetupObjectOptionsPopup::show), this);
	using FunctionType = decltype(show())(*)(SetupObjectOptionsPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2998f0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto SetupObjectOptionsPopup::determineStartValues() -> decltype(determineStartValues()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&SetupObjectOptionsPopup::determineStartValues), this);
	using FunctionType = decltype(determineStartValues())(*)(SetupObjectOptionsPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x299584, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto SetupObjectOptionsPopup::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCObject*>::func(&SetupObjectOptionsPopup::onClose), this);
	using FunctionType = decltype(onClose(sender))(*)(SetupObjectOptionsPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x29993c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, sender);
}

auto SetupObjectOptionsPopup::handleAction(int p0, bool p1, double p2) -> decltype(handleAction(p0, p1, p2)) {
	auto self = addresser::thunkAdjust(Resolve<int, bool, double>::func(&SetupObjectOptionsPopup::handleAction), this);
	using FunctionType = decltype(handleAction(p0, p1, p2))(*)(SetupObjectOptionsPopup*, int, bool, double);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x299864, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1, p2);
}

auto SetupObjectOptionsPopup::init(GameObject* object, cocos2d::CCArray* objects) -> decltype(init(object, objects)) {
	using FunctionType = decltype(init(object, objects))(*)(SetupObjectOptionsPopup*, GameObject*, cocos2d::CCArray*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x296ee0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, object, objects);
}

auto SetupObjectOptionsPopup::onCenterEffect(cocos2d::CCObject* sender) -> decltype(onCenterEffect(sender)) {
	using FunctionType = decltype(onCenterEffect(sender))(*)(SetupObjectOptionsPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x298fdc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetupObjectOptionsPopup::onDisableObject(cocos2d::CCObject* sender) -> decltype(onDisableObject(sender)) {
	using FunctionType = decltype(onDisableObject(sender))(*)(SetupObjectOptionsPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x298d28, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetupObjectOptionsPopup::onDontBoostX(cocos2d::CCObject* sender) -> decltype(onDontBoostX(sender)) {
	using FunctionType = decltype(onDontBoostX(sender))(*)(SetupObjectOptionsPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5d5e10, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetupObjectOptionsPopup::onExtendedCollision(cocos2d::CCObject* sender) -> decltype(onExtendedCollision(sender)) {
	using FunctionType = decltype(onExtendedCollision(sender))(*)(SetupObjectOptionsPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x299058, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetupObjectOptionsPopup::onSinglePlayerTouch(cocos2d::CCObject* sender) -> decltype(onSinglePlayerTouch(sender)) {
	using FunctionType = decltype(onSinglePlayerTouch(sender))(*)(SetupObjectOptionsPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x299378, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetupObjectOptionsPopup::onToggleGroupParent(cocos2d::CCObject* sender) -> decltype(onToggleGroupParent(sender)) {
	using FunctionType = decltype(onToggleGroupParent(sender))(*)(SetupObjectOptionsPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x249930, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}
