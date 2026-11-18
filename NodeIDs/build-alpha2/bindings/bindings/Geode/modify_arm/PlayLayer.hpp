#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/PlayLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_scene
		#define GEODE_STATICS_scene
		GEODE_AS_STATIC_FUNCTION(scene) 
	#endif

	#ifndef GEODE_STATICS_onEnterTransitionDidFinish
		#define GEODE_STATICS_onEnterTransitionDidFinish
		GEODE_AS_STATIC_FUNCTION(onEnterTransitionDidFinish) 
	#endif

	#ifndef GEODE_STATICS_onExit
		#define GEODE_STATICS_onExit
		GEODE_AS_STATIC_FUNCTION(onExit) 
	#endif

	#ifndef GEODE_STATICS_postUpdate
		#define GEODE_STATICS_postUpdate
		GEODE_AS_STATIC_FUNCTION(postUpdate) 
	#endif

	#ifndef GEODE_STATICS_checkForEnd
		#define GEODE_STATICS_checkForEnd
		GEODE_AS_STATIC_FUNCTION(checkForEnd) 
	#endif

	#ifndef GEODE_STATICS_updateVerifyDamage
		#define GEODE_STATICS_updateVerifyDamage
		GEODE_AS_STATIC_FUNCTION(updateVerifyDamage) 
	#endif

	#ifndef GEODE_STATICS_updateAttemptTime
		#define GEODE_STATICS_updateAttemptTime
		GEODE_AS_STATIC_FUNCTION(updateAttemptTime) 
	#endif

	#ifndef GEODE_STATICS_updateVisibility
		#define GEODE_STATICS_updateVisibility
		GEODE_AS_STATIC_FUNCTION(updateVisibility) 
	#endif

	#ifndef GEODE_STATICS_opacityForObject
		#define GEODE_STATICS_opacityForObject
		GEODE_AS_STATIC_FUNCTION(opacityForObject) 
	#endif

	#ifndef GEODE_STATICS_updateColor
		#define GEODE_STATICS_updateColor
		GEODE_AS_STATIC_FUNCTION(updateColor) 
	#endif

	#ifndef GEODE_STATICS_activateEndTrigger
		#define GEODE_STATICS_activateEndTrigger
		GEODE_AS_STATIC_FUNCTION(activateEndTrigger) 
	#endif

	#ifndef GEODE_STATICS_activatePlatformerEndTrigger
		#define GEODE_STATICS_activatePlatformerEndTrigger
		GEODE_AS_STATIC_FUNCTION(activatePlatformerEndTrigger) 
	#endif

	#ifndef GEODE_STATICS_toggleGlitter
		#define GEODE_STATICS_toggleGlitter
		GEODE_AS_STATIC_FUNCTION(toggleGlitter) 
	#endif

	#ifndef GEODE_STATICS_destroyPlayer
		#define GEODE_STATICS_destroyPlayer
		GEODE_AS_STATIC_FUNCTION(destroyPlayer) 
	#endif

	#ifndef GEODE_STATICS_shouldDrawDebugHitboxes
		#define GEODE_STATICS_shouldDrawDebugHitboxes
		GEODE_AS_STATIC_FUNCTION(shouldDrawDebugHitboxes) 
	#endif

	#ifndef GEODE_STATICS_shouldDrawHitboxTrail
		#define GEODE_STATICS_shouldDrawHitboxTrail
		GEODE_AS_STATIC_FUNCTION(shouldDrawHitboxTrail) 
	#endif

	#ifndef GEODE_STATICS_shouldRecordHitboxTrail
		#define GEODE_STATICS_shouldRecordHitboxTrail
		GEODE_AS_STATIC_FUNCTION(shouldRecordHitboxTrail) 
	#endif

	#ifndef GEODE_STATICS_getHitboxTrailMax
		#define GEODE_STATICS_getHitboxTrailMax
		GEODE_AS_STATIC_FUNCTION(getHitboxTrailMax) 
	#endif

	#ifndef GEODE_STATICS_toggleGroundVisibility
		#define GEODE_STATICS_toggleGroundVisibility
		GEODE_AS_STATIC_FUNCTION(toggleGroundVisibility) 
	#endif

	#ifndef GEODE_STATICS_toggleMGVisibility
		#define GEODE_STATICS_toggleMGVisibility
		GEODE_AS_STATIC_FUNCTION(toggleMGVisibility) 
	#endif

	#ifndef GEODE_STATICS_toggleHideAttempts
		#define GEODE_STATICS_toggleHideAttempts
		GEODE_AS_STATIC_FUNCTION(toggleHideAttempts) 
	#endif

	#ifndef GEODE_STATICS_timeForPos
		#define GEODE_STATICS_timeForPos
		GEODE_AS_STATIC_FUNCTION(timeForPos) 
	#endif

	#ifndef GEODE_STATICS_posForTime
		#define GEODE_STATICS_posForTime
		GEODE_AS_STATIC_FUNCTION(posForTime) 
	#endif

	#ifndef GEODE_STATICS_resetSPTriggered
		#define GEODE_STATICS_resetSPTriggered
		GEODE_AS_STATIC_FUNCTION(resetSPTriggered) 
	#endif

	#ifndef GEODE_STATICS_updateTimeWarp
		#define GEODE_STATICS_updateTimeWarp
		GEODE_AS_STATIC_FUNCTION(updateTimeWarp) 
	#endif

	#ifndef GEODE_STATICS_playGravityEffect
		#define GEODE_STATICS_playGravityEffect
		GEODE_AS_STATIC_FUNCTION(playGravityEffect) 
	#endif

	#ifndef GEODE_STATICS_manualUpdateObjectColors
		#define GEODE_STATICS_manualUpdateObjectColors
		GEODE_AS_STATIC_FUNCTION(manualUpdateObjectColors) 
	#endif

	#ifndef GEODE_STATICS_checkpointActivated
		#define GEODE_STATICS_checkpointActivated
		GEODE_AS_STATIC_FUNCTION(checkpointActivated) 
	#endif

	#ifndef GEODE_STATICS_flipArt
		#define GEODE_STATICS_flipArt
		GEODE_AS_STATIC_FUNCTION(flipArt) 
	#endif

	#ifndef GEODE_STATICS_updateTimeLabel
		#define GEODE_STATICS_updateTimeLabel
		GEODE_AS_STATIC_FUNCTION(updateTimeLabel) 
	#endif

	#ifndef GEODE_STATICS_checkSnapshot
		#define GEODE_STATICS_checkSnapshot
		GEODE_AS_STATIC_FUNCTION(checkSnapshot) 
	#endif

	#ifndef GEODE_STATICS_toggleProgressbar
		#define GEODE_STATICS_toggleProgressbar
		GEODE_AS_STATIC_FUNCTION(toggleProgressbar) 
	#endif

	#ifndef GEODE_STATICS_toggleInfoLabel
		#define GEODE_STATICS_toggleInfoLabel
		GEODE_AS_STATIC_FUNCTION(toggleInfoLabel) 
	#endif

	#ifndef GEODE_STATICS_removeAllCheckpoints
		#define GEODE_STATICS_removeAllCheckpoints
		GEODE_AS_STATIC_FUNCTION(removeAllCheckpoints) 
	#endif

	#ifndef GEODE_STATICS_toggleMusicInPractice
		#define GEODE_STATICS_toggleMusicInPractice
		GEODE_AS_STATIC_FUNCTION(toggleMusicInPractice) 
	#endif

	#ifndef GEODE_STATICS_processCheckpoints
		#define GEODE_STATICS_processCheckpoints
		GEODE_AS_STATIC_FUNCTION(processCheckpoints) 
	#endif

	#ifndef GEODE_STATICS_resetLevel
		#define GEODE_STATICS_resetLevel
		GEODE_AS_STATIC_FUNCTION(resetLevel) 
	#endif

	#ifndef GEODE_STATICS_currencyWillExit
		#define GEODE_STATICS_currencyWillExit
		GEODE_AS_STATIC_FUNCTION(currencyWillExit) 
	#endif

	#ifndef GEODE_STATICS_circleWaveWillBeRemoved
		#define GEODE_STATICS_circleWaveWillBeRemoved
		GEODE_AS_STATIC_FUNCTION(circleWaveWillBeRemoved) 
	#endif

	#ifndef GEODE_STATICS_dialogClosed
		#define GEODE_STATICS_dialogClosed
		GEODE_AS_STATIC_FUNCTION(dialogClosed) 
	#endif

	#ifndef GEODE_STATICS_addCircle
		#define GEODE_STATICS_addCircle
		GEODE_AS_STATIC_FUNCTION(addCircle) 
	#endif

	#ifndef GEODE_STATICS_addLiveStartPosObject
		#define GEODE_STATICS_addLiveStartPosObject
		GEODE_AS_STATIC_FUNCTION(addLiveStartPosObject) 
	#endif

	#ifndef GEODE_STATICS_addObject
		#define GEODE_STATICS_addObject
		GEODE_AS_STATIC_FUNCTION(addObject) 
	#endif

	#ifndef GEODE_STATICS_addToGroupOld
		#define GEODE_STATICS_addToGroupOld
		GEODE_AS_STATIC_FUNCTION(addToGroupOld) 
	#endif

	#ifndef GEODE_STATICS_applyCustomEnterEffect
		#define GEODE_STATICS_applyCustomEnterEffect
		GEODE_AS_STATIC_FUNCTION(applyCustomEnterEffect) 
	#endif

	#ifndef GEODE_STATICS_applyEnterEffect
		#define GEODE_STATICS_applyEnterEffect
		GEODE_AS_STATIC_FUNCTION(applyEnterEffect) 
	#endif

	#ifndef GEODE_STATICS_canPauseGame
		#define GEODE_STATICS_canPauseGame
		GEODE_AS_STATIC_FUNCTION(canPauseGame) 
	#endif

	#ifndef GEODE_STATICS_checkpointWithID
		#define GEODE_STATICS_checkpointWithID
		GEODE_AS_STATIC_FUNCTION(checkpointWithID) 
	#endif

	#ifndef GEODE_STATICS_colorObject
		#define GEODE_STATICS_colorObject
		GEODE_AS_STATIC_FUNCTION(colorObject) 
	#endif

	#ifndef GEODE_STATICS_commitJumps
		#define GEODE_STATICS_commitJumps
		GEODE_AS_STATIC_FUNCTION(commitJumps) 
	#endif

	#ifndef GEODE_STATICS_compareStateSnapshot
		#define GEODE_STATICS_compareStateSnapshot
		GEODE_AS_STATIC_FUNCTION(compareStateSnapshot) 
	#endif

	#ifndef GEODE_STATICS_createCheckpoint
		#define GEODE_STATICS_createCheckpoint
		GEODE_AS_STATIC_FUNCTION(createCheckpoint) 
	#endif

	#ifndef GEODE_STATICS_createObjectsFromSetupFinished
		#define GEODE_STATICS_createObjectsFromSetupFinished
		GEODE_AS_STATIC_FUNCTION(createObjectsFromSetupFinished) 
	#endif

	#ifndef GEODE_STATICS_delayedFullReset
		#define GEODE_STATICS_delayedFullReset
		GEODE_AS_STATIC_FUNCTION(delayedFullReset) 
	#endif

	#ifndef GEODE_STATICS_delayedResetLevel
		#define GEODE_STATICS_delayedResetLevel
		GEODE_AS_STATIC_FUNCTION(delayedResetLevel) 
	#endif

	#ifndef GEODE_STATICS_dtBumpCell
		#define GEODE_STATICS_dtBumpCell
		GEODE_AS_STATIC_FUNCTION(dtBumpCell) 
	#endif

	#ifndef GEODE_STATICS_dtCellKnown
		#define GEODE_STATICS_dtCellKnown
		GEODE_AS_STATIC_FUNCTION(dtCellKnown) 
	#endif

	#ifndef GEODE_STATICS_dtCommitPlaytime
		#define GEODE_STATICS_dtCommitPlaytime
		GEODE_AS_STATIC_FUNCTION(dtCommitPlaytime) 
	#endif

	#ifndef GEODE_STATICS_dtDeathIsBarren
		#define GEODE_STATICS_dtDeathIsBarren
		GEODE_AS_STATIC_FUNCTION(dtDeathIsBarren) 
	#endif

	#ifndef GEODE_STATICS_dtFlushCells
		#define GEODE_STATICS_dtFlushCells
		GEODE_AS_STATIC_FUNCTION(dtFlushCells) 
	#endif

	#ifndef GEODE_STATICS_dtLiveMarkersChanged
		#define GEODE_STATICS_dtLiveMarkersChanged
		GEODE_AS_STATIC_FUNCTION(dtLiveMarkersChanged) 
	#endif

	#ifndef GEODE_STATICS_dtLoadCells
		#define GEODE_STATICS_dtLoadCells
		GEODE_AS_STATIC_FUNCTION(dtLoadCells) 
	#endif

	#ifndef GEODE_STATICS_dtLocalCellTriples
		#define GEODE_STATICS_dtLocalCellTriples
		GEODE_AS_STATIC_FUNCTION(dtLocalCellTriples) 
	#endif

	#ifndef GEODE_STATICS_dtMarkerVisibleRect
		#define GEODE_STATICS_dtMarkerVisibleRect
		GEODE_AS_STATIC_FUNCTION(dtMarkerVisibleRect) 
	#endif

	#ifndef GEODE_STATICS_dtRebuildLiveMarkers
		#define GEODE_STATICS_dtRebuildLiveMarkers
		GEODE_AS_STATIC_FUNCTION(dtRebuildLiveMarkers) 
	#endif

	#ifndef GEODE_STATICS_dtUpdateLiveMarkers
		#define GEODE_STATICS_dtUpdateLiveMarkers
		GEODE_AS_STATIC_FUNCTION(dtUpdateLiveMarkers) 
	#endif

	#ifndef GEODE_STATICS_fullReset
		#define GEODE_STATICS_fullReset
		GEODE_AS_STATIC_FUNCTION(fullReset) 
	#endif

	#ifndef GEODE_STATICS_getCurrentPercent
		#define GEODE_STATICS_getCurrentPercent
		GEODE_AS_STATIC_FUNCTION(getCurrentPercent) 
	#endif

	#ifndef GEODE_STATICS_getCurrentPercentInt
		#define GEODE_STATICS_getCurrentPercentInt
		GEODE_AS_STATIC_FUNCTION(getCurrentPercentInt) 
	#endif

	#ifndef GEODE_STATICS_getEndPosition
		#define GEODE_STATICS_getEndPosition
		GEODE_AS_STATIC_FUNCTION(getEndPosition) 
	#endif

	#ifndef GEODE_STATICS_getLastCheckpoint
		#define GEODE_STATICS_getLastCheckpoint
		GEODE_AS_STATIC_FUNCTION(getLastCheckpoint) 
	#endif

	#ifndef GEODE_STATICS_getRelativeMod
		#define GEODE_STATICS_getRelativeMod
		GEODE_AS_STATIC_FUNCTION(getRelativeMod) 
	#endif

	#ifndef GEODE_STATICS_getRelativeModNew
		#define GEODE_STATICS_getRelativeModNew
		GEODE_AS_STATIC_FUNCTION(getRelativeModNew) 
	#endif

	#ifndef GEODE_STATICS_gravityEffectFinished
		#define GEODE_STATICS_gravityEffectFinished
		GEODE_AS_STATIC_FUNCTION(gravityEffectFinished) 
	#endif

	#ifndef GEODE_STATICS_incrementJumps
		#define GEODE_STATICS_incrementJumps
		GEODE_AS_STATIC_FUNCTION(incrementJumps) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_isGameplayActive
		#define GEODE_STATICS_isGameplayActive
		GEODE_AS_STATIC_FUNCTION(isGameplayActive) 
	#endif

	#ifndef GEODE_STATICS_isJumpHeldForPlayer
		#define GEODE_STATICS_isJumpHeldForPlayer
		GEODE_AS_STATIC_FUNCTION(isJumpHeldForPlayer) 
	#endif

	#ifndef GEODE_STATICS_levelComplete
		#define GEODE_STATICS_levelComplete
		GEODE_AS_STATIC_FUNCTION(levelComplete) 
	#endif

	#ifndef GEODE_STATICS_loadActiveSaveObjects
		#define GEODE_STATICS_loadActiveSaveObjects
		GEODE_AS_STATIC_FUNCTION(loadActiveSaveObjects) 
	#endif

	#ifndef GEODE_STATICS_loadDefaultColors
		#define GEODE_STATICS_loadDefaultColors
		GEODE_AS_STATIC_FUNCTION(loadDefaultColors) 
	#endif

	#ifndef GEODE_STATICS_loadDynamicSaveObjects
		#define GEODE_STATICS_loadDynamicSaveObjects
		GEODE_AS_STATIC_FUNCTION(loadDynamicSaveObjects) 
	#endif

	#ifndef GEODE_STATICS_loadFromCheckpoint
		#define GEODE_STATICS_loadFromCheckpoint
		GEODE_AS_STATIC_FUNCTION(loadFromCheckpoint) 
	#endif

	#ifndef GEODE_STATICS_loadLastCheckpoint
		#define GEODE_STATICS_loadLastCheckpoint
		GEODE_AS_STATIC_FUNCTION(loadLastCheckpoint) 
	#endif

	#ifndef GEODE_STATICS_loadPersistentCheckpoint
		#define GEODE_STATICS_loadPersistentCheckpoint
		GEODE_AS_STATIC_FUNCTION(loadPersistentCheckpoint) 
	#endif

	#ifndef GEODE_STATICS_markCheckpoint
		#define GEODE_STATICS_markCheckpoint
		GEODE_AS_STATIC_FUNCTION(markCheckpoint) 
	#endif

	#ifndef GEODE_STATICS_onQuit
		#define GEODE_STATICS_onQuit
		GEODE_AS_STATIC_FUNCTION(onQuit) 
	#endif

	#ifndef GEODE_STATICS_optimizeColorGroups
		#define GEODE_STATICS_optimizeColorGroups
		GEODE_AS_STATIC_FUNCTION(optimizeColorGroups) 
	#endif

	#ifndef GEODE_STATICS_optimizeOpacityGroups
		#define GEODE_STATICS_optimizeOpacityGroups
		GEODE_AS_STATIC_FUNCTION(optimizeOpacityGroups) 
	#endif

	#ifndef GEODE_STATICS_pauseGame
		#define GEODE_STATICS_pauseGame
		GEODE_AS_STATIC_FUNCTION(pauseGame) 
	#endif

	#ifndef GEODE_STATICS_playEndAnimationToPos
		#define GEODE_STATICS_playEndAnimationToPos
		GEODE_AS_STATIC_FUNCTION(playEndAnimationToPos) 
	#endif

	#ifndef GEODE_STATICS_playPlatformerEndAnimationToPos
		#define GEODE_STATICS_playPlatformerEndAnimationToPos
		GEODE_AS_STATIC_FUNCTION(playPlatformerEndAnimationToPos) 
	#endif

	#ifndef GEODE_STATICS_playPracticeMusic
		#define GEODE_STATICS_playPracticeMusic
		GEODE_AS_STATIC_FUNCTION(playPracticeMusic) 
	#endif

	#ifndef GEODE_STATICS_prepareCreateObjectsFromSetup
		#define GEODE_STATICS_prepareCreateObjectsFromSetup
		GEODE_AS_STATIC_FUNCTION(prepareCreateObjectsFromSetup) 
	#endif

	#ifndef GEODE_STATICS_prepareMusic
		#define GEODE_STATICS_prepareMusic
		GEODE_AS_STATIC_FUNCTION(prepareMusic) 
	#endif

	#ifndef GEODE_STATICS_processCreateObjectsFromSetup
		#define GEODE_STATICS_processCreateObjectsFromSetup
		GEODE_AS_STATIC_FUNCTION(processCreateObjectsFromSetup) 
	#endif

	#ifndef GEODE_STATICS_processLoadedMoveActions
		#define GEODE_STATICS_processLoadedMoveActions
		GEODE_AS_STATIC_FUNCTION(processLoadedMoveActions) 
	#endif

	#ifndef GEODE_STATICS_queueCheckpoint
		#define GEODE_STATICS_queueCheckpoint
		GEODE_AS_STATIC_FUNCTION(queueCheckpoint) 
	#endif

	#ifndef GEODE_STATICS_releaseAllPlayerButtons
		#define GEODE_STATICS_releaseAllPlayerButtons
		GEODE_AS_STATIC_FUNCTION(releaseAllPlayerButtons) 
	#endif

	#ifndef GEODE_STATICS_removeAllObjects
		#define GEODE_STATICS_removeAllObjects
		GEODE_AS_STATIC_FUNCTION(removeAllObjects) 
	#endif

	#ifndef GEODE_STATICS_removeCheckpoint
		#define GEODE_STATICS_removeCheckpoint
		GEODE_AS_STATIC_FUNCTION(removeCheckpoint) 
	#endif

	#ifndef GEODE_STATICS_removeFromGroupOld
		#define GEODE_STATICS_removeFromGroupOld
		GEODE_AS_STATIC_FUNCTION(removeFromGroupOld) 
	#endif

	#ifndef GEODE_STATICS_resetLevelFromStart
		#define GEODE_STATICS_resetLevelFromStart
		GEODE_AS_STATIC_FUNCTION(resetLevelFromStart) 
	#endif

	#ifndef GEODE_STATICS_resume
		#define GEODE_STATICS_resume
		GEODE_AS_STATIC_FUNCTION(resume) 
	#endif

	#ifndef GEODE_STATICS_resumeAndRestart
		#define GEODE_STATICS_resumeAndRestart
		GEODE_AS_STATIC_FUNCTION(resumeAndRestart) 
	#endif

	#ifndef GEODE_STATICS_saveActiveSaveObjects
		#define GEODE_STATICS_saveActiveSaveObjects
		GEODE_AS_STATIC_FUNCTION(saveActiveSaveObjects) 
	#endif

	#ifndef GEODE_STATICS_saveDynamicSaveObjects
		#define GEODE_STATICS_saveDynamicSaveObjects
		GEODE_AS_STATIC_FUNCTION(saveDynamicSaveObjects) 
	#endif

	#ifndef GEODE_STATICS_savePersistentCheckpoint
		#define GEODE_STATICS_savePersistentCheckpoint
		GEODE_AS_STATIC_FUNCTION(savePersistentCheckpoint) 
	#endif

	#ifndef GEODE_STATICS_scanActiveSaveObjects
		#define GEODE_STATICS_scanActiveSaveObjects
		GEODE_AS_STATIC_FUNCTION(scanActiveSaveObjects) 
	#endif

	#ifndef GEODE_STATICS_scanDynamicSaveObjects
		#define GEODE_STATICS_scanDynamicSaveObjects
		GEODE_AS_STATIC_FUNCTION(scanDynamicSaveObjects) 
	#endif

	#ifndef GEODE_STATICS_screenFlipObject
		#define GEODE_STATICS_screenFlipObject
		GEODE_AS_STATIC_FUNCTION(screenFlipObject) 
	#endif

	#ifndef GEODE_STATICS_setLastSavedCheckpoint
		#define GEODE_STATICS_setLastSavedCheckpoint
		GEODE_AS_STATIC_FUNCTION(setLastSavedCheckpoint) 
	#endif

	#ifndef GEODE_STATICS_setupHasCompleted
		#define GEODE_STATICS_setupHasCompleted
		GEODE_AS_STATIC_FUNCTION(setupHasCompleted) 
	#endif

	#ifndef GEODE_STATICS_shouldBlend
		#define GEODE_STATICS_shouldBlend
		GEODE_AS_STATIC_FUNCTION(shouldBlend) 
	#endif

	#ifndef GEODE_STATICS_shouldDebugDraw
		#define GEODE_STATICS_shouldDebugDraw
		GEODE_AS_STATIC_FUNCTION(shouldDebugDraw) 
	#endif

	#ifndef GEODE_STATICS_showCompleteEffect
		#define GEODE_STATICS_showCompleteEffect
		GEODE_AS_STATIC_FUNCTION(showCompleteEffect) 
	#endif

	#ifndef GEODE_STATICS_showCompleteText
		#define GEODE_STATICS_showCompleteText
		GEODE_AS_STATIC_FUNCTION(showCompleteText) 
	#endif

	#ifndef GEODE_STATICS_showEndLayer
		#define GEODE_STATICS_showEndLayer
		GEODE_AS_STATIC_FUNCTION(showEndLayer) 
	#endif

	#ifndef GEODE_STATICS_showHint
		#define GEODE_STATICS_showHint
		GEODE_AS_STATIC_FUNCTION(showHint) 
	#endif

	#ifndef GEODE_STATICS_showNewBest
		#define GEODE_STATICS_showNewBest
		GEODE_AS_STATIC_FUNCTION(showNewBest) 
	#endif

	#ifndef GEODE_STATICS_showRetryLayer
		#define GEODE_STATICS_showRetryLayer
		GEODE_AS_STATIC_FUNCTION(showRetryLayer) 
	#endif

	#ifndef GEODE_STATICS_showTwoPlayerGuide
		#define GEODE_STATICS_showTwoPlayerGuide
		GEODE_AS_STATIC_FUNCTION(showTwoPlayerGuide) 
	#endif

	#ifndef GEODE_STATICS_spawnCircle
		#define GEODE_STATICS_spawnCircle
		GEODE_AS_STATIC_FUNCTION(spawnCircle) 
	#endif

	#ifndef GEODE_STATICS_spawnFirework
		#define GEODE_STATICS_spawnFirework
		GEODE_AS_STATIC_FUNCTION(spawnFirework) 
	#endif

	#ifndef GEODE_STATICS_startGame
		#define GEODE_STATICS_startGame
		GEODE_AS_STATIC_FUNCTION(startGame) 
	#endif

	#ifndef GEODE_STATICS_startGameDelayed
		#define GEODE_STATICS_startGameDelayed
		GEODE_AS_STATIC_FUNCTION(startGameDelayed) 
	#endif

	#ifndef GEODE_STATICS_startMusic
		#define GEODE_STATICS_startMusic
		GEODE_AS_STATIC_FUNCTION(startMusic) 
	#endif

	#ifndef GEODE_STATICS_startRecording
		#define GEODE_STATICS_startRecording
		GEODE_AS_STATIC_FUNCTION(startRecording) 
	#endif

	#ifndef GEODE_STATICS_startRecordingDelayed
		#define GEODE_STATICS_startRecordingDelayed
		GEODE_AS_STATIC_FUNCTION(startRecordingDelayed) 
	#endif

	#ifndef GEODE_STATICS_stopRecording
		#define GEODE_STATICS_stopRecording
		GEODE_AS_STATIC_FUNCTION(stopRecording) 
	#endif

	#ifndef GEODE_STATICS_storeCheckpoint
		#define GEODE_STATICS_storeCheckpoint
		GEODE_AS_STATIC_FUNCTION(storeCheckpoint) 
	#endif

	#ifndef GEODE_STATICS_switchToStartPosObject
		#define GEODE_STATICS_switchToStartPosObject
		GEODE_AS_STATIC_FUNCTION(switchToStartPosObject) 
	#endif

	#ifndef GEODE_STATICS_takeStateSnapshot
		#define GEODE_STATICS_takeStateSnapshot
		GEODE_AS_STATIC_FUNCTION(takeStateSnapshot) 
	#endif

	#ifndef GEODE_STATICS_toggleBGEffectVisibility
		#define GEODE_STATICS_toggleBGEffectVisibility
		GEODE_AS_STATIC_FUNCTION(toggleBGEffectVisibility) 
	#endif

	#ifndef GEODE_STATICS_toggleDebugDraw
		#define GEODE_STATICS_toggleDebugDraw
		GEODE_AS_STATIC_FUNCTION(toggleDebugDraw) 
	#endif

	#ifndef GEODE_STATICS_toggleGhostEffect
		#define GEODE_STATICS_toggleGhostEffect
		GEODE_AS_STATIC_FUNCTION(toggleGhostEffect) 
	#endif

	#ifndef GEODE_STATICS_toggleIgnoreDamage
		#define GEODE_STATICS_toggleIgnoreDamage
		GEODE_AS_STATIC_FUNCTION(toggleIgnoreDamage) 
	#endif

	#ifndef GEODE_STATICS_togglePracticeMode
		#define GEODE_STATICS_togglePracticeMode
		GEODE_AS_STATIC_FUNCTION(togglePracticeMode) 
	#endif

	#ifndef GEODE_STATICS_tracksPercent
		#define GEODE_STATICS_tracksPercent
		GEODE_AS_STATIC_FUNCTION(tracksPercent) 
	#endif

	#ifndef GEODE_STATICS_tryShowDeathMarkers
		#define GEODE_STATICS_tryShowDeathMarkers
		GEODE_AS_STATIC_FUNCTION(tryShowDeathMarkers) 
	#endif

	#ifndef GEODE_STATICS_tryStartRecord
		#define GEODE_STATICS_tryStartRecord
		GEODE_AS_STATIC_FUNCTION(tryStartRecord) 
	#endif

	#ifndef GEODE_STATICS_updateAttempts
		#define GEODE_STATICS_updateAttempts
		GEODE_AS_STATIC_FUNCTION(updateAttempts) 
	#endif

	#ifndef GEODE_STATICS_updateDebugDrawSettings
		#define GEODE_STATICS_updateDebugDrawSettings
		GEODE_AS_STATIC_FUNCTION(updateDebugDrawSettings) 
	#endif

	#ifndef GEODE_STATICS_updateEffectPositions
		#define GEODE_STATICS_updateEffectPositions
		GEODE_AS_STATIC_FUNCTION(updateEffectPositions) 
	#endif

	#ifndef GEODE_STATICS_updateGameSettings
		#define GEODE_STATICS_updateGameSettings
		GEODE_AS_STATIC_FUNCTION(updateGameSettings) 
	#endif

	#ifndef GEODE_STATICS_updateInfoLabel
		#define GEODE_STATICS_updateInfoLabel
		GEODE_AS_STATIC_FUNCTION(updateInfoLabel) 
	#endif

	#ifndef GEODE_STATICS_updateInvisibleBlock
		#define GEODE_STATICS_updateInvisibleBlock
		GEODE_AS_STATIC_FUNCTION(updateInvisibleBlock) 
	#endif

	#ifndef GEODE_STATICS_updateProgressbar
		#define GEODE_STATICS_updateProgressbar
		GEODE_AS_STATIC_FUNCTION(updateProgressbar) 
	#endif

	#ifndef GEODE_STATICS_updateScreenRotation
		#define GEODE_STATICS_updateScreenRotation
		GEODE_AS_STATIC_FUNCTION(updateScreenRotation) 
	#endif

	#ifndef GEODE_STATICS_updateTestModeLabel
		#define GEODE_STATICS_updateTestModeLabel
		GEODE_AS_STATIC_FUNCTION(updateTestModeLabel) 
	#endif

	#ifndef GEODE_STATICS_writePersistentSave
		#define GEODE_STATICS_writePersistentSave
		GEODE_AS_STATIC_FUNCTION(writePersistentSave) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_get
		#define GEODE_CONCEPT_CHECK_get
		GEODE_CONCEPT_FUNCTION_CHECK(get) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_scene
		#define GEODE_CONCEPT_CHECK_scene
		GEODE_CONCEPT_FUNCTION_CHECK(scene) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onEnterTransitionDidFinish
		#define GEODE_CONCEPT_CHECK_onEnterTransitionDidFinish
		GEODE_CONCEPT_FUNCTION_CHECK(onEnterTransitionDidFinish) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onExit
		#define GEODE_CONCEPT_CHECK_onExit
		GEODE_CONCEPT_FUNCTION_CHECK(onExit) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_postUpdate
		#define GEODE_CONCEPT_CHECK_postUpdate
		GEODE_CONCEPT_FUNCTION_CHECK(postUpdate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_checkForEnd
		#define GEODE_CONCEPT_CHECK_checkForEnd
		GEODE_CONCEPT_FUNCTION_CHECK(checkForEnd) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_testTime
		#define GEODE_CONCEPT_CHECK_testTime
		GEODE_CONCEPT_FUNCTION_CHECK(testTime) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateVerifyDamage
		#define GEODE_CONCEPT_CHECK_updateVerifyDamage
		GEODE_CONCEPT_FUNCTION_CHECK(updateVerifyDamage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateAttemptTime
		#define GEODE_CONCEPT_CHECK_updateAttemptTime
		GEODE_CONCEPT_FUNCTION_CHECK(updateAttemptTime) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateVisibility
		#define GEODE_CONCEPT_CHECK_updateVisibility
		GEODE_CONCEPT_FUNCTION_CHECK(updateVisibility) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_opacityForObject
		#define GEODE_CONCEPT_CHECK_opacityForObject
		GEODE_CONCEPT_FUNCTION_CHECK(opacityForObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateColor
		#define GEODE_CONCEPT_CHECK_updateColor
		GEODE_CONCEPT_FUNCTION_CHECK(updateColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_activateEndTrigger
		#define GEODE_CONCEPT_CHECK_activateEndTrigger
		GEODE_CONCEPT_FUNCTION_CHECK(activateEndTrigger) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_activatePlatformerEndTrigger
		#define GEODE_CONCEPT_CHECK_activatePlatformerEndTrigger
		GEODE_CONCEPT_FUNCTION_CHECK(activatePlatformerEndTrigger) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleGlitter
		#define GEODE_CONCEPT_CHECK_toggleGlitter
		GEODE_CONCEPT_FUNCTION_CHECK(toggleGlitter) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_destroyPlayer
		#define GEODE_CONCEPT_CHECK_destroyPlayer
		GEODE_CONCEPT_FUNCTION_CHECK(destroyPlayer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_shouldDrawDebugHitboxes
		#define GEODE_CONCEPT_CHECK_shouldDrawDebugHitboxes
		GEODE_CONCEPT_FUNCTION_CHECK(shouldDrawDebugHitboxes) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_shouldDrawHitboxTrail
		#define GEODE_CONCEPT_CHECK_shouldDrawHitboxTrail
		GEODE_CONCEPT_FUNCTION_CHECK(shouldDrawHitboxTrail) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_shouldRecordHitboxTrail
		#define GEODE_CONCEPT_CHECK_shouldRecordHitboxTrail
		GEODE_CONCEPT_FUNCTION_CHECK(shouldRecordHitboxTrail) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getHitboxTrailMax
		#define GEODE_CONCEPT_CHECK_getHitboxTrailMax
		GEODE_CONCEPT_FUNCTION_CHECK(getHitboxTrailMax) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleGroundVisibility
		#define GEODE_CONCEPT_CHECK_toggleGroundVisibility
		GEODE_CONCEPT_FUNCTION_CHECK(toggleGroundVisibility) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleMGVisibility
		#define GEODE_CONCEPT_CHECK_toggleMGVisibility
		GEODE_CONCEPT_FUNCTION_CHECK(toggleMGVisibility) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleHideAttempts
		#define GEODE_CONCEPT_CHECK_toggleHideAttempts
		GEODE_CONCEPT_FUNCTION_CHECK(toggleHideAttempts) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_timeForPos
		#define GEODE_CONCEPT_CHECK_timeForPos
		GEODE_CONCEPT_FUNCTION_CHECK(timeForPos) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_posForTime
		#define GEODE_CONCEPT_CHECK_posForTime
		GEODE_CONCEPT_FUNCTION_CHECK(posForTime) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetSPTriggered
		#define GEODE_CONCEPT_CHECK_resetSPTriggered
		GEODE_CONCEPT_FUNCTION_CHECK(resetSPTriggered) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateTimeWarp
		#define GEODE_CONCEPT_CHECK_updateTimeWarp
		GEODE_CONCEPT_FUNCTION_CHECK(updateTimeWarp) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_playGravityEffect
		#define GEODE_CONCEPT_CHECK_playGravityEffect
		GEODE_CONCEPT_FUNCTION_CHECK(playGravityEffect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_manualUpdateObjectColors
		#define GEODE_CONCEPT_CHECK_manualUpdateObjectColors
		GEODE_CONCEPT_FUNCTION_CHECK(manualUpdateObjectColors) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_checkpointActivated
		#define GEODE_CONCEPT_CHECK_checkpointActivated
		GEODE_CONCEPT_FUNCTION_CHECK(checkpointActivated) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_flipArt
		#define GEODE_CONCEPT_CHECK_flipArt
		GEODE_CONCEPT_FUNCTION_CHECK(flipArt) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateTimeLabel
		#define GEODE_CONCEPT_CHECK_updateTimeLabel
		GEODE_CONCEPT_FUNCTION_CHECK(updateTimeLabel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_checkSnapshot
		#define GEODE_CONCEPT_CHECK_checkSnapshot
		GEODE_CONCEPT_FUNCTION_CHECK(checkSnapshot) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleProgressbar
		#define GEODE_CONCEPT_CHECK_toggleProgressbar
		GEODE_CONCEPT_FUNCTION_CHECK(toggleProgressbar) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleInfoLabel
		#define GEODE_CONCEPT_CHECK_toggleInfoLabel
		GEODE_CONCEPT_FUNCTION_CHECK(toggleInfoLabel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeAllCheckpoints
		#define GEODE_CONCEPT_CHECK_removeAllCheckpoints
		GEODE_CONCEPT_FUNCTION_CHECK(removeAllCheckpoints) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleMusicInPractice
		#define GEODE_CONCEPT_CHECK_toggleMusicInPractice
		GEODE_CONCEPT_FUNCTION_CHECK(toggleMusicInPractice) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_processCheckpoints
		#define GEODE_CONCEPT_CHECK_processCheckpoints
		GEODE_CONCEPT_FUNCTION_CHECK(processCheckpoints) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetLevel
		#define GEODE_CONCEPT_CHECK_resetLevel
		GEODE_CONCEPT_FUNCTION_CHECK(resetLevel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_currencyWillExit
		#define GEODE_CONCEPT_CHECK_currencyWillExit
		GEODE_CONCEPT_FUNCTION_CHECK(currencyWillExit) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_circleWaveWillBeRemoved
		#define GEODE_CONCEPT_CHECK_circleWaveWillBeRemoved
		GEODE_CONCEPT_FUNCTION_CHECK(circleWaveWillBeRemoved) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_dialogClosed
		#define GEODE_CONCEPT_CHECK_dialogClosed
		GEODE_CONCEPT_FUNCTION_CHECK(dialogClosed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addCircle
		#define GEODE_CONCEPT_CHECK_addCircle
		GEODE_CONCEPT_FUNCTION_CHECK(addCircle) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addLiveStartPosObject
		#define GEODE_CONCEPT_CHECK_addLiveStartPosObject
		GEODE_CONCEPT_FUNCTION_CHECK(addLiveStartPosObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addObject
		#define GEODE_CONCEPT_CHECK_addObject
		GEODE_CONCEPT_FUNCTION_CHECK(addObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addToGroupOld
		#define GEODE_CONCEPT_CHECK_addToGroupOld
		GEODE_CONCEPT_FUNCTION_CHECK(addToGroupOld) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_applyCustomEnterEffect
		#define GEODE_CONCEPT_CHECK_applyCustomEnterEffect
		GEODE_CONCEPT_FUNCTION_CHECK(applyCustomEnterEffect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_applyEnterEffect
		#define GEODE_CONCEPT_CHECK_applyEnterEffect
		GEODE_CONCEPT_FUNCTION_CHECK(applyEnterEffect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_canPauseGame
		#define GEODE_CONCEPT_CHECK_canPauseGame
		GEODE_CONCEPT_FUNCTION_CHECK(canPauseGame) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_checkpointWithID
		#define GEODE_CONCEPT_CHECK_checkpointWithID
		GEODE_CONCEPT_FUNCTION_CHECK(checkpointWithID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_colorObject
		#define GEODE_CONCEPT_CHECK_colorObject
		GEODE_CONCEPT_FUNCTION_CHECK(colorObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_commitJumps
		#define GEODE_CONCEPT_CHECK_commitJumps
		GEODE_CONCEPT_FUNCTION_CHECK(commitJumps) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_compareStateSnapshot
		#define GEODE_CONCEPT_CHECK_compareStateSnapshot
		GEODE_CONCEPT_FUNCTION_CHECK(compareStateSnapshot) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createCheckpoint
		#define GEODE_CONCEPT_CHECK_createCheckpoint
		GEODE_CONCEPT_FUNCTION_CHECK(createCheckpoint) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createObjectsFromSetupFinished
		#define GEODE_CONCEPT_CHECK_createObjectsFromSetupFinished
		GEODE_CONCEPT_FUNCTION_CHECK(createObjectsFromSetupFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_delayedFullReset
		#define GEODE_CONCEPT_CHECK_delayedFullReset
		GEODE_CONCEPT_FUNCTION_CHECK(delayedFullReset) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_delayedResetLevel
		#define GEODE_CONCEPT_CHECK_delayedResetLevel
		GEODE_CONCEPT_FUNCTION_CHECK(delayedResetLevel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_dtBumpCell
		#define GEODE_CONCEPT_CHECK_dtBumpCell
		GEODE_CONCEPT_FUNCTION_CHECK(dtBumpCell) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_dtCellKnown
		#define GEODE_CONCEPT_CHECK_dtCellKnown
		GEODE_CONCEPT_FUNCTION_CHECK(dtCellKnown) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_dtCommitPlaytime
		#define GEODE_CONCEPT_CHECK_dtCommitPlaytime
		GEODE_CONCEPT_FUNCTION_CHECK(dtCommitPlaytime) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_dtDeathIsBarren
		#define GEODE_CONCEPT_CHECK_dtDeathIsBarren
		GEODE_CONCEPT_FUNCTION_CHECK(dtDeathIsBarren) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_dtFlushCells
		#define GEODE_CONCEPT_CHECK_dtFlushCells
		GEODE_CONCEPT_FUNCTION_CHECK(dtFlushCells) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_dtLiveMarkersChanged
		#define GEODE_CONCEPT_CHECK_dtLiveMarkersChanged
		GEODE_CONCEPT_FUNCTION_CHECK(dtLiveMarkersChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_dtLoadCells
		#define GEODE_CONCEPT_CHECK_dtLoadCells
		GEODE_CONCEPT_FUNCTION_CHECK(dtLoadCells) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_dtLocalCellTriples
		#define GEODE_CONCEPT_CHECK_dtLocalCellTriples
		GEODE_CONCEPT_FUNCTION_CHECK(dtLocalCellTriples) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_dtMarkerVisibleRect
		#define GEODE_CONCEPT_CHECK_dtMarkerVisibleRect
		GEODE_CONCEPT_FUNCTION_CHECK(dtMarkerVisibleRect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_dtRebuildLiveMarkers
		#define GEODE_CONCEPT_CHECK_dtRebuildLiveMarkers
		GEODE_CONCEPT_FUNCTION_CHECK(dtRebuildLiveMarkers) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_dtUpdateLiveMarkers
		#define GEODE_CONCEPT_CHECK_dtUpdateLiveMarkers
		GEODE_CONCEPT_FUNCTION_CHECK(dtUpdateLiveMarkers) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_fullReset
		#define GEODE_CONCEPT_CHECK_fullReset
		GEODE_CONCEPT_FUNCTION_CHECK(fullReset) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getCurrentPercent
		#define GEODE_CONCEPT_CHECK_getCurrentPercent
		GEODE_CONCEPT_FUNCTION_CHECK(getCurrentPercent) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getCurrentPercentInt
		#define GEODE_CONCEPT_CHECK_getCurrentPercentInt
		GEODE_CONCEPT_FUNCTION_CHECK(getCurrentPercentInt) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getEndPosition
		#define GEODE_CONCEPT_CHECK_getEndPosition
		GEODE_CONCEPT_FUNCTION_CHECK(getEndPosition) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getLastCheckpoint
		#define GEODE_CONCEPT_CHECK_getLastCheckpoint
		GEODE_CONCEPT_FUNCTION_CHECK(getLastCheckpoint) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getRelativeMod
		#define GEODE_CONCEPT_CHECK_getRelativeMod
		GEODE_CONCEPT_FUNCTION_CHECK(getRelativeMod) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getRelativeModNew
		#define GEODE_CONCEPT_CHECK_getRelativeModNew
		GEODE_CONCEPT_FUNCTION_CHECK(getRelativeModNew) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getTempMilliTime
		#define GEODE_CONCEPT_CHECK_getTempMilliTime
		GEODE_CONCEPT_FUNCTION_CHECK(getTempMilliTime) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_gravityEffectFinished
		#define GEODE_CONCEPT_CHECK_gravityEffectFinished
		GEODE_CONCEPT_FUNCTION_CHECK(gravityEffectFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_incrementJumps
		#define GEODE_CONCEPT_CHECK_incrementJumps
		GEODE_CONCEPT_FUNCTION_CHECK(incrementJumps) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isGameplayActive
		#define GEODE_CONCEPT_CHECK_isGameplayActive
		GEODE_CONCEPT_FUNCTION_CHECK(isGameplayActive) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isJumpHeldForPlayer
		#define GEODE_CONCEPT_CHECK_isJumpHeldForPlayer
		GEODE_CONCEPT_FUNCTION_CHECK(isJumpHeldForPlayer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_levelComplete
		#define GEODE_CONCEPT_CHECK_levelComplete
		GEODE_CONCEPT_FUNCTION_CHECK(levelComplete) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadActiveSaveObjects
		#define GEODE_CONCEPT_CHECK_loadActiveSaveObjects
		GEODE_CONCEPT_FUNCTION_CHECK(loadActiveSaveObjects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadDefaultColors
		#define GEODE_CONCEPT_CHECK_loadDefaultColors
		GEODE_CONCEPT_FUNCTION_CHECK(loadDefaultColors) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadDynamicSaveObjects
		#define GEODE_CONCEPT_CHECK_loadDynamicSaveObjects
		GEODE_CONCEPT_FUNCTION_CHECK(loadDynamicSaveObjects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadFromCheckpoint
		#define GEODE_CONCEPT_CHECK_loadFromCheckpoint
		GEODE_CONCEPT_FUNCTION_CHECK(loadFromCheckpoint) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadLastCheckpoint
		#define GEODE_CONCEPT_CHECK_loadLastCheckpoint
		GEODE_CONCEPT_FUNCTION_CHECK(loadLastCheckpoint) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadPersistentCheckpoint
		#define GEODE_CONCEPT_CHECK_loadPersistentCheckpoint
		GEODE_CONCEPT_FUNCTION_CHECK(loadPersistentCheckpoint) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_markCheckpoint
		#define GEODE_CONCEPT_CHECK_markCheckpoint
		GEODE_CONCEPT_FUNCTION_CHECK(markCheckpoint) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onQuit
		#define GEODE_CONCEPT_CHECK_onQuit
		GEODE_CONCEPT_FUNCTION_CHECK(onQuit) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_optimizeColorGroups
		#define GEODE_CONCEPT_CHECK_optimizeColorGroups
		GEODE_CONCEPT_FUNCTION_CHECK(optimizeColorGroups) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_optimizeOpacityGroups
		#define GEODE_CONCEPT_CHECK_optimizeOpacityGroups
		GEODE_CONCEPT_FUNCTION_CHECK(optimizeOpacityGroups) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_pauseGame
		#define GEODE_CONCEPT_CHECK_pauseGame
		GEODE_CONCEPT_FUNCTION_CHECK(pauseGame) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_playEndAnimationToPos
		#define GEODE_CONCEPT_CHECK_playEndAnimationToPos
		GEODE_CONCEPT_FUNCTION_CHECK(playEndAnimationToPos) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_playPlatformerEndAnimationToPos
		#define GEODE_CONCEPT_CHECK_playPlatformerEndAnimationToPos
		GEODE_CONCEPT_FUNCTION_CHECK(playPlatformerEndAnimationToPos) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_playPracticeMusic
		#define GEODE_CONCEPT_CHECK_playPracticeMusic
		GEODE_CONCEPT_FUNCTION_CHECK(playPracticeMusic) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_prepareCreateObjectsFromSetup
		#define GEODE_CONCEPT_CHECK_prepareCreateObjectsFromSetup
		GEODE_CONCEPT_FUNCTION_CHECK(prepareCreateObjectsFromSetup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_prepareMusic
		#define GEODE_CONCEPT_CHECK_prepareMusic
		GEODE_CONCEPT_FUNCTION_CHECK(prepareMusic) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_processCreateObjectsFromSetup
		#define GEODE_CONCEPT_CHECK_processCreateObjectsFromSetup
		GEODE_CONCEPT_FUNCTION_CHECK(processCreateObjectsFromSetup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_processLoadedMoveActions
		#define GEODE_CONCEPT_CHECK_processLoadedMoveActions
		GEODE_CONCEPT_FUNCTION_CHECK(processLoadedMoveActions) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_queueCheckpoint
		#define GEODE_CONCEPT_CHECK_queueCheckpoint
		GEODE_CONCEPT_FUNCTION_CHECK(queueCheckpoint) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_releaseAllPlayerButtons
		#define GEODE_CONCEPT_CHECK_releaseAllPlayerButtons
		GEODE_CONCEPT_FUNCTION_CHECK(releaseAllPlayerButtons) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeAllObjects
		#define GEODE_CONCEPT_CHECK_removeAllObjects
		GEODE_CONCEPT_FUNCTION_CHECK(removeAllObjects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeCheckpoint
		#define GEODE_CONCEPT_CHECK_removeCheckpoint
		GEODE_CONCEPT_FUNCTION_CHECK(removeCheckpoint) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeFromGroupOld
		#define GEODE_CONCEPT_CHECK_removeFromGroupOld
		GEODE_CONCEPT_FUNCTION_CHECK(removeFromGroupOld) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetLevelFromStart
		#define GEODE_CONCEPT_CHECK_resetLevelFromStart
		GEODE_CONCEPT_FUNCTION_CHECK(resetLevelFromStart) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resume
		#define GEODE_CONCEPT_CHECK_resume
		GEODE_CONCEPT_FUNCTION_CHECK(resume) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resumeAndRestart
		#define GEODE_CONCEPT_CHECK_resumeAndRestart
		GEODE_CONCEPT_FUNCTION_CHECK(resumeAndRestart) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_saveActiveSaveObjects
		#define GEODE_CONCEPT_CHECK_saveActiveSaveObjects
		GEODE_CONCEPT_FUNCTION_CHECK(saveActiveSaveObjects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_saveDynamicSaveObjects
		#define GEODE_CONCEPT_CHECK_saveDynamicSaveObjects
		GEODE_CONCEPT_FUNCTION_CHECK(saveDynamicSaveObjects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_savePersistentCheckpoint
		#define GEODE_CONCEPT_CHECK_savePersistentCheckpoint
		GEODE_CONCEPT_FUNCTION_CHECK(savePersistentCheckpoint) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_scanActiveSaveObjects
		#define GEODE_CONCEPT_CHECK_scanActiveSaveObjects
		GEODE_CONCEPT_FUNCTION_CHECK(scanActiveSaveObjects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_scanDynamicSaveObjects
		#define GEODE_CONCEPT_CHECK_scanDynamicSaveObjects
		GEODE_CONCEPT_FUNCTION_CHECK(scanDynamicSaveObjects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_screenFlipObject
		#define GEODE_CONCEPT_CHECK_screenFlipObject
		GEODE_CONCEPT_FUNCTION_CHECK(screenFlipObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setLastSavedCheckpoint
		#define GEODE_CONCEPT_CHECK_setLastSavedCheckpoint
		GEODE_CONCEPT_FUNCTION_CHECK(setLastSavedCheckpoint) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupHasCompleted
		#define GEODE_CONCEPT_CHECK_setupHasCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(setupHasCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_shouldBlend
		#define GEODE_CONCEPT_CHECK_shouldBlend
		GEODE_CONCEPT_FUNCTION_CHECK(shouldBlend) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_shouldDebugDraw
		#define GEODE_CONCEPT_CHECK_shouldDebugDraw
		GEODE_CONCEPT_FUNCTION_CHECK(shouldDebugDraw) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_showCompleteEffect
		#define GEODE_CONCEPT_CHECK_showCompleteEffect
		GEODE_CONCEPT_FUNCTION_CHECK(showCompleteEffect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_showCompleteText
		#define GEODE_CONCEPT_CHECK_showCompleteText
		GEODE_CONCEPT_FUNCTION_CHECK(showCompleteText) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_showEndLayer
		#define GEODE_CONCEPT_CHECK_showEndLayer
		GEODE_CONCEPT_FUNCTION_CHECK(showEndLayer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_showHint
		#define GEODE_CONCEPT_CHECK_showHint
		GEODE_CONCEPT_FUNCTION_CHECK(showHint) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_showNewBest
		#define GEODE_CONCEPT_CHECK_showNewBest
		GEODE_CONCEPT_FUNCTION_CHECK(showNewBest) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_showRetryLayer
		#define GEODE_CONCEPT_CHECK_showRetryLayer
		GEODE_CONCEPT_FUNCTION_CHECK(showRetryLayer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_showTwoPlayerGuide
		#define GEODE_CONCEPT_CHECK_showTwoPlayerGuide
		GEODE_CONCEPT_FUNCTION_CHECK(showTwoPlayerGuide) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_spawnCircle
		#define GEODE_CONCEPT_CHECK_spawnCircle
		GEODE_CONCEPT_FUNCTION_CHECK(spawnCircle) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_spawnFirework
		#define GEODE_CONCEPT_CHECK_spawnFirework
		GEODE_CONCEPT_FUNCTION_CHECK(spawnFirework) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_startGame
		#define GEODE_CONCEPT_CHECK_startGame
		GEODE_CONCEPT_FUNCTION_CHECK(startGame) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_startGameDelayed
		#define GEODE_CONCEPT_CHECK_startGameDelayed
		GEODE_CONCEPT_FUNCTION_CHECK(startGameDelayed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_startMusic
		#define GEODE_CONCEPT_CHECK_startMusic
		GEODE_CONCEPT_FUNCTION_CHECK(startMusic) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_startRecording
		#define GEODE_CONCEPT_CHECK_startRecording
		GEODE_CONCEPT_FUNCTION_CHECK(startRecording) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_startRecordingDelayed
		#define GEODE_CONCEPT_CHECK_startRecordingDelayed
		GEODE_CONCEPT_FUNCTION_CHECK(startRecordingDelayed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_stopRecording
		#define GEODE_CONCEPT_CHECK_stopRecording
		GEODE_CONCEPT_FUNCTION_CHECK(stopRecording) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_storeCheckpoint
		#define GEODE_CONCEPT_CHECK_storeCheckpoint
		GEODE_CONCEPT_FUNCTION_CHECK(storeCheckpoint) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_switchToStartPosObject
		#define GEODE_CONCEPT_CHECK_switchToStartPosObject
		GEODE_CONCEPT_FUNCTION_CHECK(switchToStartPosObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_takeStateSnapshot
		#define GEODE_CONCEPT_CHECK_takeStateSnapshot
		GEODE_CONCEPT_FUNCTION_CHECK(takeStateSnapshot) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleBGEffectVisibility
		#define GEODE_CONCEPT_CHECK_toggleBGEffectVisibility
		GEODE_CONCEPT_FUNCTION_CHECK(toggleBGEffectVisibility) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleDebugDraw
		#define GEODE_CONCEPT_CHECK_toggleDebugDraw
		GEODE_CONCEPT_FUNCTION_CHECK(toggleDebugDraw) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleGhostEffect
		#define GEODE_CONCEPT_CHECK_toggleGhostEffect
		GEODE_CONCEPT_FUNCTION_CHECK(toggleGhostEffect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleIgnoreDamage
		#define GEODE_CONCEPT_CHECK_toggleIgnoreDamage
		GEODE_CONCEPT_FUNCTION_CHECK(toggleIgnoreDamage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_togglePracticeMode
		#define GEODE_CONCEPT_CHECK_togglePracticeMode
		GEODE_CONCEPT_FUNCTION_CHECK(togglePracticeMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_tracksPercent
		#define GEODE_CONCEPT_CHECK_tracksPercent
		GEODE_CONCEPT_FUNCTION_CHECK(tracksPercent) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_tryShowDeathMarkers
		#define GEODE_CONCEPT_CHECK_tryShowDeathMarkers
		GEODE_CONCEPT_FUNCTION_CHECK(tryShowDeathMarkers) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_tryStartRecord
		#define GEODE_CONCEPT_CHECK_tryStartRecord
		GEODE_CONCEPT_FUNCTION_CHECK(tryStartRecord) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateAttempts
		#define GEODE_CONCEPT_CHECK_updateAttempts
		GEODE_CONCEPT_FUNCTION_CHECK(updateAttempts) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateDebugDrawSettings
		#define GEODE_CONCEPT_CHECK_updateDebugDrawSettings
		GEODE_CONCEPT_FUNCTION_CHECK(updateDebugDrawSettings) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateEffectPositions
		#define GEODE_CONCEPT_CHECK_updateEffectPositions
		GEODE_CONCEPT_FUNCTION_CHECK(updateEffectPositions) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateGameSettings
		#define GEODE_CONCEPT_CHECK_updateGameSettings
		GEODE_CONCEPT_FUNCTION_CHECK(updateGameSettings) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateInfoLabel
		#define GEODE_CONCEPT_CHECK_updateInfoLabel
		GEODE_CONCEPT_FUNCTION_CHECK(updateInfoLabel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateInvisibleBlock
		#define GEODE_CONCEPT_CHECK_updateInvisibleBlock
		GEODE_CONCEPT_FUNCTION_CHECK(updateInvisibleBlock) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateProgressbar
		#define GEODE_CONCEPT_CHECK_updateProgressbar
		GEODE_CONCEPT_FUNCTION_CHECK(updateProgressbar) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateScreenRotation
		#define GEODE_CONCEPT_CHECK_updateScreenRotation
		GEODE_CONCEPT_FUNCTION_CHECK(updateScreenRotation) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateTestModeLabel
		#define GEODE_CONCEPT_CHECK_updateTestModeLabel
		GEODE_CONCEPT_FUNCTION_CHECK(updateTestModeLabel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_writePersistentSave
		#define GEODE_CONCEPT_CHECK_writePersistentSave
		GEODE_CONCEPT_FUNCTION_CHECK(writePersistentSave) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, PlayLayer> : ModifyBase<ModifyDerive<Der, PlayLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, PlayLayer>>;
		using ModifyBase<ModifyDerive<Der, PlayLayer>>::ModifyBase;
		using Base = PlayLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(base::get() + 0x70bec, Default, PlayLayer)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x70f44, Default, PlayLayer, create, GJGameLevel*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(PlayLayer, get, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x70e94, Default, PlayLayer, scene, GJGameLevel*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x832e8, Default, PlayLayer, onEnterTransitionDidFinish, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x83324, Default, PlayLayer, onExit, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x7eb3c, Default, PlayLayer, postUpdate, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x7ec0c, Default, PlayLayer, checkForEnd, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(PlayLayer, testTime, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x7ed00, Default, PlayLayer, updateVerifyDamage, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x7edb0, Default, PlayLayer, updateAttemptTime, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x7ae88, Default, PlayLayer, updateVisibility, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x7cd0c, Default, PlayLayer, opacityForObject, GameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x7cdd0, Default, PlayLayer, updateColor, cocos2d::ccColor3B&, float, int, bool, float, cocos2d::ccHSVValue&, int, bool, EffectGameObject*, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x79eb4, Default, PlayLayer, activateEndTrigger, int, bool, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x7a2ec, Default, PlayLayer, activatePlatformerEndTrigger, EndTriggerGameObject*, std::vector<int> const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x7d860, Default, PlayLayer, toggleGlitter, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x7d960, Default, PlayLayer, destroyPlayer, PlayerObject*, GameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x772f8, Default, PlayLayer, shouldDrawDebugHitboxes, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x7733c, Default, PlayLayer, shouldDrawHitboxTrail, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x77380, Default, PlayLayer, shouldRecordHitboxTrail, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x773a4, Default, PlayLayer, getHitboxTrailMax, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x7d758, Default, PlayLayer, toggleGroundVisibility, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x7d788, Default, PlayLayer, toggleMGVisibility, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x7d798, Default, PlayLayer, toggleHideAttempts, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x7d688, Default, PlayLayer, timeForPos, cocos2d::CCPoint, int, int, bool, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x7d6fc, Default, PlayLayer, posForTime, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x7d71c, Default, PlayLayer, resetSPTriggered, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x79dcc, Default, PlayLayer, updateTimeWarp, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x7ce34, Default, PlayLayer, playGravityEffect, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x7cd14, Default, PlayLayer, manualUpdateObjectColors, GameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x7ee20, Default, PlayLayer, checkpointActivated, CheckpointGameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x7d624, Default, PlayLayer, flipArt, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x7d250, Default, PlayLayer, updateTimeLabel, int, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x81658, Default, PlayLayer, checkSnapshot, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x7d42c, Default, PlayLayer, toggleProgressbar, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x7d644, Default, PlayLayer, toggleInfoLabel, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x80ee8, Default, PlayLayer, removeAllCheckpoints, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x7d598, Default, PlayLayer, toggleMusicInPractice, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x7e75c, Default, PlayLayer, processCheckpoints, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x81d7c, Default, PlayLayer, resetLevel, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x7e600, Default, PlayLayer, currencyWillExit, CurrencyRewardLayer*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x7e690, Default, PlayLayer, circleWaveWillBeRemoved, CCCircleWave*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x7e644, Default, PlayLayer, dialogClosed, DialogLayer*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x7e688, Default, PlayLayer, addCircle, CCCircleWave*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x81794, Default, PlayLayer, addLiveStartPosObject, StartPosObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x76298, Default, PlayLayer, addObject, GameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x7ab6c, Default, PlayLayer, addToGroupOld, GameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x7bdd0, Default, PlayLayer, applyCustomEnterEffect, GameObject*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x7c570, Default, PlayLayer, applyEnterEffect, GameObject*, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x77380, Default, PlayLayer, canPauseGame, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x80b48, Default, PlayLayer, checkpointWithID, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x7acb4, Default, PlayLayer, colorObject, int, cocos2d::ccColor3B)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x782cc, Default, PlayLayer, commitJumps, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, compareStateSnapshot, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x7ee38, Default, PlayLayer, createCheckpoint, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x7a860, Default, PlayLayer, createObjectsFromSetupFinished, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, delayedFullReset, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x7e5e0, Default, PlayLayer, delayedResetLevel, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, dtBumpCell, int, int, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, dtCellKnown, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x83e0c0, Default, PlayLayer, dtCommitPlaytime, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, dtDeathIsBarren, int, int, bool, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x83e178, Default, PlayLayer, dtFlushCells, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, dtLiveMarkersChanged, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, dtLoadCells, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, dtLocalCellTriples, std::vector<int>&)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, dtMarkerVisibleRect, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, dtRebuildLiveMarkers, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, dtUpdateLiveMarkers, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x81a80, Default, PlayLayer, fullReset, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x7d1b4, Default, PlayLayer, getCurrentPercent, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x7d8bc, Default, PlayLayer, getCurrentPercentInt, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x775c0, Default, PlayLayer, getEndPosition, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x7fd9c, Default, PlayLayer, getLastCheckpoint, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x7cd7c, Default, PlayLayer, getRelativeMod, cocos2d::CCPoint, float, float, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x7bb04, Default, PlayLayer, getRelativeModNew, cocos2d::CCPoint, float, float, bool, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(PlayLayer, getTempMilliTime, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x7d19c, Default, PlayLayer, gravityEffectFinished, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x82d58, Default, PlayLayer, incrementJumps, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x70fd8, Default, PlayLayer, init, GJGameLevel*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x832b4, Default, PlayLayer, isGameplayActive, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, isJumpHeldForPlayer, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x77624, Default, PlayLayer, levelComplete, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x80e00, Default, PlayLayer, loadActiveSaveObjects, std::vector<SavedActiveObjectState>&, std::vector<SavedSpecialObjectState>&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x75f30, Default, PlayLayer, loadDefaultColors, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x80cc0, Default, PlayLayer, loadDynamicSaveObjects, std::vector<SavedObjectStateRef>&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x80570, Default, PlayLayer, loadFromCheckpoint, CheckpointObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x80518, Default, PlayLayer, loadLastCheckpoint, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x81400, Default, PlayLayer, loadPersistentCheckpoint, std::string&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x7e9e0, Default, PlayLayer, markCheckpoint, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x76f2c, Default, PlayLayer, onQuit, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, optimizeColorGroups, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, optimizeOpacityGroups, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x82e88, Default, PlayLayer, pauseGame, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x79eb8, Default, PlayLayer, playEndAnimationToPos, cocos2d::CCPoint)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x7a3dc, Default, PlayLayer, playPlatformerEndAnimationToPos, cocos2d::CCPoint, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, playPracticeMusic, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x71ba0, Default, PlayLayer, prepareCreateObjectsFromSetup, std::string&)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, prepareMusic, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x72024, Default, PlayLayer, processCreateObjectsFromSetup, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x7ace0, Default, PlayLayer, processLoadedMoveActions, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, queueCheckpoint, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, releaseAllPlayerButtons, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, removeAllObjects, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x80420, Default, PlayLayer, removeCheckpoint, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x7ac48, Default, PlayLayer, removeFromGroupOld, GameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x816e8, Default, PlayLayer, resetLevelFromStart, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x8313c, Default, PlayLayer, resume, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x82fec, Default, PlayLayer, resumeAndRestart, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x7ffb0, Default, PlayLayer, saveActiveSaveObjects, std::vector<SavedActiveObjectState>&, std::vector<SavedSpecialObjectState>&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x7fdd8, Default, PlayLayer, saveDynamicSaveObjects, std::vector<SavedObjectStateRef>&)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, savePersistentCheckpoint, CheckpointObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x74244, Default, PlayLayer, scanActiveSaveObjects, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x73980, Default, PlayLayer, scanDynamicSaveObjects, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x7caec, Default, PlayLayer, screenFlipObject, GameObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, setLastSavedCheckpoint, CheckpointObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x72824, Default, PlayLayer, setupHasCompleted, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x7a858, Default, PlayLayer, shouldBlend, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x772f8, Default, PlayLayer, shouldDebugDraw, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x783d4, Default, PlayLayer, showCompleteEffect, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x78784, Default, PlayLayer, showCompleteText, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x7928c, Default, PlayLayer, showEndLayer, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x7e470, Default, PlayLayer, showHint, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x79314, Default, PlayLayer, showNewBest, bool, int, int, bool, bool, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, showRetryLayer, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x759c4, Default, PlayLayer, showTwoPlayerGuide, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x78300, Default, PlayLayer, spawnCircle, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x79084, Default, PlayLayer, spawnFirework, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x76ec0, Default, PlayLayer, startGame, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x775b0, Default, PlayLayer, startGameDelayed, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x7745c, Default, PlayLayer, startMusic, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, startRecording, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x82ce4, Default, PlayLayer, startRecordingDelayed, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x719a4, Default, PlayLayer, stopRecording, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x80348, Default, PlayLayer, storeCheckpoint, CheckpointObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x81664, Default, PlayLayer, switchToStartPosObject, StartPosObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, takeStateSnapshot, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x82ca8, Default, PlayLayer, toggleBGEffectVisibility, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, toggleDebugDraw, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x82c60, Default, PlayLayer, toggleGhostEffect, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, toggleIgnoreDamage, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x81b64, Default, PlayLayer, togglePracticeMode, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x782a0, Default, PlayLayer, tracksPercent, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x83ec4c, Default, PlayLayer, tryShowDeathMarkers, cocos2d::CCPoint const&, int, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, tryStartRecord, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x82a98, Default, PlayLayer, updateAttempts, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, updateDebugDrawSettings, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x7e6a8, Default, PlayLayer, updateEffectPositions, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayLayer, updateGameSettings, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x74460, Default, PlayLayer, updateInfoLabel, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x7bb50, Default, PlayLayer, updateInvisibleBlock, GameObject*, float, float, float, float, cocos2d::ccColor3B const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x75d74, Default, PlayLayer, updateProgressbar, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x79de4, Default, PlayLayer, updateScreenRotation, int, bool, bool, float, int, float, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x76ffc, Default, PlayLayer, updateTestModeLabel, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x80f3c, Default, PlayLayer, writePersistentSave, )
		}
	};
}
