#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCLayerColor.hpp>
#include <Geode/mapping/CCPoint.hpp>

class SlideInLayer : public cocos2d::CCLayerColor {
public:
    static constexpr auto CLASS_NAME = "SlideInLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(SlideInLayer, cocos2d::CCLayerColor)

    /**
     * @note[short] MacOS (ARM): 0x21f8a8
     * @note[short] MacOS (Intel): 0x279b20
     * @note[short] Android
     */
    static SlideInLayer* create();

    /**
     * @note[short] MacOS (ARM): 0x21f99c
     * @note[short] MacOS (Intel): 0x279c40
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x220068
     * @note[short] MacOS (Intel): 0x27a370
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] MacOS (ARM): 0x2200a4
     * @note[short] MacOS (Intel): 0x27a3a0
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x2200c4
     * @note[short] MacOS (Intel): 0x27a400
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x2200b4
     * @note[short] MacOS (Intel): 0x27a3c0
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x2200bc
     * @note[short] MacOS (Intel): 0x27a3e0
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x21fd84
     * @note[short] MacOS (Intel): 0x27a070
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x21fdbc
     * @note[short] MacOS (Intel): 0x27a0b0
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x21fd20
     * @note[short] MacOS (Intel): 0x279ff0
     * @note[short] Android
     */
    virtual void customSetup();

    /**
     * @note[short] MacOS (ARM): 0x21fd4c
     * @note[short] MacOS (Intel): 0x27a040
     * @note[short] Android
     */
    virtual void enterLayer();

    /**
     * @note[short] MacOS (ARM): 0x21fde0
     * @note[short] MacOS (Intel): 0x27a0f0
     * @note[short] Android
     */
    virtual void exitLayer(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x21fe44
     * @note[short] MacOS (Intel): 0x27a140
     * @note[short] Android
     */
    virtual void showLayer(bool instant);

    /**
     * @note[short] MacOS (ARM): 0x21ff34
     * @note[short] MacOS (Intel): 0x27a230
     * @note[short] Android
     */
    virtual void hideLayer(bool instant);

    /**
     * @note[short] MacOS (ARM): 0x220004
     * @note[short] MacOS (Intel): 0x27a310
     * @note[short] Android
     */
    virtual void layerVisible();

    /**
     * @note[short] MacOS (ARM): 0x220014
     * @note[short] MacOS (Intel): 0x27a330
     * @note[short] Android
     */
    virtual void layerHidden();

    /**
     * @note[short] MacOS (ARM): 0x220000
     * @note[short] MacOS (Intel): 0x27a300
     * @note[short] Android
     */
    virtual void enterAnimFinished();

    /**
     * @note[short] MacOS (ARM): 0x21fd24
     * @note[short] MacOS (Intel): 0x27a000
     * @note[short] Android
     */
    virtual void disableUI();

    /**
     * @note[short] MacOS (ARM): 0x21fd38
     * @note[short] MacOS (Intel): 0x27a020
     * @note[short] Android
     */
    virtual void enableUI();
    cocos2d::CCLayer* m_mainLayer;
    cocos2d::CCMenu* m_buttonMenu;
    cocos2d::CCSprite* m_exitSprite;
    CCMenuItemSpriteExtra* m_exitButton;
    cocos2d::CCPoint m_endPosition;
    cocos2d::CCPoint m_startPosition;
    void* m_delegate;
    bool m_closeOnHide;
};
