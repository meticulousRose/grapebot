#include <Geode/cocos/cocoa/CCObject.h>

#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/MenuGameLayer.hpp>
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

MenuGameLayer::~MenuGameLayer() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(MenuGameLayer*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x4f8700, tulip::hook::TulipConvention::Default);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) MenuGameLayer(geode::CutoffConstructor, sizeof(MenuGameLayer));
		geode::DestructorLock::addLock(this);
	}
}

auto MenuGameLayer::create() -> decltype(create()) {
	using FunctionType = decltype(create())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4f8780, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto MenuGameLayer::update(float dt) -> decltype(update(dt)) {
	auto self = addresser::thunkAdjust(Resolve<float>::func(&MenuGameLayer::update), this);
	using FunctionType = decltype(update(dt))(*)(MenuGameLayer*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4f9a60, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, dt);
}

auto MenuGameLayer::init() -> decltype(init()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&MenuGameLayer::init), this);
	using FunctionType = decltype(init())(*)(MenuGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4f8890, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto MenuGameLayer::ccTouchBegan(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) -> decltype(ccTouchBegan(touch, event)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&MenuGameLayer::ccTouchBegan), this);
	using FunctionType = decltype(ccTouchBegan(touch, event))(*)(MenuGameLayer*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4f9fd0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, touch, event);
}

auto MenuGameLayer::ccTouchMoved(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) -> decltype(ccTouchMoved(touch, event)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&MenuGameLayer::ccTouchMoved), this);
	using FunctionType = decltype(ccTouchMoved(touch, event))(*)(MenuGameLayer*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4fa0f0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, touch, event);
}

auto MenuGameLayer::ccTouchEnded(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) -> decltype(ccTouchEnded(touch, event)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&MenuGameLayer::ccTouchEnded), this);
	using FunctionType = decltype(ccTouchEnded(touch, event))(*)(MenuGameLayer*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4fa110, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, touch, event);
}

auto MenuGameLayer::ccTouchCancelled(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) -> decltype(ccTouchCancelled(touch, event)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&MenuGameLayer::ccTouchCancelled), this);
	using FunctionType = decltype(ccTouchCancelled(touch, event))(*)(MenuGameLayer*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4fa130, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, touch, event);
}

auto MenuGameLayer::registerWithTouchDispatcher() -> decltype(registerWithTouchDispatcher()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&MenuGameLayer::registerWithTouchDispatcher), this);
	using FunctionType = decltype(registerWithTouchDispatcher())(*)(MenuGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4fa170, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto MenuGameLayer::destroyPlayer() -> decltype(destroyPlayer()) {
	using FunctionType = decltype(destroyPlayer())(*)(MenuGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4f9dd0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto MenuGameLayer::getBGColor(int index) -> decltype(getBGColor(index)) {
	using FunctionType = decltype(getBGColor(index))(*)(MenuGameLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4f8cf0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, index);
}

auto MenuGameLayer::resetPlayer() -> decltype(resetPlayer()) {
	using FunctionType = decltype(resetPlayer())(*)(MenuGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4f9210, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto MenuGameLayer::tryJump(float dt) -> decltype(tryJump(dt)) {
	using FunctionType = decltype(tryJump(dt))(*)(MenuGameLayer*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4f8d90, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, dt);
}

auto MenuGameLayer::updateColor(float dt) -> decltype(updateColor(dt)) {
	using FunctionType = decltype(updateColor(dt))(*)(MenuGameLayer*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4f9010, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, dt);
}

auto MenuGameLayer::updateColors() -> decltype(updateColors()) {
	using FunctionType = decltype(updateColors())(*)(MenuGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4f99f0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}
