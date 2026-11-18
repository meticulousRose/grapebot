#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>

class PromoInterstitial : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "PromoInterstitial";
    GEODE_CUSTOM_CONSTRUCTOR_GD(PromoInterstitial, FLAlertLayer)

    /**
     * @note[short] Android
     */
    static PromoInterstitial* create(bool fullVersion);

    /**
     * @note[short] MacOS (ARM): 0x2613c4
     * @note[short] MacOS (Intel): 0x2c1630
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x26162c
     * @note[short] MacOS (Intel): 0x2c1860
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x2614f4
     * @note[short] MacOS (Intel): 0x2c1730
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x2615b4
     * @note[short] MacOS (Intel): 0x2c17e0
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x261230
     * @note[short] MacOS (Intel): 0x2c1490
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x261204
     * @note[short] MacOS (Intel): 0x2c1460
     * @note[short] Android
     */
    virtual void show();

    /**
     * @note[short] MacOS (ARM): 0x260f84
     * @note[short] MacOS (Intel): 0x2c11b0
     * @note[short] Android
     */
    bool init(bool fullVersion);

    /**
     * @note[short] MacOS (ARM): 0x261348
     * @note[short] MacOS (Intel): 0x2c15b0
     * @note[short] Android
     */
    void onClick(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (Intel): 0x2c14f0
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x260fd8
     * @note[short] MacOS (Intel): 0x2c1200
     * @note[short] Android
     */
    void setup();
    bool m_fullVersion;
    cocos2d::CCMenu* m_closeMenu;
    bool m_promoTouched;
    std::string m_marketLink;
    bool m_showAdBanner;
};
