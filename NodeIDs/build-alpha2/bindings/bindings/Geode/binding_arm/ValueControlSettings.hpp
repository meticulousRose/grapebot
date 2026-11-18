#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCPoint.hpp>

class ValueControlSettings {
public:
    static constexpr auto CLASS_NAME = "ValueControlSettings";
    int m_property;
    std::string m_label;
    cocos2d::CCPoint m_position;
    float m_scale;
    bool m_noSlider;
    InputValueType m_valueType;
    int m_maxDigits;
    bool m_arrows;
    float m_sliderMin;
    float m_sliderMax;
    int m_page;
    int m_group;
    GJInputStyle m_inputStyle;
    int m_decimalPlaces;
    bool m_allowDisable;
    bool m_vertical;
    float m_width;
    std::string m_font;
    float m_labelScale;
    std::string m_placeholderText;
};
