#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/GJOptionsLayer.hpp>

class EditorOptionsLayer : public GJOptionsLayer {
public:
    static constexpr auto CLASS_NAME = "EditorOptionsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(EditorOptionsLayer, GJOptionsLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     EditorOptionsLayer();

    /**
     * @note[short] MacOS (ARM): 0x242564
     * @note[short] Android
     */
    static EditorOptionsLayer* create();

    /**
     * @note[short] MacOS (ARM): 0x22d134
     * @note[short] MacOS (Intel): 0x2884c0
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x22db78
     * @note[short] MacOS (Intel): 0x288ed0
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x22d158
     * @note[short] MacOS (Intel): 0x2884f0
     * @note[short] Android
     */
    virtual void setupOptions();

    /**
     * @note[short] MacOS (ARM): 0x22daf8
     * @note[short] MacOS (Intel): 0x288e60
     * @note[short] Android
     */
    void onButtonRows(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x22da70
     * @note[short] MacOS (Intel): 0x288de0
     * @note[short] Android
     */
    void onButtonsPerRow(cocos2d::CCObject* sender);
    int m_buttonsPerRow;
    int m_buttonRows;
    cocos2d::CCLabelBMFont* m_buttonsPerRowLabel;
    cocos2d::CCLabelBMFont* m_buttonRowsLabel;
};
