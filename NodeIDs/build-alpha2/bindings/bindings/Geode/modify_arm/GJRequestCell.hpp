#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJRequestCell.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_draw
		#define GEODE_STATICS_draw
		GEODE_AS_STATIC_FUNCTION(draw) 
	#endif

	#ifndef GEODE_STATICS_loadFromScore
		#define GEODE_STATICS_loadFromScore
		GEODE_AS_STATIC_FUNCTION(loadFromScore) 
	#endif

	#ifndef GEODE_STATICS_markAsRead
		#define GEODE_STATICS_markAsRead
		GEODE_AS_STATIC_FUNCTION(markAsRead) 
	#endif

	#ifndef GEODE_STATICS_onToggle
		#define GEODE_STATICS_onToggle
		GEODE_AS_STATIC_FUNCTION(onToggle) 
	#endif

	#ifndef GEODE_STATICS_onViewFriendRequest
		#define GEODE_STATICS_onViewFriendRequest
		GEODE_AS_STATIC_FUNCTION(onViewFriendRequest) 
	#endif

	#ifndef GEODE_STATICS_onViewProfile
		#define GEODE_STATICS_onViewProfile
		GEODE_AS_STATIC_FUNCTION(onViewProfile) 
	#endif

	#ifndef GEODE_STATICS_updateBGColor
		#define GEODE_STATICS_updateBGColor
		GEODE_AS_STATIC_FUNCTION(updateBGColor) 
	#endif

	#ifndef GEODE_STATICS_updateToggle
		#define GEODE_STATICS_updateToggle
		GEODE_AS_STATIC_FUNCTION(updateToggle) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_draw
		#define GEODE_CONCEPT_CHECK_draw
		GEODE_CONCEPT_FUNCTION_CHECK(draw) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadFromScore
		#define GEODE_CONCEPT_CHECK_loadFromScore
		GEODE_CONCEPT_FUNCTION_CHECK(loadFromScore) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_markAsRead
		#define GEODE_CONCEPT_CHECK_markAsRead
		GEODE_CONCEPT_FUNCTION_CHECK(markAsRead) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onToggle
		#define GEODE_CONCEPT_CHECK_onToggle
		GEODE_CONCEPT_FUNCTION_CHECK(onToggle) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onViewFriendRequest
		#define GEODE_CONCEPT_CHECK_onViewFriendRequest
		GEODE_CONCEPT_FUNCTION_CHECK(onViewFriendRequest) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onViewProfile
		#define GEODE_CONCEPT_CHECK_onViewProfile
		GEODE_CONCEPT_FUNCTION_CHECK(onViewProfile) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateBGColor
		#define GEODE_CONCEPT_CHECK_updateBGColor
		GEODE_CONCEPT_FUNCTION_CHECK(updateBGColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateToggle
		#define GEODE_CONCEPT_CHECK_updateToggle
		GEODE_CONCEPT_FUNCTION_CHECK(updateToggle) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GJRequestCell> : ModifyBase<ModifyDerive<Der, GJRequestCell>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJRequestCell>>;
		using ModifyBase<ModifyDerive<Der, GJRequestCell>>::ModifyBase;
		using Base = GJRequestCell;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_CONSTRUCTOR(base::get() + 0x1ecdbc, Default, GJRequestCell, char const*, float, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1eb694, Default, GJRequestCell, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1eb8a4, Default, GJRequestCell, draw, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1de434, Default, GJRequestCell, loadFromScore, GJUserScore*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1eb810, Default, GJRequestCell, markAsRead, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJRequestCell, onToggle, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJRequestCell, onViewFriendRequest, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJRequestCell, onViewProfile, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJRequestCell, updateBGColor, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1e259c, Default, GJRequestCell, updateToggle, )
		}
	};
}
