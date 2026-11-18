#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/ReportPopupConfig.hpp>
#include <Geode/binding/SetupTriggerPopup.hpp>
#include <Geode/binding/FLAlertLayerProtocol.hpp>
#include <Geode/mapping/CCObject.hpp>
#include <Geode/mapping/ccTypes.hpp>
#include <Geode/mapping/vector.hpp>

class ReportPopup : public SetupTriggerPopup, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "ReportPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(ReportPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0xbe590
     * @note[short] iOS: 0x522d0c
     * @note[short] Android: Rebinded
     */
    virtual  ~ReportPopup();

    /**
     * @note[short] Windows: 0xbf0a0
     * @note[short] Android
     */
    static ReportPopup* create(ReportPopupConfig const& p0);

    /**
     * @note[short] MacOS (ARM): 0x8447ac
     * @note[short] MacOS (Intel): 0x967630
     * @note[short] Windows: 0xa6580
     * @note[short] iOS: 0x522178
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x844770
     * @note[short] MacOS (Intel): 0x967600
     * @note[short] Windows: 0x99f60
     * @note[short] iOS: 0x52213c
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x8444a4
     * @note[short] MacOS (Intel): 0x967450
     * @note[short] Windows: 0xc1e10
     * @note[short] iOS: 0x521fd0
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);

    /**
     * @note[short] Windows: 0xbec10
     * @note[short] Android
     */
    static void buildReasonRows(std::vector<int> const& p0, cocos2d::CCMenu* p1, cocos2d::CCNode* p2, cocos2d::CCObject* p3, cocos2d::SEL_MenuHandler p4, float p5, float p6, float p7, float p8, float p9, float p10, std::vector<CCMenuItemToggler*>& p11, int p12, float p13);

    /**
     * @note[short] Windows: 0xbea60
     * @note[short] Android
     */
    static cocos2d::ccColor3B contentTypeColor(int p0);

    /**
     * @note[short] Windows: 0xbe9c0
     * @note[short] Android
     */
    static char const* contentTypeName(int p0);

    /**
     * @note[short] Windows: 0xbfaf0
     * @note[short] Android
     */
    static ReportPopup* createForComment(GJComment* p0);

    /**
     * @note[short] Windows: 0xbffa0
     * @note[short] Android
     */
    static ReportPopup* createForFriendRequest(GJFriendRequest* p0);

    /**
     * @note[short] Windows: 0xbf4a0
     * @note[short] Android
     */
    static ReportPopup* createForLevel(GJGameLevel* p0);

    /**
     * @note[short] Windows: 0xbf6c0
     * @note[short] Android
     */
    static ReportPopup* createForList(GJLevelList* p0);

    /**
     * @note[short] Windows: 0xc02c0
     * @note[short] Android
     */
    static ReportPopup* createForMessage(GJUserMessage* p0);

    /**
     * @note[short] Windows: 0xbf8e0
     * @note[short] Android
     */
    static ReportPopup* createForSoundConfig(GJEditorSoundConfig* p0);

    /**
     * @note[short] Windows: 0xc05d0
     * @note[short] Android
     */
    static ReportPopup* createForThread(GJMessageThread* p0, GJThreadMessage* p1, std::string const& p2);

    /**
     * @note[short] Windows: 0xbf270
     * @note[short] Android
     */
    static ReportPopup* createForUser(GJUserScore* p0);

    /**
     * @note[short] Windows: 0xc07f0
     * @note[short] Android
     */
    bool init(ReportPopupConfig const& p0);

    /**
     * @note[short] Android
     */
    void onReasonToggle(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xc1460
     * @note[short] Android
     */
    void onSubmit(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xbef60
     * @note[short] Android
     */
    static std::vector<int> reasonIndicesForTextModeration();

    /**
     * @note[short] Windows: 0xbe7c0
     * @note[short] Android
     */
    static std::vector<int> reasonIndicesForType(int p0);

    /**
     * @note[short] Windows: 0xbf000
     * @note[short] Android
     */
    static std::vector<int> reasonIndicesForUploadModeration();

    /**
     * @note[short] Android
     */
    TodoReturn reasonLabel(int p0);

    /**
     * @note[short] Windows: 0xbe7a0
     * @note[short] Android
     */
    static char const* reasonShortLabel(int p0);

    /**
     * @note[short] Windows: 0xc13a0
     * @note[short] Android
     */
    std::vector<int> selectedReasons();

    /**
     * @note[short] Windows: 0xbeb80
     * @note[short] Android
     */
    static char const* surfaceName(int p0);
};
