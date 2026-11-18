#include <Geode/cocos/cocoa/CCObject.h>

#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/ScrollableContentLayer.hpp>
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

ScrollableContentLayer::~ScrollableContentLayer() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(ScrollableContentLayer*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x84a7ac, tulip::hook::TulipConvention::Default);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) ScrollableContentLayer(geode::CutoffConstructor, sizeof(ScrollableContentLayer));
		geode::DestructorLock::addLock(this);
	}
}

auto ScrollableContentLayer::create(cocos2d::CCSize size) -> decltype(create(size)) {
	using FunctionType = decltype(create(size))(*)(cocos2d::CCSize);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x847c4c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(size);
}

auto ScrollableContentLayer::update(float dt) -> decltype(update(dt)) {
	auto self = addresser::thunkAdjust(Resolve<float>::func(&ScrollableContentLayer::update), this);
	using FunctionType = decltype(update(dt))(*)(ScrollableContentLayer*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x84978c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, dt);
}

auto ScrollableContentLayer::visit() -> decltype(visit()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&ScrollableContentLayer::visit), this);
	using FunctionType = decltype(visit())(*)(ScrollableContentLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8493f4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto ScrollableContentLayer::touchInsideClip(cocos2d::CCPoint const& point) -> decltype(touchInsideClip(point)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCPoint const&>::func(&ScrollableContentLayer::touchInsideClip), this);
	using FunctionType = decltype(touchInsideClip(point))(*)(ScrollableContentLayer*, cocos2d::CCPoint const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8494ac, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, point);
}

auto ScrollableContentLayer::scrollWheel(float y, float x) -> decltype(scrollWheel(y, x)) {
	auto self = addresser::thunkAdjust(Resolve<float, float>::func(&ScrollableContentLayer::scrollWheel), this);
	using FunctionType = decltype(scrollWheel(y, x))(*)(ScrollableContentLayer*, float, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x84961c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, y, x);
}

auto ScrollableContentLayer::applyContentPosition() -> decltype(applyContentPosition()) {
	using FunctionType = decltype(applyContentPosition())(*)(ScrollableContentLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x847da0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto ScrollableContentLayer::ensureOwnedContentNode() -> decltype(ensureOwnedContentNode()) {
	using FunctionType = decltype(ensureOwnedContentNode())(*)(ScrollableContentLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8499b4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto ScrollableContentLayer::ensureScrollThumb() -> decltype(ensureScrollThumb()) {
	using FunctionType = decltype(ensureScrollThumb())(*)(ScrollableContentLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x848098, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto ScrollableContentLayer::handleTouchBegan(cocos2d::CCTouch* touch) -> decltype(handleTouchBegan(touch)) {
	using FunctionType = decltype(handleTouchBegan(touch))(*)(ScrollableContentLayer*, cocos2d::CCTouch*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8489fc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, touch);
}

auto ScrollableContentLayer::reloadVirtualRows(float offset) -> decltype(reloadVirtualRows(offset)) {
	using FunctionType = decltype(reloadVirtualRows(offset))(*)(ScrollableContentLayer*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x84a1b8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, offset);
}

auto ScrollableContentLayer::scrollTo(float offset) -> decltype(scrollTo(offset)) {
	using FunctionType = decltype(scrollTo(offset))(*)(ScrollableContentLayer*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8482e8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, offset);
}

auto ScrollableContentLayer::setContentHeight(float height) -> decltype(setContentHeight(height)) {
	using FunctionType = decltype(setContentHeight(height))(*)(ScrollableContentLayer*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x847efc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, height);
}

auto ScrollableContentLayer::setViewSize(cocos2d::CCSize size) -> decltype(setViewSize(size)) {
	using FunctionType = decltype(setViewSize(size))(*)(ScrollableContentLayer*, cocos2d::CCSize);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x848180, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, size);
}

auto ScrollableContentLayer::updateVirtualRows() -> decltype(updateVirtualRows()) {
	using FunctionType = decltype(updateVirtualRows())(*)(ScrollableContentLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x84873c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}
