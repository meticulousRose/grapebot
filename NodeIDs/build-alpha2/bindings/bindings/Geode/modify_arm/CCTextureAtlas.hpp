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

	#ifndef GEODE_STATICS_createWithTexture
		#define GEODE_STATICS_createWithTexture
		GEODE_AS_STATIC_FUNCTION(createWithTexture) 
	#endif

	#ifndef GEODE_STATICS_getTotalQuads
		#define GEODE_STATICS_getTotalQuads
		GEODE_AS_STATIC_FUNCTION(getTotalQuads) 
	#endif

	#ifndef GEODE_STATICS_getCapacity
		#define GEODE_STATICS_getCapacity
		GEODE_AS_STATIC_FUNCTION(getCapacity) 
	#endif

	#ifndef GEODE_STATICS_getTexture
		#define GEODE_STATICS_getTexture
		GEODE_AS_STATIC_FUNCTION(getTexture) 
	#endif

	#ifndef GEODE_STATICS_setTexture
		#define GEODE_STATICS_setTexture
		GEODE_AS_STATIC_FUNCTION(setTexture) 
	#endif

	#ifndef GEODE_STATICS_getQuads
		#define GEODE_STATICS_getQuads
		GEODE_AS_STATIC_FUNCTION(getQuads) 
	#endif

	#ifndef GEODE_STATICS_setQuads
		#define GEODE_STATICS_setQuads
		GEODE_AS_STATIC_FUNCTION(setQuads) 
	#endif

	#ifndef GEODE_STATICS_description
		#define GEODE_STATICS_description
		GEODE_AS_STATIC_FUNCTION(description) 
	#endif

	#ifndef GEODE_STATICS_drawNumberOfQuads
		#define GEODE_STATICS_drawNumberOfQuads
		GEODE_AS_STATIC_FUNCTION(drawNumberOfQuads) 
	#endif

	#ifndef GEODE_STATICS_drawQuads
		#define GEODE_STATICS_drawQuads
		GEODE_AS_STATIC_FUNCTION(drawQuads) 
	#endif

	#ifndef GEODE_STATICS_fillWithEmptyQuadsFromIndex
		#define GEODE_STATICS_fillWithEmptyQuadsFromIndex
		GEODE_AS_STATIC_FUNCTION(fillWithEmptyQuadsFromIndex) 
	#endif

	#ifndef GEODE_STATICS_increaseTotalQuadsWith
		#define GEODE_STATICS_increaseTotalQuadsWith
		GEODE_AS_STATIC_FUNCTION(increaseTotalQuadsWith) 
	#endif

	#ifndef GEODE_STATICS_initWithFile
		#define GEODE_STATICS_initWithFile
		GEODE_AS_STATIC_FUNCTION(initWithFile) 
	#endif

	#ifndef GEODE_STATICS_initWithTexture
		#define GEODE_STATICS_initWithTexture
		GEODE_AS_STATIC_FUNCTION(initWithTexture) 
	#endif

	#ifndef GEODE_STATICS_insertQuad
		#define GEODE_STATICS_insertQuad
		GEODE_AS_STATIC_FUNCTION(insertQuad) 
	#endif

	#ifndef GEODE_STATICS_insertQuadFromIndex
		#define GEODE_STATICS_insertQuadFromIndex
		GEODE_AS_STATIC_FUNCTION(insertQuadFromIndex) 
	#endif

	#ifndef GEODE_STATICS_insertQuads
		#define GEODE_STATICS_insertQuads
		GEODE_AS_STATIC_FUNCTION(insertQuads) 
	#endif

	#ifndef GEODE_STATICS_listenBackToForeground
		#define GEODE_STATICS_listenBackToForeground
		GEODE_AS_STATIC_FUNCTION(listenBackToForeground) 
	#endif

	#ifndef GEODE_STATICS_mapBuffers
		#define GEODE_STATICS_mapBuffers
		GEODE_AS_STATIC_FUNCTION(mapBuffers) 
	#endif

	#ifndef GEODE_STATICS_moveQuadsFromIndex
		#define GEODE_STATICS_moveQuadsFromIndex
		GEODE_AS_STATIC_FUNCTION(moveQuadsFromIndex) 
	#endif

	#ifndef GEODE_STATICS_removeAllQuads
		#define GEODE_STATICS_removeAllQuads
		GEODE_AS_STATIC_FUNCTION(removeAllQuads) 
	#endif

	#ifndef GEODE_STATICS_removeQuadAtIndex
		#define GEODE_STATICS_removeQuadAtIndex
		GEODE_AS_STATIC_FUNCTION(removeQuadAtIndex) 
	#endif

	#ifndef GEODE_STATICS_removeQuadsAtIndex
		#define GEODE_STATICS_removeQuadsAtIndex
		GEODE_AS_STATIC_FUNCTION(removeQuadsAtIndex) 
	#endif

	#ifndef GEODE_STATICS_resizeCapacity
		#define GEODE_STATICS_resizeCapacity
		GEODE_AS_STATIC_FUNCTION(resizeCapacity) 
	#endif

	#ifndef GEODE_STATICS_setupIndices
		#define GEODE_STATICS_setupIndices
		GEODE_AS_STATIC_FUNCTION(setupIndices) 
	#endif

	#ifndef GEODE_STATICS_setupVBOandVAO
		#define GEODE_STATICS_setupVBOandVAO
		GEODE_AS_STATIC_FUNCTION(setupVBOandVAO) 
	#endif

	#ifndef GEODE_STATICS_updateQuad
		#define GEODE_STATICS_updateQuad
		GEODE_AS_STATIC_FUNCTION(updateQuad) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createWithTexture
		#define GEODE_CONCEPT_CHECK_createWithTexture
		GEODE_CONCEPT_FUNCTION_CHECK(createWithTexture) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getTotalQuads
		#define GEODE_CONCEPT_CHECK_getTotalQuads
		GEODE_CONCEPT_FUNCTION_CHECK(getTotalQuads) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getCapacity
		#define GEODE_CONCEPT_CHECK_getCapacity
		GEODE_CONCEPT_FUNCTION_CHECK(getCapacity) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getTexture
		#define GEODE_CONCEPT_CHECK_getTexture
		GEODE_CONCEPT_FUNCTION_CHECK(getTexture) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setTexture
		#define GEODE_CONCEPT_CHECK_setTexture
		GEODE_CONCEPT_FUNCTION_CHECK(setTexture) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getQuads
		#define GEODE_CONCEPT_CHECK_getQuads
		GEODE_CONCEPT_FUNCTION_CHECK(getQuads) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setQuads
		#define GEODE_CONCEPT_CHECK_setQuads
		GEODE_CONCEPT_FUNCTION_CHECK(setQuads) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_description
		#define GEODE_CONCEPT_CHECK_description
		GEODE_CONCEPT_FUNCTION_CHECK(description) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_drawNumberOfQuads
		#define GEODE_CONCEPT_CHECK_drawNumberOfQuads
		GEODE_CONCEPT_FUNCTION_CHECK(drawNumberOfQuads) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_drawQuads
		#define GEODE_CONCEPT_CHECK_drawQuads
		GEODE_CONCEPT_FUNCTION_CHECK(drawQuads) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_fillWithEmptyQuadsFromIndex
		#define GEODE_CONCEPT_CHECK_fillWithEmptyQuadsFromIndex
		GEODE_CONCEPT_FUNCTION_CHECK(fillWithEmptyQuadsFromIndex) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_increaseTotalQuadsWith
		#define GEODE_CONCEPT_CHECK_increaseTotalQuadsWith
		GEODE_CONCEPT_FUNCTION_CHECK(increaseTotalQuadsWith) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_initWithFile
		#define GEODE_CONCEPT_CHECK_initWithFile
		GEODE_CONCEPT_FUNCTION_CHECK(initWithFile) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_initWithTexture
		#define GEODE_CONCEPT_CHECK_initWithTexture
		GEODE_CONCEPT_FUNCTION_CHECK(initWithTexture) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_insertQuad
		#define GEODE_CONCEPT_CHECK_insertQuad
		GEODE_CONCEPT_FUNCTION_CHECK(insertQuad) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_insertQuadFromIndex
		#define GEODE_CONCEPT_CHECK_insertQuadFromIndex
		GEODE_CONCEPT_FUNCTION_CHECK(insertQuadFromIndex) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_insertQuads
		#define GEODE_CONCEPT_CHECK_insertQuads
		GEODE_CONCEPT_FUNCTION_CHECK(insertQuads) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_listenBackToForeground
		#define GEODE_CONCEPT_CHECK_listenBackToForeground
		GEODE_CONCEPT_FUNCTION_CHECK(listenBackToForeground) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_mapBuffers
		#define GEODE_CONCEPT_CHECK_mapBuffers
		GEODE_CONCEPT_FUNCTION_CHECK(mapBuffers) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_moveQuadsFromIndex
		#define GEODE_CONCEPT_CHECK_moveQuadsFromIndex
		GEODE_CONCEPT_FUNCTION_CHECK(moveQuadsFromIndex) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeAllQuads
		#define GEODE_CONCEPT_CHECK_removeAllQuads
		GEODE_CONCEPT_FUNCTION_CHECK(removeAllQuads) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeQuadAtIndex
		#define GEODE_CONCEPT_CHECK_removeQuadAtIndex
		GEODE_CONCEPT_FUNCTION_CHECK(removeQuadAtIndex) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeQuadsAtIndex
		#define GEODE_CONCEPT_CHECK_removeQuadsAtIndex
		GEODE_CONCEPT_FUNCTION_CHECK(removeQuadsAtIndex) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resizeCapacity
		#define GEODE_CONCEPT_CHECK_resizeCapacity
		GEODE_CONCEPT_FUNCTION_CHECK(resizeCapacity) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupIndices
		#define GEODE_CONCEPT_CHECK_setupIndices
		GEODE_CONCEPT_FUNCTION_CHECK(setupIndices) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupVBO
		#define GEODE_CONCEPT_CHECK_setupVBO
		GEODE_CONCEPT_FUNCTION_CHECK(setupVBO) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupVBOandVAO
		#define GEODE_CONCEPT_CHECK_setupVBOandVAO
		GEODE_CONCEPT_FUNCTION_CHECK(setupVBOandVAO) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateQuad
		#define GEODE_CONCEPT_CHECK_updateQuad
		GEODE_CONCEPT_FUNCTION_CHECK(updateQuad) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCTextureAtlas> : ModifyBase<ModifyDerive<Der, cocos2d::CCTextureAtlas>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCTextureAtlas>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCTextureAtlas>>::ModifyBase;
		using Base = cocos2d::CCTextureAtlas;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_CONSTRUCTOR(base::get() + 0x40cffc, Default, cocos2d::CCTextureAtlas, )
			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(base::get() + 0x40d02c, Default, cocos2d::CCTextureAtlas)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x40d12c, Default, cocos2d::CCTextureAtlas, create, char const*, unsigned int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x40d24c, Default, cocos2d::CCTextureAtlas, createWithTexture, cocos2d::CCTexture2D*, unsigned int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x40d0c0, Default, cocos2d::CCTextureAtlas, getTotalQuads, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x40d0c8, Default, cocos2d::CCTextureAtlas, getCapacity, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x40d0d0, Default, cocos2d::CCTextureAtlas, getTexture, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x40d0d8, Default, cocos2d::CCTextureAtlas, setTexture, cocos2d::CCTexture2D*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x40d114, Default, cocos2d::CCTextureAtlas, getQuads, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x40d124, Default, cocos2d::CCTextureAtlas, setQuads, cocos2d::ccV3F_C4B_T2F_Quad*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x40d62c, Default, cocos2d::CCTextureAtlas, description, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x40de8c, Default, cocos2d::CCTextureAtlas, drawNumberOfQuads, unsigned int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x40dda4, Default, cocos2d::CCTextureAtlas, drawNumberOfQuads, unsigned int, unsigned int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x40dd98, Default, cocos2d::CCTextureAtlas, drawQuads, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x40dd54, Default, cocos2d::CCTextureAtlas, fillWithEmptyQuadsFromIndex, unsigned int, unsigned int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x40dc38, Default, cocos2d::CCTextureAtlas, increaseTotalQuadsWith, unsigned int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x40d1f0, Default, cocos2d::CCTextureAtlas, initWithFile, char const*, unsigned int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x40d2fc, Default, cocos2d::CCTextureAtlas, initWithTexture, cocos2d::CCTexture2D*, unsigned int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x40d724, Default, cocos2d::CCTextureAtlas, insertQuad, cocos2d::ccV3F_C4B_T2F_Quad*, unsigned int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x40d88c, Default, cocos2d::CCTextureAtlas, insertQuadFromIndex, unsigned int, unsigned int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x40d7c4, Default, cocos2d::CCTextureAtlas, insertQuads, cocos2d::ccV3F_C4B_T2F_Quad*, unsigned int, unsigned int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x40d604, Default, cocos2d::CCTextureAtlas, listenBackToForeground, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x40d658, Default, cocos2d::CCTextureAtlas, mapBuffers, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x40dd34, Default, cocos2d::CCTextureAtlas, moveQuadsFromIndex, unsigned int, unsigned int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x40dc58, Default, cocos2d::CCTextureAtlas, moveQuadsFromIndex, unsigned int, unsigned int, unsigned int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x40d9e0, Default, cocos2d::CCTextureAtlas, removeAllQuads, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x40d930, Default, cocos2d::CCTextureAtlas, removeQuadAtIndex, unsigned int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x40d98c, Default, cocos2d::CCTextureAtlas, removeQuadsAtIndex, unsigned int, unsigned int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x40d9e8, Default, cocos2d::CCTextureAtlas, resizeCapacity, unsigned int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x40d480, Default, cocos2d::CCTextureAtlas, setupIndices, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x40d4f0, Default, cocos2d::CCTextureAtlas, setupVBOandVAO, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x40d6e0, Default, cocos2d::CCTextureAtlas, updateQuad, cocos2d::ccV3F_C4B_T2F_Quad*, unsigned int)
		}
	};
}
