#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCNode.hpp>
#include <Geode/mapping/vector.hpp>

class GJBigSprite : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "GJBigSprite";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJBigSprite, cocos2d::CCNode)

    /**
     * @note[short] MacOS (ARM): 0x1fb598
     * @note[short] MacOS (Intel): 0x252680
     * @note[short] Android
     */
    static GJBigSprite* create();

    /**
     * @note[short] MacOS (ARM): 0x1fcb64
     * @note[short] MacOS (Intel): 0x253e30
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x1fd004
     * @note[short] MacOS (Intel): 0x2543c0
     * @note[short] Android
     */
    void finishedLoadingSpriteAsync(cocos2d::CCObject* obj);

    /**
     * @note[short] MacOS (ARM): 0x1fcf74
     * @note[short] MacOS (Intel): 0x254340
     * @note[short] Android
     */
    void loadSpriteAsync(std::string filename, int index);

    /**
     * @note[short] MacOS (ARM): 0x1fc024
     * @note[short] MacOS (Intel): 0x253190
     * @note[short] Android
     */
    void unloadAll();

    /**
     * @note[short] MacOS (ARM): 0x1fcf0c
     * @note[short] MacOS (Intel): 0x2542e0
     * @note[short] Android
     */
    void unloadSprite(std::string filename, int index);

    /**
     * @note[short] MacOS (ARM): 0x1fb628
     * @note[short] MacOS (Intel): 0x252700
     * @note[short] Android
     */
    void updateSpriteVisibility();
    std::vector<bool> m_spritesLoaded;
    cocos2d::CCArray* m_spriteNodes;
    float m_scaleX;
    float m_scaleY;
    bool m_loadSprites;
    bool m_unloadingAll;
};
