#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>
#include <Geode/binding/SFXBrowserDelegate.hpp>

class EditorSFXActionConfigLayer : public SetupTriggerPopup, public SFXBrowserDelegate {
public:
    static constexpr auto CLASS_NAME = "EditorSFXActionConfigLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(EditorSFXActionConfigLayer, SetupTriggerPopup)

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x4c7364
     * @note[short] Android: Rebinded
     */
     EditorSFXActionConfigLayer();

    /**
     * @note[short] Windows: 0x183430
     * @note[short] iOS: 0x4c5d84
     * @note[short] Android: Rebinded
     */
    virtual  ~EditorSFXActionConfigLayer();

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x4c5dbc
     * @note[short] Android
     */
    static EditorSFXActionConfigLayer* create(int actionId, EditorSoundsLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x7ccdec
     * @note[short] MacOS (Intel): 0x8e0930
     * @note[short] Windows: 0x184de0
     * @note[short] iOS: 0x4c70cc
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x7cced4
     * @note[short] MacOS (Intel): 0x8e0a50
     * @note[short] Windows: 0x184f10
     * @note[short] iOS: 0x4c71b4
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x7cd014
     * @note[short] MacOS (Intel): 0x8e0b90
     * @note[short] Windows: 0x184ff0
     * @note[short] iOS: 0x4c725c
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x7cd124
     * @note[short] MacOS (Intel): 0x8e0cb0
     * @note[short] Windows: 0x185090
     * @note[short] iOS: 0x4c72ec
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x7ccdb0
     * @note[short] MacOS (Intel): 0x8e08e0
     * @note[short] Windows: 0x184c40
     * @note[short] iOS: 0x4c7094
     * @note[short] Android
     */
    virtual void rebuildContent();

    /**
     * @note[short] MacOS (ARM): 0x7ccdb4
     * @note[short] MacOS (Intel): 0x8e08f0
     * @note[short] Windows: 0x184c50
     * @note[short] iOS: 0x4c7098
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x7ccc74
     * @note[short] MacOS (Intel): 0x8e07a0
     * @note[short] Windows: 0x3f5c0
     * @note[short] iOS: 0x4c6fcc
     * @note[short] Android
     */
    virtual void valueDidChange(int p0, float p1);

    /**
     * @note[short] MacOS (ARM): 0x7ccc70
     * @note[short] MacOS (Intel): 0x8e0790
     * @note[short] Windows: 0x184820
     * @note[short] iOS: 0x4c6fc8
     * @note[short] Android
     */
    virtual float getValue(int p0);

    /**
     * @note[short] MacOS (ARM): 0x7ccc78
     * @note[short] MacOS (Intel): 0x8e07b0
     * @note[short] Windows: 0x184990
     * @note[short] iOS: 0x4c6fd0
     * @note[short] Android
     */
    virtual void sfxBrowserClosed(SFXBrowser* p0);

    /**
     * @note[short] Windows: 0x183510
     * @note[short] iOS: 0x4c5e40
     * @note[short] Android
     */
    bool init(int actionId, EditorSoundsLayer* layer);

    /**
     * @note[short] Windows: 0x184950
     * @note[short] Android
     */
    void onAddSound(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x7ccad0
     * @note[short] MacOS (Intel): 0x8e05e0
     * @note[short] Windows: 0x184bd0
     * @note[short] iOS: 0x4c6e28
     * @note[short] Android
     */
    void onDeleteSound(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (Intel): 0x8e0630
     * @note[short] Windows: 0x184b30
     * @note[short] Android
     */
    void onEditSound(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x184ca0
     * @note[short] Android
     */
    void onOpenSettings(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (Intel): 0x8e06e0
     * @note[short] Windows: 0x184a70
     * @note[short] Android
     */
    void onPreviewSound(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x1848c0
     * @note[short] Android
     */
    void onToggleMode(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x184830
     * @note[short] Android
     */
    TodoReturn refreshModeButtons();

    /**
     * @note[short] MacOS (ARM): 0x7cc158
     * @note[short] MacOS (Intel): 0x8dfb50
     * @note[short] Windows: 0x183c80
     * @note[short] iOS: 0x4c64d4
     * @note[short] Android
     */
    void refreshRows();

    /**
     * @note[short] MacOS (ARM): 0x7cccec
     * @note[short] MacOS (Intel): 0x8e0820
     * @note[short] Windows: 0x184a20
     * @note[short] iOS: 0x4c7050
     * @note[short] Android
     */
    void refreshRowsAddedDeferred(float p0);
    int m_actionID;
    ButtonSprite* m_modeButton;
    EditorSoundsLayer* m_soundsLayer;
    ScrollableContentLayer* m_scrollLayer;
    cocos2d::CCMenu* m_contentMenu;
    bool m_contentMenuTouched;
    float m_savedScrollY;
};
