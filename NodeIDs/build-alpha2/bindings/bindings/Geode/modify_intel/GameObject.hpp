#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GameObject.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_createWithFrame
		#define GEODE_STATICS_createWithFrame
		GEODE_AS_STATIC_FUNCTION(createWithFrame) 
	#endif

	#ifndef GEODE_STATICS_createWithKey
		#define GEODE_STATICS_createWithKey
		GEODE_AS_STATIC_FUNCTION(createWithKey) 
	#endif

	#ifndef GEODE_STATICS_isBasicEnterEffect
		#define GEODE_STATICS_isBasicEnterEffect
		GEODE_AS_STATIC_FUNCTION(isBasicEnterEffect) 
	#endif

	#ifndef GEODE_STATICS_objectFromVector
		#define GEODE_STATICS_objectFromVector
		GEODE_AS_STATIC_FUNCTION(objectFromVector) 
	#endif

	#ifndef GEODE_STATICS_resetMID
		#define GEODE_STATICS_resetMID
		GEODE_AS_STATIC_FUNCTION(resetMID) 
	#endif

	#ifndef GEODE_STATICS_update
		#define GEODE_STATICS_update
		GEODE_AS_STATIC_FUNCTION(update) 
	#endif

	#ifndef GEODE_STATICS_setScaleX
		#define GEODE_STATICS_setScaleX
		GEODE_AS_STATIC_FUNCTION(setScaleX) 
	#endif

	#ifndef GEODE_STATICS_setScaleY
		#define GEODE_STATICS_setScaleY
		GEODE_AS_STATIC_FUNCTION(setScaleY) 
	#endif

	#ifndef GEODE_STATICS_setScale
		#define GEODE_STATICS_setScale
		GEODE_AS_STATIC_FUNCTION(setScale) 
	#endif

	#ifndef GEODE_STATICS_setPosition
		#define GEODE_STATICS_setPosition
		GEODE_AS_STATIC_FUNCTION(setPosition) 
	#endif

	#ifndef GEODE_STATICS_setVisible
		#define GEODE_STATICS_setVisible
		GEODE_AS_STATIC_FUNCTION(setVisible) 
	#endif

	#ifndef GEODE_STATICS_setRotation
		#define GEODE_STATICS_setRotation
		GEODE_AS_STATIC_FUNCTION(setRotation) 
	#endif

	#ifndef GEODE_STATICS_setRotationX
		#define GEODE_STATICS_setRotationX
		GEODE_AS_STATIC_FUNCTION(setRotationX) 
	#endif

	#ifndef GEODE_STATICS_setRotationY
		#define GEODE_STATICS_setRotationY
		GEODE_AS_STATIC_FUNCTION(setRotationY) 
	#endif

	#ifndef GEODE_STATICS_setOpacity
		#define GEODE_STATICS_setOpacity
		GEODE_AS_STATIC_FUNCTION(setOpacity) 
	#endif

	#ifndef GEODE_STATICS_initWithTexture
		#define GEODE_STATICS_initWithTexture
		GEODE_AS_STATIC_FUNCTION(initWithTexture) 
	#endif

	#ifndef GEODE_STATICS_setChildColor
		#define GEODE_STATICS_setChildColor
		GEODE_AS_STATIC_FUNCTION(setChildColor) 
	#endif

	#ifndef GEODE_STATICS_setFlipX
		#define GEODE_STATICS_setFlipX
		GEODE_AS_STATIC_FUNCTION(setFlipX) 
	#endif

	#ifndef GEODE_STATICS_setFlipY
		#define GEODE_STATICS_setFlipY
		GEODE_AS_STATIC_FUNCTION(setFlipY) 
	#endif

	#ifndef GEODE_STATICS_customSetup
		#define GEODE_STATICS_customSetup
		GEODE_AS_STATIC_FUNCTION(customSetup) 
	#endif

	#ifndef GEODE_STATICS_setupCustomSprites
		#define GEODE_STATICS_setupCustomSprites
		GEODE_AS_STATIC_FUNCTION(setupCustomSprites) 
	#endif

	#ifndef GEODE_STATICS_addMainSpriteToParent
		#define GEODE_STATICS_addMainSpriteToParent
		GEODE_AS_STATIC_FUNCTION(addMainSpriteToParent) 
	#endif

	#ifndef GEODE_STATICS_resetObject
		#define GEODE_STATICS_resetObject
		GEODE_AS_STATIC_FUNCTION(resetObject) 
	#endif

	#ifndef GEODE_STATICS_activateObject
		#define GEODE_STATICS_activateObject
		GEODE_AS_STATIC_FUNCTION(activateObject) 
	#endif

	#ifndef GEODE_STATICS_deactivateObject
		#define GEODE_STATICS_deactivateObject
		GEODE_AS_STATIC_FUNCTION(deactivateObject) 
	#endif

	#ifndef GEODE_STATICS_transferObjectRect
		#define GEODE_STATICS_transferObjectRect
		GEODE_AS_STATIC_FUNCTION(transferObjectRect) 
	#endif

	#ifndef GEODE_STATICS_getObjectRect
		#define GEODE_STATICS_getObjectRect
		GEODE_AS_STATIC_FUNCTION(getObjectRect) 
	#endif

	#ifndef GEODE_STATICS_getObjectRect2
		#define GEODE_STATICS_getObjectRect2
		GEODE_AS_STATIC_FUNCTION(getObjectRect2) 
	#endif

	#ifndef GEODE_STATICS_getObjectTextureRect
		#define GEODE_STATICS_getObjectTextureRect
		GEODE_AS_STATIC_FUNCTION(getObjectTextureRect) 
	#endif

	#ifndef GEODE_STATICS_getRealPosition
		#define GEODE_STATICS_getRealPosition
		GEODE_AS_STATIC_FUNCTION(getRealPosition) 
	#endif

	#ifndef GEODE_STATICS_setStartPos
		#define GEODE_STATICS_setStartPos
		GEODE_AS_STATIC_FUNCTION(setStartPos) 
	#endif

	#ifndef GEODE_STATICS_updateStartValues
		#define GEODE_STATICS_updateStartValues
		GEODE_AS_STATIC_FUNCTION(updateStartValues) 
	#endif

	#ifndef GEODE_STATICS_getSaveString
		#define GEODE_STATICS_getSaveString
		GEODE_AS_STATIC_FUNCTION(getSaveString) 
	#endif

	#ifndef GEODE_STATICS_claimParticle
		#define GEODE_STATICS_claimParticle
		GEODE_AS_STATIC_FUNCTION(claimParticle) 
	#endif

	#ifndef GEODE_STATICS_unclaimParticle
		#define GEODE_STATICS_unclaimParticle
		GEODE_AS_STATIC_FUNCTION(unclaimParticle) 
	#endif

	#ifndef GEODE_STATICS_particleWasActivated
		#define GEODE_STATICS_particleWasActivated
		GEODE_AS_STATIC_FUNCTION(particleWasActivated) 
	#endif

	#ifndef GEODE_STATICS_isFlipX
		#define GEODE_STATICS_isFlipX
		GEODE_AS_STATIC_FUNCTION(isFlipX) 
	#endif

	#ifndef GEODE_STATICS_isFlipY
		#define GEODE_STATICS_isFlipY
		GEODE_AS_STATIC_FUNCTION(isFlipY) 
	#endif

	#ifndef GEODE_STATICS_setRScaleX
		#define GEODE_STATICS_setRScaleX
		GEODE_AS_STATIC_FUNCTION(setRScaleX) 
	#endif

	#ifndef GEODE_STATICS_setRScaleY
		#define GEODE_STATICS_setRScaleY
		GEODE_AS_STATIC_FUNCTION(setRScaleY) 
	#endif

	#ifndef GEODE_STATICS_setRScale
		#define GEODE_STATICS_setRScale
		GEODE_AS_STATIC_FUNCTION(setRScale) 
	#endif

	#ifndef GEODE_STATICS_getRScaleX
		#define GEODE_STATICS_getRScaleX
		GEODE_AS_STATIC_FUNCTION(getRScaleX) 
	#endif

	#ifndef GEODE_STATICS_getRScaleY
		#define GEODE_STATICS_getRScaleY
		GEODE_AS_STATIC_FUNCTION(getRScaleY) 
	#endif

	#ifndef GEODE_STATICS_setRRotation
		#define GEODE_STATICS_setRRotation
		GEODE_AS_STATIC_FUNCTION(setRRotation) 
	#endif

	#ifndef GEODE_STATICS_setObjectColor
		#define GEODE_STATICS_setObjectColor
		GEODE_AS_STATIC_FUNCTION(setObjectColor) 
	#endif

	#ifndef GEODE_STATICS_setGlowColor
		#define GEODE_STATICS_setGlowColor
		GEODE_AS_STATIC_FUNCTION(setGlowColor) 
	#endif

	#ifndef GEODE_STATICS_restoreObject
		#define GEODE_STATICS_restoreObject
		GEODE_AS_STATIC_FUNCTION(restoreObject) 
	#endif

	#ifndef GEODE_STATICS_selectObject
		#define GEODE_STATICS_selectObject
		GEODE_AS_STATIC_FUNCTION(selectObject) 
	#endif

	#ifndef GEODE_STATICS_getOrientedBox
		#define GEODE_STATICS_getOrientedBox
		GEODE_AS_STATIC_FUNCTION(getOrientedBox) 
	#endif

	#ifndef GEODE_STATICS_updateOrientedBox
		#define GEODE_STATICS_updateOrientedBox
		GEODE_AS_STATIC_FUNCTION(updateOrientedBox) 
	#endif

	#ifndef GEODE_STATICS_getObjectRotation
		#define GEODE_STATICS_getObjectRotation
		GEODE_AS_STATIC_FUNCTION(getObjectRotation) 
	#endif

	#ifndef GEODE_STATICS_updateMainColor
		#define GEODE_STATICS_updateMainColor
		GEODE_AS_STATIC_FUNCTION(updateMainColor) 
	#endif

	#ifndef GEODE_STATICS_updateSecondaryColor
		#define GEODE_STATICS_updateSecondaryColor
		GEODE_AS_STATIC_FUNCTION(updateSecondaryColor) 
	#endif

	#ifndef GEODE_STATICS_addToGroup
		#define GEODE_STATICS_addToGroup
		GEODE_AS_STATIC_FUNCTION(addToGroup) 
	#endif

	#ifndef GEODE_STATICS_removeFromGroup
		#define GEODE_STATICS_removeFromGroup
		GEODE_AS_STATIC_FUNCTION(removeFromGroup) 
	#endif

	#ifndef GEODE_STATICS_saveActiveColors
		#define GEODE_STATICS_saveActiveColors
		GEODE_AS_STATIC_FUNCTION(saveActiveColors) 
	#endif

	#ifndef GEODE_STATICS_spawnXPosition
		#define GEODE_STATICS_spawnXPosition
		GEODE_AS_STATIC_FUNCTION(spawnXPosition) 
	#endif

	#ifndef GEODE_STATICS_updateParticleColor
		#define GEODE_STATICS_updateParticleColor
		GEODE_AS_STATIC_FUNCTION(updateParticleColor) 
	#endif

	#ifndef GEODE_STATICS_updateParticleOpacity
		#define GEODE_STATICS_updateParticleOpacity
		GEODE_AS_STATIC_FUNCTION(updateParticleOpacity) 
	#endif

	#ifndef GEODE_STATICS_shouldDrawEditorHitbox
		#define GEODE_STATICS_shouldDrawEditorHitbox
		GEODE_AS_STATIC_FUNCTION(shouldDrawEditorHitbox) 
	#endif

	#ifndef GEODE_STATICS_getObjectRectDirty
		#define GEODE_STATICS_getObjectRectDirty
		GEODE_AS_STATIC_FUNCTION(getObjectRectDirty) 
	#endif

	#ifndef GEODE_STATICS_setObjectRectDirty
		#define GEODE_STATICS_setObjectRectDirty
		GEODE_AS_STATIC_FUNCTION(setObjectRectDirty) 
	#endif

	#ifndef GEODE_STATICS_getOrientedRectDirty
		#define GEODE_STATICS_getOrientedRectDirty
		GEODE_AS_STATIC_FUNCTION(getOrientedRectDirty) 
	#endif

	#ifndef GEODE_STATICS_setOrientedRectDirty
		#define GEODE_STATICS_setOrientedRectDirty
		GEODE_AS_STATIC_FUNCTION(setOrientedRectDirty) 
	#endif

	#ifndef GEODE_STATICS_getType
		#define GEODE_STATICS_getType
		GEODE_AS_STATIC_FUNCTION(getType) 
	#endif

	#ifndef GEODE_STATICS_setType
		#define GEODE_STATICS_setType
		GEODE_AS_STATIC_FUNCTION(setType) 
	#endif

	#ifndef GEODE_STATICS_getStartPos
		#define GEODE_STATICS_getStartPos
		GEODE_AS_STATIC_FUNCTION(getStartPos) 
	#endif

	#ifndef GEODE_STATICS_addColorSprite
		#define GEODE_STATICS_addColorSprite
		GEODE_AS_STATIC_FUNCTION(addColorSprite) 
	#endif

	#ifndef GEODE_STATICS_addColorSpriteToParent
		#define GEODE_STATICS_addColorSpriteToParent
		GEODE_AS_STATIC_FUNCTION(addColorSpriteToParent) 
	#endif

	#ifndef GEODE_STATICS_addColorSpriteToSelf
		#define GEODE_STATICS_addColorSpriteToSelf
		GEODE_AS_STATIC_FUNCTION(addColorSpriteToSelf) 
	#endif

	#ifndef GEODE_STATICS_addCustomBlackChild
		#define GEODE_STATICS_addCustomBlackChild
		GEODE_AS_STATIC_FUNCTION(addCustomBlackChild) 
	#endif

	#ifndef GEODE_STATICS_addCustomChild
		#define GEODE_STATICS_addCustomChild
		GEODE_AS_STATIC_FUNCTION(addCustomChild) 
	#endif

	#ifndef GEODE_STATICS_addCustomColorChild
		#define GEODE_STATICS_addCustomColorChild
		GEODE_AS_STATIC_FUNCTION(addCustomColorChild) 
	#endif

	#ifndef GEODE_STATICS_addEmptyGlow
		#define GEODE_STATICS_addEmptyGlow
		GEODE_AS_STATIC_FUNCTION(addEmptyGlow) 
	#endif

	#ifndef GEODE_STATICS_addGlow
		#define GEODE_STATICS_addGlow
		GEODE_AS_STATIC_FUNCTION(addGlow) 
	#endif

	#ifndef GEODE_STATICS_addInternalChild
		#define GEODE_STATICS_addInternalChild
		GEODE_AS_STATIC_FUNCTION(addInternalChild) 
	#endif

	#ifndef GEODE_STATICS_addInternalCustomColorChild
		#define GEODE_STATICS_addInternalCustomColorChild
		GEODE_AS_STATIC_FUNCTION(addInternalCustomColorChild) 
	#endif

	#ifndef GEODE_STATICS_addInternalGlowChild
		#define GEODE_STATICS_addInternalGlowChild
		GEODE_AS_STATIC_FUNCTION(addInternalGlowChild) 
	#endif

	#ifndef GEODE_STATICS_addNewSlope01
		#define GEODE_STATICS_addNewSlope01
		GEODE_AS_STATIC_FUNCTION(addNewSlope01) 
	#endif

	#ifndef GEODE_STATICS_addNewSlope01Glow
		#define GEODE_STATICS_addNewSlope01Glow
		GEODE_AS_STATIC_FUNCTION(addNewSlope01Glow) 
	#endif

	#ifndef GEODE_STATICS_addNewSlope02
		#define GEODE_STATICS_addNewSlope02
		GEODE_AS_STATIC_FUNCTION(addNewSlope02) 
	#endif

	#ifndef GEODE_STATICS_addNewSlope02Glow
		#define GEODE_STATICS_addNewSlope02Glow
		GEODE_AS_STATIC_FUNCTION(addNewSlope02Glow) 
	#endif

	#ifndef GEODE_STATICS_addRotation
		#define GEODE_STATICS_addRotation
		GEODE_AS_STATIC_FUNCTION(addRotation) 
	#endif

	#ifndef GEODE_STATICS_addToColorGroup
		#define GEODE_STATICS_addToColorGroup
		GEODE_AS_STATIC_FUNCTION(addToColorGroup) 
	#endif

	#ifndef GEODE_STATICS_addToCustomScaleX
		#define GEODE_STATICS_addToCustomScaleX
		GEODE_AS_STATIC_FUNCTION(addToCustomScaleX) 
	#endif

	#ifndef GEODE_STATICS_addToCustomScaleY
		#define GEODE_STATICS_addToCustomScaleY
		GEODE_AS_STATIC_FUNCTION(addToCustomScaleY) 
	#endif

	#ifndef GEODE_STATICS_addToOpacityGroup
		#define GEODE_STATICS_addToOpacityGroup
		GEODE_AS_STATIC_FUNCTION(addToOpacityGroup) 
	#endif

	#ifndef GEODE_STATICS_addToTempOffset
		#define GEODE_STATICS_addToTempOffset
		GEODE_AS_STATIC_FUNCTION(addToTempOffset) 
	#endif

	#ifndef GEODE_STATICS_assignUniqueID
		#define GEODE_STATICS_assignUniqueID
		GEODE_AS_STATIC_FUNCTION(assignUniqueID) 
	#endif

	#ifndef GEODE_STATICS_belongsToGroup
		#define GEODE_STATICS_belongsToGroup
		GEODE_AS_STATIC_FUNCTION(belongsToGroup) 
	#endif

	#ifndef GEODE_STATICS_calculateOrientedBox
		#define GEODE_STATICS_calculateOrientedBox
		GEODE_AS_STATIC_FUNCTION(calculateOrientedBox) 
	#endif

	#ifndef GEODE_STATICS_canChangeCustomColor
		#define GEODE_STATICS_canChangeCustomColor
		GEODE_AS_STATIC_FUNCTION(canChangeCustomColor) 
	#endif

	#ifndef GEODE_STATICS_canChangeMainColor
		#define GEODE_STATICS_canChangeMainColor
		GEODE_AS_STATIC_FUNCTION(canChangeMainColor) 
	#endif

	#ifndef GEODE_STATICS_canChangeSecondaryColor
		#define GEODE_STATICS_canChangeSecondaryColor
		GEODE_AS_STATIC_FUNCTION(canChangeSecondaryColor) 
	#endif

	#ifndef GEODE_STATICS_canRotateFree
		#define GEODE_STATICS_canRotateFree
		GEODE_AS_STATIC_FUNCTION(canRotateFree) 
	#endif

	#ifndef GEODE_STATICS_colorForMode
		#define GEODE_STATICS_colorForMode
		GEODE_AS_STATIC_FUNCTION(colorForMode) 
	#endif

	#ifndef GEODE_STATICS_commonInteractiveSetup
		#define GEODE_STATICS_commonInteractiveSetup
		GEODE_AS_STATIC_FUNCTION(commonInteractiveSetup) 
	#endif

	#ifndef GEODE_STATICS_commonSetup
		#define GEODE_STATICS_commonSetup
		GEODE_AS_STATIC_FUNCTION(commonSetup) 
	#endif

	#ifndef GEODE_STATICS_copyGroups
		#define GEODE_STATICS_copyGroups
		GEODE_AS_STATIC_FUNCTION(copyGroups) 
	#endif

	#ifndef GEODE_STATICS_createAndAddParticle
		#define GEODE_STATICS_createAndAddParticle
		GEODE_AS_STATIC_FUNCTION(createAndAddParticle) 
	#endif

	#ifndef GEODE_STATICS_createColorGroupContainer
		#define GEODE_STATICS_createColorGroupContainer
		GEODE_AS_STATIC_FUNCTION(createColorGroupContainer) 
	#endif

	#ifndef GEODE_STATICS_createGlow
		#define GEODE_STATICS_createGlow
		GEODE_AS_STATIC_FUNCTION(createGlow) 
	#endif

	#ifndef GEODE_STATICS_createGroupContainer
		#define GEODE_STATICS_createGroupContainer
		GEODE_AS_STATIC_FUNCTION(createGroupContainer) 
	#endif

	#ifndef GEODE_STATICS_createOpacityGroupContainer
		#define GEODE_STATICS_createOpacityGroupContainer
		GEODE_AS_STATIC_FUNCTION(createOpacityGroupContainer) 
	#endif

	#ifndef GEODE_STATICS_createSpriteColor
		#define GEODE_STATICS_createSpriteColor
		GEODE_AS_STATIC_FUNCTION(createSpriteColor) 
	#endif

	#ifndef GEODE_STATICS_deselectObject
		#define GEODE_STATICS_deselectObject
		GEODE_AS_STATIC_FUNCTION(deselectObject) 
	#endif

	#ifndef GEODE_STATICS_destroyObject
		#define GEODE_STATICS_destroyObject
		GEODE_AS_STATIC_FUNCTION(destroyObject) 
	#endif

	#ifndef GEODE_STATICS_determineSlopeDirection
		#define GEODE_STATICS_determineSlopeDirection
		GEODE_AS_STATIC_FUNCTION(determineSlopeDirection) 
	#endif

	#ifndef GEODE_STATICS_didScaleXChange
		#define GEODE_STATICS_didScaleXChange
		GEODE_AS_STATIC_FUNCTION(didScaleXChange) 
	#endif

	#ifndef GEODE_STATICS_didScaleYChange
		#define GEODE_STATICS_didScaleYChange
		GEODE_AS_STATIC_FUNCTION(didScaleYChange) 
	#endif

	#ifndef GEODE_STATICS_dirtifyObjectPos
		#define GEODE_STATICS_dirtifyObjectPos
		GEODE_AS_STATIC_FUNCTION(dirtifyObjectPos) 
	#endif

	#ifndef GEODE_STATICS_dirtifyObjectRect
		#define GEODE_STATICS_dirtifyObjectRect
		GEODE_AS_STATIC_FUNCTION(dirtifyObjectRect) 
	#endif

	#ifndef GEODE_STATICS_disableObject
		#define GEODE_STATICS_disableObject
		GEODE_AS_STATIC_FUNCTION(disableObject) 
	#endif

	#ifndef GEODE_STATICS_dontCountTowardsLimit
		#define GEODE_STATICS_dontCountTowardsLimit
		GEODE_AS_STATIC_FUNCTION(dontCountTowardsLimit) 
	#endif

	#ifndef GEODE_STATICS_duplicateAttributes
		#define GEODE_STATICS_duplicateAttributes
		GEODE_AS_STATIC_FUNCTION(duplicateAttributes) 
	#endif

	#ifndef GEODE_STATICS_duplicateColorMode
		#define GEODE_STATICS_duplicateColorMode
		GEODE_AS_STATIC_FUNCTION(duplicateColorMode) 
	#endif

	#ifndef GEODE_STATICS_duplicateValues
		#define GEODE_STATICS_duplicateValues
		GEODE_AS_STATIC_FUNCTION(duplicateValues) 
	#endif

	#ifndef GEODE_STATICS_editorColorForCustomMode
		#define GEODE_STATICS_editorColorForCustomMode
		GEODE_AS_STATIC_FUNCTION(editorColorForCustomMode) 
	#endif

	#ifndef GEODE_STATICS_editorColorForMode
		#define GEODE_STATICS_editorColorForMode
		GEODE_AS_STATIC_FUNCTION(editorColorForMode) 
	#endif

	#ifndef GEODE_STATICS_fastRotateObject
		#define GEODE_STATICS_fastRotateObject
		GEODE_AS_STATIC_FUNCTION(fastRotateObject) 
	#endif

	#ifndef GEODE_STATICS_getActiveColorForMode
		#define GEODE_STATICS_getActiveColorForMode
		GEODE_AS_STATIC_FUNCTION(getActiveColorForMode) 
	#endif

	#ifndef GEODE_STATICS_getBallFrame
		#define GEODE_STATICS_getBallFrame
		GEODE_AS_STATIC_FUNCTION(getBallFrame) 
	#endif

	#ifndef GEODE_STATICS_getBoundingRect
		#define GEODE_STATICS_getBoundingRect
		GEODE_AS_STATIC_FUNCTION(getBoundingRect) 
	#endif

	#ifndef GEODE_STATICS_getBoxOffset
		#define GEODE_STATICS_getBoxOffset
		GEODE_AS_STATIC_FUNCTION(getBoxOffset) 
	#endif

	#ifndef GEODE_STATICS_getColorFrame
		#define GEODE_STATICS_getColorFrame
		GEODE_AS_STATIC_FUNCTION(getColorFrame) 
	#endif

	#ifndef GEODE_STATICS_getColorIndex
		#define GEODE_STATICS_getColorIndex
		GEODE_AS_STATIC_FUNCTION(getColorIndex) 
	#endif

	#ifndef GEODE_STATICS_getColorKey
		#define GEODE_STATICS_getColorKey
		GEODE_AS_STATIC_FUNCTION(getColorKey) 
	#endif

	#ifndef GEODE_STATICS_getCustomZLayer
		#define GEODE_STATICS_getCustomZLayer
		GEODE_AS_STATIC_FUNCTION(getCustomZLayer) 
	#endif

	#ifndef GEODE_STATICS_getGlowFrame
		#define GEODE_STATICS_getGlowFrame
		GEODE_AS_STATIC_FUNCTION(getGlowFrame) 
	#endif

	#ifndef GEODE_STATICS_getGroupDisabled
		#define GEODE_STATICS_getGroupDisabled
		GEODE_AS_STATIC_FUNCTION(getGroupDisabled) 
	#endif

	#ifndef GEODE_STATICS_getGroupID
		#define GEODE_STATICS_getGroupID
		GEODE_AS_STATIC_FUNCTION(getGroupID) 
	#endif

	#ifndef GEODE_STATICS_getGroupString
		#define GEODE_STATICS_getGroupString
		GEODE_AS_STATIC_FUNCTION(getGroupString) 
	#endif

	#ifndef GEODE_STATICS_getLastPosition
		#define GEODE_STATICS_getLastPosition
		GEODE_AS_STATIC_FUNCTION(getLastPosition) 
	#endif

	#ifndef GEODE_STATICS_getMainColor
		#define GEODE_STATICS_getMainColor
		GEODE_AS_STATIC_FUNCTION(getMainColor) 
	#endif

	#ifndef GEODE_STATICS_getMainColorMode
		#define GEODE_STATICS_getMainColorMode
		GEODE_AS_STATIC_FUNCTION(getMainColorMode) 
	#endif

	#ifndef GEODE_STATICS_getObjectDirection
		#define GEODE_STATICS_getObjectDirection
		GEODE_AS_STATIC_FUNCTION(getObjectDirection) 
	#endif

	#ifndef GEODE_STATICS_getObjectRadius
		#define GEODE_STATICS_getObjectRadius
		GEODE_AS_STATIC_FUNCTION(getObjectRadius) 
	#endif

	#ifndef GEODE_STATICS_getObjectRectPointer
		#define GEODE_STATICS_getObjectRectPointer
		GEODE_AS_STATIC_FUNCTION(getObjectRectPointer) 
	#endif

	#ifndef GEODE_STATICS_getObjectZLayer
		#define GEODE_STATICS_getObjectZLayer
		GEODE_AS_STATIC_FUNCTION(getObjectZLayer) 
	#endif

	#ifndef GEODE_STATICS_getObjectZOrder
		#define GEODE_STATICS_getObjectZOrder
		GEODE_AS_STATIC_FUNCTION(getObjectZOrder) 
	#endif

	#ifndef GEODE_STATICS_getOuterObjectRect
		#define GEODE_STATICS_getOuterObjectRect
		GEODE_AS_STATIC_FUNCTION(getOuterObjectRect) 
	#endif

	#ifndef GEODE_STATICS_getParentMode
		#define GEODE_STATICS_getParentMode
		GEODE_AS_STATIC_FUNCTION(getParentMode) 
	#endif

	#ifndef GEODE_STATICS_getRelativeSpriteColor
		#define GEODE_STATICS_getRelativeSpriteColor
		GEODE_AS_STATIC_FUNCTION(getRelativeSpriteColor) 
	#endif

	#ifndef GEODE_STATICS_getScalePosDelta
		#define GEODE_STATICS_getScalePosDelta
		GEODE_AS_STATIC_FUNCTION(getScalePosDelta) 
	#endif

	#ifndef GEODE_STATICS_getSecondaryColor
		#define GEODE_STATICS_getSecondaryColor
		GEODE_AS_STATIC_FUNCTION(getSecondaryColor) 
	#endif

	#ifndef GEODE_STATICS_getSecondaryColorMode
		#define GEODE_STATICS_getSecondaryColorMode
		GEODE_AS_STATIC_FUNCTION(getSecondaryColorMode) 
	#endif

	#ifndef GEODE_STATICS_getSlopeAngle
		#define GEODE_STATICS_getSlopeAngle
		GEODE_AS_STATIC_FUNCTION(getSlopeAngle) 
	#endif

	#ifndef GEODE_STATICS_getUnmodifiedPosition
		#define GEODE_STATICS_getUnmodifiedPosition
		GEODE_AS_STATIC_FUNCTION(getUnmodifiedPosition) 
	#endif

	#ifndef GEODE_STATICS_groupColor
		#define GEODE_STATICS_groupColor
		GEODE_AS_STATIC_FUNCTION(groupColor) 
	#endif

	#ifndef GEODE_STATICS_groupOpacityMod
		#define GEODE_STATICS_groupOpacityMod
		GEODE_AS_STATIC_FUNCTION(groupOpacityMod) 
	#endif

	#ifndef GEODE_STATICS_groupWasDisabled
		#define GEODE_STATICS_groupWasDisabled
		GEODE_AS_STATIC_FUNCTION(groupWasDisabled) 
	#endif

	#ifndef GEODE_STATICS_groupWasEnabled
		#define GEODE_STATICS_groupWasEnabled
		GEODE_AS_STATIC_FUNCTION(groupWasEnabled) 
	#endif

	#ifndef GEODE_STATICS_hasSecondaryColor
		#define GEODE_STATICS_hasSecondaryColor
		GEODE_AS_STATIC_FUNCTION(hasSecondaryColor) 
	#endif

	#ifndef GEODE_STATICS_ignoreEditorDuration
		#define GEODE_STATICS_ignoreEditorDuration
		GEODE_AS_STATIC_FUNCTION(ignoreEditorDuration) 
	#endif

	#ifndef GEODE_STATICS_ignoreEnter
		#define GEODE_STATICS_ignoreEnter
		GEODE_AS_STATIC_FUNCTION(ignoreEnter) 
	#endif

	#ifndef GEODE_STATICS_ignoreFade
		#define GEODE_STATICS_ignoreFade
		GEODE_AS_STATIC_FUNCTION(ignoreFade) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_isBasicTrigger
		#define GEODE_STATICS_isBasicTrigger
		GEODE_AS_STATIC_FUNCTION(isBasicTrigger) 
	#endif

	#ifndef GEODE_STATICS_isColorObject
		#define GEODE_STATICS_isColorObject
		GEODE_AS_STATIC_FUNCTION(isColorObject) 
	#endif

	#ifndef GEODE_STATICS_isColorTrigger
		#define GEODE_STATICS_isColorTrigger
		GEODE_AS_STATIC_FUNCTION(isColorTrigger) 
	#endif

	#ifndef GEODE_STATICS_isConfigurablePortal
		#define GEODE_STATICS_isConfigurablePortal
		GEODE_AS_STATIC_FUNCTION(isConfigurablePortal) 
	#endif

	#ifndef GEODE_STATICS_isEditorSpawnableTrigger
		#define GEODE_STATICS_isEditorSpawnableTrigger
		GEODE_AS_STATIC_FUNCTION(isEditorSpawnableTrigger) 
	#endif

	#ifndef GEODE_STATICS_isFacingDown
		#define GEODE_STATICS_isFacingDown
		GEODE_AS_STATIC_FUNCTION(isFacingDown) 
	#endif

	#ifndef GEODE_STATICS_isFacingLeft
		#define GEODE_STATICS_isFacingLeft
		GEODE_AS_STATIC_FUNCTION(isFacingLeft) 
	#endif

	#ifndef GEODE_STATICS_isSettingsObject
		#define GEODE_STATICS_isSettingsObject
		GEODE_AS_STATIC_FUNCTION(isSettingsObject) 
	#endif

	#ifndef GEODE_STATICS_isSpawnableTrigger
		#define GEODE_STATICS_isSpawnableTrigger
		GEODE_AS_STATIC_FUNCTION(isSpawnableTrigger) 
	#endif

	#ifndef GEODE_STATICS_isSpecialObject
		#define GEODE_STATICS_isSpecialObject
		GEODE_AS_STATIC_FUNCTION(isSpecialObject) 
	#endif

	#ifndef GEODE_STATICS_isSpeedObject
		#define GEODE_STATICS_isSpeedObject
		GEODE_AS_STATIC_FUNCTION(isSpeedObject) 
	#endif

	#ifndef GEODE_STATICS_isStoppableTrigger
		#define GEODE_STATICS_isStoppableTrigger
		GEODE_AS_STATIC_FUNCTION(isStoppableTrigger) 
	#endif

	#ifndef GEODE_STATICS_isTrigger
		#define GEODE_STATICS_isTrigger
		GEODE_AS_STATIC_FUNCTION(isTrigger) 
	#endif

	#ifndef GEODE_STATICS_loadGroupsFromString
		#define GEODE_STATICS_loadGroupsFromString
		GEODE_AS_STATIC_FUNCTION(loadGroupsFromString) 
	#endif

	#ifndef GEODE_STATICS_makeInvisible
		#define GEODE_STATICS_makeInvisible
		GEODE_AS_STATIC_FUNCTION(makeInvisible) 
	#endif

	#ifndef GEODE_STATICS_makeVisible
		#define GEODE_STATICS_makeVisible
		GEODE_AS_STATIC_FUNCTION(makeVisible) 
	#endif

	#ifndef GEODE_STATICS_opacityModForMode
		#define GEODE_STATICS_opacityModForMode
		GEODE_AS_STATIC_FUNCTION(opacityModForMode) 
	#endif

	#ifndef GEODE_STATICS_parentForZLayer
		#define GEODE_STATICS_parentForZLayer
		GEODE_AS_STATIC_FUNCTION(parentForZLayer) 
	#endif

	#ifndef GEODE_STATICS_perspectiveColorFrame
		#define GEODE_STATICS_perspectiveColorFrame
		GEODE_AS_STATIC_FUNCTION(perspectiveColorFrame) 
	#endif

	#ifndef GEODE_STATICS_perspectiveFrame
		#define GEODE_STATICS_perspectiveFrame
		GEODE_AS_STATIC_FUNCTION(perspectiveFrame) 
	#endif

	#ifndef GEODE_STATICS_playDestroyObjectAnim
		#define GEODE_STATICS_playDestroyObjectAnim
		GEODE_AS_STATIC_FUNCTION(playDestroyObjectAnim) 
	#endif

	#ifndef GEODE_STATICS_playPickupAnimation
		#define GEODE_STATICS_playPickupAnimation
		GEODE_AS_STATIC_FUNCTION(playPickupAnimation) 
	#endif

	#ifndef GEODE_STATICS_playShineEffect
		#define GEODE_STATICS_playShineEffect
		GEODE_AS_STATIC_FUNCTION(playShineEffect) 
	#endif

	#ifndef GEODE_STATICS_quickUpdatePosition
		#define GEODE_STATICS_quickUpdatePosition
		GEODE_AS_STATIC_FUNCTION(quickUpdatePosition) 
	#endif

	#ifndef GEODE_STATICS_quickUpdatePosition2
		#define GEODE_STATICS_quickUpdatePosition2
		GEODE_AS_STATIC_FUNCTION(quickUpdatePosition2) 
	#endif

	#ifndef GEODE_STATICS_removeColorSprite
		#define GEODE_STATICS_removeColorSprite
		GEODE_AS_STATIC_FUNCTION(removeColorSprite) 
	#endif

	#ifndef GEODE_STATICS_removeGlow
		#define GEODE_STATICS_removeGlow
		GEODE_AS_STATIC_FUNCTION(removeGlow) 
	#endif

	#ifndef GEODE_STATICS_reorderColorSprite
		#define GEODE_STATICS_reorderColorSprite
		GEODE_AS_STATIC_FUNCTION(reorderColorSprite) 
	#endif

	#ifndef GEODE_STATICS_resetColorGroups
		#define GEODE_STATICS_resetColorGroups
		GEODE_AS_STATIC_FUNCTION(resetColorGroups) 
	#endif

	#ifndef GEODE_STATICS_resetGroupDisabled
		#define GEODE_STATICS_resetGroupDisabled
		GEODE_AS_STATIC_FUNCTION(resetGroupDisabled) 
	#endif

	#ifndef GEODE_STATICS_resetGroups
		#define GEODE_STATICS_resetGroups
		GEODE_AS_STATIC_FUNCTION(resetGroups) 
	#endif

	#ifndef GEODE_STATICS_resetMainColorMode
		#define GEODE_STATICS_resetMainColorMode
		GEODE_AS_STATIC_FUNCTION(resetMainColorMode) 
	#endif

	#ifndef GEODE_STATICS_resetMoveOffset
		#define GEODE_STATICS_resetMoveOffset
		GEODE_AS_STATIC_FUNCTION(resetMoveOffset) 
	#endif

	#ifndef GEODE_STATICS_resetRScaleForced
		#define GEODE_STATICS_resetRScaleForced
		GEODE_AS_STATIC_FUNCTION(resetRScaleForced) 
	#endif

	#ifndef GEODE_STATICS_resetSecondaryColorMode
		#define GEODE_STATICS_resetSecondaryColorMode
		GEODE_AS_STATIC_FUNCTION(resetSecondaryColorMode) 
	#endif

	#ifndef GEODE_STATICS_setAreaOpacity
		#define GEODE_STATICS_setAreaOpacity
		GEODE_AS_STATIC_FUNCTION(setAreaOpacity) 
	#endif

	#ifndef GEODE_STATICS_setCustomZLayer
		#define GEODE_STATICS_setCustomZLayer
		GEODE_AS_STATIC_FUNCTION(setCustomZLayer) 
	#endif

	#ifndef GEODE_STATICS_setDefaultMainColorMode
		#define GEODE_STATICS_setDefaultMainColorMode
		GEODE_AS_STATIC_FUNCTION(setDefaultMainColorMode) 
	#endif

	#ifndef GEODE_STATICS_setDefaultSecondaryColorMode
		#define GEODE_STATICS_setDefaultSecondaryColorMode
		GEODE_AS_STATIC_FUNCTION(setDefaultSecondaryColorMode) 
	#endif

	#ifndef GEODE_STATICS_setGlowOpacity
		#define GEODE_STATICS_setGlowOpacity
		GEODE_AS_STATIC_FUNCTION(setGlowOpacity) 
	#endif

	#ifndef GEODE_STATICS_setLastPosition
		#define GEODE_STATICS_setLastPosition
		GEODE_AS_STATIC_FUNCTION(setLastPosition) 
	#endif

	#ifndef GEODE_STATICS_setMainColorMode
		#define GEODE_STATICS_setMainColorMode
		GEODE_AS_STATIC_FUNCTION(setMainColorMode) 
	#endif

	#ifndef GEODE_STATICS_setSecondaryColorMode
		#define GEODE_STATICS_setSecondaryColorMode
		GEODE_AS_STATIC_FUNCTION(setSecondaryColorMode) 
	#endif

	#ifndef GEODE_STATICS_setupColorSprite
		#define GEODE_STATICS_setupColorSprite
		GEODE_AS_STATIC_FUNCTION(setupColorSprite) 
	#endif

	#ifndef GEODE_STATICS_setupPixelScale
		#define GEODE_STATICS_setupPixelScale
		GEODE_AS_STATIC_FUNCTION(setupPixelScale) 
	#endif

	#ifndef GEODE_STATICS_setupSpriteSize
		#define GEODE_STATICS_setupSpriteSize
		GEODE_AS_STATIC_FUNCTION(setupSpriteSize) 
	#endif

	#ifndef GEODE_STATICS_shouldBlendColor
		#define GEODE_STATICS_shouldBlendColor
		GEODE_AS_STATIC_FUNCTION(shouldBlendColor) 
	#endif

	#ifndef GEODE_STATICS_shouldLockX
		#define GEODE_STATICS_shouldLockX
		GEODE_AS_STATIC_FUNCTION(shouldLockX) 
	#endif

	#ifndef GEODE_STATICS_shouldNotHideAnimFreeze
		#define GEODE_STATICS_shouldNotHideAnimFreeze
		GEODE_AS_STATIC_FUNCTION(shouldNotHideAnimFreeze) 
	#endif

	#ifndef GEODE_STATICS_shouldShowPickupEffects
		#define GEODE_STATICS_shouldShowPickupEffects
		GEODE_AS_STATIC_FUNCTION(shouldShowPickupEffects) 
	#endif

	#ifndef GEODE_STATICS_slopeFloorTop
		#define GEODE_STATICS_slopeFloorTop
		GEODE_AS_STATIC_FUNCTION(slopeFloorTop) 
	#endif

	#ifndef GEODE_STATICS_slopeWallLeft
		#define GEODE_STATICS_slopeWallLeft
		GEODE_AS_STATIC_FUNCTION(slopeWallLeft) 
	#endif

	#ifndef GEODE_STATICS_slopeYPos
		#define GEODE_STATICS_slopeYPos
		GEODE_AS_STATIC_FUNCTION(slopeYPos) 
	#endif

	#ifndef GEODE_STATICS_spawnDefaultPickupParticle
		#define GEODE_STATICS_spawnDefaultPickupParticle
		GEODE_AS_STATIC_FUNCTION(spawnDefaultPickupParticle) 
	#endif

	#ifndef GEODE_STATICS_updateBlendMode
		#define GEODE_STATICS_updateBlendMode
		GEODE_AS_STATIC_FUNCTION(updateBlendMode) 
	#endif

	#ifndef GEODE_STATICS_updateCustomColorType
		#define GEODE_STATICS_updateCustomColorType
		GEODE_AS_STATIC_FUNCTION(updateCustomColorType) 
	#endif

	#ifndef GEODE_STATICS_updateCustomScaleX
		#define GEODE_STATICS_updateCustomScaleX
		GEODE_AS_STATIC_FUNCTION(updateCustomScaleX) 
	#endif

	#ifndef GEODE_STATICS_updateCustomScaleY
		#define GEODE_STATICS_updateCustomScaleY
		GEODE_AS_STATIC_FUNCTION(updateCustomScaleY) 
	#endif

	#ifndef GEODE_STATICS_updateHSVState
		#define GEODE_STATICS_updateHSVState
		GEODE_AS_STATIC_FUNCTION(updateHSVState) 
	#endif

	#ifndef GEODE_STATICS_updateIsOriented
		#define GEODE_STATICS_updateIsOriented
		GEODE_AS_STATIC_FUNCTION(updateIsOriented) 
	#endif

	#ifndef GEODE_STATICS_updateMainColorOnly
		#define GEODE_STATICS_updateMainColorOnly
		GEODE_AS_STATIC_FUNCTION(updateMainColorOnly) 
	#endif

	#ifndef GEODE_STATICS_updateMainOpacity
		#define GEODE_STATICS_updateMainOpacity
		GEODE_AS_STATIC_FUNCTION(updateMainOpacity) 
	#endif

	#ifndef GEODE_STATICS_updateObjectEditorColor
		#define GEODE_STATICS_updateObjectEditorColor
		GEODE_AS_STATIC_FUNCTION(updateObjectEditorColor) 
	#endif

	#ifndef GEODE_STATICS_updateSecondaryColorOnly
		#define GEODE_STATICS_updateSecondaryColorOnly
		GEODE_AS_STATIC_FUNCTION(updateSecondaryColorOnly) 
	#endif

	#ifndef GEODE_STATICS_updateSecondaryOpacity
		#define GEODE_STATICS_updateSecondaryOpacity
		GEODE_AS_STATIC_FUNCTION(updateSecondaryOpacity) 
	#endif

	#ifndef GEODE_STATICS_updateStartPos
		#define GEODE_STATICS_updateStartPos
		GEODE_AS_STATIC_FUNCTION(updateStartPos) 
	#endif

	#ifndef GEODE_STATICS_updateUnmodifiedPositions
		#define GEODE_STATICS_updateUnmodifiedPositions
		GEODE_AS_STATIC_FUNCTION(updateUnmodifiedPositions) 
	#endif

	#ifndef GEODE_STATICS_usesFreezeAnimation
		#define GEODE_STATICS_usesFreezeAnimation
		GEODE_AS_STATIC_FUNCTION(usesFreezeAnimation) 
	#endif

	#ifndef GEODE_STATICS_usesSpecialAnimation
		#define GEODE_STATICS_usesSpecialAnimation
		GEODE_AS_STATIC_FUNCTION(usesSpecialAnimation) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_createWithFrame
		#define GEODE_CONCEPT_CHECK_createWithFrame
		GEODE_CONCEPT_FUNCTION_CHECK(createWithFrame) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createWithKey
		#define GEODE_CONCEPT_CHECK_createWithKey
		GEODE_CONCEPT_FUNCTION_CHECK(createWithKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isBasicEnterEffect
		#define GEODE_CONCEPT_CHECK_isBasicEnterEffect
		GEODE_CONCEPT_FUNCTION_CHECK(isBasicEnterEffect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_objectFromVector
		#define GEODE_CONCEPT_CHECK_objectFromVector
		GEODE_CONCEPT_FUNCTION_CHECK(objectFromVector) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetMID
		#define GEODE_CONCEPT_CHECK_resetMID
		GEODE_CONCEPT_FUNCTION_CHECK(resetMID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_update
		#define GEODE_CONCEPT_CHECK_update
		GEODE_CONCEPT_FUNCTION_CHECK(update) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setScaleX
		#define GEODE_CONCEPT_CHECK_setScaleX
		GEODE_CONCEPT_FUNCTION_CHECK(setScaleX) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setScaleY
		#define GEODE_CONCEPT_CHECK_setScaleY
		GEODE_CONCEPT_FUNCTION_CHECK(setScaleY) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setScale
		#define GEODE_CONCEPT_CHECK_setScale
		GEODE_CONCEPT_FUNCTION_CHECK(setScale) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setPosition
		#define GEODE_CONCEPT_CHECK_setPosition
		GEODE_CONCEPT_FUNCTION_CHECK(setPosition) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setVisible
		#define GEODE_CONCEPT_CHECK_setVisible
		GEODE_CONCEPT_FUNCTION_CHECK(setVisible) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setRotation
		#define GEODE_CONCEPT_CHECK_setRotation
		GEODE_CONCEPT_FUNCTION_CHECK(setRotation) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setRotationX
		#define GEODE_CONCEPT_CHECK_setRotationX
		GEODE_CONCEPT_FUNCTION_CHECK(setRotationX) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setRotationY
		#define GEODE_CONCEPT_CHECK_setRotationY
		GEODE_CONCEPT_FUNCTION_CHECK(setRotationY) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setOpacity
		#define GEODE_CONCEPT_CHECK_setOpacity
		GEODE_CONCEPT_FUNCTION_CHECK(setOpacity) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_initWithTexture
		#define GEODE_CONCEPT_CHECK_initWithTexture
		GEODE_CONCEPT_FUNCTION_CHECK(initWithTexture) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setChildColor
		#define GEODE_CONCEPT_CHECK_setChildColor
		GEODE_CONCEPT_FUNCTION_CHECK(setChildColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setFlipX
		#define GEODE_CONCEPT_CHECK_setFlipX
		GEODE_CONCEPT_FUNCTION_CHECK(setFlipX) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setFlipY
		#define GEODE_CONCEPT_CHECK_setFlipY
		GEODE_CONCEPT_FUNCTION_CHECK(setFlipY) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_firstSetup
		#define GEODE_CONCEPT_CHECK_firstSetup
		GEODE_CONCEPT_FUNCTION_CHECK(firstSetup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_customSetup
		#define GEODE_CONCEPT_CHECK_customSetup
		GEODE_CONCEPT_FUNCTION_CHECK(customSetup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupCustomSprites
		#define GEODE_CONCEPT_CHECK_setupCustomSprites
		GEODE_CONCEPT_FUNCTION_CHECK(setupCustomSprites) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addMainSpriteToParent
		#define GEODE_CONCEPT_CHECK_addMainSpriteToParent
		GEODE_CONCEPT_FUNCTION_CHECK(addMainSpriteToParent) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetObject
		#define GEODE_CONCEPT_CHECK_resetObject
		GEODE_CONCEPT_FUNCTION_CHECK(resetObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_triggerObject
		#define GEODE_CONCEPT_CHECK_triggerObject
		GEODE_CONCEPT_FUNCTION_CHECK(triggerObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_activateObject
		#define GEODE_CONCEPT_CHECK_activateObject
		GEODE_CONCEPT_FUNCTION_CHECK(activateObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_deactivateObject
		#define GEODE_CONCEPT_CHECK_deactivateObject
		GEODE_CONCEPT_FUNCTION_CHECK(deactivateObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_transferObjectRect
		#define GEODE_CONCEPT_CHECK_transferObjectRect
		GEODE_CONCEPT_FUNCTION_CHECK(transferObjectRect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getObjectRect
		#define GEODE_CONCEPT_CHECK_getObjectRect
		GEODE_CONCEPT_FUNCTION_CHECK(getObjectRect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getObjectRect2
		#define GEODE_CONCEPT_CHECK_getObjectRect2
		GEODE_CONCEPT_FUNCTION_CHECK(getObjectRect2) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getObjectTextureRect
		#define GEODE_CONCEPT_CHECK_getObjectTextureRect
		GEODE_CONCEPT_FUNCTION_CHECK(getObjectTextureRect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getRealPosition
		#define GEODE_CONCEPT_CHECK_getRealPosition
		GEODE_CONCEPT_FUNCTION_CHECK(getRealPosition) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setStartPos
		#define GEODE_CONCEPT_CHECK_setStartPos
		GEODE_CONCEPT_FUNCTION_CHECK(setStartPos) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateStartValues
		#define GEODE_CONCEPT_CHECK_updateStartValues
		GEODE_CONCEPT_FUNCTION_CHECK(updateStartValues) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_customObjectSetup
		#define GEODE_CONCEPT_CHECK_customObjectSetup
		GEODE_CONCEPT_FUNCTION_CHECK(customObjectSetup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSaveString
		#define GEODE_CONCEPT_CHECK_getSaveString
		GEODE_CONCEPT_FUNCTION_CHECK(getSaveString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_claimParticle
		#define GEODE_CONCEPT_CHECK_claimParticle
		GEODE_CONCEPT_FUNCTION_CHECK(claimParticle) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_unclaimParticle
		#define GEODE_CONCEPT_CHECK_unclaimParticle
		GEODE_CONCEPT_FUNCTION_CHECK(unclaimParticle) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_particleWasActivated
		#define GEODE_CONCEPT_CHECK_particleWasActivated
		GEODE_CONCEPT_FUNCTION_CHECK(particleWasActivated) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isFlipX
		#define GEODE_CONCEPT_CHECK_isFlipX
		GEODE_CONCEPT_FUNCTION_CHECK(isFlipX) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isFlipY
		#define GEODE_CONCEPT_CHECK_isFlipY
		GEODE_CONCEPT_FUNCTION_CHECK(isFlipY) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setRScaleX
		#define GEODE_CONCEPT_CHECK_setRScaleX
		GEODE_CONCEPT_FUNCTION_CHECK(setRScaleX) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setRScaleY
		#define GEODE_CONCEPT_CHECK_setRScaleY
		GEODE_CONCEPT_FUNCTION_CHECK(setRScaleY) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setRScale
		#define GEODE_CONCEPT_CHECK_setRScale
		GEODE_CONCEPT_FUNCTION_CHECK(setRScale) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getRScaleX
		#define GEODE_CONCEPT_CHECK_getRScaleX
		GEODE_CONCEPT_FUNCTION_CHECK(getRScaleX) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getRScaleY
		#define GEODE_CONCEPT_CHECK_getRScaleY
		GEODE_CONCEPT_FUNCTION_CHECK(getRScaleY) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setRRotation
		#define GEODE_CONCEPT_CHECK_setRRotation
		GEODE_CONCEPT_FUNCTION_CHECK(setRRotation) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_triggerActivated
		#define GEODE_CONCEPT_CHECK_triggerActivated
		GEODE_CONCEPT_FUNCTION_CHECK(triggerActivated) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setObjectColor
		#define GEODE_CONCEPT_CHECK_setObjectColor
		GEODE_CONCEPT_FUNCTION_CHECK(setObjectColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setGlowColor
		#define GEODE_CONCEPT_CHECK_setGlowColor
		GEODE_CONCEPT_FUNCTION_CHECK(setGlowColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_restoreObject
		#define GEODE_CONCEPT_CHECK_restoreObject
		GEODE_CONCEPT_FUNCTION_CHECK(restoreObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_animationTriggered
		#define GEODE_CONCEPT_CHECK_animationTriggered
		GEODE_CONCEPT_FUNCTION_CHECK(animationTriggered) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_selectObject
		#define GEODE_CONCEPT_CHECK_selectObject
		GEODE_CONCEPT_FUNCTION_CHECK(selectObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_activatedByPlayer
		#define GEODE_CONCEPT_CHECK_activatedByPlayer
		GEODE_CONCEPT_FUNCTION_CHECK(activatedByPlayer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_hasBeenActivatedByPlayer
		#define GEODE_CONCEPT_CHECK_hasBeenActivatedByPlayer
		GEODE_CONCEPT_FUNCTION_CHECK(hasBeenActivatedByPlayer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_hasBeenActivated
		#define GEODE_CONCEPT_CHECK_hasBeenActivated
		GEODE_CONCEPT_FUNCTION_CHECK(hasBeenActivated) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getOrientedBox
		#define GEODE_CONCEPT_CHECK_getOrientedBox
		GEODE_CONCEPT_FUNCTION_CHECK(getOrientedBox) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateOrientedBox
		#define GEODE_CONCEPT_CHECK_updateOrientedBox
		GEODE_CONCEPT_FUNCTION_CHECK(updateOrientedBox) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getObjectRotation
		#define GEODE_CONCEPT_CHECK_getObjectRotation
		GEODE_CONCEPT_FUNCTION_CHECK(getObjectRotation) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateMainColor
		#define GEODE_CONCEPT_CHECK_updateMainColor
		GEODE_CONCEPT_FUNCTION_CHECK(updateMainColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateSecondaryColor
		#define GEODE_CONCEPT_CHECK_updateSecondaryColor
		GEODE_CONCEPT_FUNCTION_CHECK(updateSecondaryColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addToGroup
		#define GEODE_CONCEPT_CHECK_addToGroup
		GEODE_CONCEPT_FUNCTION_CHECK(addToGroup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeFromGroup
		#define GEODE_CONCEPT_CHECK_removeFromGroup
		GEODE_CONCEPT_FUNCTION_CHECK(removeFromGroup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_saveActiveColors
		#define GEODE_CONCEPT_CHECK_saveActiveColors
		GEODE_CONCEPT_FUNCTION_CHECK(saveActiveColors) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_spawnXPosition
		#define GEODE_CONCEPT_CHECK_spawnXPosition
		GEODE_CONCEPT_FUNCTION_CHECK(spawnXPosition) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_canAllowMultiActivate
		#define GEODE_CONCEPT_CHECK_canAllowMultiActivate
		GEODE_CONCEPT_FUNCTION_CHECK(canAllowMultiActivate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_blendModeChanged
		#define GEODE_CONCEPT_CHECK_blendModeChanged
		GEODE_CONCEPT_FUNCTION_CHECK(blendModeChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateParticleColor
		#define GEODE_CONCEPT_CHECK_updateParticleColor
		GEODE_CONCEPT_FUNCTION_CHECK(updateParticleColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateParticleOpacity
		#define GEODE_CONCEPT_CHECK_updateParticleOpacity
		GEODE_CONCEPT_FUNCTION_CHECK(updateParticleOpacity) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateMainParticleOpacity
		#define GEODE_CONCEPT_CHECK_updateMainParticleOpacity
		GEODE_CONCEPT_FUNCTION_CHECK(updateMainParticleOpacity) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateSecondaryParticleOpacity
		#define GEODE_CONCEPT_CHECK_updateSecondaryParticleOpacity
		GEODE_CONCEPT_FUNCTION_CHECK(updateSecondaryParticleOpacity) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_canReverse
		#define GEODE_CONCEPT_CHECK_canReverse
		GEODE_CONCEPT_FUNCTION_CHECK(canReverse) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isSpecialSpawnObject
		#define GEODE_CONCEPT_CHECK_isSpecialSpawnObject
		GEODE_CONCEPT_FUNCTION_CHECK(isSpecialSpawnObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_canBeOrdered
		#define GEODE_CONCEPT_CHECK_canBeOrdered
		GEODE_CONCEPT_FUNCTION_CHECK(canBeOrdered) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getObjectLabel
		#define GEODE_CONCEPT_CHECK_getObjectLabel
		GEODE_CONCEPT_FUNCTION_CHECK(getObjectLabel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setObjectLabel
		#define GEODE_CONCEPT_CHECK_setObjectLabel
		GEODE_CONCEPT_FUNCTION_CHECK(setObjectLabel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_shouldDrawEditorHitbox
		#define GEODE_CONCEPT_CHECK_shouldDrawEditorHitbox
		GEODE_CONCEPT_FUNCTION_CHECK(shouldDrawEditorHitbox) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getHasSyncedAnimation
		#define GEODE_CONCEPT_CHECK_getHasSyncedAnimation
		GEODE_CONCEPT_FUNCTION_CHECK(getHasSyncedAnimation) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getHasRotateAction
		#define GEODE_CONCEPT_CHECK_getHasRotateAction
		GEODE_CONCEPT_FUNCTION_CHECK(getHasRotateAction) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_canMultiActivate
		#define GEODE_CONCEPT_CHECK_canMultiActivate
		GEODE_CONCEPT_FUNCTION_CHECK(canMultiActivate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateTextKerning
		#define GEODE_CONCEPT_CHECK_updateTextKerning
		GEODE_CONCEPT_FUNCTION_CHECK(updateTextKerning) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getTextKerning
		#define GEODE_CONCEPT_CHECK_getTextKerning
		GEODE_CONCEPT_FUNCTION_CHECK(getTextKerning) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getObjectRectDirty
		#define GEODE_CONCEPT_CHECK_getObjectRectDirty
		GEODE_CONCEPT_FUNCTION_CHECK(getObjectRectDirty) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setObjectRectDirty
		#define GEODE_CONCEPT_CHECK_setObjectRectDirty
		GEODE_CONCEPT_FUNCTION_CHECK(setObjectRectDirty) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getOrientedRectDirty
		#define GEODE_CONCEPT_CHECK_getOrientedRectDirty
		GEODE_CONCEPT_FUNCTION_CHECK(getOrientedRectDirty) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setOrientedRectDirty
		#define GEODE_CONCEPT_CHECK_setOrientedRectDirty
		GEODE_CONCEPT_FUNCTION_CHECK(setOrientedRectDirty) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getType
		#define GEODE_CONCEPT_CHECK_getType
		GEODE_CONCEPT_FUNCTION_CHECK(getType) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setType
		#define GEODE_CONCEPT_CHECK_setType
		GEODE_CONCEPT_FUNCTION_CHECK(setType) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getStartPos
		#define GEODE_CONCEPT_CHECK_getStartPos
		GEODE_CONCEPT_FUNCTION_CHECK(getStartPos) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addColorSprite
		#define GEODE_CONCEPT_CHECK_addColorSprite
		GEODE_CONCEPT_FUNCTION_CHECK(addColorSprite) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addColorSpriteToParent
		#define GEODE_CONCEPT_CHECK_addColorSpriteToParent
		GEODE_CONCEPT_FUNCTION_CHECK(addColorSpriteToParent) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addColorSpriteToSelf
		#define GEODE_CONCEPT_CHECK_addColorSpriteToSelf
		GEODE_CONCEPT_FUNCTION_CHECK(addColorSpriteToSelf) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addCustomBlackChild
		#define GEODE_CONCEPT_CHECK_addCustomBlackChild
		GEODE_CONCEPT_FUNCTION_CHECK(addCustomBlackChild) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addCustomChild
		#define GEODE_CONCEPT_CHECK_addCustomChild
		GEODE_CONCEPT_FUNCTION_CHECK(addCustomChild) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addCustomColorChild
		#define GEODE_CONCEPT_CHECK_addCustomColorChild
		GEODE_CONCEPT_FUNCTION_CHECK(addCustomColorChild) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addEmptyGlow
		#define GEODE_CONCEPT_CHECK_addEmptyGlow
		GEODE_CONCEPT_FUNCTION_CHECK(addEmptyGlow) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addGlow
		#define GEODE_CONCEPT_CHECK_addGlow
		GEODE_CONCEPT_FUNCTION_CHECK(addGlow) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addInternalChild
		#define GEODE_CONCEPT_CHECK_addInternalChild
		GEODE_CONCEPT_FUNCTION_CHECK(addInternalChild) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addInternalCustomColorChild
		#define GEODE_CONCEPT_CHECK_addInternalCustomColorChild
		GEODE_CONCEPT_FUNCTION_CHECK(addInternalCustomColorChild) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addInternalGlowChild
		#define GEODE_CONCEPT_CHECK_addInternalGlowChild
		GEODE_CONCEPT_FUNCTION_CHECK(addInternalGlowChild) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addNewSlope01
		#define GEODE_CONCEPT_CHECK_addNewSlope01
		GEODE_CONCEPT_FUNCTION_CHECK(addNewSlope01) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addNewSlope01Glow
		#define GEODE_CONCEPT_CHECK_addNewSlope01Glow
		GEODE_CONCEPT_FUNCTION_CHECK(addNewSlope01Glow) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addNewSlope02
		#define GEODE_CONCEPT_CHECK_addNewSlope02
		GEODE_CONCEPT_FUNCTION_CHECK(addNewSlope02) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addNewSlope02Glow
		#define GEODE_CONCEPT_CHECK_addNewSlope02Glow
		GEODE_CONCEPT_FUNCTION_CHECK(addNewSlope02Glow) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addRotation
		#define GEODE_CONCEPT_CHECK_addRotation
		GEODE_CONCEPT_FUNCTION_CHECK(addRotation) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addToColorGroup
		#define GEODE_CONCEPT_CHECK_addToColorGroup
		GEODE_CONCEPT_FUNCTION_CHECK(addToColorGroup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addToCustomScaleX
		#define GEODE_CONCEPT_CHECK_addToCustomScaleX
		GEODE_CONCEPT_FUNCTION_CHECK(addToCustomScaleX) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addToCustomScaleY
		#define GEODE_CONCEPT_CHECK_addToCustomScaleY
		GEODE_CONCEPT_FUNCTION_CHECK(addToCustomScaleY) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addToOpacityGroup
		#define GEODE_CONCEPT_CHECK_addToOpacityGroup
		GEODE_CONCEPT_FUNCTION_CHECK(addToOpacityGroup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addToTempOffset
		#define GEODE_CONCEPT_CHECK_addToTempOffset
		GEODE_CONCEPT_FUNCTION_CHECK(addToTempOffset) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_assignUniqueID
		#define GEODE_CONCEPT_CHECK_assignUniqueID
		GEODE_CONCEPT_FUNCTION_CHECK(assignUniqueID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_belongsToGroup
		#define GEODE_CONCEPT_CHECK_belongsToGroup
		GEODE_CONCEPT_FUNCTION_CHECK(belongsToGroup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_calculateOrientedBox
		#define GEODE_CONCEPT_CHECK_calculateOrientedBox
		GEODE_CONCEPT_FUNCTION_CHECK(calculateOrientedBox) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_canChangeCustomColor
		#define GEODE_CONCEPT_CHECK_canChangeCustomColor
		GEODE_CONCEPT_FUNCTION_CHECK(canChangeCustomColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_canChangeMainColor
		#define GEODE_CONCEPT_CHECK_canChangeMainColor
		GEODE_CONCEPT_FUNCTION_CHECK(canChangeMainColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_canChangeSecondaryColor
		#define GEODE_CONCEPT_CHECK_canChangeSecondaryColor
		GEODE_CONCEPT_FUNCTION_CHECK(canChangeSecondaryColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_canRotateFree
		#define GEODE_CONCEPT_CHECK_canRotateFree
		GEODE_CONCEPT_FUNCTION_CHECK(canRotateFree) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_colorForMode
		#define GEODE_CONCEPT_CHECK_colorForMode
		GEODE_CONCEPT_FUNCTION_CHECK(colorForMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_commonInteractiveSetup
		#define GEODE_CONCEPT_CHECK_commonInteractiveSetup
		GEODE_CONCEPT_FUNCTION_CHECK(commonInteractiveSetup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_commonSetup
		#define GEODE_CONCEPT_CHECK_commonSetup
		GEODE_CONCEPT_FUNCTION_CHECK(commonSetup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_copyGroups
		#define GEODE_CONCEPT_CHECK_copyGroups
		GEODE_CONCEPT_FUNCTION_CHECK(copyGroups) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createAndAddParticle
		#define GEODE_CONCEPT_CHECK_createAndAddParticle
		GEODE_CONCEPT_FUNCTION_CHECK(createAndAddParticle) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createColorGroupContainer
		#define GEODE_CONCEPT_CHECK_createColorGroupContainer
		GEODE_CONCEPT_FUNCTION_CHECK(createColorGroupContainer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createGlow
		#define GEODE_CONCEPT_CHECK_createGlow
		GEODE_CONCEPT_FUNCTION_CHECK(createGlow) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createGroupContainer
		#define GEODE_CONCEPT_CHECK_createGroupContainer
		GEODE_CONCEPT_FUNCTION_CHECK(createGroupContainer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createOpacityGroupContainer
		#define GEODE_CONCEPT_CHECK_createOpacityGroupContainer
		GEODE_CONCEPT_FUNCTION_CHECK(createOpacityGroupContainer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createSpriteColor
		#define GEODE_CONCEPT_CHECK_createSpriteColor
		GEODE_CONCEPT_FUNCTION_CHECK(createSpriteColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_deselectObject
		#define GEODE_CONCEPT_CHECK_deselectObject
		GEODE_CONCEPT_FUNCTION_CHECK(deselectObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_destroyObject
		#define GEODE_CONCEPT_CHECK_destroyObject
		GEODE_CONCEPT_FUNCTION_CHECK(destroyObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_determineSlopeDirection
		#define GEODE_CONCEPT_CHECK_determineSlopeDirection
		GEODE_CONCEPT_FUNCTION_CHECK(determineSlopeDirection) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_didScaleXChange
		#define GEODE_CONCEPT_CHECK_didScaleXChange
		GEODE_CONCEPT_FUNCTION_CHECK(didScaleXChange) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_didScaleYChange
		#define GEODE_CONCEPT_CHECK_didScaleYChange
		GEODE_CONCEPT_FUNCTION_CHECK(didScaleYChange) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_dirtifyObjectPos
		#define GEODE_CONCEPT_CHECK_dirtifyObjectPos
		GEODE_CONCEPT_FUNCTION_CHECK(dirtifyObjectPos) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_dirtifyObjectRect
		#define GEODE_CONCEPT_CHECK_dirtifyObjectRect
		GEODE_CONCEPT_FUNCTION_CHECK(dirtifyObjectRect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_disableObject
		#define GEODE_CONCEPT_CHECK_disableObject
		GEODE_CONCEPT_FUNCTION_CHECK(disableObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_dontCountTowardsLimit
		#define GEODE_CONCEPT_CHECK_dontCountTowardsLimit
		GEODE_CONCEPT_FUNCTION_CHECK(dontCountTowardsLimit) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_duplicateAttributes
		#define GEODE_CONCEPT_CHECK_duplicateAttributes
		GEODE_CONCEPT_FUNCTION_CHECK(duplicateAttributes) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_duplicateColorMode
		#define GEODE_CONCEPT_CHECK_duplicateColorMode
		GEODE_CONCEPT_FUNCTION_CHECK(duplicateColorMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_duplicateValues
		#define GEODE_CONCEPT_CHECK_duplicateValues
		GEODE_CONCEPT_FUNCTION_CHECK(duplicateValues) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_editorColorForCustomMode
		#define GEODE_CONCEPT_CHECK_editorColorForCustomMode
		GEODE_CONCEPT_FUNCTION_CHECK(editorColorForCustomMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_editorColorForMode
		#define GEODE_CONCEPT_CHECK_editorColorForMode
		GEODE_CONCEPT_FUNCTION_CHECK(editorColorForMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_fastRotateObject
		#define GEODE_CONCEPT_CHECK_fastRotateObject
		GEODE_CONCEPT_FUNCTION_CHECK(fastRotateObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getActiveColorForMode
		#define GEODE_CONCEPT_CHECK_getActiveColorForMode
		GEODE_CONCEPT_FUNCTION_CHECK(getActiveColorForMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getBallFrame
		#define GEODE_CONCEPT_CHECK_getBallFrame
		GEODE_CONCEPT_FUNCTION_CHECK(getBallFrame) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getBoundingRect
		#define GEODE_CONCEPT_CHECK_getBoundingRect
		GEODE_CONCEPT_FUNCTION_CHECK(getBoundingRect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getBoxOffset
		#define GEODE_CONCEPT_CHECK_getBoxOffset
		GEODE_CONCEPT_FUNCTION_CHECK(getBoxOffset) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getColorFrame
		#define GEODE_CONCEPT_CHECK_getColorFrame
		GEODE_CONCEPT_FUNCTION_CHECK(getColorFrame) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getColorIndex
		#define GEODE_CONCEPT_CHECK_getColorIndex
		GEODE_CONCEPT_FUNCTION_CHECK(getColorIndex) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getColorKey
		#define GEODE_CONCEPT_CHECK_getColorKey
		GEODE_CONCEPT_FUNCTION_CHECK(getColorKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getCustomZLayer
		#define GEODE_CONCEPT_CHECK_getCustomZLayer
		GEODE_CONCEPT_FUNCTION_CHECK(getCustomZLayer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getGlowFrame
		#define GEODE_CONCEPT_CHECK_getGlowFrame
		GEODE_CONCEPT_FUNCTION_CHECK(getGlowFrame) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getGroupDisabled
		#define GEODE_CONCEPT_CHECK_getGroupDisabled
		GEODE_CONCEPT_FUNCTION_CHECK(getGroupDisabled) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getGroupID
		#define GEODE_CONCEPT_CHECK_getGroupID
		GEODE_CONCEPT_FUNCTION_CHECK(getGroupID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getGroupString
		#define GEODE_CONCEPT_CHECK_getGroupString
		GEODE_CONCEPT_FUNCTION_CHECK(getGroupString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getLastPosition
		#define GEODE_CONCEPT_CHECK_getLastPosition
		GEODE_CONCEPT_FUNCTION_CHECK(getLastPosition) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getMainColor
		#define GEODE_CONCEPT_CHECK_getMainColor
		GEODE_CONCEPT_FUNCTION_CHECK(getMainColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getMainColorMode
		#define GEODE_CONCEPT_CHECK_getMainColorMode
		GEODE_CONCEPT_FUNCTION_CHECK(getMainColorMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getObjectDirection
		#define GEODE_CONCEPT_CHECK_getObjectDirection
		GEODE_CONCEPT_FUNCTION_CHECK(getObjectDirection) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getObjectRadius
		#define GEODE_CONCEPT_CHECK_getObjectRadius
		GEODE_CONCEPT_FUNCTION_CHECK(getObjectRadius) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getObjectRectPointer
		#define GEODE_CONCEPT_CHECK_getObjectRectPointer
		GEODE_CONCEPT_FUNCTION_CHECK(getObjectRectPointer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getObjectZLayer
		#define GEODE_CONCEPT_CHECK_getObjectZLayer
		GEODE_CONCEPT_FUNCTION_CHECK(getObjectZLayer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getObjectZOrder
		#define GEODE_CONCEPT_CHECK_getObjectZOrder
		GEODE_CONCEPT_FUNCTION_CHECK(getObjectZOrder) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getOuterObjectRect
		#define GEODE_CONCEPT_CHECK_getOuterObjectRect
		GEODE_CONCEPT_FUNCTION_CHECK(getOuterObjectRect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getParentMode
		#define GEODE_CONCEPT_CHECK_getParentMode
		GEODE_CONCEPT_FUNCTION_CHECK(getParentMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getRelativeSpriteColor
		#define GEODE_CONCEPT_CHECK_getRelativeSpriteColor
		GEODE_CONCEPT_FUNCTION_CHECK(getRelativeSpriteColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getScalePosDelta
		#define GEODE_CONCEPT_CHECK_getScalePosDelta
		GEODE_CONCEPT_FUNCTION_CHECK(getScalePosDelta) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSecondaryColor
		#define GEODE_CONCEPT_CHECK_getSecondaryColor
		GEODE_CONCEPT_FUNCTION_CHECK(getSecondaryColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSecondaryColorMode
		#define GEODE_CONCEPT_CHECK_getSecondaryColorMode
		GEODE_CONCEPT_FUNCTION_CHECK(getSecondaryColorMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSlopeAngle
		#define GEODE_CONCEPT_CHECK_getSlopeAngle
		GEODE_CONCEPT_FUNCTION_CHECK(getSlopeAngle) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getUnmodifiedPosition
		#define GEODE_CONCEPT_CHECK_getUnmodifiedPosition
		GEODE_CONCEPT_FUNCTION_CHECK(getUnmodifiedPosition) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_groupColor
		#define GEODE_CONCEPT_CHECK_groupColor
		GEODE_CONCEPT_FUNCTION_CHECK(groupColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_groupOpacityMod
		#define GEODE_CONCEPT_CHECK_groupOpacityMod
		GEODE_CONCEPT_FUNCTION_CHECK(groupOpacityMod) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_groupWasDisabled
		#define GEODE_CONCEPT_CHECK_groupWasDisabled
		GEODE_CONCEPT_FUNCTION_CHECK(groupWasDisabled) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_groupWasEnabled
		#define GEODE_CONCEPT_CHECK_groupWasEnabled
		GEODE_CONCEPT_FUNCTION_CHECK(groupWasEnabled) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_hasSecondaryColor
		#define GEODE_CONCEPT_CHECK_hasSecondaryColor
		GEODE_CONCEPT_FUNCTION_CHECK(hasSecondaryColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_ignoreEditorDuration
		#define GEODE_CONCEPT_CHECK_ignoreEditorDuration
		GEODE_CONCEPT_FUNCTION_CHECK(ignoreEditorDuration) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_ignoreEnter
		#define GEODE_CONCEPT_CHECK_ignoreEnter
		GEODE_CONCEPT_FUNCTION_CHECK(ignoreEnter) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_ignoreFade
		#define GEODE_CONCEPT_CHECK_ignoreFade
		GEODE_CONCEPT_FUNCTION_CHECK(ignoreFade) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isBasicTrigger
		#define GEODE_CONCEPT_CHECK_isBasicTrigger
		GEODE_CONCEPT_FUNCTION_CHECK(isBasicTrigger) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isColorObject
		#define GEODE_CONCEPT_CHECK_isColorObject
		GEODE_CONCEPT_FUNCTION_CHECK(isColorObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isColorTrigger
		#define GEODE_CONCEPT_CHECK_isColorTrigger
		GEODE_CONCEPT_FUNCTION_CHECK(isColorTrigger) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isConfigurablePortal
		#define GEODE_CONCEPT_CHECK_isConfigurablePortal
		GEODE_CONCEPT_FUNCTION_CHECK(isConfigurablePortal) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isEditorSpawnableTrigger
		#define GEODE_CONCEPT_CHECK_isEditorSpawnableTrigger
		GEODE_CONCEPT_FUNCTION_CHECK(isEditorSpawnableTrigger) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isFacingDown
		#define GEODE_CONCEPT_CHECK_isFacingDown
		GEODE_CONCEPT_FUNCTION_CHECK(isFacingDown) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isFacingLeft
		#define GEODE_CONCEPT_CHECK_isFacingLeft
		GEODE_CONCEPT_FUNCTION_CHECK(isFacingLeft) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isSettingsObject
		#define GEODE_CONCEPT_CHECK_isSettingsObject
		GEODE_CONCEPT_FUNCTION_CHECK(isSettingsObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isSpawnableTrigger
		#define GEODE_CONCEPT_CHECK_isSpawnableTrigger
		GEODE_CONCEPT_FUNCTION_CHECK(isSpawnableTrigger) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isSpecialObject
		#define GEODE_CONCEPT_CHECK_isSpecialObject
		GEODE_CONCEPT_FUNCTION_CHECK(isSpecialObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isSpeedObject
		#define GEODE_CONCEPT_CHECK_isSpeedObject
		GEODE_CONCEPT_FUNCTION_CHECK(isSpeedObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isStoppableTrigger
		#define GEODE_CONCEPT_CHECK_isStoppableTrigger
		GEODE_CONCEPT_FUNCTION_CHECK(isStoppableTrigger) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isTrigger
		#define GEODE_CONCEPT_CHECK_isTrigger
		GEODE_CONCEPT_FUNCTION_CHECK(isTrigger) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadGroupsFromString
		#define GEODE_CONCEPT_CHECK_loadGroupsFromString
		GEODE_CONCEPT_FUNCTION_CHECK(loadGroupsFromString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_makeInvisible
		#define GEODE_CONCEPT_CHECK_makeInvisible
		GEODE_CONCEPT_FUNCTION_CHECK(makeInvisible) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_makeVisible
		#define GEODE_CONCEPT_CHECK_makeVisible
		GEODE_CONCEPT_FUNCTION_CHECK(makeVisible) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_opacityModForMode
		#define GEODE_CONCEPT_CHECK_opacityModForMode
		GEODE_CONCEPT_FUNCTION_CHECK(opacityModForMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_parentForZLayer
		#define GEODE_CONCEPT_CHECK_parentForZLayer
		GEODE_CONCEPT_FUNCTION_CHECK(parentForZLayer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_perspectiveColorFrame
		#define GEODE_CONCEPT_CHECK_perspectiveColorFrame
		GEODE_CONCEPT_FUNCTION_CHECK(perspectiveColorFrame) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_perspectiveFrame
		#define GEODE_CONCEPT_CHECK_perspectiveFrame
		GEODE_CONCEPT_FUNCTION_CHECK(perspectiveFrame) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_playDestroyObjectAnim
		#define GEODE_CONCEPT_CHECK_playDestroyObjectAnim
		GEODE_CONCEPT_FUNCTION_CHECK(playDestroyObjectAnim) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_playPickupAnimation
		#define GEODE_CONCEPT_CHECK_playPickupAnimation
		GEODE_CONCEPT_FUNCTION_CHECK(playPickupAnimation) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_playShineEffect
		#define GEODE_CONCEPT_CHECK_playShineEffect
		GEODE_CONCEPT_FUNCTION_CHECK(playShineEffect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_quickUpdatePosition
		#define GEODE_CONCEPT_CHECK_quickUpdatePosition
		GEODE_CONCEPT_FUNCTION_CHECK(quickUpdatePosition) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_quickUpdatePosition2
		#define GEODE_CONCEPT_CHECK_quickUpdatePosition2
		GEODE_CONCEPT_FUNCTION_CHECK(quickUpdatePosition2) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeColorSprite
		#define GEODE_CONCEPT_CHECK_removeColorSprite
		GEODE_CONCEPT_FUNCTION_CHECK(removeColorSprite) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeGlow
		#define GEODE_CONCEPT_CHECK_removeGlow
		GEODE_CONCEPT_FUNCTION_CHECK(removeGlow) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_reorderColorSprite
		#define GEODE_CONCEPT_CHECK_reorderColorSprite
		GEODE_CONCEPT_FUNCTION_CHECK(reorderColorSprite) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetColorGroups
		#define GEODE_CONCEPT_CHECK_resetColorGroups
		GEODE_CONCEPT_FUNCTION_CHECK(resetColorGroups) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetGroupDisabled
		#define GEODE_CONCEPT_CHECK_resetGroupDisabled
		GEODE_CONCEPT_FUNCTION_CHECK(resetGroupDisabled) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetGroups
		#define GEODE_CONCEPT_CHECK_resetGroups
		GEODE_CONCEPT_FUNCTION_CHECK(resetGroups) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetMainColorMode
		#define GEODE_CONCEPT_CHECK_resetMainColorMode
		GEODE_CONCEPT_FUNCTION_CHECK(resetMainColorMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetMoveOffset
		#define GEODE_CONCEPT_CHECK_resetMoveOffset
		GEODE_CONCEPT_FUNCTION_CHECK(resetMoveOffset) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetRScaleForced
		#define GEODE_CONCEPT_CHECK_resetRScaleForced
		GEODE_CONCEPT_FUNCTION_CHECK(resetRScaleForced) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetSecondaryColorMode
		#define GEODE_CONCEPT_CHECK_resetSecondaryColorMode
		GEODE_CONCEPT_FUNCTION_CHECK(resetSecondaryColorMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setAreaOpacity
		#define GEODE_CONCEPT_CHECK_setAreaOpacity
		GEODE_CONCEPT_FUNCTION_CHECK(setAreaOpacity) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setCustomZLayer
		#define GEODE_CONCEPT_CHECK_setCustomZLayer
		GEODE_CONCEPT_FUNCTION_CHECK(setCustomZLayer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setDefaultMainColorMode
		#define GEODE_CONCEPT_CHECK_setDefaultMainColorMode
		GEODE_CONCEPT_FUNCTION_CHECK(setDefaultMainColorMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setDefaultSecondaryColorMode
		#define GEODE_CONCEPT_CHECK_setDefaultSecondaryColorMode
		GEODE_CONCEPT_FUNCTION_CHECK(setDefaultSecondaryColorMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setGlowOpacity
		#define GEODE_CONCEPT_CHECK_setGlowOpacity
		GEODE_CONCEPT_FUNCTION_CHECK(setGlowOpacity) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setLastPosition
		#define GEODE_CONCEPT_CHECK_setLastPosition
		GEODE_CONCEPT_FUNCTION_CHECK(setLastPosition) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setMainColorMode
		#define GEODE_CONCEPT_CHECK_setMainColorMode
		GEODE_CONCEPT_FUNCTION_CHECK(setMainColorMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setSecondaryColorMode
		#define GEODE_CONCEPT_CHECK_setSecondaryColorMode
		GEODE_CONCEPT_FUNCTION_CHECK(setSecondaryColorMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupColorSprite
		#define GEODE_CONCEPT_CHECK_setupColorSprite
		GEODE_CONCEPT_FUNCTION_CHECK(setupColorSprite) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupPixelScale
		#define GEODE_CONCEPT_CHECK_setupPixelScale
		GEODE_CONCEPT_FUNCTION_CHECK(setupPixelScale) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupSpriteSize
		#define GEODE_CONCEPT_CHECK_setupSpriteSize
		GEODE_CONCEPT_FUNCTION_CHECK(setupSpriteSize) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_shouldBlendColor
		#define GEODE_CONCEPT_CHECK_shouldBlendColor
		GEODE_CONCEPT_FUNCTION_CHECK(shouldBlendColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_shouldLockX
		#define GEODE_CONCEPT_CHECK_shouldLockX
		GEODE_CONCEPT_FUNCTION_CHECK(shouldLockX) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_shouldNotHideAnimFreeze
		#define GEODE_CONCEPT_CHECK_shouldNotHideAnimFreeze
		GEODE_CONCEPT_FUNCTION_CHECK(shouldNotHideAnimFreeze) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_shouldShowPickupEffects
		#define GEODE_CONCEPT_CHECK_shouldShowPickupEffects
		GEODE_CONCEPT_FUNCTION_CHECK(shouldShowPickupEffects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_slopeFloorTop
		#define GEODE_CONCEPT_CHECK_slopeFloorTop
		GEODE_CONCEPT_FUNCTION_CHECK(slopeFloorTop) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_slopeWallLeft
		#define GEODE_CONCEPT_CHECK_slopeWallLeft
		GEODE_CONCEPT_FUNCTION_CHECK(slopeWallLeft) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_slopeYPos
		#define GEODE_CONCEPT_CHECK_slopeYPos
		GEODE_CONCEPT_FUNCTION_CHECK(slopeYPos) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_spawnDefaultPickupParticle
		#define GEODE_CONCEPT_CHECK_spawnDefaultPickupParticle
		GEODE_CONCEPT_FUNCTION_CHECK(spawnDefaultPickupParticle) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateBlendMode
		#define GEODE_CONCEPT_CHECK_updateBlendMode
		GEODE_CONCEPT_FUNCTION_CHECK(updateBlendMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateCustomColorType
		#define GEODE_CONCEPT_CHECK_updateCustomColorType
		GEODE_CONCEPT_FUNCTION_CHECK(updateCustomColorType) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateCustomScaleX
		#define GEODE_CONCEPT_CHECK_updateCustomScaleX
		GEODE_CONCEPT_FUNCTION_CHECK(updateCustomScaleX) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateCustomScaleY
		#define GEODE_CONCEPT_CHECK_updateCustomScaleY
		GEODE_CONCEPT_FUNCTION_CHECK(updateCustomScaleY) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateHSVState
		#define GEODE_CONCEPT_CHECK_updateHSVState
		GEODE_CONCEPT_FUNCTION_CHECK(updateHSVState) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateIsOriented
		#define GEODE_CONCEPT_CHECK_updateIsOriented
		GEODE_CONCEPT_FUNCTION_CHECK(updateIsOriented) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateMainColorOnly
		#define GEODE_CONCEPT_CHECK_updateMainColorOnly
		GEODE_CONCEPT_FUNCTION_CHECK(updateMainColorOnly) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateMainOpacity
		#define GEODE_CONCEPT_CHECK_updateMainOpacity
		GEODE_CONCEPT_FUNCTION_CHECK(updateMainOpacity) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateObjectEditorColor
		#define GEODE_CONCEPT_CHECK_updateObjectEditorColor
		GEODE_CONCEPT_FUNCTION_CHECK(updateObjectEditorColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateSecondaryColorOnly
		#define GEODE_CONCEPT_CHECK_updateSecondaryColorOnly
		GEODE_CONCEPT_FUNCTION_CHECK(updateSecondaryColorOnly) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateSecondaryOpacity
		#define GEODE_CONCEPT_CHECK_updateSecondaryOpacity
		GEODE_CONCEPT_FUNCTION_CHECK(updateSecondaryOpacity) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateStartPos
		#define GEODE_CONCEPT_CHECK_updateStartPos
		GEODE_CONCEPT_FUNCTION_CHECK(updateStartPos) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateUnmodifiedPositions
		#define GEODE_CONCEPT_CHECK_updateUnmodifiedPositions
		GEODE_CONCEPT_FUNCTION_CHECK(updateUnmodifiedPositions) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_usesFreezeAnimation
		#define GEODE_CONCEPT_CHECK_usesFreezeAnimation
		GEODE_CONCEPT_FUNCTION_CHECK(usesFreezeAnimation) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_usesSpecialAnimation
		#define GEODE_CONCEPT_CHECK_usesSpecialAnimation
		GEODE_CONCEPT_FUNCTION_CHECK(usesSpecialAnimation) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GameObject> : ModifyBase<ModifyDerive<Der, GameObject>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GameObject>>;
		using ModifyBase<ModifyDerive<Der, GameObject>>::ModifyBase;
		using Base = GameObject;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_CONSTRUCTOR(base::get() + 0x1d67f0, Default, GameObject, )
			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(base::get() + 0x66ea30, Default, GameObject)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x6736c0, Default, GameObject, createWithFrame, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x66eb50, Default, GameObject, createWithKey, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x69d430, Default, GameObject, isBasicEnterEffect, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x691390, Default, GameObject, objectFromVector, std::vector<std::string>&, std::vector<void*>&, GJBaseGameLayer*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x66ea20, Default, GameObject, resetMID, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x67bb80, Default, GameObject, update, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x68d960, Default, GameObject, setScaleX, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x68d9f0, Default, GameObject, setScaleY, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x68da80, Default, GameObject, setScale, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x68d420, Default, GameObject, setPosition, cocos2d::CCPoint const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x68e170, Default, GameObject, setVisible, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x68d690, Default, GameObject, setRotation, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x68d760, Default, GameObject, setRotationX, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x68d820, Default, GameObject, setRotationY, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x68ddd0, Default, GameObject, setOpacity, unsigned char)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x673940, Default, GameObject, initWithTexture, cocos2d::CCTexture2D*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x69a770, Default, GameObject, setChildColor, cocos2d::ccColor3B const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x68d8e0, Default, GameObject, setFlipX, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x68d920, Default, GameObject, setFlipY, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObject, firstSetup, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x67bb90, Default, GameObject, customSetup, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x438860, Default, GameObject, setupCustomSprites, std::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x68f4c0, Default, GameObject, addMainSpriteToParent, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x67b040, Default, GameObject, resetObject, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObject, triggerObject, GJBaseGameLayer*, int, std::vector<int> const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x67b670, Default, GameObject, activateObject, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x67b9d0, Default, GameObject, deactivateObject, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x68cd40, Default, GameObject, transferObjectRect, cocos2d::CCRect&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x68cdb0, Default, GameObject, getObjectRect, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x68cde0, Default, GameObject, getObjectRect, float, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x68d010, Default, GameObject, getObjectRect2, float, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x68d0e0, Default, GameObject, getObjectTextureRect, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x68d360, Default, GameObject, getRealPosition, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x67af30, Default, GameObject, setStartPos, cocos2d::CCPoint)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x67b4a0, Default, GameObject, updateStartValues, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObject, customObjectSetup, std::vector<std::string>&, std::vector<void*>&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x693300, Default, GameObject, getSaveString, GJBaseGameLayer*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x68e2d0, Default, GameObject, claimParticle, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x68e8e0, Default, GameObject, unclaimParticle, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x68e950, Default, GameObject, particleWasActivated, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x68d8c0, Default, GameObject, isFlipX, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x68d8d0, Default, GameObject, isFlipY, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x68db10, Default, GameObject, setRScaleX, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x68db50, Default, GameObject, setRScaleY, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x68db90, Default, GameObject, setRScale, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x68dc10, Default, GameObject, getRScaleX, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x68dc40, Default, GameObject, getRScaleY, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x68d610, Default, GameObject, setRRotation, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObject, triggerActivated, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x69a490, Default, GameObject, setObjectColor, cocos2d::ccColor3B const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x69a720, Default, GameObject, setGlowColor, cocos2d::ccColor3B const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x68e990, Default, GameObject, restoreObject, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObject, animationTriggered, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x69a7e0, Default, GameObject, selectObject, cocos2d::ccColor3B)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObject, activatedByPlayer, PlayerObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObject, hasBeenActivatedByPlayer, PlayerObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObject, hasBeenActivated, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x69b210, Default, GameObject, getOrientedBox, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x69b290, Default, GameObject, updateOrientedBox, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x6a3d30, Default, GameObject, getObjectRotation, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x69be10, Default, GameObject, updateMainColor, cocos2d::ccColor3B const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x69c300, Default, GameObject, updateSecondaryColor, cocos2d::ccColor3B const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x68fba0, Default, GameObject, addToGroup, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x68fc50, Default, GameObject, removeFromGroup, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x69a2d0, Default, GameObject, saveActiveColors, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1d5ff0, Default, GameObject, spawnXPosition, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObject, canAllowMultiActivate, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObject, blendModeChanged, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x69a660, Default, GameObject, updateParticleColor, cocos2d::ccColor3B const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x68e0e0, Default, GameObject, updateParticleOpacity, unsigned char)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObject, updateMainParticleOpacity, unsigned char)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObject, updateSecondaryParticleOpacity, unsigned char)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObject, canReverse, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObject, isSpecialSpawnObject, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObject, canBeOrdered, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObject, getObjectLabel, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObject, setObjectLabel, cocos2d::CCLabelBMFont*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x69d460, Default, GameObject, shouldDrawEditorHitbox, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObject, getHasSyncedAnimation, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObject, getHasRotateAction, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObject, canMultiActivate, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObject, updateTextKerning, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameObject, getTextKerning, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1d6010, Default, GameObject, getObjectRectDirty, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1d6020, Default, GameObject, setObjectRectDirty, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1d6030, Default, GameObject, getOrientedRectDirty, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1d6040, Default, GameObject, setOrientedRectDirty, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1d6050, Default, GameObject, getType, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1d6060, Default, GameObject, setType, GameObjectType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1d6070, Default, GameObject, getStartPos, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x6760e0, Default, GameObject, addColorSprite, std::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x67b7c0, Default, GameObject, addColorSpriteToParent, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x68f630, Default, GameObject, addColorSpriteToSelf, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x68c780, Default, GameObject, addCustomBlackChild, std::string, float, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x68c920, Default, GameObject, addCustomChild, std::string, cocos2d::CCPoint, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x68c9c0, Default, GameObject, addCustomColorChild, std::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x675f70, Default, GameObject, addEmptyGlow, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x673a50, Default, GameObject, addGlow, std::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x68cb60, Default, GameObject, addInternalChild, cocos2d::CCSprite*, std::string, cocos2d::CCPoint, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x68cab0, Default, GameObject, addInternalCustomColorChild, std::string, cocos2d::CCPoint, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x68cbf0, Default, GameObject, addInternalGlowChild, std::string, cocos2d::CCPoint)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, addNewSlope01, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, addNewSlope01Glow, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, addNewSlope02, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, addNewSlope02Glow, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, addRotation, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x68d5b0, Default, GameObject, addRotation, float, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x68fe10, Default, GameObject, addToColorGroup, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x68dc70, Default, GameObject, addToCustomScaleX, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x68dcb0, Default, GameObject, addToCustomScaleY, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x68ff60, Default, GameObject, addToOpacityGroup, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x68d2a0, Default, GameObject, addToTempOffset, double, double)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x673970, Default, GameObject, assignUniqueID, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x68fd70, Default, GameObject, belongsToGroup, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x69b260, Default, GameObject, calculateOrientedBox, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x69b750, Default, GameObject, canChangeCustomColor, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x69b780, Default, GameObject, canChangeMainColor, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x69b7a0, Default, GameObject, canChangeSecondaryColor, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x68fae0, Default, GameObject, canRotateFree, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x69bf20, Default, GameObject, colorForMode, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x686ba0, Default, GameObject, commonInteractiveSetup, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xd50a0, Default, GameObject, commonSetup, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x68fd00, Default, GameObject, copyGroups, GameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x686c60, Default, GameObject, createAndAddParticle, int, char const*, int, cocos2d::tCCPositionType)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, createColorGroupContainer, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x675ed0, Default, GameObject, createGlow, std::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x68fb40, Default, GameObject, createGroupContainer, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, createOpacityGroupContainer, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x673990, Default, GameObject, createSpriteColor, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x69abf0, Default, GameObject, deselectObject, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x68e960, Default, GameObject, destroyObject, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x68f730, Default, GameObject, determineSlopeDirection, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x68dcf0, Default, GameObject, didScaleXChange, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x68dd20, Default, GameObject, didScaleYChange, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x68cd30, Default, GameObject, dirtifyObjectPos, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x68cd20, Default, GameObject, dirtifyObjectRect, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x68ea20, Default, GameObject, disableObject, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x687360, Default, GameObject, dontCountTowardsLimit, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x69ba30, Default, GameObject, duplicateAttributes, GameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x69b980, Default, GameObject, duplicateColorMode, GameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x69bb10, Default, GameObject, duplicateValues, GameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x69ab20, Default, GameObject, editorColorForCustomMode, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x69a9c0, Default, GameObject, editorColorForMode, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x69b530, Default, GameObject, fastRotateObject, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x69c550, Default, GameObject, getActiveColorForMode, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x69a2a0, Default, GameObject, getBallFrame, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x68ccb0, Default, GameObject, getBoundingRect, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x68cf10, Default, GameObject, getBoxOffset, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, getColorFrame, std::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x69cd10, Default, GameObject, getColorIndex, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4ee800, Default, GameObject, getColorKey, bool, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x68fb10, Default, GameObject, getCustomZLayer, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, getGlowFrame, std::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x690000, Default, GameObject, getGroupDisabled, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x68fce0, Default, GameObject, getGroupID, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x690050, Default, GameObject, getGroupString, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x69c730, Default, GameObject, getLastPosition, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x69b730, Default, GameObject, getMainColor, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x691350, Default, GameObject, getMainColorMode, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x68f990, Default, GameObject, getObjectDirection, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x69ce10, Default, GameObject, getObjectRadius, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x68cd80, Default, GameObject, getObjectRectPointer, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x67b7a0, Default, GameObject, getObjectZLayer, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x68f610, Default, GameObject, getObjectZOrder, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x68d0a0, Default, GameObject, getOuterObjectRect, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x68e870, Default, GameObject, getParentMode, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x69b7c0, Default, GameObject, getRelativeSpriteColor, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x68f9d0, Default, GameObject, getScalePosDelta, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x69b740, Default, GameObject, getSecondaryColor, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x691370, Default, GameObject, getSecondaryColorMode, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x68f950, Default, GameObject, getSlopeAngle, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x68d2d0, Default, GameObject, getUnmodifiedPosition, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x69c640, Default, GameObject, groupColor, cocos2d::ccColor3B const&, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x690630, Default, GameObject, groupOpacityMod, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x690030, Default, GameObject, groupWasDisabled, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x690010, Default, GameObject, groupWasEnabled, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x69b960, Default, GameObject, hasSecondaryColor, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x687a20, Default, GameObject, ignoreEditorDuration, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x68cca0, Default, GameObject, ignoreEnter, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x68cc90, Default, GameObject, ignoreFade, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x673730, Default, GameObject, init, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x69d350, Default, GameObject, isBasicTrigger, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x69b830, Default, GameObject, isColorObject, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x69ccc0, Default, GameObject, isColorTrigger, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x69d3c0, Default, GameObject, isConfigurablePortal, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x688570, Default, GameObject, isEditorSpawnableTrigger, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x69b610, Default, GameObject, isFacingDown, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x69b690, Default, GameObject, isFacingLeft, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x69d330, Default, GameObject, isSettingsObject, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x69c760, Default, GameObject, isSpawnableTrigger, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x69ce60, Default, GameObject, isSpecialObject, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x69cd90, Default, GameObject, isSpeedObject, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x6878e0, Default, GameObject, isStoppableTrigger, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x687370, Default, GameObject, isTrigger, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x690320, Default, GameObject, loadGroupsFromString, std::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x68e9c0, Default, GameObject, makeInvisible, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x68e9f0, Default, GameObject, makeVisible, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x69c240, Default, GameObject, opacityModForMode, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x67b740, Default, GameObject, parentForZLayer, int, bool, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4387f0, Default, GameObject, perspectiveColorFrame, char const*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x438480, Default, GameObject, perspectiveFrame, char const*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2484c0, Default, GameObject, playDestroyObjectAnim, GJBaseGameLayer*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x247fc0, Default, GameObject, playPickupAnimation, cocos2d::CCSprite*, float, float, float, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x248050, Default, GameObject, playPickupAnimation, cocos2d::CCSprite*, float, float, float, float, float, float, float, float, bool, float, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x68ea60, Default, GameObject, playShineEffect, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x68d390, Default, GameObject, quickUpdatePosition, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x68d400, Default, GameObject, quickUpdatePosition2, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x6760b0, Default, GameObject, removeColorSprite, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x676070, Default, GameObject, removeGlow, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x68f720, Default, GameObject, reorderColorSprite, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x68feb0, Default, GameObject, resetColorGroups, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x67b380, Default, GameObject, resetGroupDisabled, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x68fcd0, Default, GameObject, resetGroups, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x69b8e0, Default, GameObject, resetMainColorMode, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x67b650, Default, GameObject, resetMoveOffset, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x68dbd0, Default, GameObject, resetRScaleForced, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x69b920, Default, GameObject, resetSecondaryColorMode, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x68dd50, Default, GameObject, setAreaOpacity, float, float, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x68fb20, Default, GameObject, setCustomZLayer, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x686b70, Default, GameObject, setDefaultMainColorMode, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x67adf0, Default, GameObject, setDefaultSecondaryColorMode, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x68e060, Default, GameObject, setGlowOpacity, unsigned char)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x69c740, Default, GameObject, setLastPosition, cocos2d::CCPoint const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x69b880, Default, GameObject, setMainColorMode, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x69b8b0, Default, GameObject, setSecondaryColorMode, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x69a460, Default, GameObject, setupColorSprite, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x45e470, Default, GameObject, setupPixelScale, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x6888d0, Default, GameObject, setupSpriteSize, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameObject, shouldBlendColor, GJSpriteColor*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x686d30, Default, GameObject, shouldLockX, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x247f50, Default, GameObject, shouldNotHideAnimFreeze, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x248290, Default, GameObject, shouldShowPickupEffects, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x69b000, Default, GameObject, slopeFloorTop, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x69afe0, Default, GameObject, slopeWallLeft, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x69b020, Default, GameObject, slopeYPos, GameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x69b090, Default, GameObject, slopeYPos, cocos2d::CCRect)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x69b0e0, Default, GameObject, slopeYPos, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2482f0, Default, GameObject, spawnDefaultPickupParticle, GJBaseGameLayer*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2366e0, Default, GameObject, updateBlendMode, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x69c6d0, Default, GameObject, updateCustomColorType, short)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x67b3a0, Default, GameObject, updateCustomScaleX, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x67b420, Default, GameObject, updateCustomScaleY, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x6906c0, Default, GameObject, updateHSVState, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x69b430, Default, GameObject, updateIsOriented, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x69be30, Default, GameObject, updateMainColor, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x69c1f0, Default, GameObject, updateMainColorOnly, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x69c120, Default, GameObject, updateMainOpacity, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x69ac10, Default, GameObject, updateObjectEditorColor, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x69c320, Default, GameObject, updateSecondaryColor, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x69c500, Default, GameObject, updateSecondaryColorOnly, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x69c430, Default, GameObject, updateSecondaryOpacity, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x67afb0, Default, GameObject, updateStartPos, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x68d320, Default, GameObject, updateUnmodifiedPositions, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x247bb0, Default, GameObject, usesFreezeAnimation, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x247f70, Default, GameObject, usesSpecialAnimation, )
		}
	};
}
