#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/LevelLeaderboard.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_registerWithTouchDispatcher
		#define GEODE_STATICS_registerWithTouchDispatcher
		GEODE_AS_STATIC_FUNCTION(registerWithTouchDispatcher) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_show
		#define GEODE_STATICS_show
		GEODE_AS_STATIC_FUNCTION(show) 
	#endif

	#ifndef GEODE_STATICS_loadLeaderboardFinished
		#define GEODE_STATICS_loadLeaderboardFinished
		GEODE_AS_STATIC_FUNCTION(loadLeaderboardFinished) 
	#endif

	#ifndef GEODE_STATICS_loadLeaderboardFailed
		#define GEODE_STATICS_loadLeaderboardFailed
		GEODE_AS_STATIC_FUNCTION(loadLeaderboardFailed) 
	#endif

	#ifndef GEODE_STATICS_FLAlert_Clicked
		#define GEODE_STATICS_FLAlert_Clicked
		GEODE_AS_STATIC_FUNCTION(FLAlert_Clicked) 
	#endif

	#ifndef GEODE_STATICS_updateUserScoreFinished
		#define GEODE_STATICS_updateUserScoreFinished
		GEODE_AS_STATIC_FUNCTION(updateUserScoreFinished) 
	#endif

	#ifndef GEODE_STATICS_updateUserScoreFailed
		#define GEODE_STATICS_updateUserScoreFailed
		GEODE_AS_STATIC_FUNCTION(updateUserScoreFailed) 
	#endif

	#ifndef GEODE_STATICS_deleteLocalScores
		#define GEODE_STATICS_deleteLocalScores
		GEODE_AS_STATIC_FUNCTION(deleteLocalScores) 
	#endif

	#ifndef GEODE_STATICS_getLocalScores
		#define GEODE_STATICS_getLocalScores
		GEODE_AS_STATIC_FUNCTION(getLocalScores) 
	#endif

	#ifndef GEODE_STATICS_getSpriteButton
		#define GEODE_STATICS_getSpriteButton
		GEODE_AS_STATIC_FUNCTION(getSpriteButton) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_isCorrect
		#define GEODE_STATICS_isCorrect
		GEODE_AS_STATIC_FUNCTION(isCorrect) 
	#endif

	#ifndef GEODE_STATICS_loadScores
		#define GEODE_STATICS_loadScores
		GEODE_AS_STATIC_FUNCTION(loadScores) 
	#endif

	#ifndef GEODE_STATICS_onChangeMode
		#define GEODE_STATICS_onChangeMode
		GEODE_AS_STATIC_FUNCTION(onChangeMode) 
	#endif

	#ifndef GEODE_STATICS_onChangeType
		#define GEODE_STATICS_onChangeType
		GEODE_AS_STATIC_FUNCTION(onChangeType) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_onDeleteLocalScores
		#define GEODE_STATICS_onDeleteLocalScores
		GEODE_AS_STATIC_FUNCTION(onDeleteLocalScores) 
	#endif

	#ifndef GEODE_STATICS_onUpdate
		#define GEODE_STATICS_onUpdate
		GEODE_AS_STATIC_FUNCTION(onUpdate) 
	#endif

	#ifndef GEODE_STATICS_reloadLeaderboard
		#define GEODE_STATICS_reloadLeaderboard
		GEODE_AS_STATIC_FUNCTION(reloadLeaderboard) 
	#endif

	#ifndef GEODE_STATICS_setupLeaderboard
		#define GEODE_STATICS_setupLeaderboard
		GEODE_AS_STATIC_FUNCTION(setupLeaderboard) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_registerWithTouchDispatcher
		#define GEODE_CONCEPT_CHECK_registerWithTouchDispatcher
		GEODE_CONCEPT_FUNCTION_CHECK(registerWithTouchDispatcher) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyBackClicked
		#define GEODE_CONCEPT_CHECK_keyBackClicked
		GEODE_CONCEPT_FUNCTION_CHECK(keyBackClicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_show
		#define GEODE_CONCEPT_CHECK_show
		GEODE_CONCEPT_FUNCTION_CHECK(show) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadLeaderboardFinished
		#define GEODE_CONCEPT_CHECK_loadLeaderboardFinished
		GEODE_CONCEPT_FUNCTION_CHECK(loadLeaderboardFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadLeaderboardFailed
		#define GEODE_CONCEPT_CHECK_loadLeaderboardFailed
		GEODE_CONCEPT_FUNCTION_CHECK(loadLeaderboardFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_FLAlert_Clicked
		#define GEODE_CONCEPT_CHECK_FLAlert_Clicked
		GEODE_CONCEPT_FUNCTION_CHECK(FLAlert_Clicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateUserScoreFinished
		#define GEODE_CONCEPT_CHECK_updateUserScoreFinished
		GEODE_CONCEPT_FUNCTION_CHECK(updateUserScoreFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateUserScoreFailed
		#define GEODE_CONCEPT_CHECK_updateUserScoreFailed
		GEODE_CONCEPT_FUNCTION_CHECK(updateUserScoreFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_ownsTouchPrio
		#define GEODE_CONCEPT_CHECK_ownsTouchPrio
		GEODE_CONCEPT_FUNCTION_CHECK(ownsTouchPrio) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_deleteLocalScores
		#define GEODE_CONCEPT_CHECK_deleteLocalScores
		GEODE_CONCEPT_FUNCTION_CHECK(deleteLocalScores) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getLocalScores
		#define GEODE_CONCEPT_CHECK_getLocalScores
		GEODE_CONCEPT_FUNCTION_CHECK(getLocalScores) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSpriteButton
		#define GEODE_CONCEPT_CHECK_getSpriteButton
		GEODE_CONCEPT_FUNCTION_CHECK(getSpriteButton) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isCorrect
		#define GEODE_CONCEPT_CHECK_isCorrect
		GEODE_CONCEPT_FUNCTION_CHECK(isCorrect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadScores
		#define GEODE_CONCEPT_CHECK_loadScores
		GEODE_CONCEPT_FUNCTION_CHECK(loadScores) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onChangeMode
		#define GEODE_CONCEPT_CHECK_onChangeMode
		GEODE_CONCEPT_FUNCTION_CHECK(onChangeMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onChangeType
		#define GEODE_CONCEPT_CHECK_onChangeType
		GEODE_CONCEPT_FUNCTION_CHECK(onChangeType) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClose
		#define GEODE_CONCEPT_CHECK_onClose
		GEODE_CONCEPT_FUNCTION_CHECK(onClose) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onDeleteLocalScores
		#define GEODE_CONCEPT_CHECK_onDeleteLocalScores
		GEODE_CONCEPT_FUNCTION_CHECK(onDeleteLocalScores) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onUpdate
		#define GEODE_CONCEPT_CHECK_onUpdate
		GEODE_CONCEPT_FUNCTION_CHECK(onUpdate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_reloadLeaderboard
		#define GEODE_CONCEPT_CHECK_reloadLeaderboard
		GEODE_CONCEPT_FUNCTION_CHECK(reloadLeaderboard) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupLeaderboard
		#define GEODE_CONCEPT_CHECK_setupLeaderboard
		GEODE_CONCEPT_FUNCTION_CHECK(setupLeaderboard) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, LevelLeaderboard> : ModifyBase<ModifyDerive<Der, LevelLeaderboard>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, LevelLeaderboard>>;
		using ModifyBase<ModifyDerive<Der, LevelLeaderboard>>::ModifyBase;
		using Base = LevelLeaderboard;
        using Derived = Der;
		void apply() override {

            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelLeaderboard, create, GJGameLevel*, LevelLeaderboardType, LevelLeaderboardMode)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x34d0ec, Default, LevelLeaderboard, registerWithTouchDispatcher, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x34d070, Default, LevelLeaderboard, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x34d5c4, Default, LevelLeaderboard, show, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x34d2f4, Default, LevelLeaderboard, loadLeaderboardFinished, cocos2d::CCArray*, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x34d440, Default, LevelLeaderboard, loadLeaderboardFailed, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x34cce8, Default, LevelLeaderboard, FLAlert_Clicked, FLAlertLayer*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x34cee0, Default, LevelLeaderboard, updateUserScoreFinished, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x34ceec, Default, LevelLeaderboard, updateUserScoreFailed, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(LevelLeaderboard, ownsTouchPrio, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x34cb58, Default, LevelLeaderboard, deleteLocalScores, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x34cd80, Default, LevelLeaderboard, getLocalScores, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x34c33c, Default, LevelLeaderboard, getSpriteButton, std::string, cocos2d::SEL_MenuHandler, cocos2d::CCMenu*, float, cocos2d::CCPoint, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x34b424, Default, LevelLeaderboard, init, GJGameLevel*, LevelLeaderboardType, LevelLeaderboardMode)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x34d124, Default, LevelLeaderboard, isCorrect, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x34c7bc, Default, LevelLeaderboard, loadScores, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x34c514, Default, LevelLeaderboard, onChangeMode, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x34c748, Default, LevelLeaderboard, onChangeType, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x34c63c, Default, LevelLeaderboard, onClose, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x34c564, Default, LevelLeaderboard, onDeleteLocalScores, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x34c678, Default, LevelLeaderboard, onUpdate, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x34cf94, Default, LevelLeaderboard, reloadLeaderboard, LevelLeaderboardType, LevelLeaderboardMode)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x34c9c4, Default, LevelLeaderboard, setupLeaderboard, cocos2d::CCArray*)
		}
	};
}
