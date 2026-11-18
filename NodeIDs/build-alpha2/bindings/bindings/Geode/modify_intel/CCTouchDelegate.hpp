#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <cocos2d.h>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_ccTouchBegan
		#define GEODE_STATICS_ccTouchBegan
		GEODE_AS_STATIC_FUNCTION(ccTouchBegan) 
	#endif

	#ifndef GEODE_STATICS_ccTouchMoved
		#define GEODE_STATICS_ccTouchMoved
		GEODE_AS_STATIC_FUNCTION(ccTouchMoved) 
	#endif

	#ifndef GEODE_STATICS_ccTouchEnded
		#define GEODE_STATICS_ccTouchEnded
		GEODE_AS_STATIC_FUNCTION(ccTouchEnded) 
	#endif

	#ifndef GEODE_STATICS_ccTouchCancelled
		#define GEODE_STATICS_ccTouchCancelled
		GEODE_AS_STATIC_FUNCTION(ccTouchCancelled) 
	#endif

	#ifndef GEODE_STATICS_ccTouchesBegan
		#define GEODE_STATICS_ccTouchesBegan
		GEODE_AS_STATIC_FUNCTION(ccTouchesBegan) 
	#endif

	#ifndef GEODE_STATICS_ccTouchesMoved
		#define GEODE_STATICS_ccTouchesMoved
		GEODE_AS_STATIC_FUNCTION(ccTouchesMoved) 
	#endif

	#ifndef GEODE_STATICS_ccTouchesEnded
		#define GEODE_STATICS_ccTouchesEnded
		GEODE_AS_STATIC_FUNCTION(ccTouchesEnded) 
	#endif

	#ifndef GEODE_STATICS_ccTouchesCancelled
		#define GEODE_STATICS_ccTouchesCancelled
		GEODE_AS_STATIC_FUNCTION(ccTouchesCancelled) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_ccTouchBegan
		#define GEODE_CONCEPT_CHECK_ccTouchBegan
		GEODE_CONCEPT_FUNCTION_CHECK(ccTouchBegan) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_ccTouchMoved
		#define GEODE_CONCEPT_CHECK_ccTouchMoved
		GEODE_CONCEPT_FUNCTION_CHECK(ccTouchMoved) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_ccTouchEnded
		#define GEODE_CONCEPT_CHECK_ccTouchEnded
		GEODE_CONCEPT_FUNCTION_CHECK(ccTouchEnded) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_ccTouchCancelled
		#define GEODE_CONCEPT_CHECK_ccTouchCancelled
		GEODE_CONCEPT_FUNCTION_CHECK(ccTouchCancelled) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_ccTouchesBegan
		#define GEODE_CONCEPT_CHECK_ccTouchesBegan
		GEODE_CONCEPT_FUNCTION_CHECK(ccTouchesBegan) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_ccTouchesMoved
		#define GEODE_CONCEPT_CHECK_ccTouchesMoved
		GEODE_CONCEPT_FUNCTION_CHECK(ccTouchesMoved) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_ccTouchesEnded
		#define GEODE_CONCEPT_CHECK_ccTouchesEnded
		GEODE_CONCEPT_FUNCTION_CHECK(ccTouchesEnded) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_ccTouchesCancelled
		#define GEODE_CONCEPT_CHECK_ccTouchesCancelled
		GEODE_CONCEPT_FUNCTION_CHECK(ccTouchesCancelled) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setPreviousPriority
		#define GEODE_CONCEPT_CHECK_setPreviousPriority
		GEODE_CONCEPT_FUNCTION_CHECK(setPreviousPriority) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getPreviousPriority
		#define GEODE_CONCEPT_CHECK_getPreviousPriority
		GEODE_CONCEPT_FUNCTION_CHECK(getPreviousPriority) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCTouchDelegate> : ModifyBase<ModifyDerive<Der, cocos2d::CCTouchDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCTouchDelegate>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCTouchDelegate>>::ModifyBase;
		using Base = cocos2d::CCTouchDelegate;
        using Derived = Der;
		void apply() override {

            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(cocos2d::CCTouchDelegate, ccTouchBegan, cocos2d::CCTouch*, cocos2d::CCEvent*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(cocos2d::CCTouchDelegate, ccTouchMoved, cocos2d::CCTouch*, cocos2d::CCEvent*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(cocos2d::CCTouchDelegate, ccTouchEnded, cocos2d::CCTouch*, cocos2d::CCEvent*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(cocos2d::CCTouchDelegate, ccTouchCancelled, cocos2d::CCTouch*, cocos2d::CCEvent*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(cocos2d::CCTouchDelegate, ccTouchesBegan, cocos2d::CCSet*, cocos2d::CCEvent*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(cocos2d::CCTouchDelegate, ccTouchesMoved, cocos2d::CCSet*, cocos2d::CCEvent*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(cocos2d::CCTouchDelegate, ccTouchesEnded, cocos2d::CCSet*, cocos2d::CCEvent*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(cocos2d::CCTouchDelegate, ccTouchesCancelled, cocos2d::CCSet*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(cocos2d::CCTouchDelegate, setPreviousPriority, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(cocos2d::CCTouchDelegate, getPreviousPriority, )
		}
	};
}
