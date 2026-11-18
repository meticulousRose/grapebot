#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/ColorAction.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_getCopy
		#define GEODE_STATICS_getCopy
		GEODE_AS_STATIC_FUNCTION(getCopy) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_isInUse
		#define GEODE_STATICS_isInUse
		GEODE_AS_STATIC_FUNCTION(isInUse) 
	#endif

	#ifndef GEODE_STATICS_loadFromState
		#define GEODE_STATICS_loadFromState
		GEODE_AS_STATIC_FUNCTION(loadFromState) 
	#endif

	#ifndef GEODE_STATICS_resetAction
		#define GEODE_STATICS_resetAction
		GEODE_AS_STATIC_FUNCTION(resetAction) 
	#endif

	#ifndef GEODE_STATICS_saveToState
		#define GEODE_STATICS_saveToState
		GEODE_AS_STATIC_FUNCTION(saveToState) 
	#endif

	#ifndef GEODE_STATICS_setupFromMap
		#define GEODE_STATICS_setupFromMap
		GEODE_AS_STATIC_FUNCTION(setupFromMap) 
	#endif

	#ifndef GEODE_STATICS_setupFromString
		#define GEODE_STATICS_setupFromString
		GEODE_AS_STATIC_FUNCTION(setupFromString) 
	#endif

	#ifndef GEODE_STATICS_step
		#define GEODE_STATICS_step
		GEODE_AS_STATIC_FUNCTION(step) 
	#endif

	#ifndef GEODE_STATICS_updateCustomColor
		#define GEODE_STATICS_updateCustomColor
		GEODE_AS_STATIC_FUNCTION(updateCustomColor) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getCopy
		#define GEODE_CONCEPT_CHECK_getCopy
		GEODE_CONCEPT_FUNCTION_CHECK(getCopy) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isInUse
		#define GEODE_CONCEPT_CHECK_isInUse
		GEODE_CONCEPT_FUNCTION_CHECK(isInUse) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadFromState
		#define GEODE_CONCEPT_CHECK_loadFromState
		GEODE_CONCEPT_FUNCTION_CHECK(loadFromState) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetAction
		#define GEODE_CONCEPT_CHECK_resetAction
		GEODE_CONCEPT_FUNCTION_CHECK(resetAction) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_saveToState
		#define GEODE_CONCEPT_CHECK_saveToState
		GEODE_CONCEPT_FUNCTION_CHECK(saveToState) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupFromMap
		#define GEODE_CONCEPT_CHECK_setupFromMap
		GEODE_CONCEPT_FUNCTION_CHECK(setupFromMap) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupFromString
		#define GEODE_CONCEPT_CHECK_setupFromString
		GEODE_CONCEPT_FUNCTION_CHECK(setupFromString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_step
		#define GEODE_CONCEPT_CHECK_step
		GEODE_CONCEPT_FUNCTION_CHECK(step) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateCustomColor
		#define GEODE_CONCEPT_CHECK_updateCustomColor
		GEODE_CONCEPT_FUNCTION_CHECK(updateCustomColor) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, ColorAction> : ModifyBase<ModifyDerive<Der, ColorAction>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, ColorAction>>;
		using ModifyBase<ModifyDerive<Der, ColorAction>>::ModifyBase;
		using Base = ColorAction;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x263a48, Default, ColorAction, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x263bf8, Default, ColorAction, create, cocos2d::ccColor3B, bool, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x263cc0, Default, ColorAction, create, cocos2d::ccColor3B, cocos2d::ccColor3B, float, double, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x263b08, Default, ColorAction, create, cocos2d::ccColor3B, cocos2d::ccColor3B, float, double, bool, int, float, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2667d8, Default, ColorAction, getCopy, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x263da0, Default, ColorAction, init, cocos2d::ccColor3B, cocos2d::ccColor3B, float, double, bool, int, float, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x263edc, Default, ColorAction, isInUse, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x264000, Default, ColorAction, loadFromState, CAState&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x263ed0, Default, ColorAction, resetAction, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x263f74, Default, ColorAction, saveToState, CAState&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x265e60, Default, ColorAction, setupFromMap, std::map<std::string, std::string>&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x265de4, Default, ColorAction, setupFromString, std::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x263dd0, Default, ColorAction, step, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x263f4c, Default, ColorAction, updateCustomColor, cocos2d::ccColor3B, cocos2d::ccColor3B)
		}
	};
}
