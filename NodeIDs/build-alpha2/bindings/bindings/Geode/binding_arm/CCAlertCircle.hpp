#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCNode.hpp>

class CCAlertCircle : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "CCAlertCircle";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(CCAlertCircle, cocos2d::CCNode)

    /**
     * @note[short] MacOS (ARM): 0x1242cc
     * @note[short] MacOS (Intel): 0x1582f0
     * @note[short] Android
     */
    static CCAlertCircle* create();

    /**
     * @note[short] MacOS (ARM): 0x1243b0
     * @note[short] MacOS (Intel): 0x1583d0
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x12445c
     * @note[short] MacOS (Intel): 0x158460
     * @note[short] Android
     */
    virtual void draw();
    CCCircleAlert* m_circleAlert;
};
