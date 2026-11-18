#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>
#include <Geode/mapping/CCPoint.hpp>

class PagedListPopup : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "PagedListPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(PagedListPopup, FLAlertLayer)

    /**
     * @note[short] Windows: 0xc2af0
     * @note[short] Android: Rebinded
     */
    virtual  ~PagedListPopup();

    /**
     * @note[short] MacOS (ARM): 0x83b594
     * @note[short] MacOS (Intel): 0x95d350
     * @note[short] Windows: 0xc3a70
     * @note[short] iOS: 0x51b470
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x83b650
     * @note[short] MacOS (Intel): 0x95d400
     * @note[short] Windows: 0xc3ae0
     * @note[short] iOS: 0x51b4dc
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x83b6dc
     * @note[short] MacOS (Intel): 0x95d4a0
     * @note[short] Windows: 0xc3b50
     * @note[short] iOS: 0x51b530
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x83b768
     * @note[short] MacOS (Intel): 0x95d540
     * @note[short] Windows: 0xc3ba0
     * @note[short] iOS: 0x51b584
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x83b570
     * @note[short] MacOS (Intel): 0x95d310
     * @note[short] Windows: 0xc3a50
     * @note[short] iOS: 0x51b44c
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x83b4b0
     * @note[short] MacOS (Intel): 0x95d260
     * @note[short] Windows: 0xc39c0
     * @note[short] iOS: 0x51b394
     * @note[short] Android
     */
    virtual void show();

    /**
     * @note[short] MacOS (ARM): 0x83b2b4
     * @note[short] MacOS (Intel): 0x95d040
     * @note[short] Windows: 0xc36c0
     * @note[short] iOS: 0x51b19c
     * @note[short] Android
     */
    virtual void clearPageContent();

    /**
     * @note[short] MacOS (ARM): 0x83b534
     * @note[short] MacOS (Intel): 0x95d2e0
     * @note[short] Windows: 0x99f60
     * @note[short] iOS: 0x51b410
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn clearStatus();

    /**
     * @note[short] Windows: 0xc3280
     * @note[short] Android
     */
    void createScrollArea(float p0, float p1);

    /**
     * @note[short] Windows: 0xc3500
     * @note[short] Android
     */
    void createScrollView(float p0, float p1, cocos2d::CCPoint p2);

    /**
     * @note[short] Android
     */
    TodoReturn fadeLoading();

    /**
     * @note[short] Windows: 0xc2ba0
     * @note[short] Android
     */
    bool initFrame(float p0, float p1);

    /**
     * @note[short] Windows: 0xc2dd0
     * @note[short] Android
     */
    bool initPaged(char const* p0, std::string const& p1, float p2, float p3);

    /**
     * @note[short] Windows: 0xc3610
     * @note[short] Android
     */
    void loadPage(int p0);

    /**
     * @note[short] Windows: 0xc3760
     * @note[short] Android
     */
    void onNextPage(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xc3750
     * @note[short] Android
     */
    void onPrevPage(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn retryPendingPage();

    /**
     * @note[short] Windows: 0xc3770
     * @note[short] Android
     */
    void showLoading();

    /**
     * @note[short] Windows: 0xc3810
     * @note[short] Android
     */
    void showStatus(char const* p0);

    /**
     * @note[short] Android
     */
    TodoReturn updatePageArrows(bool p0, bool p1);

    /**
     * @note[short] Windows: 0xc38e0
     * @note[short] Android
     */
    void updatePageUI(int p0, int p1, int p2);
};
