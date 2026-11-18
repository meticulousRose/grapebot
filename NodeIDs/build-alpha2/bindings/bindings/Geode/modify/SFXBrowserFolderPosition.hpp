#pragma once
#include <Geode/platform/platform.hpp>

#ifdef GEODE_IS_ARM_MAC
#include <Geode/modify_arm/SFXBrowserFolderPosition.hpp>
#else
#include <Geode/modify_intel/SFXBrowserFolderPosition.hpp>
#endif
