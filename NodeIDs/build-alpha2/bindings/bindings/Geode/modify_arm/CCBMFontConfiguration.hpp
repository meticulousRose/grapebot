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

	#ifndef GEODE_STATICS_description
		#define GEODE_STATICS_description
		GEODE_AS_STATIC_FUNCTION(description) 
	#endif

	#ifndef GEODE_STATICS_initWithFNTfile
		#define GEODE_STATICS_initWithFNTfile
		GEODE_AS_STATIC_FUNCTION(initWithFNTfile) 
	#endif

	#ifndef GEODE_STATICS_parseCharacterDefinition
		#define GEODE_STATICS_parseCharacterDefinition
		GEODE_AS_STATIC_FUNCTION(parseCharacterDefinition) 
	#endif

	#ifndef GEODE_STATICS_parseCommonArguments
		#define GEODE_STATICS_parseCommonArguments
		GEODE_AS_STATIC_FUNCTION(parseCommonArguments) 
	#endif

	#ifndef GEODE_STATICS_parseConfigFile
		#define GEODE_STATICS_parseConfigFile
		GEODE_AS_STATIC_FUNCTION(parseConfigFile) 
	#endif

	#ifndef GEODE_STATICS_parseImageFileName
		#define GEODE_STATICS_parseImageFileName
		GEODE_AS_STATIC_FUNCTION(parseImageFileName) 
	#endif

	#ifndef GEODE_STATICS_parseInfoArguments
		#define GEODE_STATICS_parseInfoArguments
		GEODE_AS_STATIC_FUNCTION(parseInfoArguments) 
	#endif

	#ifndef GEODE_STATICS_parseKerningEntry
		#define GEODE_STATICS_parseKerningEntry
		GEODE_AS_STATIC_FUNCTION(parseKerningEntry) 
	#endif

	#ifndef GEODE_STATICS_purgeFontDefDictionary
		#define GEODE_STATICS_purgeFontDefDictionary
		GEODE_AS_STATIC_FUNCTION(purgeFontDefDictionary) 
	#endif

	#ifndef GEODE_STATICS_purgeKerningDictionary
		#define GEODE_STATICS_purgeKerningDictionary
		GEODE_AS_STATIC_FUNCTION(purgeKerningDictionary) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_description
		#define GEODE_CONCEPT_CHECK_description
		GEODE_CONCEPT_FUNCTION_CHECK(description) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_initWithFNTfile
		#define GEODE_CONCEPT_CHECK_initWithFNTfile
		GEODE_CONCEPT_FUNCTION_CHECK(initWithFNTfile) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_parseCharacterDefinition
		#define GEODE_CONCEPT_CHECK_parseCharacterDefinition
		GEODE_CONCEPT_FUNCTION_CHECK(parseCharacterDefinition) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_parseCommonArguments
		#define GEODE_CONCEPT_CHECK_parseCommonArguments
		GEODE_CONCEPT_FUNCTION_CHECK(parseCommonArguments) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_parseConfigFile
		#define GEODE_CONCEPT_CHECK_parseConfigFile
		GEODE_CONCEPT_FUNCTION_CHECK(parseConfigFile) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_parseImageFileName
		#define GEODE_CONCEPT_CHECK_parseImageFileName
		GEODE_CONCEPT_FUNCTION_CHECK(parseImageFileName) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_parseInfoArguments
		#define GEODE_CONCEPT_CHECK_parseInfoArguments
		GEODE_CONCEPT_FUNCTION_CHECK(parseInfoArguments) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_parseKerningEntry
		#define GEODE_CONCEPT_CHECK_parseKerningEntry
		GEODE_CONCEPT_FUNCTION_CHECK(parseKerningEntry) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_purgeFontDefDictionary
		#define GEODE_CONCEPT_CHECK_purgeFontDefDictionary
		GEODE_CONCEPT_FUNCTION_CHECK(purgeFontDefDictionary) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_purgeKerningDictionary
		#define GEODE_CONCEPT_CHECK_purgeKerningDictionary
		GEODE_CONCEPT_FUNCTION_CHECK(purgeKerningDictionary) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCBMFontConfiguration> : ModifyBase<ModifyDerive<Der, cocos2d::CCBMFontConfiguration>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCBMFontConfiguration>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCBMFontConfiguration>>::ModifyBase;
		using Base = cocos2d::CCBMFontConfiguration;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_CONSTRUCTOR(base::get() + 0x5c241c, Default, cocos2d::CCBMFontConfiguration, )
			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(base::get() + 0x5c2454, Default, cocos2d::CCBMFontConfiguration)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5c1490, Default, cocos2d::CCBMFontConfiguration, create, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5c278c, Default, cocos2d::CCBMFontConfiguration, description, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5c15a8, Default, cocos2d::CCBMFontConfiguration, initWithFNTfile, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5c32cc, Default, cocos2d::CCBMFontConfiguration, parseCharacterDefinition, std::string, cocos2d::_BMFontDef*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5c29d0, Default, cocos2d::CCBMFontConfiguration, parseCommonArguments, std::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5c15dc, Default, cocos2d::CCBMFontConfiguration, parseConfigFile, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5c3054, Default, cocos2d::CCBMFontConfiguration, parseImageFileName, std::string, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5c27e8, Default, cocos2d::CCBMFontConfiguration, parseInfoArguments, std::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5c3fa8, Default, cocos2d::CCBMFontConfiguration, parseKerningEntry, std::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5c24f4, Default, cocos2d::CCBMFontConfiguration, purgeFontDefDictionary, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5c263c, Default, cocos2d::CCBMFontConfiguration, purgeKerningDictionary, )
		}
	};
}
