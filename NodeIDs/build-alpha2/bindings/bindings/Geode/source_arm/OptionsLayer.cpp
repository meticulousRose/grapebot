#include <Geode/cocos/cocoa/CCObject.h>

#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/OptionsLayer.hpp>
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

OptionsLayer::~OptionsLayer() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(OptionsLayer*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x770288, tulip::hook::TulipConvention::Default);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) OptionsLayer(geode::CutoffConstructor, sizeof(OptionsLayer));
		geode::DestructorLock::addLock(this);
	}
}

auto OptionsLayer::create() -> decltype(create()) {
	using FunctionType = decltype(create())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x770080, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto OptionsLayer::customSetup() -> decltype(customSetup()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&OptionsLayer::customSetup), this);
	using FunctionType = decltype(customSetup())(*)(OptionsLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x7705b0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto OptionsLayer::layerHidden() -> decltype(layerHidden()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&OptionsLayer::layerHidden), this);
	using FunctionType = decltype(layerHidden())(*)(OptionsLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x771bec, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto OptionsLayer::FLAlert_Clicked(FLAlertLayer* layer, bool btn2) -> decltype(FLAlert_Clicked(layer, btn2)) {
	auto self = addresser::thunkAdjust(Resolve<FLAlertLayer*, bool>::func(&OptionsLayer::FLAlert_Clicked), this);
	using FunctionType = decltype(FLAlert_Clicked(layer, btn2))(*)(OptionsLayer*, FLAlertLayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x771c78, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, layer, btn2);
}

auto OptionsLayer::volumeChanged() -> decltype(volumeChanged()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&OptionsLayer::volumeChanged), this);
	using FunctionType = decltype(volumeChanged())(*)(OptionsLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x770508, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto OptionsLayer::exitLayer() -> decltype(exitLayer()) {
	using FunctionType = decltype(exitLayer())(*)(OptionsLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x771644, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto OptionsLayer::musicSliderChanged(cocos2d::CCObject* sender) -> decltype(musicSliderChanged(sender)) {
	using FunctionType = decltype(musicSliderChanged(sender))(*)(OptionsLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x77154c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto OptionsLayer::onAccount(cocos2d::CCObject* sender) -> decltype(onAccount(sender)) {
	using FunctionType = decltype(onAccount(sender))(*)(OptionsLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x770f7c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto OptionsLayer::onHelp(cocos2d::CCObject* sender) -> decltype(onHelp(sender)) {
	using FunctionType = decltype(onHelp(sender))(*)(OptionsLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x770f8c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto OptionsLayer::onMenuMusic(cocos2d::CCObject* sender) -> decltype(onMenuMusic(sender)) {
	using FunctionType = decltype(onMenuMusic(sender))(*)(OptionsLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x7715fc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto OptionsLayer::onOptions(cocos2d::CCObject* sender) -> decltype(onOptions(sender)) {
	using FunctionType = decltype(onOptions(sender))(*)(OptionsLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x770fa8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto OptionsLayer::onParental(cocos2d::CCObject* sender) -> decltype(onParental(sender)) {
	using FunctionType = decltype(onParental(sender))(*)(OptionsLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x770ffc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto OptionsLayer::onRate(cocos2d::CCObject* sender) -> decltype(onRate(sender)) {
	using FunctionType = decltype(onRate(sender))(*)(OptionsLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x770fe8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto OptionsLayer::onSecretVault(cocos2d::CCObject* sender) -> decltype(onSecretVault(sender)) {
	using FunctionType = decltype(onSecretVault(sender))(*)(OptionsLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x771304, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto OptionsLayer::onSoundtracks(cocos2d::CCObject* sender) -> decltype(onSoundtracks(sender)) {
	using FunctionType = decltype(onSoundtracks(sender))(*)(OptionsLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x771634, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto OptionsLayer::onSupport(cocos2d::CCObject* sender) -> decltype(onSupport(sender)) {
	using FunctionType = decltype(onSupport(sender))(*)(OptionsLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x77104c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto OptionsLayer::onVideo(cocos2d::CCObject* sender) -> decltype(onVideo(sender)) {
	using FunctionType = decltype(onVideo(sender))(*)(OptionsLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x770fcc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto OptionsLayer::sfxSliderChanged(cocos2d::CCObject* sender) -> decltype(sfxSliderChanged(sender)) {
	using FunctionType = decltype(sfxSliderChanged(sender))(*)(OptionsLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x7715bc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}
