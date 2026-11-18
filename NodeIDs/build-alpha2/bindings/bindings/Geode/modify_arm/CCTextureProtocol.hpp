#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <cocos2d.h>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_getTexture
		#define GEODE_STATICS_getTexture
		GEODE_AS_STATIC_FUNCTION(getTexture) 
	#endif

	#ifndef GEODE_STATICS_setTexture
		#define GEODE_STATICS_setTexture
		GEODE_AS_STATIC_FUNCTION(setTexture) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_getTexture
		#define GEODE_CONCEPT_CHECK_getTexture
		GEODE_CONCEPT_FUNCTION_CHECK(getTexture) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setTexture
		#define GEODE_CONCEPT_CHECK_setTexture
		GEODE_CONCEPT_FUNCTION_CHECK(setTexture) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCTextureProtocol> : ModifyBase<ModifyDerive<Der, cocos2d::CCTextureProtocol>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCTextureProtocol>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCTextureProtocol>>::ModifyBase;
		using Base = cocos2d::CCTextureProtocol;
        using Derived = Der;
		void apply() override {

            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(cocos2d::CCTextureProtocol, getTexture, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(cocos2d::CCTextureProtocol, setTexture, cocos2d::CCTexture2D*)
		}
	};
}
