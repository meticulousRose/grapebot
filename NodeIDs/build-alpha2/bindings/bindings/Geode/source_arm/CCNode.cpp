#include <Geode/cocos/cocoa/CCObject.h>

#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/mapping/CCNode.hpp>
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

cocos2d::CCNode::CCNode() : cocos2d::CCNode(geode::CutoffConstructor, sizeof(cocos2d::CCNode)) {
	// here we construct it as normal as we can, then destruct it
	// using the generated functions. this ensures no memory gets leaked
	// no crashes :pray:
	geode::DestructorLock::addLock(this);
	cocos2d::CCNode::~CCNode();

	using FunctionType = void(*)(cocos2d::CCNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x206418, tulip::hook::TulipConvention::Default);
	reinterpret_cast<FunctionType>(func)(this);
}

cocos2d::CCNode::~CCNode() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(cocos2d::CCNode*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x2065a4, tulip::hook::TulipConvention::Default);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) cocos2d::CCNode(geode::CutoffConstructor, sizeof(cocos2d::CCNode));
		geode::DestructorLock::addLock(this);
	}
}

auto cocos2d::CCNode::create() -> decltype(create()) {
	using FunctionType = decltype(create())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x206e0c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto cocos2d::CCNode::resetGlobalOrderOfArrival() -> decltype(resetGlobalOrderOfArrival()) {
	using FunctionType = decltype(resetGlobalOrderOfArrival())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x206408, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto cocos2d::CCNode::update(float p0) -> decltype(update(p0)) {
	auto self = addresser::thunkAdjust(Resolve<float>::func(&cocos2d::CCNode::update), this);
	using FunctionType = decltype(update(p0))(*)(cocos2d::CCNode*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2082bc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto cocos2d::CCNode::init() -> decltype(init()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&cocos2d::CCNode::init), this);
	using FunctionType = decltype(init())(*)(cocos2d::CCNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2066f4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto cocos2d::CCNode::setZOrder(int p0) -> decltype(setZOrder(p0)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&cocos2d::CCNode::setZOrder), this);
	using FunctionType = decltype(setZOrder(p0))(*)(cocos2d::CCNode*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x206744, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto cocos2d::CCNode::_setZOrder(int p0) -> decltype(_setZOrder(p0)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&cocos2d::CCNode::_setZOrder), this);
	using FunctionType = decltype(_setZOrder(p0))(*)(cocos2d::CCNode*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x20673c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto cocos2d::CCNode::getZOrder() -> decltype(getZOrder()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&cocos2d::CCNode::getZOrder), this);
	using FunctionType = decltype(getZOrder())(*)(cocos2d::CCNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x206734, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto cocos2d::CCNode::setVertexZ(float p0) -> decltype(setVertexZ(p0)) {
	auto self = addresser::thunkAdjust(Resolve<float>::func(&cocos2d::CCNode::setVertexZ), this);
	using FunctionType = decltype(setVertexZ(p0))(*)(cocos2d::CCNode*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x20679c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto cocos2d::CCNode::getVertexZ() -> decltype(getVertexZ()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&cocos2d::CCNode::getVertexZ), this);
	using FunctionType = decltype(getVertexZ())(*)(cocos2d::CCNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x206794, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto cocos2d::CCNode::setScaleX(float p0) -> decltype(setScaleX(p0)) {
	auto self = addresser::thunkAdjust(Resolve<float>::func(&cocos2d::CCNode::setScaleX), this);
	using FunctionType = decltype(setScaleX(p0))(*)(cocos2d::CCNode*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x20684c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto cocos2d::CCNode::getScaleX() -> decltype(getScaleX()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&cocos2d::CCNode::getScaleX), this);
	using FunctionType = decltype(getScaleX())(*)(cocos2d::CCNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x206844, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto cocos2d::CCNode::setScaleY(float p0) -> decltype(setScaleY(p0)) {
	auto self = addresser::thunkAdjust(Resolve<float>::func(&cocos2d::CCNode::setScaleY), this);
	using FunctionType = decltype(setScaleY(p0))(*)(cocos2d::CCNode*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x206868, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto cocos2d::CCNode::getScaleY() -> decltype(getScaleY()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&cocos2d::CCNode::getScaleY), this);
	using FunctionType = decltype(getScaleY())(*)(cocos2d::CCNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x206860, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto cocos2d::CCNode::setScale(float p0) -> decltype(setScale(p0)) {
	auto self = addresser::thunkAdjust(Resolve<float>::func(&cocos2d::CCNode::setScale), this);
	using FunctionType = decltype(setScale(p0))(*)(cocos2d::CCNode*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x20681c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto cocos2d::CCNode::getScale() -> decltype(getScale()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&cocos2d::CCNode::getScale), this);
	using FunctionType = decltype(getScale())(*)(cocos2d::CCNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x206814, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto cocos2d::CCNode::setScale(float p0, float p1) -> decltype(setScale(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<float, float>::func(&cocos2d::CCNode::setScale), this);
	using FunctionType = decltype(setScale(p0, p1))(*)(cocos2d::CCNode*, float, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x206830, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto cocos2d::CCNode::setPosition(cocos2d::CCPoint const& p0) -> decltype(setPosition(p0)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCPoint const&>::func(&cocos2d::CCNode::setPosition), this);
	using FunctionType = decltype(setPosition(p0))(*)(cocos2d::CCNode*, cocos2d::CCPoint const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x206884, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto cocos2d::CCNode::getPosition() -> decltype(getPosition()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&cocos2d::CCNode::getPosition), this);
	using FunctionType = decltype(getPosition())(*)(cocos2d::CCNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x20687c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto cocos2d::CCNode::setPosition(float p0, float p1) -> decltype(setPosition(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<float, float>::func(&cocos2d::CCNode::setPosition), this);
	using FunctionType = decltype(setPosition(p0, p1))(*)(cocos2d::CCNode*, float, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2068b0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto cocos2d::CCNode::getPosition(float* p0, float* p1) -> decltype(getPosition(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<float*, float*>::func(&cocos2d::CCNode::getPosition), this);
	using FunctionType = decltype(getPosition(p0, p1))(*)(cocos2d::CCNode*, float*, float*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x20689c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto cocos2d::CCNode::setPositionX(float p0) -> decltype(setPositionX(p0)) {
	auto self = addresser::thunkAdjust(Resolve<float>::func(&cocos2d::CCNode::setPositionX), this);
	using FunctionType = decltype(setPositionX(p0))(*)(cocos2d::CCNode*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x206900, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto cocos2d::CCNode::getPositionX() -> decltype(getPositionX()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&cocos2d::CCNode::getPositionX), this);
	using FunctionType = decltype(getPositionX())(*)(cocos2d::CCNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2068f0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto cocos2d::CCNode::setPositionY(float p0) -> decltype(setPositionY(p0)) {
	auto self = addresser::thunkAdjust(Resolve<float>::func(&cocos2d::CCNode::setPositionY), this);
	using FunctionType = decltype(setPositionY(p0))(*)(cocos2d::CCNode*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x206944, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto cocos2d::CCNode::getPositionY() -> decltype(getPositionY()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&cocos2d::CCNode::getPositionY), this);
	using FunctionType = decltype(getPositionY())(*)(cocos2d::CCNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2068f8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto cocos2d::CCNode::offsetPosition(float p0, float p1) -> decltype(offsetPosition(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<float, float>::func(&cocos2d::CCNode::offsetPosition), this);
	using FunctionType = decltype(offsetPosition(p0, p1))(*)(cocos2d::CCNode*, float, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x20698c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto cocos2d::CCNode::applyScale(float p0) -> decltype(applyScale(p0)) {
	auto self = addresser::thunkAdjust(Resolve<float>::func(&cocos2d::CCNode::applyScale), this);
	using FunctionType = decltype(applyScale(p0))(*)(cocos2d::CCNode*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2069d8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto cocos2d::CCNode::setSkewX(float p0) -> decltype(setSkewX(p0)) {
	auto self = addresser::thunkAdjust(Resolve<float>::func(&cocos2d::CCNode::setSkewX), this);
	using FunctionType = decltype(setSkewX(p0))(*)(cocos2d::CCNode*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x206704, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto cocos2d::CCNode::getSkewX() -> decltype(getSkewX()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&cocos2d::CCNode::getSkewX), this);
	using FunctionType = decltype(getSkewX())(*)(cocos2d::CCNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2066fc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto cocos2d::CCNode::setSkewY(float p0) -> decltype(setSkewY(p0)) {
	auto self = addresser::thunkAdjust(Resolve<float>::func(&cocos2d::CCNode::setSkewY), this);
	using FunctionType = decltype(setSkewY(p0))(*)(cocos2d::CCNode*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x206720, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto cocos2d::CCNode::getSkewY() -> decltype(getSkewY()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&cocos2d::CCNode::getSkewY), this);
	using FunctionType = decltype(getSkewY())(*)(cocos2d::CCNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x206718, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto cocos2d::CCNode::setAnchorPoint(cocos2d::CCPoint const& p0) -> decltype(setAnchorPoint(p0)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCPoint const&>::func(&cocos2d::CCNode::setAnchorPoint), this);
	using FunctionType = decltype(setAnchorPoint(p0))(*)(cocos2d::CCNode*, cocos2d::CCPoint const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x206b8c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto cocos2d::CCNode::getAnchorPoint() -> decltype(getAnchorPoint()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&cocos2d::CCNode::getAnchorPoint), this);
	using FunctionType = decltype(getAnchorPoint())(*)(cocos2d::CCNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x206b84, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto cocos2d::CCNode::getAnchorPointInPoints() -> decltype(getAnchorPointInPoints()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&cocos2d::CCNode::getAnchorPointInPoints), this);
	using FunctionType = decltype(getAnchorPointInPoints())(*)(cocos2d::CCNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x206b7c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto cocos2d::CCNode::setContentSize(cocos2d::CCSize const& p0) -> decltype(setContentSize(p0)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCSize const&>::func(&cocos2d::CCNode::setContentSize), this);
	using FunctionType = decltype(setContentSize(p0))(*)(cocos2d::CCNode*, cocos2d::CCSize const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x206c40, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto cocos2d::CCNode::getContentSize() const  -> decltype(getContentSize()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&cocos2d::CCNode::getContentSize), this);
	using FunctionType = decltype(getContentSize())(*)(cocos2d::CCNode const *);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x206c00, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto cocos2d::CCNode::getScaledContentSize() -> decltype(getScaledContentSize()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&cocos2d::CCNode::getScaledContentSize), this);
	using FunctionType = decltype(getScaledContentSize())(*)(cocos2d::CCNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x206c08, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto cocos2d::CCNode::setVisible(bool p0) -> decltype(setVisible(p0)) {
	auto self = addresser::thunkAdjust(Resolve<bool>::func(&cocos2d::CCNode::setVisible), this);
	using FunctionType = decltype(setVisible(p0))(*)(cocos2d::CCNode*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x206b74, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto cocos2d::CCNode::isVisible() -> decltype(isVisible()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&cocos2d::CCNode::isVisible), this);
	using FunctionType = decltype(isVisible())(*)(cocos2d::CCNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x206b6c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto cocos2d::CCNode::setRotation(float p0) -> decltype(setRotation(p0)) {
	auto self = addresser::thunkAdjust(Resolve<float>::func(&cocos2d::CCNode::setRotation), this);
	using FunctionType = decltype(setRotation(p0))(*)(cocos2d::CCNode*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2067ac, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto cocos2d::CCNode::getRotation() -> decltype(getRotation()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&cocos2d::CCNode::getRotation), this);
	using FunctionType = decltype(getRotation())(*)(cocos2d::CCNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2067a4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto cocos2d::CCNode::setRotationX(float p0) -> decltype(setRotationX(p0)) {
	auto self = addresser::thunkAdjust(Resolve<float>::func(&cocos2d::CCNode::setRotationX), this);
	using FunctionType = decltype(setRotationX(p0))(*)(cocos2d::CCNode*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2067e4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto cocos2d::CCNode::getRotationX() -> decltype(getRotationX()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&cocos2d::CCNode::getRotationX), this);
	using FunctionType = decltype(getRotationX())(*)(cocos2d::CCNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2067dc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto cocos2d::CCNode::setRotationY(float p0) -> decltype(setRotationY(p0)) {
	auto self = addresser::thunkAdjust(Resolve<float>::func(&cocos2d::CCNode::setRotationY), this);
	using FunctionType = decltype(setRotationY(p0))(*)(cocos2d::CCNode*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x206800, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto cocos2d::CCNode::getRotationY() -> decltype(getRotationY()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&cocos2d::CCNode::getRotationY), this);
	using FunctionType = decltype(getRotationY())(*)(cocos2d::CCNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2067f8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto cocos2d::CCNode::setOrderOfArrival(unsigned int p0) -> decltype(setOrderOfArrival(p0)) {
	auto self = addresser::thunkAdjust(Resolve<unsigned int>::func(&cocos2d::CCNode::setOrderOfArrival), this);
	using FunctionType = decltype(setOrderOfArrival(p0))(*)(cocos2d::CCNode*, unsigned int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x206d0c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto cocos2d::CCNode::getOrderOfArrival() -> decltype(getOrderOfArrival()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&cocos2d::CCNode::getOrderOfArrival), this);
	using FunctionType = decltype(getOrderOfArrival())(*)(cocos2d::CCNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x206d04, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto cocos2d::CCNode::setGLServerState(cocos2d::ccGLServerState p0) -> decltype(setGLServerState(p0)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::ccGLServerState>::func(&cocos2d::CCNode::setGLServerState), this);
	using FunctionType = decltype(setGLServerState(p0))(*)(cocos2d::CCNode*, cocos2d::ccGLServerState);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x206d2c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto cocos2d::CCNode::getGLServerState() -> decltype(getGLServerState()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&cocos2d::CCNode::getGLServerState), this);
	using FunctionType = decltype(getGLServerState())(*)(cocos2d::CCNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x206d24, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto cocos2d::CCNode::ignoreAnchorPointForPosition(bool p0) -> decltype(ignoreAnchorPointForPosition(p0)) {
	auto self = addresser::thunkAdjust(Resolve<bool>::func(&cocos2d::CCNode::ignoreAnchorPointForPosition), this);
	using FunctionType = decltype(ignoreAnchorPointForPosition(p0))(*)(cocos2d::CCNode*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x206cd4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto cocos2d::CCNode::isIgnoreAnchorPointForPosition() -> decltype(isIgnoreAnchorPointForPosition()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&cocos2d::CCNode::isIgnoreAnchorPointForPosition), this);
	using FunctionType = decltype(isIgnoreAnchorPointForPosition())(*)(cocos2d::CCNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x206ccc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto cocos2d::CCNode::addChild(cocos2d::CCNode* p0) -> decltype(addChild(p0)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCNode*>::func(&cocos2d::CCNode::addChild), this);
	using FunctionType = decltype(addChild(p0))(*)(cocos2d::CCNode*, cocos2d::CCNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x20717c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto cocos2d::CCNode::addChild(cocos2d::CCNode* p0, int p1) -> decltype(addChild(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCNode*, int>::func(&cocos2d::CCNode::addChild), this);
	using FunctionType = decltype(addChild(p0, p1))(*)(cocos2d::CCNode*, cocos2d::CCNode*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x20716c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto cocos2d::CCNode::addChild(cocos2d::CCNode* p0, int p1, int p2) -> decltype(addChild(p0, p1, p2)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCNode*, int, int>::func(&cocos2d::CCNode::addChild), this);
	using FunctionType = decltype(addChild(p0, p1, p2))(*)(cocos2d::CCNode*, cocos2d::CCNode*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x207014, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1, p2);
}

auto cocos2d::CCNode::getChildByTag(int p0) -> decltype(getChildByTag(p0)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&cocos2d::CCNode::getChildByTag), this);
	using FunctionType = decltype(getChildByTag(p0))(*)(cocos2d::CCNode*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x206f90, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto cocos2d::CCNode::getChildren() -> decltype(getChildren()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&cocos2d::CCNode::getChildren), this);
	using FunctionType = decltype(getChildren())(*)(cocos2d::CCNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x206a64, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto cocos2d::CCNode::getChildrenCount() const  -> decltype(getChildrenCount()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&cocos2d::CCNode::getChildrenCount), this);
	using FunctionType = decltype(getChildrenCount())(*)(cocos2d::CCNode const *);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x206ab8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto cocos2d::CCNode::setParent(cocos2d::CCNode* p0) -> decltype(setParent(p0)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCNode*>::func(&cocos2d::CCNode::setParent), this);
	using FunctionType = decltype(setParent(p0))(*)(cocos2d::CCNode*, cocos2d::CCNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x206cc4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto cocos2d::CCNode::getParent() -> decltype(getParent()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&cocos2d::CCNode::getParent), this);
	using FunctionType = decltype(getParent())(*)(cocos2d::CCNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x206cbc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto cocos2d::CCNode::removeFromParent() -> decltype(removeFromParent()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&cocos2d::CCNode::removeFromParent), this);
	using FunctionType = decltype(removeFromParent())(*)(cocos2d::CCNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x207190, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto cocos2d::CCNode::removeFromParentAndCleanup(bool p0) -> decltype(removeFromParentAndCleanup(p0)) {
	auto self = addresser::thunkAdjust(Resolve<bool>::func(&cocos2d::CCNode::removeFromParentAndCleanup), this);
	using FunctionType = decltype(removeFromParentAndCleanup(p0))(*)(cocos2d::CCNode*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2071a0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto cocos2d::CCNode::removeMeAndCleanup() -> decltype(removeMeAndCleanup()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&cocos2d::CCNode::removeMeAndCleanup), this);
	using FunctionType = decltype(removeMeAndCleanup())(*)(cocos2d::CCNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2071c0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto cocos2d::CCNode::removeChild(cocos2d::CCNode* p0) -> decltype(removeChild(p0)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCNode*>::func(&cocos2d::CCNode::removeChild), this);
	using FunctionType = decltype(removeChild(p0))(*)(cocos2d::CCNode*, cocos2d::CCNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2071d0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto cocos2d::CCNode::removeChild(cocos2d::CCNode* p0, bool p1) -> decltype(removeChild(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCNode*, bool>::func(&cocos2d::CCNode::removeChild), this);
	using FunctionType = decltype(removeChild(p0, p1))(*)(cocos2d::CCNode*, cocos2d::CCNode*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2071e0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto cocos2d::CCNode::removeChildByTag(int p0) -> decltype(removeChildByTag(p0)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&cocos2d::CCNode::removeChildByTag), this);
	using FunctionType = decltype(removeChildByTag(p0))(*)(cocos2d::CCNode*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x20735c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto cocos2d::CCNode::removeChildByTag(int p0, bool p1) -> decltype(removeChildByTag(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<int, bool>::func(&cocos2d::CCNode::removeChildByTag), this);
	using FunctionType = decltype(removeChildByTag(p0, p1))(*)(cocos2d::CCNode*, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x20736c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto cocos2d::CCNode::removeAllChildren() -> decltype(removeAllChildren()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&cocos2d::CCNode::removeAllChildren), this);
	using FunctionType = decltype(removeAllChildren())(*)(cocos2d::CCNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2073bc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto cocos2d::CCNode::removeAllChildrenWithCleanup(bool p0) -> decltype(removeAllChildrenWithCleanup(p0)) {
	auto self = addresser::thunkAdjust(Resolve<bool>::func(&cocos2d::CCNode::removeAllChildrenWithCleanup), this);
	using FunctionType = decltype(removeAllChildrenWithCleanup(p0))(*)(cocos2d::CCNode*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2073cc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto cocos2d::CCNode::reorderChild(cocos2d::CCNode* p0, int p1) -> decltype(reorderChild(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCNode*, int>::func(&cocos2d::CCNode::reorderChild), this);
	using FunctionType = decltype(reorderChild(p0, p1))(*)(cocos2d::CCNode*, cocos2d::CCNode*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x207500, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto cocos2d::CCNode::sortAllChildren() -> decltype(sortAllChildren()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&cocos2d::CCNode::sortAllChildren), this);
	using FunctionType = decltype(sortAllChildren())(*)(cocos2d::CCNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x20761c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto cocos2d::CCNode::getGrid() -> decltype(getGrid()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&cocos2d::CCNode::getGrid), this);
	using FunctionType = decltype(getGrid())(*)(cocos2d::CCNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x206b28, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto cocos2d::CCNode::setGrid(cocos2d::CCGridBase* p0) -> decltype(setGrid(p0)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCGridBase*>::func(&cocos2d::CCNode::setGrid), this);
	using FunctionType = decltype(setGrid(p0))(*)(cocos2d::CCNode*, cocos2d::CCGridBase*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x206b30, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto cocos2d::CCNode::getUserData() -> decltype(getUserData()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&cocos2d::CCNode::getUserData), this);
	using FunctionType = decltype(getUserData())(*)(cocos2d::CCNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x206cf4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto cocos2d::CCNode::setUserData(void* p0) -> decltype(setUserData(p0)) {
	auto self = addresser::thunkAdjust(Resolve<void*>::func(&cocos2d::CCNode::setUserData), this);
	using FunctionType = decltype(setUserData(p0))(*)(cocos2d::CCNode*, void*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x206cfc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto cocos2d::CCNode::getUserObject() -> decltype(getUserObject()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&cocos2d::CCNode::getUserObject), this);
	using FunctionType = decltype(getUserObject())(*)(cocos2d::CCNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x206d1c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto cocos2d::CCNode::setUserObject(cocos2d::CCObject* p0) -> decltype(setUserObject(p0)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCObject*>::func(&cocos2d::CCNode::setUserObject), this);
	using FunctionType = decltype(setUserObject(p0))(*)(cocos2d::CCNode*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x206d34, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto cocos2d::CCNode::getShaderProgram() -> decltype(getShaderProgram()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&cocos2d::CCNode::getShaderProgram), this);
	using FunctionType = decltype(getShaderProgram())(*)(cocos2d::CCNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x206d14, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto cocos2d::CCNode::setShaderProgram(cocos2d::CCGLProgram* p0) -> decltype(setShaderProgram(p0)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCGLProgram*>::func(&cocos2d::CCNode::setShaderProgram), this);
	using FunctionType = decltype(setShaderProgram(p0))(*)(cocos2d::CCNode*, cocos2d::CCGLProgram*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x206d70, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto cocos2d::CCNode::getCamera() -> decltype(getCamera()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&cocos2d::CCNode::getCamera), this);
	using FunctionType = decltype(getCamera())(*)(cocos2d::CCNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x206ac8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto cocos2d::CCNode::isRunning() -> decltype(isRunning()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&cocos2d::CCNode::isRunning), this);
	using FunctionType = decltype(isRunning())(*)(cocos2d::CCNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x206cb4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto cocos2d::CCNode::registerScriptHandler(int p0) -> decltype(registerScriptHandler(p0)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&cocos2d::CCNode::registerScriptHandler), this);
	using FunctionType = decltype(registerScriptHandler(p0))(*)(cocos2d::CCNode*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x207f90, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto cocos2d::CCNode::unregisterScriptHandler() -> decltype(unregisterScriptHandler()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&cocos2d::CCNode::unregisterScriptHandler), this);
	using FunctionType = decltype(unregisterScriptHandler())(*)(cocos2d::CCNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x207fc0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto cocos2d::CCNode::onEnter() -> decltype(onEnter()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&cocos2d::CCNode::onEnter), this);
	using FunctionType = decltype(onEnter())(*)(cocos2d::CCNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x207c58, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto cocos2d::CCNode::onEnterTransitionDidFinish() -> decltype(onEnterTransitionDidFinish()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&cocos2d::CCNode::onEnterTransitionDidFinish), this);
	using FunctionType = decltype(onEnterTransitionDidFinish())(*)(cocos2d::CCNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x207d84, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto cocos2d::CCNode::onExit() -> decltype(onExit()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&cocos2d::CCNode::onExit), this);
	using FunctionType = decltype(onExit())(*)(cocos2d::CCNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x207e98, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto cocos2d::CCNode::onExitTransitionDidStart() -> decltype(onExitTransitionDidStart()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&cocos2d::CCNode::onExitTransitionDidStart), this);
	using FunctionType = decltype(onExitTransitionDidStart())(*)(cocos2d::CCNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x207e04, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto cocos2d::CCNode::cleanup() -> decltype(cleanup()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&cocos2d::CCNode::cleanup), this);
	using FunctionType = decltype(cleanup())(*)(cocos2d::CCNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x206e8c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto cocos2d::CCNode::draw() -> decltype(draw()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&cocos2d::CCNode::draw), this);
	using FunctionType = decltype(draw())(*)(cocos2d::CCNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x207a2c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto cocos2d::CCNode::visit() -> decltype(visit()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&cocos2d::CCNode::visit), this);
	using FunctionType = decltype(visit())(*)(cocos2d::CCNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x207a30, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto cocos2d::CCNode::setActionManager(cocos2d::CCActionManager* p0) -> decltype(setActionManager(p0)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCActionManager*>::func(&cocos2d::CCNode::setActionManager), this);
	using FunctionType = decltype(setActionManager(p0))(*)(cocos2d::CCNode*, cocos2d::CCActionManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x208000, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto cocos2d::CCNode::getActionManager() -> decltype(getActionManager()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&cocos2d::CCNode::getActionManager), this);
	using FunctionType = decltype(getActionManager())(*)(cocos2d::CCNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x208050, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto cocos2d::CCNode::setScheduler(cocos2d::CCScheduler* p0) -> decltype(setScheduler(p0)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCScheduler*>::func(&cocos2d::CCNode::setScheduler), this);
	using FunctionType = decltype(setScheduler(p0))(*)(cocos2d::CCNode*, cocos2d::CCScheduler*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2080bc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto cocos2d::CCNode::getScheduler() -> decltype(getScheduler()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&cocos2d::CCNode::getScheduler), this);
	using FunctionType = decltype(getScheduler())(*)(cocos2d::CCNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x20810c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto cocos2d::CCNode::updateTransform() -> decltype(updateTransform()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&cocos2d::CCNode::updateTransform), this);
	using FunctionType = decltype(updateTransform())(*)(cocos2d::CCNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x208ecc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto cocos2d::CCNode::nodeToParentTransform() -> decltype(nodeToParentTransform()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&cocos2d::CCNode::nodeToParentTransform), this);
	using FunctionType = decltype(nodeToParentTransform())(*)(cocos2d::CCNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x20833c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto cocos2d::CCNode::nodeToParentTransformFast() -> decltype(nodeToParentTransformFast()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&cocos2d::CCNode::nodeToParentTransformFast), this);
	using FunctionType = decltype(nodeToParentTransformFast())(*)(cocos2d::CCNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x208600, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto cocos2d::CCNode::parentToNodeTransform() -> decltype(parentToNodeTransform()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&cocos2d::CCNode::parentToNodeTransform), this);
	using FunctionType = decltype(parentToNodeTransform())(*)(cocos2d::CCNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x208a7c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto cocos2d::CCNode::nodeToWorldTransform() -> decltype(nodeToWorldTransform()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&cocos2d::CCNode::nodeToWorldTransform), this);
	using FunctionType = decltype(nodeToWorldTransform())(*)(cocos2d::CCNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x208af4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto cocos2d::CCNode::nodeToWorldTransformFast() -> decltype(nodeToWorldTransformFast()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&cocos2d::CCNode::nodeToWorldTransformFast), this);
	using FunctionType = decltype(nodeToWorldTransformFast())(*)(cocos2d::CCNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x208b80, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto cocos2d::CCNode::worldToNodeTransform() -> decltype(worldToNodeTransform()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&cocos2d::CCNode::worldToNodeTransform), this);
	using FunctionType = decltype(worldToNodeTransform())(*)(cocos2d::CCNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x208c0c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto cocos2d::CCNode::addComponent(cocos2d::CCComponent* p0) -> decltype(addComponent(p0)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCComponent*>::func(&cocos2d::CCNode::addComponent), this);
	using FunctionType = decltype(addComponent(p0))(*)(cocos2d::CCNode*, cocos2d::CCComponent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x208f34, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto cocos2d::CCNode::removeComponent(char const* p0) -> decltype(removeComponent(p0)) {
	auto self = addresser::thunkAdjust(Resolve<char const*>::func(&cocos2d::CCNode::removeComponent), this);
	using FunctionType = decltype(removeComponent(p0))(*)(cocos2d::CCNode*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x208f44, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto cocos2d::CCNode::removeComponent(cocos2d::CCComponent* p0) -> decltype(removeComponent(p0)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCComponent*>::func(&cocos2d::CCNode::removeComponent), this);
	using FunctionType = decltype(removeComponent(p0))(*)(cocos2d::CCNode*, cocos2d::CCComponent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x208f54, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto cocos2d::CCNode::removeAllComponents() -> decltype(removeAllComponents()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&cocos2d::CCNode::removeAllComponents), this);
	using FunctionType = decltype(removeAllComponents())(*)(cocos2d::CCNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x208f64, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto cocos2d::CCNode::updateTweenAction(float p0, char const* p1) -> decltype(updateTweenAction(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<float, char const*>::func(&cocos2d::CCNode::updateTweenAction), this);
	using FunctionType = decltype(updateTweenAction(p0, p1))(*)(cocos2d::CCNode*, float, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x208ec4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto cocos2d::CCNode::updateTweenActionInt(float p0, int p1) -> decltype(updateTweenActionInt(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<float, int>::func(&cocos2d::CCNode::updateTweenActionInt), this);
	using FunctionType = decltype(updateTweenActionInt(p0, p1))(*)(cocos2d::CCNode*, float, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x208ec8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto cocos2d::CCNode::boundingBox() -> decltype(boundingBox()) {
	using FunctionType = decltype(boundingBox())(*)(cocos2d::CCNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x206dac, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto cocos2d::CCNode::childrenAlloc() -> decltype(childrenAlloc()) {
	using FunctionType = decltype(childrenAlloc())(*)(cocos2d::CCNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x206f68, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto cocos2d::CCNode::convertToNodeSpace(cocos2d::CCPoint const& p0) -> decltype(convertToNodeSpace(p0)) {
	using FunctionType = decltype(convertToNodeSpace(p0))(*)(cocos2d::CCNode*, cocos2d::CCPoint const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x208c4c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto cocos2d::CCNode::convertToNodeSpaceAR(cocos2d::CCPoint const& worldPoint) -> decltype(convertToNodeSpaceAR(worldPoint)) {
	using FunctionType = decltype(convertToNodeSpaceAR(worldPoint))(*)(cocos2d::CCNode*, cocos2d::CCPoint const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x208cdc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, worldPoint);
}

auto cocos2d::CCNode::convertTouchToNodeSpace(cocos2d::CCTouch* p0) -> decltype(convertTouchToNodeSpace(p0)) {
	using FunctionType = decltype(convertTouchToNodeSpace(p0))(*)(cocos2d::CCNode*, cocos2d::CCTouch*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x208df8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto cocos2d::CCNode::convertTouchToNodeSpaceAR(cocos2d::CCTouch* p0) -> decltype(convertTouchToNodeSpaceAR(p0)) {
	using FunctionType = decltype(convertTouchToNodeSpaceAR(p0))(*)(cocos2d::CCNode*, cocos2d::CCTouch*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x208e50, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto cocos2d::CCNode::convertToWindowSpace(cocos2d::CCPoint const& p0) -> decltype(convertToWindowSpace(p0)) {
	using FunctionType = decltype(convertToWindowSpace(p0))(*)(cocos2d::CCNode*, cocos2d::CCPoint const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x208da0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto cocos2d::CCNode::convertToWorldSpace(cocos2d::CCPoint const& p0) -> decltype(convertToWorldSpace(p0)) {
	using FunctionType = decltype(convertToWorldSpace(p0))(*)(cocos2d::CCNode*, cocos2d::CCPoint const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x208c94, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto cocos2d::CCNode::convertToWorldSpaceAR(cocos2d::CCPoint const& point) -> decltype(convertToWorldSpaceAR(point)) {
	using FunctionType = decltype(convertToWorldSpaceAR(point))(*)(cocos2d::CCNode*, cocos2d::CCPoint const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x208d40, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, point);
}

auto cocos2d::CCNode::description() -> decltype(description()) {
	using FunctionType = decltype(description())(*)(cocos2d::CCNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x206f3c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto cocos2d::CCNode::detachChild(cocos2d::CCNode* p0, bool p1) -> decltype(detachChild(p0, p1)) {
	using FunctionType = decltype(detachChild(p0, p1))(*)(cocos2d::CCNode*, cocos2d::CCNode*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2072ac, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1);
}

auto cocos2d::CCNode::getActionByTag(int p0) -> decltype(getActionByTag(p0)) {
	using FunctionType = decltype(getActionByTag(p0))(*)(cocos2d::CCNode*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2080a4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto cocos2d::CCNode::getComponent(char const* p0) const  -> decltype(getComponent(p0)) {
	using FunctionType = decltype(getComponent(p0))(*)(cocos2d::CCNode const *, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x208f24, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto cocos2d::CCNode::insertChild(cocos2d::CCNode* p0, int p1) -> decltype(insertChild(p0, p1)) {
	using FunctionType = decltype(insertChild(p0, p1))(*)(cocos2d::CCNode*, cocos2d::CCNode*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x207114, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1);
}

auto cocos2d::CCNode::numberOfRunningActions() -> decltype(numberOfRunningActions()) {
	using FunctionType = decltype(numberOfRunningActions())(*)(cocos2d::CCNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2080b0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto cocos2d::CCNode::pauseSchedulerAndActions() -> decltype(pauseSchedulerAndActions()) {
	using FunctionType = decltype(pauseSchedulerAndActions())(*)(cocos2d::CCNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x207f50, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto cocos2d::CCNode::qsortAllChildrenWithIndex() -> decltype(qsortAllChildrenWithIndex()) {
	using FunctionType = decltype(qsortAllChildrenWithIndex())(*)(cocos2d::CCNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x20796c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto cocos2d::CCNode::resumeSchedulerAndActions() -> decltype(resumeSchedulerAndActions()) {
	using FunctionType = decltype(resumeSchedulerAndActions())(*)(cocos2d::CCNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x207d44, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto cocos2d::CCNode::runAction(cocos2d::CCAction* p0) -> decltype(runAction(p0)) {
	using FunctionType = decltype(runAction(p0))(*)(cocos2d::CCNode*, cocos2d::CCAction*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x208058, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto cocos2d::CCNode::schedule(cocos2d::SEL_SCHEDULE p0) -> decltype(schedule(p0)) {
	using FunctionType = decltype(schedule(p0))(*)(cocos2d::CCNode*, cocos2d::SEL_SCHEDULE);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x20820c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto cocos2d::CCNode::schedule(cocos2d::SEL_SCHEDULE p0, float p1) -> decltype(schedule(p0, p1)) {
	using FunctionType = decltype(schedule(p0, p1))(*)(cocos2d::CCNode*, cocos2d::SEL_SCHEDULE, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x20824c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1);
}

auto cocos2d::CCNode::schedule(cocos2d::SEL_SCHEDULE selector, float interval, unsigned int repeat, float delay) -> decltype(schedule(selector, interval, repeat, delay)) {
	using FunctionType = decltype(schedule(selector, interval, repeat, delay))(*)(cocos2d::CCNode*, cocos2d::SEL_SCHEDULE, float, unsigned int, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x208230, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, selector, interval, repeat, delay);
}

auto cocos2d::CCNode::scheduleOnce(cocos2d::SEL_SCHEDULE selector, float delay) -> decltype(scheduleOnce(selector, delay)) {
	using FunctionType = decltype(scheduleOnce(selector, delay))(*)(cocos2d::CCNode*, cocos2d::SEL_SCHEDULE, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x20826c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, selector, delay);
}

auto cocos2d::CCNode::scheduleUpdate() -> decltype(scheduleUpdate()) {
	using FunctionType = decltype(scheduleUpdate())(*)(cocos2d::CCNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x208114, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto cocos2d::CCNode::scheduleUpdateWithPriority(int p0) -> decltype(scheduleUpdateWithPriority(p0)) {
	using FunctionType = decltype(scheduleUpdateWithPriority(p0))(*)(cocos2d::CCNode*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x208130, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto cocos2d::CCNode::scheduleUpdateWithPriorityLua(int p0, int p1) -> decltype(scheduleUpdateWithPriorityLua(p0, p1)) {
	using FunctionType = decltype(scheduleUpdateWithPriorityLua(p0, p1))(*)(cocos2d::CCNode*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x20814c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1);
}

auto cocos2d::CCNode::setAdditionalTransform(cocos2d::CCAffineTransform const& additionalTransform) -> decltype(setAdditionalTransform(additionalTransform)) {
	using FunctionType = decltype(setAdditionalTransform(additionalTransform))(*)(cocos2d::CCNode*, cocos2d::CCAffineTransform const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x208a5c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, additionalTransform);
}

auto cocos2d::CCNode::setUseChildIndex(bool p0) -> decltype(setUseChildIndex(p0)) {
	using FunctionType = decltype(setUseChildIndex(p0))(*)(cocos2d::CCNode*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x207558, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto cocos2d::CCNode::sortAllChildrenNoIndex() -> decltype(sortAllChildrenNoIndex()) {
	using FunctionType = decltype(sortAllChildrenNoIndex())(*)(cocos2d::CCNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x207850, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto cocos2d::CCNode::sortAllChildrenWithIndex() -> decltype(sortAllChildrenWithIndex()) {
	using FunctionType = decltype(sortAllChildrenWithIndex())(*)(cocos2d::CCNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2077bc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto cocos2d::CCNode::stopAction(cocos2d::CCAction* action) -> decltype(stopAction(action)) {
	using FunctionType = decltype(stopAction(action))(*)(cocos2d::CCNode*, cocos2d::CCAction*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x208090, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, action);
}

auto cocos2d::CCNode::stopActionByTag(int p0) -> decltype(stopActionByTag(p0)) {
	using FunctionType = decltype(stopActionByTag(p0))(*)(cocos2d::CCNode*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x208098, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto cocos2d::CCNode::stopAllActions() -> decltype(stopAllActions()) {
	using FunctionType = decltype(stopAllActions())(*)(cocos2d::CCNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x206f24, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto cocos2d::CCNode::transform() -> decltype(transform()) {
	using FunctionType = decltype(transform())(*)(cocos2d::CCNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x207b6c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto cocos2d::CCNode::transformAncestors() -> decltype(transformAncestors()) {
	using FunctionType = decltype(transformAncestors())(*)(cocos2d::CCNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x207c20, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto cocos2d::CCNode::unschedule(cocos2d::SEL_SCHEDULE p0) -> decltype(unschedule(p0)) {
	using FunctionType = decltype(unschedule(p0))(*)(cocos2d::CCNode*, cocos2d::SEL_SCHEDULE);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x208290, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto cocos2d::CCNode::unscheduleAllSelectors() -> decltype(unscheduleAllSelectors()) {
	using FunctionType = decltype(unscheduleAllSelectors())(*)(cocos2d::CCNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x206f30, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto cocos2d::CCNode::unscheduleUpdate() -> decltype(unscheduleUpdate()) {
	using FunctionType = decltype(unscheduleUpdate())(*)(cocos2d::CCNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2081c0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto cocos2d::CCNode::updateChildIndexes() -> decltype(updateChildIndexes()) {
	using FunctionType = decltype(updateChildIndexes())(*)(cocos2d::CCNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x206a9c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}
