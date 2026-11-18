#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCLayer.hpp>
#include <Geode/mapping/CCPoint.hpp>

class MapSelectLayer : public cocos2d::CCLayer {
public:
    static constexpr auto CLASS_NAME = "MapSelectLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(MapSelectLayer, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): 0x1fadc4
     * @note[short] MacOS (Intel): 0x251e20
     * @note[short] Android
     */
    static MapSelectLayer* create();

    /**
     * @note[short] MacOS (ARM): 0x1fad80
     * @note[short] MacOS (Intel): 0x251de0
     * @note[short] Android
     */
    static cocos2d::CCScene* scene();

    /**
     * @note[short] MacOS (ARM): 0x1fbd24
     * @note[short] MacOS (Intel): 0x252ea0
     * @note[short] Android
     */
    virtual void update(float dt);

    /**
     * @note[short] MacOS (ARM): 0x1faeb0
     * @note[short] MacOS (Intel): 0x251f40
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x1fbfd4
     * @note[short] MacOS (Intel): 0x253140
     * @note[short] Android
     */
    virtual void onExit();

    /**
     * @note[short] MacOS (ARM): 0x1fc5a4
     * @note[short] MacOS (Intel): 0x2537e0
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x1fc69c
     * @note[short] MacOS (Intel): 0x2538e0
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x1fc860
     * @note[short] MacOS (Intel): 0x253b00
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x1fc968
     * @note[short] MacOS (Intel): 0x253bd0
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x1fc984
     * @note[short] MacOS (Intel): 0x253c10
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x1fbf0c
     * @note[short] MacOS (Intel): 0x253080
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x1fbaec
     * @note[short] MacOS (Intel): 0x252c50
     * @note[short] Android
     */
    virtual bool scrollWheel(float y, float x);

    /**
     * @note[short] MacOS (ARM): 0x1fc148
     * @note[short] MacOS (Intel): 0x2532f0
     * @note[short] Android
     */
    bool checkTouchMonster(cocos2d::CCPoint position);

    /**
     * @note[short] MacOS (ARM): 0x1fc59c
     * @note[short] MacOS (Intel): 0x2537d0
     * @note[short] Android
     */
    GJMapObject* createObjectAtPoint(cocos2d::CCPoint position);

    /**
     * @note[short] MacOS (ARM): 0x1fbca0
     * @note[short] MacOS (Intel): 0x252e20
     * @note[short] Android
     */
    cocos2d::CCPoint getConstrainedMapPos(cocos2d::CCPoint position);

    /**
     * @note[short] MacOS (ARM): 0x1fb538
     * @note[short] MacOS (Intel): 0x252620
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);
    GJBigSprite* m_bigSprite;
    SimplePlayer* m_player;
    cocos2d::CCNode* m_mainLayer;
    bool m_unloadTexturesOnExit;
    bool m_backPressed;
    bool m_blockExit;
    bool m_inTouch;
    double m_lastTouchTime;
    bool m_editMode;
    cocos2d::CCPoint m_lastTouchPos;
    cocos2d::CCPoint m_mapPos;
    cocos2d::CCArray* m_monsters;
    LevelEditorLayer* m_editorLayer;
};
