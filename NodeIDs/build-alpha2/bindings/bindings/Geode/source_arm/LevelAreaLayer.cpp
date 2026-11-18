
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/LevelAreaLayer.hpp>
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

auto LevelAreaLayer::addTorch(cocos2d::CCNode* parent, cocos2d::CCPoint position, int fireType, float scale, int zOrder, bool noTorch, int colorType, cocos2d::CCArray* nodes) -> decltype(addTorch(parent, position, fireType, scale, zOrder, noTorch, colorType, nodes)) {
	using FunctionType = decltype(addTorch(parent, position, fireType, scale, zOrder, noTorch, colorType, nodes))(*)(cocos2d::CCNode*, cocos2d::CCPoint, int, float, int, bool, int, cocos2d::CCArray*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x20c79c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(parent, position, fireType, scale, zOrder, noTorch, colorType, nodes);
}

auto LevelAreaLayer::init() -> decltype(init()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&LevelAreaLayer::init), this);
	using FunctionType = decltype(init())(*)(LevelAreaLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x20b504, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto LevelAreaLayer::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&LevelAreaLayer::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(LevelAreaLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x20d6e8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto LevelAreaLayer::dialogClosed(DialogLayer* layer) -> decltype(dialogClosed(layer)) {
	auto self = addresser::thunkAdjust(Resolve<DialogLayer*>::func(&LevelAreaLayer::dialogClosed), this);
	using FunctionType = decltype(dialogClosed(layer))(*)(LevelAreaLayer*, DialogLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x20d460, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, layer);
}

auto LevelAreaLayer::onExit() -> decltype(onExit()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&LevelAreaLayer::onExit), this);
	using FunctionType = decltype(onExit())(*)(LevelAreaLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x20d694, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto LevelAreaLayer::addGodRay(float startOpacity, float midOpacity, float endOpacity, float fadeDuration, float scaleY, cocos2d::CCPoint position) -> decltype(addGodRay(startOpacity, midOpacity, endOpacity, fadeDuration, scaleY, position)) {
	using FunctionType = decltype(addGodRay(startOpacity, midOpacity, endOpacity, fadeDuration, scaleY, position))(*)(LevelAreaLayer*, float, float, float, float, float, cocos2d::CCPoint);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x20c480, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, startOpacity, midOpacity, endOpacity, fadeDuration, scaleY, position);
}

auto LevelAreaLayer::fadeInsideTower() -> decltype(fadeInsideTower()) {
	using FunctionType = decltype(fadeInsideTower())(*)(LevelAreaLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x20d470, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto LevelAreaLayer::onBack(cocos2d::CCObject* sender) -> decltype(onBack(sender)) {
	using FunctionType = decltype(onBack(sender))(*)(LevelAreaLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x20c2d0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto LevelAreaLayer::onClickDoor(cocos2d::CCObject* sender) -> decltype(onClickDoor(sender)) {
	using FunctionType = decltype(onClickDoor(sender))(*)(LevelAreaLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x20c338, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto LevelAreaLayer::onEnterTower() -> decltype(onEnterTower()) {
	using FunctionType = decltype(onEnterTower())(*)(LevelAreaLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x20d51c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto LevelAreaLayer::showDialog() -> decltype(showDialog()) {
	using FunctionType = decltype(showDialog())(*)(LevelAreaLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x20d210, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}
