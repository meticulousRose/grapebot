#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCLayer.hpp>
#include <Geode/binding/GJMPDelegate.hpp>
#include <Geode/binding/UploadPopupDelegate.hpp>
#include <Geode/binding/UploadActionDelegate.hpp>
#include <Geode/binding/FLAlertLayerProtocol.hpp>
#include <Geode/binding/TextInputDelegate.hpp>
#include <Geode/mapping/enumKeyCodes.hpp>

class MPLobbyLayer : public cocos2d::CCLayer, public GJMPDelegate, public UploadPopupDelegate, public UploadActionDelegate, public FLAlertLayerProtocol, public TextInputDelegate {
public:
    static constexpr auto CLASS_NAME = "MPLobbyLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(MPLobbyLayer, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): 0x3f4020
     * @note[short] MacOS (Intel): 0x29f040
     * @note[short] Android
     */
    static MPLobbyLayer* create(int type);

    /**
     * @note[short] MacOS (ARM): 0x3f3f30
     * @note[short] Android
     */
    static cocos2d::CCScene* scene(int type);

    /**
     * @note[short] MacOS (ARM): 0x3f44a0
     * @note[short] MacOS (Intel): 0x48af60
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x3f4bc4
     * @note[short] MacOS (Intel): 0x48b760
     * @note[short] Android
     */
    virtual void keyDown(cocos2d::enumKeyCodes key, double timestamp);

    /**
     * @note[short] MacOS (ARM): 0x3f4600
     * @note[short] MacOS (Intel): 0x48b0e0
     * @note[short] Android
     */
    virtual void joinLobbyFinished(int id);

    /**
     * @note[short] MacOS (ARM): 0x3f4a08
     * @note[short] MacOS (Intel): 0x48b590
     * @note[short] Android
     */
    virtual void joinLobbyFailed(int id, GJMPErrorCode errorType);

    /**
     * @note[short] MacOS (ARM): 0x3f4900
     * @note[short] MacOS (Intel): 0x48b440
     * @note[short] Android
     */
    virtual void updateComments();

    /**
     * @note[short] MacOS (ARM): 0x3f49f0
     * @note[short] MacOS (Intel): 0x48b570
     * @note[short] Android
     */
    virtual void didUploadMPComment(int id);

    /**
     * @note[short] MacOS (ARM): 0x3f4b1c
     * @note[short] MacOS (Intel): 0x48b690
     * @note[short] Android
     */
    virtual void textInputOpened(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x3f4b24
     * @note[short] MacOS (Intel): 0x48b6b0
     * @note[short] Android
     */
    virtual void textInputClosed(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x3f4b2c
     * @note[short] MacOS (Intel): 0x48b6d0
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x3f4be8
     * @note[short] MacOS (Intel): 0x48b7a0
     * @note[short] Android
     */
    virtual void keyUp(cocos2d::enumKeyCodes key, double timestamp);

    /**
     * @note[short] MacOS (ARM): 0x3f4b34
     * @note[short] MacOS (Intel): 0x48b6f0
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* layer, bool btn2);

    /**
     * @note[short] MacOS (ARM): 0x3f4bf0
     * @note[short] MacOS (Intel): 0x48b7c0
     * @note[short] Android
     */
    virtual void uploadActionFinished(int id, int response);

    /**
     * @note[short] MacOS (ARM): 0x3f4e18
     * @note[short] MacOS (Intel): 0x48b9e0
     * @note[short] Android
     */
    virtual void uploadActionFailed(int id, int response);

    /**
     * @note[short] MacOS (ARM): 0x3f4fd0
     * @note[short] MacOS (Intel): 0x48bb90
     * @note[short] Android
     */
    virtual void onClosePopup(UploadActionPopup* popup);

    /**
     * @note[short] MacOS (ARM): 0x3f40f8
     * @note[short] MacOS (Intel): 0x48abf0
     * @note[short] Android
     */
    bool init(int type);

    /**
     * @note[short] MacOS (ARM): 0x3f445c
     * @note[short] MacOS (Intel): 0x48af20
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3f4180
     * @note[short] MacOS (Intel): 0x48ac80
     * @note[short] Android
     */
    void onBtn1(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3f427c
     * @note[short] MacOS (Intel): 0x48ad80
     * @note[short] Android
     */
    void onBtn2(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3f4280
     * @note[short] MacOS (Intel): 0x48ad90
     * @note[short] Android
     */
    void onBtn3(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3f4284
     * @note[short] MacOS (Intel): 0x48ada0
     * @note[short] Android
     */
    void onComment(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3f4150
     * @note[short] MacOS (Intel): 0x48ac50
     * @note[short] Android
     */
    void onUpdateLobby();

    /**
     * @note[short] MacOS (ARM): 0x3f4378
     * @note[short] MacOS (Intel): 0x48ae40
     * @note[short] Android
     */
    void postComment();

    /**
     * @note[short] MacOS (ARM): 0x3f452c
     * @note[short] MacOS (Intel): 0x48aff0
     * @note[short] Android
     */
    void tryExitLobby();

    /**
     * @note[short] MacOS (ARM): 0x3f40fc
     * @note[short] MacOS (Intel): 0x48ac00
     * @note[short] Android
     */
    void updateLobby(float delay);
    int m_lobbyID;
    cocos2d::CCLabelBMFont* m_lobbyLabel;
    UploadActionPopup* m_uploadPopup;
    GJCommentListLayer* m_listLayer;
    CCTextInputNode* m_commentInput;
    float m_lobbyDelay;
    bool m_awaitingLobby;
    bool m_lobbyJoined;
};
