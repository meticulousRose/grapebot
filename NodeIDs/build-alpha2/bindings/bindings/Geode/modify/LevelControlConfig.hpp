#pragma once
#include <Geode/platform/platform.hpp>

#ifdef GEODE_IS_ARM_MAC
#include <Geode/modify_arm/LevelControlConfig.hpp>
#else
#include <Geode/modify_intel/LevelControlConfig.hpp>
#endif
