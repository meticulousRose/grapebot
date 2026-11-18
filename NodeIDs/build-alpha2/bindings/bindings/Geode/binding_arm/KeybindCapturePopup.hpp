#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>
#include <Geode/binding/InputCaptureDelegate.hpp>
#include <Geode/mapping/enumKeyCodes.hpp>

class KeybindCapturePopup : public SetupTriggerPopup, public InputCaptureDelegate {
public:
    static constexpr auto CLASS_NAME = "KeybindCapturePopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(KeybindCapturePopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x44e250
     * @note[short] iOS: 0x1a5174
     * @note[short] Android: Rebinded
     */
    virtual  ~KeybindCapturePopup();

    /**
     * @note[short] MacOS (Intel): 0x5b49b0
     * @note[short] Windows: 0x44e090
     * @note[short] iOS: 0x1a4f98
     * @note[short] Android
     */
    static KeybindCapturePopup* create(KeybindSource* source, int action, int chord, KeybindingsLayer* layer, KeybindCaptureMode mode);

    /**
     * @note[short] MacOS (ARM): 0x502f3c
     * @note[short] MacOS (Intel): 0x5b5ab0
     * @note[short] Windows: 0x44ee50
     * @note[short] iOS: 0x1a58a4
     * @note[short] Android
     */
    virtual void keyDown(cocos2d::enumKeyCodes key, double timestamp);

    /**
     * @note[short] MacOS (ARM): 0x502eec
     * @note[short] MacOS (Intel): 0x5b5a60
     * @note[short] Windows: 0x44ee00
     * @note[short] iOS: 0x1a5854
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x50259c
     * @note[short] MacOS (Intel): 0x5b5060
     * @note[short] Windows: 0x44e380
     * @note[short] iOS: 0x1a51cc
     * @note[short] Android
     */
    virtual void inputKeySelected(int chord);

    /**
     * @note[short] MacOS (ARM): 0x503130
     * @note[short] MacOS (Intel): 0x5b5cd0
     * @note[short] Windows: 0x44f0c0
     * @note[short] iOS: 0x1a5a04
     * @note[short] Android
     */
    virtual void keyUp(cocos2d::enumKeyCodes key, double timestamp);

    /**
     * @note[short] Windows: 0x44eb30
     * @note[short] iOS: 0x1a5778
     * @note[short] Android
     */
    void fadeButtonSprite(ButtonSprite* sprite, bool enabled);

    /**
     * @note[short] MacOS (Intel): 0x5b3c50
     * @note[short] Windows: 0x44d2c0
     * @note[short] iOS: 0x1a44c0
     * @note[short] Android
     */
    bool init(KeybindSource* source, int action, int chord, KeybindingsLayer* layer, KeybindCaptureMode mode);

    /**
     * @note[short] Windows: 0x44ecf0
     * @note[short] Android
     */
    void onRemove(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x44ec20
     * @note[short] Android
     */
    void onSet(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x44ed50
     * @note[short] Android
     */
    void onToggleController(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (Intel): 0x5b5750
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1a56f0
     * @note[short] Android
     */
    void updateButtonStates();

    /**
     * @note[short] MacOS (Intel): 0x5b48c0
     * @note[short] Windows: 0x44e3b0
     * @note[short] iOS: 0x1a4e88
     * @note[short] Android
     */
    void updateChordDisplay();

    /**
     * @note[short] MacOS (Intel): 0x5b5160
     * @note[short] Windows: 0x44e510
     * @note[short] iOS: 0x1a5200
     * @note[short] Android
     */
    void updateConflictLabel();
    KeybindSource* m_keybindSource;
    KeybindingsLayer* m_keybindingsLayer;
    int m_action;
    int m_originalChord;
    int m_chord;
    bool m_isNewBind;
    bool m_awaitingConfirm;
    bool m_controllerMode;
    bool m_isLevelSet;
    bool m_isBlocked;
    VirtualKeyboardNode* m_virtualKeyboard;
    ControllerInputNode* m_controllerInput;
    CCMenuItemToggler* m_controllerToggler;
    cocos2d::CCLabelBMFont* m_chordLabel;
    cocos2d::CCLabelBMFont* m_promptLabel;
    cocos2d::CCLabelBMFont* m_conflictLabel;
    CCMenuItemSpriteExtra* m_setButton;
    CCMenuItemSpriteExtra* m_removeButton;
    ButtonSprite* m_setSprite;
    ButtonSprite* m_removeSprite;
};
