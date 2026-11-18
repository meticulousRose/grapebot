#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/UploadActionPopup.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_closePopup
		#define GEODE_STATICS_closePopup
		GEODE_AS_STATIC_FUNCTION(closePopup) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_showFailMessage
		#define GEODE_STATICS_showFailMessage
		GEODE_AS_STATIC_FUNCTION(showFailMessage) 
	#endif

	#ifndef GEODE_STATICS_showFailMessageOrDismiss
		#define GEODE_STATICS_showFailMessageOrDismiss
		GEODE_AS_STATIC_FUNCTION(showFailMessageOrDismiss) 
	#endif

	#ifndef GEODE_STATICS_showSuccessMessage
		#define GEODE_STATICS_showSuccessMessage
		GEODE_AS_STATIC_FUNCTION(showSuccessMessage) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyBackClicked
		#define GEODE_CONCEPT_CHECK_keyBackClicked
		GEODE_CONCEPT_FUNCTION_CHECK(keyBackClicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_closePopup
		#define GEODE_CONCEPT_CHECK_closePopup
		GEODE_CONCEPT_FUNCTION_CHECK(closePopup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClose
		#define GEODE_CONCEPT_CHECK_onClose
		GEODE_CONCEPT_FUNCTION_CHECK(onClose) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_showFailMessage
		#define GEODE_CONCEPT_CHECK_showFailMessage
		GEODE_CONCEPT_FUNCTION_CHECK(showFailMessage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_showFailMessageOrDismiss
		#define GEODE_CONCEPT_CHECK_showFailMessageOrDismiss
		GEODE_CONCEPT_FUNCTION_CHECK(showFailMessageOrDismiss) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_showSuccessMessage
		#define GEODE_CONCEPT_CHECK_showSuccessMessage
		GEODE_CONCEPT_FUNCTION_CHECK(showSuccessMessage) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, UploadActionPopup> : ModifyBase<ModifyDerive<Der, UploadActionPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, UploadActionPopup>>;
		using ModifyBase<ModifyDerive<Der, UploadActionPopup>>::ModifyBase;
		using Base = UploadActionPopup;
        using Derived = Der;
		void apply() override {

            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(UploadActionPopup, create, UploadPopupDelegate*, std::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x290b20, Default, UploadActionPopup, keyBackClicked, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(UploadActionPopup, closePopup, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2902e0, Default, UploadActionPopup, init, UploadPopupDelegate*, std::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x290730, Default, UploadActionPopup, onClose, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2908f0, Default, UploadActionPopup, showFailMessage, std::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(UploadActionPopup, showFailMessageOrDismiss, std::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x290780, Default, UploadActionPopup, showSuccessMessage, std::string)
		}
	};
}
