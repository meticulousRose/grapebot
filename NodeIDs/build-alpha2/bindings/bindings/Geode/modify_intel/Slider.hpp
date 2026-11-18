#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/Slider.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

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

	#ifndef GEODE_STATICS_disableSlider
		#define GEODE_STATICS_disableSlider
		GEODE_AS_STATIC_FUNCTION(disableSlider) 
	#endif

	#ifndef GEODE_STATICS_disableTouch
		#define GEODE_STATICS_disableTouch
		GEODE_AS_STATIC_FUNCTION(disableTouch) 
	#endif

	#ifndef GEODE_STATICS_enableSlider
		#define GEODE_STATICS_enableSlider
		GEODE_AS_STATIC_FUNCTION(enableSlider) 
	#endif

	#ifndef GEODE_STATICS_getLiveDragging
		#define GEODE_STATICS_getLiveDragging
		GEODE_AS_STATIC_FUNCTION(getLiveDragging) 
	#endif

	#ifndef GEODE_STATICS_getThumb
		#define GEODE_STATICS_getThumb
		GEODE_AS_STATIC_FUNCTION(getThumb) 
	#endif

	#ifndef GEODE_STATICS_getValue
		#define GEODE_STATICS_getValue
		GEODE_AS_STATIC_FUNCTION(getValue) 
	#endif

	#ifndef GEODE_STATICS_hideGroove
		#define GEODE_STATICS_hideGroove
		GEODE_AS_STATIC_FUNCTION(hideGroove) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_setBarVisibility
		#define GEODE_STATICS_setBarVisibility
		GEODE_AS_STATIC_FUNCTION(setBarVisibility) 
	#endif

	#ifndef GEODE_STATICS_setLiveDragging
		#define GEODE_STATICS_setLiveDragging
		GEODE_AS_STATIC_FUNCTION(setLiveDragging) 
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

	#ifndef GEODE_STATICS_setSnapStepCalc
		#define GEODE_STATICS_setSnapStepCalc
		GEODE_AS_STATIC_FUNCTION(setSnapStepCalc) 
	#endif

	#ifndef GEODE_STATICS_setValue
		#define GEODE_STATICS_setValue
		GEODE_AS_STATIC_FUNCTION(setValue) 
	#endif

	#ifndef GEODE_STATICS_sliderBegan
		#define GEODE_STATICS_sliderBegan
		GEODE_AS_STATIC_FUNCTION(sliderBegan) 
	#endif

	#ifndef GEODE_STATICS_sliderEnded
		#define GEODE_STATICS_sliderEnded
		GEODE_AS_STATIC_FUNCTION(sliderEnded) 
	#endif

	#ifndef GEODE_STATICS_updateBar
		#define GEODE_STATICS_updateBar
		GEODE_AS_STATIC_FUNCTION(updateBar) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
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

	#ifndef GEODE_CONCEPT_CHECK_disableSlider
		#define GEODE_CONCEPT_CHECK_disableSlider
		GEODE_CONCEPT_FUNCTION_CHECK(disableSlider) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_disableTouch
		#define GEODE_CONCEPT_CHECK_disableTouch
		GEODE_CONCEPT_FUNCTION_CHECK(disableTouch) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_enableSlider
		#define GEODE_CONCEPT_CHECK_enableSlider
		GEODE_CONCEPT_FUNCTION_CHECK(enableSlider) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getLiveDragging
		#define GEODE_CONCEPT_CHECK_getLiveDragging
		GEODE_CONCEPT_FUNCTION_CHECK(getLiveDragging) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getThumb
		#define GEODE_CONCEPT_CHECK_getThumb
		GEODE_CONCEPT_FUNCTION_CHECK(getThumb) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getValue
		#define GEODE_CONCEPT_CHECK_getValue
		GEODE_CONCEPT_FUNCTION_CHECK(getValue) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_hideGroove
		#define GEODE_CONCEPT_CHECK_hideGroove
		GEODE_CONCEPT_FUNCTION_CHECK(hideGroove) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setBarVisibility
		#define GEODE_CONCEPT_CHECK_setBarVisibility
		GEODE_CONCEPT_FUNCTION_CHECK(setBarVisibility) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setLiveDragging
		#define GEODE_CONCEPT_CHECK_setLiveDragging
		GEODE_CONCEPT_FUNCTION_CHECK(setLiveDragging) 
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

	#ifndef GEODE_CONCEPT_CHECK_setSnapStepCalc
		#define GEODE_CONCEPT_CHECK_setSnapStepCalc
		GEODE_CONCEPT_FUNCTION_CHECK(setSnapStepCalc) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setValue
		#define GEODE_CONCEPT_CHECK_setValue
		GEODE_CONCEPT_FUNCTION_CHECK(setValue) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_sliderBegan
		#define GEODE_CONCEPT_CHECK_sliderBegan
		GEODE_CONCEPT_FUNCTION_CHECK(sliderBegan) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_sliderEnded
		#define GEODE_CONCEPT_CHECK_sliderEnded
		GEODE_CONCEPT_FUNCTION_CHECK(sliderEnded) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateBar
		#define GEODE_CONCEPT_CHECK_updateBar
		GEODE_CONCEPT_FUNCTION_CHECK(updateBar) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, Slider> : ModifyBase<ModifyDerive<Der, Slider>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, Slider>>;
		using ModifyBase<ModifyDerive<Der, Slider>>::ModifyBase;
		using Base = Slider;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(base::get() + 0x78fa0, Default, Slider)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2ef3f0, Default, Slider, create, cocos2d::CCNode*, cocos2d::SEL_MenuHandler)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2ef510, Default, Slider, create, cocos2d::CCNode*, cocos2d::SEL_MenuHandler, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2ef630, Default, Slider, create, cocos2d::CCNode*, cocos2d::SEL_MenuHandler, char const*, char const*, char const*, char const*, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2efcd0, Default, Slider, ccTouchBegan, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2efd50, Default, Slider, ccTouchMoved, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2efd10, Default, Slider, ccTouchEnded, cocos2d::CCTouch*, cocos2d::CCEvent*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(Slider, disableSlider, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(Slider, disableTouch, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2efaa0, Default, Slider, enableSlider, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2efc90, Default, Slider, getLiveDragging, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2ef930, Default, Slider, getThumb, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2efb60, Default, Slider, getValue, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2efe30, Default, Slider, hideGroove, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2ef750, Default, Slider, init, cocos2d::CCNode*, cocos2d::SEL_MenuHandler, char const*, char const*, char const*, char const*, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2efc70, Default, Slider, setBarVisibility, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2efcb0, Default, Slider, setLiveDragging, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(Slider, setMaxOffset, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x7208b0, Default, Slider, setRotated, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(Slider, setSnap, float, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(Slider, setSnapStep, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(Slider, setSnapStepCalc, float, float, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2efa70, Default, Slider, setValue, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2eedf0, Default, Slider, sliderBegan, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2eef10, Default, Slider, sliderEnded, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2ef230, Default, Slider, updateBar, )
		}
	};
}
