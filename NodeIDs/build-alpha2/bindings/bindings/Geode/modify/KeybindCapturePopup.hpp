#pragma once
#include <Geode/platform/platform.hpp>

#ifdef GEODE_IS_ARM_MAC
#include <Geode/modify_arm/KeybindCapturePopup.hpp>
#else
#include <Geode/modify_intel/KeybindCapturePopup.hpp>
#endif
