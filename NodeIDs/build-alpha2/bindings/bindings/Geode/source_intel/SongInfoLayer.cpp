
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

auto SongInfoLayer::create(SongInfoObject* p0) -> decltype(create(p0)) {
	using FunctionType = decltype(create(p0))(*)(SongInfoObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x6d77b0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0);
}

auto SongInfoLayer::create(int artistID) -> decltype(create(artistID)) {
	using FunctionType = decltype(create(artistID))(*)(int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x6d6840, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(artistID);
}

auto SongInfoLayer::create(std::string p0, std::string p1, std::vector<GJLinkObject> p2, std::vector<GJLinkObject> p3, int p4, std::string p5, int p6) -> decltype(create(p0, p1, p2, p3, p4, p5, p6)) {
	using FunctionType = decltype(create(p0, p1, p2, p3, p4, p5, p6))(*)(std::string, std::string, std::vector<GJLinkObject>, std::vector<GJLinkObject>, int, std::string, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x6d71c0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1, p2, p3, p4, p5, p6);
}

auto SongInfoLayer::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&SongInfoLayer::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(SongInfoLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x6d99a0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto SongInfoLayer::init(std::string p0, std::string p1, std::vector<GJLinkObject> p2, std::vector<GJLinkObject> p3, int p4, std::string p5, int p6) -> decltype(init(p0, p1, p2, p3, p4, p5, p6)) {
	using FunctionType = decltype(init(p0, p1, p2, p3, p4, p5, p6))(*)(SongInfoLayer*, std::string, std::string, std::vector<GJLinkObject>, std::vector<GJLinkObject>, int, std::string, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x6d7ee0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1, p2, p3, p4, p5, p6);
}

auto SongInfoLayer::onBPM(cocos2d::CCObject* sender) -> decltype(onBPM(sender)) {
	using FunctionType = decltype(onBPM(sender))(*)(SongInfoLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x6d91d0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SongInfoLayer::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	using FunctionType = decltype(onClose(sender))(*)(SongInfoLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x6d91a0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SongInfoLayer::onMenuMusic(cocos2d::CCObject* sender) -> decltype(onMenuMusic(sender)) {
	using FunctionType = decltype(onMenuMusic(sender))(*)(SongInfoLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x6d9500, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SongInfoLayer::onPracticeMusic(cocos2d::CCObject* sender) -> decltype(onPracticeMusic(sender)) {
	using FunctionType = decltype(onPracticeMusic(sender))(*)(SongInfoLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x6d9590, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SongInfoLayer::showCustomMusicUnlockInfo() -> decltype(showCustomMusicUnlockInfo()) {
	using FunctionType = decltype(showCustomMusicUnlockInfo())(*)(SongInfoLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x6d9710, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}
