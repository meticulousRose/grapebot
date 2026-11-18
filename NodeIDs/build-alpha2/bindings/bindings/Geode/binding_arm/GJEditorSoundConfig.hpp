#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCNode.hpp>

class GJEditorSoundConfig : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "GJEditorSoundConfig";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJEditorSoundConfig, cocos2d::CCNode)

    /**
     * @note[short] Windows: 0x360130
     * @note[short] iOS: 0x4decb8
     * @note[short] Android: Rebinded
     */
    virtual  ~GJEditorSoundConfig();

    /**
     * @note[short] MacOS (ARM): 0x7ed6d4
     * @note[short] MacOS (Intel): 0x906950
     * @note[short] Windows: 0x3601b0
     * @note[short] iOS: 0x4ddd24
     * @note[short] Android
     */
    static GJEditorSoundConfig* create();

    /**
     * @note[short] MacOS (ARM): 0x7ed790
     * @note[short] MacOS (Intel): 0x906a30
     * @note[short] Windows: 0x360310
     * @note[short] iOS: 0x4dddd4
     * @note[short] Android
     */
    static GJEditorSoundConfig* create(cocos2d::CCDictionary* dict);

    /**
     * @note[short] MacOS (ARM): 0x7edff8
     * @note[short] MacOS (Intel): 0x907300
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x4de328
     * @note[short] Android
     */
    static GJEditorSoundConfig* createWithCoder(DS_Dictionary* dict);

    /**
     * @note[short] MacOS (ARM): 0x7ee990
     * @note[short] MacOS (Intel): 0x907d10
     * @note[short] Windows: 0x3618e0
     * @note[short] iOS: 0x4deae4
     * @note[short] Android
     */
    virtual void encodeWithCoder(DS_Dictionary* dict);

    /**
     * @note[short] MacOS (ARM): 0x7ed78c
     * @note[short] MacOS (Intel): 0x906a20
     * @note[short] Windows: 0x8b060
     * @note[short] iOS: 0x4dddd0
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] Android
     */
    TodoReturn clearServerState();

    /**
     * @note[short] Windows: 0x361750
     * @note[short] Android
     */
    void copyServerFields(GJEditorSoundConfig* p0);

    /**
     * @note[short] MacOS (ARM): 0x7ee0c0
     * @note[short] MacOS (Intel): 0x9073e0
     * @note[short] Windows: 0x360ee0
     * @note[short] iOS: 0x4de360
     * @note[short] Android
     */
    void dataLoaded(DS_Dictionary* dict);

    /**
     * @note[short] Android
     */
    TodoReturn getUnpackedSoundDesc() const ;

    /**
     * @note[short] Windows: 0x361180
     * @note[short] Android
     */
    TodoReturn showSoundInfo();
    int m_soundID;
    int m_localID;
    bool m_autoUpdate;
    int m_version;
    int m_localVersion;
    int m_originalID;
    int m_accountID;
    int m_downloads;
    int m_likes;
    int m_actionCount;
    int m_soundCount;
    int m_visibility;
    int m_uploadDate;
    int m_updateDate;
    bool m_featured;
    std::string m_name;
    std::string m_description;
    std::string m_emote;
    std::string m_userName;
    std::string m_data;
    bool m_hasData;
    bool m_liked;
};
