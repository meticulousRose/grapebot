#pragma once
#include <Geode/platform/platform.hpp>

#ifdef GEODE_IS_ARM_MAC
#include <Geode/source_arm/GJThreadCell.cpp>
#else
#include <Geode/source_intel/GJThreadCell.cpp>
#endif
