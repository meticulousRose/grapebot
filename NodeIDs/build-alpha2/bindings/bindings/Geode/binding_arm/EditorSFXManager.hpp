#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/map.hpp>
#include <Geode/mapping/unordered_map.hpp>
#include <Geode/mapping/vector.hpp>

class EditorSFXManager {
public:
    static constexpr auto CLASS_NAME = "EditorSFXManager";

    /**
     * @note[short] Windows: 0x185f20
     * @note[short] Android
     */
    static const char* actionToString(int action);

    /**
     * @note[short] Windows: 0x186460
     * @note[short] Android
     */
    static std::vector<int> allActions();

    /**
     * @note[short] MacOS (ARM): 0x7cf5c4
     * @note[short] MacOS (Intel): 0x8e3c70
     * @note[short] Windows: 0x185e70
     * @note[short] iOS: 0x4c8594
     * @note[short] Android
     */
    static SFXTriggerGameObject* createNewSound(int soundId);

    /**
     * @note[short] MacOS (ARM): 0x7cd268
     * @note[short] MacOS (Intel): 0x8e0df0
     * @note[short] Windows: 0x185140
     * @note[short] iOS: 0x4c7450
     * @note[short] Android
     */
    static EditorSFXManager* sharedState();

    /**
     * @note[short] Android
     */
    static std::vector<std::pair<int, std::vector<int>>> summarizeBlob(std::string const& blob);

    /**
     * @note[short] Android
     */
    void addFavoriteConfig(GJEditorSoundConfig* config);

    /**
     * @note[short] MacOS (ARM): 0x7cf0b8
     * @note[short] Android
     */
    void addSound(int bindingId, SFXTriggerGameObject* sound);

    /**
     * @note[short] Android
     */
    bool applyConfigDirect(GJEditorSoundConfig* config, bool merge, std::string* errMsg);

    /**
     * @note[short] Android
     */
    bool applyFavoriteConfig(int favoriteId, bool merge, std::string* errMsg);

    /**
     * @note[short] Windows: 0x18bf10
     * @note[short] Android
     */
    bool applyMyConfig(int localId, bool merge, std::string* errMsg);

    /**
     * @note[short] Android
     */
    void attachUploadedSoundID(int localId, int uploadedServerId);

    /**
     * @note[short] Android
     */
    void clearAction(int actionId);

    /**
     * @note[short] Android
     */
    void clearActionMinInterval(int actionId);

    /**
     * @note[short] MacOS (ARM): 0x7cd4fc
     * @note[short] MacOS (Intel): 0x8e1150
     * @note[short] Windows: 0x185d90
     * @note[short] iOS: 0x4c7520
     * @note[short] Android
     */
    void clearAll();

    /**
     * @note[short] Windows: 0x18c030
     * @note[short] Android
     */
    std::vector<int> collectAllSFXIDs();

    /**
     * @note[short] MacOS (Intel): 0x8ed940
     * @note[short] Windows: 0x18bb70
     * @note[short] Android
     */
    GJEditorSoundConfig* copyFavoriteToMyConfig(GJEditorSoundConfig* config);

    /**
     * @note[short] MacOS (Intel): 0x8ed640
     * @note[short] Windows: 0x18b8f0
     * @note[short] Android
     */
    GJEditorSoundConfig* createMyConfigFromLive(std::string const& name);

    /**
     * @note[short] MacOS (ARM): 0x7d5c50
     * @note[short] MacOS (Intel): 0x8ec7b0
     * @note[short] Windows: 0x18af20
     * @note[short] iOS: 0x4ca6ac
     * @note[short] Android
     */
    void dataLoaded(DS_Dictionary* dict);

    /**
     * @note[short] MacOS (ARM): 0x7d3fb4
     * @note[short] MacOS (Intel): 0x8ea380
     * @note[short] Windows: 0x1882a0
     * @note[short] iOS: 0x4c92e4
     * @note[short] Android
     */
    SFXTriggerGameObject* decodeSound(std::string const& str);

    /**
     * @note[short] MacOS (ARM): 0x7cd7bc
     * @note[short] MacOS (Intel): 0x8e14b0
     * @note[short] Windows: 0x188d90
     * @note[short] iOS: 0x4c7680
     * @note[short] Android
     */
    bool deserializeAll(std::string const& str, bool destructive);

    /**
     * @note[short] Windows: 0x18c130
     * @note[short] Android
     */
    void downloadAllMissing();

    /**
     * @note[short] MacOS (ARM): 0x7d5888
     * @note[short] MacOS (Intel): 0x8ec380
     * @note[short] Windows: 0x18ab70
     * @note[short] iOS: 0x4ca428
     * @note[short] Android
     */
    void encodeDataTo(DS_Dictionary* dict);

    /**
     * @note[short] Windows: 0x1873b0
     * @note[short] Android
     */
    std::string encodeSound(SFXTriggerGameObject* sound);

    /**
     * @note[short] MacOS (ARM): 0x7cd728
     * @note[short] MacOS (Intel): 0x8e1420
     * @note[short] Windows: 0x1852f0
     * @note[short] iOS: 0x4c75f8
     * @note[short] Android
     */
    void ensureLoaded();

    /**
     * @note[short] Windows: 0x1853d0
     * @note[short] Android
     */
    EditorSFXBinding* findBinding(int bindingId);

    /**
     * @note[short] MacOS (ARM): 0x7cd640
     * @note[short] MacOS (Intel): 0x8e1300
     * @note[short] iOS: 0x4c7580
     * @note[short] Android
     */
    void firstSetup();

    /**
     * @note[short] Android
     */
    float getActionMinInterval(int actionId) const ;

    /**
     * @note[short] Android
     */
    float getActionMinIntervalOverride(int actionId) const ;

    /**
     * @note[short] MacOS (Intel): 0x8eb2e0
     * @note[short] Windows: 0x189b70
     * @note[short] Android
     */
    std::string getCustomSFXRawPath(int sfxId, int customSfxId);

    /**
     * @note[short] Android
     */
    GJEditorSoundConfig* getFavoriteConfig(int favoriteId);

    /**
     * @note[short] Android
     */
    cocos2d::CCArray* getFavoriteConfigs();

    /**
     * @note[short] Windows: 0x18b7f0
     * @note[short] Android
     */
    GJEditorSoundConfig* getMyConfig(int localId);

    /**
     * @note[short] Windows: 0x18b870
     * @note[short] Android
     */
    GJEditorSoundConfig* getMyConfigForSoundID(int favoriteId);

    /**
     * @note[short] Android
     */
    cocos2d::CCArray* getMyConfigs();

    /**
     * @note[short] Windows: 0x185470
     * @note[short] Android
     */
    EditorSFXBinding* getOrCreateBinding(int bindingId);

    /**
     * @note[short] Android
     */
    int getPlayMode(int actionId);

    /**
     * @note[short] MacOS (ARM): 0x7ce538
     * @note[short] MacOS (Intel): 0x8e2640
     * @note[short] Windows: 0x185a50
     * @note[short] iOS: 0x4c7fc8
     * @note[short] Android
     */
    bool hasSoundsForAction(int actionId) const ;

    /**
     * @note[short] MacOS (ARM): 0x7d6210
     * @note[short] MacOS (Intel): 0x8ecdd0
     * @note[short] Windows: 0x18b3d0
     * @note[short] iOS: 0x4caae8
     * @note[short] Android
     */
    bool importFromString(std::string const& str, EditorSFXImportOptions const& options, std::string* errMsg);

    /**
     * @note[short] MacOS (ARM): 0x7cd37c
     * @note[short] MacOS (Intel): 0x8e0f60
     * @note[short] iOS: 0x4c74d8
     * @note[short] Android
     */
    bool init();

    /**
     * @note[short] Windows: 0x18bd70
     * @note[short] Android
     */
    bool overwriteMyConfigFromLive(int localId, std::string* errMsg);

    /**
     * @note[short] MacOS (ARM): 0x7ce64c
     * @note[short] MacOS (Intel): 0x8e27a0
     * @note[short] Windows: 0x1855c0
     * @note[short] iOS: 0x4c8014
     * @note[short] Android
     */
    void playAction(int actionId);

    /**
     * @note[short] MacOS (ARM): 0x7ce4fc
     * @note[short] MacOS (Intel): 0x8e2600
     * @note[short] iOS: 0x4c7f8c
     * @note[short] Android
     */
    void playAction(int primaryId, int fallbackId);

    /**
     * @note[short] MacOS (ARM): 0x7ce494
     * @note[short] MacOS (Intel): 0x8e25a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x4c7f34
     * @note[short] Android
     */
    void releaseBinding(EditorSFXBinding* binding);

    /**
     * @note[short] Windows: 0x18b750
     * @note[short] Android
     */
    void removeFavoriteConfig(int favoriteId);

    /**
     * @note[short] Android
     */
    void removeMyConfig(int localId);

    /**
     * @note[short] MacOS (ARM): 0x7cf0e8
     * @note[short] Windows: 0x185b10
     * @note[short] Android
     */
    void removeSoundAt(int bindingId, int index);

    /**
     * @note[short] MacOS (Intel): 0x8ea940
     * @note[short] Windows: 0x188850
     * @note[short] Android
     */
    std::string serializeAll();

    /**
     * @note[short] MacOS (Intel): 0x8ecd60
     * @note[short] Android
     */
    std::string serializeCompressed();

    /**
     * @note[short] Android
     */
    void setActionMinInterval(int actionId, float interval);

    /**
     * @note[short] iOS: 0x4c8564
     * @note[short] Android
     */
    void setEditorLoading(bool isLoading);

    /**
     * @note[short] Android
     */
    void setGlobalVolume(float volume);

    /**
     * @note[short] Android
     */
    void setPlayMode(int actionId, int playMode);

    /**
     * @note[short] Android
     */
    int soundCountForAction(int actionId);

    /**
     * @note[short] MacOS (Intel): 0x8e3140
     * @note[short] Android
     */
    cocos2d::CCArray* soundsForAction(int actionId);
    std::unordered_map<int, EditorSFXBinding*> m_editorSFXBindings;
    std::unordered_map<int, double> m_playTimestamps;
    std::unordered_map<int, float> m_intervals;
    std::map<std::pair<int, int>, std::string> m_customSFXMappings;
    cocos2d::CCArray* m_favoriteConfigs;
    cocos2d::CCArray* m_myConfigs;
    int m_nextLocalID;
    std::string m_pendingDeserializeState;
    float m_globalVolume;
    bool m_editorLoading;
};
