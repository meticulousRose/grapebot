#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/TextArea.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_update
		#define GEODE_STATICS_update
		GEODE_AS_STATIC_FUNCTION(update) 
	#endif

	#ifndef GEODE_STATICS_draw
		#define GEODE_STATICS_draw
		GEODE_AS_STATIC_FUNCTION(draw) 
	#endif

	#ifndef GEODE_STATICS_setOpacity
		#define GEODE_STATICS_setOpacity
		GEODE_AS_STATIC_FUNCTION(setOpacity) 
	#endif

	#ifndef GEODE_STATICS_colorAllCharactersTo
		#define GEODE_STATICS_colorAllCharactersTo
		GEODE_AS_STATIC_FUNCTION(colorAllCharactersTo) 
	#endif

	#ifndef GEODE_STATICS_colorAllLabels
		#define GEODE_STATICS_colorAllLabels
		GEODE_AS_STATIC_FUNCTION(colorAllLabels) 
	#endif

	#ifndef GEODE_STATICS_fadeIn
		#define GEODE_STATICS_fadeIn
		GEODE_AS_STATIC_FUNCTION(fadeIn) 
	#endif

	#ifndef GEODE_STATICS_fadeInCharacters
		#define GEODE_STATICS_fadeInCharacters
		GEODE_AS_STATIC_FUNCTION(fadeInCharacters) 
	#endif

	#ifndef GEODE_STATICS_fadeOut
		#define GEODE_STATICS_fadeOut
		GEODE_AS_STATIC_FUNCTION(fadeOut) 
	#endif

	#ifndef GEODE_STATICS_fadeOutAndRemove
		#define GEODE_STATICS_fadeOutAndRemove
		GEODE_AS_STATIC_FUNCTION(fadeOutAndRemove) 
	#endif

	#ifndef GEODE_STATICS_finishFade
		#define GEODE_STATICS_finishFade
		GEODE_AS_STATIC_FUNCTION(finishFade) 
	#endif

	#ifndef GEODE_STATICS_fitString
		#define GEODE_STATICS_fitString
		GEODE_AS_STATIC_FUNCTION(fitString) 
	#endif

	#ifndef GEODE_STATICS_hideAll
		#define GEODE_STATICS_hideAll
		GEODE_AS_STATIC_FUNCTION(hideAll) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_setEmoteMaxAspect
		#define GEODE_STATICS_setEmoteMaxAspect
		GEODE_AS_STATIC_FUNCTION(setEmoteMaxAspect) 
	#endif

	#ifndef GEODE_STATICS_setIgnoreColorCode
		#define GEODE_STATICS_setIgnoreColorCode
		GEODE_AS_STATIC_FUNCTION(setIgnoreColorCode) 
	#endif

	#ifndef GEODE_STATICS_setParseEmotes
		#define GEODE_STATICS_setParseEmotes
		GEODE_AS_STATIC_FUNCTION(setParseEmotes) 
	#endif

	#ifndef GEODE_STATICS_setString
		#define GEODE_STATICS_setString
		GEODE_AS_STATIC_FUNCTION(setString) 
	#endif

	#ifndef GEODE_STATICS_showAll
		#define GEODE_STATICS_showAll
		GEODE_AS_STATIC_FUNCTION(showAll) 
	#endif

	#ifndef GEODE_STATICS_stopAllCharacterActions
		#define GEODE_STATICS_stopAllCharacterActions
		GEODE_AS_STATIC_FUNCTION(stopAllCharacterActions) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_update
		#define GEODE_CONCEPT_CHECK_update
		GEODE_CONCEPT_FUNCTION_CHECK(update) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_draw
		#define GEODE_CONCEPT_CHECK_draw
		GEODE_CONCEPT_FUNCTION_CHECK(draw) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setOpacity
		#define GEODE_CONCEPT_CHECK_setOpacity
		GEODE_CONCEPT_FUNCTION_CHECK(setOpacity) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_colorAllCharactersTo
		#define GEODE_CONCEPT_CHECK_colorAllCharactersTo
		GEODE_CONCEPT_FUNCTION_CHECK(colorAllCharactersTo) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_colorAllLabels
		#define GEODE_CONCEPT_CHECK_colorAllLabels
		GEODE_CONCEPT_FUNCTION_CHECK(colorAllLabels) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_fadeIn
		#define GEODE_CONCEPT_CHECK_fadeIn
		GEODE_CONCEPT_FUNCTION_CHECK(fadeIn) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_fadeInCharacters
		#define GEODE_CONCEPT_CHECK_fadeInCharacters
		GEODE_CONCEPT_FUNCTION_CHECK(fadeInCharacters) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_fadeOut
		#define GEODE_CONCEPT_CHECK_fadeOut
		GEODE_CONCEPT_FUNCTION_CHECK(fadeOut) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_fadeOutAndRemove
		#define GEODE_CONCEPT_CHECK_fadeOutAndRemove
		GEODE_CONCEPT_FUNCTION_CHECK(fadeOutAndRemove) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_finishFade
		#define GEODE_CONCEPT_CHECK_finishFade
		GEODE_CONCEPT_FUNCTION_CHECK(finishFade) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_fitString
		#define GEODE_CONCEPT_CHECK_fitString
		GEODE_CONCEPT_FUNCTION_CHECK(fitString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_hideAll
		#define GEODE_CONCEPT_CHECK_hideAll
		GEODE_CONCEPT_FUNCTION_CHECK(hideAll) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setEmoteMaxAspect
		#define GEODE_CONCEPT_CHECK_setEmoteMaxAspect
		GEODE_CONCEPT_FUNCTION_CHECK(setEmoteMaxAspect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setIgnoreColorCode
		#define GEODE_CONCEPT_CHECK_setIgnoreColorCode
		GEODE_CONCEPT_FUNCTION_CHECK(setIgnoreColorCode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setParseEmotes
		#define GEODE_CONCEPT_CHECK_setParseEmotes
		GEODE_CONCEPT_FUNCTION_CHECK(setParseEmotes) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setString
		#define GEODE_CONCEPT_CHECK_setString
		GEODE_CONCEPT_FUNCTION_CHECK(setString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_showAll
		#define GEODE_CONCEPT_CHECK_showAll
		GEODE_CONCEPT_FUNCTION_CHECK(showAll) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_stopAllCharacterActions
		#define GEODE_CONCEPT_CHECK_stopAllCharacterActions
		GEODE_CONCEPT_FUNCTION_CHECK(stopAllCharacterActions) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, TextArea> : ModifyBase<ModifyDerive<Der, TextArea>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, TextArea>>;
		using ModifyBase<ModifyDerive<Der, TextArea>>::ModifyBase;
		using Base = TextArea;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(base::get() + 0x29fbb8, Default, TextArea)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x29fc98, Default, TextArea, create, std::string, char const*, float, float, cocos2d::CCPoint, float, bool, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2a0c34, Default, TextArea, update, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2a0c30, Default, TextArea, draw, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2a0a8c, Default, TextArea, setOpacity, unsigned char)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2a0af8, Default, TextArea, colorAllCharactersTo, cocos2d::ccColor3B)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2a0bbc, Default, TextArea, colorAllLabels, cocos2d::ccColor3B)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2a07bc, Default, TextArea, fadeIn, float, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2a0d74, Default, TextArea, fadeInCharacters, float, float, bool, TextFadeInStyle)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2a098c, Default, TextArea, fadeOut, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2a091c, Default, TextArea, fadeOutAndRemove, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2a08f8, Default, TextArea, finishFade, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TextArea, fitString, std::string, float, float, float, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2a0244, Default, TextArea, hideAll, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TextArea, init, std::string, char const*, float, float, cocos2d::CCPoint, float, bool, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TextArea, setEmoteMaxAspect, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2a0220, Default, TextArea, setIgnoreColorCode, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TextArea, setParseEmotes, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x29ff64, Default, TextArea, setString, std::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2a06e0, Default, TextArea, showAll, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2a0620, Default, TextArea, stopAllCharacterActions, )
		}
	};
}
