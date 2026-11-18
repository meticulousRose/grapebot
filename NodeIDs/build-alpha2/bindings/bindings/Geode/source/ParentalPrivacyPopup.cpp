#pragma once
#include <Geode/platform/platform.hpp>

#ifdef GEODE_IS_ARM_MAC
#include <Geode/source_arm/ParentalPrivacyPopup.cpp>
#else
#include <Geode/source_intel/ParentalPrivacyPopup.cpp>
#endif
