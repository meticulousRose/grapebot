#pragma once
#include <Geode/platform/platform.hpp>

#ifdef GEODE_IS_ARM_MAC
#include <Geode/modify_arm/ControllerInputNode.hpp>
#else
#include <Geode/modify_intel/ControllerInputNode.hpp>
#endif
