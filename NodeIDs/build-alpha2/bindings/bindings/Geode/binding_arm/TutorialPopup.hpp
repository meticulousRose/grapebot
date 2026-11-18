#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>
#include <Geode/mapping/CCObject.hpp>

class TutorialPopup : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "TutorialPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(TutorialPopup, FLAlertLayer)

    /**
     * @note[short] Android
     */
    static TutorialPopup* create(std::string frame);

    /**
     * @note[short] MacOS (ARM): 0x5c0d24
     * @note[short] MacOS (Intel): 0x6a5f20
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x5c0e00
     * @note[short] MacOS (Intel): 0x6a5ff0
     * @note[short] Android
     */
    virtual void show();

    /**
     * @note[short] MacOS (ARM): 0x5c0e5c
     * @note[short] MacOS (Intel): 0x6a6040
     * @note[short] Android
     */
    void animateMenu();

    /**
     * @note[short] MacOS (ARM): 0x5c0cb8
     * @note[short] MacOS (Intel): 0x6a5ec0
     * @note[short] Android
     */
    void closeTutorial(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x5c0abc
     * @note[short] MacOS (Intel): 0x6a5cc0
     * @note[short] Android
     */
    bool init(std::string frame);

    /**
     * @note[short] MacOS (ARM): 0x5c0ecc
     * @note[short] MacOS (Intel): 0x6a60b0
     * @note[short] Android
     */
    void registerForCallback(cocos2d::SEL_MenuHandler selector, cocos2d::CCNode* target);
    std::string m_currentSprite;
    bool m_callbackRegistered;
    cocos2d::SEL_MenuHandler m_callbackSelector;
    CCMenuItemSpriteExtra* m_closeButton;
};
