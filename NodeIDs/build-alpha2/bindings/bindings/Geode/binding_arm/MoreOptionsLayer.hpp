#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>
#include <Geode/binding/GooglePlayDelegate.hpp>
#include <Geode/binding/GJDropDownLayerDelegate.hpp>
#include <Geode/mapping/CCPoint.hpp>

class MoreOptionsLayer : public FLAlertLayer, public GooglePlayDelegate, public GJDropDownLayerDelegate {
public:
    static constexpr auto CLASS_NAME = "MoreOptionsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(MoreOptionsLayer, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Android: Out of line
     */
     MoreOptionsLayer();

    /**
     * @note[short] MacOS (ARM): 0x771c80
     * @note[short] MacOS (Intel): 0x87c6a0
     * @note[short] Android: Rebinded
     */
     ~MoreOptionsLayer();

    /**
     * @note[short] MacOS (ARM): 0x771d74
     * @note[short] MacOS (Intel): 0x87c820
     * @note[short] Android
     */
    static MoreOptionsLayer* create();

    /**
     * @note[short] MacOS (ARM): 0x771f04
     * @note[short] MacOS (Intel): 0x87ca40
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x7750b4
     * @note[short] MacOS (Intel): 0x87fce0
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x7750c0
     * @note[short] MacOS (Intel): 0x87fd10
     * @note[short] Android
     */
    virtual void googlePlaySignedIn();

    /**
     * @note[short] MacOS (ARM): 0x77508c
     * @note[short] MacOS (Intel): 0x87fca0
     * @note[short] Android
     */
    virtual void dropDownLayerWillClose(GJDropDownLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x773314
     * @note[short] Android
     */
    void addToggle(char const* label, char const* key, char const* description);

    /**
     * @note[short] Android
     */
    int countForPage(int page);

    /**
     * @note[short] MacOS (ARM): 0x773e68
     * @note[short] MacOS (Intel): 0x87ea40
     * @note[short] Android
     */
    void goToPage(int page);

    /**
     * @note[short] Android
     */
    void incrementCountForPage(int page);

    /**
     * @note[short] Android
     */
    const char* infoKey(int index);

    /**
     * @note[short] Android
     */
    cocos2d::CCLayer* layerForPage(int page);

    /**
     * @note[short] MacOS (ARM): 0x775064
     * @note[short] MacOS (Intel): 0x87fc80
     * @note[short] Android
     */
    const char* layerKey(int page);

    /**
     * @note[short] MacOS (ARM): 0x77432c
     * @note[short] Android
     */
    cocos2d::CCPoint nextPosition(int page);

    /**
     * @note[short] MacOS (ARM): 0x77503c
     * @note[short] MacOS (Intel): 0x87fc60
     * @note[short] Android
     */
    const char* objectKey(int page);

    /**
     * @note[short] MacOS (ARM): 0x773898
     * @note[short] MacOS (Intel): 0x87e440
     * @note[short] Android
     */
    cocos2d::CCArray* objectsForPage(int page);

    /**
     * @note[short] MacOS (ARM): 0x773860
     * @note[short] MacOS (Intel): 0x87e400
     * @note[short] Android
     */
    void offsetToNextPage();

    /**
     * @note[short] MacOS (ARM): 0x773da4
     * @note[short] MacOS (Intel): 0x87e960
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x773ab4
     * @note[short] MacOS (Intel): 0x87e680
     * @note[short] Android
     */
    void onFMODDebug(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x773c38
     * @note[short] MacOS (Intel): 0x87e7d0
     * @note[short] Android
     */
    void onGPSignIn(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x773c94
     * @note[short] MacOS (Intel): 0x87e830
     * @note[short] Android
     */
    void onGPSignOut(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onKeybindings(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onNextPage(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (Intel): 0x29ec00
     * @note[short] Android
     */
    void onParental(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onPrevPage(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x773a5c
     * @note[short] MacOS (Intel): 0x87e620
     * @note[short] Android
     */
    void onSongBrowser(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x7745f0
     * @note[short] MacOS (Intel): 0x87f230
     * @note[short] Android
     */
    void onToggle(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x775014
     * @note[short] MacOS (Intel): 0x87fc40
     * @note[short] Android
     */
    const char* pageKey(int page);

    /**
     * @note[short] MacOS (ARM): 0x773d0c
     * @note[short] MacOS (Intel): 0x87e8b0
     * @note[short] Android
     */
    void toggleGP();
    int m_page;
    int m_toggleCount;
    int m_pageCount;
    cocos2d::CCDictionary* m_variables;
    cocos2d::CCDictionary* m_objects;
    CCMenuItemSpriteExtra* m_leftBtn;
    CCMenuItemSpriteExtra* m_rightBtn;
    CCTextInputNode* m_offsetInput;
    CCMenuItemSpriteExtra* m_gpSignInBtn;
    CCMenuItemSpriteExtra* m_gpSignOutBtn;
    cocos2d::CCLabelBMFont* m_categoryLabel;
};
