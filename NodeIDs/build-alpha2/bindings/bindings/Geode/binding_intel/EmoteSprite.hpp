#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCSprite.hpp>
#include <Geode/mapping/ccTypes.hpp>
#include <Geode/mapping/vector.hpp>

class EmoteSprite : public cocos2d::CCSprite {
public:
    static constexpr auto CLASS_NAME = "EmoteSprite";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(EmoteSprite, cocos2d::CCSprite)

    /**
     * @note[short] MacOS (ARM): 0x8357c
     * @note[short] MacOS (Intel): 0x8e100
     * @note[short] Windows: 0x7e780
     * @note[short] iOS: 0x17c08
     * @note[short] Android: Rebinded
     */
    virtual  ~EmoteSprite();

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Rebinded
     */
     EmoteSprite();

    /**
     * @note[short] Windows: 0x7f0e0
     * @note[short] iOS: 0x4dc4fc
     * @note[short] Android
     */
    static EmoteSprite* createWithDef(EmoteDef const* p0);

    /**
     * @note[short] MacOS (ARM): 0x7eb598
     * @note[short] MacOS (Intel): 0x904590
     * @note[short] Windows: 0x7f1e0
     * @note[short] iOS: 0x4dc61c
     * @note[short] Android
     */
    static EmoteSprite* createWithName(std::string const& p0);

    /**
     * @note[short] Windows: 0x80140
     * @note[short] iOS: 0x4dcfb8
     * @note[short] Android
     */
    static void attachToLabel(cocos2d::CCLabelBMFont* label, cocos2d::CCNode* parent, std::vector<EmoteToken> const& tokens, float heightFactor);

    /**
     * @note[short] Windows: 0x7efa0
     * @note[short] iOS: 0x4dc380
     * @note[short] Android
     */
    static EmoteDef* defForName(std::string const& name);

    /**
     * @note[short] Windows: 0x7f330
     * @note[short] iOS: 0x4dc788
     * @note[short] Android
     */
    static std::string translateUnicodeEmoji(std::string const& text);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static float heightFactor();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static float jumboMaxAspect();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static float jumboMultiScale();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static float jumboScale();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static int maxEmotesComment();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static int maxEmotesMessage();

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x4dc4f4
     * @note[short] Android
     */
    static int defCount();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static EmoteDef* defAtIndex(int index);

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x4dcbdc
     * @note[short] Android
     */
    static int characterCount(std::string const& text);

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x4dcc2c
     * @note[short] Android
     */
    static int charIndexForByte(std::string const& str, int byteIndex);

    /**
     * @note[short] Windows: 0x7fc10
     * @note[short] iOS: 0x4dccac
     * @note[short] Android
     */
    static int effectiveLength(std::string const& text, int maxEmotes);

    /**
     * @note[short] Windows: 0x7f200
     * @note[short] iOS: 0x4dc63c
     * @note[short] Android
     */
    void fitToHeight(float height, float maxAspect);

    /**
     * @note[short] MacOS (ARM): 0x7eb6fc
     * @note[short] MacOS (Intel): 0x904710
     * @note[short] Windows: 0x3f5c0
     * @note[short] iOS: 0x4dc780
     * @note[short] Android
     */
    virtual void setColor(cocos2d::ccColor3B const& color);

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x4dc590
     * @note[short] Android
     */
    bool initWithDef(EmoteDef const* p0);

    /**
     * @note[short] Windows: 0x7f9b0
     * @note[short] iOS: 0x4dca3c
     * @note[short] Android
     */
    static int parseTokens(std::string const& p0, std::vector<EmoteToken>* p1, int p2);

    /**
     * @note[short] Windows: 0x7ffa0
     * @note[short] iOS: 0x4dcd5c
     * @note[short] Android
     */
    static std::string replaceTokens(std::string const& p0, std::vector<EmoteToken>& p1, float p2);
    EmoteDef const* m_emoteDef;
};
