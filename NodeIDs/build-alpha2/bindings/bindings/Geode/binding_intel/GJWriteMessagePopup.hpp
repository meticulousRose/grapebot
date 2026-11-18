#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>
#include <Geode/binding/UploadMessageDelegate.hpp>
#include <Geode/binding/UploadPopupDelegate.hpp>
#include <Geode/binding/FLAlertLayerProtocol.hpp>

class GJWriteMessagePopup : public FLAlertLayer, public UploadMessageDelegate, public UploadPopupDelegate, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "GJWriteMessagePopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GJWriteMessagePopup, FLAlertLayer)

    /**
     * @note[short] Android
     */
    static GJWriteMessagePopup* create(int accountID, int messageID);

    /**
     * @note[short] MacOS (ARM): 0x23a7bc
     * @note[short] MacOS (Intel): 0x296b00
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x23a7a8
     * @note[short] MacOS (Intel): 0x296ad0
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x23a810
     * @note[short] MacOS (Intel): 0x296b80
     * @note[short] Android
     */
    virtual void textInputOpened(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x23a7f4
     * @note[short] MacOS (Intel): 0x296b40
     * @note[short] Android
     */
    virtual void textInputClosed(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x23a818
     * @note[short] MacOS (Intel): 0x296ba0
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x23ae90
     * @note[short] MacOS (Intel): 0x297250
     * @note[short] Android
     */
    virtual void uploadMessageFinished(int accountID);

    /**
     * @note[short] MacOS (ARM): 0x23af70
     * @note[short] MacOS (Intel): 0x297310
     * @note[short] Android
     */
    virtual void uploadMessageFailed(int accountID);

    /**
     * @note[short] MacOS (ARM): 0x23b0b0
     * @note[short] MacOS (Intel): 0x297440
     * @note[short] Android
     */
    virtual void onClosePopup(UploadActionPopup* popup);

    /**
     * @note[short] MacOS (ARM): 0x23b244
     * @note[short] MacOS (Intel): 0x297590
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* layer, bool btn2);

    /**
     * @note[short] MacOS (ARM): 0x23a5e8
     * @note[short] MacOS (Intel): 0x296900
     * @note[short] Android
     */
    void closeMessagePopup(bool fullExit);

    /**
     * @note[short] MacOS (ARM): 0x239318
     * @note[short] MacOS (Intel): 0x2954f0
     * @note[short] Android
     */
    bool init(int accountID, int messageID);

    /**
     * @note[short] MacOS (ARM): 0x23a4f4
     * @note[short] MacOS (Intel): 0x296810
     * @note[short] Android
     */
    void onClearBody(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x23a0dc
     * @note[short] MacOS (Intel): 0x2963c0
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x23a0e4
     * @note[short] MacOS (Intel): 0x2963d0
     * @note[short] Android
     */
    void onSend(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x23a458
     * @note[short] MacOS (Intel): 0x296790
     * @note[short] Android
     */
    void updateBody(std::string body);

    /**
     * @note[short] MacOS (ARM): 0x23ad6c
     * @note[short] MacOS (Intel): 0x297130
     * @note[short] Android
     */
    void updateCharCountLabel(int type);

    /**
     * @note[short] MacOS (ARM): 0x23a3bc
     * @note[short] MacOS (Intel): 0x296710
     * @note[short] Android
     */
    void updateSubject(std::string subject);

    /**
     * @note[short] MacOS (ARM): 0x23ab00
     * @note[short] MacOS (Intel): 0x296eb0
     * @note[short] Android
     */
    void updateText(std::string text, int type);
    int m_unk298;
    int m_messageID;
    int m_accountID;
    CCTextInputNode* m_messageInput;
    CCTextInputNode* m_subjectInput;
    std::string m_messageText;
    std::string m_subjectText;
    cocos2d::CCLabelBMFont* m_messageCountLabel;
    cocos2d::CCLabelBMFont* m_subjectCountLabel;
    UploadActionPopup* m_uploadPopup;
    bool m_uploadSuccess;
};
