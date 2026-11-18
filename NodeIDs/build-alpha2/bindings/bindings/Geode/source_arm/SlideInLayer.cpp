
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/SlideInLayer.hpp>
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

auto SlideInLayer::create() -> decltype(create()) {
	using FunctionType = decltype(create())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x21f8a8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto SlideInLayer::init() -> decltype(init()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&SlideInLayer::init), this);
	using FunctionType = decltype(init())(*)(SlideInLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x21f99c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto SlideInLayer::draw() -> decltype(draw()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&SlideInLayer::draw), this);
	using FunctionType = decltype(draw())(*)(SlideInLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x220068, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto SlideInLayer::ccTouchBegan(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) -> decltype(ccTouchBegan(touch, event)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&SlideInLayer::ccTouchBegan), this);
	using FunctionType = decltype(ccTouchBegan(touch, event))(*)(SlideInLayer*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2200a4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, touch, event);
}

auto SlideInLayer::ccTouchMoved(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) -> decltype(ccTouchMoved(touch, event)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&SlideInLayer::ccTouchMoved), this);
	using FunctionType = decltype(ccTouchMoved(touch, event))(*)(SlideInLayer*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2200c4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, touch, event);
}

auto SlideInLayer::ccTouchEnded(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) -> decltype(ccTouchEnded(touch, event)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&SlideInLayer::ccTouchEnded), this);
	using FunctionType = decltype(ccTouchEnded(touch, event))(*)(SlideInLayer*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2200b4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, touch, event);
}

auto SlideInLayer::ccTouchCancelled(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) -> decltype(ccTouchCancelled(touch, event)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&SlideInLayer::ccTouchCancelled), this);
	using FunctionType = decltype(ccTouchCancelled(touch, event))(*)(SlideInLayer*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2200bc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, touch, event);
}

auto SlideInLayer::registerWithTouchDispatcher() -> decltype(registerWithTouchDispatcher()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&SlideInLayer::registerWithTouchDispatcher), this);
	using FunctionType = decltype(registerWithTouchDispatcher())(*)(SlideInLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x21fd84, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto SlideInLayer::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&SlideInLayer::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(SlideInLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x21fdbc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto SlideInLayer::customSetup() -> decltype(customSetup()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&SlideInLayer::customSetup), this);
	using FunctionType = decltype(customSetup())(*)(SlideInLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x21fd20, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto SlideInLayer::enterLayer() -> decltype(enterLayer()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&SlideInLayer::enterLayer), this);
	using FunctionType = decltype(enterLayer())(*)(SlideInLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x21fd4c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto SlideInLayer::exitLayer(cocos2d::CCObject* sender) -> decltype(exitLayer(sender)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCObject*>::func(&SlideInLayer::exitLayer), this);
	using FunctionType = decltype(exitLayer(sender))(*)(SlideInLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x21fde0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, sender);
}

auto SlideInLayer::showLayer(bool instant) -> decltype(showLayer(instant)) {
	auto self = addresser::thunkAdjust(Resolve<bool>::func(&SlideInLayer::showLayer), this);
	using FunctionType = decltype(showLayer(instant))(*)(SlideInLayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x21fe44, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, instant);
}

auto SlideInLayer::hideLayer(bool instant) -> decltype(hideLayer(instant)) {
	auto self = addresser::thunkAdjust(Resolve<bool>::func(&SlideInLayer::hideLayer), this);
	using FunctionType = decltype(hideLayer(instant))(*)(SlideInLayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x21ff34, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, instant);
}

auto SlideInLayer::layerVisible() -> decltype(layerVisible()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&SlideInLayer::layerVisible), this);
	using FunctionType = decltype(layerVisible())(*)(SlideInLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x220004, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto SlideInLayer::layerHidden() -> decltype(layerHidden()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&SlideInLayer::layerHidden), this);
	using FunctionType = decltype(layerHidden())(*)(SlideInLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x220014, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto SlideInLayer::enterAnimFinished() -> decltype(enterAnimFinished()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&SlideInLayer::enterAnimFinished), this);
	using FunctionType = decltype(enterAnimFinished())(*)(SlideInLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x220000, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto SlideInLayer::disableUI() -> decltype(disableUI()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&SlideInLayer::disableUI), this);
	using FunctionType = decltype(disableUI())(*)(SlideInLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x21fd24, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto SlideInLayer::enableUI() -> decltype(enableUI()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&SlideInLayer::enableUI), this);
	using FunctionType = decltype(enableUI())(*)(SlideInLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x21fd38, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}
