#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SFXBrowserFolderPosition.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    

	template<class Der>
	struct ModifyDerive<Der, SFXBrowserFolderPosition> : ModifyBase<ModifyDerive<Der, SFXBrowserFolderPosition>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SFXBrowserFolderPosition>>;
		using ModifyBase<ModifyDerive<Der, SFXBrowserFolderPosition>>::ModifyBase;
		using Base = SFXBrowserFolderPosition;
        using Derived = Der;
		void apply() override {

		}
	};
}
