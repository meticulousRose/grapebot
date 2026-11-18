#pragma once
#include <Geode/platform/platform.hpp>

#ifdef GEODE_IS_ARM_MAC
#include <Geode/modify_arm/SelectFontLayer2.hpp>
#else
#include <Geode/modify_intel/SelectFontLayer2.hpp>
#endif
