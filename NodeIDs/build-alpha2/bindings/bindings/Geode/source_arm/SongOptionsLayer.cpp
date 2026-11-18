
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/SongOptionsLayer.hpp>
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

auto SongOptionsLayer::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&SongOptionsLayer::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(SongOptionsLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1ac344, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto SongOptionsLayer::init(CustomSongDelegate* delegate) -> decltype(init(delegate)) {
	using FunctionType = decltype(init(delegate))(*)(SongOptionsLayer*, CustomSongDelegate*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1ab504, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, delegate);
}

auto SongOptionsLayer::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	using FunctionType = decltype(onClose(sender))(*)(SongOptionsLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1abf9c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SongOptionsLayer::onFadeIn(cocos2d::CCObject* sender) -> decltype(onFadeIn(sender)) {
	using FunctionType = decltype(onFadeIn(sender))(*)(SongOptionsLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1abeb8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SongOptionsLayer::onFadeOut(cocos2d::CCObject* sender) -> decltype(onFadeOut(sender)) {
	using FunctionType = decltype(onFadeOut(sender))(*)(SongOptionsLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1abf04, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SongOptionsLayer::onInfo(cocos2d::CCObject* sender) -> decltype(onInfo(sender)) {
	using FunctionType = decltype(onInfo(sender))(*)(SongOptionsLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1ac0ac, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SongOptionsLayer::onPlayback(cocos2d::CCObject* sender) -> decltype(onPlayback(sender)) {
	using FunctionType = decltype(onPlayback(sender))(*)(SongOptionsLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1ac18c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SongOptionsLayer::onSongPersistent(cocos2d::CCObject* sender) -> decltype(onSongPersistent(sender)) {
	using FunctionType = decltype(onSongPersistent(sender))(*)(SongOptionsLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1abf50, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SongOptionsLayer::updatePlaybackBtn() -> decltype(updatePlaybackBtn()) {
	using FunctionType = decltype(updatePlaybackBtn())(*)(SongOptionsLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1ac2d8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}
