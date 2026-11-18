#pragma once
#include <Geode/platform/platform.hpp>

#ifdef GEODE_IS_ARM_MAC
#include <Geode/binding_arm/DeathMarkerLayer.hpp>
#else
#include <Geode/binding_intel/DeathMarkerLayer.hpp>
#endif
