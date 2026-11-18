#include <Geode/cocos/cocoa/CCObject.h>

#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/MoreOptionsLayer.hpp>
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

MoreOptionsLayer::~MoreOptionsLayer() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(MoreOptionsLayer*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x87c6a0, tulip::hook::TulipConvention::Default);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) MoreOptionsLayer(geode::CutoffConstructor, sizeof(MoreOptionsLayer));
		geode::DestructorLock::addLock(this);
	}
}

auto MoreOptionsLayer::create() -> decltype(create()) {
	using FunctionType = decltype(create())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x87c820, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto MoreOptionsLayer::init() -> decltype(init()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&MoreOptionsLayer::init), this);
	using FunctionType = decltype(init())(*)(MoreOptionsLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x87ca40, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto MoreOptionsLayer::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&MoreOptionsLayer::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(MoreOptionsLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x87fce0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto MoreOptionsLayer::googlePlaySignedIn() -> decltype(googlePlaySignedIn()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&MoreOptionsLayer::googlePlaySignedIn), this);
	using FunctionType = decltype(googlePlaySignedIn())(*)(MoreOptionsLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x87fd10, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto MoreOptionsLayer::dropDownLayerWillClose(GJDropDownLayer* layer) -> decltype(dropDownLayerWillClose(layer)) {
	auto self = addresser::thunkAdjust(Resolve<GJDropDownLayer*>::func(&MoreOptionsLayer::dropDownLayerWillClose), this);
	using FunctionType = decltype(dropDownLayerWillClose(layer))(*)(MoreOptionsLayer*, GJDropDownLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x87fca0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, layer);
}

auto MoreOptionsLayer::goToPage(int page) -> decltype(goToPage(page)) {
	using FunctionType = decltype(goToPage(page))(*)(MoreOptionsLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x87ea40, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, page);
}

auto MoreOptionsLayer::layerKey(int page) -> decltype(layerKey(page)) {
	using FunctionType = decltype(layerKey(page))(*)(MoreOptionsLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x87fc80, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, page);
}

auto MoreOptionsLayer::objectKey(int page) -> decltype(objectKey(page)) {
	using FunctionType = decltype(objectKey(page))(*)(MoreOptionsLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x87fc60, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, page);
}

auto MoreOptionsLayer::objectsForPage(int page) -> decltype(objectsForPage(page)) {
	using FunctionType = decltype(objectsForPage(page))(*)(MoreOptionsLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x87e440, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, page);
}

auto MoreOptionsLayer::offsetToNextPage() -> decltype(offsetToNextPage()) {
	using FunctionType = decltype(offsetToNextPage())(*)(MoreOptionsLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x87e400, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto MoreOptionsLayer::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	using FunctionType = decltype(onClose(sender))(*)(MoreOptionsLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x87e960, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto MoreOptionsLayer::onFMODDebug(cocos2d::CCObject* sender) -> decltype(onFMODDebug(sender)) {
	using FunctionType = decltype(onFMODDebug(sender))(*)(MoreOptionsLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x87e680, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto MoreOptionsLayer::onGPSignIn(cocos2d::CCObject* sender) -> decltype(onGPSignIn(sender)) {
	using FunctionType = decltype(onGPSignIn(sender))(*)(MoreOptionsLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x87e7d0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto MoreOptionsLayer::onGPSignOut(cocos2d::CCObject* sender) -> decltype(onGPSignOut(sender)) {
	using FunctionType = decltype(onGPSignOut(sender))(*)(MoreOptionsLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x87e830, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto MoreOptionsLayer::onParental(cocos2d::CCObject* sender) -> decltype(onParental(sender)) {
	using FunctionType = decltype(onParental(sender))(*)(MoreOptionsLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x29ec00, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto MoreOptionsLayer::onSongBrowser(cocos2d::CCObject* sender) -> decltype(onSongBrowser(sender)) {
	using FunctionType = decltype(onSongBrowser(sender))(*)(MoreOptionsLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x87e620, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto MoreOptionsLayer::onToggle(cocos2d::CCObject* sender) -> decltype(onToggle(sender)) {
	using FunctionType = decltype(onToggle(sender))(*)(MoreOptionsLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x87f230, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto MoreOptionsLayer::pageKey(int page) -> decltype(pageKey(page)) {
	using FunctionType = decltype(pageKey(page))(*)(MoreOptionsLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x87fc40, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, page);
}

auto MoreOptionsLayer::toggleGP() -> decltype(toggleGP()) {
	using FunctionType = decltype(toggleGP())(*)(MoreOptionsLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x87e8b0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}
