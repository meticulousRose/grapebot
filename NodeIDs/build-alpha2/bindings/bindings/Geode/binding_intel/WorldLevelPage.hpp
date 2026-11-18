#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>

class WorldLevelPage : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "WorldLevelPage";
    GEODE_CUSTOM_CONSTRUCTOR_GD(WorldLevelPage, FLAlertLayer)

    /**
     * @note[short] Android
     */
    static WorldLevelPage* create(GJGameLevel* level, GJWorldNode* node);

    /**
     * @note[short] MacOS (ARM): 0x33719c
     * @note[short] MacOS (Intel): 0x3b0060
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x337050
     * @note[short] MacOS (Intel): 0x3aff20
     * @note[short] Android
     */
    virtual void show();

    /**
     * @note[short] MacOS (ARM): 0x335d84
     * @note[short] MacOS (Intel): 0x3aec20
     * @note[short] Android
     */
    bool init(GJGameLevel* level, GJWorldNode* node);

    /**
     * @note[short] MacOS (ARM): 0x336d50
     * @note[short] MacOS (Intel): 0x293e30
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x336dc8
     * @note[short] MacOS (Intel): 0x3afc70
     * @note[short] Android
     */
    void onInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x336d8c
     * @note[short] MacOS (Intel): 0x3afc20
     * @note[short] Android
     */
    void onPlay(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x336d9c
     * @note[short] MacOS (Intel): 0x3afc40
     * @note[short] Android
     */
    void onSong(cocos2d::CCObject* sender);
    GJWorldNode* m_worldNode;
    GJGameLevel* m_level;
};
