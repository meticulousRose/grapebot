#include <Geode/cocos/cocoa/CCObject.h>

#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/LevelSelectLayer.hpp>
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

LevelSelectLayer::~LevelSelectLayer() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(LevelSelectLayer*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x41f0c0, tulip::hook::TulipConvention::Default);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) LevelSelectLayer(geode::CutoffConstructor, sizeof(LevelSelectLayer));
		geode::DestructorLock::addLock(this);
	}
}

auto LevelSelectLayer::create(int page) -> decltype(create(page)) {
	using FunctionType = decltype(create(page))(*)(int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x41f270, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(page);
}

auto LevelSelectLayer::scene(int page) -> decltype(scene(page)) {
	using FunctionType = decltype(scene(page))(*)(int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x41f140, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(page);
}

auto LevelSelectLayer::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&LevelSelectLayer::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(LevelSelectLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4220f0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto LevelSelectLayer::keyDown(cocos2d::enumKeyCodes key, double timestamp) -> decltype(keyDown(key, timestamp)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::enumKeyCodes, double>::func(&LevelSelectLayer::keyDown), this);
	using FunctionType = decltype(keyDown(key, timestamp))(*)(LevelSelectLayer*, cocos2d::enumKeyCodes, double);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x422190, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, key, timestamp);
}

auto LevelSelectLayer::updatePageWithObject(cocos2d::CCObject* layer, cocos2d::CCObject* object) -> decltype(updatePageWithObject(layer, object)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCObject*, cocos2d::CCObject*>::func(&LevelSelectLayer::updatePageWithObject), this);
	using FunctionType = decltype(updatePageWithObject(layer, object))(*)(LevelSelectLayer*, cocos2d::CCObject*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4203e0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, layer, object);
}

auto LevelSelectLayer::scrollLayerMoved(cocos2d::CCPoint position) -> decltype(scrollLayerMoved(position)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCPoint>::func(&LevelSelectLayer::scrollLayerMoved), this);
	using FunctionType = decltype(scrollLayerMoved(position))(*)(LevelSelectLayer*, cocos2d::CCPoint);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x421ba0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, position);
}

auto LevelSelectLayer::colorForPage(int page) -> decltype(colorForPage(page)) {
	using FunctionType = decltype(colorForPage(page))(*)(LevelSelectLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x422070, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, page);
}

auto LevelSelectLayer::getColorValue(int page1, int page2, float progress) -> decltype(getColorValue(page1, page2, progress)) {
	using FunctionType = decltype(getColorValue(page1, page2, progress))(*)(LevelSelectLayer*, int, int, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x421dc0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, page1, page2, progress);
}

auto LevelSelectLayer::init(int page) -> decltype(init(page)) {
	using FunctionType = decltype(init(page))(*)(LevelSelectLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x41f370, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, page);
}

auto LevelSelectLayer::onBack(cocos2d::CCObject* sender) -> decltype(onBack(sender)) {
	using FunctionType = decltype(onBack(sender))(*)(LevelSelectLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x420250, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto LevelSelectLayer::onDownload(cocos2d::CCObject* sender) -> decltype(onDownload(sender)) {
	using FunctionType = decltype(onDownload(sender))(*)(LevelSelectLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4201a0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto LevelSelectLayer::onInfo(cocos2d::CCObject* sender) -> decltype(onInfo(sender)) {
	using FunctionType = decltype(onInfo(sender))(*)(LevelSelectLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4202a0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto LevelSelectLayer::onNext(cocos2d::CCObject* sender) -> decltype(onNext(sender)) {
	using FunctionType = decltype(onNext(sender))(*)(LevelSelectLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x420220, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto LevelSelectLayer::onPlay(cocos2d::CCObject* sender) -> decltype(onPlay(sender)) {
	using FunctionType = decltype(onPlay(sender))(*)(LevelSelectLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x422340, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto LevelSelectLayer::onPrev(cocos2d::CCObject* sender) -> decltype(onPrev(sender)) {
	using FunctionType = decltype(onPrev(sender))(*)(LevelSelectLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4201f0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto LevelSelectLayer::tryShowAd() -> decltype(tryShowAd()) {
	using FunctionType = decltype(tryShowAd())(*)(LevelSelectLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4203c0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}
