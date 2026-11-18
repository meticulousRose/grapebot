#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>

class UIOptionsLayer : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "UIOptionsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(UIOptionsLayer, SetupTriggerPopup)

    /**
     * @note[short] Android
     */
    static UIOptionsLayer* create(bool dual);

    /**
     * @note[short] MacOS (ARM): 0x245780
     * @note[short] MacOS (Intel): 0x2a2bb0
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x245944
     * @note[short] MacOS (Intel): 0x2a2cf0
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x245b30
     * @note[short] MacOS (Intel): 0x2a2e00
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x245c68
     * @note[short] MacOS (Intel): 0x2a2f40
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x245c84
     * @note[short] MacOS (Intel): 0x2a2f80
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x245108
     * @note[short] MacOS (Intel): 0x2a2390
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x245258
     * @note[short] MacOS (Intel): 0x2a2520
     * @note[short] Android
     */
    virtual void valueDidChange(int tag, float value);

    /**
     * @note[short] MacOS (ARM): 0x24555c
     * @note[short] MacOS (Intel): 0x2a2910
     * @note[short] Android
     */
    virtual float getValue(int tag);

    /**
     * @note[short] MacOS (ARM): 0x245760
     * @note[short] MacOS (Intel): 0x2a2b90
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    GJUINode* getNode(int type);

    /**
     * @note[short] MacOS (ARM): 0x243468
     * @note[short] MacOS (Intel): 0x2a0280
     * @note[short] Android
     */
    bool init(bool dual);

    /**
     * @note[short] MacOS (ARM): 0x244ce4
     * @note[short] Android
     */
    void onReset(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onSaveLoad(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x244ebc
     * @note[short] MacOS (Intel): 0x2a2150
     * @note[short] Android
     */
    void toggleUIGroup(int group);
    bool m_dual;
    GJUINode* m_uiNode1;
    GJUINode* m_uiNode2;
    GJUINode* m_uiNode3;
    GJUINode* m_uiNode4;
    cocos2d::CCLabelBMFont* m_nameLabel;
    int m_activeUIGroup;
};
