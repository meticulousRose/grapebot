#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>

class SetupCameraRotatePopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupCameraRotatePopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupCameraRotatePopup, SetupTriggerPopup)

    /**
     * @note[short] Android
     */
    static SetupCameraRotatePopup* create(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x41b90c
     * @note[short] MacOS (Intel): 0x4b70d0
     * @note[short] Android
     */
    virtual void determineStartValues();

    /**
     * @note[short] MacOS (ARM): 0x41bff4
     * @note[short] MacOS (Intel): 0x4b7900
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x41bdec
     * @note[short] MacOS (Intel): 0x4b7690
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x41bb70
     * @note[short] MacOS (Intel): 0x4b73c0
     * @note[short] Android
     */
    virtual void valuePopupClosed(ConfigureValuePopup* popup, float value);

    /**
     * @note[short] Android
     */
    bool init(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] Android
     */
    void onEasing(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onEasingRate(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void sliderChanged(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x41b640
     * @note[short] MacOS (Intel): 0x4b6e30
     * @note[short] Android
     */
    void sliderDegreesChanged(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void toggleEasingRateVisibility();

    /**
     * @note[short] MacOS (ARM): 0x41bd0c
     * @note[short] Android
     */
    void updateCommandDegrees();

    /**
     * @note[short] Android
     */
    void updateDegreesLabel();

    /**
     * @note[short] MacOS (ARM): 0x41bd7c
     * @note[short] MacOS (Intel): 0x4b7610
     * @note[short] Android
     */
    void updateDuration();

    /**
     * @note[short] Android
     */
    void updateDurLabel(bool decimals);

    /**
     * @note[short] MacOS (ARM): 0x41b81c
     * @note[short] MacOS (Intel): 0x4b7010
     * @note[short] Android
     */
    void updateEasingLabel();

    /**
     * @note[short] Android
     */
    void updateEasingRateLabel();

    /**
     * @note[short] Android
     */
    void updateMoveCommandEasing();

    /**
     * @note[short] Android
     */
    void updateMoveCommandEasingRate();
    CCTextInputNode* m_moveTimeInput;
    Slider* m_moveTimeSlider;
    float m_moveTime;
    cocos2d::CCLabelBMFont* m_cameraEasingLabel;
    EasingType m_cameraEasingType;
    float m_cameraEasingRate;
    CCMenuItemSpriteExtra* m_cameraEasingRateButton;
    cocos2d::CCLabelBMFont* m_cameraEasingRateLabel;
    CCTextInputNode* m_degreesInput;
    Slider* m_degreesSlider;
    float m_degrees;
};
