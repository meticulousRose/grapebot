#pragma once
#include <Geode/platform/platform.hpp>

#ifdef GEODE_IS_ARM_MAC
#include <Geode/binding_arm/MoveStepPopup.hpp>
#else
#include <Geode/binding_intel/MoveStepPopup.hpp>
#endif
