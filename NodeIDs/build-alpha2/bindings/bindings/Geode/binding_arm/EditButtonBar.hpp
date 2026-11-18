#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCNode.hpp>
#include <Geode/mapping/CCPoint.hpp>

class EditButtonBar : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "EditButtonBar";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(EditButtonBar, cocos2d::CCNode)

    /**
     * @note[short] iOS: 0x4a3b88
     * @note[short] Android: Rebinded
     */
     EditButtonBar();

    /**
     * @note[short] Windows: 0x176e90
     * @note[short] iOS: 0x4a2df4
     * @note[short] Android: Rebinded
     */
    virtual  ~EditButtonBar();

    /**
     * @note[short] MacOS (ARM): 0x5cd808
     * @note[short] MacOS (Intel): 0x6b3f50
     * @note[short] Windows: 0x176f00
     * @note[short] iOS: 0x4a2e0c
     * @note[short] Android
     */
    static EditButtonBar* create(cocos2d::CCArray* objects, cocos2d::CCPoint position, int tab, bool hasCreateItems, int columns, int rows);

    /**
     * @note[short] MacOS (ARM): 0x5ce494
     * @note[short] MacOS (Intel): 0x6b4cb0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x4a39d0
     * @note[short] Android
     */
    int getPage();

    /**
     * @note[short] MacOS (ARM): 0x5ce4a0
     * @note[short] MacOS (Intel): 0x6b4cd0
     * @note[short] Windows: 0x177aa0
     * @note[short] iOS: 0x4a39dc
     * @note[short] Android
     */
    void goToPage(int page);

    /**
     * @note[short] MacOS (ARM): 0x5cd904
     * @note[short] MacOS (Intel): 0x6b4040
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x4a2ed4
     * @note[short] Android
     */
    bool init(cocos2d::CCArray* objects, cocos2d::CCPoint position, int tab, bool hasCreateItems, int columns, int rows);

    /**
     * @note[short] MacOS (ARM): 0x5cd9b0
     * @note[short] MacOS (Intel): 0x6b40f0
     * @note[short] Windows: 0x177060
     * @note[short] iOS: 0x4a2f80
     * @note[short] Android
     */
    void loadFromItems(cocos2d::CCArray* objects, int rows, int columns, bool keepPage);

    /**
     * @note[short] MacOS (ARM): 0x5ce260
     * @note[short] Windows: 0x177b90
     * @note[short] iOS: 0x4a37d4
     * @note[short] Android
     */
    void onDotClicked(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x5ce19c
     * @note[short] MacOS (Intel): 0x6b49d0
     * @note[short] Windows: 0x177b50
     * @note[short] iOS: 0x4a374c
     * @note[short] Android
     */
    void onLeft(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x5ce204
     * @note[short] MacOS (Intel): 0x6b4a50
     * @note[short] Windows: 0x177b10
     * @note[short] iOS: 0x4a3790
     * @note[short] Android
     */
    void onRight(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x5ce0a0
     * @note[short] MacOS (Intel): 0x6b48c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x4a3650
     * @note[short] Android
     */
    void reloadItems(int rowCount, int columnCount);

    /**
     * @note[short] MacOS (ARM): 0x5ce310
     * @note[short] Windows: 0x177c40
     * @note[short] iOS: 0x4a3864
     * @note[short] Android
     */
    void updateDotState();
    cocos2d::CCPoint m_position;
    int m_tabIndex;
    bool m_hasCreateItems;
    cocos2d::CCArray* m_buttonArray;
    BoomScrollLayer* m_scrollLayer;
    cocos2d::CCArray* m_pagesArray;
    cocos2d::CCMenu* m_dotMenu;
};
