#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCLayer.hpp>
#include <Geode/binding/BoomScrollLayerDelegate.hpp>
#include <Geode/mapping/CCPoint.hpp>
#include <Geode/mapping/ccTypes.hpp>

class WorldSelectLayer : public cocos2d::CCLayer, public BoomScrollLayerDelegate {
public:
    static constexpr auto CLASS_NAME = "WorldSelectLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(WorldSelectLayer, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): 0x332494
     * @note[short] MacOS (Intel): 0x3ab0c0
     * @note[short] Android
     */
    static WorldSelectLayer* create(int page);

    /**
     * @note[short] MacOS (ARM): 0x3323b0
     * @note[short] MacOS (Intel): 0x3aafb0
     * @note[short] Android
     */
    static cocos2d::CCScene* scene(int page);

    /**
     * @note[short] MacOS (ARM): 0x334264
     * @note[short] MacOS (Intel): 0x3ace70
     * @note[short] Android
     */
    virtual void onExit();

    /**
     * @note[short] MacOS (ARM): 0x334194
     * @note[short] MacOS (Intel): 0x3acda0
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x33404c
     * @note[short] MacOS (Intel): 0x3accb0
     * @note[short] Android
     */
    virtual void scrollLayerWillScrollToPage(BoomScrollLayer* layer, int page);

    /**
     * @note[short] MacOS (ARM): 0x333f04
     * @note[short] MacOS (Intel): 0x3acbc0
     * @note[short] Android
     */
    virtual void scrollLayerScrolledToPage(BoomScrollLayer* layer, int page);

    /**
     * @note[short] MacOS (ARM): 0x3342b8
     * @note[short] MacOS (Intel): 0x3acec0
     * @note[short] Android
     */
    virtual void scrollLayerMoved(cocos2d::CCPoint position);

    /**
     * @note[short] MacOS (ARM): 0x333258
     * @note[short] MacOS (Intel): 0x3abf30
     * @note[short] Android
     */
    void animateInActiveIsland();

    /**
     * @note[short] MacOS (ARM): 0x33454c
     * @note[short] MacOS (Intel): 0x3ad170
     * @note[short] Android
     */
    cocos2d::ccColor3B colorForPage(int page);

    /**
     * @note[short] MacOS (ARM): 0x334458
     * @note[short] MacOS (Intel): 0x3ad060
     * @note[short] Android
     */
    cocos2d::ccColor3B getColorValue(int page1, int page2, float progress);

    /**
     * @note[short] MacOS (ARM): 0x33331c
     * @note[short] MacOS (Intel): 0x3abfe0
     * @note[short] Android
     */
    void goToPage(int page, bool instant);

    /**
     * @note[short] MacOS (ARM): 0x332558
     * @note[short] MacOS (Intel): 0x3ab1b0
     * @note[short] Android
     */
    bool init(int page);

    /**
     * @note[short] MacOS (ARM): 0x332db4
     * @note[short] MacOS (Intel): 0x3aba40
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x333ea0
     * @note[short] MacOS (Intel): 0x3acb60
     * @note[short] Android
     */
    void onFreeLevels(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x332d28
     * @note[short] MacOS (Intel): 0x3ab990
     * @note[short] Android
     */
    void onGarage(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x332d94
     * @note[short] MacOS (Intel): 0x3aba10
     * @note[short] Android
     */
    void onNext(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x332d74
     * @note[short] MacOS (Intel): 0x3ab9e0
     * @note[short] Android
     */
    void onPrev(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x332e18
     * @note[short] MacOS (Intel): 0x3abaa0
     * @note[short] Android
     */
    void setupWorlds();

    /**
     * @note[short] MacOS (ARM): 0x333400
     * @note[short] MacOS (Intel): 0x3ac0c0
     * @note[short] Android
     */
    void showCompleteDialog();

    /**
     * @note[short] MacOS (ARM): 0x333da8
     * @note[short] MacOS (Intel): 0x3aca60
     * @note[short] Android
     */
    void tryShowAd();

    /**
     * @note[short] MacOS (ARM): 0x333d90
     * @note[short] MacOS (Intel): 0x3aca30
     * @note[short] Android
     */
    void unblockButtons();

    /**
     * @note[short] MacOS (ARM): 0x3331b4
     * @note[short] MacOS (Intel): 0x3abeb0
     * @note[short] Android
     */
    void updateArrows();
    cocos2d::CCSprite* m_background;
    BoomScrollLayer* m_scrollLayer;
    CCMenuItemSpriteExtra* m_arrowLeft;
    CCMenuItemSpriteExtra* m_arrowRight;
    bool m_cleanupSprites;
    bool m_enteringLevel;
    GJWorldNode* m_worldNode;
    bool m_buttonsLocked;
};
