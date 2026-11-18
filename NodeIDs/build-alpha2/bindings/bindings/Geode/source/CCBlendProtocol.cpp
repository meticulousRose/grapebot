#pragma once
#include <Geode/platform/platform.hpp>

#ifdef GEODE_IS_ARM_MAC
#include <Geode/source_arm/CCBlendProtocol.cpp>
#else
#include <Geode/source_intel/CCBlendProtocol.cpp>
#endif
