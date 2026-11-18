#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCLayer.hpp>

class SecretGame01Layer : public cocos2d::CCLayer {
public:
    static constexpr auto CLASS_NAME = "SecretGame01Layer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(SecretGame01Layer, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): 0x3de88c
     * @note[short] MacOS (Intel): 0x4738c0
     * @note[short] Android
     */
    static SecretGame01Layer* create();

    /**
     * @note[short] MacOS (ARM): 0x3e0074
     * @note[short] MacOS (Intel): 0x475330
     * @note[short] Android
     */
    virtual void update(float dt);

    /**
     * @note[short] MacOS (ARM): 0x3df2c0
     * @note[short] MacOS (Intel): 0x4744f0
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x3dfe9c
     * @note[short] MacOS (Intel): 0x475170
     * @note[short] Android
     */
    void didSelectCorrectObject(CCMenuItemSpriteExtra* button);

    /**
     * @note[short] MacOS (ARM): 0x3df6ac
     * @note[short] MacOS (Intel): 0x4748a0
     * @note[short] Android
     */
    void gameStep01();

    /**
     * @note[short] MacOS (ARM): 0x3df91c
     * @note[short] MacOS (Intel): 0x474b70
     * @note[short] Android
     */
    void gameStep02();

    /**
     * @note[short] MacOS (ARM): 0x3df4a4
     * @note[short] MacOS (Intel): 0x4746e0
     * @note[short] Android
     */
    int getCountForDifficulty(int difficulty);

    /**
     * @note[short] MacOS (ARM): 0x3df4cc
     * @note[short] MacOS (Intel): 0x474710
     * @note[short] Android
     */
    std::string getFrameForDifficulty(int difficulty);

    /**
     * @note[short] MacOS (ARM): 0x3df480
     * @note[short] MacOS (Intel): 0x4746b0
     * @note[short] Android
     */
    int getRowsForDifficulty(int difficulty);

    /**
     * @note[short] MacOS (ARM): 0x3df5a0
     * @note[short] MacOS (Intel): 0x4747a0
     * @note[short] Android
     */
    int getTimeForDifficulty(int difficulty);

    /**
     * @note[short] MacOS (ARM): 0x3df5c4
     * @note[short] MacOS (Intel): 0x4747d0
     * @note[short] Android
     */
    void onSelectButton(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3de9ac
     * @note[short] MacOS (Intel): 0x473a10
     * @note[short] Android
     */
    void resetGame();

    /**
     * @note[short] MacOS (ARM): 0x3dfa64
     * @note[short] MacOS (Intel): 0x474cd0
     * @note[short] Android
     */
    void resetGameTimer();

    /**
     * @note[short] MacOS (ARM): 0x3dfadc
     * @note[short] MacOS (Intel): 0x474d60
     * @note[short] Android
     */
    void scaleOutGame(bool won);

    /**
     * @note[short] MacOS (ARM): 0x3dfad0
     * @note[short] MacOS (Intel): 0x474d40
     * @note[short] Android
     */
    void showGameOver();

    /**
     * @note[short] MacOS (ARM): 0x3dfe88
     * @note[short] MacOS (Intel): 0x379410
     * @note[short] Android
     */
    void showGameWon();
    cocos2d::CCArray* m_gameObjects;
    cocos2d::CCArray* m_requiredObjects;
    cocos2d::CCMenu* m_mainMenu;
    int m_selectedObject;
    int m_gameDifficulty;
    bool m_gameActive;
    float m_timeElapsed;
    float m_gameTime;
    cocos2d::CCSprite* m_timeBarSprite;
};
