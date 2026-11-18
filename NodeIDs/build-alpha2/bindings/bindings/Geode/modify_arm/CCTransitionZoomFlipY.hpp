#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <cocos2d.h>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_onEnter
		#define GEODE_STATICS_onEnter
		GEODE_AS_STATIC_FUNCTION(onEnter) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onEnter
		#define GEODE_CONCEPT_CHECK_onEnter
		GEODE_CONCEPT_FUNCTION_CHECK(onEnter) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCTransitionZoomFlipY> : ModifyBase<ModifyDerive<Der, cocos2d::CCTransitionZoomFlipY>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCTransitionZoomFlipY>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCTransitionZoomFlipY>>::ModifyBase;
		using Base = cocos2d::CCTransitionZoomFlipY;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x962c4, Default, cocos2d::CCTransitionZoomFlipY, create, float, cocos2d::CCScene*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x9623c, Default, cocos2d::CCTransitionZoomFlipY, create, float, cocos2d::CCScene*, cocos2d::tOrientation)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x96060, Default, cocos2d::CCTransitionZoomFlipY, onEnter, )
		}
	};
}
