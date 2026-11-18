#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/RewardUnlockLayer.hpp>
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

	#ifndef GEODE_STATICS_currencyWillExit
		#define GEODE_STATICS_currencyWillExit
		GEODE_AS_STATIC_FUNCTION(currencyWillExit) 
	#endif

	#ifndef GEODE_STATICS_connectionTimeout
		#define GEODE_STATICS_connectionTimeout
		GEODE_AS_STATIC_FUNCTION(connectionTimeout) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_labelEnterFinishedO
		#define GEODE_STATICS_labelEnterFinishedO
		GEODE_AS_STATIC_FUNCTION(labelEnterFinishedO) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_playDropSound
		#define GEODE_STATICS_playDropSound
		GEODE_AS_STATIC_FUNCTION(playDropSound) 
	#endif

	#ifndef GEODE_STATICS_playLabelEffect
		#define GEODE_STATICS_playLabelEffect
		GEODE_AS_STATIC_FUNCTION(playLabelEffect) 
	#endif

	#ifndef GEODE_STATICS_playRewardEffect
		#define GEODE_STATICS_playRewardEffect
		GEODE_AS_STATIC_FUNCTION(playRewardEffect) 
	#endif

	#ifndef GEODE_STATICS_readyToCollect
		#define GEODE_STATICS_readyToCollect
		GEODE_AS_STATIC_FUNCTION(readyToCollect) 
	#endif

	#ifndef GEODE_STATICS_showCloseButton
		#define GEODE_STATICS_showCloseButton
		GEODE_AS_STATIC_FUNCTION(showCloseButton) 
	#endif

	#ifndef GEODE_STATICS_showCollectReward
		#define GEODE_STATICS_showCollectReward
		GEODE_AS_STATIC_FUNCTION(showCollectReward) 
	#endif

	#ifndef GEODE_STATICS_step2
		#define GEODE_STATICS_step2
		GEODE_AS_STATIC_FUNCTION(step2) 
	#endif

	#ifndef GEODE_STATICS_step3
		#define GEODE_STATICS_step3
		GEODE_AS_STATIC_FUNCTION(step3) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyBackClicked
		#define GEODE_CONCEPT_CHECK_keyBackClicked
		GEODE_CONCEPT_FUNCTION_CHECK(keyBackClicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_currencyWillExit
		#define GEODE_CONCEPT_CHECK_currencyWillExit
		GEODE_CONCEPT_FUNCTION_CHECK(currencyWillExit) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_connectionTimeout
		#define GEODE_CONCEPT_CHECK_connectionTimeout
		GEODE_CONCEPT_FUNCTION_CHECK(connectionTimeout) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_labelEnterFinishedO
		#define GEODE_CONCEPT_CHECK_labelEnterFinishedO
		GEODE_CONCEPT_FUNCTION_CHECK(labelEnterFinishedO) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClose
		#define GEODE_CONCEPT_CHECK_onClose
		GEODE_CONCEPT_FUNCTION_CHECK(onClose) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_playDropSound
		#define GEODE_CONCEPT_CHECK_playDropSound
		GEODE_CONCEPT_FUNCTION_CHECK(playDropSound) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_playLabelEffect
		#define GEODE_CONCEPT_CHECK_playLabelEffect
		GEODE_CONCEPT_FUNCTION_CHECK(playLabelEffect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_playRewardEffect
		#define GEODE_CONCEPT_CHECK_playRewardEffect
		GEODE_CONCEPT_FUNCTION_CHECK(playRewardEffect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_readyToCollect
		#define GEODE_CONCEPT_CHECK_readyToCollect
		GEODE_CONCEPT_FUNCTION_CHECK(readyToCollect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_showCloseButton
		#define GEODE_CONCEPT_CHECK_showCloseButton
		GEODE_CONCEPT_FUNCTION_CHECK(showCloseButton) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_showCollectReward
		#define GEODE_CONCEPT_CHECK_showCollectReward
		GEODE_CONCEPT_FUNCTION_CHECK(showCollectReward) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_step2
		#define GEODE_CONCEPT_CHECK_step2
		GEODE_CONCEPT_FUNCTION_CHECK(step2) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_step3
		#define GEODE_CONCEPT_CHECK_step3
		GEODE_CONCEPT_FUNCTION_CHECK(step3) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, RewardUnlockLayer> : ModifyBase<ModifyDerive<Der, RewardUnlockLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, RewardUnlockLayer>>;
		using ModifyBase<ModifyDerive<Der, RewardUnlockLayer>>::ModifyBase;
		using Base = RewardUnlockLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1fe9e0, Default, RewardUnlockLayer, create, int, RewardsPage*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x202f00, Default, RewardUnlockLayer, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x202ec0, Default, RewardUnlockLayer, currencyWillExit, CurrencyRewardLayer*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2005f0, Default, RewardUnlockLayer, connectionTimeout, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1ff5d0, Default, RewardUnlockLayer, init, int, RewardsPage*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x202eb0, Default, RewardUnlockLayer, labelEnterFinishedO, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x200590, Default, RewardUnlockLayer, onClose, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x200450, Default, RewardUnlockLayer, playDropSound, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x202760, Default, RewardUnlockLayer, playLabelEffect, int, int, cocos2d::CCSprite*, cocos2d::CCPoint, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x200650, Default, RewardUnlockLayer, playRewardEffect, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1fedb0, Default, RewardUnlockLayer, readyToCollect, GJRewardItem*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x202e30, Default, RewardUnlockLayer, showCloseButton, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1fedd0, Default, RewardUnlockLayer, showCollectReward, GJRewardItem*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2004c0, Default, RewardUnlockLayer, step2, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x657f0, Default, RewardUnlockLayer, step3, )
		}
	};
}
