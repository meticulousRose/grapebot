
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/mapping/CCMenu.hpp>
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

auto cocos2d::CCMenu::create() -> decltype(create()) {
	using FunctionType = decltype(create())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x769c74, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto cocos2d::CCMenu::createWithArray(cocos2d::CCArray* p0) -> decltype(createWithArray(p0)) {
	using FunctionType = decltype(createWithArray(p0))(*)(cocos2d::CCArray*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x769dcc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0);
}

auto cocos2d::CCMenu::createWithItem(cocos2d::CCMenuItem* p0) -> decltype(createWithItem(p0)) {
	using FunctionType = decltype(createWithItem(p0))(*)(cocos2d::CCMenuItem*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x76a018, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0);
}

auto cocos2d::CCMenu::createWithItems(cocos2d::CCMenuItem* p0, va_list p1) -> decltype(createWithItems(p0, p1)) {
	using FunctionType = decltype(createWithItems(p0, p1))(*)(cocos2d::CCMenuItem*, va_list);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x769cc0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1);
}

auto cocos2d::CCMenu::init() -> decltype(init()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&cocos2d::CCMenu::init), this);
	using FunctionType = decltype(init())(*)(cocos2d::CCMenu*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x76a038, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto cocos2d::CCMenu::addChild(cocos2d::CCNode* p0) -> decltype(addChild(p0)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCNode*>::func(&cocos2d::CCMenu::addChild), this);
	using FunctionType = decltype(addChild(p0))(*)(cocos2d::CCMenu*, cocos2d::CCNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x76a040, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto cocos2d::CCMenu::addChild(cocos2d::CCNode* p0, int p1) -> decltype(addChild(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCNode*, int>::func(&cocos2d::CCMenu::addChild), this);
	using FunctionType = decltype(addChild(p0, p1))(*)(cocos2d::CCMenu*, cocos2d::CCNode*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x76a044, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto cocos2d::CCMenu::addChild(cocos2d::CCNode* p0, int p1, int p2) -> decltype(addChild(p0, p1, p2)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCNode*, int, int>::func(&cocos2d::CCMenu::addChild), this);
	using FunctionType = decltype(addChild(p0, p1, p2))(*)(cocos2d::CCMenu*, cocos2d::CCNode*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x76a048, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1, p2);
}

auto cocos2d::CCMenu::removeChild(cocos2d::CCNode* p0, bool p1) -> decltype(removeChild(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCNode*, bool>::func(&cocos2d::CCMenu::removeChild), this);
	using FunctionType = decltype(removeChild(p0, p1))(*)(cocos2d::CCMenu*, cocos2d::CCNode*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x76a098, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto cocos2d::CCMenu::onExit() -> decltype(onExit()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&cocos2d::CCMenu::onExit), this);
	using FunctionType = decltype(onExit())(*)(cocos2d::CCMenu*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x76a04c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto cocos2d::CCMenu::registerWithTouchDispatcher() -> decltype(registerWithTouchDispatcher()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&cocos2d::CCMenu::registerWithTouchDispatcher), this);
	using FunctionType = decltype(registerWithTouchDispatcher())(*)(cocos2d::CCMenu*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x76a278, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto cocos2d::CCMenu::ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1) -> decltype(ccTouchBegan(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&cocos2d::CCMenu::ccTouchBegan), this);
	using FunctionType = decltype(ccTouchBegan(p0, p1))(*)(cocos2d::CCMenu*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x76a2c8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto cocos2d::CCMenu::ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1) -> decltype(ccTouchMoved(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&cocos2d::CCMenu::ccTouchMoved), this);
	using FunctionType = decltype(ccTouchMoved(p0, p1))(*)(cocos2d::CCMenu*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x76a57c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto cocos2d::CCMenu::ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1) -> decltype(ccTouchEnded(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&cocos2d::CCMenu::ccTouchEnded), this);
	using FunctionType = decltype(ccTouchEnded(p0, p1))(*)(cocos2d::CCMenu*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x76a48c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto cocos2d::CCMenu::ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1) -> decltype(ccTouchCancelled(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&cocos2d::CCMenu::ccTouchCancelled), this);
	using FunctionType = decltype(ccTouchCancelled(p0, p1))(*)(cocos2d::CCMenu*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x76a514, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto cocos2d::CCMenu::alignItemsInColumns(unsigned int p0, va_list p1) -> decltype(alignItemsInColumns(p0, p1)) {
	using FunctionType = decltype(alignItemsInColumns(p0, p1))(*)(cocos2d::CCMenu*, unsigned int, va_list);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x76aad8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1);
}

auto cocos2d::CCMenu::alignItemsInColumnsWithArray(cocos2d::CCArray* p0) -> decltype(alignItemsInColumnsWithArray(p0)) {
	using FunctionType = decltype(alignItemsInColumnsWithArray(p0))(*)(cocos2d::CCMenu*, cocos2d::CCArray*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x76ab8c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto cocos2d::CCMenu::alignItemsInRows(unsigned int p0, va_list p1) -> decltype(alignItemsInRows(p0, p1)) {
	using FunctionType = decltype(alignItemsInRows(p0, p1))(*)(cocos2d::CCMenu*, unsigned int, va_list);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x76afe8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1);
}

auto cocos2d::CCMenu::giveMenuTouchPriority(int p0) -> decltype(giveMenuTouchPriority(p0)) {
	using FunctionType = decltype(giveMenuTouchPriority(p0))(*)(cocos2d::CCMenu*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x76a1c0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto cocos2d::CCMenu::initWithArray(cocos2d::CCArray* p0) -> decltype(initWithArray(p0)) {
	using FunctionType = decltype(initWithArray(p0))(*)(cocos2d::CCMenu*, cocos2d::CCArray*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x769e84, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto cocos2d::CCMenu::itemForTouch(cocos2d::CCTouch* p0) -> decltype(itemForTouch(p0)) {
	using FunctionType = decltype(itemForTouch(p0))(*)(cocos2d::CCMenu*, cocos2d::CCTouch*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x76a440, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto cocos2d::CCMenu::itemForTouch(cocos2d::CCTouch* p0, bool p1) -> decltype(itemForTouch(p0, p1)) {
	using FunctionType = decltype(itemForTouch(p0, p1))(*)(cocos2d::CCMenu*, cocos2d::CCTouch*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x76b5d4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1);
}

auto cocos2d::CCMenu::setHandlerPriority(int p0) -> decltype(setHandlerPriority(p0)) {
	using FunctionType = decltype(setHandlerPriority(p0))(*)(cocos2d::CCMenu*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x76a240, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}
