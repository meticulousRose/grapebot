#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <cocos2d.h>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_getBlendFunc
		#define GEODE_STATICS_getBlendFunc
		GEODE_AS_STATIC_FUNCTION(getBlendFunc) 
	#endif

	#ifndef GEODE_STATICS_setBlendFunc
		#define GEODE_STATICS_setBlendFunc
		GEODE_AS_STATIC_FUNCTION(setBlendFunc) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_getBlendFunc
		#define GEODE_CONCEPT_CHECK_getBlendFunc
		GEODE_CONCEPT_FUNCTION_CHECK(getBlendFunc) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setBlendFunc
		#define GEODE_CONCEPT_CHECK_setBlendFunc
		GEODE_CONCEPT_FUNCTION_CHECK(setBlendFunc) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCBlendProtocol> : ModifyBase<ModifyDerive<Der, cocos2d::CCBlendProtocol>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCBlendProtocol>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCBlendProtocol>>::ModifyBase;
		using Base = cocos2d::CCBlendProtocol;
        using Derived = Der;
		void apply() override {

            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(cocos2d::CCBlendProtocol, getBlendFunc, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(cocos2d::CCBlendProtocol, setBlendFunc, cocos2d::ccBlendFunc)
		}
	};
}
