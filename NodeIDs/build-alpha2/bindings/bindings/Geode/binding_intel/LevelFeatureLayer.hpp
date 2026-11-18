#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>

class LevelFeatureLayer : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "LevelFeatureLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(LevelFeatureLayer, FLAlertLayer)

    /**
     * @note[short] Android
     */
    static LevelFeatureLayer* create(int levelID);

    /**
     * @note[short] MacOS (ARM): 0x460020
     * @note[short] MacOS (Intel): 0x504550
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x45f57c
     * @note[short] MacOS (Intel): 0x503a70
     * @note[short] Android
     */
    bool init(int levelID);

    /**
     * @note[short] MacOS (ARM): 0x45fce0
     * @note[short] MacOS (Intel): 0x504220
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x45fdd0
     * @note[short] MacOS (Intel): 0x504300
     * @note[short] Android
     */
    void onDown(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x45fe7c
     * @note[short] MacOS (Intel): 0x5043b0
     * @note[short] Android
     */
    void onDown2(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x45ff74
     * @note[short] MacOS (Intel): 0x5044b0
     * @note[short] Android
     */
    void onRemoveValues(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x45fd7c
     * @note[short] MacOS (Intel): 0x5042b0
     * @note[short] Android
     */
    void onSetEpicOnly(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x45fd1c
     * @note[short] MacOS (Intel): 0x504250
     * @note[short] Android
     */
    void onSetFeatured(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x21dbc4
     * @note[short] MacOS (Intel): 0x504500
     * @note[short] Android
     */
    void onToggleEpic(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x45fe28
     * @note[short] MacOS (Intel): 0x504360
     * @note[short] Android
     */
    void onUp(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x45fed4
     * @note[short] MacOS (Intel): 0x504410
     * @note[short] Android
     */
    void onUp2(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x45ff28
     * @note[short] MacOS (Intel): 0x504460
     * @note[short] Android
     */
    void updateStars();
    cocos2d::CCLabelBMFont* m_featureLabel;
    int m_levelID;
    int m_featurePosition;
    bool m_epicOnly;
    cocos2d::CCSprite* m_epicSprite;
};
