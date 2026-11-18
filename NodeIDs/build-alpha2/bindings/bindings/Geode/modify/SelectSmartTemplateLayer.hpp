#pragma once
#include <Geode/platform/platform.hpp>

#ifdef GEODE_IS_ARM_MAC
#include <Geode/modify_arm/SelectSmartTemplateLayer.hpp>
#else
#include <Geode/modify_intel/SelectSmartTemplateLayer.hpp>
#endif
