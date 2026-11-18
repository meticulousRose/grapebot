#pragma once
#include <Geode/platform/platform.hpp>

#ifdef GEODE_IS_ARM_MAC
#include <Geode/modify_arm/TabbedPopupLayer.hpp>
#else
#include <Geode/modify_intel/TabbedPopupLayer.hpp>
#endif
