#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJBaseGameLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_convertToClosestDirection
		#define GEODE_STATICS_convertToClosestDirection
		GEODE_AS_STATIC_FUNCTION(convertToClosestDirection) 
	#endif

	#ifndef GEODE_STATICS_gameEventToString
		#define GEODE_STATICS_gameEventToString
		GEODE_AS_STATIC_FUNCTION(gameEventToString) 
	#endif

	#ifndef GEODE_STATICS_update
		#define GEODE_STATICS_update
		GEODE_AS_STATIC_FUNCTION(update) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_visit
		#define GEODE_STATICS_visit
		GEODE_AS_STATIC_FUNCTION(visit) 
	#endif

	#ifndef GEODE_STATICS_opacityForObject
		#define GEODE_STATICS_opacityForObject
		GEODE_AS_STATIC_FUNCTION(opacityForObject) 
	#endif

	#ifndef GEODE_STATICS_objectsCollided
		#define GEODE_STATICS_objectsCollided
		GEODE_AS_STATIC_FUNCTION(objectsCollided) 
	#endif

	#ifndef GEODE_STATICS_updateColor
		#define GEODE_STATICS_updateColor
		GEODE_AS_STATIC_FUNCTION(updateColor) 
	#endif

	#ifndef GEODE_STATICS_toggleGroupTriggered
		#define GEODE_STATICS_toggleGroupTriggered
		GEODE_AS_STATIC_FUNCTION(toggleGroupTriggered) 
	#endif

	#ifndef GEODE_STATICS_checkSpawnAbuse
		#define GEODE_STATICS_checkSpawnAbuse
		GEODE_AS_STATIC_FUNCTION(checkSpawnAbuse) 
	#endif

	#ifndef GEODE_STATICS_spawnGroup
		#define GEODE_STATICS_spawnGroup
		GEODE_AS_STATIC_FUNCTION(spawnGroup) 
	#endif

	#ifndef GEODE_STATICS_spawnObject
		#define GEODE_STATICS_spawnObject
		GEODE_AS_STATIC_FUNCTION(spawnObject) 
	#endif

	#ifndef GEODE_STATICS_updateDebugDraw
		#define GEODE_STATICS_updateDebugDraw
		GEODE_AS_STATIC_FUNCTION(updateDebugDraw) 
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

	#ifndef GEODE_STATICS_addToSection
		#define GEODE_STATICS_addToSection
		GEODE_AS_STATIC_FUNCTION(addToSection) 
	#endif

	#ifndef GEODE_STATICS_addToGroup
		#define GEODE_STATICS_addToGroup
		GEODE_AS_STATIC_FUNCTION(addToGroup) 
	#endif

	#ifndef GEODE_STATICS_removeFromGroup
		#define GEODE_STATICS_removeFromGroup
		GEODE_AS_STATIC_FUNCTION(removeFromGroup) 
	#endif

	#ifndef GEODE_STATICS_updateObjectSection
		#define GEODE_STATICS_updateObjectSection
		GEODE_AS_STATIC_FUNCTION(updateObjectSection) 
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

	#ifndef GEODE_STATICS_updateScreenRotation
		#define GEODE_STATICS_updateScreenRotation
		GEODE_AS_STATIC_FUNCTION(updateScreenRotation) 
	#endif

	#ifndef GEODE_STATICS_reverseDirection
		#define GEODE_STATICS_reverseDirection
		GEODE_AS_STATIC_FUNCTION(reverseDirection) 
	#endif

	#ifndef GEODE_STATICS_rotateGameplay
		#define GEODE_STATICS_rotateGameplay
		GEODE_AS_STATIC_FUNCTION(rotateGameplay) 
	#endif

	#ifndef GEODE_STATICS_updateTimeWarp
		#define GEODE_STATICS_updateTimeWarp
		GEODE_AS_STATIC_FUNCTION(updateTimeWarp) 
	#endif

	#ifndef GEODE_STATICS_applyTimeWarp
		#define GEODE_STATICS_applyTimeWarp
		GEODE_AS_STATIC_FUNCTION(applyTimeWarp) 
	#endif

	#ifndef GEODE_STATICS_createCustomParticle
		#define GEODE_STATICS_createCustomParticle
		GEODE_AS_STATIC_FUNCTION(createCustomParticle) 
	#endif

	#ifndef GEODE_STATICS_claimCustomParticle
		#define GEODE_STATICS_claimCustomParticle
		GEODE_AS_STATIC_FUNCTION(claimCustomParticle) 
	#endif

	#ifndef GEODE_STATICS_unclaimCustomParticle
		#define GEODE_STATICS_unclaimCustomParticle
		GEODE_AS_STATIC_FUNCTION(unclaimCustomParticle) 
	#endif

	#ifndef GEODE_STATICS_activatedAudioTrigger
		#define GEODE_STATICS_activatedAudioTrigger
		GEODE_AS_STATIC_FUNCTION(activatedAudioTrigger) 
	#endif

	#ifndef GEODE_STATICS_checkpointActivated
		#define GEODE_STATICS_checkpointActivated
		GEODE_AS_STATIC_FUNCTION(checkpointActivated) 
	#endif

	#ifndef GEODE_STATICS_flipArt
		#define GEODE_STATICS_flipArt
		GEODE_AS_STATIC_FUNCTION(flipArt) 
	#endif

	#ifndef GEODE_STATICS_addKeyframe
		#define GEODE_STATICS_addKeyframe
		GEODE_AS_STATIC_FUNCTION(addKeyframe) 
	#endif

	#ifndef GEODE_STATICS_activateCustomRing
		#define GEODE_STATICS_activateCustomRing
		GEODE_AS_STATIC_FUNCTION(activateCustomRing) 
	#endif

	#ifndef GEODE_STATICS_activateEventTrigger
		#define GEODE_STATICS_activateEventTrigger
		GEODE_AS_STATIC_FUNCTION(activateEventTrigger) 
	#endif

	#ifndef GEODE_STATICS_activateItemCompareTrigger
		#define GEODE_STATICS_activateItemCompareTrigger
		GEODE_AS_STATIC_FUNCTION(activateItemCompareTrigger) 
	#endif

	#ifndef GEODE_STATICS_activateItemEditTrigger
		#define GEODE_STATICS_activateItemEditTrigger
		GEODE_AS_STATIC_FUNCTION(activateItemEditTrigger) 
	#endif

	#ifndef GEODE_STATICS_activateObjectControlTrigger
		#define GEODE_STATICS_activateObjectControlTrigger
		GEODE_AS_STATIC_FUNCTION(activateObjectControlTrigger) 
	#endif

	#ifndef GEODE_STATICS_activatePersistentItemTrigger
		#define GEODE_STATICS_activatePersistentItemTrigger
		GEODE_AS_STATIC_FUNCTION(activatePersistentItemTrigger) 
	#endif

	#ifndef GEODE_STATICS_activatePlayerControlTrigger
		#define GEODE_STATICS_activatePlayerControlTrigger
		GEODE_AS_STATIC_FUNCTION(activatePlayerControlTrigger) 
	#endif

	#ifndef GEODE_STATICS_activateProgressTrigger
		#define GEODE_STATICS_activateProgressTrigger
		GEODE_AS_STATIC_FUNCTION(activateProgressTrigger) 
	#endif

	#ifndef GEODE_STATICS_activateResetTrigger
		#define GEODE_STATICS_activateResetTrigger
		GEODE_AS_STATIC_FUNCTION(activateResetTrigger) 
	#endif

	#ifndef GEODE_STATICS_activateSFXEditTrigger
		#define GEODE_STATICS_activateSFXEditTrigger
		GEODE_AS_STATIC_FUNCTION(activateSFXEditTrigger) 
	#endif

	#ifndef GEODE_STATICS_activateSFXTrigger
		#define GEODE_STATICS_activateSFXTrigger
		GEODE_AS_STATIC_FUNCTION(activateSFXTrigger) 
	#endif

	#ifndef GEODE_STATICS_activateSongEditTrigger
		#define GEODE_STATICS_activateSongEditTrigger
		GEODE_AS_STATIC_FUNCTION(activateSongEditTrigger) 
	#endif

	#ifndef GEODE_STATICS_activateSongTrigger
		#define GEODE_STATICS_activateSongTrigger
		GEODE_AS_STATIC_FUNCTION(activateSongTrigger) 
	#endif

	#ifndef GEODE_STATICS_activateTimerTrigger
		#define GEODE_STATICS_activateTimerTrigger
		GEODE_AS_STATIC_FUNCTION(activateTimerTrigger) 
	#endif

	#ifndef GEODE_STATICS_addAreaEffect
		#define GEODE_STATICS_addAreaEffect
		GEODE_AS_STATIC_FUNCTION(addAreaEffect) 
	#endif

	#ifndef GEODE_STATICS_addCustomEnterEffect
		#define GEODE_STATICS_addCustomEnterEffect
		GEODE_AS_STATIC_FUNCTION(addCustomEnterEffect) 
	#endif

	#ifndef GEODE_STATICS_addDeathMarkerLayer
		#define GEODE_STATICS_addDeathMarkerLayer
		GEODE_AS_STATIC_FUNCTION(addDeathMarkerLayer) 
	#endif

	#ifndef GEODE_STATICS_addGuideArt
		#define GEODE_STATICS_addGuideArt
		GEODE_AS_STATIC_FUNCTION(addGuideArt) 
	#endif

	#ifndef GEODE_STATICS_addObjectCounter
		#define GEODE_STATICS_addObjectCounter
		GEODE_AS_STATIC_FUNCTION(addObjectCounter) 
	#endif

	#ifndef GEODE_STATICS_addPickupTrigger
		#define GEODE_STATICS_addPickupTrigger
		GEODE_AS_STATIC_FUNCTION(addPickupTrigger) 
	#endif

	#ifndef GEODE_STATICS_addPoints
		#define GEODE_STATICS_addPoints
		GEODE_AS_STATIC_FUNCTION(addPoints) 
	#endif

	#ifndef GEODE_STATICS_addProximityVolumeEffect
		#define GEODE_STATICS_addProximityVolumeEffect
		GEODE_AS_STATIC_FUNCTION(addProximityVolumeEffect) 
	#endif

	#ifndef GEODE_STATICS_addRemapTargets
		#define GEODE_STATICS_addRemapTargets
		GEODE_AS_STATIC_FUNCTION(addRemapTargets) 
	#endif

	#ifndef GEODE_STATICS_addToGroupParents
		#define GEODE_STATICS_addToGroupParents
		GEODE_AS_STATIC_FUNCTION(addToGroupParents) 
	#endif

	#ifndef GEODE_STATICS_addToGroups
		#define GEODE_STATICS_addToGroups
		GEODE_AS_STATIC_FUNCTION(addToGroups) 
	#endif

	#ifndef GEODE_STATICS_addUIObject
		#define GEODE_STATICS_addUIObject
		GEODE_AS_STATIC_FUNCTION(addUIObject) 
	#endif

	#ifndef GEODE_STATICS_animateInDualGroundNew
		#define GEODE_STATICS_animateInDualGroundNew
		GEODE_AS_STATIC_FUNCTION(animateInDualGroundNew) 
	#endif

	#ifndef GEODE_STATICS_animateInGroundNew
		#define GEODE_STATICS_animateInGroundNew
		GEODE_AS_STATIC_FUNCTION(animateInGroundNew) 
	#endif

	#ifndef GEODE_STATICS_animateOutGroundNew
		#define GEODE_STATICS_animateOutGroundNew
		GEODE_AS_STATIC_FUNCTION(animateOutGroundNew) 
	#endif

	#ifndef GEODE_STATICS_animatePortalY
		#define GEODE_STATICS_animatePortalY
		GEODE_AS_STATIC_FUNCTION(animatePortalY) 
	#endif

	#ifndef GEODE_STATICS_applyLevelSettings
		#define GEODE_STATICS_applyLevelSettings
		GEODE_AS_STATIC_FUNCTION(applyLevelSettings) 
	#endif

	#ifndef GEODE_STATICS_applyRemap
		#define GEODE_STATICS_applyRemap
		GEODE_AS_STATIC_FUNCTION(applyRemap) 
	#endif

	#ifndef GEODE_STATICS_applySFXEditTrigger
		#define GEODE_STATICS_applySFXEditTrigger
		GEODE_AS_STATIC_FUNCTION(applySFXEditTrigger) 
	#endif

	#ifndef GEODE_STATICS_applyShake
		#define GEODE_STATICS_applyShake
		GEODE_AS_STATIC_FUNCTION(applyShake) 
	#endif

	#ifndef GEODE_STATICS_assignNewStickyGroups
		#define GEODE_STATICS_assignNewStickyGroups
		GEODE_AS_STATIC_FUNCTION(assignNewStickyGroups) 
	#endif

	#ifndef GEODE_STATICS_asyncBGLoaded
		#define GEODE_STATICS_asyncBGLoaded
		GEODE_AS_STATIC_FUNCTION(asyncBGLoaded) 
	#endif

	#ifndef GEODE_STATICS_asyncGLoaded
		#define GEODE_STATICS_asyncGLoaded
		GEODE_AS_STATIC_FUNCTION(asyncGLoaded) 
	#endif

	#ifndef GEODE_STATICS_asyncMGLoaded
		#define GEODE_STATICS_asyncMGLoaded
		GEODE_AS_STATIC_FUNCTION(asyncMGLoaded) 
	#endif

	#ifndef GEODE_STATICS_atlasValue
		#define GEODE_STATICS_atlasValue
		GEODE_AS_STATIC_FUNCTION(atlasValue) 
	#endif

	#ifndef GEODE_STATICS_bumpPlayer
		#define GEODE_STATICS_bumpPlayer
		GEODE_AS_STATIC_FUNCTION(bumpPlayer) 
	#endif

	#ifndef GEODE_STATICS_buttonIDToButton
		#define GEODE_STATICS_buttonIDToButton
		GEODE_AS_STATIC_FUNCTION(buttonIDToButton) 
	#endif

	#ifndef GEODE_STATICS_buttonIsRelevant
		#define GEODE_STATICS_buttonIsRelevant
		GEODE_AS_STATIC_FUNCTION(buttonIsRelevant) 
	#endif

	#ifndef GEODE_STATICS_calculateColorGroups
		#define GEODE_STATICS_calculateColorGroups
		GEODE_AS_STATIC_FUNCTION(calculateColorGroups) 
	#endif

	#ifndef GEODE_STATICS_cameraMoveX
		#define GEODE_STATICS_cameraMoveX
		GEODE_AS_STATIC_FUNCTION(cameraMoveX) 
	#endif

	#ifndef GEODE_STATICS_cameraMoveY
		#define GEODE_STATICS_cameraMoveY
		GEODE_AS_STATIC_FUNCTION(cameraMoveY) 
	#endif

	#ifndef GEODE_STATICS_canBeActivatedByPlayer
		#define GEODE_STATICS_canBeActivatedByPlayer
		GEODE_AS_STATIC_FUNCTION(canBeActivatedByPlayer) 
	#endif

	#ifndef GEODE_STATICS_canProcessSFX
		#define GEODE_STATICS_canProcessSFX
		GEODE_AS_STATIC_FUNCTION(canProcessSFX) 
	#endif

	#ifndef GEODE_STATICS_canTouchObject
		#define GEODE_STATICS_canTouchObject
		GEODE_AS_STATIC_FUNCTION(canTouchObject) 
	#endif

	#ifndef GEODE_STATICS_checkCameraLimitAfterTeleport
		#define GEODE_STATICS_checkCameraLimitAfterTeleport
		GEODE_AS_STATIC_FUNCTION(checkCameraLimitAfterTeleport) 
	#endif

	#ifndef GEODE_STATICS_checkCollision
		#define GEODE_STATICS_checkCollision
		GEODE_AS_STATIC_FUNCTION(checkCollision) 
	#endif

	#ifndef GEODE_STATICS_checkCollisionBlocks
		#define GEODE_STATICS_checkCollisionBlocks
		GEODE_AS_STATIC_FUNCTION(checkCollisionBlocks) 
	#endif

	#ifndef GEODE_STATICS_checkCollisions
		#define GEODE_STATICS_checkCollisions
		GEODE_AS_STATIC_FUNCTION(checkCollisions) 
	#endif

	#ifndef GEODE_STATICS_checkRepellPlayer
		#define GEODE_STATICS_checkRepellPlayer
		GEODE_AS_STATIC_FUNCTION(checkRepellPlayer) 
	#endif

	#ifndef GEODE_STATICS_checkSpawnObjects
		#define GEODE_STATICS_checkSpawnObjects
		GEODE_AS_STATIC_FUNCTION(checkSpawnObjects) 
	#endif

	#ifndef GEODE_STATICS_claimMoveAction
		#define GEODE_STATICS_claimMoveAction
		GEODE_AS_STATIC_FUNCTION(claimMoveAction) 
	#endif

	#ifndef GEODE_STATICS_claimParticle
		#define GEODE_STATICS_claimParticle
		GEODE_AS_STATIC_FUNCTION(claimParticle) 
	#endif

	#ifndef GEODE_STATICS_claimRotationAction
		#define GEODE_STATICS_claimRotationAction
		GEODE_AS_STATIC_FUNCTION(claimRotationAction) 
	#endif

	#ifndef GEODE_STATICS_clearActivatedAudioTriggers
		#define GEODE_STATICS_clearActivatedAudioTriggers
		GEODE_AS_STATIC_FUNCTION(clearActivatedAudioTriggers) 
	#endif

	#ifndef GEODE_STATICS_clearHitboxTrail
		#define GEODE_STATICS_clearHitboxTrail
		GEODE_AS_STATIC_FUNCTION(clearHitboxTrail) 
	#endif

	#ifndef GEODE_STATICS_clearPickedUpItems
		#define GEODE_STATICS_clearPickedUpItems
		GEODE_AS_STATIC_FUNCTION(clearPickedUpItems) 
	#endif

	#ifndef GEODE_STATICS_collectedObject
		#define GEODE_STATICS_collectedObject
		GEODE_AS_STATIC_FUNCTION(collectedObject) 
	#endif

	#ifndef GEODE_STATICS_collisionCheckObjects
		#define GEODE_STATICS_collisionCheckObjects
		GEODE_AS_STATIC_FUNCTION(collisionCheckObjects) 
	#endif

	#ifndef GEODE_STATICS_controlAdvancedFollowCommand
		#define GEODE_STATICS_controlAdvancedFollowCommand
		GEODE_AS_STATIC_FUNCTION(controlAdvancedFollowCommand) 
	#endif

	#ifndef GEODE_STATICS_controlAreaEffect
		#define GEODE_STATICS_controlAreaEffect
		GEODE_AS_STATIC_FUNCTION(controlAreaEffect) 
	#endif

	#ifndef GEODE_STATICS_controlAreaEffectWithID
		#define GEODE_STATICS_controlAreaEffectWithID
		GEODE_AS_STATIC_FUNCTION(controlAreaEffectWithID) 
	#endif

	#ifndef GEODE_STATICS_controlDynamicCommand
		#define GEODE_STATICS_controlDynamicCommand
		GEODE_AS_STATIC_FUNCTION(controlDynamicCommand) 
	#endif

	#ifndef GEODE_STATICS_controlDynamicMoveCommand
		#define GEODE_STATICS_controlDynamicMoveCommand
		GEODE_AS_STATIC_FUNCTION(controlDynamicMoveCommand) 
	#endif

	#ifndef GEODE_STATICS_controlDynamicRotateCommand
		#define GEODE_STATICS_controlDynamicRotateCommand
		GEODE_AS_STATIC_FUNCTION(controlDynamicRotateCommand) 
	#endif

	#ifndef GEODE_STATICS_controlEventLink
		#define GEODE_STATICS_controlEventLink
		GEODE_AS_STATIC_FUNCTION(controlEventLink) 
	#endif

	#ifndef GEODE_STATICS_controlGradientTrigger
		#define GEODE_STATICS_controlGradientTrigger
		GEODE_AS_STATIC_FUNCTION(controlGradientTrigger) 
	#endif

	#ifndef GEODE_STATICS_controlTriggersInGroup
		#define GEODE_STATICS_controlTriggersInGroup
		GEODE_AS_STATIC_FUNCTION(controlTriggersInGroup) 
	#endif

	#ifndef GEODE_STATICS_controlTriggersWithControlID
		#define GEODE_STATICS_controlTriggersWithControlID
		GEODE_AS_STATIC_FUNCTION(controlTriggersWithControlID) 
	#endif

	#ifndef GEODE_STATICS_countCollectedUserCoins
		#define GEODE_STATICS_countCollectedUserCoins
		GEODE_AS_STATIC_FUNCTION(countCollectedUserCoins) 
	#endif

	#ifndef GEODE_STATICS_createBackground
		#define GEODE_STATICS_createBackground
		GEODE_AS_STATIC_FUNCTION(createBackground) 
	#endif

	#ifndef GEODE_STATICS_createGroundLayer
		#define GEODE_STATICS_createGroundLayer
		GEODE_AS_STATIC_FUNCTION(createGroundLayer) 
	#endif

	#ifndef GEODE_STATICS_createLiveStartPosObject
		#define GEODE_STATICS_createLiveStartPosObject
		GEODE_AS_STATIC_FUNCTION(createLiveStartPosObject) 
	#endif

	#ifndef GEODE_STATICS_createMiddleground
		#define GEODE_STATICS_createMiddleground
		GEODE_AS_STATIC_FUNCTION(createMiddleground) 
	#endif

	#ifndef GEODE_STATICS_createNewKeyframeAnim
		#define GEODE_STATICS_createNewKeyframeAnim
		GEODE_AS_STATIC_FUNCTION(createNewKeyframeAnim) 
	#endif

	#ifndef GEODE_STATICS_createParticle
		#define GEODE_STATICS_createParticle
		GEODE_AS_STATIC_FUNCTION(createParticle) 
	#endif

	#ifndef GEODE_STATICS_createPlayer
		#define GEODE_STATICS_createPlayer
		GEODE_AS_STATIC_FUNCTION(createPlayer) 
	#endif

	#ifndef GEODE_STATICS_createPlayerCollisionBlock
		#define GEODE_STATICS_createPlayerCollisionBlock
		GEODE_AS_STATIC_FUNCTION(createPlayerCollisionBlock) 
	#endif

	#ifndef GEODE_STATICS_createTextLayers
		#define GEODE_STATICS_createTextLayers
		GEODE_AS_STATIC_FUNCTION(createTextLayers) 
	#endif

	#ifndef GEODE_STATICS_damagingObjectsInRect
		#define GEODE_STATICS_damagingObjectsInRect
		GEODE_AS_STATIC_FUNCTION(damagingObjectsInRect) 
	#endif

	#ifndef GEODE_STATICS_destroyObject
		#define GEODE_STATICS_destroyObject
		GEODE_AS_STATIC_FUNCTION(destroyObject) 
	#endif

	#ifndef GEODE_STATICS_didPickupItem
		#define GEODE_STATICS_didPickupItem
		GEODE_AS_STATIC_FUNCTION(didPickupItem) 
	#endif

	#ifndef GEODE_STATICS_drawHitboxTrail
		#define GEODE_STATICS_drawHitboxTrail
		GEODE_AS_STATIC_FUNCTION(drawHitboxTrail) 
	#endif

	#ifndef GEODE_STATICS_enterDualMode
		#define GEODE_STATICS_enterDualMode
		GEODE_AS_STATIC_FUNCTION(enterDualMode) 
	#endif

	#ifndef GEODE_STATICS_exitStaticCamera
		#define GEODE_STATICS_exitStaticCamera
		GEODE_AS_STATIC_FUNCTION(exitStaticCamera) 
	#endif

	#ifndef GEODE_STATICS_findStartPosWinnerInArray
		#define GEODE_STATICS_findStartPosWinnerInArray
		GEODE_AS_STATIC_FUNCTION(findStartPosWinnerInArray) 
	#endif

	#ifndef GEODE_STATICS_flipFinished
		#define GEODE_STATICS_flipFinished
		GEODE_AS_STATIC_FUNCTION(flipFinished) 
	#endif

	#ifndef GEODE_STATICS_flipGravity
		#define GEODE_STATICS_flipGravity
		GEODE_AS_STATIC_FUNCTION(flipGravity) 
	#endif

	#ifndef GEODE_STATICS_flipObjects
		#define GEODE_STATICS_flipObjects
		GEODE_AS_STATIC_FUNCTION(flipObjects) 
	#endif

	#ifndef GEODE_STATICS_gameEventTriggered
		#define GEODE_STATICS_gameEventTriggered
		GEODE_AS_STATIC_FUNCTION(gameEventTriggered) 
	#endif

	#ifndef GEODE_STATICS_generateEnterEasingBuffer
		#define GEODE_STATICS_generateEnterEasingBuffer
		GEODE_AS_STATIC_FUNCTION(generateEnterEasingBuffer) 
	#endif

	#ifndef GEODE_STATICS_generateEnterEasingBuffers
		#define GEODE_STATICS_generateEnterEasingBuffers
		GEODE_AS_STATIC_FUNCTION(generateEnterEasingBuffers) 
	#endif

	#ifndef GEODE_STATICS_generatePickupAnimRandVal
		#define GEODE_STATICS_generatePickupAnimRandVal
		GEODE_AS_STATIC_FUNCTION(generatePickupAnimRandVal) 
	#endif

	#ifndef GEODE_STATICS_generateSpawnRemap
		#define GEODE_STATICS_generateSpawnRemap
		GEODE_AS_STATIC_FUNCTION(generateSpawnRemap) 
	#endif

	#ifndef GEODE_STATICS_generateTargetGroups
		#define GEODE_STATICS_generateTargetGroups
		GEODE_AS_STATIC_FUNCTION(generateTargetGroups) 
	#endif

	#ifndef GEODE_STATICS_generateVisibilityGroups
		#define GEODE_STATICS_generateVisibilityGroups
		GEODE_AS_STATIC_FUNCTION(generateVisibilityGroups) 
	#endif

	#ifndef GEODE_STATICS_getActiveOrderSpawnObjects
		#define GEODE_STATICS_getActiveOrderSpawnObjects
		GEODE_AS_STATIC_FUNCTION(getActiveOrderSpawnObjects) 
	#endif

	#ifndef GEODE_STATICS_getAreaObjectValue
		#define GEODE_STATICS_getAreaObjectValue
		GEODE_AS_STATIC_FUNCTION(getAreaObjectValue) 
	#endif

	#ifndef GEODE_STATICS_getBumpMod
		#define GEODE_STATICS_getBumpMod
		GEODE_AS_STATIC_FUNCTION(getBumpMod) 
	#endif

	#ifndef GEODE_STATICS_getCameraEdgeValue
		#define GEODE_STATICS_getCameraEdgeValue
		GEODE_AS_STATIC_FUNCTION(getCameraEdgeValue) 
	#endif

	#ifndef GEODE_STATICS_getCapacityString
		#define GEODE_STATICS_getCapacityString
		GEODE_AS_STATIC_FUNCTION(getCapacityString) 
	#endif

	#ifndef GEODE_STATICS_getCenterGroupObject
		#define GEODE_STATICS_getCenterGroupObject
		GEODE_AS_STATIC_FUNCTION(getCenterGroupObject) 
	#endif

	#ifndef GEODE_STATICS_getCustomEnterEffects
		#define GEODE_STATICS_getCustomEnterEffects
		GEODE_AS_STATIC_FUNCTION(getCustomEnterEffects) 
	#endif

	#ifndef GEODE_STATICS_getEasedAreaValue
		#define GEODE_STATICS_getEasedAreaValue
		GEODE_AS_STATIC_FUNCTION(getEasedAreaValue) 
	#endif

	#ifndef GEODE_STATICS_getEnterEasingKey
		#define GEODE_STATICS_getEnterEasingKey
		GEODE_AS_STATIC_FUNCTION(getEnterEasingKey) 
	#endif

	#ifndef GEODE_STATICS_getEnterEasingValue
		#define GEODE_STATICS_getEnterEasingValue
		GEODE_AS_STATIC_FUNCTION(getEnterEasingValue) 
	#endif

	#ifndef GEODE_STATICS_getFollowSpeedVal
		#define GEODE_STATICS_getFollowSpeedVal
		GEODE_AS_STATIC_FUNCTION(getFollowSpeedVal) 
	#endif

	#ifndef GEODE_STATICS_getGroundHeight
		#define GEODE_STATICS_getGroundHeight
		GEODE_AS_STATIC_FUNCTION(getGroundHeight) 
	#endif

	#ifndef GEODE_STATICS_getGroundHeightForMode
		#define GEODE_STATICS_getGroundHeightForMode
		GEODE_AS_STATIC_FUNCTION(getGroundHeightForMode) 
	#endif

	#ifndef GEODE_STATICS_getGroup
		#define GEODE_STATICS_getGroup
		GEODE_AS_STATIC_FUNCTION(getGroup) 
	#endif

	#ifndef GEODE_STATICS_getGroupParentsString
		#define GEODE_STATICS_getGroupParentsString
		GEODE_AS_STATIC_FUNCTION(getGroupParentsString) 
	#endif

	#ifndef GEODE_STATICS_getItemValue
		#define GEODE_STATICS_getItemValue
		GEODE_AS_STATIC_FUNCTION(getItemValue) 
	#endif

	#ifndef GEODE_STATICS_getMaxPortalY
		#define GEODE_STATICS_getMaxPortalY
		GEODE_AS_STATIC_FUNCTION(getMaxPortalY) 
	#endif

	#ifndef GEODE_STATICS_getMinDistance
		#define GEODE_STATICS_getMinDistance
		GEODE_AS_STATIC_FUNCTION(getMinDistance) 
	#endif

	#ifndef GEODE_STATICS_getMinPortalY
		#define GEODE_STATICS_getMinPortalY
		GEODE_AS_STATIC_FUNCTION(getMinPortalY) 
	#endif

	#ifndef GEODE_STATICS_getModifiedDelta
		#define GEODE_STATICS_getModifiedDelta
		GEODE_AS_STATIC_FUNCTION(getModifiedDelta) 
	#endif

	#ifndef GEODE_STATICS_getMoveTargetDelta
		#define GEODE_STATICS_getMoveTargetDelta
		GEODE_AS_STATIC_FUNCTION(getMoveTargetDelta) 
	#endif

	#ifndef GEODE_STATICS_getOptimizedGroup
		#define GEODE_STATICS_getOptimizedGroup
		GEODE_AS_STATIC_FUNCTION(getOptimizedGroup) 
	#endif

	#ifndef GEODE_STATICS_getOtherPlayer
		#define GEODE_STATICS_getOtherPlayer
		GEODE_AS_STATIC_FUNCTION(getOtherPlayer) 
	#endif

	#ifndef GEODE_STATICS_getParticleKey
		#define GEODE_STATICS_getParticleKey
		GEODE_AS_STATIC_FUNCTION(getParticleKey) 
	#endif

	#ifndef GEODE_STATICS_getParticleKey2
		#define GEODE_STATICS_getParticleKey2
		GEODE_AS_STATIC_FUNCTION(getParticleKey2) 
	#endif

	#ifndef GEODE_STATICS_getPlayerButtonID
		#define GEODE_STATICS_getPlayerButtonID
		GEODE_AS_STATIC_FUNCTION(getPlayerButtonID) 
	#endif

	#ifndef GEODE_STATICS_getPlayTimerFullSeconds
		#define GEODE_STATICS_getPlayTimerFullSeconds
		GEODE_AS_STATIC_FUNCTION(getPlayTimerFullSeconds) 
	#endif

	#ifndef GEODE_STATICS_getPlayTimerMilli
		#define GEODE_STATICS_getPlayTimerMilli
		GEODE_AS_STATIC_FUNCTION(getPlayTimerMilli) 
	#endif

	#ifndef GEODE_STATICS_getPortalTarget
		#define GEODE_STATICS_getPortalTarget
		GEODE_AS_STATIC_FUNCTION(getPortalTarget) 
	#endif

	#ifndef GEODE_STATICS_getPortalTargetPos
		#define GEODE_STATICS_getPortalTargetPos
		GEODE_AS_STATIC_FUNCTION(getPortalTargetPos) 
	#endif

	#ifndef GEODE_STATICS_getRecordExtra
		#define GEODE_STATICS_getRecordExtra
		GEODE_AS_STATIC_FUNCTION(getRecordExtra) 
	#endif

	#ifndef GEODE_STATICS_getRecordString
		#define GEODE_STATICS_getRecordString
		GEODE_AS_STATIC_FUNCTION(getRecordString) 
	#endif

	#ifndef GEODE_STATICS_getRotateCommandTargets
		#define GEODE_STATICS_getRotateCommandTargets
		GEODE_AS_STATIC_FUNCTION(getRotateCommandTargets) 
	#endif

	#ifndef GEODE_STATICS_getSavedPosition
		#define GEODE_STATICS_getSavedPosition
		GEODE_AS_STATIC_FUNCTION(getSavedPosition) 
	#endif

	#ifndef GEODE_STATICS_getScaledGroundHeight
		#define GEODE_STATICS_getScaledGroundHeight
		GEODE_AS_STATIC_FUNCTION(getScaledGroundHeight) 
	#endif

	#ifndef GEODE_STATICS_getSingleGroupObject
		#define GEODE_STATICS_getSingleGroupObject
		GEODE_AS_STATIC_FUNCTION(getSingleGroupObject) 
	#endif

	#ifndef GEODE_STATICS_getSpecialKey
		#define GEODE_STATICS_getSpecialKey
		GEODE_AS_STATIC_FUNCTION(getSpecialKey) 
	#endif

	#ifndef GEODE_STATICS_getStartPosObjectsForCurrentMode
		#define GEODE_STATICS_getStartPosObjectsForCurrentMode
		GEODE_AS_STATIC_FUNCTION(getStartPosObjectsForCurrentMode) 
	#endif

	#ifndef GEODE_STATICS_getStaticGroup
		#define GEODE_STATICS_getStaticGroup
		GEODE_AS_STATIC_FUNCTION(getStaticGroup) 
	#endif

	#ifndef GEODE_STATICS_getStickyGroup
		#define GEODE_STATICS_getStickyGroup
		GEODE_AS_STATIC_FUNCTION(getStickyGroup) 
	#endif

	#ifndef GEODE_STATICS_getTargetFlyCameraY
		#define GEODE_STATICS_getTargetFlyCameraY
		GEODE_AS_STATIC_FUNCTION(getTargetFlyCameraY) 
	#endif

	#ifndef GEODE_STATICS_getTargetGroup
		#define GEODE_STATICS_getTargetGroup
		GEODE_AS_STATIC_FUNCTION(getTargetGroup) 
	#endif

	#ifndef GEODE_STATICS_getTargetGroupOrigin
		#define GEODE_STATICS_getTargetGroupOrigin
		GEODE_AS_STATIC_FUNCTION(getTargetGroupOrigin) 
	#endif

	#ifndef GEODE_STATICS_gravBumpPlayer
		#define GEODE_STATICS_gravBumpPlayer
		GEODE_AS_STATIC_FUNCTION(gravBumpPlayer) 
	#endif

	#ifndef GEODE_STATICS_groupStickyObjects
		#define GEODE_STATICS_groupStickyObjects
		GEODE_AS_STATIC_FUNCTION(groupStickyObjects) 
	#endif

	#ifndef GEODE_STATICS_handleButton
		#define GEODE_STATICS_handleButton
		GEODE_AS_STATIC_FUNCTION(handleButton) 
	#endif

	#ifndef GEODE_STATICS_hasItem
		#define GEODE_STATICS_hasItem
		GEODE_AS_STATIC_FUNCTION(hasItem) 
	#endif

	#ifndef GEODE_STATICS_hasUniqueCoin
		#define GEODE_STATICS_hasUniqueCoin
		GEODE_AS_STATIC_FUNCTION(hasUniqueCoin) 
	#endif

	#ifndef GEODE_STATICS_increaseBatchNodeCapacity
		#define GEODE_STATICS_increaseBatchNodeCapacity
		GEODE_AS_STATIC_FUNCTION(increaseBatchNodeCapacity) 
	#endif

	#ifndef GEODE_STATICS_isFlipping
		#define GEODE_STATICS_isFlipping
		GEODE_AS_STATIC_FUNCTION(isFlipping) 
	#endif

	#ifndef GEODE_STATICS_isGroupParentOf
		#define GEODE_STATICS_isGroupParentOf
		GEODE_AS_STATIC_FUNCTION(isGroupParentOf) 
	#endif

	#ifndef GEODE_STATICS_isPlayer2Button
		#define GEODE_STATICS_isPlayer2Button
		GEODE_AS_STATIC_FUNCTION(isPlayer2Button) 
	#endif

	#ifndef GEODE_STATICS_lightningFlash
		#define GEODE_STATICS_lightningFlash
		GEODE_AS_STATIC_FUNCTION(lightningFlash) 
	#endif

	#ifndef GEODE_STATICS_loadGroupParentsFromString
		#define GEODE_STATICS_loadGroupParentsFromString
		GEODE_AS_STATIC_FUNCTION(loadGroupParentsFromString) 
	#endif

	#ifndef GEODE_STATICS_loadLevelSettings
		#define GEODE_STATICS_loadLevelSettings
		GEODE_AS_STATIC_FUNCTION(loadLevelSettings) 
	#endif

	#ifndef GEODE_STATICS_loadStartPosObject
		#define GEODE_STATICS_loadStartPosObject
		GEODE_AS_STATIC_FUNCTION(loadStartPosObject) 
	#endif

	#ifndef GEODE_STATICS_loadUpToPosition
		#define GEODE_STATICS_loadUpToPosition
		GEODE_AS_STATIC_FUNCTION(loadUpToPosition) 
	#endif

	#ifndef GEODE_STATICS_lockExistingFirstParents
		#define GEODE_STATICS_lockExistingFirstParents
		GEODE_AS_STATIC_FUNCTION(lockExistingFirstParents) 
	#endif

	#ifndef GEODE_STATICS_logPickupItem
		#define GEODE_STATICS_logPickupItem
		GEODE_AS_STATIC_FUNCTION(logPickupItem) 
	#endif

	#ifndef GEODE_STATICS_maxZOrderForShaderZ
		#define GEODE_STATICS_maxZOrderForShaderZ
		GEODE_AS_STATIC_FUNCTION(maxZOrderForShaderZ) 
	#endif

	#ifndef GEODE_STATICS_minZOrderForShaderZ
		#define GEODE_STATICS_minZOrderForShaderZ
		GEODE_AS_STATIC_FUNCTION(minZOrderForShaderZ) 
	#endif

	#ifndef GEODE_STATICS_modifyGroupPhysics
		#define GEODE_STATICS_modifyGroupPhysics
		GEODE_AS_STATIC_FUNCTION(modifyGroupPhysics) 
	#endif

	#ifndef GEODE_STATICS_modifyObjectPhysics
		#define GEODE_STATICS_modifyObjectPhysics
		GEODE_AS_STATIC_FUNCTION(modifyObjectPhysics) 
	#endif

	#ifndef GEODE_STATICS_moveCameraToPos
		#define GEODE_STATICS_moveCameraToPos
		GEODE_AS_STATIC_FUNCTION(moveCameraToPos) 
	#endif

	#ifndef GEODE_STATICS_moveObject
		#define GEODE_STATICS_moveObject
		GEODE_AS_STATIC_FUNCTION(moveObject) 
	#endif

	#ifndef GEODE_STATICS_moveObjects
		#define GEODE_STATICS_moveObjects
		GEODE_AS_STATIC_FUNCTION(moveObjects) 
	#endif

	#ifndef GEODE_STATICS_moveObjectsSilent
		#define GEODE_STATICS_moveObjectsSilent
		GEODE_AS_STATIC_FUNCTION(moveObjectsSilent) 
	#endif

	#ifndef GEODE_STATICS_moveObjectToStaticGroup
		#define GEODE_STATICS_moveObjectToStaticGroup
		GEODE_AS_STATIC_FUNCTION(moveObjectToStaticGroup) 
	#endif

	#ifndef GEODE_STATICS_objectForUniqueID
		#define GEODE_STATICS_objectForUniqueID
		GEODE_AS_STATIC_FUNCTION(objectForUniqueID) 
	#endif

	#ifndef GEODE_STATICS_objectIntersectsCircle
		#define GEODE_STATICS_objectIntersectsCircle
		GEODE_AS_STATIC_FUNCTION(objectIntersectsCircle) 
	#endif

	#ifndef GEODE_STATICS_objectTypeToGameEvent
		#define GEODE_STATICS_objectTypeToGameEvent
		GEODE_AS_STATIC_FUNCTION(objectTypeToGameEvent) 
	#endif

	#ifndef GEODE_STATICS_optimizeMoveGroups
		#define GEODE_STATICS_optimizeMoveGroups
		GEODE_AS_STATIC_FUNCTION(optimizeMoveGroups) 
	#endif

	#ifndef GEODE_STATICS_orderSpawnObjects
		#define GEODE_STATICS_orderSpawnObjects
		GEODE_AS_STATIC_FUNCTION(orderSpawnObjects) 
	#endif

	#ifndef GEODE_STATICS_parentForZLayer
		#define GEODE_STATICS_parentForZLayer
		GEODE_AS_STATIC_FUNCTION(parentForZLayer) 
	#endif

	#ifndef GEODE_STATICS_parseRecording
		#define GEODE_STATICS_parseRecording
		GEODE_AS_STATIC_FUNCTION(parseRecording) 
	#endif

	#ifndef GEODE_STATICS_pauseAudio
		#define GEODE_STATICS_pauseAudio
		GEODE_AS_STATIC_FUNCTION(pauseAudio) 
	#endif

	#ifndef GEODE_STATICS_performMathOperation
		#define GEODE_STATICS_performMathOperation
		GEODE_AS_STATIC_FUNCTION(performMathOperation) 
	#endif

	#ifndef GEODE_STATICS_performMathRounding
		#define GEODE_STATICS_performMathRounding
		GEODE_AS_STATIC_FUNCTION(performMathRounding) 
	#endif

	#ifndef GEODE_STATICS_pickupItem
		#define GEODE_STATICS_pickupItem
		GEODE_AS_STATIC_FUNCTION(pickupItem) 
	#endif

	#ifndef GEODE_STATICS_playAnimationCommand
		#define GEODE_STATICS_playAnimationCommand
		GEODE_AS_STATIC_FUNCTION(playAnimationCommand) 
	#endif

	#ifndef GEODE_STATICS_playerCircleCollision
		#define GEODE_STATICS_playerCircleCollision
		GEODE_AS_STATIC_FUNCTION(playerCircleCollision) 
	#endif

	#ifndef GEODE_STATICS_playerIntersectsCircle
		#define GEODE_STATICS_playerIntersectsCircle
		GEODE_AS_STATIC_FUNCTION(playerIntersectsCircle) 
	#endif

	#ifndef GEODE_STATICS_playerTouchedObject
		#define GEODE_STATICS_playerTouchedObject
		GEODE_AS_STATIC_FUNCTION(playerTouchedObject) 
	#endif

	#ifndef GEODE_STATICS_playerTouchedRing
		#define GEODE_STATICS_playerTouchedRing
		GEODE_AS_STATIC_FUNCTION(playerTouchedRing) 
	#endif

	#ifndef GEODE_STATICS_playerTouchedTrigger
		#define GEODE_STATICS_playerTouchedTrigger
		GEODE_AS_STATIC_FUNCTION(playerTouchedTrigger) 
	#endif

	#ifndef GEODE_STATICS_playerWasTouchingObject
		#define GEODE_STATICS_playerWasTouchingObject
		GEODE_AS_STATIC_FUNCTION(playerWasTouchingObject) 
	#endif

	#ifndef GEODE_STATICS_playerWillSwitchMode
		#define GEODE_STATICS_playerWillSwitchMode
		GEODE_AS_STATIC_FUNCTION(playerWillSwitchMode) 
	#endif

	#ifndef GEODE_STATICS_playExitDualEffect
		#define GEODE_STATICS_playExitDualEffect
		GEODE_AS_STATIC_FUNCTION(playExitDualEffect) 
	#endif

	#ifndef GEODE_STATICS_playFlashEffect
		#define GEODE_STATICS_playFlashEffect
		GEODE_AS_STATIC_FUNCTION(playFlashEffect) 
	#endif

	#ifndef GEODE_STATICS_playKeyframeAnimation
		#define GEODE_STATICS_playKeyframeAnimation
		GEODE_AS_STATIC_FUNCTION(playKeyframeAnimation) 
	#endif

	#ifndef GEODE_STATICS_playSpeedParticle
		#define GEODE_STATICS_playSpeedParticle
		GEODE_AS_STATIC_FUNCTION(playSpeedParticle) 
	#endif

	#ifndef GEODE_STATICS_positionForShaderTarget
		#define GEODE_STATICS_positionForShaderTarget
		GEODE_AS_STATIC_FUNCTION(positionForShaderTarget) 
	#endif

	#ifndef GEODE_STATICS_positionUIObjects
		#define GEODE_STATICS_positionUIObjects
		GEODE_AS_STATIC_FUNCTION(positionUIObjects) 
	#endif

	#ifndef GEODE_STATICS_prepareSavePositionObjects
		#define GEODE_STATICS_prepareSavePositionObjects
		GEODE_AS_STATIC_FUNCTION(prepareSavePositionObjects) 
	#endif

	#ifndef GEODE_STATICS_prepareTransformParent
		#define GEODE_STATICS_prepareTransformParent
		GEODE_AS_STATIC_FUNCTION(prepareTransformParent) 
	#endif

	#ifndef GEODE_STATICS_preResumeGame
		#define GEODE_STATICS_preResumeGame
		GEODE_AS_STATIC_FUNCTION(preResumeGame) 
	#endif

	#ifndef GEODE_STATICS_preUpdateVisibility
		#define GEODE_STATICS_preUpdateVisibility
		GEODE_AS_STATIC_FUNCTION(preUpdateVisibility) 
	#endif

	#ifndef GEODE_STATICS_processActivatedAudioTriggers
		#define GEODE_STATICS_processActivatedAudioTriggers
		GEODE_AS_STATIC_FUNCTION(processActivatedAudioTriggers) 
	#endif

	#ifndef GEODE_STATICS_processAdvancedFollowAction
		#define GEODE_STATICS_processAdvancedFollowAction
		GEODE_AS_STATIC_FUNCTION(processAdvancedFollowAction) 
	#endif

	#ifndef GEODE_STATICS_processAdvancedFollowActions
		#define GEODE_STATICS_processAdvancedFollowActions
		GEODE_AS_STATIC_FUNCTION(processAdvancedFollowActions) 
	#endif

	#ifndef GEODE_STATICS_processAreaActions
		#define GEODE_STATICS_processAreaActions
		GEODE_AS_STATIC_FUNCTION(processAreaActions) 
	#endif

	#ifndef GEODE_STATICS_processAreaEffects
		#define GEODE_STATICS_processAreaEffects
		GEODE_AS_STATIC_FUNCTION(processAreaEffects) 
	#endif

	#ifndef GEODE_STATICS_processAreaFadeGroupAction
		#define GEODE_STATICS_processAreaFadeGroupAction
		GEODE_AS_STATIC_FUNCTION(processAreaFadeGroupAction) 
	#endif

	#ifndef GEODE_STATICS_processAreaMoveGroupAction
		#define GEODE_STATICS_processAreaMoveGroupAction
		GEODE_AS_STATIC_FUNCTION(processAreaMoveGroupAction) 
	#endif

	#ifndef GEODE_STATICS_processAreaRotateGroupAction
		#define GEODE_STATICS_processAreaRotateGroupAction
		GEODE_AS_STATIC_FUNCTION(processAreaRotateGroupAction) 
	#endif

	#ifndef GEODE_STATICS_processAreaTintGroupAction
		#define GEODE_STATICS_processAreaTintGroupAction
		GEODE_AS_STATIC_FUNCTION(processAreaTintGroupAction) 
	#endif

	#ifndef GEODE_STATICS_processAreaTransformGroupAction
		#define GEODE_STATICS_processAreaTransformGroupAction
		GEODE_AS_STATIC_FUNCTION(processAreaTransformGroupAction) 
	#endif

	#ifndef GEODE_STATICS_processAreaVisualActions
		#define GEODE_STATICS_processAreaVisualActions
		GEODE_AS_STATIC_FUNCTION(processAreaVisualActions) 
	#endif

	#ifndef GEODE_STATICS_processCameraObject
		#define GEODE_STATICS_processCameraObject
		GEODE_AS_STATIC_FUNCTION(processCameraObject) 
	#endif

	#ifndef GEODE_STATICS_processCommands
		#define GEODE_STATICS_processCommands
		GEODE_AS_STATIC_FUNCTION(processCommands) 
	#endif

	#ifndef GEODE_STATICS_processDynamicObjectActions
		#define GEODE_STATICS_processDynamicObjectActions
		GEODE_AS_STATIC_FUNCTION(processDynamicObjectActions) 
	#endif

	#ifndef GEODE_STATICS_processFollowActions
		#define GEODE_STATICS_processFollowActions
		GEODE_AS_STATIC_FUNCTION(processFollowActions) 
	#endif

	#ifndef GEODE_STATICS_processItems
		#define GEODE_STATICS_processItems
		GEODE_AS_STATIC_FUNCTION(processItems) 
	#endif

	#ifndef GEODE_STATICS_processMoveActions
		#define GEODE_STATICS_processMoveActions
		GEODE_AS_STATIC_FUNCTION(processMoveActions) 
	#endif

	#ifndef GEODE_STATICS_processMoveActionsStep
		#define GEODE_STATICS_processMoveActionsStep
		GEODE_AS_STATIC_FUNCTION(processMoveActionsStep) 
	#endif

	#ifndef GEODE_STATICS_processOptionsTrigger
		#define GEODE_STATICS_processOptionsTrigger
		GEODE_AS_STATIC_FUNCTION(processOptionsTrigger) 
	#endif

	#ifndef GEODE_STATICS_processPlayerFollowActions
		#define GEODE_STATICS_processPlayerFollowActions
		GEODE_AS_STATIC_FUNCTION(processPlayerFollowActions) 
	#endif

	#ifndef GEODE_STATICS_processQueuedAudioTriggers
		#define GEODE_STATICS_processQueuedAudioTriggers
		GEODE_AS_STATIC_FUNCTION(processQueuedAudioTriggers) 
	#endif

	#ifndef GEODE_STATICS_processQueuedButtons
		#define GEODE_STATICS_processQueuedButtons
		GEODE_AS_STATIC_FUNCTION(processQueuedButtons) 
	#endif

	#ifndef GEODE_STATICS_processReplayCheckpoint
		#define GEODE_STATICS_processReplayCheckpoint
		GEODE_AS_STATIC_FUNCTION(processReplayCheckpoint) 
	#endif

	#ifndef GEODE_STATICS_processRotationActions
		#define GEODE_STATICS_processRotationActions
		GEODE_AS_STATIC_FUNCTION(processRotationActions) 
	#endif

	#ifndef GEODE_STATICS_processSFXObjects
		#define GEODE_STATICS_processSFXObjects
		GEODE_AS_STATIC_FUNCTION(processSFXObjects) 
	#endif

	#ifndef GEODE_STATICS_processSFXState
		#define GEODE_STATICS_processSFXState
		GEODE_AS_STATIC_FUNCTION(processSFXState) 
	#endif

	#ifndef GEODE_STATICS_processSongState
		#define GEODE_STATICS_processSongState
		GEODE_AS_STATIC_FUNCTION(processSongState) 
	#endif

	#ifndef GEODE_STATICS_processStartPosObjects
		#define GEODE_STATICS_processStartPosObjects
		GEODE_AS_STATIC_FUNCTION(processStartPosObjects) 
	#endif

	#ifndef GEODE_STATICS_processStateObjects
		#define GEODE_STATICS_processStateObjects
		GEODE_AS_STATIC_FUNCTION(processStateObjects) 
	#endif

	#ifndef GEODE_STATICS_processTransformActions
		#define GEODE_STATICS_processTransformActions
		GEODE_AS_STATIC_FUNCTION(processTransformActions) 
	#endif

	#ifndef GEODE_STATICS_promoteGroupParent
		#define GEODE_STATICS_promoteGroupParent
		GEODE_AS_STATIC_FUNCTION(promoteGroupParent) 
	#endif

	#ifndef GEODE_STATICS_queueButton
		#define GEODE_STATICS_queueButton
		GEODE_AS_STATIC_FUNCTION(queueButton) 
	#endif

	#ifndef GEODE_STATICS_queueTimeWarp
		#define GEODE_STATICS_queueTimeWarp
		GEODE_AS_STATIC_FUNCTION(queueTimeWarp) 
	#endif

	#ifndef GEODE_STATICS_reAddToStickyGroup
		#define GEODE_STATICS_reAddToStickyGroup
		GEODE_AS_STATIC_FUNCTION(reAddToStickyGroup) 
	#endif

	#ifndef GEODE_STATICS_recordAction
		#define GEODE_STATICS_recordAction
		GEODE_AS_STATIC_FUNCTION(recordAction) 
	#endif

	#ifndef GEODE_STATICS_recordHitboxTrail
		#define GEODE_STATICS_recordHitboxTrail
		GEODE_AS_STATIC_FUNCTION(recordHitboxTrail) 
	#endif

	#ifndef GEODE_STATICS_recordHitboxTrailState
		#define GEODE_STATICS_recordHitboxTrailState
		GEODE_AS_STATIC_FUNCTION(recordHitboxTrailState) 
	#endif

	#ifndef GEODE_STATICS_rectIntersectsCircle
		#define GEODE_STATICS_rectIntersectsCircle
		GEODE_AS_STATIC_FUNCTION(rectIntersectsCircle) 
	#endif

	#ifndef GEODE_STATICS_refreshCounterLabels
		#define GEODE_STATICS_refreshCounterLabels
		GEODE_AS_STATIC_FUNCTION(refreshCounterLabels) 
	#endif

	#ifndef GEODE_STATICS_refreshKeyframeAnims
		#define GEODE_STATICS_refreshKeyframeAnims
		GEODE_AS_STATIC_FUNCTION(refreshKeyframeAnims) 
	#endif

	#ifndef GEODE_STATICS_regenerateEnterEasingBuffers
		#define GEODE_STATICS_regenerateEnterEasingBuffers
		GEODE_AS_STATIC_FUNCTION(regenerateEnterEasingBuffers) 
	#endif

	#ifndef GEODE_STATICS_registerSpawnRemap
		#define GEODE_STATICS_registerSpawnRemap
		GEODE_AS_STATIC_FUNCTION(registerSpawnRemap) 
	#endif

	#ifndef GEODE_STATICS_registerStateObject
		#define GEODE_STATICS_registerStateObject
		GEODE_AS_STATIC_FUNCTION(registerStateObject) 
	#endif

	#ifndef GEODE_STATICS_remapGroupParent
		#define GEODE_STATICS_remapGroupParent
		GEODE_AS_STATIC_FUNCTION(remapGroupParent) 
	#endif

	#ifndef GEODE_STATICS_removeBackground
		#define GEODE_STATICS_removeBackground
		GEODE_AS_STATIC_FUNCTION(removeBackground) 
	#endif

	#ifndef GEODE_STATICS_removeCustomEnterEffects
		#define GEODE_STATICS_removeCustomEnterEffects
		GEODE_AS_STATIC_FUNCTION(removeCustomEnterEffects) 
	#endif

	#ifndef GEODE_STATICS_removeFromGroupParents
		#define GEODE_STATICS_removeFromGroupParents
		GEODE_AS_STATIC_FUNCTION(removeFromGroupParents) 
	#endif

	#ifndef GEODE_STATICS_removeFromGroups
		#define GEODE_STATICS_removeFromGroups
		GEODE_AS_STATIC_FUNCTION(removeFromGroups) 
	#endif

	#ifndef GEODE_STATICS_removeFromStickyGroup
		#define GEODE_STATICS_removeFromStickyGroup
		GEODE_AS_STATIC_FUNCTION(removeFromStickyGroup) 
	#endif

	#ifndef GEODE_STATICS_removeGroundLayer
		#define GEODE_STATICS_removeGroundLayer
		GEODE_AS_STATIC_FUNCTION(removeGroundLayer) 
	#endif

	#ifndef GEODE_STATICS_removeGroupParent
		#define GEODE_STATICS_removeGroupParent
		GEODE_AS_STATIC_FUNCTION(removeGroupParent) 
	#endif

	#ifndef GEODE_STATICS_removeKeyframe
		#define GEODE_STATICS_removeKeyframe
		GEODE_AS_STATIC_FUNCTION(removeKeyframe) 
	#endif

	#ifndef GEODE_STATICS_removeMiddleground
		#define GEODE_STATICS_removeMiddleground
		GEODE_AS_STATIC_FUNCTION(removeMiddleground) 
	#endif

	#ifndef GEODE_STATICS_removeObjectFromSection
		#define GEODE_STATICS_removeObjectFromSection
		GEODE_AS_STATIC_FUNCTION(removeObjectFromSection) 
	#endif

	#ifndef GEODE_STATICS_removePlayer2
		#define GEODE_STATICS_removePlayer2
		GEODE_AS_STATIC_FUNCTION(removePlayer2) 
	#endif

	#ifndef GEODE_STATICS_removeReleasedButtons
		#define GEODE_STATICS_removeReleasedButtons
		GEODE_AS_STATIC_FUNCTION(removeReleasedButtons) 
	#endif

	#ifndef GEODE_STATICS_removeTemporaryParticles
		#define GEODE_STATICS_removeTemporaryParticles
		GEODE_AS_STATIC_FUNCTION(removeTemporaryParticles) 
	#endif

	#ifndef GEODE_STATICS_reorderObjectSection
		#define GEODE_STATICS_reorderObjectSection
		GEODE_AS_STATIC_FUNCTION(reorderObjectSection) 
	#endif

	#ifndef GEODE_STATICS_reparentObject
		#define GEODE_STATICS_reparentObject
		GEODE_AS_STATIC_FUNCTION(reparentObject) 
	#endif

	#ifndef GEODE_STATICS_resetActiveEnterEffects
		#define GEODE_STATICS_resetActiveEnterEffects
		GEODE_AS_STATIC_FUNCTION(resetActiveEnterEffects) 
	#endif

	#ifndef GEODE_STATICS_resetAreaObjectValues
		#define GEODE_STATICS_resetAreaObjectValues
		GEODE_AS_STATIC_FUNCTION(resetAreaObjectValues) 
	#endif

	#ifndef GEODE_STATICS_resetAudio
		#define GEODE_STATICS_resetAudio
		GEODE_AS_STATIC_FUNCTION(resetAudio) 
	#endif

	#ifndef GEODE_STATICS_resetCamera
		#define GEODE_STATICS_resetCamera
		GEODE_AS_STATIC_FUNCTION(resetCamera) 
	#endif

	#ifndef GEODE_STATICS_resetGradientLayers
		#define GEODE_STATICS_resetGradientLayers
		GEODE_AS_STATIC_FUNCTION(resetGradientLayers) 
	#endif

	#ifndef GEODE_STATICS_resetGroupCounters
		#define GEODE_STATICS_resetGroupCounters
		GEODE_AS_STATIC_FUNCTION(resetGroupCounters) 
	#endif

	#ifndef GEODE_STATICS_resetLevelVariables
		#define GEODE_STATICS_resetLevelVariables
		GEODE_AS_STATIC_FUNCTION(resetLevelVariables) 
	#endif

	#ifndef GEODE_STATICS_resetMoveOptimizedValue
		#define GEODE_STATICS_resetMoveOptimizedValue
		GEODE_AS_STATIC_FUNCTION(resetMoveOptimizedValue) 
	#endif

	#ifndef GEODE_STATICS_resetPlayer
		#define GEODE_STATICS_resetPlayer
		GEODE_AS_STATIC_FUNCTION(resetPlayer) 
	#endif

	#ifndef GEODE_STATICS_resetRecord
		#define GEODE_STATICS_resetRecord
		GEODE_AS_STATIC_FUNCTION(resetRecord) 
	#endif

	#ifndef GEODE_STATICS_resetRecordFull
		#define GEODE_STATICS_resetRecordFull
		GEODE_AS_STATIC_FUNCTION(resetRecordFull) 
	#endif

	#ifndef GEODE_STATICS_resetSongTriggerValues
		#define GEODE_STATICS_resetSongTriggerValues
		GEODE_AS_STATIC_FUNCTION(resetSongTriggerValues) 
	#endif

	#ifndef GEODE_STATICS_resetSpawnChannelIndex
		#define GEODE_STATICS_resetSpawnChannelIndex
		GEODE_AS_STATIC_FUNCTION(resetSpawnChannelIndex) 
	#endif

	#ifndef GEODE_STATICS_resetStaticCamera
		#define GEODE_STATICS_resetStaticCamera
		GEODE_AS_STATIC_FUNCTION(resetStaticCamera) 
	#endif

	#ifndef GEODE_STATICS_resetStoppedAreaObjects
		#define GEODE_STATICS_resetStoppedAreaObjects
		GEODE_AS_STATIC_FUNCTION(resetStoppedAreaObjects) 
	#endif

	#ifndef GEODE_STATICS_restoreAllUIObjects
		#define GEODE_STATICS_restoreAllUIObjects
		GEODE_AS_STATIC_FUNCTION(restoreAllUIObjects) 
	#endif

	#ifndef GEODE_STATICS_restoreDefaultGameplayOffsetX
		#define GEODE_STATICS_restoreDefaultGameplayOffsetX
		GEODE_AS_STATIC_FUNCTION(restoreDefaultGameplayOffsetX) 
	#endif

	#ifndef GEODE_STATICS_restoreDefaultGameplayOffsetY
		#define GEODE_STATICS_restoreDefaultGameplayOffsetY
		GEODE_AS_STATIC_FUNCTION(restoreDefaultGameplayOffsetY) 
	#endif

	#ifndef GEODE_STATICS_restoreRecording
		#define GEODE_STATICS_restoreRecording
		GEODE_AS_STATIC_FUNCTION(restoreRecording) 
	#endif

	#ifndef GEODE_STATICS_restoreRemap
		#define GEODE_STATICS_restoreRemap
		GEODE_AS_STATIC_FUNCTION(restoreRemap) 
	#endif

	#ifndef GEODE_STATICS_resumeAudio
		#define GEODE_STATICS_resumeAudio
		GEODE_AS_STATIC_FUNCTION(resumeAudio) 
	#endif

	#ifndef GEODE_STATICS_rotateAreaObjects
		#define GEODE_STATICS_rotateAreaObjects
		GEODE_AS_STATIC_FUNCTION(rotateAreaObjects) 
	#endif

	#ifndef GEODE_STATICS_rotateObject
		#define GEODE_STATICS_rotateObject
		GEODE_AS_STATIC_FUNCTION(rotateObject) 
	#endif

	#ifndef GEODE_STATICS_rotateObjects
		#define GEODE_STATICS_rotateObjects
		GEODE_AS_STATIC_FUNCTION(rotateObjects) 
	#endif

	#ifndef GEODE_STATICS_setActiveStartPosObject
		#define GEODE_STATICS_setActiveStartPosObject
		GEODE_AS_STATIC_FUNCTION(setActiveStartPosObject) 
	#endif

	#ifndef GEODE_STATICS_setGroupParent
		#define GEODE_STATICS_setGroupParent
		GEODE_AS_STATIC_FUNCTION(setGroupParent) 
	#endif

	#ifndef GEODE_STATICS_setupLayers
		#define GEODE_STATICS_setupLayers
		GEODE_AS_STATIC_FUNCTION(setupLayers) 
	#endif

	#ifndef GEODE_STATICS_setupLevelStart
		#define GEODE_STATICS_setupLevelStart
		GEODE_AS_STATIC_FUNCTION(setupLevelStart) 
	#endif

	#ifndef GEODE_STATICS_setupReplay
		#define GEODE_STATICS_setupReplay
		GEODE_AS_STATIC_FUNCTION(setupReplay) 
	#endif

	#ifndef GEODE_STATICS_shakeCamera
		#define GEODE_STATICS_shakeCamera
		GEODE_AS_STATIC_FUNCTION(shakeCamera) 
	#endif

	#ifndef GEODE_STATICS_shouldExitHackedLevel
		#define GEODE_STATICS_shouldExitHackedLevel
		GEODE_AS_STATIC_FUNCTION(shouldExitHackedLevel) 
	#endif

	#ifndef GEODE_STATICS_shouldUseSubstepForButton
		#define GEODE_STATICS_shouldUseSubstepForButton
		GEODE_AS_STATIC_FUNCTION(shouldUseSubstepForButton) 
	#endif

	#ifndef GEODE_STATICS_sortAllGroupsX
		#define GEODE_STATICS_sortAllGroupsX
		GEODE_AS_STATIC_FUNCTION(sortAllGroupsX) 
	#endif

	#ifndef GEODE_STATICS_sortGroups
		#define GEODE_STATICS_sortGroups
		GEODE_AS_STATIC_FUNCTION(sortGroups) 
	#endif

	#ifndef GEODE_STATICS_sortSectionVector
		#define GEODE_STATICS_sortSectionVector
		GEODE_AS_STATIC_FUNCTION(sortSectionVector) 
	#endif

	#ifndef GEODE_STATICS_sortStartPosObjects
		#define GEODE_STATICS_sortStartPosObjects
		GEODE_AS_STATIC_FUNCTION(sortStartPosObjects) 
	#endif

	#ifndef GEODE_STATICS_sortStickyGroups
		#define GEODE_STATICS_sortStickyGroups
		GEODE_AS_STATIC_FUNCTION(sortStickyGroups) 
	#endif

	#ifndef GEODE_STATICS_spawnGroupTriggered
		#define GEODE_STATICS_spawnGroupTriggered
		GEODE_AS_STATIC_FUNCTION(spawnGroupTriggered) 
	#endif

	#ifndef GEODE_STATICS_spawnObjectsInOrder
		#define GEODE_STATICS_spawnObjectsInOrder
		GEODE_AS_STATIC_FUNCTION(spawnObjectsInOrder) 
	#endif

	#ifndef GEODE_STATICS_spawnParticle
		#define GEODE_STATICS_spawnParticle
		GEODE_AS_STATIC_FUNCTION(spawnParticle) 
	#endif

	#ifndef GEODE_STATICS_spawnParticleTrigger
		#define GEODE_STATICS_spawnParticleTrigger
		GEODE_AS_STATIC_FUNCTION(spawnParticleTrigger) 
	#endif

	#ifndef GEODE_STATICS_spawnPlayer2
		#define GEODE_STATICS_spawnPlayer2
		GEODE_AS_STATIC_FUNCTION(spawnPlayer2) 
	#endif

	#ifndef GEODE_STATICS_speedForShaderTarget
		#define GEODE_STATICS_speedForShaderTarget
		GEODE_AS_STATIC_FUNCTION(speedForShaderTarget) 
	#endif

	#ifndef GEODE_STATICS_staticObjectsInRect
		#define GEODE_STATICS_staticObjectsInRect
		GEODE_AS_STATIC_FUNCTION(staticObjectsInRect) 
	#endif

	#ifndef GEODE_STATICS_stopAllGroundActions
		#define GEODE_STATICS_stopAllGroundActions
		GEODE_AS_STATIC_FUNCTION(stopAllGroundActions) 
	#endif

	#ifndef GEODE_STATICS_stopCameraShake
		#define GEODE_STATICS_stopCameraShake
		GEODE_AS_STATIC_FUNCTION(stopCameraShake) 
	#endif

	#ifndef GEODE_STATICS_stopCustomEnterEffect
		#define GEODE_STATICS_stopCustomEnterEffect
		GEODE_AS_STATIC_FUNCTION(stopCustomEnterEffect) 
	#endif

	#ifndef GEODE_STATICS_stopSFXTrigger
		#define GEODE_STATICS_stopSFXTrigger
		GEODE_AS_STATIC_FUNCTION(stopSFXTrigger) 
	#endif

	#ifndef GEODE_STATICS_swapBackground
		#define GEODE_STATICS_swapBackground
		GEODE_AS_STATIC_FUNCTION(swapBackground) 
	#endif

	#ifndef GEODE_STATICS_swapGround
		#define GEODE_STATICS_swapGround
		GEODE_AS_STATIC_FUNCTION(swapGround) 
	#endif

	#ifndef GEODE_STATICS_swapMiddleground
		#define GEODE_STATICS_swapMiddleground
		GEODE_AS_STATIC_FUNCTION(swapMiddleground) 
	#endif

	#ifndef GEODE_STATICS_switchToFlyMode
		#define GEODE_STATICS_switchToFlyMode
		GEODE_AS_STATIC_FUNCTION(switchToFlyMode) 
	#endif

	#ifndef GEODE_STATICS_syncBGTextures
		#define GEODE_STATICS_syncBGTextures
		GEODE_AS_STATIC_FUNCTION(syncBGTextures) 
	#endif

	#ifndef GEODE_STATICS_teleportPlayer
		#define GEODE_STATICS_teleportPlayer
		GEODE_AS_STATIC_FUNCTION(teleportPlayer) 
	#endif

	#ifndef GEODE_STATICS_testInstantCountTrigger
		#define GEODE_STATICS_testInstantCountTrigger
		GEODE_AS_STATIC_FUNCTION(testInstantCountTrigger) 
	#endif

	#ifndef GEODE_STATICS_toggleAudioVisualizer
		#define GEODE_STATICS_toggleAudioVisualizer
		GEODE_AS_STATIC_FUNCTION(toggleAudioVisualizer) 
	#endif

	#ifndef GEODE_STATICS_toggleDualMode
		#define GEODE_STATICS_toggleDualMode
		GEODE_AS_STATIC_FUNCTION(toggleDualMode) 
	#endif

	#ifndef GEODE_STATICS_toggleFlipped
		#define GEODE_STATICS_toggleFlipped
		GEODE_AS_STATIC_FUNCTION(toggleFlipped) 
	#endif

	#ifndef GEODE_STATICS_toggleGroup
		#define GEODE_STATICS_toggleGroup
		GEODE_AS_STATIC_FUNCTION(toggleGroup) 
	#endif

	#ifndef GEODE_STATICS_toggleLockPlayer
		#define GEODE_STATICS_toggleLockPlayer
		GEODE_AS_STATIC_FUNCTION(toggleLockPlayer) 
	#endif

	#ifndef GEODE_STATICS_togglePlayerStreakBlend
		#define GEODE_STATICS_togglePlayerStreakBlend
		GEODE_AS_STATIC_FUNCTION(togglePlayerStreakBlend) 
	#endif

	#ifndef GEODE_STATICS_togglePlayerVisibility
		#define GEODE_STATICS_togglePlayerVisibility
		GEODE_AS_STATIC_FUNCTION(togglePlayerVisibility) 
	#endif

	#ifndef GEODE_STATICS_transformAreaObjects
		#define GEODE_STATICS_transformAreaObjects
		GEODE_AS_STATIC_FUNCTION(transformAreaObjects) 
	#endif

	#ifndef GEODE_STATICS_triggerAdvancedFollowCommand
		#define GEODE_STATICS_triggerAdvancedFollowCommand
		GEODE_AS_STATIC_FUNCTION(triggerAdvancedFollowCommand) 
	#endif

	#ifndef GEODE_STATICS_triggerAdvancedFollowEditCommand
		#define GEODE_STATICS_triggerAdvancedFollowEditCommand
		GEODE_AS_STATIC_FUNCTION(triggerAdvancedFollowEditCommand) 
	#endif

	#ifndef GEODE_STATICS_triggerAreaEffect
		#define GEODE_STATICS_triggerAreaEffect
		GEODE_AS_STATIC_FUNCTION(triggerAreaEffect) 
	#endif

	#ifndef GEODE_STATICS_triggerAreaEffectAnimation
		#define GEODE_STATICS_triggerAreaEffectAnimation
		GEODE_AS_STATIC_FUNCTION(triggerAreaEffectAnimation) 
	#endif

	#ifndef GEODE_STATICS_triggerDynamicMoveCommand
		#define GEODE_STATICS_triggerDynamicMoveCommand
		GEODE_AS_STATIC_FUNCTION(triggerDynamicMoveCommand) 
	#endif

	#ifndef GEODE_STATICS_triggerDynamicRotateCommand
		#define GEODE_STATICS_triggerDynamicRotateCommand
		GEODE_AS_STATIC_FUNCTION(triggerDynamicRotateCommand) 
	#endif

	#ifndef GEODE_STATICS_triggerGradientCommand
		#define GEODE_STATICS_triggerGradientCommand
		GEODE_AS_STATIC_FUNCTION(triggerGradientCommand) 
	#endif

	#ifndef GEODE_STATICS_triggerGravityChange
		#define GEODE_STATICS_triggerGravityChange
		GEODE_AS_STATIC_FUNCTION(triggerGravityChange) 
	#endif

	#ifndef GEODE_STATICS_triggerMoveCommand
		#define GEODE_STATICS_triggerMoveCommand
		GEODE_AS_STATIC_FUNCTION(triggerMoveCommand) 
	#endif

	#ifndef GEODE_STATICS_triggerRotateCommand
		#define GEODE_STATICS_triggerRotateCommand
		GEODE_AS_STATIC_FUNCTION(triggerRotateCommand) 
	#endif

	#ifndef GEODE_STATICS_triggerShaderCommand
		#define GEODE_STATICS_triggerShaderCommand
		GEODE_AS_STATIC_FUNCTION(triggerShaderCommand) 
	#endif

	#ifndef GEODE_STATICS_triggerTransformCommand
		#define GEODE_STATICS_triggerTransformCommand
		GEODE_AS_STATIC_FUNCTION(triggerTransformCommand) 
	#endif

	#ifndef GEODE_STATICS_tryGetGroupParent
		#define GEODE_STATICS_tryGetGroupParent
		GEODE_AS_STATIC_FUNCTION(tryGetGroupParent) 
	#endif

	#ifndef GEODE_STATICS_tryGetMainObject
		#define GEODE_STATICS_tryGetMainObject
		GEODE_AS_STATIC_FUNCTION(tryGetMainObject) 
	#endif

	#ifndef GEODE_STATICS_tryGetObject
		#define GEODE_STATICS_tryGetObject
		GEODE_AS_STATIC_FUNCTION(tryGetObject) 
	#endif

	#ifndef GEODE_STATICS_tryResumeAudio
		#define GEODE_STATICS_tryResumeAudio
		GEODE_AS_STATIC_FUNCTION(tryResumeAudio) 
	#endif

	#ifndef GEODE_STATICS_unclaimParticle
		#define GEODE_STATICS_unclaimParticle
		GEODE_AS_STATIC_FUNCTION(unclaimParticle) 
	#endif

	#ifndef GEODE_STATICS_ungroupStickyObjects
		#define GEODE_STATICS_ungroupStickyObjects
		GEODE_AS_STATIC_FUNCTION(ungroupStickyObjects) 
	#endif

	#ifndef GEODE_STATICS_unlinkAllEvents
		#define GEODE_STATICS_unlinkAllEvents
		GEODE_AS_STATIC_FUNCTION(unlinkAllEvents) 
	#endif

	#ifndef GEODE_STATICS_unlockExistingFirstParents
		#define GEODE_STATICS_unlockExistingFirstParents
		GEODE_AS_STATIC_FUNCTION(unlockExistingFirstParents) 
	#endif

	#ifndef GEODE_STATICS_updateActiveEnterEffect
		#define GEODE_STATICS_updateActiveEnterEffect
		GEODE_AS_STATIC_FUNCTION(updateActiveEnterEffect) 
	#endif

	#ifndef GEODE_STATICS_updateAllObjectSection
		#define GEODE_STATICS_updateAllObjectSection
		GEODE_AS_STATIC_FUNCTION(updateAllObjectSection) 
	#endif

	#ifndef GEODE_STATICS_updateAudioVisualizer
		#define GEODE_STATICS_updateAudioVisualizer
		GEODE_AS_STATIC_FUNCTION(updateAudioVisualizer) 
	#endif

	#ifndef GEODE_STATICS_updateBGArtSpeed
		#define GEODE_STATICS_updateBGArtSpeed
		GEODE_AS_STATIC_FUNCTION(updateBGArtSpeed) 
	#endif

	#ifndef GEODE_STATICS_updateCamera
		#define GEODE_STATICS_updateCamera
		GEODE_AS_STATIC_FUNCTION(updateCamera) 
	#endif

	#ifndef GEODE_STATICS_updateCameraBGArt
		#define GEODE_STATICS_updateCameraBGArt
		GEODE_AS_STATIC_FUNCTION(updateCameraBGArt) 
	#endif

	#ifndef GEODE_STATICS_updateCameraEdge
		#define GEODE_STATICS_updateCameraEdge
		GEODE_AS_STATIC_FUNCTION(updateCameraEdge) 
	#endif

	#ifndef GEODE_STATICS_updateCameraMode
		#define GEODE_STATICS_updateCameraMode
		GEODE_AS_STATIC_FUNCTION(updateCameraMode) 
	#endif

	#ifndef GEODE_STATICS_updateCameraOffsetX
		#define GEODE_STATICS_updateCameraOffsetX
		GEODE_AS_STATIC_FUNCTION(updateCameraOffsetX) 
	#endif

	#ifndef GEODE_STATICS_updateCameraOffsetY
		#define GEODE_STATICS_updateCameraOffsetY
		GEODE_AS_STATIC_FUNCTION(updateCameraOffsetY) 
	#endif

	#ifndef GEODE_STATICS_updateCollisionBlocks
		#define GEODE_STATICS_updateCollisionBlocks
		GEODE_AS_STATIC_FUNCTION(updateCollisionBlocks) 
	#endif

	#ifndef GEODE_STATICS_updateCounters
		#define GEODE_STATICS_updateCounters
		GEODE_AS_STATIC_FUNCTION(updateCounters) 
	#endif

	#ifndef GEODE_STATICS_updateDualGround
		#define GEODE_STATICS_updateDualGround
		GEODE_AS_STATIC_FUNCTION(updateDualGround) 
	#endif

	#ifndef GEODE_STATICS_updateEnterEffects
		#define GEODE_STATICS_updateEnterEffects
		GEODE_AS_STATIC_FUNCTION(updateEnterEffects) 
	#endif

	#ifndef GEODE_STATICS_updateExtendedCollision
		#define GEODE_STATICS_updateExtendedCollision
		GEODE_AS_STATIC_FUNCTION(updateExtendedCollision) 
	#endif

	#ifndef GEODE_STATICS_updateExtraGameLayers
		#define GEODE_STATICS_updateExtraGameLayers
		GEODE_AS_STATIC_FUNCTION(updateExtraGameLayers) 
	#endif

	#ifndef GEODE_STATICS_updateGameplayOffsetX
		#define GEODE_STATICS_updateGameplayOffsetX
		GEODE_AS_STATIC_FUNCTION(updateGameplayOffsetX) 
	#endif

	#ifndef GEODE_STATICS_updateGameplayOffsetY
		#define GEODE_STATICS_updateGameplayOffsetY
		GEODE_AS_STATIC_FUNCTION(updateGameplayOffsetY) 
	#endif

	#ifndef GEODE_STATICS_updateGradientLayers
		#define GEODE_STATICS_updateGradientLayers
		GEODE_AS_STATIC_FUNCTION(updateGradientLayers) 
	#endif

	#ifndef GEODE_STATICS_updateGroundShadows
		#define GEODE_STATICS_updateGroundShadows
		GEODE_AS_STATIC_FUNCTION(updateGroundShadows) 
	#endif

	#ifndef GEODE_STATICS_updateGuideArt
		#define GEODE_STATICS_updateGuideArt
		GEODE_AS_STATIC_FUNCTION(updateGuideArt) 
	#endif

	#ifndef GEODE_STATICS_updateInternalCamOffsetX
		#define GEODE_STATICS_updateInternalCamOffsetX
		GEODE_AS_STATIC_FUNCTION(updateInternalCamOffsetX) 
	#endif

	#ifndef GEODE_STATICS_updateInternalCamOffsetY
		#define GEODE_STATICS_updateInternalCamOffsetY
		GEODE_AS_STATIC_FUNCTION(updateInternalCamOffsetY) 
	#endif

	#ifndef GEODE_STATICS_updateKeyframeOrder
		#define GEODE_STATICS_updateKeyframeOrder
		GEODE_AS_STATIC_FUNCTION(updateKeyframeOrder) 
	#endif

	#ifndef GEODE_STATICS_updateLayerCapacity
		#define GEODE_STATICS_updateLayerCapacity
		GEODE_AS_STATIC_FUNCTION(updateLayerCapacity) 
	#endif

	#ifndef GEODE_STATICS_updateLegacyLayerCapacity
		#define GEODE_STATICS_updateLegacyLayerCapacity
		GEODE_AS_STATIC_FUNCTION(updateLegacyLayerCapacity) 
	#endif

	#ifndef GEODE_STATICS_updateLevelColors
		#define GEODE_STATICS_updateLevelColors
		GEODE_AS_STATIC_FUNCTION(updateLevelColors) 
	#endif

	#ifndef GEODE_STATICS_updateMaxGameplayY
		#define GEODE_STATICS_updateMaxGameplayY
		GEODE_AS_STATIC_FUNCTION(updateMaxGameplayY) 
	#endif

	#ifndef GEODE_STATICS_updateMGArtSpeed
		#define GEODE_STATICS_updateMGArtSpeed
		GEODE_AS_STATIC_FUNCTION(updateMGArtSpeed) 
	#endif

	#ifndef GEODE_STATICS_updateMGOffsetY
		#define GEODE_STATICS_updateMGOffsetY
		GEODE_AS_STATIC_FUNCTION(updateMGOffsetY) 
	#endif

	#ifndef GEODE_STATICS_updateOBB2
		#define GEODE_STATICS_updateOBB2
		GEODE_AS_STATIC_FUNCTION(updateOBB2) 
	#endif

	#ifndef GEODE_STATICS_updateParticles
		#define GEODE_STATICS_updateParticles
		GEODE_AS_STATIC_FUNCTION(updateParticles) 
	#endif

	#ifndef GEODE_STATICS_updatePlatformerTime
		#define GEODE_STATICS_updatePlatformerTime
		GEODE_AS_STATIC_FUNCTION(updatePlatformerTime) 
	#endif

	#ifndef GEODE_STATICS_updatePlayerCollisionBlocks
		#define GEODE_STATICS_updatePlayerCollisionBlocks
		GEODE_AS_STATIC_FUNCTION(updatePlayerCollisionBlocks) 
	#endif

	#ifndef GEODE_STATICS_updateProximityVolumeEffects
		#define GEODE_STATICS_updateProximityVolumeEffects
		GEODE_AS_STATIC_FUNCTION(updateProximityVolumeEffects) 
	#endif

	#ifndef GEODE_STATICS_updateQueuedLabels
		#define GEODE_STATICS_updateQueuedLabels
		GEODE_AS_STATIC_FUNCTION(updateQueuedLabels) 
	#endif

	#ifndef GEODE_STATICS_updateReplay
		#define GEODE_STATICS_updateReplay
		GEODE_AS_STATIC_FUNCTION(updateReplay) 
	#endif

	#ifndef GEODE_STATICS_updateSavePositionObjects
		#define GEODE_STATICS_updateSavePositionObjects
		GEODE_AS_STATIC_FUNCTION(updateSavePositionObjects) 
	#endif

	#ifndef GEODE_STATICS_updateShaderLayer
		#define GEODE_STATICS_updateShaderLayer
		GEODE_AS_STATIC_FUNCTION(updateShaderLayer) 
	#endif

	#ifndef GEODE_STATICS_updateSpecialGroupData
		#define GEODE_STATICS_updateSpecialGroupData
		GEODE_AS_STATIC_FUNCTION(updateSpecialGroupData) 
	#endif

	#ifndef GEODE_STATICS_updateSpecialLabels
		#define GEODE_STATICS_updateSpecialLabels
		GEODE_AS_STATIC_FUNCTION(updateSpecialLabels) 
	#endif

	#ifndef GEODE_STATICS_updateStaticCameraPos
		#define GEODE_STATICS_updateStaticCameraPos
		GEODE_AS_STATIC_FUNCTION(updateStaticCameraPos) 
	#endif

	#ifndef GEODE_STATICS_updateStaticCameraPosToGroup
		#define GEODE_STATICS_updateStaticCameraPosToGroup
		GEODE_AS_STATIC_FUNCTION(updateStaticCameraPosToGroup) 
	#endif

	#ifndef GEODE_STATICS_updateTimeMod
		#define GEODE_STATICS_updateTimeMod
		GEODE_AS_STATIC_FUNCTION(updateTimeMod) 
	#endif

	#ifndef GEODE_STATICS_updateTimerLabels
		#define GEODE_STATICS_updateTimerLabels
		GEODE_AS_STATIC_FUNCTION(updateTimerLabels) 
	#endif

	#ifndef GEODE_STATICS_updateZoom
		#define GEODE_STATICS_updateZoom
		GEODE_AS_STATIC_FUNCTION(updateZoom) 
	#endif

	#ifndef GEODE_STATICS_visitWithColorFlash
		#define GEODE_STATICS_visitWithColorFlash
		GEODE_AS_STATIC_FUNCTION(visitWithColorFlash) 
	#endif

	#ifndef GEODE_STATICS_volumeForProximityEffect
		#define GEODE_STATICS_volumeForProximityEffect
		GEODE_AS_STATIC_FUNCTION(volumeForProximityEffect) 
	#endif

	#ifndef GEODE_STATICS_syncDeathMarkerFlip
		#define GEODE_STATICS_syncDeathMarkerFlip
		GEODE_AS_STATIC_FUNCTION(syncDeathMarkerFlip) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_convertToClosestDirection
		#define GEODE_CONCEPT_CHECK_convertToClosestDirection
		GEODE_CONCEPT_FUNCTION_CHECK(convertToClosestDirection) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_gameEventToString
		#define GEODE_CONCEPT_CHECK_gameEventToString
		GEODE_CONCEPT_FUNCTION_CHECK(gameEventToString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_get
		#define GEODE_CONCEPT_CHECK_get
		GEODE_CONCEPT_FUNCTION_CHECK(get) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_update
		#define GEODE_CONCEPT_CHECK_update
		GEODE_CONCEPT_FUNCTION_CHECK(update) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_visit
		#define GEODE_CONCEPT_CHECK_visit
		GEODE_CONCEPT_FUNCTION_CHECK(visit) 
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

	#ifndef GEODE_CONCEPT_CHECK_playerTookDamage
		#define GEODE_CONCEPT_CHECK_playerTookDamage
		GEODE_CONCEPT_FUNCTION_CHECK(playerTookDamage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_opacityForObject
		#define GEODE_CONCEPT_CHECK_opacityForObject
		GEODE_CONCEPT_FUNCTION_CHECK(opacityForObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addToSpeedObjects
		#define GEODE_CONCEPT_CHECK_addToSpeedObjects
		GEODE_CONCEPT_FUNCTION_CHECK(addToSpeedObjects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_objectsCollided
		#define GEODE_CONCEPT_CHECK_objectsCollided
		GEODE_CONCEPT_FUNCTION_CHECK(objectsCollided) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateColor
		#define GEODE_CONCEPT_CHECK_updateColor
		GEODE_CONCEPT_FUNCTION_CHECK(updateColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleGroupTriggered
		#define GEODE_CONCEPT_CHECK_toggleGroupTriggered
		GEODE_CONCEPT_FUNCTION_CHECK(toggleGroupTriggered) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_checkSpawnAbuse
		#define GEODE_CONCEPT_CHECK_checkSpawnAbuse
		GEODE_CONCEPT_FUNCTION_CHECK(checkSpawnAbuse) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_spawnGroup
		#define GEODE_CONCEPT_CHECK_spawnGroup
		GEODE_CONCEPT_FUNCTION_CHECK(spawnGroup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_spawnObject
		#define GEODE_CONCEPT_CHECK_spawnObject
		GEODE_CONCEPT_FUNCTION_CHECK(spawnObject) 
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

	#ifndef GEODE_CONCEPT_CHECK_updateDebugDraw
		#define GEODE_CONCEPT_CHECK_updateDebugDraw
		GEODE_CONCEPT_FUNCTION_CHECK(updateDebugDraw) 
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

	#ifndef GEODE_CONCEPT_CHECK_addToSection
		#define GEODE_CONCEPT_CHECK_addToSection
		GEODE_CONCEPT_FUNCTION_CHECK(addToSection) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addToGroup
		#define GEODE_CONCEPT_CHECK_addToGroup
		GEODE_CONCEPT_FUNCTION_CHECK(addToGroup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeFromGroup
		#define GEODE_CONCEPT_CHECK_removeFromGroup
		GEODE_CONCEPT_FUNCTION_CHECK(removeFromGroup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateObjectSection
		#define GEODE_CONCEPT_CHECK_updateObjectSection
		GEODE_CONCEPT_FUNCTION_CHECK(updateObjectSection) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateDisabledObjectsLastPos
		#define GEODE_CONCEPT_CHECK_updateDisabledObjectsLastPos
		GEODE_CONCEPT_FUNCTION_CHECK(updateDisabledObjectsLastPos) 
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

	#ifndef GEODE_CONCEPT_CHECK_updateScreenRotation
		#define GEODE_CONCEPT_CHECK_updateScreenRotation
		GEODE_CONCEPT_FUNCTION_CHECK(updateScreenRotation) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_reverseDirection
		#define GEODE_CONCEPT_CHECK_reverseDirection
		GEODE_CONCEPT_FUNCTION_CHECK(reverseDirection) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_rotateGameplay
		#define GEODE_CONCEPT_CHECK_rotateGameplay
		GEODE_CONCEPT_FUNCTION_CHECK(rotateGameplay) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_didRotateGameplay
		#define GEODE_CONCEPT_CHECK_didRotateGameplay
		GEODE_CONCEPT_FUNCTION_CHECK(didRotateGameplay) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateTimeWarp
		#define GEODE_CONCEPT_CHECK_updateTimeWarp
		GEODE_CONCEPT_FUNCTION_CHECK(updateTimeWarp) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_applyTimeWarp
		#define GEODE_CONCEPT_CHECK_applyTimeWarp
		GEODE_CONCEPT_FUNCTION_CHECK(applyTimeWarp) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_playGravityEffect
		#define GEODE_CONCEPT_CHECK_playGravityEffect
		GEODE_CONCEPT_FUNCTION_CHECK(playGravityEffect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_manualUpdateObjectColors
		#define GEODE_CONCEPT_CHECK_manualUpdateObjectColors
		GEODE_CONCEPT_FUNCTION_CHECK(manualUpdateObjectColors) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createCustomParticle
		#define GEODE_CONCEPT_CHECK_createCustomParticle
		GEODE_CONCEPT_FUNCTION_CHECK(createCustomParticle) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_claimCustomParticle
		#define GEODE_CONCEPT_CHECK_claimCustomParticle
		GEODE_CONCEPT_FUNCTION_CHECK(claimCustomParticle) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_unclaimCustomParticle
		#define GEODE_CONCEPT_CHECK_unclaimCustomParticle
		GEODE_CONCEPT_FUNCTION_CHECK(unclaimCustomParticle) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_activatedAudioTrigger
		#define GEODE_CONCEPT_CHECK_activatedAudioTrigger
		GEODE_CONCEPT_FUNCTION_CHECK(activatedAudioTrigger) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_checkpointActivated
		#define GEODE_CONCEPT_CHECK_checkpointActivated
		GEODE_CONCEPT_FUNCTION_CHECK(checkpointActivated) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_flipArt
		#define GEODE_CONCEPT_CHECK_flipArt
		GEODE_CONCEPT_FUNCTION_CHECK(flipArt) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addKeyframe
		#define GEODE_CONCEPT_CHECK_addKeyframe
		GEODE_CONCEPT_FUNCTION_CHECK(addKeyframe) 
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

	#ifndef GEODE_CONCEPT_CHECK_activateCustomRing
		#define GEODE_CONCEPT_CHECK_activateCustomRing
		GEODE_CONCEPT_FUNCTION_CHECK(activateCustomRing) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_activateEventTrigger
		#define GEODE_CONCEPT_CHECK_activateEventTrigger
		GEODE_CONCEPT_FUNCTION_CHECK(activateEventTrigger) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_activateItemCompareTrigger
		#define GEODE_CONCEPT_CHECK_activateItemCompareTrigger
		GEODE_CONCEPT_FUNCTION_CHECK(activateItemCompareTrigger) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_activateItemEditTrigger
		#define GEODE_CONCEPT_CHECK_activateItemEditTrigger
		GEODE_CONCEPT_FUNCTION_CHECK(activateItemEditTrigger) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_activateObjectControlTrigger
		#define GEODE_CONCEPT_CHECK_activateObjectControlTrigger
		GEODE_CONCEPT_FUNCTION_CHECK(activateObjectControlTrigger) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_activatePersistentItemTrigger
		#define GEODE_CONCEPT_CHECK_activatePersistentItemTrigger
		GEODE_CONCEPT_FUNCTION_CHECK(activatePersistentItemTrigger) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_activatePlayerControlTrigger
		#define GEODE_CONCEPT_CHECK_activatePlayerControlTrigger
		GEODE_CONCEPT_FUNCTION_CHECK(activatePlayerControlTrigger) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_activateProgressTrigger
		#define GEODE_CONCEPT_CHECK_activateProgressTrigger
		GEODE_CONCEPT_FUNCTION_CHECK(activateProgressTrigger) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_activateResetTrigger
		#define GEODE_CONCEPT_CHECK_activateResetTrigger
		GEODE_CONCEPT_FUNCTION_CHECK(activateResetTrigger) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_activateSFXEditTrigger
		#define GEODE_CONCEPT_CHECK_activateSFXEditTrigger
		GEODE_CONCEPT_FUNCTION_CHECK(activateSFXEditTrigger) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_activateSFXTrigger
		#define GEODE_CONCEPT_CHECK_activateSFXTrigger
		GEODE_CONCEPT_FUNCTION_CHECK(activateSFXTrigger) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_activateSongEditTrigger
		#define GEODE_CONCEPT_CHECK_activateSongEditTrigger
		GEODE_CONCEPT_FUNCTION_CHECK(activateSongEditTrigger) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_activateSongTrigger
		#define GEODE_CONCEPT_CHECK_activateSongTrigger
		GEODE_CONCEPT_FUNCTION_CHECK(activateSongTrigger) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_activateTimerTrigger
		#define GEODE_CONCEPT_CHECK_activateTimerTrigger
		GEODE_CONCEPT_FUNCTION_CHECK(activateTimerTrigger) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addAreaEffect
		#define GEODE_CONCEPT_CHECK_addAreaEffect
		GEODE_CONCEPT_FUNCTION_CHECK(addAreaEffect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addCustomEnterEffect
		#define GEODE_CONCEPT_CHECK_addCustomEnterEffect
		GEODE_CONCEPT_FUNCTION_CHECK(addCustomEnterEffect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addDeathMarkerLayer
		#define GEODE_CONCEPT_CHECK_addDeathMarkerLayer
		GEODE_CONCEPT_FUNCTION_CHECK(addDeathMarkerLayer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addGuideArt
		#define GEODE_CONCEPT_CHECK_addGuideArt
		GEODE_CONCEPT_FUNCTION_CHECK(addGuideArt) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addObjectCounter
		#define GEODE_CONCEPT_CHECK_addObjectCounter
		GEODE_CONCEPT_FUNCTION_CHECK(addObjectCounter) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addPickupTrigger
		#define GEODE_CONCEPT_CHECK_addPickupTrigger
		GEODE_CONCEPT_FUNCTION_CHECK(addPickupTrigger) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addPoints
		#define GEODE_CONCEPT_CHECK_addPoints
		GEODE_CONCEPT_FUNCTION_CHECK(addPoints) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addProximityVolumeEffect
		#define GEODE_CONCEPT_CHECK_addProximityVolumeEffect
		GEODE_CONCEPT_FUNCTION_CHECK(addProximityVolumeEffect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addRemapTargets
		#define GEODE_CONCEPT_CHECK_addRemapTargets
		GEODE_CONCEPT_FUNCTION_CHECK(addRemapTargets) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addToGroupParents
		#define GEODE_CONCEPT_CHECK_addToGroupParents
		GEODE_CONCEPT_FUNCTION_CHECK(addToGroupParents) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addToGroups
		#define GEODE_CONCEPT_CHECK_addToGroups
		GEODE_CONCEPT_FUNCTION_CHECK(addToGroups) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addToObjectsToShow
		#define GEODE_CONCEPT_CHECK_addToObjectsToShow
		GEODE_CONCEPT_FUNCTION_CHECK(addToObjectsToShow) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addUIObject
		#define GEODE_CONCEPT_CHECK_addUIObject
		GEODE_CONCEPT_FUNCTION_CHECK(addUIObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_animateInDualGroundNew
		#define GEODE_CONCEPT_CHECK_animateInDualGroundNew
		GEODE_CONCEPT_FUNCTION_CHECK(animateInDualGroundNew) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_animateInGroundNew
		#define GEODE_CONCEPT_CHECK_animateInGroundNew
		GEODE_CONCEPT_FUNCTION_CHECK(animateInGroundNew) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_animateOutGroundNew
		#define GEODE_CONCEPT_CHECK_animateOutGroundNew
		GEODE_CONCEPT_FUNCTION_CHECK(animateOutGroundNew) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_animatePortalY
		#define GEODE_CONCEPT_CHECK_animatePortalY
		GEODE_CONCEPT_FUNCTION_CHECK(animatePortalY) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_applyLevelSettings
		#define GEODE_CONCEPT_CHECK_applyLevelSettings
		GEODE_CONCEPT_FUNCTION_CHECK(applyLevelSettings) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_applyRemap
		#define GEODE_CONCEPT_CHECK_applyRemap
		GEODE_CONCEPT_FUNCTION_CHECK(applyRemap) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_applySFXEditTrigger
		#define GEODE_CONCEPT_CHECK_applySFXEditTrigger
		GEODE_CONCEPT_FUNCTION_CHECK(applySFXEditTrigger) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_applyShake
		#define GEODE_CONCEPT_CHECK_applyShake
		GEODE_CONCEPT_FUNCTION_CHECK(applyShake) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_assignNewStickyGroups
		#define GEODE_CONCEPT_CHECK_assignNewStickyGroups
		GEODE_CONCEPT_FUNCTION_CHECK(assignNewStickyGroups) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_asyncBGLoaded
		#define GEODE_CONCEPT_CHECK_asyncBGLoaded
		GEODE_CONCEPT_FUNCTION_CHECK(asyncBGLoaded) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_asyncGLoaded
		#define GEODE_CONCEPT_CHECK_asyncGLoaded
		GEODE_CONCEPT_FUNCTION_CHECK(asyncGLoaded) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_asyncMGLoaded
		#define GEODE_CONCEPT_CHECK_asyncMGLoaded
		GEODE_CONCEPT_FUNCTION_CHECK(asyncMGLoaded) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_atlasValue
		#define GEODE_CONCEPT_CHECK_atlasValue
		GEODE_CONCEPT_FUNCTION_CHECK(atlasValue) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_bumpPlayer
		#define GEODE_CONCEPT_CHECK_bumpPlayer
		GEODE_CONCEPT_FUNCTION_CHECK(bumpPlayer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_buttonIDToButton
		#define GEODE_CONCEPT_CHECK_buttonIDToButton
		GEODE_CONCEPT_FUNCTION_CHECK(buttonIDToButton) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_buttonIsRelevant
		#define GEODE_CONCEPT_CHECK_buttonIsRelevant
		GEODE_CONCEPT_FUNCTION_CHECK(buttonIsRelevant) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_calculateColorGroups
		#define GEODE_CONCEPT_CHECK_calculateColorGroups
		GEODE_CONCEPT_FUNCTION_CHECK(calculateColorGroups) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_cameraMoveX
		#define GEODE_CONCEPT_CHECK_cameraMoveX
		GEODE_CONCEPT_FUNCTION_CHECK(cameraMoveX) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_cameraMoveY
		#define GEODE_CONCEPT_CHECK_cameraMoveY
		GEODE_CONCEPT_FUNCTION_CHECK(cameraMoveY) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_canBeActivatedByPlayer
		#define GEODE_CONCEPT_CHECK_canBeActivatedByPlayer
		GEODE_CONCEPT_FUNCTION_CHECK(canBeActivatedByPlayer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_canProcessSFX
		#define GEODE_CONCEPT_CHECK_canProcessSFX
		GEODE_CONCEPT_FUNCTION_CHECK(canProcessSFX) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_canTouchObject
		#define GEODE_CONCEPT_CHECK_canTouchObject
		GEODE_CONCEPT_FUNCTION_CHECK(canTouchObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_checkCameraLimitAfterTeleport
		#define GEODE_CONCEPT_CHECK_checkCameraLimitAfterTeleport
		GEODE_CONCEPT_FUNCTION_CHECK(checkCameraLimitAfterTeleport) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_checkCollision
		#define GEODE_CONCEPT_CHECK_checkCollision
		GEODE_CONCEPT_FUNCTION_CHECK(checkCollision) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_checkCollisionBlocks
		#define GEODE_CONCEPT_CHECK_checkCollisionBlocks
		GEODE_CONCEPT_FUNCTION_CHECK(checkCollisionBlocks) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_checkCollisions
		#define GEODE_CONCEPT_CHECK_checkCollisions
		GEODE_CONCEPT_FUNCTION_CHECK(checkCollisions) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_checkRepellPlayer
		#define GEODE_CONCEPT_CHECK_checkRepellPlayer
		GEODE_CONCEPT_FUNCTION_CHECK(checkRepellPlayer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_checkSpawnObjects
		#define GEODE_CONCEPT_CHECK_checkSpawnObjects
		GEODE_CONCEPT_FUNCTION_CHECK(checkSpawnObjects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_claimMoveAction
		#define GEODE_CONCEPT_CHECK_claimMoveAction
		GEODE_CONCEPT_FUNCTION_CHECK(claimMoveAction) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_claimParticle
		#define GEODE_CONCEPT_CHECK_claimParticle
		GEODE_CONCEPT_FUNCTION_CHECK(claimParticle) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_claimRotationAction
		#define GEODE_CONCEPT_CHECK_claimRotationAction
		GEODE_CONCEPT_FUNCTION_CHECK(claimRotationAction) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_clearActivatedAudioTriggers
		#define GEODE_CONCEPT_CHECK_clearActivatedAudioTriggers
		GEODE_CONCEPT_FUNCTION_CHECK(clearActivatedAudioTriggers) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_clearHitboxTrail
		#define GEODE_CONCEPT_CHECK_clearHitboxTrail
		GEODE_CONCEPT_FUNCTION_CHECK(clearHitboxTrail) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_clearPickedUpItems
		#define GEODE_CONCEPT_CHECK_clearPickedUpItems
		GEODE_CONCEPT_FUNCTION_CHECK(clearPickedUpItems) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_collectedObject
		#define GEODE_CONCEPT_CHECK_collectedObject
		GEODE_CONCEPT_FUNCTION_CHECK(collectedObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_collisionCheckObjects
		#define GEODE_CONCEPT_CHECK_collisionCheckObjects
		GEODE_CONCEPT_FUNCTION_CHECK(collisionCheckObjects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_controlAdvancedFollowCommand
		#define GEODE_CONCEPT_CHECK_controlAdvancedFollowCommand
		GEODE_CONCEPT_FUNCTION_CHECK(controlAdvancedFollowCommand) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_controlAreaEffect
		#define GEODE_CONCEPT_CHECK_controlAreaEffect
		GEODE_CONCEPT_FUNCTION_CHECK(controlAreaEffect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_controlAreaEffectWithID
		#define GEODE_CONCEPT_CHECK_controlAreaEffectWithID
		GEODE_CONCEPT_FUNCTION_CHECK(controlAreaEffectWithID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_controlDynamicCommand
		#define GEODE_CONCEPT_CHECK_controlDynamicCommand
		GEODE_CONCEPT_FUNCTION_CHECK(controlDynamicCommand) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_controlDynamicMoveCommand
		#define GEODE_CONCEPT_CHECK_controlDynamicMoveCommand
		GEODE_CONCEPT_FUNCTION_CHECK(controlDynamicMoveCommand) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_controlDynamicRotateCommand
		#define GEODE_CONCEPT_CHECK_controlDynamicRotateCommand
		GEODE_CONCEPT_FUNCTION_CHECK(controlDynamicRotateCommand) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_controlEventLink
		#define GEODE_CONCEPT_CHECK_controlEventLink
		GEODE_CONCEPT_FUNCTION_CHECK(controlEventLink) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_controlGradientTrigger
		#define GEODE_CONCEPT_CHECK_controlGradientTrigger
		GEODE_CONCEPT_FUNCTION_CHECK(controlGradientTrigger) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_controlTriggersInGroup
		#define GEODE_CONCEPT_CHECK_controlTriggersInGroup
		GEODE_CONCEPT_FUNCTION_CHECK(controlTriggersInGroup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_controlTriggersWithControlID
		#define GEODE_CONCEPT_CHECK_controlTriggersWithControlID
		GEODE_CONCEPT_FUNCTION_CHECK(controlTriggersWithControlID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_countCollectedUserCoins
		#define GEODE_CONCEPT_CHECK_countCollectedUserCoins
		GEODE_CONCEPT_FUNCTION_CHECK(countCollectedUserCoins) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createBackground
		#define GEODE_CONCEPT_CHECK_createBackground
		GEODE_CONCEPT_FUNCTION_CHECK(createBackground) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createGroundLayer
		#define GEODE_CONCEPT_CHECK_createGroundLayer
		GEODE_CONCEPT_FUNCTION_CHECK(createGroundLayer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createLiveStartPosObject
		#define GEODE_CONCEPT_CHECK_createLiveStartPosObject
		GEODE_CONCEPT_FUNCTION_CHECK(createLiveStartPosObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createMiddleground
		#define GEODE_CONCEPT_CHECK_createMiddleground
		GEODE_CONCEPT_FUNCTION_CHECK(createMiddleground) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createNewKeyframeAnim
		#define GEODE_CONCEPT_CHECK_createNewKeyframeAnim
		GEODE_CONCEPT_FUNCTION_CHECK(createNewKeyframeAnim) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createParticle
		#define GEODE_CONCEPT_CHECK_createParticle
		GEODE_CONCEPT_FUNCTION_CHECK(createParticle) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createPlayer
		#define GEODE_CONCEPT_CHECK_createPlayer
		GEODE_CONCEPT_FUNCTION_CHECK(createPlayer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createPlayerCollisionBlock
		#define GEODE_CONCEPT_CHECK_createPlayerCollisionBlock
		GEODE_CONCEPT_FUNCTION_CHECK(createPlayerCollisionBlock) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createTextLayers
		#define GEODE_CONCEPT_CHECK_createTextLayers
		GEODE_CONCEPT_FUNCTION_CHECK(createTextLayers) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_damagingObjectsInRect
		#define GEODE_CONCEPT_CHECK_damagingObjectsInRect
		GEODE_CONCEPT_FUNCTION_CHECK(damagingObjectsInRect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_destroyObject
		#define GEODE_CONCEPT_CHECK_destroyObject
		GEODE_CONCEPT_FUNCTION_CHECK(destroyObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_didPickupItem
		#define GEODE_CONCEPT_CHECK_didPickupItem
		GEODE_CONCEPT_FUNCTION_CHECK(didPickupItem) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_drawHitboxTrail
		#define GEODE_CONCEPT_CHECK_drawHitboxTrail
		GEODE_CONCEPT_FUNCTION_CHECK(drawHitboxTrail) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_enterDualMode
		#define GEODE_CONCEPT_CHECK_enterDualMode
		GEODE_CONCEPT_FUNCTION_CHECK(enterDualMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_exitStaticCamera
		#define GEODE_CONCEPT_CHECK_exitStaticCamera
		GEODE_CONCEPT_FUNCTION_CHECK(exitStaticCamera) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_findStartPosWinnerInArray
		#define GEODE_CONCEPT_CHECK_findStartPosWinnerInArray
		GEODE_CONCEPT_FUNCTION_CHECK(findStartPosWinnerInArray) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_flipFinished
		#define GEODE_CONCEPT_CHECK_flipFinished
		GEODE_CONCEPT_FUNCTION_CHECK(flipFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_flipGravity
		#define GEODE_CONCEPT_CHECK_flipGravity
		GEODE_CONCEPT_FUNCTION_CHECK(flipGravity) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_flipObjects
		#define GEODE_CONCEPT_CHECK_flipObjects
		GEODE_CONCEPT_FUNCTION_CHECK(flipObjects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_gameEventTriggered
		#define GEODE_CONCEPT_CHECK_gameEventTriggered
		GEODE_CONCEPT_FUNCTION_CHECK(gameEventTriggered) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_generateEnterEasingBuffer
		#define GEODE_CONCEPT_CHECK_generateEnterEasingBuffer
		GEODE_CONCEPT_FUNCTION_CHECK(generateEnterEasingBuffer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_generateEnterEasingBuffers
		#define GEODE_CONCEPT_CHECK_generateEnterEasingBuffers
		GEODE_CONCEPT_FUNCTION_CHECK(generateEnterEasingBuffers) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_generatePickupAnimRandVal
		#define GEODE_CONCEPT_CHECK_generatePickupAnimRandVal
		GEODE_CONCEPT_FUNCTION_CHECK(generatePickupAnimRandVal) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_generateSpawnRemap
		#define GEODE_CONCEPT_CHECK_generateSpawnRemap
		GEODE_CONCEPT_FUNCTION_CHECK(generateSpawnRemap) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_generateTargetGroups
		#define GEODE_CONCEPT_CHECK_generateTargetGroups
		GEODE_CONCEPT_FUNCTION_CHECK(generateTargetGroups) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_generateVisibilityGroups
		#define GEODE_CONCEPT_CHECK_generateVisibilityGroups
		GEODE_CONCEPT_FUNCTION_CHECK(generateVisibilityGroups) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getActiveOrderSpawnObjects
		#define GEODE_CONCEPT_CHECK_getActiveOrderSpawnObjects
		GEODE_CONCEPT_FUNCTION_CHECK(getActiveOrderSpawnObjects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getAreaObjectValue
		#define GEODE_CONCEPT_CHECK_getAreaObjectValue
		GEODE_CONCEPT_FUNCTION_CHECK(getAreaObjectValue) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getBumpMod
		#define GEODE_CONCEPT_CHECK_getBumpMod
		GEODE_CONCEPT_FUNCTION_CHECK(getBumpMod) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getCameraEdgeValue
		#define GEODE_CONCEPT_CHECK_getCameraEdgeValue
		GEODE_CONCEPT_FUNCTION_CHECK(getCameraEdgeValue) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getCapacityString
		#define GEODE_CONCEPT_CHECK_getCapacityString
		GEODE_CONCEPT_FUNCTION_CHECK(getCapacityString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getCenterGroupObject
		#define GEODE_CONCEPT_CHECK_getCenterGroupObject
		GEODE_CONCEPT_FUNCTION_CHECK(getCenterGroupObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getCustomEnterEffects
		#define GEODE_CONCEPT_CHECK_getCustomEnterEffects
		GEODE_CONCEPT_FUNCTION_CHECK(getCustomEnterEffects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getEasedAreaValue
		#define GEODE_CONCEPT_CHECK_getEasedAreaValue
		GEODE_CONCEPT_FUNCTION_CHECK(getEasedAreaValue) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getEnterEasingKey
		#define GEODE_CONCEPT_CHECK_getEnterEasingKey
		GEODE_CONCEPT_FUNCTION_CHECK(getEnterEasingKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getEnterEasingValue
		#define GEODE_CONCEPT_CHECK_getEnterEasingValue
		GEODE_CONCEPT_FUNCTION_CHECK(getEnterEasingValue) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getFollowSpeedVal
		#define GEODE_CONCEPT_CHECK_getFollowSpeedVal
		GEODE_CONCEPT_FUNCTION_CHECK(getFollowSpeedVal) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getGroundHeight
		#define GEODE_CONCEPT_CHECK_getGroundHeight
		GEODE_CONCEPT_FUNCTION_CHECK(getGroundHeight) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getGroundHeightForMode
		#define GEODE_CONCEPT_CHECK_getGroundHeightForMode
		GEODE_CONCEPT_FUNCTION_CHECK(getGroundHeightForMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getGroup
		#define GEODE_CONCEPT_CHECK_getGroup
		GEODE_CONCEPT_FUNCTION_CHECK(getGroup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getGroupParent
		#define GEODE_CONCEPT_CHECK_getGroupParent
		GEODE_CONCEPT_FUNCTION_CHECK(getGroupParent) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getGroupParentsString
		#define GEODE_CONCEPT_CHECK_getGroupParentsString
		GEODE_CONCEPT_FUNCTION_CHECK(getGroupParentsString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getItemValue
		#define GEODE_CONCEPT_CHECK_getItemValue
		GEODE_CONCEPT_FUNCTION_CHECK(getItemValue) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getMaxPortalY
		#define GEODE_CONCEPT_CHECK_getMaxPortalY
		GEODE_CONCEPT_FUNCTION_CHECK(getMaxPortalY) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getMinDistance
		#define GEODE_CONCEPT_CHECK_getMinDistance
		GEODE_CONCEPT_FUNCTION_CHECK(getMinDistance) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getMinPortalY
		#define GEODE_CONCEPT_CHECK_getMinPortalY
		GEODE_CONCEPT_FUNCTION_CHECK(getMinPortalY) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getModifiedDelta
		#define GEODE_CONCEPT_CHECK_getModifiedDelta
		GEODE_CONCEPT_FUNCTION_CHECK(getModifiedDelta) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getMoveTargetDelta
		#define GEODE_CONCEPT_CHECK_getMoveTargetDelta
		GEODE_CONCEPT_FUNCTION_CHECK(getMoveTargetDelta) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getOptimizedGroup
		#define GEODE_CONCEPT_CHECK_getOptimizedGroup
		GEODE_CONCEPT_FUNCTION_CHECK(getOptimizedGroup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getOtherPlayer
		#define GEODE_CONCEPT_CHECK_getOtherPlayer
		GEODE_CONCEPT_FUNCTION_CHECK(getOtherPlayer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getParticleKey
		#define GEODE_CONCEPT_CHECK_getParticleKey
		GEODE_CONCEPT_FUNCTION_CHECK(getParticleKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getParticleKey2
		#define GEODE_CONCEPT_CHECK_getParticleKey2
		GEODE_CONCEPT_FUNCTION_CHECK(getParticleKey2) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getPlayerButtonID
		#define GEODE_CONCEPT_CHECK_getPlayerButtonID
		GEODE_CONCEPT_FUNCTION_CHECK(getPlayerButtonID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getPlayTimerFullSeconds
		#define GEODE_CONCEPT_CHECK_getPlayTimerFullSeconds
		GEODE_CONCEPT_FUNCTION_CHECK(getPlayTimerFullSeconds) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getPlayTimerMilli
		#define GEODE_CONCEPT_CHECK_getPlayTimerMilli
		GEODE_CONCEPT_FUNCTION_CHECK(getPlayTimerMilli) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getPortalTarget
		#define GEODE_CONCEPT_CHECK_getPortalTarget
		GEODE_CONCEPT_FUNCTION_CHECK(getPortalTarget) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getPortalTargetPos
		#define GEODE_CONCEPT_CHECK_getPortalTargetPos
		GEODE_CONCEPT_FUNCTION_CHECK(getPortalTargetPos) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getRecordExtra
		#define GEODE_CONCEPT_CHECK_getRecordExtra
		GEODE_CONCEPT_FUNCTION_CHECK(getRecordExtra) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getRecordString
		#define GEODE_CONCEPT_CHECK_getRecordString
		GEODE_CONCEPT_FUNCTION_CHECK(getRecordString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getRotateCommandTargets
		#define GEODE_CONCEPT_CHECK_getRotateCommandTargets
		GEODE_CONCEPT_FUNCTION_CHECK(getRotateCommandTargets) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSavedPosition
		#define GEODE_CONCEPT_CHECK_getSavedPosition
		GEODE_CONCEPT_FUNCTION_CHECK(getSavedPosition) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getScaledGroundHeight
		#define GEODE_CONCEPT_CHECK_getScaledGroundHeight
		GEODE_CONCEPT_FUNCTION_CHECK(getScaledGroundHeight) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSingleGroupObject
		#define GEODE_CONCEPT_CHECK_getSingleGroupObject
		GEODE_CONCEPT_FUNCTION_CHECK(getSingleGroupObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSpecialKey
		#define GEODE_CONCEPT_CHECK_getSpecialKey
		GEODE_CONCEPT_FUNCTION_CHECK(getSpecialKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getStartPosObjectsForCurrentMode
		#define GEODE_CONCEPT_CHECK_getStartPosObjectsForCurrentMode
		GEODE_CONCEPT_FUNCTION_CHECK(getStartPosObjectsForCurrentMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getStaticGroup
		#define GEODE_CONCEPT_CHECK_getStaticGroup
		GEODE_CONCEPT_FUNCTION_CHECK(getStaticGroup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getStickyGroup
		#define GEODE_CONCEPT_CHECK_getStickyGroup
		GEODE_CONCEPT_FUNCTION_CHECK(getStickyGroup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getTargetFlyCameraY
		#define GEODE_CONCEPT_CHECK_getTargetFlyCameraY
		GEODE_CONCEPT_FUNCTION_CHECK(getTargetFlyCameraY) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getTargetGroup
		#define GEODE_CONCEPT_CHECK_getTargetGroup
		GEODE_CONCEPT_FUNCTION_CHECK(getTargetGroup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getTargetGroupOrigin
		#define GEODE_CONCEPT_CHECK_getTargetGroupOrigin
		GEODE_CONCEPT_FUNCTION_CHECK(getTargetGroupOrigin) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_gravBumpPlayer
		#define GEODE_CONCEPT_CHECK_gravBumpPlayer
		GEODE_CONCEPT_FUNCTION_CHECK(gravBumpPlayer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_groupStickyObjects
		#define GEODE_CONCEPT_CHECK_groupStickyObjects
		GEODE_CONCEPT_FUNCTION_CHECK(groupStickyObjects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_handleButton
		#define GEODE_CONCEPT_CHECK_handleButton
		GEODE_CONCEPT_FUNCTION_CHECK(handleButton) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_hasItem
		#define GEODE_CONCEPT_CHECK_hasItem
		GEODE_CONCEPT_FUNCTION_CHECK(hasItem) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_hasUniqueCoin
		#define GEODE_CONCEPT_CHECK_hasUniqueCoin
		GEODE_CONCEPT_FUNCTION_CHECK(hasUniqueCoin) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_increaseBatchNodeCapacity
		#define GEODE_CONCEPT_CHECK_increaseBatchNodeCapacity
		GEODE_CONCEPT_FUNCTION_CHECK(increaseBatchNodeCapacity) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isFlipping
		#define GEODE_CONCEPT_CHECK_isFlipping
		GEODE_CONCEPT_FUNCTION_CHECK(isFlipping) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isGroupParentOf
		#define GEODE_CONCEPT_CHECK_isGroupParentOf
		GEODE_CONCEPT_FUNCTION_CHECK(isGroupParentOf) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isPlayer2Button
		#define GEODE_CONCEPT_CHECK_isPlayer2Button
		GEODE_CONCEPT_FUNCTION_CHECK(isPlayer2Button) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_lightningFlash
		#define GEODE_CONCEPT_CHECK_lightningFlash
		GEODE_CONCEPT_FUNCTION_CHECK(lightningFlash) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadGroupParentsFromString
		#define GEODE_CONCEPT_CHECK_loadGroupParentsFromString
		GEODE_CONCEPT_FUNCTION_CHECK(loadGroupParentsFromString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadLevelSettings
		#define GEODE_CONCEPT_CHECK_loadLevelSettings
		GEODE_CONCEPT_FUNCTION_CHECK(loadLevelSettings) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadStartPosObject
		#define GEODE_CONCEPT_CHECK_loadStartPosObject
		GEODE_CONCEPT_FUNCTION_CHECK(loadStartPosObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadUpToPosition
		#define GEODE_CONCEPT_CHECK_loadUpToPosition
		GEODE_CONCEPT_FUNCTION_CHECK(loadUpToPosition) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_lockExistingFirstParents
		#define GEODE_CONCEPT_CHECK_lockExistingFirstParents
		GEODE_CONCEPT_FUNCTION_CHECK(lockExistingFirstParents) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_logPickupItem
		#define GEODE_CONCEPT_CHECK_logPickupItem
		GEODE_CONCEPT_FUNCTION_CHECK(logPickupItem) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_maxZOrderForShaderZ
		#define GEODE_CONCEPT_CHECK_maxZOrderForShaderZ
		GEODE_CONCEPT_FUNCTION_CHECK(maxZOrderForShaderZ) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_minZOrderForShaderZ
		#define GEODE_CONCEPT_CHECK_minZOrderForShaderZ
		GEODE_CONCEPT_FUNCTION_CHECK(minZOrderForShaderZ) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_modifyGroupPhysics
		#define GEODE_CONCEPT_CHECK_modifyGroupPhysics
		GEODE_CONCEPT_FUNCTION_CHECK(modifyGroupPhysics) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_modifyObjectPhysics
		#define GEODE_CONCEPT_CHECK_modifyObjectPhysics
		GEODE_CONCEPT_FUNCTION_CHECK(modifyObjectPhysics) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_moveAreaObject
		#define GEODE_CONCEPT_CHECK_moveAreaObject
		GEODE_CONCEPT_FUNCTION_CHECK(moveAreaObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_moveCameraToPos
		#define GEODE_CONCEPT_CHECK_moveCameraToPos
		GEODE_CONCEPT_FUNCTION_CHECK(moveCameraToPos) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_moveObject
		#define GEODE_CONCEPT_CHECK_moveObject
		GEODE_CONCEPT_FUNCTION_CHECK(moveObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_moveObjects
		#define GEODE_CONCEPT_CHECK_moveObjects
		GEODE_CONCEPT_FUNCTION_CHECK(moveObjects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_moveObjectsSilent
		#define GEODE_CONCEPT_CHECK_moveObjectsSilent
		GEODE_CONCEPT_FUNCTION_CHECK(moveObjectsSilent) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_moveObjectToStaticGroup
		#define GEODE_CONCEPT_CHECK_moveObjectToStaticGroup
		GEODE_CONCEPT_FUNCTION_CHECK(moveObjectToStaticGroup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_objectForUniqueID
		#define GEODE_CONCEPT_CHECK_objectForUniqueID
		GEODE_CONCEPT_FUNCTION_CHECK(objectForUniqueID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_objectIntersectsCircle
		#define GEODE_CONCEPT_CHECK_objectIntersectsCircle
		GEODE_CONCEPT_FUNCTION_CHECK(objectIntersectsCircle) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_objectTypeToGameEvent
		#define GEODE_CONCEPT_CHECK_objectTypeToGameEvent
		GEODE_CONCEPT_FUNCTION_CHECK(objectTypeToGameEvent) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_optimizeMoveGroups
		#define GEODE_CONCEPT_CHECK_optimizeMoveGroups
		GEODE_CONCEPT_FUNCTION_CHECK(optimizeMoveGroups) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_orderSpawnObjects
		#define GEODE_CONCEPT_CHECK_orderSpawnObjects
		GEODE_CONCEPT_FUNCTION_CHECK(orderSpawnObjects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_parentForZLayer
		#define GEODE_CONCEPT_CHECK_parentForZLayer
		GEODE_CONCEPT_FUNCTION_CHECK(parentForZLayer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_parseRecording
		#define GEODE_CONCEPT_CHECK_parseRecording
		GEODE_CONCEPT_FUNCTION_CHECK(parseRecording) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_pauseAudio
		#define GEODE_CONCEPT_CHECK_pauseAudio
		GEODE_CONCEPT_FUNCTION_CHECK(pauseAudio) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_performMathOperation
		#define GEODE_CONCEPT_CHECK_performMathOperation
		GEODE_CONCEPT_FUNCTION_CHECK(performMathOperation) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_performMathRounding
		#define GEODE_CONCEPT_CHECK_performMathRounding
		GEODE_CONCEPT_FUNCTION_CHECK(performMathRounding) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_pickupItem
		#define GEODE_CONCEPT_CHECK_pickupItem
		GEODE_CONCEPT_FUNCTION_CHECK(pickupItem) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_playAnimationCommand
		#define GEODE_CONCEPT_CHECK_playAnimationCommand
		GEODE_CONCEPT_FUNCTION_CHECK(playAnimationCommand) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_playerCircleCollision
		#define GEODE_CONCEPT_CHECK_playerCircleCollision
		GEODE_CONCEPT_FUNCTION_CHECK(playerCircleCollision) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_playerIntersectsCircle
		#define GEODE_CONCEPT_CHECK_playerIntersectsCircle
		GEODE_CONCEPT_FUNCTION_CHECK(playerIntersectsCircle) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_playerTouchedObject
		#define GEODE_CONCEPT_CHECK_playerTouchedObject
		GEODE_CONCEPT_FUNCTION_CHECK(playerTouchedObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_playerTouchedRing
		#define GEODE_CONCEPT_CHECK_playerTouchedRing
		GEODE_CONCEPT_FUNCTION_CHECK(playerTouchedRing) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_playerTouchedTrigger
		#define GEODE_CONCEPT_CHECK_playerTouchedTrigger
		GEODE_CONCEPT_FUNCTION_CHECK(playerTouchedTrigger) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_playerWasTouchingObject
		#define GEODE_CONCEPT_CHECK_playerWasTouchingObject
		GEODE_CONCEPT_FUNCTION_CHECK(playerWasTouchingObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_playerWillSwitchMode
		#define GEODE_CONCEPT_CHECK_playerWillSwitchMode
		GEODE_CONCEPT_FUNCTION_CHECK(playerWillSwitchMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_playExitDualEffect
		#define GEODE_CONCEPT_CHECK_playExitDualEffect
		GEODE_CONCEPT_FUNCTION_CHECK(playExitDualEffect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_playFlashEffect
		#define GEODE_CONCEPT_CHECK_playFlashEffect
		GEODE_CONCEPT_FUNCTION_CHECK(playFlashEffect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_playKeyframeAnimation
		#define GEODE_CONCEPT_CHECK_playKeyframeAnimation
		GEODE_CONCEPT_FUNCTION_CHECK(playKeyframeAnimation) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_playSpeedParticle
		#define GEODE_CONCEPT_CHECK_playSpeedParticle
		GEODE_CONCEPT_FUNCTION_CHECK(playSpeedParticle) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_positionForShaderTarget
		#define GEODE_CONCEPT_CHECK_positionForShaderTarget
		GEODE_CONCEPT_FUNCTION_CHECK(positionForShaderTarget) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_positionUIObjects
		#define GEODE_CONCEPT_CHECK_positionUIObjects
		GEODE_CONCEPT_FUNCTION_CHECK(positionUIObjects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_prepareSavePositionObjects
		#define GEODE_CONCEPT_CHECK_prepareSavePositionObjects
		GEODE_CONCEPT_FUNCTION_CHECK(prepareSavePositionObjects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_prepareTransformParent
		#define GEODE_CONCEPT_CHECK_prepareTransformParent
		GEODE_CONCEPT_FUNCTION_CHECK(prepareTransformParent) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_preResumeGame
		#define GEODE_CONCEPT_CHECK_preResumeGame
		GEODE_CONCEPT_FUNCTION_CHECK(preResumeGame) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_preUpdateVisibility
		#define GEODE_CONCEPT_CHECK_preUpdateVisibility
		GEODE_CONCEPT_FUNCTION_CHECK(preUpdateVisibility) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_processActivatedAudioTriggers
		#define GEODE_CONCEPT_CHECK_processActivatedAudioTriggers
		GEODE_CONCEPT_FUNCTION_CHECK(processActivatedAudioTriggers) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_processAdvancedFollowAction
		#define GEODE_CONCEPT_CHECK_processAdvancedFollowAction
		GEODE_CONCEPT_FUNCTION_CHECK(processAdvancedFollowAction) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_processAdvancedFollowActions
		#define GEODE_CONCEPT_CHECK_processAdvancedFollowActions
		GEODE_CONCEPT_FUNCTION_CHECK(processAdvancedFollowActions) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_processAreaActions
		#define GEODE_CONCEPT_CHECK_processAreaActions
		GEODE_CONCEPT_FUNCTION_CHECK(processAreaActions) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_processAreaEffects
		#define GEODE_CONCEPT_CHECK_processAreaEffects
		GEODE_CONCEPT_FUNCTION_CHECK(processAreaEffects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_processAreaFadeGroupAction
		#define GEODE_CONCEPT_CHECK_processAreaFadeGroupAction
		GEODE_CONCEPT_FUNCTION_CHECK(processAreaFadeGroupAction) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_processAreaMoveGroupAction
		#define GEODE_CONCEPT_CHECK_processAreaMoveGroupAction
		GEODE_CONCEPT_FUNCTION_CHECK(processAreaMoveGroupAction) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_processAreaRotateGroupAction
		#define GEODE_CONCEPT_CHECK_processAreaRotateGroupAction
		GEODE_CONCEPT_FUNCTION_CHECK(processAreaRotateGroupAction) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_processAreaTintGroupAction
		#define GEODE_CONCEPT_CHECK_processAreaTintGroupAction
		GEODE_CONCEPT_FUNCTION_CHECK(processAreaTintGroupAction) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_processAreaTransformGroupAction
		#define GEODE_CONCEPT_CHECK_processAreaTransformGroupAction
		GEODE_CONCEPT_FUNCTION_CHECK(processAreaTransformGroupAction) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_processAreaVisualActions
		#define GEODE_CONCEPT_CHECK_processAreaVisualActions
		GEODE_CONCEPT_FUNCTION_CHECK(processAreaVisualActions) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_processCameraObject
		#define GEODE_CONCEPT_CHECK_processCameraObject
		GEODE_CONCEPT_FUNCTION_CHECK(processCameraObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_processCommands
		#define GEODE_CONCEPT_CHECK_processCommands
		GEODE_CONCEPT_FUNCTION_CHECK(processCommands) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_processDynamicObjectActions
		#define GEODE_CONCEPT_CHECK_processDynamicObjectActions
		GEODE_CONCEPT_FUNCTION_CHECK(processDynamicObjectActions) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_processFollowActions
		#define GEODE_CONCEPT_CHECK_processFollowActions
		GEODE_CONCEPT_FUNCTION_CHECK(processFollowActions) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_processItems
		#define GEODE_CONCEPT_CHECK_processItems
		GEODE_CONCEPT_FUNCTION_CHECK(processItems) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_processMoveActions
		#define GEODE_CONCEPT_CHECK_processMoveActions
		GEODE_CONCEPT_FUNCTION_CHECK(processMoveActions) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_processMoveActionsStep
		#define GEODE_CONCEPT_CHECK_processMoveActionsStep
		GEODE_CONCEPT_FUNCTION_CHECK(processMoveActionsStep) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_processOptionsTrigger
		#define GEODE_CONCEPT_CHECK_processOptionsTrigger
		GEODE_CONCEPT_FUNCTION_CHECK(processOptionsTrigger) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_processPlayerFollowActions
		#define GEODE_CONCEPT_CHECK_processPlayerFollowActions
		GEODE_CONCEPT_FUNCTION_CHECK(processPlayerFollowActions) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_processQueuedAudioTriggers
		#define GEODE_CONCEPT_CHECK_processQueuedAudioTriggers
		GEODE_CONCEPT_FUNCTION_CHECK(processQueuedAudioTriggers) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_processQueuedButtons
		#define GEODE_CONCEPT_CHECK_processQueuedButtons
		GEODE_CONCEPT_FUNCTION_CHECK(processQueuedButtons) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_processReplayCheckpoint
		#define GEODE_CONCEPT_CHECK_processReplayCheckpoint
		GEODE_CONCEPT_FUNCTION_CHECK(processReplayCheckpoint) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_processRotationActions
		#define GEODE_CONCEPT_CHECK_processRotationActions
		GEODE_CONCEPT_FUNCTION_CHECK(processRotationActions) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_processSFXObjects
		#define GEODE_CONCEPT_CHECK_processSFXObjects
		GEODE_CONCEPT_FUNCTION_CHECK(processSFXObjects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_processSFXState
		#define GEODE_CONCEPT_CHECK_processSFXState
		GEODE_CONCEPT_FUNCTION_CHECK(processSFXState) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_processSongState
		#define GEODE_CONCEPT_CHECK_processSongState
		GEODE_CONCEPT_FUNCTION_CHECK(processSongState) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_processStartPosObjects
		#define GEODE_CONCEPT_CHECK_processStartPosObjects
		GEODE_CONCEPT_FUNCTION_CHECK(processStartPosObjects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_processStateObjects
		#define GEODE_CONCEPT_CHECK_processStateObjects
		GEODE_CONCEPT_FUNCTION_CHECK(processStateObjects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_processTransformActions
		#define GEODE_CONCEPT_CHECK_processTransformActions
		GEODE_CONCEPT_FUNCTION_CHECK(processTransformActions) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_promoteGroupParent
		#define GEODE_CONCEPT_CHECK_promoteGroupParent
		GEODE_CONCEPT_FUNCTION_CHECK(promoteGroupParent) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_queueButton
		#define GEODE_CONCEPT_CHECK_queueButton
		GEODE_CONCEPT_FUNCTION_CHECK(queueButton) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_queueTimeWarp
		#define GEODE_CONCEPT_CHECK_queueTimeWarp
		GEODE_CONCEPT_FUNCTION_CHECK(queueTimeWarp) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_reAddToStickyGroup
		#define GEODE_CONCEPT_CHECK_reAddToStickyGroup
		GEODE_CONCEPT_FUNCTION_CHECK(reAddToStickyGroup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_recordAction
		#define GEODE_CONCEPT_CHECK_recordAction
		GEODE_CONCEPT_FUNCTION_CHECK(recordAction) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_recordHitboxTrail
		#define GEODE_CONCEPT_CHECK_recordHitboxTrail
		GEODE_CONCEPT_FUNCTION_CHECK(recordHitboxTrail) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_recordHitboxTrailState
		#define GEODE_CONCEPT_CHECK_recordHitboxTrailState
		GEODE_CONCEPT_FUNCTION_CHECK(recordHitboxTrailState) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_rectIntersectsCircle
		#define GEODE_CONCEPT_CHECK_rectIntersectsCircle
		GEODE_CONCEPT_FUNCTION_CHECK(rectIntersectsCircle) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_refreshCounterLabels
		#define GEODE_CONCEPT_CHECK_refreshCounterLabels
		GEODE_CONCEPT_FUNCTION_CHECK(refreshCounterLabels) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_refreshKeyframeAnims
		#define GEODE_CONCEPT_CHECK_refreshKeyframeAnims
		GEODE_CONCEPT_FUNCTION_CHECK(refreshKeyframeAnims) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_regenerateEnterEasingBuffers
		#define GEODE_CONCEPT_CHECK_regenerateEnterEasingBuffers
		GEODE_CONCEPT_FUNCTION_CHECK(regenerateEnterEasingBuffers) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_registerSpawnRemap
		#define GEODE_CONCEPT_CHECK_registerSpawnRemap
		GEODE_CONCEPT_FUNCTION_CHECK(registerSpawnRemap) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_registerStateObject
		#define GEODE_CONCEPT_CHECK_registerStateObject
		GEODE_CONCEPT_FUNCTION_CHECK(registerStateObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_remapGroupParent
		#define GEODE_CONCEPT_CHECK_remapGroupParent
		GEODE_CONCEPT_FUNCTION_CHECK(remapGroupParent) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeBackground
		#define GEODE_CONCEPT_CHECK_removeBackground
		GEODE_CONCEPT_FUNCTION_CHECK(removeBackground) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeCustomEnterEffects
		#define GEODE_CONCEPT_CHECK_removeCustomEnterEffects
		GEODE_CONCEPT_FUNCTION_CHECK(removeCustomEnterEffects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeFromGroupParents
		#define GEODE_CONCEPT_CHECK_removeFromGroupParents
		GEODE_CONCEPT_FUNCTION_CHECK(removeFromGroupParents) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeFromGroups
		#define GEODE_CONCEPT_CHECK_removeFromGroups
		GEODE_CONCEPT_FUNCTION_CHECK(removeFromGroups) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeFromStickyGroup
		#define GEODE_CONCEPT_CHECK_removeFromStickyGroup
		GEODE_CONCEPT_FUNCTION_CHECK(removeFromStickyGroup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeGroundLayer
		#define GEODE_CONCEPT_CHECK_removeGroundLayer
		GEODE_CONCEPT_FUNCTION_CHECK(removeGroundLayer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeGroupParent
		#define GEODE_CONCEPT_CHECK_removeGroupParent
		GEODE_CONCEPT_FUNCTION_CHECK(removeGroupParent) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeKeyframe
		#define GEODE_CONCEPT_CHECK_removeKeyframe
		GEODE_CONCEPT_FUNCTION_CHECK(removeKeyframe) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeMiddleground
		#define GEODE_CONCEPT_CHECK_removeMiddleground
		GEODE_CONCEPT_FUNCTION_CHECK(removeMiddleground) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeObjectFromSection
		#define GEODE_CONCEPT_CHECK_removeObjectFromSection
		GEODE_CONCEPT_FUNCTION_CHECK(removeObjectFromSection) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removePlayer2
		#define GEODE_CONCEPT_CHECK_removePlayer2
		GEODE_CONCEPT_FUNCTION_CHECK(removePlayer2) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeReleasedButtons
		#define GEODE_CONCEPT_CHECK_removeReleasedButtons
		GEODE_CONCEPT_FUNCTION_CHECK(removeReleasedButtons) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeTemporaryParticles
		#define GEODE_CONCEPT_CHECK_removeTemporaryParticles
		GEODE_CONCEPT_FUNCTION_CHECK(removeTemporaryParticles) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_reorderObjectSection
		#define GEODE_CONCEPT_CHECK_reorderObjectSection
		GEODE_CONCEPT_FUNCTION_CHECK(reorderObjectSection) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_reparentObject
		#define GEODE_CONCEPT_CHECK_reparentObject
		GEODE_CONCEPT_FUNCTION_CHECK(reparentObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetActiveEnterEffects
		#define GEODE_CONCEPT_CHECK_resetActiveEnterEffects
		GEODE_CONCEPT_FUNCTION_CHECK(resetActiveEnterEffects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetAreaObjectValues
		#define GEODE_CONCEPT_CHECK_resetAreaObjectValues
		GEODE_CONCEPT_FUNCTION_CHECK(resetAreaObjectValues) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetAudio
		#define GEODE_CONCEPT_CHECK_resetAudio
		GEODE_CONCEPT_FUNCTION_CHECK(resetAudio) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetCamera
		#define GEODE_CONCEPT_CHECK_resetCamera
		GEODE_CONCEPT_FUNCTION_CHECK(resetCamera) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetGradientLayers
		#define GEODE_CONCEPT_CHECK_resetGradientLayers
		GEODE_CONCEPT_FUNCTION_CHECK(resetGradientLayers) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetGroupCounters
		#define GEODE_CONCEPT_CHECK_resetGroupCounters
		GEODE_CONCEPT_FUNCTION_CHECK(resetGroupCounters) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetLevelVariables
		#define GEODE_CONCEPT_CHECK_resetLevelVariables
		GEODE_CONCEPT_FUNCTION_CHECK(resetLevelVariables) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetMoveOptimizedValue
		#define GEODE_CONCEPT_CHECK_resetMoveOptimizedValue
		GEODE_CONCEPT_FUNCTION_CHECK(resetMoveOptimizedValue) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetPlayer
		#define GEODE_CONCEPT_CHECK_resetPlayer
		GEODE_CONCEPT_FUNCTION_CHECK(resetPlayer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetRecord
		#define GEODE_CONCEPT_CHECK_resetRecord
		GEODE_CONCEPT_FUNCTION_CHECK(resetRecord) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetRecordFull
		#define GEODE_CONCEPT_CHECK_resetRecordFull
		GEODE_CONCEPT_FUNCTION_CHECK(resetRecordFull) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetSongTriggerValues
		#define GEODE_CONCEPT_CHECK_resetSongTriggerValues
		GEODE_CONCEPT_FUNCTION_CHECK(resetSongTriggerValues) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetSpawnChannelIndex
		#define GEODE_CONCEPT_CHECK_resetSpawnChannelIndex
		GEODE_CONCEPT_FUNCTION_CHECK(resetSpawnChannelIndex) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetStaticCamera
		#define GEODE_CONCEPT_CHECK_resetStaticCamera
		GEODE_CONCEPT_FUNCTION_CHECK(resetStaticCamera) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetStoppedAreaObjects
		#define GEODE_CONCEPT_CHECK_resetStoppedAreaObjects
		GEODE_CONCEPT_FUNCTION_CHECK(resetStoppedAreaObjects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_restoreAllUIObjects
		#define GEODE_CONCEPT_CHECK_restoreAllUIObjects
		GEODE_CONCEPT_FUNCTION_CHECK(restoreAllUIObjects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_restoreDefaultGameplayOffsetX
		#define GEODE_CONCEPT_CHECK_restoreDefaultGameplayOffsetX
		GEODE_CONCEPT_FUNCTION_CHECK(restoreDefaultGameplayOffsetX) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_restoreDefaultGameplayOffsetY
		#define GEODE_CONCEPT_CHECK_restoreDefaultGameplayOffsetY
		GEODE_CONCEPT_FUNCTION_CHECK(restoreDefaultGameplayOffsetY) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_restoreRecording
		#define GEODE_CONCEPT_CHECK_restoreRecording
		GEODE_CONCEPT_FUNCTION_CHECK(restoreRecording) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_restoreRemap
		#define GEODE_CONCEPT_CHECK_restoreRemap
		GEODE_CONCEPT_FUNCTION_CHECK(restoreRemap) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resumeAudio
		#define GEODE_CONCEPT_CHECK_resumeAudio
		GEODE_CONCEPT_FUNCTION_CHECK(resumeAudio) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_rotateAreaObjects
		#define GEODE_CONCEPT_CHECK_rotateAreaObjects
		GEODE_CONCEPT_FUNCTION_CHECK(rotateAreaObjects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_rotateObject
		#define GEODE_CONCEPT_CHECK_rotateObject
		GEODE_CONCEPT_FUNCTION_CHECK(rotateObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_rotateObjects
		#define GEODE_CONCEPT_CHECK_rotateObjects
		GEODE_CONCEPT_FUNCTION_CHECK(rotateObjects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setActiveStartPosObject
		#define GEODE_CONCEPT_CHECK_setActiveStartPosObject
		GEODE_CONCEPT_FUNCTION_CHECK(setActiveStartPosObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setGroupParent
		#define GEODE_CONCEPT_CHECK_setGroupParent
		GEODE_CONCEPT_FUNCTION_CHECK(setGroupParent) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupLayers
		#define GEODE_CONCEPT_CHECK_setupLayers
		GEODE_CONCEPT_FUNCTION_CHECK(setupLayers) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupLevelStart
		#define GEODE_CONCEPT_CHECK_setupLevelStart
		GEODE_CONCEPT_FUNCTION_CHECK(setupLevelStart) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupReplay
		#define GEODE_CONCEPT_CHECK_setupReplay
		GEODE_CONCEPT_FUNCTION_CHECK(setupReplay) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_shakeCamera
		#define GEODE_CONCEPT_CHECK_shakeCamera
		GEODE_CONCEPT_FUNCTION_CHECK(shakeCamera) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_shouldExitHackedLevel
		#define GEODE_CONCEPT_CHECK_shouldExitHackedLevel
		GEODE_CONCEPT_FUNCTION_CHECK(shouldExitHackedLevel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_shouldUseSubstepForButton
		#define GEODE_CONCEPT_CHECK_shouldUseSubstepForButton
		GEODE_CONCEPT_FUNCTION_CHECK(shouldUseSubstepForButton) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_sortAllGroupsX
		#define GEODE_CONCEPT_CHECK_sortAllGroupsX
		GEODE_CONCEPT_FUNCTION_CHECK(sortAllGroupsX) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_sortGroups
		#define GEODE_CONCEPT_CHECK_sortGroups
		GEODE_CONCEPT_FUNCTION_CHECK(sortGroups) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_sortSectionVector
		#define GEODE_CONCEPT_CHECK_sortSectionVector
		GEODE_CONCEPT_FUNCTION_CHECK(sortSectionVector) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_sortStartPosObjects
		#define GEODE_CONCEPT_CHECK_sortStartPosObjects
		GEODE_CONCEPT_FUNCTION_CHECK(sortStartPosObjects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_sortStickyGroups
		#define GEODE_CONCEPT_CHECK_sortStickyGroups
		GEODE_CONCEPT_FUNCTION_CHECK(sortStickyGroups) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_spawnGroupTriggered
		#define GEODE_CONCEPT_CHECK_spawnGroupTriggered
		GEODE_CONCEPT_FUNCTION_CHECK(spawnGroupTriggered) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_spawnObjectsInOrder
		#define GEODE_CONCEPT_CHECK_spawnObjectsInOrder
		GEODE_CONCEPT_FUNCTION_CHECK(spawnObjectsInOrder) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_spawnParticle
		#define GEODE_CONCEPT_CHECK_spawnParticle
		GEODE_CONCEPT_FUNCTION_CHECK(spawnParticle) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_spawnParticleTrigger
		#define GEODE_CONCEPT_CHECK_spawnParticleTrigger
		GEODE_CONCEPT_FUNCTION_CHECK(spawnParticleTrigger) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_spawnPlayer2
		#define GEODE_CONCEPT_CHECK_spawnPlayer2
		GEODE_CONCEPT_FUNCTION_CHECK(spawnPlayer2) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_speedForShaderTarget
		#define GEODE_CONCEPT_CHECK_speedForShaderTarget
		GEODE_CONCEPT_FUNCTION_CHECK(speedForShaderTarget) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_staticObjectsInRect
		#define GEODE_CONCEPT_CHECK_staticObjectsInRect
		GEODE_CONCEPT_FUNCTION_CHECK(staticObjectsInRect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_stopAllGroundActions
		#define GEODE_CONCEPT_CHECK_stopAllGroundActions
		GEODE_CONCEPT_FUNCTION_CHECK(stopAllGroundActions) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_stopCameraShake
		#define GEODE_CONCEPT_CHECK_stopCameraShake
		GEODE_CONCEPT_FUNCTION_CHECK(stopCameraShake) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_stopCustomEnterEffect
		#define GEODE_CONCEPT_CHECK_stopCustomEnterEffect
		GEODE_CONCEPT_FUNCTION_CHECK(stopCustomEnterEffect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_stopSFXTrigger
		#define GEODE_CONCEPT_CHECK_stopSFXTrigger
		GEODE_CONCEPT_FUNCTION_CHECK(stopSFXTrigger) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_swapBackground
		#define GEODE_CONCEPT_CHECK_swapBackground
		GEODE_CONCEPT_FUNCTION_CHECK(swapBackground) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_swapGround
		#define GEODE_CONCEPT_CHECK_swapGround
		GEODE_CONCEPT_FUNCTION_CHECK(swapGround) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_swapMiddleground
		#define GEODE_CONCEPT_CHECK_swapMiddleground
		GEODE_CONCEPT_FUNCTION_CHECK(swapMiddleground) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_switchToFlyMode
		#define GEODE_CONCEPT_CHECK_switchToFlyMode
		GEODE_CONCEPT_FUNCTION_CHECK(switchToFlyMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_switchToRobotMode
		#define GEODE_CONCEPT_CHECK_switchToRobotMode
		GEODE_CONCEPT_FUNCTION_CHECK(switchToRobotMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_switchToRollMode
		#define GEODE_CONCEPT_CHECK_switchToRollMode
		GEODE_CONCEPT_FUNCTION_CHECK(switchToRollMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_switchToSpiderMode
		#define GEODE_CONCEPT_CHECK_switchToSpiderMode
		GEODE_CONCEPT_FUNCTION_CHECK(switchToSpiderMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_syncBGTextures
		#define GEODE_CONCEPT_CHECK_syncBGTextures
		GEODE_CONCEPT_FUNCTION_CHECK(syncBGTextures) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_teleportPlayer
		#define GEODE_CONCEPT_CHECK_teleportPlayer
		GEODE_CONCEPT_FUNCTION_CHECK(teleportPlayer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_testInstantCountTrigger
		#define GEODE_CONCEPT_CHECK_testInstantCountTrigger
		GEODE_CONCEPT_FUNCTION_CHECK(testInstantCountTrigger) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleAudioVisualizer
		#define GEODE_CONCEPT_CHECK_toggleAudioVisualizer
		GEODE_CONCEPT_FUNCTION_CHECK(toggleAudioVisualizer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleDualMode
		#define GEODE_CONCEPT_CHECK_toggleDualMode
		GEODE_CONCEPT_FUNCTION_CHECK(toggleDualMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleFlipped
		#define GEODE_CONCEPT_CHECK_toggleFlipped
		GEODE_CONCEPT_FUNCTION_CHECK(toggleFlipped) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleGroup
		#define GEODE_CONCEPT_CHECK_toggleGroup
		GEODE_CONCEPT_FUNCTION_CHECK(toggleGroup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleLockPlayer
		#define GEODE_CONCEPT_CHECK_toggleLockPlayer
		GEODE_CONCEPT_FUNCTION_CHECK(toggleLockPlayer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_togglePlayerStreakBlend
		#define GEODE_CONCEPT_CHECK_togglePlayerStreakBlend
		GEODE_CONCEPT_FUNCTION_CHECK(togglePlayerStreakBlend) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_togglePlayerVisibility
		#define GEODE_CONCEPT_CHECK_togglePlayerVisibility
		GEODE_CONCEPT_FUNCTION_CHECK(togglePlayerVisibility) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_transformAreaObjects
		#define GEODE_CONCEPT_CHECK_transformAreaObjects
		GEODE_CONCEPT_FUNCTION_CHECK(transformAreaObjects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_triggerAdvancedFollowCommand
		#define GEODE_CONCEPT_CHECK_triggerAdvancedFollowCommand
		GEODE_CONCEPT_FUNCTION_CHECK(triggerAdvancedFollowCommand) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_triggerAdvancedFollowEditCommand
		#define GEODE_CONCEPT_CHECK_triggerAdvancedFollowEditCommand
		GEODE_CONCEPT_FUNCTION_CHECK(triggerAdvancedFollowEditCommand) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_triggerAreaEffect
		#define GEODE_CONCEPT_CHECK_triggerAreaEffect
		GEODE_CONCEPT_FUNCTION_CHECK(triggerAreaEffect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_triggerAreaEffectAnimation
		#define GEODE_CONCEPT_CHECK_triggerAreaEffectAnimation
		GEODE_CONCEPT_FUNCTION_CHECK(triggerAreaEffectAnimation) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_triggerDynamicMoveCommand
		#define GEODE_CONCEPT_CHECK_triggerDynamicMoveCommand
		GEODE_CONCEPT_FUNCTION_CHECK(triggerDynamicMoveCommand) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_triggerDynamicRotateCommand
		#define GEODE_CONCEPT_CHECK_triggerDynamicRotateCommand
		GEODE_CONCEPT_FUNCTION_CHECK(triggerDynamicRotateCommand) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_triggerGradientCommand
		#define GEODE_CONCEPT_CHECK_triggerGradientCommand
		GEODE_CONCEPT_FUNCTION_CHECK(triggerGradientCommand) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_triggerGravityChange
		#define GEODE_CONCEPT_CHECK_triggerGravityChange
		GEODE_CONCEPT_FUNCTION_CHECK(triggerGravityChange) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_triggerMoveCommand
		#define GEODE_CONCEPT_CHECK_triggerMoveCommand
		GEODE_CONCEPT_FUNCTION_CHECK(triggerMoveCommand) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_triggerRotateCommand
		#define GEODE_CONCEPT_CHECK_triggerRotateCommand
		GEODE_CONCEPT_FUNCTION_CHECK(triggerRotateCommand) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_triggerShaderCommand
		#define GEODE_CONCEPT_CHECK_triggerShaderCommand
		GEODE_CONCEPT_FUNCTION_CHECK(triggerShaderCommand) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_triggerTransformCommand
		#define GEODE_CONCEPT_CHECK_triggerTransformCommand
		GEODE_CONCEPT_FUNCTION_CHECK(triggerTransformCommand) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_tryGetGroupParent
		#define GEODE_CONCEPT_CHECK_tryGetGroupParent
		GEODE_CONCEPT_FUNCTION_CHECK(tryGetGroupParent) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_tryGetMainObject
		#define GEODE_CONCEPT_CHECK_tryGetMainObject
		GEODE_CONCEPT_FUNCTION_CHECK(tryGetMainObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_tryGetObject
		#define GEODE_CONCEPT_CHECK_tryGetObject
		GEODE_CONCEPT_FUNCTION_CHECK(tryGetObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_tryResumeAudio
		#define GEODE_CONCEPT_CHECK_tryResumeAudio
		GEODE_CONCEPT_FUNCTION_CHECK(tryResumeAudio) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_unclaimParticle
		#define GEODE_CONCEPT_CHECK_unclaimParticle
		GEODE_CONCEPT_FUNCTION_CHECK(unclaimParticle) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_ungroupStickyObjects
		#define GEODE_CONCEPT_CHECK_ungroupStickyObjects
		GEODE_CONCEPT_FUNCTION_CHECK(ungroupStickyObjects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_unlinkAllEvents
		#define GEODE_CONCEPT_CHECK_unlinkAllEvents
		GEODE_CONCEPT_FUNCTION_CHECK(unlinkAllEvents) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_unlockExistingFirstParents
		#define GEODE_CONCEPT_CHECK_unlockExistingFirstParents
		GEODE_CONCEPT_FUNCTION_CHECK(unlockExistingFirstParents) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateActiveEnterEffect
		#define GEODE_CONCEPT_CHECK_updateActiveEnterEffect
		GEODE_CONCEPT_FUNCTION_CHECK(updateActiveEnterEffect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateAllObjectSection
		#define GEODE_CONCEPT_CHECK_updateAllObjectSection
		GEODE_CONCEPT_FUNCTION_CHECK(updateAllObjectSection) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateAreaObjectLastValues
		#define GEODE_CONCEPT_CHECK_updateAreaObjectLastValues
		GEODE_CONCEPT_FUNCTION_CHECK(updateAreaObjectLastValues) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateAudioVisualizer
		#define GEODE_CONCEPT_CHECK_updateAudioVisualizer
		GEODE_CONCEPT_FUNCTION_CHECK(updateAudioVisualizer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateBGArtSpeed
		#define GEODE_CONCEPT_CHECK_updateBGArtSpeed
		GEODE_CONCEPT_FUNCTION_CHECK(updateBGArtSpeed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateCamera
		#define GEODE_CONCEPT_CHECK_updateCamera
		GEODE_CONCEPT_FUNCTION_CHECK(updateCamera) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateCameraBGArt
		#define GEODE_CONCEPT_CHECK_updateCameraBGArt
		GEODE_CONCEPT_FUNCTION_CHECK(updateCameraBGArt) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateCameraEdge
		#define GEODE_CONCEPT_CHECK_updateCameraEdge
		GEODE_CONCEPT_FUNCTION_CHECK(updateCameraEdge) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateCameraMode
		#define GEODE_CONCEPT_CHECK_updateCameraMode
		GEODE_CONCEPT_FUNCTION_CHECK(updateCameraMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateCameraOffsetX
		#define GEODE_CONCEPT_CHECK_updateCameraOffsetX
		GEODE_CONCEPT_FUNCTION_CHECK(updateCameraOffsetX) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateCameraOffsetY
		#define GEODE_CONCEPT_CHECK_updateCameraOffsetY
		GEODE_CONCEPT_FUNCTION_CHECK(updateCameraOffsetY) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateCollisionBlocks
		#define GEODE_CONCEPT_CHECK_updateCollisionBlocks
		GEODE_CONCEPT_FUNCTION_CHECK(updateCollisionBlocks) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateCounters
		#define GEODE_CONCEPT_CHECK_updateCounters
		GEODE_CONCEPT_FUNCTION_CHECK(updateCounters) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateDualGround
		#define GEODE_CONCEPT_CHECK_updateDualGround
		GEODE_CONCEPT_FUNCTION_CHECK(updateDualGround) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateEnterEffects
		#define GEODE_CONCEPT_CHECK_updateEnterEffects
		GEODE_CONCEPT_FUNCTION_CHECK(updateEnterEffects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateExtendedCollision
		#define GEODE_CONCEPT_CHECK_updateExtendedCollision
		GEODE_CONCEPT_FUNCTION_CHECK(updateExtendedCollision) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateExtraGameLayers
		#define GEODE_CONCEPT_CHECK_updateExtraGameLayers
		GEODE_CONCEPT_FUNCTION_CHECK(updateExtraGameLayers) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateGameplayOffsetX
		#define GEODE_CONCEPT_CHECK_updateGameplayOffsetX
		GEODE_CONCEPT_FUNCTION_CHECK(updateGameplayOffsetX) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateGameplayOffsetY
		#define GEODE_CONCEPT_CHECK_updateGameplayOffsetY
		GEODE_CONCEPT_FUNCTION_CHECK(updateGameplayOffsetY) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateGradientLayers
		#define GEODE_CONCEPT_CHECK_updateGradientLayers
		GEODE_CONCEPT_FUNCTION_CHECK(updateGradientLayers) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateGroundShadows
		#define GEODE_CONCEPT_CHECK_updateGroundShadows
		GEODE_CONCEPT_FUNCTION_CHECK(updateGroundShadows) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateGuideArt
		#define GEODE_CONCEPT_CHECK_updateGuideArt
		GEODE_CONCEPT_FUNCTION_CHECK(updateGuideArt) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateInternalCamOffsetX
		#define GEODE_CONCEPT_CHECK_updateInternalCamOffsetX
		GEODE_CONCEPT_FUNCTION_CHECK(updateInternalCamOffsetX) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateInternalCamOffsetY
		#define GEODE_CONCEPT_CHECK_updateInternalCamOffsetY
		GEODE_CONCEPT_FUNCTION_CHECK(updateInternalCamOffsetY) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateKeyframeOrder
		#define GEODE_CONCEPT_CHECK_updateKeyframeOrder
		GEODE_CONCEPT_FUNCTION_CHECK(updateKeyframeOrder) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateLayerCapacity
		#define GEODE_CONCEPT_CHECK_updateLayerCapacity
		GEODE_CONCEPT_FUNCTION_CHECK(updateLayerCapacity) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateLegacyLayerCapacity
		#define GEODE_CONCEPT_CHECK_updateLegacyLayerCapacity
		GEODE_CONCEPT_FUNCTION_CHECK(updateLegacyLayerCapacity) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateLevelColors
		#define GEODE_CONCEPT_CHECK_updateLevelColors
		GEODE_CONCEPT_FUNCTION_CHECK(updateLevelColors) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateMaxGameplayY
		#define GEODE_CONCEPT_CHECK_updateMaxGameplayY
		GEODE_CONCEPT_FUNCTION_CHECK(updateMaxGameplayY) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateMGArtSpeed
		#define GEODE_CONCEPT_CHECK_updateMGArtSpeed
		GEODE_CONCEPT_FUNCTION_CHECK(updateMGArtSpeed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateMGOffsetY
		#define GEODE_CONCEPT_CHECK_updateMGOffsetY
		GEODE_CONCEPT_FUNCTION_CHECK(updateMGOffsetY) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateOBB2
		#define GEODE_CONCEPT_CHECK_updateOBB2
		GEODE_CONCEPT_FUNCTION_CHECK(updateOBB2) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateParticles
		#define GEODE_CONCEPT_CHECK_updateParticles
		GEODE_CONCEPT_FUNCTION_CHECK(updateParticles) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updatePlatformerTime
		#define GEODE_CONCEPT_CHECK_updatePlatformerTime
		GEODE_CONCEPT_FUNCTION_CHECK(updatePlatformerTime) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updatePlayerCollisionBlocks
		#define GEODE_CONCEPT_CHECK_updatePlayerCollisionBlocks
		GEODE_CONCEPT_FUNCTION_CHECK(updatePlayerCollisionBlocks) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateProximityVolumeEffects
		#define GEODE_CONCEPT_CHECK_updateProximityVolumeEffects
		GEODE_CONCEPT_FUNCTION_CHECK(updateProximityVolumeEffects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateQueuedLabels
		#define GEODE_CONCEPT_CHECK_updateQueuedLabels
		GEODE_CONCEPT_FUNCTION_CHECK(updateQueuedLabels) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateReplay
		#define GEODE_CONCEPT_CHECK_updateReplay
		GEODE_CONCEPT_FUNCTION_CHECK(updateReplay) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateSavePositionObjects
		#define GEODE_CONCEPT_CHECK_updateSavePositionObjects
		GEODE_CONCEPT_FUNCTION_CHECK(updateSavePositionObjects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateShaderLayer
		#define GEODE_CONCEPT_CHECK_updateShaderLayer
		GEODE_CONCEPT_FUNCTION_CHECK(updateShaderLayer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateSpecialGroupData
		#define GEODE_CONCEPT_CHECK_updateSpecialGroupData
		GEODE_CONCEPT_FUNCTION_CHECK(updateSpecialGroupData) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateSpecialLabels
		#define GEODE_CONCEPT_CHECK_updateSpecialLabels
		GEODE_CONCEPT_FUNCTION_CHECK(updateSpecialLabels) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateStaticCameraPos
		#define GEODE_CONCEPT_CHECK_updateStaticCameraPos
		GEODE_CONCEPT_FUNCTION_CHECK(updateStaticCameraPos) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateStaticCameraPosToGroup
		#define GEODE_CONCEPT_CHECK_updateStaticCameraPosToGroup
		GEODE_CONCEPT_FUNCTION_CHECK(updateStaticCameraPosToGroup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateTimeMod
		#define GEODE_CONCEPT_CHECK_updateTimeMod
		GEODE_CONCEPT_FUNCTION_CHECK(updateTimeMod) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateTimerLabels
		#define GEODE_CONCEPT_CHECK_updateTimerLabels
		GEODE_CONCEPT_FUNCTION_CHECK(updateTimerLabels) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateZoom
		#define GEODE_CONCEPT_CHECK_updateZoom
		GEODE_CONCEPT_FUNCTION_CHECK(updateZoom) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_visitWithColorFlash
		#define GEODE_CONCEPT_CHECK_visitWithColorFlash
		GEODE_CONCEPT_FUNCTION_CHECK(visitWithColorFlash) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_volumeForProximityEffect
		#define GEODE_CONCEPT_CHECK_volumeForProximityEffect
		GEODE_CONCEPT_FUNCTION_CHECK(volumeForProximityEffect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_syncDeathMarkerFlip
		#define GEODE_CONCEPT_CHECK_syncDeathMarkerFlip
		GEODE_CONCEPT_FUNCTION_CHECK(syncDeathMarkerFlip) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GJBaseGameLayer> : ModifyBase<ModifyDerive<Der, GJBaseGameLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJBaseGameLayer>>;
		using ModifyBase<ModifyDerive<Der, GJBaseGameLayer>>::ModifyBase;
		using Base = GJBaseGameLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_CONSTRUCTOR(base::get() + 0x8e720, Default, GJBaseGameLayer, )
			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(base::get() + 0xebd40, Default, GJBaseGameLayer)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x115da0, Default, GJBaseGameLayer, convertToClosestDirection, float, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x129860, Default, GJBaseGameLayer, gameEventToString, GJGameEvent)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, get, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x12f230, Default, GJBaseGameLayer, update, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xebd80, Default, GJBaseGameLayer, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x142f70, Default, GJBaseGameLayer, visit, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, postUpdate, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, checkForEnd, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, testTime, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, updateVerifyDamage, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, updateAttemptTime, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, updateVisibility, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, playerTookDamage, PlayerObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x12efe0, Default, GJBaseGameLayer, opacityForObject, GameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, addToSpeedObjects, EffectGameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x109580, Default, GJBaseGameLayer, objectsCollided, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x119d30, Default, GJBaseGameLayer, updateColor, cocos2d::ccColor3B&, float, int, bool, float, cocos2d::ccHSVValue&, int, bool, EffectGameObject*, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x119ed0, Default, GJBaseGameLayer, toggleGroupTriggered, int, bool, std::vector<int> const&, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x10a460, Default, GJBaseGameLayer, checkSpawnAbuse, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x10a4d0, Default, GJBaseGameLayer, spawnGroup, int, bool, double, std::vector<int> const&, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x10a900, Default, GJBaseGameLayer, spawnObject, GameObject*, double, std::vector<int> const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, activateEndTrigger, int, bool, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, activatePlatformerEndTrigger, EndTriggerGameObject*, std::vector<int> const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, toggleGlitter, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, destroyPlayer, PlayerObject*, GameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xfdc30, Default, GJBaseGameLayer, updateDebugDraw, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xff110, Default, GJBaseGameLayer, shouldDrawDebugHitboxes, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xff130, Default, GJBaseGameLayer, shouldDrawHitboxTrail, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xff140, Default, GJBaseGameLayer, shouldRecordHitboxTrail, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xff150, Default, GJBaseGameLayer, getHitboxTrailMax, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x11d090, Default, GJBaseGameLayer, addToSection, GameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x11a450, Default, GJBaseGameLayer, addToGroup, GameObject*, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x11a6a0, Default, GJBaseGameLayer, removeFromGroup, GameObject*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x11ec10, Default, GJBaseGameLayer, updateObjectSection, GameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, updateDisabledObjectsLastPos, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x12c970, Default, GJBaseGameLayer, toggleGroundVisibility, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x12c980, Default, GJBaseGameLayer, toggleMGVisibility, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x12c990, Default, GJBaseGameLayer, toggleHideAttempts, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, timeForPos, cocos2d::CCPoint, int, int, bool, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, posForTime, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, resetSPTriggered, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x12cb30, Default, GJBaseGameLayer, updateScreenRotation, float, bool, bool, float, int, float, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1087c0, Default, GJBaseGameLayer, reverseDirection, EffectGameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x108800, Default, GJBaseGameLayer, rotateGameplay, RotateGameplayGameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, didRotateGameplay, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x12d210, Default, GJBaseGameLayer, updateTimeWarp, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x12d260, Default, GJBaseGameLayer, applyTimeWarp, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, playGravityEffect, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, manualUpdateObjectColors, GameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x13d270, Default, GJBaseGameLayer, createCustomParticle, std::string const&, cocos2d::ParticleStruct const&, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x13d5e0, Default, GJBaseGameLayer, claimCustomParticle, std::string const&, cocos2d::ParticleStruct const&, int, int, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x13da50, Default, GJBaseGameLayer, unclaimCustomParticle, std::string const&, cocos2d::CCParticleSystemQuad*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x13ea40, Default, GJBaseGameLayer, activatedAudioTrigger, SFXTriggerGameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x142c90, Default, GJBaseGameLayer, checkpointActivated, CheckpointGameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x142c80, Default, GJBaseGameLayer, flipArt, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x129a40, Default, GJBaseGameLayer, addKeyframe, KeyframeGameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, updateTimeLabel, int, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, checkSnapshot, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, toggleProgressbar, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, toggleInfoLabel, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, removeAllCheckpoints, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, toggleMusicInPractice, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, processCheckpoints, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, resetLevel, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x113730, Default, GJBaseGameLayer, activateCustomRing, RingObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x13ea60, Default, GJBaseGameLayer, activatedAudioTrigger, SFXTriggerGameObject*, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x129380, Default, GJBaseGameLayer, activateEventTrigger, EventLinkTrigger*, std::vector<int> const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x12aa70, Default, GJBaseGameLayer, activateItemCompareTrigger, ItemTriggerGameObject*, std::vector<int> const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x12a230, Default, GJBaseGameLayer, activateItemEditTrigger, ItemTriggerGameObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJBaseGameLayer, activateObjectControlTrigger, ObjectControlGameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x12b160, Default, GJBaseGameLayer, activatePersistentItemTrigger, ItemTriggerGameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1077d0, Default, GJBaseGameLayer, activatePlayerControlTrigger, PlayerControlGameObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJBaseGameLayer, activateProgressTrigger, ProgressGameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x129c30, Default, GJBaseGameLayer, activateResetTrigger, EffectGameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x139fb0, Default, GJBaseGameLayer, activateSFXEditTrigger, SFXTriggerGameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x139c10, Default, GJBaseGameLayer, activateSFXTrigger, SFXTriggerGameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x139a60, Default, GJBaseGameLayer, activateSongEditTrigger, SongTriggerGameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1397f0, Default, GJBaseGameLayer, activateSongTrigger, SongTriggerGameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x12b560, Default, GJBaseGameLayer, activateTimerTrigger, TimerTriggerGameObject*, std::vector<int> const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x11e2c0, Default, GJBaseGameLayer, addAreaEffect, EnterEffectObject*, std::vector<EnterEffectInstance>*, GJAreaActionType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xfa8d0, Default, GJBaseGameLayer, addCustomEnterEffect, EnterEffectObject*, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJBaseGameLayer, addDeathMarkerLayer, cocos2d::CCNode*, bool, std::vector<int> const&, bool, cocos2d::CCRect const&, int, int, float, float, float, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x141c40, Default, GJBaseGameLayer, addGuideArt, GameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x129f90, Default, GJBaseGameLayer, addObjectCounter, LabelGameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x129e80, Default, GJBaseGameLayer, addPickupTrigger, CountTriggerGameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1343f0, Default, GJBaseGameLayer, addPoints, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x13df40, Default, GJBaseGameLayer, addProximityVolumeEffect, int, int, SFXTriggerGameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xf2e20, Default, GJBaseGameLayer, addRemapTargets, std::set<int>&)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJBaseGameLayer, addToGroupParents, GameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x11a3e0, Default, GJBaseGameLayer, addToGroups, GameObject*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, addToObjectsToShow, GameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x11afa0, Default, GJBaseGameLayer, addUIObject, GameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x102780, Default, GJBaseGameLayer, animateInDualGroundNew, GameObject*, float, bool, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x102fb0, Default, GJBaseGameLayer, animateInGroundNew, bool, float, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x102a70, Default, GJBaseGameLayer, animateOutGroundNew, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x13b550, Default, GJBaseGameLayer, animatePortalY, float, float, float, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x138240, Default, GJBaseGameLayer, applyLevelSettings, GameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x10aac0, Default, GJBaseGameLayer, applyRemap, EffectGameObject*, std::vector<int> const&, std::unordered_map<int, int>&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x13de20, Default, GJBaseGameLayer, applySFXEditTrigger, int, int, SFXTriggerGameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x13a640, Default, GJBaseGameLayer, applyShake, cocos2d::CCPoint&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x11c3f0, Default, GJBaseGameLayer, assignNewStickyGroups, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xf0880, Default, GJBaseGameLayer, asyncBGLoaded, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xf0b90, Default, GJBaseGameLayer, asyncGLoaded, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xf0e60, Default, GJBaseGameLayer, asyncMGLoaded, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xfa300, Default, GJBaseGameLayer, atlasValue, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1059c0, Default, GJBaseGameLayer, bumpPlayer, PlayerObject*, EffectGameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x134820, Default, GJBaseGameLayer, buttonIDToButton, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1291a0, Default, GJBaseGameLayer, buttonIsRelevant, PlayerButtonCommand const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xfa050, Default, GJBaseGameLayer, calculateColorGroups, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x13b1e0, Default, GJBaseGameLayer, cameraMoveX, float, float, float, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x13b290, Default, GJBaseGameLayer, cameraMoveY, float, float, float, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x105760, Default, GJBaseGameLayer, canBeActivatedByPlayer, PlayerObject*, EffectGameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x13ef50, Default, GJBaseGameLayer, canProcessSFX, SFXTriggerState&, std::unordered_map<int, int>&, std::unordered_map<int, float>&, std::vector<SFXTriggerState>&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x105730, Default, GJBaseGameLayer, canTouchObject, GameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xfd7e0, Default, GJBaseGameLayer, checkCameraLimitAfterTeleport, PlayerObject*, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x109550, Default, GJBaseGameLayer, checkCollision, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1093b0, Default, GJBaseGameLayer, checkCollisionBlocks, EffectGameObject*, std::vector<EffectGameObject*>*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x103270, Default, GJBaseGameLayer, checkCollisions, PlayerObject*, float, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1315f0, Default, GJBaseGameLayer, checkRepellPlayer, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJBaseGameLayer, checkSpawnObjects, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x125510, Default, GJBaseGameLayer, claimMoveAction, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x13cc80, Default, GJBaseGameLayer, claimParticle, std::string, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1253a0, Default, GJBaseGameLayer, claimRotationAction, int, int, float&, float&, bool, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1390e0, Default, GJBaseGameLayer, clearActivatedAudioTriggers, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJBaseGameLayer, clearHitboxTrail, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x54ac60, Default, GJBaseGameLayer, clearPickedUpItems, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x129e30, Default, GJBaseGameLayer, collectedObject, EffectGameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x104380, Default, GJBaseGameLayer, collisionCheckObjects, PlayerObject*, std::vector<GameObject*>*, int, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x114210, Default, GJBaseGameLayer, controlAdvancedFollowCommand, AdvancedFollowTriggerObject*, int, GJActionCommand)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x114160, Default, GJBaseGameLayer, controlAreaEffect, EnterEffectObject*, std::vector<EnterEffectInstance>*, GJActionCommand)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x114c20, Default, GJBaseGameLayer, controlAreaEffectWithID, int, int, GJActionCommand)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x116330, Default, GJBaseGameLayer, controlDynamicCommand, EffectGameObject*, int, std::vector<DynamicObjectAction>&, GJActionCommand)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJBaseGameLayer, controlDynamicMoveCommand, EffectGameObject*, int, GJActionCommand)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJBaseGameLayer, controlDynamicRotateCommand, EffectGameObject*, int, GJActionCommand)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1144c0, Default, GJBaseGameLayer, controlEventLink, int, int, GJActionCommand)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1146b0, Default, GJBaseGameLayer, controlGradientTrigger, GradientTriggerObject*, GJActionCommand)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1137f0, Default, GJBaseGameLayer, controlTriggersInGroup, int, GJActionCommand)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x114910, Default, GJBaseGameLayer, controlTriggersWithControlID, int, GJActionCommand)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x106f30, Default, GJBaseGameLayer, countCollectedUserCoins, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xf0630, Default, GJBaseGameLayer, createBackground, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xf0bb0, Default, GJBaseGameLayer, createGroundLayer, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x100770, Default, GJBaseGameLayer, createLiveStartPosObject, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xf0dc0, Default, GJBaseGameLayer, createMiddleground, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1299f0, Default, GJBaseGameLayer, createNewKeyframeAnim, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x13c790, Default, GJBaseGameLayer, createParticle, int, char const*, int, cocos2d::tCCPositionType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x305780, Default, GJBaseGameLayer, createPlayer, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1089e0, Default, GJBaseGameLayer, createPlayerCollisionBlock, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xfbcb0, Default, GJBaseGameLayer, createTextLayers, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xff8d0, Default, GJBaseGameLayer, damagingObjectsInRect, cocos2d::CCRect, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1061d0, Default, GJBaseGameLayer, destroyObject, GameObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJBaseGameLayer, didPickupItem, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJBaseGameLayer, drawHitboxTrail, std::vector<PlayerTrailState>&, int, cocos2d::CCRect const&, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x107760, Default, GJBaseGameLayer, enterDualMode, GameObject*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x13bae0, Default, GJBaseGameLayer, exitStaticCamera, bool, bool, float, int, float, bool, float, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1009f0, Default, GJBaseGameLayer, findStartPosWinnerInArray, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x134380, Default, GJBaseGameLayer, flipFinished, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x102310, Default, GJBaseGameLayer, flipGravity, PlayerObject*, bool, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x142bd0, Default, GJBaseGameLayer, flipObjects, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xfd8a0, Default, GJBaseGameLayer, gameEventTriggered, GJGameEvent, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xfb4c0, Default, GJBaseGameLayer, generateEnterEasingBuffer, int, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xfb430, Default, GJBaseGameLayer, generateEnterEasingBuffers, EnterEffectObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1069d0, Default, GJBaseGameLayer, generatePickupAnimRandVal, GameObject*, float&, float&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xf3710, Default, GJBaseGameLayer, generateSpawnRemap, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xf68f0, Default, GJBaseGameLayer, generateTargetGroups, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xf8e00, Default, GJBaseGameLayer, generateVisibilityGroups, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x10a430, Default, GJBaseGameLayer, getActiveOrderSpawnObjects, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x121e10, Default, GJBaseGameLayer, getAreaObjectValue, EnterEffectInstance*, GameObject*, cocos2d::CCPoint&, bool&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1080c0, Default, GJBaseGameLayer, getBumpMod, PlayerObject*, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJBaseGameLayer, getCameraEdgeValue, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xfb8a0, Default, GJBaseGameLayer, getCapacityString, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x11a9a0, Default, GJBaseGameLayer, getCenterGroupObject, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xfb310, Default, GJBaseGameLayer, getCustomEnterEffects, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x122040, Default, GJBaseGameLayer, getEasedAreaValue, GameObject*, EnterEffectInstance*, float, bool, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xfb480, Default, GJBaseGameLayer, getEnterEasingKey, int, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xfb830, Default, GJBaseGameLayer, getEnterEasingValue, float, int, float, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x126020, Default, GJBaseGameLayer, getFollowSpeedVal, GameObject*, int, int, float, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x100060, Default, GJBaseGameLayer, getGroundHeight, PlayerObject*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x100000, Default, GJBaseGameLayer, getGroundHeightForMode, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xfa290, Default, GJBaseGameLayer, getGroup, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, getGroupParent, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJBaseGameLayer, getGroupParentsString, GameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x12a0f0, Default, GJBaseGameLayer, getItemValue, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1031c0, Default, GJBaseGameLayer, getMaxPortalY, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x13e550, Default, GJBaseGameLayer, getMinDistance, cocos2d::CCPoint, cocos2d::CCArray*, float, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1030e0, Default, GJBaseGameLayer, getMinPortalY, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x12f180, Default, GJBaseGameLayer, getModifiedDelta, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJBaseGameLayer, getMoveTargetDelta, EffectGameObject*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x11a560, Default, GJBaseGameLayer, getOptimizedGroup, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x100170, Default, GJBaseGameLayer, getOtherPlayer, PlayerObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x13c2d0, Default, GJBaseGameLayer, getParticleKey, int, char const*, int, cocos2d::tCCPositionType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x13c6c0, Default, GJBaseGameLayer, getParticleKey2, std::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1347e0, Default, GJBaseGameLayer, getPlayerButtonID, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1343e0, Default, GJBaseGameLayer, getPlayTimerFullSeconds, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1343c0, Default, GJBaseGameLayer, getPlayTimerMilli, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xfd4b0, Default, GJBaseGameLayer, getPortalTarget, TeleportPortalObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xfd5c0, Default, GJBaseGameLayer, getPortalTargetPos, TeleportPortalObject*, GameObject*, PlayerObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJBaseGameLayer, getRecordExtra, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x136650, Default, GJBaseGameLayer, getRecordString, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1159a0, Default, GJBaseGameLayer, getRotateCommandTargets, EnhancedTriggerObject*, GameObject*&, GameObject*&, GameObject*&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1096c0, Default, GJBaseGameLayer, getSavedPosition, int, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x108990, Default, GJBaseGameLayer, getScaledGroundHeight, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x101b20, Default, GJBaseGameLayer, getSingleGroupObject, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xfb170, Default, GJBaseGameLayer, getSpecialKey, int, bool, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x100940, Default, GJBaseGameLayer, getStartPosObjectsForCurrentMode, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x11a5d0, Default, GJBaseGameLayer, getStaticGroup, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x11c1f0, Default, GJBaseGameLayer, getStickyGroup, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x102ba0, Default, GJBaseGameLayer, getTargetFlyCameraY, GameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x11c860, Default, GJBaseGameLayer, getTargetGroup, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x11c890, Default, GJBaseGameLayer, getTargetGroupOrigin, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x105c60, Default, GJBaseGameLayer, gravBumpPlayer, PlayerObject*, EffectGameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x11c210, Default, GJBaseGameLayer, groupStickyObjects, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x128ec0, Default, GJBaseGameLayer, handleButton, bool, int, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJBaseGameLayer, hasItem, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1063b0, Default, GJBaseGameLayer, hasUniqueCoin, EffectGameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xf16b0, Default, GJBaseGameLayer, increaseBatchNodeCapacity, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x134350, Default, GJBaseGameLayer, isFlipping, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJBaseGameLayer, isGroupParentOf, GameObject*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1347d0, Default, GJBaseGameLayer, isPlayer2Button, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x142dd0, Default, GJBaseGameLayer, lightningFlash, cocos2d::CCPoint, cocos2d::ccColor3B)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xfd640, Default, GJBaseGameLayer, lightningFlash, cocos2d::CCPoint, cocos2d::CCPoint, cocos2d::ccColor3B, float, float, int, bool, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJBaseGameLayer, loadGroupParentsFromString, GameObject*, std::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1380a0, Default, GJBaseGameLayer, loadLevelSettings, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x12c2f0, Default, GJBaseGameLayer, loadStartPosObject, StartPosObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x12c540, Default, GJBaseGameLayer, loadUpToPosition, float, int, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJBaseGameLayer, lockExistingFirstParents, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1062a0, Default, GJBaseGameLayer, logPickupItem, EffectGameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x116ec0, Default, GJBaseGameLayer, maxZOrderForShaderZ, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x119bb0, Default, GJBaseGameLayer, minZOrderForShaderZ, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1268a0, Default, GJBaseGameLayer, modifyGroupPhysics, AdvancedFollowEditObject*, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x126ae0, Default, GJBaseGameLayer, modifyObjectPhysics, AdvancedFollowEditObject*, GameObjectPhysics&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, moveAreaObject, GameObject*, float, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x13b080, Default, GJBaseGameLayer, moveCameraToPos, cocos2d::CCPoint)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x125fc0, Default, GJBaseGameLayer, moveObject, GameObject*, double, double, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x125ca0, Default, GJBaseGameLayer, moveObjects, cocos2d::CCArray*, double, double, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x115660, Default, GJBaseGameLayer, moveObjectsSilent, int, double, double)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x128970, Default, GJBaseGameLayer, moveObjectToStaticGroup, GameObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJBaseGameLayer, objectForUniqueID, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1002d0, Default, GJBaseGameLayer, objectIntersectsCircle, GameObject*, GameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x102760, Default, GJBaseGameLayer, objectTypeToGameEvent, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x7c3c0, Default, GJBaseGameLayer, optimizeMoveGroups, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x141b90, Default, GJBaseGameLayer, orderSpawnObjects, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xfc0f0, Default, GJBaseGameLayer, parentForZLayer, int, bool, int, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJBaseGameLayer, parseRecording, std::string, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x12f080, Default, GJBaseGameLayer, pauseAudio, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x12a160, Default, GJBaseGameLayer, performMathOperation, double, double, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x12a1c0, Default, GJBaseGameLayer, performMathRounding, double, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1064b0, Default, GJBaseGameLayer, pickupItem, EffectGameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x108190, Default, GJBaseGameLayer, playAnimationCommand, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1001a0, Default, GJBaseGameLayer, playerCircleCollision, PlayerObject*, GameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x100240, Default, GJBaseGameLayer, playerIntersectsCircle, PlayerObject*, GameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x107fd0, Default, GJBaseGameLayer, playerTouchedObject, PlayerObject*, GameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x105e90, Default, GJBaseGameLayer, playerTouchedRing, PlayerObject*, RingObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x105f40, Default, GJBaseGameLayer, playerTouchedTrigger, PlayerObject*, EffectGameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x107f80, Default, GJBaseGameLayer, playerWasTouchingObject, PlayerObject*, GameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x102490, Default, GJBaseGameLayer, playerWillSwitchMode, PlayerObject*, GameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x107290, Default, GJBaseGameLayer, playExitDualEffect, PlayerObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x142ed0, Default, GJBaseGameLayer, playFlashEffect, float, int, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x108250, Default, GJBaseGameLayer, playKeyframeAnimation, KeyframeAnimTriggerObject*, std::vector<int> const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x13c150, Default, GJBaseGameLayer, playSpeedParticle, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJBaseGameLayer, positionForShaderTarget, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJBaseGameLayer, positionUIObjects, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJBaseGameLayer, prepareSavePositionObjects, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1226d0, Default, GJBaseGameLayer, prepareTransformParent, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x12f070, Default, GJBaseGameLayer, preResumeGame, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x12d340, Default, GJBaseGameLayer, preUpdateVisibility, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x13fb40, Default, GJBaseGameLayer, processActivatedAudioTriggers, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJBaseGameLayer, processAdvancedFollowAction, AdvancedFollowInstance&, bool, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x124dc0, Default, GJBaseGameLayer, processAdvancedFollowActions, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJBaseGameLayer, processAreaActions, float, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJBaseGameLayer, processAreaEffects, std::vector<EnterEffectInstance>*, GJAreaActionType, float, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x120de0, Default, GJBaseGameLayer, processAreaFadeGroupAction, cocos2d::CCArray*, EnterEffectInstance*, cocos2d::CCPoint, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1205c0, Default, GJBaseGameLayer, processAreaMoveGroupAction, cocos2d::CCArray*, EnterEffectInstance*, cocos2d::CCPoint, int, int, int, int, int, bool, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x120290, Default, GJBaseGameLayer, processAreaRotateGroupAction, cocos2d::CCArray*, EnterEffectInstance*, cocos2d::CCPoint, int, int, int, int, int, bool, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x121030, Default, GJBaseGameLayer, processAreaTintGroupAction, cocos2d::CCArray*, EnterEffectInstance*, cocos2d::CCPoint, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x11fe50, Default, GJBaseGameLayer, processAreaTransformGroupAction, cocos2d::CCArray*, EnterEffectInstance*, cocos2d::CCPoint, int, int, int, int, int, bool, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x121dc0, Default, GJBaseGameLayer, processAreaVisualActions, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x100450, Default, GJBaseGameLayer, processCameraObject, GameObject*, PlayerObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1312d0, Default, GJBaseGameLayer, processCommands, float, bool, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x122ca0, Default, GJBaseGameLayer, processDynamicObjectActions, int, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJBaseGameLayer, processFollowActions, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x106f80, Default, GJBaseGameLayer, processItems, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x124900, Default, GJBaseGameLayer, processMoveActions, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x122b70, Default, GJBaseGameLayer, processMoveActionsStep, float, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x11a0f0, Default, GJBaseGameLayer, processOptionsTrigger, GameOptionsTrigger*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x124af0, Default, GJBaseGameLayer, processPlayerFollowActions, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x139730, Default, GJBaseGameLayer, processQueuedAudioTriggers, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x128da0, Default, GJBaseGameLayer, processQueuedButtons, float, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJBaseGameLayer, processReplayCheckpoint, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1240c0, Default, GJBaseGameLayer, processRotationActions, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xf9e20, Default, GJBaseGameLayer, processSFXObjects, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x13f3b0, Default, GJBaseGameLayer, processSFXState, SFXTriggerState*, SFXTriggerState*, int, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1415a0, Default, GJBaseGameLayer, processSongState, int, float, float, int, float, float, std::vector<SongTriggerState>*, SongTriggerGameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x100c10, Default, GJBaseGameLayer, processStartPosObjects, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x108710, Default, GJBaseGameLayer, processStateObjects, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x123290, Default, GJBaseGameLayer, processTransformActions, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJBaseGameLayer, promoteGroupParent, GameObject*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x128c20, Default, GJBaseGameLayer, queueButton, int, bool, bool, double)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x12d200, Default, GJBaseGameLayer, queueTimeWarp, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x11c590, Default, GJBaseGameLayer, reAddToStickyGroup, GameObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJBaseGameLayer, recordAction, int, bool, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJBaseGameLayer, recordHitboxTrail, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJBaseGameLayer, recordHitboxTrailState, PlayerObject*, std::vector<PlayerTrailState>&, int&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xffe50, Default, GJBaseGameLayer, rectIntersectsCircle, cocos2d::CCRect, cocos2d::CCPoint, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x12bda0, Default, GJBaseGameLayer, refreshCounterLabels, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xf9c30, Default, GJBaseGameLayer, refreshKeyframeAnims, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xf38a0, Default, GJBaseGameLayer, regenerateEnterEasingBuffers, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1135f0, Default, GJBaseGameLayer, registerSpawnRemap, std::vector<ChanceObject>&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1086c0, Default, GJBaseGameLayer, registerStateObject, EffectGameObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJBaseGameLayer, remapGroupParent, GameObject*, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xf07f0, Default, GJBaseGameLayer, removeBackground, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xfad00, Default, GJBaseGameLayer, removeCustomEnterEffects, int, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJBaseGameLayer, removeFromGroupParents, GameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x11a640, Default, GJBaseGameLayer, removeFromGroups, GameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x11c500, Default, GJBaseGameLayer, removeFromStickyGroup, GameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xf0f20, Default, GJBaseGameLayer, removeGroundLayer, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJBaseGameLayer, removeGroupParent, GameObject*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x129be0, Default, GJBaseGameLayer, removeKeyframe, KeyframeGameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xf0ef0, Default, GJBaseGameLayer, removeMiddleground, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x11cd20, Default, GJBaseGameLayer, removeObjectFromSection, GameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x107700, Default, GJBaseGameLayer, removePlayer2, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x128ac0, Default, GJBaseGameLayer, removeReleasedButtons, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1391f0, Default, GJBaseGameLayer, removeTemporaryParticles, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x108e50, Default, GJBaseGameLayer, reorderObjectSection, GameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x119b30, Default, GJBaseGameLayer, reparentObject, cocos2d::CCNode*, cocos2d::CCNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xfa330, Default, GJBaseGameLayer, resetActiveEnterEffects, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x11fa00, Default, GJBaseGameLayer, resetAreaObjectValues, GameObject*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x12f0f0, Default, GJBaseGameLayer, resetAudio, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1392c0, Default, GJBaseGameLayer, resetCamera, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x116cb0, Default, GJBaseGameLayer, resetGradientLayers, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x12c0f0, Default, GJBaseGameLayer, resetGroupCounters, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1384f0, Default, GJBaseGameLayer, resetLevelVariables, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x128910, Default, GJBaseGameLayer, resetMoveOptimizedValue, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1004e0, Default, GJBaseGameLayer, resetPlayer, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x134ba0, Default, GJBaseGameLayer, resetRecord, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x134ae0, Default, GJBaseGameLayer, resetRecordFull, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x12c8e0, Default, GJBaseGameLayer, resetSongTriggerValues, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x684c0, Default, GJBaseGameLayer, resetSpawnChannelIndex, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x102fc0, Default, GJBaseGameLayer, resetStaticCamera, bool, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x121d20, Default, GJBaseGameLayer, resetStoppedAreaObjects, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x11cee0, Default, GJBaseGameLayer, restoreAllUIObjects, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x12d080, Default, GJBaseGameLayer, restoreDefaultGameplayOffsetX, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x12d0c0, Default, GJBaseGameLayer, restoreDefaultGameplayOffsetY, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJBaseGameLayer, restoreRecording, std::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1111b0, Default, GJBaseGameLayer, restoreRemap, EffectGameObject*, std::unordered_map<int, int>&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x12f0c0, Default, GJBaseGameLayer, resumeAudio, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x122740, Default, GJBaseGameLayer, rotateAreaObjects, GameObject*, cocos2d::CCArray*, float, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x125760, Default, GJBaseGameLayer, rotateObject, GameObject*, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1257e0, Default, GJBaseGameLayer, rotateObjects, cocos2d::CCArray*, float, cocos2d::CCPoint, cocos2d::CCPoint, bool, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x100720, Default, GJBaseGameLayer, setActiveStartPosObject, StartPosObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x11ad00, Default, GJBaseGameLayer, setGroupParent, GameObject*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xed8b0, Default, GJBaseGameLayer, setupLayers, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x100da0, Default, GJBaseGameLayer, setupLevelStart, LevelSettingsObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJBaseGameLayer, setupReplay, std::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x13a410, Default, GJBaseGameLayer, shakeCamera, float, float, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xf0080, Default, GJBaseGameLayer, shouldExitHackedLevel, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1290d0, Default, GJBaseGameLayer, shouldUseSubstepForButton, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x11a940, Default, GJBaseGameLayer, sortAllGroupsX, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xf39e0, Default, GJBaseGameLayer, sortGroups, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x11dea0, Default, GJBaseGameLayer, sortSectionVector, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x100d20, Default, GJBaseGameLayer, sortStartPosObjects, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xf67a0, Default, GJBaseGameLayer, sortStickyGroups, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJBaseGameLayer, spawnGroupTriggered, int, float, bool, std::vector<int> const&, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x10a770, Default, GJBaseGameLayer, spawnObjectsInOrder, cocos2d::CCArray*, double, std::vector<int> const&, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x13c0a0, Default, GJBaseGameLayer, spawnParticle, char const*, int, cocos2d::tCCPositionType, cocos2d::CCPoint)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x13bec0, Default, GJBaseGameLayer, spawnParticleTrigger, SpawnParticleGameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1065c0, Default, GJBaseGameLayer, spawnParticleTrigger, int, cocos2d::CCPoint, float, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x107210, Default, GJBaseGameLayer, spawnPlayer2, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJBaseGameLayer, speedForShaderTarget, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xff3e0, Default, GJBaseGameLayer, staticObjectsInRect, cocos2d::CCRect, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x84220, Default, GJBaseGameLayer, stopAllGroundActions, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xc55f0, Default, GJBaseGameLayer, stopCameraShake, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xfb1a0, Default, GJBaseGameLayer, stopCustomEnterEffect, EnterEffectObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xfb1f0, Default, GJBaseGameLayer, stopCustomEnterEffect, EnterEffectObject*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x114310, Default, GJBaseGameLayer, stopSFXTrigger, SFXTriggerGameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xf0820, Default, GJBaseGameLayer, swapBackground, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xf0b50, Default, GJBaseGameLayer, swapGround, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xf0ca0, Default, GJBaseGameLayer, swapMiddleground, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x101bb0, Default, GJBaseGameLayer, switchToFlyMode, PlayerObject*, GameObject*, bool, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, switchToRobotMode, PlayerObject*, GameObject*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, switchToRollMode, PlayerObject*, GameObject*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, switchToSpiderMode, PlayerObject*, GameObject*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1383e0, Default, GJBaseGameLayer, syncBGTextures, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xfcdd0, Default, GJBaseGameLayer, teleportPlayer, TeleportPortalObject*, PlayerObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x129d90, Default, GJBaseGameLayer, testInstantCountTrigger, int, int, int, bool, int, std::vector<int> const&, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xed740, Default, GJBaseGameLayer, toggleAudioVisualizer, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1017a0, Default, GJBaseGameLayer, toggleDualMode, GameObject*, bool, PlayerObject*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x101f00, Default, GJBaseGameLayer, toggleFlipped, bool, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x119f40, Default, GJBaseGameLayer, toggleGroup, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x11a390, Default, GJBaseGameLayer, toggleLockPlayer, bool, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x11a310, Default, GJBaseGameLayer, togglePlayerStreakBlend, bool, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x12c930, Default, GJBaseGameLayer, togglePlayerVisibility, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x11a360, Default, GJBaseGameLayer, togglePlayerVisibility, bool, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x122150, Default, GJBaseGameLayer, transformAreaObjects, GameObject*, cocos2d::CCArray*, float, float, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x116570, Default, GJBaseGameLayer, triggerAdvancedFollowCommand, AdvancedFollowTriggerObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x126190, Default, GJBaseGameLayer, triggerAdvancedFollowEditCommand, AdvancedFollowEditObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x11e210, Default, GJBaseGameLayer, triggerAreaEffect, EnterEffectObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x11e720, Default, GJBaseGameLayer, triggerAreaEffectAnimation, EnterEffectObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1155a0, Default, GJBaseGameLayer, triggerDynamicMoveCommand, EffectGameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x116010, Default, GJBaseGameLayer, triggerDynamicRotateCommand, EnhancedTriggerObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1167d0, Default, GJBaseGameLayer, triggerGradientCommand, GradientTriggerObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x119cc0, Default, GJBaseGameLayer, triggerGravityChange, EffectGameObject*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x115280, Default, GJBaseGameLayer, triggerMoveCommand, EffectGameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x115e20, Default, GJBaseGameLayer, triggerRotateCommand, EnhancedTriggerObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x117f40, Default, GJBaseGameLayer, triggerShaderCommand, ShaderGameObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJBaseGameLayer, triggerTransformCommand, TransformTriggerGameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x11aab0, Default, GJBaseGameLayer, tryGetGroupParent, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1085f0, Default, GJBaseGameLayer, tryGetMainObject, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x100640, Default, GJBaseGameLayer, tryGetObject, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x12f120, Default, GJBaseGameLayer, tryResumeAudio, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x13cf80, Default, GJBaseGameLayer, unclaimParticle, char const*, cocos2d::CCParticleSystemQuad*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x11c330, Default, GJBaseGameLayer, ungroupStickyObjects, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x129820, Default, GJBaseGameLayer, unlinkAllEvents, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJBaseGameLayer, unlockExistingFirstParents, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xfa3a0, Default, GJBaseGameLayer, updateActiveEnterEffect, EnterEffectObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x138380, Default, GJBaseGameLayer, updateAllObjectSection, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJBaseGameLayer, updateAreaObjectLastValues, GameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x131160, Default, GJBaseGameLayer, updateAudioVisualizer, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x139060, Default, GJBaseGameLayer, updateBGArtSpeed, float, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x131810, Default, GJBaseGameLayer, updateCamera, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x13a760, Default, GJBaseGameLayer, updateCameraBGArt, cocos2d::CCPoint, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x12cf60, Default, GJBaseGameLayer, updateCameraEdge, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x102410, Default, GJBaseGameLayer, updateCameraMode, EffectGameObject*, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJBaseGameLayer, updateCameraOffsetX, float, float, int, float, int, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJBaseGameLayer, updateCameraOffsetY, float, float, int, float, int, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJBaseGameLayer, updateCollisionBlocks, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x107ad0, Default, GJBaseGameLayer, updateCounters, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1020f0, Default, GJBaseGameLayer, updateDualGround, PlayerObject*, int, bool, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xfb370, Default, GJBaseGameLayer, updateEnterEffects, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x11de50, Default, GJBaseGameLayer, updateExtendedCollision, GameObject*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x119bd0, Default, GJBaseGameLayer, updateExtraGameLayers, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x12d0a0, Default, GJBaseGameLayer, updateGameplayOffsetX, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x12d0e0, Default, GJBaseGameLayer, updateGameplayOffsetY, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x116ee0, Default, GJBaseGameLayer, updateGradientLayers, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xf0f70, Default, GJBaseGameLayer, updateGroundShadows, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x131090, Default, GJBaseGameLayer, updateGuideArt, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x13b370, Default, GJBaseGameLayer, updateInternalCamOffsetX, float, float, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x13b460, Default, GJBaseGameLayer, updateInternalCamOffsetY, float, float, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x129ad0, Default, GJBaseGameLayer, updateKeyframeOrder, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJBaseGameLayer, updateLayerCapacity, std::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xf1750, Default, GJBaseGameLayer, updateLegacyLayerCapacity, int, int, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xf08a0, Default, GJBaseGameLayer, updateLevelColors, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x138290, Default, GJBaseGameLayer, updateMaxGameplayY, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1390a0, Default, GJBaseGameLayer, updateMGArtSpeed, float, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x12d100, Default, GJBaseGameLayer, updateMGOffsetY, float, float, int, float, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xffdd0, Default, GJBaseGameLayer, updateOBB2, cocos2d::CCRect)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x13db00, Default, GJBaseGameLayer, updateParticles, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x134410, Default, GJBaseGameLayer, updatePlatformerTime, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x108cb0, Default, GJBaseGameLayer, updatePlayerCollisionBlocks, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x134290, Default, GJBaseGameLayer, updateProximityVolumeEffects, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x12bce0, Default, GJBaseGameLayer, updateQueuedLabels, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1349f0, Default, GJBaseGameLayer, updateReplay, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x109aa0, Default, GJBaseGameLayer, updateSavePositionObjects, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x118950, Default, GJBaseGameLayer, updateShaderLayer, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xf36a0, Default, GJBaseGameLayer, updateSpecialGroupData, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x133d40, Default, GJBaseGameLayer, updateSpecialLabels, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x102c20, Default, GJBaseGameLayer, updateStaticCameraPos, cocos2d::CCPoint, bool, bool, bool, float, int, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x13b630, Default, GJBaseGameLayer, updateStaticCameraPosToGroup, int, bool, bool, bool, float, float, int, float, bool, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x102290, Default, GJBaseGameLayer, updateTimeMod, float, bool, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x12b690, Default, GJBaseGameLayer, updateTimerLabels, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x12c9a0, Default, GJBaseGameLayer, updateZoom, float, float, int, float, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1444d0, Default, GJBaseGameLayer, visitWithColorFlash, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x13e170, Default, GJBaseGameLayer, volumeForProximityEffect, SFXTriggerInstance&)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJBaseGameLayer, syncDeathMarkerFlip, )
		}
	};
}
