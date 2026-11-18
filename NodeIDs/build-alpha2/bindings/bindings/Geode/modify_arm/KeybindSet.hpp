#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/KeybindSet.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_chordsForAction
		#define GEODE_STATICS_chordsForAction
		GEODE_AS_STATIC_FUNCTION(chordsForAction) 
	#endif

	#ifndef GEODE_STATICS_actionsForChord
		#define GEODE_STATICS_actionsForChord
		GEODE_AS_STATIC_FUNCTION(actionsForChord) 
	#endif

	#ifndef GEODE_STATICS_bindChord
		#define GEODE_STATICS_bindChord
		GEODE_AS_STATIC_FUNCTION(bindChord) 
	#endif

	#ifndef GEODE_STATICS_unbindChord
		#define GEODE_STATICS_unbindChord
		GEODE_AS_STATIC_FUNCTION(unbindChord) 
	#endif

	#ifndef GEODE_STATICS_clear
		#define GEODE_STATICS_clear
		GEODE_AS_STATIC_FUNCTION(clear) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_chordsForAction
		#define GEODE_CONCEPT_CHECK_chordsForAction
		GEODE_CONCEPT_FUNCTION_CHECK(chordsForAction) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_actionsForChord
		#define GEODE_CONCEPT_CHECK_actionsForChord
		GEODE_CONCEPT_FUNCTION_CHECK(actionsForChord) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_bindChord
		#define GEODE_CONCEPT_CHECK_bindChord
		GEODE_CONCEPT_FUNCTION_CHECK(bindChord) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_unbindChord
		#define GEODE_CONCEPT_CHECK_unbindChord
		GEODE_CONCEPT_FUNCTION_CHECK(unbindChord) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isLevelSet
		#define GEODE_CONCEPT_CHECK_isLevelSet
		GEODE_CONCEPT_FUNCTION_CHECK(isLevelSet) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_clear
		#define GEODE_CONCEPT_CHECK_clear
		GEODE_CONCEPT_FUNCTION_CHECK(clear) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, KeybindSet> : ModifyBase<ModifyDerive<Der, KeybindSet>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, KeybindSet>>;
		using ModifyBase<ModifyDerive<Der, KeybindSet>>::ModifyBase;
		using Base = KeybindSet;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x807ea8, Default, KeybindSet, chordsForAction, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x807f88, Default, KeybindSet, actionsForChord, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x80805c, Default, KeybindSet, bindChord, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x8081b0, Default, KeybindSet, unbindChord, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(KeybindSet, isLevelSet, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(KeybindSet, clear, )
		}
	};
}
