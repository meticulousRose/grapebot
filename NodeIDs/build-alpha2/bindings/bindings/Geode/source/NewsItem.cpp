#pragma once
#include <Geode/platform/platform.hpp>

#ifdef GEODE_IS_ARM_MAC
#include <Geode/source_arm/NewsItem.cpp>
#else
#include <Geode/source_intel/NewsItem.cpp>
#endif
