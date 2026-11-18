#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCLayer.hpp>

class MultiplayerLayer : public cocos2d::CCLayer {
public:
    static constexpr auto CLASS_NAME = "MultiplayerLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(MultiplayerLayer, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (Intel): 0x384970
     * @note[short] Android
     */
    static MultiplayerLayer* create();

    /**
     * @note[short] MacOS (ARM): 0x30fa84
     * @note[short] Android
     */
    static cocos2d::CCScene* scene();

    /**
     * @note[short] MacOS (ARM): 0x30fbe4
     * @note[short] MacOS (Intel): 0x384a20
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x30fcbc
     * @note[short] MacOS (Intel): 0x384b10
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x30fc78
     * @note[short] MacOS (Intel): 0x384ad0
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x30fbe8
     * @note[short] MacOS (Intel): 0x384a30
     * @note[short] Android
     */
    void onBtn1(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x30fc30
     * @note[short] MacOS (Intel): 0x384a80
     * @note[short] Android
     */
    void onBtn2(cocos2d::CCObject* sender);
};
