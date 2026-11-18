#pragma once
#include <Geode/platform/platform.hpp>

#ifdef GEODE_IS_ARM_MAC
#include <Geode/modify_arm/SectionedContentNode.hpp>
#else
#include <Geode/modify_intel/SectionedContentNode.hpp>
#endif
