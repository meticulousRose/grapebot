#pragma once
#include <Geode/platform/platform.hpp>

#ifdef GEODE_IS_ARM_MAC
#include <Geode/source_arm/EditorSoundDownloadDelegate.cpp>
#else
#include <Geode/source_intel/EditorSoundDownloadDelegate.cpp>
#endif
