#pragma once
#include <Geode/platform/platform.hpp>

#ifdef GEODE_IS_ARM_MAC
#include <Geode/modify_arm/SFXSettingsPopup.hpp>
#else
#include <Geode/modify_intel/SFXSettingsPopup.hpp>
#endif
