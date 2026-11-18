#pragma once
#include <Geode/platform/platform.hpp>

#ifdef GEODE_IS_ARM_MAC
#include <Geode/source_arm/SelectFontLayer2.cpp>
#else
#include <Geode/source_intel/SelectFontLayer2.cpp>
#endif
