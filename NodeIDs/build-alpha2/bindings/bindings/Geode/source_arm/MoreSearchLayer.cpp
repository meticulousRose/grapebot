
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/MoreSearchLayer.hpp>
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

auto MoreSearchLayer::init() -> decltype(init()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&MoreSearchLayer::init), this);
	using FunctionType = decltype(init())(*)(MoreSearchLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x61ac9c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto MoreSearchLayer::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&MoreSearchLayer::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(MoreSearchLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x61cb20, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto MoreSearchLayer::audioNext(cocos2d::CCObject* sender) -> decltype(audioNext(sender)) {
	using FunctionType = decltype(audioNext(sender))(*)(MoreSearchLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x61c6cc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto MoreSearchLayer::audioPrevious(cocos2d::CCObject* sender) -> decltype(audioPrevious(sender)) {
	using FunctionType = decltype(audioPrevious(sender))(*)(MoreSearchLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x61c658, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto MoreSearchLayer::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	using FunctionType = decltype(onClose(sender))(*)(MoreSearchLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x61be5c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto MoreSearchLayer::onCoins(cocos2d::CCObject* sender) -> decltype(onCoins(sender)) {
	using FunctionType = decltype(onCoins(sender))(*)(MoreSearchLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x61c278, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto MoreSearchLayer::onEpic(cocos2d::CCObject* sender) -> decltype(onEpic(sender)) {
	using FunctionType = decltype(onEpic(sender))(*)(MoreSearchLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x61c448, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto MoreSearchLayer::onFollowed(cocos2d::CCObject* sender) -> decltype(onFollowed(sender)) {
	using FunctionType = decltype(onFollowed(sender))(*)(MoreSearchLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x61c810, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto MoreSearchLayer::onFriends(cocos2d::CCObject* sender) -> decltype(onFriends(sender)) {
	using FunctionType = decltype(onFriends(sender))(*)(MoreSearchLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x61c850, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto MoreSearchLayer::onInfo(cocos2d::CCObject* sender) -> decltype(onInfo(sender)) {
	using FunctionType = decltype(onInfo(sender))(*)(MoreSearchLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x61c734, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto MoreSearchLayer::onLegendary(cocos2d::CCObject* sender) -> decltype(onLegendary(sender)) {
	using FunctionType = decltype(onLegendary(sender))(*)(MoreSearchLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x61c488, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto MoreSearchLayer::onMythic(cocos2d::CCObject* sender) -> decltype(onMythic(sender)) {
	using FunctionType = decltype(onMythic(sender))(*)(MoreSearchLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x61c4c8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto MoreSearchLayer::onOriginal(cocos2d::CCObject* sender) -> decltype(onOriginal(sender)) {
	using FunctionType = decltype(onOriginal(sender))(*)(MoreSearchLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x61c238, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto MoreSearchLayer::onSongFilter(cocos2d::CCObject* sender) -> decltype(onSongFilter(sender)) {
	using FunctionType = decltype(onSongFilter(sender))(*)(MoreSearchLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x61c2f8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto MoreSearchLayer::onSongMode(cocos2d::CCObject* sender) -> decltype(onSongMode(sender)) {
	using FunctionType = decltype(onSongMode(sender))(*)(MoreSearchLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x61c508, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto MoreSearchLayer::onTwoPlayer(cocos2d::CCObject* sender) -> decltype(onTwoPlayer(sender)) {
	using FunctionType = decltype(onTwoPlayer(sender))(*)(MoreSearchLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x61c2b8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto MoreSearchLayer::selectSong(int songID) -> decltype(selectSong(songID)) {
	using FunctionType = decltype(selectSong(songID))(*)(MoreSearchLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x61c988, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, songID);
}

auto MoreSearchLayer::toggleSongNodes(bool custom, bool disable) -> decltype(toggleSongNodes(custom, disable)) {
	using FunctionType = decltype(toggleSongNodes(custom, disable))(*)(MoreSearchLayer*, bool, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x61c890, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, custom, disable);
}

auto MoreSearchLayer::updateAudioLabel() -> decltype(updateAudioLabel()) {
	using FunctionType = decltype(updateAudioLabel())(*)(MoreSearchLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x61c9d0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}
