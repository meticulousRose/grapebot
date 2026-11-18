#pragma once
#include <Geode/platform/platform.hpp>

#ifdef GEODE_IS_ARM_MAC
#include <Geode/source_arm/GJThreadMessage.cpp>
#else
#include <Geode/source_intel/GJThreadMessage.cpp>
#endif
