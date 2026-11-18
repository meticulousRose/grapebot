#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/vector.hpp>

class EditorSFXBinding {
public:
    static constexpr auto CLASS_NAME = "EditorSFXBinding";
    cocos2d::CCArray* m_sounds;
    int m_playMode;
    int m_nextIndex;
    std::string m_extras;
    std::vector<int> m_shuffleOrder;
    int m_shuffleCursor;
    int m_lastPlayedIndex;
    int m_shuffleOrderSize;
};
