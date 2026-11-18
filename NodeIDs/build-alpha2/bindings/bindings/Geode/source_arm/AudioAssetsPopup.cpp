
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/AudioAssetsPopup.hpp>
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

auto AudioAssetsPopup::create(int p0, int p1, std::string const& p2, std::string const& p3) -> decltype(create(p0, p1, p2, p3)) {
	using FunctionType = decltype(create(p0, p1, p2, p3))(*)(int, int, std::string const&, std::string const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x7a49dc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1, p2, p3);
}

auto AudioAssetsPopup::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&AudioAssetsPopup::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(AudioAssetsPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x7a5234, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto AudioAssetsPopup::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCObject*>::func(&AudioAssetsPopup::onClose), this);
	using FunctionType = decltype(onClose(sender))(*)(AudioAssetsPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x7a51e8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, sender);
}

auto AudioAssetsPopup::musicActionFinished(GJMusicAction action) -> decltype(musicActionFinished(action)) {
	auto self = addresser::thunkAdjust(Resolve<GJMusicAction>::func(&AudioAssetsPopup::musicActionFinished), this);
	using FunctionType = decltype(musicActionFinished(action))(*)(AudioAssetsPopup*, GJMusicAction);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x7a5150, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, action);
}

auto AudioAssetsPopup::init(int songID, int officialSongID, std::string const& songList, std::string const& sfxList) -> decltype(init(songID, officialSongID, songList, sfxList)) {
	using FunctionType = decltype(init(songID, officialSongID, songList, sfxList))(*)(AudioAssetsPopup*, int, int, std::string const&, std::string const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x7a4aec, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, songID, officialSongID, songList, sfxList);
}
