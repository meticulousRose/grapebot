#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>

class SetupGravityModPopup : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "SetupGravityModPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupGravityModPopup, FLAlertLayer)

    /**
     * @note[short] Android
     */
    static SetupGravityModPopup* create(EffectGameObject* object, cocos2d::CCArray* objects, bool gravityTrigger);

    /**
     * @note[short] MacOS (ARM): 0x34ab5c
     * @note[short] MacOS (Intel): 0x3c6560
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x34ab10
     * @note[short] MacOS (Intel): 0x3c6500
     * @note[short] Android
     */
    virtual void show();

    /**
     * @note[short] MacOS (ARM): 0x34a9a4
     * @note[short] MacOS (Intel): 0x3c6320
     * @note[short] Android
     */
    virtual void textInputClosed(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x34a9c0
     * @note[short] MacOS (Intel): 0x3c6360
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x34a56c
     * @note[short] MacOS (Intel): 0x3c5e70
     * @note[short] Android
     */
    void determineStartValues();

    /**
     * @note[short] MacOS (Intel): 0x3c55e0
     * @note[short] Android
     */
    bool init(EffectGameObject* object, cocos2d::CCArray* objects, bool gravityTrigger);

    /**
     * @note[short] MacOS (ARM): 0x34a66c
     * @note[short] MacOS (Intel): 0x3c5f90
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x34a6c8
     * @note[short] MacOS (Intel): 0x3c5ff0
     * @note[short] Android
     */
    void sliderChanged(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void updateItemID();

    /**
     * @note[short] Android
     */
    void updateTextInputLabel();

    /**
     * @note[short] Android
     */
    void updateValue();

    /**
     * @note[short] MacOS (ARM): 0x34a7c4
     * @note[short] MacOS (Intel): 0x3c6120
     * @note[short] Android
     */
    void updateValueLabel();
    EffectGameObject* m_gameObject;
    cocos2d::CCArray* m_gameObjects;
    cocos2d::CCLabelBMFont* m_gravityModLabel;
    Slider* m_gravityModSlider;
    float m_gravityMod;
    bool m_gravityTrigger;
    float m_minValue;
    float m_maxValue;
    CCTextInputNode* m_itemIDInput;
    int m_itemID;
    bool m_disableDelegate;
};
