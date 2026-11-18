#pragma once
#include <Geode/platform/platform.hpp>

#ifdef GEODE_IS_ARM_MAC
#include <Geode/binding_arm/SelectFontLayer2.hpp>
#else
#include <Geode/binding_intel/SelectFontLayer2.hpp>
#endif
