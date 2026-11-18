#include <Geode/cocos/cocoa/CCObject.h>

#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/BoomScrollLayer.hpp>
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

BoomScrollLayer::~BoomScrollLayer() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(BoomScrollLayer*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x319a50, tulip::hook::TulipConvention::Default);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) BoomScrollLayer(geode::CutoffConstructor, sizeof(BoomScrollLayer));
		geode::DestructorLock::addLock(this);
	}
}

auto BoomScrollLayer::create(cocos2d::CCArray* pages, int offset, bool looped) -> decltype(create(pages, offset, looped)) {
	using FunctionType = decltype(create(pages, offset, looped))(*)(cocos2d::CCArray*, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x318adc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(pages, offset, looped);
}

auto BoomScrollLayer::create(cocos2d::CCArray* pages, int offset, bool looped, cocos2d::CCArray* dynamicObjects, DynamicScrollDelegate* delegate) -> decltype(create(pages, offset, looped, dynamicObjects, delegate)) {
	using FunctionType = decltype(create(pages, offset, looped, dynamicObjects, delegate))(*)(cocos2d::CCArray*, int, bool, cocos2d::CCArray*, DynamicScrollDelegate*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x318710, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(pages, offset, looped, dynamicObjects, delegate);
}

auto BoomScrollLayer::visit() -> decltype(visit()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&BoomScrollLayer::visit), this);
	using FunctionType = decltype(visit())(*)(BoomScrollLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x319e18, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto BoomScrollLayer::ccTouchBegan(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) -> decltype(ccTouchBegan(touch, event)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&BoomScrollLayer::ccTouchBegan), this);
	using FunctionType = decltype(ccTouchBegan(touch, event))(*)(BoomScrollLayer*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x31a9ec, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, touch, event);
}

auto BoomScrollLayer::ccTouchMoved(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) -> decltype(ccTouchMoved(touch, event)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&BoomScrollLayer::ccTouchMoved), this);
	using FunctionType = decltype(ccTouchMoved(touch, event))(*)(BoomScrollLayer*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x31aac4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, touch, event);
}

auto BoomScrollLayer::ccTouchEnded(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) -> decltype(ccTouchEnded(touch, event)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&BoomScrollLayer::ccTouchEnded), this);
	using FunctionType = decltype(ccTouchEnded(touch, event))(*)(BoomScrollLayer*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x31ad90, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, touch, event);
}

auto BoomScrollLayer::ccTouchCancelled(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) -> decltype(ccTouchCancelled(touch, event)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&BoomScrollLayer::ccTouchCancelled), this);
	using FunctionType = decltype(ccTouchCancelled(touch, event))(*)(BoomScrollLayer*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x31a830, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, touch, event);
}

auto BoomScrollLayer::registerWithTouchDispatcher() -> decltype(registerWithTouchDispatcher()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&BoomScrollLayer::registerWithTouchDispatcher), this);
	using FunctionType = decltype(registerWithTouchDispatcher())(*)(BoomScrollLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x31a6b8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto BoomScrollLayer::touchInsideClip(cocos2d::CCPoint const& p0) -> decltype(touchInsideClip(p0)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCPoint const&>::func(&BoomScrollLayer::touchInsideClip), this);
	using FunctionType = decltype(touchInsideClip(p0))(*)(BoomScrollLayer*, cocos2d::CCPoint const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x319e9c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto BoomScrollLayer::addPage(cocos2d::CCLayer* page) -> decltype(addPage(page)) {
	using FunctionType = decltype(addPage(page))(*)(BoomScrollLayer*, cocos2d::CCLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x31a484, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, page);
}

auto BoomScrollLayer::addPage(cocos2d::CCLayer* page, int index) -> decltype(addPage(page, index)) {
	using FunctionType = decltype(addPage(page, index))(*)(BoomScrollLayer*, cocos2d::CCLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x31a4f4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, page, index);
}

auto BoomScrollLayer::getPage(int page) -> decltype(getPage(page)) {
	using FunctionType = decltype(getPage(page))(*)(BoomScrollLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x319968, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, page);
}

auto BoomScrollLayer::getRelativePageForNum(int page) -> decltype(getRelativePageForNum(page)) {
	using FunctionType = decltype(getRelativePageForNum(page))(*)(BoomScrollLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x319d44, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, page);
}

auto BoomScrollLayer::getRelativePosForPage(int page) -> decltype(getRelativePosForPage(page)) {
	using FunctionType = decltype(getRelativePosForPage(page))(*)(BoomScrollLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x319918, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, page);
}

auto BoomScrollLayer::getTotalPages() -> decltype(getTotalPages()) {
	using FunctionType = decltype(getTotalPages())(*)(BoomScrollLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x319608, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto BoomScrollLayer::init(cocos2d::CCArray* pages, int offset, bool looped, cocos2d::CCArray* dynamicObjects, DynamicScrollDelegate* delegate) -> decltype(init(pages, offset, looped, dynamicObjects, delegate)) {
	using FunctionType = decltype(init(pages, offset, looped, dynamicObjects, delegate))(*)(BoomScrollLayer*, cocos2d::CCArray*, int, bool, cocos2d::CCArray*, DynamicScrollDelegate*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3187c8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, pages, offset, looped, dynamicObjects, delegate);
}

auto BoomScrollLayer::instantMoveToPage(int page) -> decltype(instantMoveToPage(page)) {
	using FunctionType = decltype(instantMoveToPage(page))(*)(BoomScrollLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x31a0f8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, page);
}

auto BoomScrollLayer::moveToPage(int page) -> decltype(moveToPage(page)) {
	using FunctionType = decltype(moveToPage(page))(*)(BoomScrollLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x31a1d0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, page);
}

auto BoomScrollLayer::moveToPageEnded() -> decltype(moveToPageEnded()) {
	using FunctionType = decltype(moveToPageEnded())(*)(BoomScrollLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x319f68, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto BoomScrollLayer::pageNumberForPosition(cocos2d::CCPoint position) -> decltype(pageNumberForPosition(position)) {
	using FunctionType = decltype(pageNumberForPosition(position))(*)(BoomScrollLayer*, cocos2d::CCPoint);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x319c6c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, position);
}

auto BoomScrollLayer::positionForPageWithNumber(int page) -> decltype(positionForPageWithNumber(page)) {
	using FunctionType = decltype(positionForPageWithNumber(page))(*)(BoomScrollLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x31a0a4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, page);
}

auto BoomScrollLayer::removePage(cocos2d::CCLayer* page) -> decltype(removePage(page)) {
	using FunctionType = decltype(removePage(page))(*)(BoomScrollLayer*, cocos2d::CCLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x31a55c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, page);
}

auto BoomScrollLayer::removePageWithNumber(int page) -> decltype(removePageWithNumber(page)) {
	using FunctionType = decltype(removePageWithNumber(page))(*)(BoomScrollLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x31a5f0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, page);
}

auto BoomScrollLayer::repositionPagesLooped() -> decltype(repositionPagesLooped()) {
	using FunctionType = decltype(repositionPagesLooped())(*)(BoomScrollLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x318d70, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto BoomScrollLayer::selectPage(int page) -> decltype(selectPage(page)) {
	using FunctionType = decltype(selectPage(page))(*)(BoomScrollLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x31a374, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, page);
}

auto BoomScrollLayer::setDotScale(float scale) -> decltype(setDotScale(scale)) {
	using FunctionType = decltype(setDotScale(scale))(*)(BoomScrollLayer*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3198b0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, scale);
}

auto BoomScrollLayer::setPagesIndicatorPosition(cocos2d::CCPoint pos) -> decltype(setPagesIndicatorPosition(pos)) {
	using FunctionType = decltype(setPagesIndicatorPosition(pos))(*)(BoomScrollLayer*, cocos2d::CCPoint);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x318c28, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, pos);
}

auto BoomScrollLayer::setupDynamicScrolling(cocos2d::CCArray* dynamicObjects, DynamicScrollDelegate* delegate) -> decltype(setupDynamicScrolling(dynamicObjects, delegate)) {
	using FunctionType = decltype(setupDynamicScrolling(dynamicObjects, delegate))(*)(BoomScrollLayer*, cocos2d::CCArray*, DynamicScrollDelegate*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3193c0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, dynamicObjects, delegate);
}

auto BoomScrollLayer::togglePageIndicators(bool visible) -> decltype(togglePageIndicators(visible)) {
	using FunctionType = decltype(togglePageIndicators(visible))(*)(BoomScrollLayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x319dac, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, visible);
}

auto BoomScrollLayer::updateDots(float dt) -> decltype(updateDots(dt)) {
	using FunctionType = decltype(updateDots(dt))(*)(BoomScrollLayer*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x319624, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, dt);
}

auto BoomScrollLayer::updatePages() -> decltype(updatePages()) {
	using FunctionType = decltype(updatePages())(*)(BoomScrollLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x318c50, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}
