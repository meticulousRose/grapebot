#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SliderThumb.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_getRawValue
		#define GEODE_STATICS_getRawValue
		GEODE_AS_STATIC_FUNCTION(getRawValue) 
	#endif

	#ifndef GEODE_STATICS_getValue
		#define GEODE_STATICS_getValue
		GEODE_AS_STATIC_FUNCTION(getValue) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_setMaxOffset
		#define GEODE_STATICS_setMaxOffset
		GEODE_AS_STATIC_FUNCTION(setMaxOffset) 
	#endif

	#ifndef GEODE_STATICS_setRotated
		#define GEODE_STATICS_setRotated
		GEODE_AS_STATIC_FUNCTION(setRotated) 
	#endif

	#ifndef GEODE_STATICS_setSnap
		#define GEODE_STATICS_setSnap
		GEODE_AS_STATIC_FUNCTION(setSnap) 
	#endif

	#ifndef GEODE_STATICS_setSnapStep
		#define GEODE_STATICS_setSnapStep
		GEODE_AS_STATIC_FUNCTION(setSnapStep) 
	#endif

	#ifndef GEODE_STATICS_setValue
		#define GEODE_STATICS_setValue
		GEODE_AS_STATIC_FUNCTION(setValue) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getRawValue
		#define GEODE_CONCEPT_CHECK_getRawValue
		GEODE_CONCEPT_FUNCTION_CHECK(getRawValue) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getValue
		#define GEODE_CONCEPT_CHECK_getValue
		GEODE_CONCEPT_FUNCTION_CHECK(getValue) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setMaxOffset
		#define GEODE_CONCEPT_CHECK_setMaxOffset
		GEODE_CONCEPT_FUNCTION_CHECK(setMaxOffset) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setRotated
		#define GEODE_CONCEPT_CHECK_setRotated
		GEODE_CONCEPT_FUNCTION_CHECK(setRotated) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setSnap
		#define GEODE_CONCEPT_CHECK_setSnap
		GEODE_CONCEPT_FUNCTION_CHECK(setSnap) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setSnapStep
		#define GEODE_CONCEPT_CHECK_setSnapStep
		GEODE_CONCEPT_FUNCTION_CHECK(setSnapStep) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setValue
		#define GEODE_CONCEPT_CHECK_setValue
		GEODE_CONCEPT_FUNCTION_CHECK(setValue) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SliderThumb> : ModifyBase<ModifyDerive<Der, SliderThumb>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SliderThumb>>;
		using ModifyBase<ModifyDerive<Der, SliderThumb>>::ModifyBase;
		using Base = SliderThumb;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x284268, Default, SliderThumb, create, cocos2d::CCNode*, cocos2d::SEL_MenuHandler, char const*, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2844c4, Default, SliderThumb, getRawValue, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2844c4, Default, SliderThumb, getValue, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x284370, Default, SliderThumb, init, cocos2d::CCNode*, cocos2d::SEL_MenuHandler, char const*, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2846c0, Default, SliderThumb, setMaxOffset, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xfed8, Default, SliderThumb, setRotated, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SliderThumb, setSnap, float, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SliderThumb, setSnapStep, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2845b0, Default, SliderThumb, setValue, float)
		}
	};
}
