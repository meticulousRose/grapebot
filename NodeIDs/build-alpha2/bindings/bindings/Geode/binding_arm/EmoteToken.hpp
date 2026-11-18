#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>


class EmoteToken {
public:
    static constexpr auto CLASS_NAME = "EmoteToken";
    size_t m_start;
    size_t m_end;
    EmoteDef const* m_def;
};
