#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GameSettingsLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_onCustomButton
		#define GEODE_STATICS_onCustomButton
		GEODE_AS_STATIC_FUNCTION(onCustomButton) 
	#endif

	#ifndef GEODE_STATICS_valueDidChange
		#define GEODE_STATICS_valueDidChange
		GEODE_AS_STATIC_FUNCTION(valueDidChange) 
	#endif

	#ifndef GEODE_STATICS_getValue
		#define GEODE_STATICS_getValue
		GEODE_AS_STATIC_FUNCTION(getValue) 
	#endif

	#ifndef GEODE_STATICS_showTab
		#define GEODE_STATICS_showTab
		GEODE_AS_STATIC_FUNCTION(showTab) 
	#endif

	#ifndef GEODE_STATICS_dropDownLayerWillClose
		#define GEODE_STATICS_dropDownLayerWillClose
		GEODE_AS_STATIC_FUNCTION(dropDownLayerWillClose) 
	#endif

	#ifndef GEODE_STATICS_addGVToggle
		#define GEODE_STATICS_addGVToggle
		GEODE_AS_STATIC_FUNCTION(addGVToggle) 
	#endif

	#ifndef GEODE_STATICS_addSpecialContent
		#define GEODE_STATICS_addSpecialContent
		GEODE_AS_STATIC_FUNCTION(addSpecialContent) 
	#endif

	#ifndef GEODE_STATICS_addToggle
		#define GEODE_STATICS_addToggle
		GEODE_AS_STATIC_FUNCTION(addToggle) 
	#endif

	#ifndef GEODE_STATICS_buildTabContent
		#define GEODE_STATICS_buildTabContent
		GEODE_AS_STATIC_FUNCTION(buildTabContent) 
	#endif

	#ifndef GEODE_STATICS_didChangeGV
		#define GEODE_STATICS_didChangeGV
		GEODE_AS_STATIC_FUNCTION(didChangeGV) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_nextPosition
		#define GEODE_STATICS_nextPosition
		GEODE_AS_STATIC_FUNCTION(nextPosition) 
	#endif

	#ifndef GEODE_STATICS_onButtonRows
		#define GEODE_STATICS_onButtonRows
		GEODE_AS_STATIC_FUNCTION(onButtonRows) 
	#endif

	#ifndef GEODE_STATICS_onButtonsPerRow
		#define GEODE_STATICS_onButtonsPerRow
		GEODE_AS_STATIC_FUNCTION(onButtonsPerRow) 
	#endif

	#ifndef GEODE_STATICS_setupTabs
		#define GEODE_STATICS_setupTabs
		GEODE_AS_STATIC_FUNCTION(setupTabs) 
	#endif

	#ifndef GEODE_STATICS_showPracticeMusicSyncUnlockInfo
		#define GEODE_STATICS_showPracticeMusicSyncUnlockInfo
		GEODE_AS_STATIC_FUNCTION(showPracticeMusicSyncUnlockInfo) 
	#endif

	#ifndef GEODE_STATICS_toggleVisibility
		#define GEODE_STATICS_toggleVisibility
		GEODE_AS_STATIC_FUNCTION(toggleVisibility) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClose
		#define GEODE_CONCEPT_CHECK_onClose
		GEODE_CONCEPT_FUNCTION_CHECK(onClose) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onCustomButton
		#define GEODE_CONCEPT_CHECK_onCustomButton
		GEODE_CONCEPT_FUNCTION_CHECK(onCustomButton) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_valueDidChange
		#define GEODE_CONCEPT_CHECK_valueDidChange
		GEODE_CONCEPT_FUNCTION_CHECK(valueDidChange) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getValue
		#define GEODE_CONCEPT_CHECK_getValue
		GEODE_CONCEPT_FUNCTION_CHECK(getValue) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_showTab
		#define GEODE_CONCEPT_CHECK_showTab
		GEODE_CONCEPT_FUNCTION_CHECK(showTab) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_dropDownLayerWillClose
		#define GEODE_CONCEPT_CHECK_dropDownLayerWillClose
		GEODE_CONCEPT_FUNCTION_CHECK(dropDownLayerWillClose) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addGVToggle
		#define GEODE_CONCEPT_CHECK_addGVToggle
		GEODE_CONCEPT_FUNCTION_CHECK(addGVToggle) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addSpecialContent
		#define GEODE_CONCEPT_CHECK_addSpecialContent
		GEODE_CONCEPT_FUNCTION_CHECK(addSpecialContent) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addToggle
		#define GEODE_CONCEPT_CHECK_addToggle
		GEODE_CONCEPT_FUNCTION_CHECK(addToggle) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_buildTabContent
		#define GEODE_CONCEPT_CHECK_buildTabContent
		GEODE_CONCEPT_FUNCTION_CHECK(buildTabContent) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_didChangeGV
		#define GEODE_CONCEPT_CHECK_didChangeGV
		GEODE_CONCEPT_FUNCTION_CHECK(didChangeGV) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_nextPosition
		#define GEODE_CONCEPT_CHECK_nextPosition
		GEODE_CONCEPT_FUNCTION_CHECK(nextPosition) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onButtonRows
		#define GEODE_CONCEPT_CHECK_onButtonRows
		GEODE_CONCEPT_FUNCTION_CHECK(onButtonRows) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onButtonsPerRow
		#define GEODE_CONCEPT_CHECK_onButtonsPerRow
		GEODE_CONCEPT_FUNCTION_CHECK(onButtonsPerRow) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupTabs
		#define GEODE_CONCEPT_CHECK_setupTabs
		GEODE_CONCEPT_FUNCTION_CHECK(setupTabs) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_showPracticeMusicSyncUnlockInfo
		#define GEODE_CONCEPT_CHECK_showPracticeMusicSyncUnlockInfo
		GEODE_CONCEPT_FUNCTION_CHECK(showPracticeMusicSyncUnlockInfo) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleVisibility
		#define GEODE_CONCEPT_CHECK_toggleVisibility
		GEODE_CONCEPT_FUNCTION_CHECK(toggleVisibility) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GameSettingsLayer> : ModifyBase<ModifyDerive<Der, GameSettingsLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GameSettingsLayer>>;
		using ModifyBase<ModifyDerive<Der, GameSettingsLayer>>::ModifyBase;
		using Base = GameSettingsLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(base::get() + 0x5fdf30, Default, GameSettingsLayer)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5fe320, Default, GameSettingsLayer, create, GJBaseGameLayer*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x6034c0, Default, GameSettingsLayer, onClose, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x6032a0, Default, GameSettingsLayer, onCustomButton, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x6028f0, Default, GameSettingsLayer, valueDidChange, int, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x602710, Default, GameSettingsLayer, getValue, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x6035d0, Default, GameSettingsLayer, showTab, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x603440, Default, GameSettingsLayer, dropDownLayerWillClose, GJDropDownLayer*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x601840, Default, GameSettingsLayer, addGVToggle, char const*, char const*, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x6005e0, Default, GameSettingsLayer, addSpecialContent, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x6018b0, Default, GameSettingsLayer, addToggle, char const*, int, char const*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5fe890, Default, GameSettingsLayer, buildTabContent, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameSettingsLayer, didChangeGV, char const*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5fe4c0, Default, GameSettingsLayer, init, GJBaseGameLayer*, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameSettingsLayer, nextPosition, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameSettingsLayer, onButtonRows, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameSettingsLayer, onButtonsPerRow, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5fe5c0, Default, GameSettingsLayer, setupTabs, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameSettingsLayer, showPracticeMusicSyncUnlockInfo, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameSettingsLayer, toggleVisibility, bool)
		}
	};
}
