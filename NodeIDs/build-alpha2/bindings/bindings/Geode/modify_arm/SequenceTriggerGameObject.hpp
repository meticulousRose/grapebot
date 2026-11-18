#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SequenceTriggerGameObject.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_resetObject
		#define GEODE_STATICS_resetObject
		GEODE_AS_STATIC_FUNCTION(resetObject) 
	#endif

	#ifndef GEODE_STATICS_triggerObject
		#define GEODE_STATICS_triggerObject
		GEODE_AS_STATIC_FUNCTION(triggerObject) 
	#endif

	#ifndef GEODE_STATICS_customObjectSetup
		#define GEODE_STATICS_customObjectSetup
		GEODE_AS_STATIC_FUNCTION(customObjectSetup) 
	#endif

	#ifndef GEODE_STATICS_getSaveString
		#define GEODE_STATICS_getSaveString
		GEODE_AS_STATIC_FUNCTION(getSaveString) 
	#endif

	#ifndef GEODE_STATICS_addCount
		#define GEODE_STATICS_addCount
		GEODE_AS_STATIC_FUNCTION(addCount) 
	#endif

	#ifndef GEODE_STATICS_addTarget
		#define GEODE_STATICS_addTarget
		GEODE_AS_STATIC_FUNCTION(addTarget) 
	#endif

	#ifndef GEODE_STATICS_deleteTarget
		#define GEODE_STATICS_deleteTarget
		GEODE_AS_STATIC_FUNCTION(deleteTarget) 
	#endif

	#ifndef GEODE_STATICS_reorderTarget
		#define GEODE_STATICS_reorderTarget
		GEODE_AS_STATIC_FUNCTION(reorderTarget) 
	#endif

	#ifndef GEODE_STATICS_updateSequenceTotalCount
		#define GEODE_STATICS_updateSequenceTotalCount
		GEODE_AS_STATIC_FUNCTION(updateSequenceTotalCount) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetObject
		#define GEODE_CONCEPT_CHECK_resetObject
		GEODE_CONCEPT_FUNCTION_CHECK(resetObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_triggerObject
		#define GEODE_CONCEPT_CHECK_triggerObject
		GEODE_CONCEPT_FUNCTION_CHECK(triggerObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_customObjectSetup
		#define GEODE_CONCEPT_CHECK_customObjectSetup
		GEODE_CONCEPT_FUNCTION_CHECK(customObjectSetup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSaveString
		#define GEODE_CONCEPT_CHECK_getSaveString
		GEODE_CONCEPT_FUNCTION_CHECK(getSaveString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addCount
		#define GEODE_CONCEPT_CHECK_addCount
		GEODE_CONCEPT_FUNCTION_CHECK(addCount) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addTarget
		#define GEODE_CONCEPT_CHECK_addTarget
		GEODE_CONCEPT_FUNCTION_CHECK(addTarget) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_deleteTarget
		#define GEODE_CONCEPT_CHECK_deleteTarget
		GEODE_CONCEPT_FUNCTION_CHECK(deleteTarget) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_reorderTarget
		#define GEODE_CONCEPT_CHECK_reorderTarget
		GEODE_CONCEPT_FUNCTION_CHECK(reorderTarget) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateSequenceTotalCount
		#define GEODE_CONCEPT_CHECK_updateSequenceTotalCount
		GEODE_CONCEPT_FUNCTION_CHECK(updateSequenceTotalCount) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SequenceTriggerGameObject> : ModifyBase<ModifyDerive<Der, SequenceTriggerGameObject>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SequenceTriggerGameObject>>;
		using ModifyBase<ModifyDerive<Der, SequenceTriggerGameObject>>::ModifyBase;
		using Base = SequenceTriggerGameObject;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x16306c, Default, SequenceTriggerGameObject, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x163160, Default, SequenceTriggerGameObject, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1631b0, Default, SequenceTriggerGameObject, resetObject, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x16337c, Default, SequenceTriggerGameObject, triggerObject, GJBaseGameLayer*, int, std::vector<int> const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x163860, Default, SequenceTriggerGameObject, customObjectSetup, std::vector<std::string>&, std::vector<void*>&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x163d18, Default, SequenceTriggerGameObject, getSaveString, GJBaseGameLayer*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x164cc0, Default, SequenceTriggerGameObject, addCount, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x164abc, Default, SequenceTriggerGameObject, addTarget, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x164c44, Default, SequenceTriggerGameObject, deleteTarget, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x164bc8, Default, SequenceTriggerGameObject, reorderTarget, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x163248, Default, SequenceTriggerGameObject, updateSequenceTotalCount, )
		}
	};
}
