#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>

class SelectFontLayer : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "SelectFontLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SelectFontLayer, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     SelectFontLayer();

    /**
     * @note[short] Android: Rebinded
     */
     ~SelectFontLayer();

    /**
     * @note[short] Android
     */
    static SelectFontLayer* create(LevelEditorLayer* editorLayer);

    /**
     * @note[short] MacOS (ARM): 0x22a8b8
     * @note[short] MacOS (Intel): 0x285800
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x22a108
     * @note[short] MacOS (Intel): 0x285030
     * @note[short] Android
     */
    bool init(LevelEditorLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x22a724
     * @note[short] MacOS (Intel): 0x285640
     * @note[short] Android
     */
    void onChangeFont(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x22a6e8
     * @note[short] MacOS (Intel): 0x285610
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x22a7b8
     * @note[short] MacOS (Intel): 0x2856e0
     * @note[short] Android
     */
    void updateFontLabel();
    int m_font;
    LevelEditorLayer* m_editorLayer;
    cocos2d::CCLabelBMFont* m_fontLabel;
};
