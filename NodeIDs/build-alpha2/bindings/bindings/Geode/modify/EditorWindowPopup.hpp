#pragma once
#include <Geode/platform/platform.hpp>

#ifdef GEODE_IS_ARM_MAC
#include <Geode/modify_arm/EditorWindowPopup.hpp>
#else
#include <Geode/modify_intel/EditorWindowPopup.hpp>
#endif
