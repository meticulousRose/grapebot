#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>
#include <Geode/mapping/CCPoint.hpp>
#include <Geode/mapping/enumKeyCodes.hpp>

class EditorWindowPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "EditorWindowPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(EditorWindowPopup, SetupTriggerPopup)

    /**
     * @note[short] MacOS (ARM): 0x7cb6ec
     * @note[short] MacOS (Intel): 0x8def40
     * @note[short] Windows: 0x123530
     * @note[short] iOS: 0x4d89a8
     * @note[short] Android: Rebinded
     */
     EditorWindowPopup();

    /**
     * @note[short] MacOS (ARM): 0x7e92bc
     * @note[short] MacOS (Intel): 0x902190
     * @note[short] Windows: 0x17fcc0
     * @note[short] iOS: 0x4dabc8
     * @note[short] Android
     */
    virtual void onExit();

    /**
     * @note[short] MacOS (ARM): 0x7e8294
     * @note[short] MacOS (Intel): 0x900ff0
     * @note[short] Windows: 0x17eca0
     * @note[short] iOS: 0x4da088
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x7e87a8
     * @note[short] MacOS (Intel): 0x901620
     * @note[short] Windows: 0x17f360
     * @note[short] iOS: 0x4da3f8
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x7e8ae0
     * @note[short] MacOS (Intel): 0x901a00
     * @note[short] Windows: 0x17f7c0
     * @note[short] iOS: 0x4da70c
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x7e8cb8
     * @note[short] MacOS (Intel): 0x901bc0
     * @note[short] Windows: 0x17f980
     * @note[short] iOS: 0x4da8a0
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x7e8e28
     * @note[short] MacOS (Intel): 0x901d60
     * @note[short] Windows: 0x17faf0
     * @note[short] iOS: 0x4da9d0
     * @note[short] Android
     */
    virtual void keyDown(cocos2d::enumKeyCodes key, double timestamp);

    /**
     * @note[short] MacOS (ARM): 0x7e92b0
     * @note[short] MacOS (Intel): 0x902170
     * @note[short] Windows: 0x17fcb0
     * @note[short] iOS: 0x4dabbc
     * @note[short] Android
     */
    virtual void show();

    /**
     * @note[short] MacOS (ARM): 0x7e92d8
     * @note[short] MacOS (Intel): 0x9021d0
     * @note[short] Windows: 0x17fd00
     * @note[short] iOS: 0x4dabe4
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x7e9254
     * @note[short] MacOS (Intel): 0x902110
     * @note[short] Windows: 0x17fc80
     * @note[short] iOS: 0x4dab60
     * @note[short] Android
     */
    virtual void textInputClosed(CCTextInputNode* p0);

    /**
     * @note[short] MacOS (ARM): 0x7e901c
     * @note[short] MacOS (Intel): 0x901f10
     * @note[short] Windows: 0x17fba0
     * @note[short] iOS: 0x4daa94
     * @note[short] Android
     */
    virtual bool handleAction(int action, bool down, double timestamp);

    /**
     * @note[short] Windows: 0x9999999
     * @note[short] Android
     */
    virtual void onBuildWindowContent();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void onWindowResized();

    /**
     * @note[short] MacOS (ARM): 0x7e9204
     * @note[short] MacOS (Intel): 0x9020d0
     * @note[short] Windows: 0x17fc70
     * @note[short] iOS: 0x4dab5c
     * @note[short] Android
     */
    virtual void onFieldEnter();

    /**
     * @note[short] MacOS (ARM): 0x7e73f4
     * @note[short] MacOS (Intel): 0x8ffeb0
     * @note[short] Windows: 0x17dde0
     * @note[short] iOS: 0x4d92e8
     * @note[short] Android
     */
    bool initWindow(EditorUI* editorUI, float width, float height, int windowID, int unused);

    /**
     * @note[short] MacOS (ARM): 0x7e83dc
     * @note[short] MacOS (Intel): 0x901160
     * @note[short] Windows: 0x17edd0
     * @note[short] Android
     */
    bool beginTouch(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x7e7e60
     * @note[short] MacOS (Intel): 0x900b10
     * @note[short] Windows: 0x17e7f0
     * @note[short] iOS: 0x4d9cb0
     * @note[short] Android
     */
    bool isInCloseButton(cocos2d::CCPoint point) const ;

    /**
     * @note[short] Android
     */
    TodoReturn activeField();

    /**
     * @note[short] MacOS (ARM): 0x7e7a20
     * @note[short] MacOS (Intel): 0x9005e0
     * @note[short] Windows: 0x17e6d0
     * @note[short] iOS: 0x4d98f8
     * @note[short] Android
     */
    void applyWindowSize();

    /**
     * @note[short] Windows: 0x17ec40
     * @note[short] iOS: 0x4d9fe8
     * @note[short] Android
     */
    void blurField();

    /**
     * @note[short] Windows: 0x17e930
     * @note[short] iOS: 0x4d97f8
     * @note[short] Android
     */
    cocos2d::CCPoint clampWindowCenter(cocos2d::CCPoint p0) const ;

    /**
     * @note[short] MacOS (ARM): 0x7e7fdc
     * @note[short] Windows: 0x17eaa0
     * @note[short] iOS: 0x4d9e2c
     * @note[short] Android
     */
    cocos2d::CCPoint clampWindowOnScreen(cocos2d::CCPoint p0) const ;

    /**
     * @note[short] iOS: 0x4d97b0
     * @note[short] Android
     */
    cocos2d::CCPoint contentCenter() const ;

    /**
     * @note[short] Windows: 0x17e420
     * @note[short] iOS: 0x4d9b00
     * @note[short] Android
     */
    void dismissDropdowns();

    /**
     * @note[short] Android
     */
    TodoReturn fieldHoldsKeys();

    /**
     * @note[short] MacOS (ARM): 0x7e7d60
     * @note[short] MacOS (Intel): 0x900a00
     * @note[short] iOS: 0x4d9bc0
     * @note[short] Android
     */
    int getResizeCorner(cocos2d::CCPoint p0) const ;

    /**
     * @note[short] iOS: 0x4d9db0
     * @note[short] Android
     */
    bool isInDragHandle(cocos2d::CCPoint p0) const ;

    /**
     * @note[short] MacOS (ARM): 0x7e7ad8
     * @note[short] MacOS (Intel): 0x9006b0
     * @note[short] Windows: 0x17e520
     * @note[short] iOS: 0x4d99b0
     * @note[short] Android
     */
    void layoutWindow();

    /**
     * @note[short] iOS: 0x4d9b98
     * @note[short] Android
     */
    void moveWindowTo(cocos2d::CCPoint p0);

    /**
     * @note[short] Android
     */
    void setLockAspectRatio(bool p0);

    /**
     * @note[short] iOS: 0x4d9af4
     * @note[short] Android
     */
    void setWindowScaleBounds(float p0, float p1);

    /**
     * @note[short] iOS: 0x4d9ae0
     * @note[short] Android
     */
    void setWindowSizeBounds(float p0, float p1, float p2, float p3);

    /**
     * @note[short] Windows: 0x17e4a0
     * @note[short] iOS: 0x4d9b3c
     * @note[short] Android
     */
    void syncWindowCenter();

    /**
     * @note[short] iOS: 0x4d9f5c
     * @note[short] Android
     */
    bool touchIsOnField(cocos2d::CCPoint p0);

    /**
     * @note[short] iOS: 0x4da038
     * @note[short] Android
     */
    cocos2d::CCRect touchRect() const ;
    EditorUI* m_editorUI;
    cocos2d::extension::CCScale9Sprite* m_background;
    cocos2d::CCSprite* m_closeSprite;
    ScrollableContentLayer* m_scrollContentLayer;
    cocos2d::CCMenu* m_scrollContentMenu;
    float m_windowWidth;
    float m_windowHeight;
    float m_windowScale;
    cocos2d::CCPoint m_windowPosition;
    int m_touchID;
    bool m_draggingWindow;
    bool m_allowDraggingAnywhere;
    bool m_startCentered;
    cocos2d::CCPoint m_dragOffset;
    bool m_contentTouch;
    bool m_menuTouch;
    bool m_closeButtonTouch;
    bool m_closeButtonRelease;
    int m_resizeCorner;
    cocos2d::CCPoint m_resizeAnchor;
    cocos2d::CCPoint m_resizeOffset;
    int m_resizeMode;
    bool m_lockAspectRatio;
    float m_aspectRatio;
    float m_minWidth;
    float m_minHeight;
    float m_maxWidth;
    float m_maxHeight;
    float m_minScale;
    float m_maxScale;
    int m_windowID;
    int m_version;
    bool m_isEmotePicker;
};
