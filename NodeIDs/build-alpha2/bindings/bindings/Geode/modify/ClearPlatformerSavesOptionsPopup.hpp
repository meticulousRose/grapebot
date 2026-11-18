#pragma once
#include <Geode/platform/platform.hpp>

#ifdef GEODE_IS_ARM_MAC
#include <Geode/modify_arm/ClearPlatformerSavesOptionsPopup.hpp>
#else
#include <Geode/modify_intel/ClearPlatformerSavesOptionsPopup.hpp>
#endif
