#pragma once
#include <Geode/platform/platform.hpp>

#ifdef GEODE_IS_ARM_MAC
#include <Geode/modify_arm/EditorBuildStats.hpp>
#else
#include <Geode/modify_intel/EditorBuildStats.hpp>
#endif
