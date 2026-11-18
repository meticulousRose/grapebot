#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <cocos2d.h>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_copyWithZone
		#define GEODE_STATICS_copyWithZone
		GEODE_AS_STATIC_FUNCTION(copyWithZone) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_copyWithZone
		#define GEODE_CONCEPT_CHECK_copyWithZone
		GEODE_CONCEPT_FUNCTION_CHECK(copyWithZone) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCCopying> : ModifyBase<ModifyDerive<Der, cocos2d::CCCopying>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCCopying>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCCopying>>::ModifyBase;
		using Base = cocos2d::CCCopying;
        using Derived = Der;
		void apply() override {

            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(cocos2d::CCCopying, copyWithZone, cocos2d::CCZone*)
		}
	};
}
