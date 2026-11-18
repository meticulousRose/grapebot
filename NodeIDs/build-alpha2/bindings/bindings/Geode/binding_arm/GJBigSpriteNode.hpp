#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCNode.hpp>
#include <Geode/mapping/CCPoint.hpp>

class GJBigSpriteNode : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "GJBigSpriteNode";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJBigSpriteNode, cocos2d::CCNode)

    /**
     * @note[short] MacOS (ARM): 0x1fca98
     * @note[short] MacOS (Intel): 0x253d50
     * @note[short] Android
     */
    static GJBigSpriteNode* create();

    /**
     * @note[short] MacOS (ARM): 0x1fcb60
     * @note[short] MacOS (Intel): 0x253e20
     * @note[short] Android
     */
    virtual bool init();
    std::string m_spriteName;
    cocos2d::CCSprite* m_sprite;
    cocos2d::CCRect m_spriteRect;
    bool m_spriteVisible;
};
