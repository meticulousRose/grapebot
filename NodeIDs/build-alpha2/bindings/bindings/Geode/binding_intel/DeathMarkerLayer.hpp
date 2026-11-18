#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCNode.hpp>
#include <Geode/mapping/CCPoint.hpp>
#include <Geode/mapping/ccTypes.hpp>
#include <Geode/mapping/vector.hpp>

class DeathMarkerLayer : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "DeathMarkerLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(DeathMarkerLayer, cocos2d::CCNode)

    /**
     * @note[short] Windows: 0x114d80
     * @note[short] iOS: 0x4b1004
     * @note[short] Android: Rebinded
     */
    virtual  ~DeathMarkerLayer();

    /**
     * @note[short] Android
     */
    static DeathMarkerLayer* create(std::vector<int> const& p0, cocos2d::ccColor3B p1, bool p2, bool p3, cocos2d::CCRect const& p4, int p5, int p6, float p7, float p8, float p9, int p10, int p11, cocos2d::CCNode* p12, bool p13, bool p14);

    /**
     * @note[short] Windows: 0x114ee0
     * @note[short] Android
     */
    bool init(std::vector<int> const& p0, cocos2d::ccColor3B p1, bool p2, bool p3, cocos2d::CCRect const& p4, int p5, int p6, float p7, float p8, float p9, int p10, int p11, cocos2d::CCNode* p12, bool p13, bool p14);

    /**
     * @note[short] Windows: 0x1180b0
     * @note[short] Android
     */
    void mountSection(unsigned int p0);

    /**
     * @note[short] Windows: 0x118fb0
     * @note[short] Android
     */
    void playMarkerSound();

    /**
     * @note[short] Windows: 0x119050
     * @note[short] Android
     */
    void playPendingLabelSound();

    /**
     * @note[short] Windows: 0x118fe0
     * @note[short] Android
     */
    void queueDeathLabelSound(int p0);

    /**
     * @note[short] Windows: 0x118570
     * @note[short] Android
     */
    void resolveBadgeCollisions();

    /**
     * @note[short] Android
     */
    void setLabelsVisible(bool p0);

    /**
     * @note[short] Windows: 0x119080
     * @note[short] Android
     */
    void tickDeathCountLabel();

    /**
     * @note[short] Windows: 0x114a40
     * @note[short] Android
     */
    static float timescale();

    /**
     * @note[short] Windows: 0x118b90
     * @note[short] Android
     */
    void unmountSection(unsigned int p0);

    /**
     * @note[short] Windows: 0x118ce0
     * @note[short] Android
     */
    void updateVisibility(cocos2d::CCRect const& p0);

    /**
     * @note[short] Windows: 0x119180
     * @note[short] Android
     */
    void setFlipped(bool p0);
};
