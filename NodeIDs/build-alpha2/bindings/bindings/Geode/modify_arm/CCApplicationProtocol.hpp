#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <cocos2d.h>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_applicationDidFinishLaunching
		#define GEODE_STATICS_applicationDidFinishLaunching
		GEODE_AS_STATIC_FUNCTION(applicationDidFinishLaunching) 
	#endif

	#ifndef GEODE_STATICS_applicationDidEnterBackground
		#define GEODE_STATICS_applicationDidEnterBackground
		GEODE_AS_STATIC_FUNCTION(applicationDidEnterBackground) 
	#endif

	#ifndef GEODE_STATICS_applicationWillEnterForeground
		#define GEODE_STATICS_applicationWillEnterForeground
		GEODE_AS_STATIC_FUNCTION(applicationWillEnterForeground) 
	#endif

	#ifndef GEODE_STATICS_applicationWillBecomeActive
		#define GEODE_STATICS_applicationWillBecomeActive
		GEODE_AS_STATIC_FUNCTION(applicationWillBecomeActive) 
	#endif

	#ifndef GEODE_STATICS_applicationWillResignActive
		#define GEODE_STATICS_applicationWillResignActive
		GEODE_AS_STATIC_FUNCTION(applicationWillResignActive) 
	#endif

	#ifndef GEODE_STATICS_applicationWillTerminate
		#define GEODE_STATICS_applicationWillTerminate
		GEODE_AS_STATIC_FUNCTION(applicationWillTerminate) 
	#endif

	#ifndef GEODE_STATICS_trySaveGame
		#define GEODE_STATICS_trySaveGame
		GEODE_AS_STATIC_FUNCTION(trySaveGame) 
	#endif

	#ifndef GEODE_STATICS_gameDidSave
		#define GEODE_STATICS_gameDidSave
		GEODE_AS_STATIC_FUNCTION(gameDidSave) 
	#endif

	#ifndef GEODE_STATICS_setAnimationInterval
		#define GEODE_STATICS_setAnimationInterval
		GEODE_AS_STATIC_FUNCTION(setAnimationInterval) 
	#endif

	#ifndef GEODE_STATICS_getCurrentLanguage
		#define GEODE_STATICS_getCurrentLanguage
		GEODE_AS_STATIC_FUNCTION(getCurrentLanguage) 
	#endif

	#ifndef GEODE_STATICS_getTargetPlatform
		#define GEODE_STATICS_getTargetPlatform
		GEODE_AS_STATIC_FUNCTION(getTargetPlatform) 
	#endif

	#ifndef GEODE_STATICS_openURL
		#define GEODE_STATICS_openURL
		GEODE_AS_STATIC_FUNCTION(openURL) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_applicationDidFinishLaunching
		#define GEODE_CONCEPT_CHECK_applicationDidFinishLaunching
		GEODE_CONCEPT_FUNCTION_CHECK(applicationDidFinishLaunching) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_applicationDidEnterBackground
		#define GEODE_CONCEPT_CHECK_applicationDidEnterBackground
		GEODE_CONCEPT_FUNCTION_CHECK(applicationDidEnterBackground) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_applicationWillEnterForeground
		#define GEODE_CONCEPT_CHECK_applicationWillEnterForeground
		GEODE_CONCEPT_FUNCTION_CHECK(applicationWillEnterForeground) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_applicationWillBecomeActive
		#define GEODE_CONCEPT_CHECK_applicationWillBecomeActive
		GEODE_CONCEPT_FUNCTION_CHECK(applicationWillBecomeActive) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_applicationWillResignActive
		#define GEODE_CONCEPT_CHECK_applicationWillResignActive
		GEODE_CONCEPT_FUNCTION_CHECK(applicationWillResignActive) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_applicationWillTerminate
		#define GEODE_CONCEPT_CHECK_applicationWillTerminate
		GEODE_CONCEPT_FUNCTION_CHECK(applicationWillTerminate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_trySaveGame
		#define GEODE_CONCEPT_CHECK_trySaveGame
		GEODE_CONCEPT_FUNCTION_CHECK(trySaveGame) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_gameDidSave
		#define GEODE_CONCEPT_CHECK_gameDidSave
		GEODE_CONCEPT_FUNCTION_CHECK(gameDidSave) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setAnimationInterval
		#define GEODE_CONCEPT_CHECK_setAnimationInterval
		GEODE_CONCEPT_FUNCTION_CHECK(setAnimationInterval) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getCurrentLanguage
		#define GEODE_CONCEPT_CHECK_getCurrentLanguage
		GEODE_CONCEPT_FUNCTION_CHECK(getCurrentLanguage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getTargetPlatform
		#define GEODE_CONCEPT_CHECK_getTargetPlatform
		GEODE_CONCEPT_FUNCTION_CHECK(getTargetPlatform) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_openURL
		#define GEODE_CONCEPT_CHECK_openURL
		GEODE_CONCEPT_FUNCTION_CHECK(openURL) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCApplicationProtocol> : ModifyBase<ModifyDerive<Der, cocos2d::CCApplicationProtocol>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCApplicationProtocol>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCApplicationProtocol>>::ModifyBase;
		using Base = cocos2d::CCApplicationProtocol;
        using Derived = Der;
		void apply() override {

            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(cocos2d::CCApplicationProtocol, applicationDidFinishLaunching, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(cocos2d::CCApplicationProtocol, applicationDidEnterBackground, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(cocos2d::CCApplicationProtocol, applicationWillEnterForeground, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(cocos2d::CCApplicationProtocol, applicationWillBecomeActive, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(cocos2d::CCApplicationProtocol, applicationWillResignActive, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(cocos2d::CCApplicationProtocol, applicationWillTerminate, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(cocos2d::CCApplicationProtocol, trySaveGame, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(cocos2d::CCApplicationProtocol, gameDidSave, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(cocos2d::CCApplicationProtocol, setAnimationInterval, double)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(cocos2d::CCApplicationProtocol, getCurrentLanguage, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(cocos2d::CCApplicationProtocol, getTargetPlatform, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(cocos2d::CCApplicationProtocol, openURL, const char*)
		}
	};
}
