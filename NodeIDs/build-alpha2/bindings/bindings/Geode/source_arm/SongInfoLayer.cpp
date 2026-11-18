
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/SongInfoLayer.hpp>
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

auto SongInfoLayer::create(int artistID) -> decltype(create(artistID)) {
	using FunctionType = decltype(create(artistID))(*)(int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x259a90, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(artistID);
}

auto SongInfoLayer::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&SongInfoLayer::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(SongInfoLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5eff74, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto SongInfoLayer::onBPM(cocos2d::CCObject* sender) -> decltype(onBPM(sender)) {
	using FunctionType = decltype(onBPM(sender))(*)(SongInfoLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5ef6d0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SongInfoLayer::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	using FunctionType = decltype(onClose(sender))(*)(SongInfoLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5ef694, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SongInfoLayer::onMenuMusic(cocos2d::CCObject* sender) -> decltype(onMenuMusic(sender)) {
	using FunctionType = decltype(onMenuMusic(sender))(*)(SongInfoLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5ef9e0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SongInfoLayer::onPracticeMusic(cocos2d::CCObject* sender) -> decltype(onPracticeMusic(sender)) {
	using FunctionType = decltype(onPracticeMusic(sender))(*)(SongInfoLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5efa88, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SongInfoLayer::showCustomMusicUnlockInfo() -> decltype(showCustomMusicUnlockInfo()) {
	using FunctionType = decltype(showCustomMusicUnlockInfo())(*)(SongInfoLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5efc40, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}
