#pragma once
#include <Geode/platform/platform.hpp>

#ifdef GEODE_IS_ARM_MAC
#include <Geode/modify_arm/TraceDrawObject.hpp>
#else
#include <Geode/modify_intel/TraceDrawObject.hpp>
#endif
