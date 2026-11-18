#pragma once
#include <Geode/platform/platform.hpp>

#ifdef GEODE_IS_ARM_MAC
#include <Geode/modify_arm/GJKeybindManager.hpp>
#else
#include <Geode/modify_intel/GJKeybindManager.hpp>
#endif
