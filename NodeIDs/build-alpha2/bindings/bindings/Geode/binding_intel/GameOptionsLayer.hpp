#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/GJOptionsLayer.hpp>

class GameOptionsLayer : public GJOptionsLayer {
public:
    static constexpr auto CLASS_NAME = "GameOptionsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GameOptionsLayer, GJOptionsLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     GameOptionsLayer();

    /**
     * @note[short] MacOS (ARM): 0x204464
     * @note[short] Android
     */
    static GameOptionsLayer* create(GJBaseGameLayer* baseGameLayer);

    /**
     * @note[short] MacOS (ARM): 0x2418f8
     * @note[short] MacOS (Intel): 0x29e380
     * @note[short] Android
     */
    virtual void setupOptions();

    /**
     * @note[short] MacOS (ARM): 0x24266c
     * @note[short] MacOS (Intel): 0x29f180
     * @note[short] Android
     */
    virtual void didToggle(int tag);

    /**
     * @note[short] Android
     */
    bool init(GJBaseGameLayer* baseGameLayer);

    /**
     * @note[short] MacOS (ARM): 0x241fa4
     * @note[short] MacOS (Intel): 0x29ea60
     * @note[short] Android
     */
    void onPracticeMusicSync(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onUIOptions(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onUIPOptions(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void showPracticeMusicSyncUnlockInfo();
    GJBaseGameLayer* m_baseGameLayer;
    int m_practiceDialogIndex;
};
