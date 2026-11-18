#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GauntletSelectLayer.hpp>
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

	#ifndef GEODE_STATICS_onExit
		#define GEODE_STATICS_onExit
		GEODE_AS_STATIC_FUNCTION(onExit) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_rewardedVideoFinished
		#define GEODE_STATICS_rewardedVideoFinished
		GEODE_AS_STATIC_FUNCTION(rewardedVideoFinished) 
	#endif

	#ifndef GEODE_STATICS_scrollLayerWillScrollToPage
		#define GEODE_STATICS_scrollLayerWillScrollToPage
		GEODE_AS_STATIC_FUNCTION(scrollLayerWillScrollToPage) 
	#endif

	#ifndef GEODE_STATICS_scrollLayerScrolledToPage
		#define GEODE_STATICS_scrollLayerScrolledToPage
		GEODE_AS_STATIC_FUNCTION(scrollLayerScrolledToPage) 
	#endif

	#ifndef GEODE_STATICS_loadLevelsFinished
		#define GEODE_STATICS_loadLevelsFinished
		GEODE_AS_STATIC_FUNCTION(loadLevelsFinished) 
	#endif

	#ifndef GEODE_STATICS_loadLevelsFailed
		#define GEODE_STATICS_loadLevelsFailed
		GEODE_AS_STATIC_FUNCTION(loadLevelsFailed) 
	#endif

	#ifndef GEODE_STATICS_goToPage
		#define GEODE_STATICS_goToPage
		GEODE_AS_STATIC_FUNCTION(goToPage) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onBack
		#define GEODE_STATICS_onBack
		GEODE_AS_STATIC_FUNCTION(onBack) 
	#endif

	#ifndef GEODE_STATICS_onInfo
		#define GEODE_STATICS_onInfo
		GEODE_AS_STATIC_FUNCTION(onInfo) 
	#endif

	#ifndef GEODE_STATICS_onNext
		#define GEODE_STATICS_onNext
		GEODE_AS_STATIC_FUNCTION(onNext) 
	#endif

	#ifndef GEODE_STATICS_onPlay
		#define GEODE_STATICS_onPlay
		GEODE_AS_STATIC_FUNCTION(onPlay) 
	#endif

	#ifndef GEODE_STATICS_onPrev
		#define GEODE_STATICS_onPrev
		GEODE_AS_STATIC_FUNCTION(onPrev) 
	#endif

	#ifndef GEODE_STATICS_onRefresh
		#define GEODE_STATICS_onRefresh
		GEODE_AS_STATIC_FUNCTION(onRefresh) 
	#endif

	#ifndef GEODE_STATICS_playUnlockAnimation
		#define GEODE_STATICS_playUnlockAnimation
		GEODE_AS_STATIC_FUNCTION(playUnlockAnimation) 
	#endif

	#ifndef GEODE_STATICS_setupGauntlets
		#define GEODE_STATICS_setupGauntlets
		GEODE_AS_STATIC_FUNCTION(setupGauntlets) 
	#endif

	#ifndef GEODE_STATICS_showUnlockGauntlet
		#define GEODE_STATICS_showUnlockGauntlet
		GEODE_AS_STATIC_FUNCTION(showUnlockGauntlet) 
	#endif

	#ifndef GEODE_STATICS_unblockPlay
		#define GEODE_STATICS_unblockPlay
		GEODE_AS_STATIC_FUNCTION(unblockPlay) 
	#endif

	#ifndef GEODE_STATICS_unlockAnimationFinished
		#define GEODE_STATICS_unlockAnimationFinished
		GEODE_AS_STATIC_FUNCTION(unlockAnimationFinished) 
	#endif

	#ifndef GEODE_STATICS_unlockAnimationStep2
		#define GEODE_STATICS_unlockAnimationStep2
		GEODE_AS_STATIC_FUNCTION(unlockAnimationStep2) 
	#endif

	#ifndef GEODE_STATICS_unlockAnimationStep3
		#define GEODE_STATICS_unlockAnimationStep3
		GEODE_AS_STATIC_FUNCTION(unlockAnimationStep3) 
	#endif

	#ifndef GEODE_STATICS_updateArrows
		#define GEODE_STATICS_updateArrows
		GEODE_AS_STATIC_FUNCTION(updateArrows) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_scene
		#define GEODE_CONCEPT_CHECK_scene
		GEODE_CONCEPT_FUNCTION_CHECK(scene) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onExit
		#define GEODE_CONCEPT_CHECK_onExit
		GEODE_CONCEPT_FUNCTION_CHECK(onExit) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyBackClicked
		#define GEODE_CONCEPT_CHECK_keyBackClicked
		GEODE_CONCEPT_FUNCTION_CHECK(keyBackClicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_rewardedVideoFinished
		#define GEODE_CONCEPT_CHECK_rewardedVideoFinished
		GEODE_CONCEPT_FUNCTION_CHECK(rewardedVideoFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_scrollLayerWillScrollToPage
		#define GEODE_CONCEPT_CHECK_scrollLayerWillScrollToPage
		GEODE_CONCEPT_FUNCTION_CHECK(scrollLayerWillScrollToPage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_scrollLayerScrolledToPage
		#define GEODE_CONCEPT_CHECK_scrollLayerScrolledToPage
		GEODE_CONCEPT_FUNCTION_CHECK(scrollLayerScrolledToPage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadLevelsFinished
		#define GEODE_CONCEPT_CHECK_loadLevelsFinished
		GEODE_CONCEPT_FUNCTION_CHECK(loadLevelsFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadLevelsFailed
		#define GEODE_CONCEPT_CHECK_loadLevelsFailed
		GEODE_CONCEPT_FUNCTION_CHECK(loadLevelsFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_goToPage
		#define GEODE_CONCEPT_CHECK_goToPage
		GEODE_CONCEPT_FUNCTION_CHECK(goToPage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onBack
		#define GEODE_CONCEPT_CHECK_onBack
		GEODE_CONCEPT_FUNCTION_CHECK(onBack) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onInfo
		#define GEODE_CONCEPT_CHECK_onInfo
		GEODE_CONCEPT_FUNCTION_CHECK(onInfo) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onNext
		#define GEODE_CONCEPT_CHECK_onNext
		GEODE_CONCEPT_FUNCTION_CHECK(onNext) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onPlay
		#define GEODE_CONCEPT_CHECK_onPlay
		GEODE_CONCEPT_FUNCTION_CHECK(onPlay) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onPrev
		#define GEODE_CONCEPT_CHECK_onPrev
		GEODE_CONCEPT_FUNCTION_CHECK(onPrev) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onRefresh
		#define GEODE_CONCEPT_CHECK_onRefresh
		GEODE_CONCEPT_FUNCTION_CHECK(onRefresh) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_playUnlockAnimation
		#define GEODE_CONCEPT_CHECK_playUnlockAnimation
		GEODE_CONCEPT_FUNCTION_CHECK(playUnlockAnimation) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupGauntlets
		#define GEODE_CONCEPT_CHECK_setupGauntlets
		GEODE_CONCEPT_FUNCTION_CHECK(setupGauntlets) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_showUnlockGauntlet
		#define GEODE_CONCEPT_CHECK_showUnlockGauntlet
		GEODE_CONCEPT_FUNCTION_CHECK(showUnlockGauntlet) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_unblockPlay
		#define GEODE_CONCEPT_CHECK_unblockPlay
		GEODE_CONCEPT_FUNCTION_CHECK(unblockPlay) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_unlockAnimationFinished
		#define GEODE_CONCEPT_CHECK_unlockAnimationFinished
		GEODE_CONCEPT_FUNCTION_CHECK(unlockAnimationFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_unlockAnimationStep2
		#define GEODE_CONCEPT_CHECK_unlockAnimationStep2
		GEODE_CONCEPT_FUNCTION_CHECK(unlockAnimationStep2) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_unlockAnimationStep3
		#define GEODE_CONCEPT_CHECK_unlockAnimationStep3
		GEODE_CONCEPT_FUNCTION_CHECK(unlockAnimationStep3) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateArrows
		#define GEODE_CONCEPT_CHECK_updateArrows
		GEODE_CONCEPT_FUNCTION_CHECK(updateArrows) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GauntletSelectLayer> : ModifyBase<ModifyDerive<Der, GauntletSelectLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GauntletSelectLayer>>;
		using ModifyBase<ModifyDerive<Der, GauntletSelectLayer>>::ModifyBase;
		using Base = GauntletSelectLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(base::get() + 0x22701c, Default, GauntletSelectLayer)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2273f0, Default, GauntletSelectLayer, create, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4ed710, Default, GauntletSelectLayer, scene, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4efbfc, Default, GauntletSelectLayer, onExit, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4ef4f4, Default, GauntletSelectLayer, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4ef620, Default, GauntletSelectLayer, rewardedVideoFinished, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4ef454, Default, GauntletSelectLayer, scrollLayerWillScrollToPage, BoomScrollLayer*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4ef3b4, Default, GauntletSelectLayer, scrollLayerScrolledToPage, BoomScrollLayer*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4ee950, Default, GauntletSelectLayer, loadLevelsFinished, cocos2d::CCArray*, char const*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4eeaf8, Default, GauntletSelectLayer, loadLevelsFailed, char const*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4ef2b8, Default, GauntletSelectLayer, goToPage, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4ed844, Default, GauntletSelectLayer, init, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4ee280, Default, GauntletSelectLayer, onBack, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4ee2f4, Default, GauntletSelectLayer, onInfo, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4ee26c, Default, GauntletSelectLayer, onNext, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4eed48, Default, GauntletSelectLayer, onPlay, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4ee258, Default, GauntletSelectLayer, onPrev, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4ee3b0, Default, GauntletSelectLayer, onRefresh, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x63f6c, Default, GauntletSelectLayer, playUnlockAnimation, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4ee458, Default, GauntletSelectLayer, setupGauntlets, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4efac4, Default, GauntletSelectLayer, showUnlockGauntlet, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4ef3ac, Default, GauntletSelectLayer, unblockPlay, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GauntletSelectLayer, unlockAnimationFinished, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4efd3c, Default, GauntletSelectLayer, unlockAnimationStep2, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4f005c, Default, GauntletSelectLayer, unlockAnimationStep3, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4ee900, Default, GauntletSelectLayer, updateArrows, )
		}
	};
}
