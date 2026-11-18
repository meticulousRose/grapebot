#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCLayer.hpp>

class SecretLayer6 : public cocos2d::CCLayer {
public:
    static constexpr auto CLASS_NAME = "SecretLayer6";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(SecretLayer6, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (Intel): 0x473420
     * @note[short] Android
     */
    static SecretLayer6* create();

    /**
     * @note[short] Android
     */
    static cocos2d::CCScene* scene();

    /**
     * @note[short] MacOS (ARM): 0x3de4c8
     * @note[short] MacOS (Intel): 0x4734d0
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x3df004
     * @note[short] MacOS (Intel): 0x474140
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x3de94c
     * @note[short] MacOS (Intel): 0x4739a0
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3de99c
     * @note[short] MacOS (Intel): 0x4739f0
     * @note[short] Android
     */
    void startGame01();
    SecretGame01Layer* m_gameLayer;
};
