#include <Geode/cocos/cocoa/CCObject.h>

#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/MenuLayer.hpp>
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

MenuLayer::~MenuLayer() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(MenuLayer*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x37a980, tulip::hook::TulipConvention::Default);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) MenuLayer(geode::CutoffConstructor, sizeof(MenuLayer));
		geode::DestructorLock::addLock(this);
	}
}

auto MenuLayer::scene(bool isVideoOptionsOpen) -> decltype(scene(isVideoOptionsOpen)) {
	using FunctionType = decltype(scene(isVideoOptionsOpen))(*)(bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x37ab40, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(isVideoOptionsOpen);
}

auto MenuLayer::init() -> decltype(init()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&MenuLayer::init), this);
	using FunctionType = decltype(init())(*)(MenuLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x37ad10, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto MenuLayer::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&MenuLayer::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(MenuLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x37cfe0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto MenuLayer::keyDown(cocos2d::enumKeyCodes key, double timestamp) -> decltype(keyDown(key, timestamp)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::enumKeyCodes, double>::func(&MenuLayer::keyDown), this);
	using FunctionType = decltype(keyDown(key, timestamp))(*)(MenuLayer*, cocos2d::enumKeyCodes, double);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x37d2b0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, key, timestamp);
}

auto MenuLayer::googlePlaySignedIn() -> decltype(googlePlaySignedIn()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&MenuLayer::googlePlaySignedIn), this);
	using FunctionType = decltype(googlePlaySignedIn())(*)(MenuLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x37cd50, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto MenuLayer::FLAlert_Clicked(FLAlertLayer* layer, bool btn2) -> decltype(FLAlert_Clicked(layer, btn2)) {
	auto self = addresser::thunkAdjust(Resolve<FLAlertLayer*, bool>::func(&MenuLayer::FLAlert_Clicked), this);
	using FunctionType = decltype(FLAlert_Clicked(layer, btn2))(*)(MenuLayer*, FLAlertLayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x37d010, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, layer, btn2);
}

auto MenuLayer::musicActionFinished(GJMusicAction p0) -> decltype(musicActionFinished(p0)) {
	auto self = addresser::thunkAdjust(Resolve<GJMusicAction>::func(&MenuLayer::musicActionFinished), this);
	using FunctionType = decltype(musicActionFinished(p0))(*)(MenuLayer*, GJMusicAction);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x37cb80, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto MenuLayer::endGame() -> decltype(endGame()) {
	using FunctionType = decltype(endGame())(*)(MenuLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x37d280, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto MenuLayer::firstNetworkTest() -> decltype(firstNetworkTest()) {
	using FunctionType = decltype(firstNetworkTest())(*)(MenuLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x37c970, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto MenuLayer::onAchievements(cocos2d::CCObject* sender) -> decltype(onAchievements(sender)) {
	using FunctionType = decltype(onAchievements(sender))(*)(MenuLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x37c3a0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto MenuLayer::onCreator(cocos2d::CCObject* sender) -> decltype(onCreator(sender)) {
	using FunctionType = decltype(onCreator(sender))(*)(MenuLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x37c320, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto MenuLayer::onDaily(cocos2d::CCObject* sender) -> decltype(onDaily(sender)) {
	using FunctionType = decltype(onDaily(sender))(*)(MenuLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x37c910, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto MenuLayer::onDiscord(cocos2d::CCObject* sender) -> decltype(onDiscord(sender)) {
	using FunctionType = decltype(onDiscord(sender))(*)(MenuLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3837d0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto MenuLayer::onEveryplay(cocos2d::CCObject* sender) -> decltype(onEveryplay(sender)) {
	using FunctionType = decltype(onEveryplay(sender))(*)(MenuLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x37ce60, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto MenuLayer::onFreeLevels(cocos2d::CCObject* sender) -> decltype(onFreeLevels(sender)) {
	using FunctionType = decltype(onFreeLevels(sender))(*)(MenuLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x37cf30, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto MenuLayer::onFullVersion(cocos2d::CCObject* sender) -> decltype(onFullVersion(sender)) {
	using FunctionType = decltype(onFullVersion(sender))(*)(MenuLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x37cf50, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto MenuLayer::onGameCenter(cocos2d::CCObject* sender) -> decltype(onGameCenter(sender)) {
	using FunctionType = decltype(onGameCenter(sender))(*)(MenuLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x37cbc0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto MenuLayer::onGarage(cocos2d::CCObject* sender) -> decltype(onGarage(sender)) {
	using FunctionType = decltype(onGarage(sender))(*)(MenuLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x37c2a0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto MenuLayer::onGooglePlayGames(cocos2d::CCObject* sender) -> decltype(onGooglePlayGames(sender)) {
	using FunctionType = decltype(onGooglePlayGames(sender))(*)(MenuLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x37cd20, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto MenuLayer::onMoreGames(cocos2d::CCObject* sender) -> decltype(onMoreGames(sender)) {
	using FunctionType = decltype(onMoreGames(sender))(*)(MenuLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x37cb00, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto MenuLayer::onMyProfile(cocos2d::CCObject* sender) -> decltype(onMyProfile(sender)) {
	using FunctionType = decltype(onMyProfile(sender))(*)(MenuLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x37c710, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto MenuLayer::onNewgrounds(cocos2d::CCObject* sender) -> decltype(onNewgrounds(sender)) {
	using FunctionType = decltype(onNewgrounds(sender))(*)(MenuLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x37c460, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto MenuLayer::onOptions(cocos2d::CCObject* sender) -> decltype(onOptions(sender)) {
	using FunctionType = decltype(onOptions(sender))(*)(MenuLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x37c3e0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto MenuLayer::onOptionsInstant() -> decltype(onOptionsInstant()) {
	using FunctionType = decltype(onOptionsInstant())(*)(MenuLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x37acb0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto MenuLayer::onPlay(cocos2d::CCObject* sender) -> decltype(onPlay(sender)) {
	using FunctionType = decltype(onPlay(sender))(*)(MenuLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x37c210, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto MenuLayer::onQuit(cocos2d::CCObject* sender) -> decltype(onQuit(sender)) {
	using FunctionType = decltype(onQuit(sender))(*)(MenuLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x37c640, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto MenuLayer::onRobTop(cocos2d::CCObject* sender) -> decltype(onRobTop(sender)) {
	using FunctionType = decltype(onRobTop(sender))(*)(MenuLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x37c530, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto MenuLayer::onStats(cocos2d::CCObject* sender) -> decltype(onStats(sender)) {
	using FunctionType = decltype(onStats(sender))(*)(MenuLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x37c420, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto MenuLayer::onTrailer(cocos2d::CCObject* sender) -> decltype(onTrailer(sender)) {
	using FunctionType = decltype(onTrailer(sender))(*)(MenuLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x37cfa0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto MenuLayer::onTwitch(cocos2d::CCObject* sender) -> decltype(onTwitch(sender)) {
	using FunctionType = decltype(onTwitch(sender))(*)(MenuLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3837b0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto MenuLayer::openOptions(bool videoOptions) -> decltype(openOptions(videoOptions)) {
	using FunctionType = decltype(openOptions(videoOptions))(*)(MenuLayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x37ce70, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, videoOptions);
}

auto MenuLayer::showGCQuestion() -> decltype(showGCQuestion()) {
	using FunctionType = decltype(showGCQuestion())(*)(MenuLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x37cc10, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto MenuLayer::showMeltdownPromo() -> decltype(showMeltdownPromo()) {
	using FunctionType = decltype(showMeltdownPromo())(*)(MenuLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x37ca90, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto MenuLayer::showTOS() -> decltype(showTOS()) {
	using FunctionType = decltype(showTOS())(*)(MenuLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x37c930, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto MenuLayer::syncPlatformAchievements(float dt) -> decltype(syncPlatformAchievements(dt)) {
	using FunctionType = decltype(syncPlatformAchievements(dt))(*)(MenuLayer*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x37ce20, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, dt);
}

auto MenuLayer::tryShowAd(float dt) -> decltype(tryShowAd(dt)) {
	using FunctionType = decltype(tryShowAd(dt))(*)(MenuLayer*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x37caa0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, dt);
}

auto MenuLayer::updateNewsBadge() -> decltype(updateNewsBadge()) {
	using FunctionType = decltype(updateNewsBadge())(*)(MenuLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x37c990, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto MenuLayer::updateUserProfileButton() -> decltype(updateUserProfileButton()) {
	using FunctionType = decltype(updateUserProfileButton())(*)(MenuLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x37c790, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto MenuLayer::videoOptionsClosed() -> decltype(videoOptionsClosed()) {
	using FunctionType = decltype(videoOptionsClosed())(*)(MenuLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x37cf10, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto MenuLayer::videoOptionsOpened() -> decltype(videoOptionsOpened()) {
	using FunctionType = decltype(videoOptionsOpened())(*)(MenuLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x37cef0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto MenuLayer::willClose() -> decltype(willClose()) {
	using FunctionType = decltype(willClose())(*)(MenuLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x37aa70, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}
