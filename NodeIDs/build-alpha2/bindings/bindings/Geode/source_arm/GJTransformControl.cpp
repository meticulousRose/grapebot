#include <Geode/cocos/cocoa/CCObject.h>

#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/GJTransformControl.hpp>
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

GJTransformControl::GJTransformControl() : GJTransformControl(geode::CutoffConstructor, sizeof(GJTransformControl)) {
	// here we construct it as normal as we can, then destruct it
	// using the generated functions. this ensures no memory gets leaked
	// no crashes :pray:
	geode::DestructorLock::addLock(this);
	GJTransformControl::~GJTransformControl();

	using FunctionType = void(*)(GJTransformControl*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5833b4, tulip::hook::TulipConvention::Default);
	reinterpret_cast<FunctionType>(func)(this);
}

auto GJTransformControl::init() -> decltype(init()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GJTransformControl::init), this);
	using FunctionType = decltype(init())(*)(GJTransformControl*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x57fb54, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GJTransformControl::ccTouchBegan(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) -> decltype(ccTouchBegan(touch, event)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&GJTransformControl::ccTouchBegan), this);
	using FunctionType = decltype(ccTouchBegan(touch, event))(*)(GJTransformControl*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x581274, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, touch, event);
}

auto GJTransformControl::ccTouchMoved(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) -> decltype(ccTouchMoved(touch, event)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&GJTransformControl::ccTouchMoved), this);
	using FunctionType = decltype(ccTouchMoved(touch, event))(*)(GJTransformControl*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x582014, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, touch, event);
}

auto GJTransformControl::ccTouchEnded(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) -> decltype(ccTouchEnded(touch, event)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&GJTransformControl::ccTouchEnded), this);
	using FunctionType = decltype(ccTouchEnded(touch, event))(*)(GJTransformControl*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x582a20, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, touch, event);
}

auto GJTransformControl::ccTouchCancelled(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) -> decltype(ccTouchCancelled(touch, event)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&GJTransformControl::ccTouchCancelled), this);
	using FunctionType = decltype(ccTouchCancelled(touch, event))(*)(GJTransformControl*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x582e54, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, touch, event);
}

auto GJTransformControl::calculateRotationOffset() -> decltype(calculateRotationOffset()) {
	using FunctionType = decltype(calculateRotationOffset())(*)(GJTransformControl*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x581228, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJTransformControl::loadFromState(GJTransformState& state) -> decltype(loadFromState(state)) {
	using FunctionType = decltype(loadFromState(state))(*)(GJTransformControl*, GJTransformState&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x580f04, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, state);
}

auto GJTransformControl::loadValues(GameObject* object, cocos2d::CCArray* objects, std::unordered_map<int, GameObjectEditorState>& states) -> decltype(loadValues(object, objects, states)) {
	using FunctionType = decltype(loadValues(object, objects, states))(*)(GJTransformControl*, GameObject*, cocos2d::CCArray*, std::unordered_map<int, GameObjectEditorState>&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5810b0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, object, objects, states);
}

auto GJTransformControl::refreshControl() -> decltype(refreshControl()) {
	using FunctionType = decltype(refreshControl())(*)(GJTransformControl*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5803bc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJTransformControl::saveToState(GJTransformState& state) -> decltype(saveToState(state)) {
	using FunctionType = decltype(saveToState(state))(*)(GJTransformControl*, GJTransformState&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x580fb0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, state);
}

auto GJTransformControl::scaleButtons(float scale) -> decltype(scaleButtons(scale)) {
	using FunctionType = decltype(scaleButtons(scale))(*)(GJTransformControl*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5802ec, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, scale);
}

auto GJTransformControl::spriteByTag(int tag) -> decltype(spriteByTag(tag)) {
	using FunctionType = decltype(spriteByTag(tag))(*)(GJTransformControl*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d3fec, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, tag);
}

auto GJTransformControl::updateAnchorSprite(cocos2d::CCPoint position) -> decltype(updateAnchorSprite(position)) {
	using FunctionType = decltype(updateAnchorSprite(position))(*)(GJTransformControl*, cocos2d::CCPoint);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x582fd8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, position);
}

auto GJTransformControl::updateButtons(bool transform, bool skew) -> decltype(updateButtons(transform, skew)) {
	using FunctionType = decltype(updateButtons(transform, skew))(*)(GJTransformControl*, bool, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x580524, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, transform, skew);
}

auto GJTransformControl::updateMinMaxPositions() -> decltype(updateMinMaxPositions()) {
	using FunctionType = decltype(updateMinMaxPositions())(*)(GJTransformControl*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x582eec, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}
