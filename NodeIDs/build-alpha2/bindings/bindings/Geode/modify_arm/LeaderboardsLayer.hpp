#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/LeaderboardsLayer.hpp>
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

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
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

	#ifndef GEODE_STATICS_loadLeaderboardFinished
		#define GEODE_STATICS_loadLeaderboardFinished
		GEODE_AS_STATIC_FUNCTION(loadLeaderboardFinished) 
	#endif

	#ifndef GEODE_STATICS_loadLeaderboardFailed
		#define GEODE_STATICS_loadLeaderboardFailed
		GEODE_AS_STATIC_FUNCTION(loadLeaderboardFailed) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_isCorrect
		#define GEODE_STATICS_isCorrect
		GEODE_AS_STATIC_FUNCTION(isCorrect) 
	#endif

	#ifndef GEODE_STATICS_onBack
		#define GEODE_STATICS_onBack
		GEODE_AS_STATIC_FUNCTION(onBack) 
	#endif

	#ifndef GEODE_STATICS_onCreators
		#define GEODE_STATICS_onCreators
		GEODE_AS_STATIC_FUNCTION(onCreators) 
	#endif

	#ifndef GEODE_STATICS_onGlobal
		#define GEODE_STATICS_onGlobal
		GEODE_AS_STATIC_FUNCTION(onGlobal) 
	#endif

	#ifndef GEODE_STATICS_onInfo
		#define GEODE_STATICS_onInfo
		GEODE_AS_STATIC_FUNCTION(onInfo) 
	#endif

	#ifndef GEODE_STATICS_onStat
		#define GEODE_STATICS_onStat
		GEODE_AS_STATIC_FUNCTION(onStat) 
	#endif

	#ifndef GEODE_STATICS_onTop
		#define GEODE_STATICS_onTop
		GEODE_AS_STATIC_FUNCTION(onTop) 
	#endif

	#ifndef GEODE_STATICS_onWeek
		#define GEODE_STATICS_onWeek
		GEODE_AS_STATIC_FUNCTION(onWeek) 
	#endif

	#ifndef GEODE_STATICS_refreshTabs
		#define GEODE_STATICS_refreshTabs
		GEODE_AS_STATIC_FUNCTION(refreshTabs) 
	#endif

	#ifndef GEODE_STATICS_selectLeaderboard
		#define GEODE_STATICS_selectLeaderboard
		GEODE_AS_STATIC_FUNCTION(selectLeaderboard) 
	#endif

	#ifndef GEODE_STATICS_setupLevelBrowser
		#define GEODE_STATICS_setupLevelBrowser
		GEODE_AS_STATIC_FUNCTION(setupLevelBrowser) 
	#endif

	#ifndef GEODE_STATICS_setupTabs
		#define GEODE_STATICS_setupTabs
		GEODE_AS_STATIC_FUNCTION(setupTabs) 
	#endif

	#ifndef GEODE_STATICS_toggleTabButtons
		#define GEODE_STATICS_toggleTabButtons
		GEODE_AS_STATIC_FUNCTION(toggleTabButtons) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_scene
		#define GEODE_CONCEPT_CHECK_scene
		GEODE_CONCEPT_FUNCTION_CHECK(scene) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyBackClicked
		#define GEODE_CONCEPT_CHECK_keyBackClicked
		GEODE_CONCEPT_FUNCTION_CHECK(keyBackClicked) 
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

	#ifndef GEODE_CONCEPT_CHECK_loadLeaderboardFinished
		#define GEODE_CONCEPT_CHECK_loadLeaderboardFinished
		GEODE_CONCEPT_FUNCTION_CHECK(loadLeaderboardFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadLeaderboardFailed
		#define GEODE_CONCEPT_CHECK_loadLeaderboardFailed
		GEODE_CONCEPT_FUNCTION_CHECK(loadLeaderboardFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isCorrect
		#define GEODE_CONCEPT_CHECK_isCorrect
		GEODE_CONCEPT_FUNCTION_CHECK(isCorrect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onBack
		#define GEODE_CONCEPT_CHECK_onBack
		GEODE_CONCEPT_FUNCTION_CHECK(onBack) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onCreators
		#define GEODE_CONCEPT_CHECK_onCreators
		GEODE_CONCEPT_FUNCTION_CHECK(onCreators) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onGlobal
		#define GEODE_CONCEPT_CHECK_onGlobal
		GEODE_CONCEPT_FUNCTION_CHECK(onGlobal) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onInfo
		#define GEODE_CONCEPT_CHECK_onInfo
		GEODE_CONCEPT_FUNCTION_CHECK(onInfo) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onStat
		#define GEODE_CONCEPT_CHECK_onStat
		GEODE_CONCEPT_FUNCTION_CHECK(onStat) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onTop
		#define GEODE_CONCEPT_CHECK_onTop
		GEODE_CONCEPT_FUNCTION_CHECK(onTop) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onWeek
		#define GEODE_CONCEPT_CHECK_onWeek
		GEODE_CONCEPT_FUNCTION_CHECK(onWeek) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_refreshTabs
		#define GEODE_CONCEPT_CHECK_refreshTabs
		GEODE_CONCEPT_FUNCTION_CHECK(refreshTabs) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_selectLeaderboard
		#define GEODE_CONCEPT_CHECK_selectLeaderboard
		GEODE_CONCEPT_FUNCTION_CHECK(selectLeaderboard) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupLevelBrowser
		#define GEODE_CONCEPT_CHECK_setupLevelBrowser
		GEODE_CONCEPT_FUNCTION_CHECK(setupLevelBrowser) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupTabs
		#define GEODE_CONCEPT_CHECK_setupTabs
		GEODE_CONCEPT_FUNCTION_CHECK(setupTabs) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleTabButtons
		#define GEODE_CONCEPT_CHECK_toggleTabButtons
		GEODE_CONCEPT_FUNCTION_CHECK(toggleTabButtons) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, LeaderboardsLayer> : ModifyBase<ModifyDerive<Der, LeaderboardsLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, LeaderboardsLayer>>;
		using ModifyBase<ModifyDerive<Der, LeaderboardsLayer>>::ModifyBase;
		using Base = LeaderboardsLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x46e1e0, Default, LeaderboardsLayer, create, LeaderboardType, LeaderboardStat)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x46e0e8, Default, LeaderboardsLayer, scene, LeaderboardType, LeaderboardStat)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x470254, Default, LeaderboardsLayer, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4701fc, Default, LeaderboardsLayer, FLAlert_Clicked, FLAlertLayer*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x46fb38, Default, LeaderboardsLayer, updateUserScoreFinished, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x46fb78, Default, LeaderboardsLayer, updateUserScoreFailed, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x46fc20, Default, LeaderboardsLayer, loadLeaderboardFinished, cocos2d::CCArray*, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x46fec8, Default, LeaderboardsLayer, loadLeaderboardFailed, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x46e2c4, Default, LeaderboardsLayer, init, LeaderboardType, LeaderboardStat)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x46fe04, Default, LeaderboardsLayer, isCorrect, std::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x46f5e0, Default, LeaderboardsLayer, onBack, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x46f680, Default, LeaderboardsLayer, onCreators, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x46f664, Default, LeaderboardsLayer, onGlobal, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x46ebd0, Default, LeaderboardsLayer, onInfo, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x46f69c, Default, LeaderboardsLayer, onStat, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x46f62c, Default, LeaderboardsLayer, onTop, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x46f648, Default, LeaderboardsLayer, onWeek, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x46f80c, Default, LeaderboardsLayer, refreshTabs, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x46f434, Default, LeaderboardsLayer, selectLeaderboard, LeaderboardType, LeaderboardStat)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x46f6d4, Default, LeaderboardsLayer, setupLevelBrowser, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x46ee54, Default, LeaderboardsLayer, setupTabs, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x46f8b0, Default, LeaderboardsLayer, toggleTabButtons, )
		}
	};
}
