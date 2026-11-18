#pragma once
#include <Geode/platform/platform.hpp>

#ifdef GEODE_IS_ARM_MAC
#include <Geode/binding_arm/LevelBadgePopup.hpp>
#else
#include <Geode/binding_intel/LevelBadgePopup.hpp>
#endif
