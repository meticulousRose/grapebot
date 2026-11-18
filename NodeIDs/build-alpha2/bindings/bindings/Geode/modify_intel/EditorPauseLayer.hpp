#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/EditorPauseLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_keyDown
		#define GEODE_STATICS_keyDown
		GEODE_AS_STATIC_FUNCTION(keyDown) 
	#endif

	#ifndef GEODE_STATICS_customSetup
		#define GEODE_STATICS_customSetup
		GEODE_AS_STATIC_FUNCTION(customSetup) 
	#endif

	#ifndef GEODE_STATICS_FLAlert_Clicked
		#define GEODE_STATICS_FLAlert_Clicked
		GEODE_AS_STATIC_FUNCTION(FLAlert_Clicked) 
	#endif

	#ifndef GEODE_STATICS_volumeChanged
		#define GEODE_STATICS_volumeChanged
		GEODE_AS_STATIC_FUNCTION(volumeChanged) 
	#endif

	#ifndef GEODE_STATICS_editorSFXSliderChanged
		#define GEODE_STATICS_editorSFXSliderChanged
		GEODE_AS_STATIC_FUNCTION(editorSFXSliderChanged) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_musicSliderChanged
		#define GEODE_STATICS_musicSliderChanged
		GEODE_AS_STATIC_FUNCTION(musicSliderChanged) 
	#endif

	#ifndef GEODE_STATICS_onAutoSaveSettings
		#define GEODE_STATICS_onAutoSaveSettings
		GEODE_AS_STATIC_FUNCTION(onAutoSaveSettings) 
	#endif

	#ifndef GEODE_STATICS_onControls
		#define GEODE_STATICS_onControls
		GEODE_AS_STATIC_FUNCTION(onControls) 
	#endif

	#ifndef GEODE_STATICS_onDeathStats
		#define GEODE_STATICS_onDeathStats
		GEODE_AS_STATIC_FUNCTION(onDeathStats) 
	#endif

	#ifndef GEODE_STATICS_onDownloadAudio
		#define GEODE_STATICS_onDownloadAudio
		GEODE_AS_STATIC_FUNCTION(onDownloadAudio) 
	#endif

	#ifndef GEODE_STATICS_onEditorSounds
		#define GEODE_STATICS_onEditorSounds
		GEODE_AS_STATIC_FUNCTION(onEditorSounds) 
	#endif

	#ifndef GEODE_STATICS_onExitEditor
		#define GEODE_STATICS_onExitEditor
		GEODE_AS_STATIC_FUNCTION(onExitEditor) 
	#endif

	#ifndef GEODE_STATICS_onExitNoSave
		#define GEODE_STATICS_onExitNoSave
		GEODE_AS_STATIC_FUNCTION(onExitNoSave) 
	#endif

	#ifndef GEODE_STATICS_onExport
		#define GEODE_STATICS_onExport
		GEODE_AS_STATIC_FUNCTION(onExport) 
	#endif

	#ifndef GEODE_STATICS_onHelp
		#define GEODE_STATICS_onHelp
		GEODE_AS_STATIC_FUNCTION(onHelp) 
	#endif

	#ifndef GEODE_STATICS_onKeybindings
		#define GEODE_STATICS_onKeybindings
		GEODE_AS_STATIC_FUNCTION(onKeybindings) 
	#endif

	#ifndef GEODE_STATICS_onOptions
		#define GEODE_STATICS_onOptions
		GEODE_AS_STATIC_FUNCTION(onOptions) 
	#endif

	#ifndef GEODE_STATICS_onResume
		#define GEODE_STATICS_onResume
		GEODE_AS_STATIC_FUNCTION(onResume) 
	#endif

	#ifndef GEODE_STATICS_onSave
		#define GEODE_STATICS_onSave
		GEODE_AS_STATIC_FUNCTION(onSave) 
	#endif

	#ifndef GEODE_STATICS_onSaveAndExit
		#define GEODE_STATICS_onSaveAndExit
		GEODE_AS_STATIC_FUNCTION(onSaveAndExit) 
	#endif

	#ifndef GEODE_STATICS_onSaveAndPlay
		#define GEODE_STATICS_onSaveAndPlay
		GEODE_AS_STATIC_FUNCTION(onSaveAndPlay) 
	#endif

	#ifndef GEODE_STATICS_playStep2
		#define GEODE_STATICS_playStep2
		GEODE_AS_STATIC_FUNCTION(playStep2) 
	#endif

	#ifndef GEODE_STATICS_playStep3
		#define GEODE_STATICS_playStep3
		GEODE_AS_STATIC_FUNCTION(playStep3) 
	#endif

	#ifndef GEODE_STATICS_saveLevel
		#define GEODE_STATICS_saveLevel
		GEODE_AS_STATIC_FUNCTION(saveLevel) 
	#endif

	#ifndef GEODE_STATICS_sfxSliderChanged
		#define GEODE_STATICS_sfxSliderChanged
		GEODE_AS_STATIC_FUNCTION(sfxSliderChanged) 
	#endif

	#ifndef GEODE_STATICS_toggleDebugDraw
		#define GEODE_STATICS_toggleDebugDraw
		GEODE_AS_STATIC_FUNCTION(toggleDebugDraw) 
	#endif

	#ifndef GEODE_STATICS_toggleEditorBackground
		#define GEODE_STATICS_toggleEditorBackground
		GEODE_AS_STATIC_FUNCTION(toggleEditorBackground) 
	#endif

	#ifndef GEODE_STATICS_toggleEditorColorMode
		#define GEODE_STATICS_toggleEditorColorMode
		GEODE_AS_STATIC_FUNCTION(toggleEditorColorMode) 
	#endif

	#ifndef GEODE_STATICS_toggleEditorGrid
		#define GEODE_STATICS_toggleEditorGrid
		GEODE_AS_STATIC_FUNCTION(toggleEditorGrid) 
	#endif

	#ifndef GEODE_STATICS_toggleEditorGround
		#define GEODE_STATICS_toggleEditorGround
		GEODE_AS_STATIC_FUNCTION(toggleEditorGround) 
	#endif

	#ifndef GEODE_STATICS_toggleEffectDuration
		#define GEODE_STATICS_toggleEffectDuration
		GEODE_AS_STATIC_FUNCTION(toggleEffectDuration) 
	#endif

	#ifndef GEODE_STATICS_toggleEffectLines
		#define GEODE_STATICS_toggleEffectLines
		GEODE_AS_STATIC_FUNCTION(toggleEffectLines) 
	#endif

	#ifndef GEODE_STATICS_toggleFollowPlayer
		#define GEODE_STATICS_toggleFollowPlayer
		GEODE_AS_STATIC_FUNCTION(toggleFollowPlayer) 
	#endif

	#ifndef GEODE_STATICS_toggleGridOnTop
		#define GEODE_STATICS_toggleGridOnTop
		GEODE_AS_STATIC_FUNCTION(toggleGridOnTop) 
	#endif

	#ifndef GEODE_STATICS_toggleHideInvisible
		#define GEODE_STATICS_toggleHideInvisible
		GEODE_AS_STATIC_FUNCTION(toggleHideInvisible) 
	#endif

	#ifndef GEODE_STATICS_toggleIgnoreDamage
		#define GEODE_STATICS_toggleIgnoreDamage
		GEODE_AS_STATIC_FUNCTION(toggleIgnoreDamage) 
	#endif

	#ifndef GEODE_STATICS_togglePlaytestMusic
		#define GEODE_STATICS_togglePlaytestMusic
		GEODE_AS_STATIC_FUNCTION(togglePlaytestMusic) 
	#endif

	#ifndef GEODE_STATICS_togglePreviewAnim
		#define GEODE_STATICS_togglePreviewAnim
		GEODE_AS_STATIC_FUNCTION(togglePreviewAnim) 
	#endif

	#ifndef GEODE_STATICS_togglePreviewParticles
		#define GEODE_STATICS_togglePreviewParticles
		GEODE_AS_STATIC_FUNCTION(togglePreviewParticles) 
	#endif

	#ifndef GEODE_STATICS_togglePreviewShaders
		#define GEODE_STATICS_togglePreviewShaders
		GEODE_AS_STATIC_FUNCTION(togglePreviewShaders) 
	#endif

	#ifndef GEODE_STATICS_toggleRecordOrder
		#define GEODE_STATICS_toggleRecordOrder
		GEODE_AS_STATIC_FUNCTION(toggleRecordOrder) 
	#endif

	#ifndef GEODE_STATICS_toggleSelectFilter
		#define GEODE_STATICS_toggleSelectFilter
		GEODE_AS_STATIC_FUNCTION(toggleSelectFilter) 
	#endif

	#ifndef GEODE_STATICS_toggleShowObjectInfo
		#define GEODE_STATICS_toggleShowObjectInfo
		GEODE_AS_STATIC_FUNCTION(toggleShowObjectInfo) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyBackClicked
		#define GEODE_CONCEPT_CHECK_keyBackClicked
		GEODE_CONCEPT_FUNCTION_CHECK(keyBackClicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyDown
		#define GEODE_CONCEPT_CHECK_keyDown
		GEODE_CONCEPT_FUNCTION_CHECK(keyDown) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_customSetup
		#define GEODE_CONCEPT_CHECK_customSetup
		GEODE_CONCEPT_FUNCTION_CHECK(customSetup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_FLAlert_Clicked
		#define GEODE_CONCEPT_CHECK_FLAlert_Clicked
		GEODE_CONCEPT_FUNCTION_CHECK(FLAlert_Clicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_volumeChanged
		#define GEODE_CONCEPT_CHECK_volumeChanged
		GEODE_CONCEPT_FUNCTION_CHECK(volumeChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_editorSFXSliderChanged
		#define GEODE_CONCEPT_CHECK_editorSFXSliderChanged
		GEODE_CONCEPT_FUNCTION_CHECK(editorSFXSliderChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_musicSliderChanged
		#define GEODE_CONCEPT_CHECK_musicSliderChanged
		GEODE_CONCEPT_FUNCTION_CHECK(musicSliderChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onAutoSaveSettings
		#define GEODE_CONCEPT_CHECK_onAutoSaveSettings
		GEODE_CONCEPT_FUNCTION_CHECK(onAutoSaveSettings) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onControls
		#define GEODE_CONCEPT_CHECK_onControls
		GEODE_CONCEPT_FUNCTION_CHECK(onControls) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onDeathStats
		#define GEODE_CONCEPT_CHECK_onDeathStats
		GEODE_CONCEPT_FUNCTION_CHECK(onDeathStats) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onDownloadAudio
		#define GEODE_CONCEPT_CHECK_onDownloadAudio
		GEODE_CONCEPT_FUNCTION_CHECK(onDownloadAudio) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onEditorSounds
		#define GEODE_CONCEPT_CHECK_onEditorSounds
		GEODE_CONCEPT_FUNCTION_CHECK(onEditorSounds) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onExitEditor
		#define GEODE_CONCEPT_CHECK_onExitEditor
		GEODE_CONCEPT_FUNCTION_CHECK(onExitEditor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onExitNoSave
		#define GEODE_CONCEPT_CHECK_onExitNoSave
		GEODE_CONCEPT_FUNCTION_CHECK(onExitNoSave) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onExport
		#define GEODE_CONCEPT_CHECK_onExport
		GEODE_CONCEPT_FUNCTION_CHECK(onExport) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onHelp
		#define GEODE_CONCEPT_CHECK_onHelp
		GEODE_CONCEPT_FUNCTION_CHECK(onHelp) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onKeybindings
		#define GEODE_CONCEPT_CHECK_onKeybindings
		GEODE_CONCEPT_FUNCTION_CHECK(onKeybindings) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onOptions
		#define GEODE_CONCEPT_CHECK_onOptions
		GEODE_CONCEPT_FUNCTION_CHECK(onOptions) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onResume
		#define GEODE_CONCEPT_CHECK_onResume
		GEODE_CONCEPT_FUNCTION_CHECK(onResume) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSave
		#define GEODE_CONCEPT_CHECK_onSave
		GEODE_CONCEPT_FUNCTION_CHECK(onSave) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSaveAndExit
		#define GEODE_CONCEPT_CHECK_onSaveAndExit
		GEODE_CONCEPT_FUNCTION_CHECK(onSaveAndExit) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSaveAndPlay
		#define GEODE_CONCEPT_CHECK_onSaveAndPlay
		GEODE_CONCEPT_FUNCTION_CHECK(onSaveAndPlay) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_playStep2
		#define GEODE_CONCEPT_CHECK_playStep2
		GEODE_CONCEPT_FUNCTION_CHECK(playStep2) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_playStep3
		#define GEODE_CONCEPT_CHECK_playStep3
		GEODE_CONCEPT_FUNCTION_CHECK(playStep3) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_saveLevel
		#define GEODE_CONCEPT_CHECK_saveLevel
		GEODE_CONCEPT_FUNCTION_CHECK(saveLevel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_sfxSliderChanged
		#define GEODE_CONCEPT_CHECK_sfxSliderChanged
		GEODE_CONCEPT_FUNCTION_CHECK(sfxSliderChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleDebugDraw
		#define GEODE_CONCEPT_CHECK_toggleDebugDraw
		GEODE_CONCEPT_FUNCTION_CHECK(toggleDebugDraw) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleEditorBackground
		#define GEODE_CONCEPT_CHECK_toggleEditorBackground
		GEODE_CONCEPT_FUNCTION_CHECK(toggleEditorBackground) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleEditorColorMode
		#define GEODE_CONCEPT_CHECK_toggleEditorColorMode
		GEODE_CONCEPT_FUNCTION_CHECK(toggleEditorColorMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleEditorGrid
		#define GEODE_CONCEPT_CHECK_toggleEditorGrid
		GEODE_CONCEPT_FUNCTION_CHECK(toggleEditorGrid) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleEditorGround
		#define GEODE_CONCEPT_CHECK_toggleEditorGround
		GEODE_CONCEPT_FUNCTION_CHECK(toggleEditorGround) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleEffectDuration
		#define GEODE_CONCEPT_CHECK_toggleEffectDuration
		GEODE_CONCEPT_FUNCTION_CHECK(toggleEffectDuration) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleEffectLines
		#define GEODE_CONCEPT_CHECK_toggleEffectLines
		GEODE_CONCEPT_FUNCTION_CHECK(toggleEffectLines) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleFollowPlayer
		#define GEODE_CONCEPT_CHECK_toggleFollowPlayer
		GEODE_CONCEPT_FUNCTION_CHECK(toggleFollowPlayer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleGridOnTop
		#define GEODE_CONCEPT_CHECK_toggleGridOnTop
		GEODE_CONCEPT_FUNCTION_CHECK(toggleGridOnTop) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleHideInvisible
		#define GEODE_CONCEPT_CHECK_toggleHideInvisible
		GEODE_CONCEPT_FUNCTION_CHECK(toggleHideInvisible) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleIgnoreDamage
		#define GEODE_CONCEPT_CHECK_toggleIgnoreDamage
		GEODE_CONCEPT_FUNCTION_CHECK(toggleIgnoreDamage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_togglePlaytestMusic
		#define GEODE_CONCEPT_CHECK_togglePlaytestMusic
		GEODE_CONCEPT_FUNCTION_CHECK(togglePlaytestMusic) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_togglePreviewAnim
		#define GEODE_CONCEPT_CHECK_togglePreviewAnim
		GEODE_CONCEPT_FUNCTION_CHECK(togglePreviewAnim) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_togglePreviewParticles
		#define GEODE_CONCEPT_CHECK_togglePreviewParticles
		GEODE_CONCEPT_FUNCTION_CHECK(togglePreviewParticles) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_togglePreviewShaders
		#define GEODE_CONCEPT_CHECK_togglePreviewShaders
		GEODE_CONCEPT_FUNCTION_CHECK(togglePreviewShaders) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleRecordOrder
		#define GEODE_CONCEPT_CHECK_toggleRecordOrder
		GEODE_CONCEPT_FUNCTION_CHECK(toggleRecordOrder) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleSelectFilter
		#define GEODE_CONCEPT_CHECK_toggleSelectFilter
		GEODE_CONCEPT_FUNCTION_CHECK(toggleSelectFilter) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleShowObjectInfo
		#define GEODE_CONCEPT_CHECK_toggleShowObjectInfo
		GEODE_CONCEPT_FUNCTION_CHECK(toggleShowObjectInfo) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, EditorPauseLayer> : ModifyBase<ModifyDerive<Der, EditorPauseLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, EditorPauseLayer>>;
		using ModifyBase<ModifyDerive<Der, EditorPauseLayer>>::ModifyBase;
		using Base = EditorPauseLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(base::get() + 0x27c570, Default, EditorPauseLayer)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x27c970, Default, EditorPauseLayer, create, LevelEditorLayer*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x27f580, Default, EditorPauseLayer, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x27f690, Default, EditorPauseLayer, keyDown, cocos2d::enumKeyCodes, double)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x27d2e0, Default, EditorPauseLayer, customSetup, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x27f460, Default, EditorPauseLayer, FLAlert_Clicked, FLAlertLayer*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x27c8c0, Default, EditorPauseLayer, volumeChanged, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x27eae0, Default, EditorPauseLayer, editorSFXSliderChanged, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x27ca90, Default, EditorPauseLayer, init, LevelEditorLayer*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x27ea60, Default, EditorPauseLayer, musicSliderChanged, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x27e820, Default, EditorPauseLayer, onAutoSaveSettings, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x27ea30, Default, EditorPauseLayer, onControls, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x27e840, Default, EditorPauseLayer, onDeathStats, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x27e870, Default, EditorPauseLayer, onDownloadAudio, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x27e7f0, Default, EditorPauseLayer, onEditorSounds, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x27f400, Default, EditorPauseLayer, onExitEditor, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x27e4d0, Default, EditorPauseLayer, onExitNoSave, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x27e670, Default, EditorPauseLayer, onExport, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x27e950, Default, EditorPauseLayer, onHelp, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x27ef20, Default, EditorPauseLayer, onKeybindings, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x27e640, Default, EditorPauseLayer, onOptions, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x27e250, Default, EditorPauseLayer, onResume, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x27e400, Default, EditorPauseLayer, onSave, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x27e360, Default, EditorPauseLayer, onSaveAndExit, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x27e2d0, Default, EditorPauseLayer, onSaveAndPlay, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x27f2d0, Default, EditorPauseLayer, playStep2, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x27f3a0, Default, EditorPauseLayer, playStep3, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x27f290, Default, EditorPauseLayer, saveLevel, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x27eaa0, Default, EditorPauseLayer, sfxSliderChanged, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x27f070, Default, EditorPauseLayer, toggleDebugDraw, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x27f120, Default, EditorPauseLayer, toggleEditorBackground, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x27efa0, Default, EditorPauseLayer, toggleEditorColorMode, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x27f170, Default, EditorPauseLayer, toggleEditorGrid, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x27f0d0, Default, EditorPauseLayer, toggleEditorGround, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x27f090, Default, EditorPauseLayer, toggleEffectDuration, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x27f0b0, Default, EditorPauseLayer, toggleEffectLines, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x27ef40, Default, EditorPauseLayer, toggleFollowPlayer, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x27f190, Default, EditorPauseLayer, toggleGridOnTop, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x27efd0, Default, EditorPauseLayer, toggleHideInvisible, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x27ef80, Default, EditorPauseLayer, toggleIgnoreDamage, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x27ef60, Default, EditorPauseLayer, togglePlaytestMusic, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x27f040, Default, EditorPauseLayer, togglePreviewAnim, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x27eff0, Default, EditorPauseLayer, togglePreviewParticles, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x27f020, Default, EditorPauseLayer, togglePreviewShaders, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x27f270, Default, EditorPauseLayer, toggleRecordOrder, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x27f250, Default, EditorPauseLayer, toggleSelectFilter, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x27f210, Default, EditorPauseLayer, toggleShowObjectInfo, cocos2d::CCObject*)
		}
	};
}
