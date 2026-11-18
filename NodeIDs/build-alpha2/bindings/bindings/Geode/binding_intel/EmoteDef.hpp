#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/ccTypes.hpp>

class EmoteDef {
public:
    static constexpr auto CLASS_NAME = "EmoteDef";
    char const* m_name;
    unsigned int m_particleIndex;
    float m_scale;
    float m_x;
    float m_y;
    cocos2d::ccColor3B m_color;
    bool m_isAlias;
private:
    bool m_flipX;
public:
};
