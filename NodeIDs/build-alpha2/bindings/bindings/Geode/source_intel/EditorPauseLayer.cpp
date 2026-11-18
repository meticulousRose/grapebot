#include <Geode/cocos/cocoa/CCObject.h>

#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/EditorPauseLayer.hpp>
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

EditorPauseLayer::~EditorPauseLayer() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(EditorPauseLayer*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x27c570, tulip::hook::TulipConvention::Default);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) EditorPauseLayer(geode::CutoffConstructor, sizeof(EditorPauseLayer));
		geode::DestructorLock::addLock(this);
	}
}

auto EditorPauseLayer::create(LevelEditorLayer* layer) -> decltype(create(layer)) {
	using FunctionType = decltype(create(layer))(*)(LevelEditorLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x27c970, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(layer);
}

auto EditorPauseLayer::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&EditorPauseLayer::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(EditorPauseLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x27f580, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto EditorPauseLayer::keyDown(cocos2d::enumKeyCodes key, double timestamp) -> decltype(keyDown(key, timestamp)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::enumKeyCodes, double>::func(&EditorPauseLayer::keyDown), this);
	using FunctionType = decltype(keyDown(key, timestamp))(*)(EditorPauseLayer*, cocos2d::enumKeyCodes, double);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x27f690, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, key, timestamp);
}

auto EditorPauseLayer::customSetup() -> decltype(customSetup()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&EditorPauseLayer::customSetup), this);
	using FunctionType = decltype(customSetup())(*)(EditorPauseLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x27d2e0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto EditorPauseLayer::FLAlert_Clicked(FLAlertLayer* layer, bool btn2) -> decltype(FLAlert_Clicked(layer, btn2)) {
	auto self = addresser::thunkAdjust(Resolve<FLAlertLayer*, bool>::func(&EditorPauseLayer::FLAlert_Clicked), this);
	using FunctionType = decltype(FLAlert_Clicked(layer, btn2))(*)(EditorPauseLayer*, FLAlertLayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x27f460, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, layer, btn2);
}

auto EditorPauseLayer::volumeChanged() -> decltype(volumeChanged()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&EditorPauseLayer::volumeChanged), this);
	using FunctionType = decltype(volumeChanged())(*)(EditorPauseLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x27c8c0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto EditorPauseLayer::editorSFXSliderChanged(cocos2d::CCObject* sender) -> decltype(editorSFXSliderChanged(sender)) {
	using FunctionType = decltype(editorSFXSliderChanged(sender))(*)(EditorPauseLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x27eae0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto EditorPauseLayer::init(LevelEditorLayer* layer) -> decltype(init(layer)) {
	using FunctionType = decltype(init(layer))(*)(EditorPauseLayer*, LevelEditorLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x27ca90, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, layer);
}

auto EditorPauseLayer::musicSliderChanged(cocos2d::CCObject* sender) -> decltype(musicSliderChanged(sender)) {
	using FunctionType = decltype(musicSliderChanged(sender))(*)(EditorPauseLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x27ea60, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto EditorPauseLayer::onAutoSaveSettings(cocos2d::CCObject* sender) -> decltype(onAutoSaveSettings(sender)) {
	using FunctionType = decltype(onAutoSaveSettings(sender))(*)(EditorPauseLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x27e820, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto EditorPauseLayer::onControls(cocos2d::CCObject* sender) -> decltype(onControls(sender)) {
	using FunctionType = decltype(onControls(sender))(*)(EditorPauseLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x27ea30, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto EditorPauseLayer::onDeathStats(cocos2d::CCObject* sender) -> decltype(onDeathStats(sender)) {
	using FunctionType = decltype(onDeathStats(sender))(*)(EditorPauseLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x27e840, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto EditorPauseLayer::onDownloadAudio(cocos2d::CCObject* sender) -> decltype(onDownloadAudio(sender)) {
	using FunctionType = decltype(onDownloadAudio(sender))(*)(EditorPauseLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x27e870, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto EditorPauseLayer::onEditorSounds(cocos2d::CCObject* sender) -> decltype(onEditorSounds(sender)) {
	using FunctionType = decltype(onEditorSounds(sender))(*)(EditorPauseLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x27e7f0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto EditorPauseLayer::onExitEditor(cocos2d::CCObject* sender) -> decltype(onExitEditor(sender)) {
	using FunctionType = decltype(onExitEditor(sender))(*)(EditorPauseLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x27f400, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto EditorPauseLayer::onExitNoSave(cocos2d::CCObject* sender) -> decltype(onExitNoSave(sender)) {
	using FunctionType = decltype(onExitNoSave(sender))(*)(EditorPauseLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x27e4d0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto EditorPauseLayer::onExport(cocos2d::CCObject* sender) -> decltype(onExport(sender)) {
	using FunctionType = decltype(onExport(sender))(*)(EditorPauseLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x27e670, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto EditorPauseLayer::onHelp(cocos2d::CCObject* sender) -> decltype(onHelp(sender)) {
	using FunctionType = decltype(onHelp(sender))(*)(EditorPauseLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x27e950, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto EditorPauseLayer::onKeybindings(cocos2d::CCObject* sender) -> decltype(onKeybindings(sender)) {
	using FunctionType = decltype(onKeybindings(sender))(*)(EditorPauseLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x27ef20, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto EditorPauseLayer::onOptions(cocos2d::CCObject* sender) -> decltype(onOptions(sender)) {
	using FunctionType = decltype(onOptions(sender))(*)(EditorPauseLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x27e640, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto EditorPauseLayer::onResume(cocos2d::CCObject* sender) -> decltype(onResume(sender)) {
	using FunctionType = decltype(onResume(sender))(*)(EditorPauseLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x27e250, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto EditorPauseLayer::onSave(cocos2d::CCObject* sender) -> decltype(onSave(sender)) {
	using FunctionType = decltype(onSave(sender))(*)(EditorPauseLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x27e400, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto EditorPauseLayer::onSaveAndExit(cocos2d::CCObject* sender) -> decltype(onSaveAndExit(sender)) {
	using FunctionType = decltype(onSaveAndExit(sender))(*)(EditorPauseLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x27e360, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto EditorPauseLayer::onSaveAndPlay(cocos2d::CCObject* sender) -> decltype(onSaveAndPlay(sender)) {
	using FunctionType = decltype(onSaveAndPlay(sender))(*)(EditorPauseLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x27e2d0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto EditorPauseLayer::playStep2() -> decltype(playStep2()) {
	using FunctionType = decltype(playStep2())(*)(EditorPauseLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x27f2d0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto EditorPauseLayer::playStep3() -> decltype(playStep3()) {
	using FunctionType = decltype(playStep3())(*)(EditorPauseLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x27f3a0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto EditorPauseLayer::saveLevel() -> decltype(saveLevel()) {
	using FunctionType = decltype(saveLevel())(*)(EditorPauseLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x27f290, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto EditorPauseLayer::sfxSliderChanged(cocos2d::CCObject* sender) -> decltype(sfxSliderChanged(sender)) {
	using FunctionType = decltype(sfxSliderChanged(sender))(*)(EditorPauseLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x27eaa0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto EditorPauseLayer::toggleDebugDraw(cocos2d::CCObject* sender) -> decltype(toggleDebugDraw(sender)) {
	using FunctionType = decltype(toggleDebugDraw(sender))(*)(EditorPauseLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x27f070, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto EditorPauseLayer::toggleEditorBackground(cocos2d::CCObject* sender) -> decltype(toggleEditorBackground(sender)) {
	using FunctionType = decltype(toggleEditorBackground(sender))(*)(EditorPauseLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x27f120, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto EditorPauseLayer::toggleEditorColorMode(cocos2d::CCObject* sender) -> decltype(toggleEditorColorMode(sender)) {
	using FunctionType = decltype(toggleEditorColorMode(sender))(*)(EditorPauseLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x27efa0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto EditorPauseLayer::toggleEditorGrid(cocos2d::CCObject* sender) -> decltype(toggleEditorGrid(sender)) {
	using FunctionType = decltype(toggleEditorGrid(sender))(*)(EditorPauseLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x27f170, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto EditorPauseLayer::toggleEditorGround(cocos2d::CCObject* sender) -> decltype(toggleEditorGround(sender)) {
	using FunctionType = decltype(toggleEditorGround(sender))(*)(EditorPauseLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x27f0d0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto EditorPauseLayer::toggleEffectDuration(cocos2d::CCObject* sender) -> decltype(toggleEffectDuration(sender)) {
	using FunctionType = decltype(toggleEffectDuration(sender))(*)(EditorPauseLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x27f090, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto EditorPauseLayer::toggleEffectLines(cocos2d::CCObject* sender) -> decltype(toggleEffectLines(sender)) {
	using FunctionType = decltype(toggleEffectLines(sender))(*)(EditorPauseLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x27f0b0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto EditorPauseLayer::toggleFollowPlayer(cocos2d::CCObject* sender) -> decltype(toggleFollowPlayer(sender)) {
	using FunctionType = decltype(toggleFollowPlayer(sender))(*)(EditorPauseLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x27ef40, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto EditorPauseLayer::toggleGridOnTop(cocos2d::CCObject* sender) -> decltype(toggleGridOnTop(sender)) {
	using FunctionType = decltype(toggleGridOnTop(sender))(*)(EditorPauseLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x27f190, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto EditorPauseLayer::toggleHideInvisible(cocos2d::CCObject* sender) -> decltype(toggleHideInvisible(sender)) {
	using FunctionType = decltype(toggleHideInvisible(sender))(*)(EditorPauseLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x27efd0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto EditorPauseLayer::toggleIgnoreDamage(cocos2d::CCObject* sender) -> decltype(toggleIgnoreDamage(sender)) {
	using FunctionType = decltype(toggleIgnoreDamage(sender))(*)(EditorPauseLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x27ef80, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto EditorPauseLayer::togglePlaytestMusic(cocos2d::CCObject* sender) -> decltype(togglePlaytestMusic(sender)) {
	using FunctionType = decltype(togglePlaytestMusic(sender))(*)(EditorPauseLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x27ef60, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto EditorPauseLayer::togglePreviewAnim(cocos2d::CCObject* sender) -> decltype(togglePreviewAnim(sender)) {
	using FunctionType = decltype(togglePreviewAnim(sender))(*)(EditorPauseLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x27f040, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto EditorPauseLayer::togglePreviewParticles(cocos2d::CCObject* sender) -> decltype(togglePreviewParticles(sender)) {
	using FunctionType = decltype(togglePreviewParticles(sender))(*)(EditorPauseLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x27eff0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto EditorPauseLayer::togglePreviewShaders(cocos2d::CCObject* sender) -> decltype(togglePreviewShaders(sender)) {
	using FunctionType = decltype(togglePreviewShaders(sender))(*)(EditorPauseLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x27f020, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto EditorPauseLayer::toggleRecordOrder(cocos2d::CCObject* sender) -> decltype(toggleRecordOrder(sender)) {
	using FunctionType = decltype(toggleRecordOrder(sender))(*)(EditorPauseLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x27f270, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto EditorPauseLayer::toggleSelectFilter(cocos2d::CCObject* sender) -> decltype(toggleSelectFilter(sender)) {
	using FunctionType = decltype(toggleSelectFilter(sender))(*)(EditorPauseLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x27f250, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto EditorPauseLayer::toggleShowObjectInfo(cocos2d::CCObject* sender) -> decltype(toggleShowObjectInfo(sender)) {
	using FunctionType = decltype(toggleShowObjectInfo(sender))(*)(EditorPauseLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x27f210, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}
