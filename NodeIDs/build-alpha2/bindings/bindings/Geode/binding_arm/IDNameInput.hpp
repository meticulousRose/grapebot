#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCNode.hpp>
#include <Geode/binding/TextInputDelegate.hpp>
#include <Geode/binding/IDNameBrowserDelegate.hpp>
#include <Geode/binding/DropdownListPopupOwner.hpp>
#include <Geode/mapping/CCPoint.hpp>
#include <Geode/mapping/unordered_map.hpp>
#include <Geode/mapping/vector.hpp>

class IDNameInput : public cocos2d::CCNode, public TextInputDelegate, public IDNameBrowserDelegate, public DropdownListPopupOwner {
public:
    static constexpr auto CLASS_NAME = "IDNameInput";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(IDNameInput, cocos2d::CCNode)

    /**
     * @note[short] MacOS (ARM): 0x7f8a44
     * @note[short] MacOS (Intel): 0x9132b0
     * @note[short] Windows: 0x3c72b0
     * @note[short] iOS: 0x4e6c60
     * @note[short] Android: Rebinded
     */
    virtual  ~IDNameInput();

    /**
     * @note[short] Windows: 0x3c78c0
     * @note[short] Android
     */
    static IDNameInput* create(FLAlertLayer* parent, TextInputDelegate* delegate, int idType, int property, std::string const& label, cocos2d::CCPoint position, float scale, int maxDigits, int group, int page, bool horizontal);

    /**
     * @note[short] MacOS (ARM): 0x7fa310
     * @note[short] MacOS (Intel): 0x914d90
     * @note[short] Windows: 0x3c9640
     * @note[short] iOS: 0x4e7f44
     * @note[short] Android
     */
    virtual void idNameBrowserClosed(IDNameBrowserPopup* p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x7fb3e8
     * @note[short] MacOS (Intel): 0x916040
     * @note[short] Windows: 0x3cabe0
     * @note[short] iOS: 0x4e89d0
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* p0);

    /**
     * @note[short] MacOS (ARM): 0x7fb75c
     * @note[short] MacOS (Intel): 0x916330
     * @note[short] Windows: 0x3cafc0
     * @note[short] iOS: 0x4e8bec
     * @note[short] Android
     */
    virtual void textInputOpened(CCTextInputNode* p0);

    /**
     * @note[short] MacOS (ARM): 0x7fb530
     * @note[short] MacOS (Intel): 0x916180
     * @note[short] Windows: 0x3cada0
     * @note[short] iOS: 0x4e8ab8
     * @note[short] Android
     */
    virtual void textInputClosed(CCTextInputNode* p0);

    /**
     * @note[short] MacOS (ARM): 0x7fb78c
     * @note[short] MacOS (Intel): 0x916370
     * @note[short] Windows: 0x3cafe0
     * @note[short] iOS: 0x4e8c1c
     * @note[short] Android
     */
    virtual void textInputShouldOffset(CCTextInputNode* p0, float p1);

    /**
     * @note[short] MacOS (ARM): 0x7fb7bc
     * @note[short] MacOS (Intel): 0x9163b0
     * @note[short] Windows: 0x3cb000
     * @note[short] iOS: 0x4e8c4c
     * @note[short] Android
     */
    virtual void textInputReturn(CCTextInputNode* p0);

    /**
     * @note[short] MacOS (ARM): 0x7fb7ec
     * @note[short] MacOS (Intel): 0x9163f0
     * @note[short] Windows: 0x3cb020
     * @note[short] iOS: 0x4e8c7c
     * @note[short] Android
     */
    virtual bool allowTextInput(CCTextInputNode* p0);

    /**
     * @note[short] MacOS (ARM): 0x7fb824
     * @note[short] MacOS (Intel): 0x916430
     * @note[short] Windows: 0x3cb040
     * @note[short] iOS: 0x4e8cb4
     * @note[short] Android
     */
    virtual void enterPressed(CCTextInputNode* p0);

    /**
     * @note[short] MacOS (ARM): 0x7fb854
     * @note[short] MacOS (Intel): 0x916470
     * @note[short] Windows: 0x3cb140
     * @note[short] iOS: 0x4e8ce4
     * @note[short] Android
     */
    virtual void dropdownListPopupClosed(DropdownListPopup* p0);

    /**
     * @note[short] Windows: 0x3c9f00
     * @note[short] Android
     */
    void collectMatches(std::string const& p0, std::vector<DropdownListRow>& p1);

    /**
     * @note[short] Windows: 0x3c96d0
     * @note[short] Android
     */
    void commitID(int p0);

    /**
     * @note[short] Windows: 0x3ca930
     * @note[short] Android
     */
    bool commitTypedName();

    /**
     * @note[short] Android
     */
    TodoReturn dismissAutocomplete();

    /**
     * @note[short] Android
     */
    TodoReturn idNameTypeForItemValueType(int p0);

    /**
     * @note[short] Windows: 0x3c7ab0
     * @note[short] Android
     */
    bool initCore(FLAlertLayer* p0, TextInputDelegate* p1, int p2, int p3, std::string const& p4, cocos2d::CCPoint p5, float p6, int p7, int p8, int p9, bool p10);

    /**
     * @note[short] Windows: 0x3c7400
     * @note[short] Android
     */
    static bool nameLess(std::string const& p0, int p1, std::string const& p2, int p3);

    /**
     * @note[short] Windows: 0x3c8ad0
     * @note[short] Android
     */
    void onArrowLeft(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x3c8ae0
     * @note[short] Android
     */
    void onArrowRight(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x3cb060
     * @note[short] Android
     */
    void onAutocompleteRow(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x3c8af0
     * @note[short] Android
     */
    void onBrowser(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x3c8dd0
     * @note[short] Android
     */
    void onNextFree(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x3c9770
     * @note[short] Android
     */
    void refreshLabel();

    /**
     * @note[short] Android
     */
    TodoReturn revertToLastID();

    /**
     * @note[short] Windows: 0x3c8900
     * @note[short] Android
     */
    void setType(int p0);

    /**
     * @note[short] Windows: 0x3c8980
     * @note[short] Android
     */
    void stepArrow(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn textIsPureInt(std::string const& p0);

    /**
     * @note[short] Windows: 0x3c9b50
     * @note[short] Android
     */
    void updateAutocomplete();

    /**
     * @note[short] Windows: 0x3c7590
     * @note[short] Android
     */
    static std::unordered_map<int, int> useRank(int p0);

    /**
     * @note[short] Windows: 0x3c7770
     * @note[short] Android
     */
    static bool useRankLess(std::unordered_map<int, int> const& p0, int p1, int p2);
    SetupTriggerPopup* m_triggerPopup;
    cocos2d::CCMenu* m_buttonMenu;
    cocos2d::CCLayer* m_mainLayer;
    TextInputDelegate* m_delegate;
    int m_idType;
    int m_property;
    CCTextInputNode* m_textInput;
    cocos2d::CCLabelBMFont* m_groupName;
    cocos2d::CCLabelBMFont* m_groupNameShadow;
    CCMenuItemSpriteExtra* m_searchButton;
    CCMenuItemSpriteExtra* m_nextButton;
    CCMenuItemSpriteExtra* m_leftButton;
    CCMenuItemSpriteExtra* m_rightButton;
    DropdownListPopup* m_autocompletePopup;
    cocos2d::CCPoint m_position;
    float m_width;
    float m_scale;
    std::string m_latestInput;
    cocos2d::CCLabelBMFont* m_label;
    cocos2d::extension::CCScale9Sprite* m_background;
    int m_group;
    int m_page;
    bool m_horizontal;
};
