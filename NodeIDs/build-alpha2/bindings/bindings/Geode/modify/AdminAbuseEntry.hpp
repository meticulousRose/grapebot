#pragma once
#include <Geode/platform/platform.hpp>

#ifdef GEODE_IS_ARM_MAC
#include <Geode/modify_arm/AdminAbuseEntry.hpp>
#else
#include <Geode/modify_intel/AdminAbuseEntry.hpp>
#endif
