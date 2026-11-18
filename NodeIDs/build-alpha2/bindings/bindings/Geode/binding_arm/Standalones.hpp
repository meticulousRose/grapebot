#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCPoint.hpp>

    /**
     * @note[short] MacOS (ARM): 0x53fa94
     * @note[short] MacOS (Intel): 0x5f8940
     * @note[short] Windows: 0x530fb0
     * @note[short] iOS: 0x1a0458
     * @note[short] Android
     */
    void deserializeCheckpoint(CheckpointObject* checkpoint, std::string const& str, GJBaseGameLayer* layer);

    /**
     * @note[short] Windows: 0x7ebc0
     * @note[short] iOS: 0x4dc188
     */
    void ensureEmotesAreLoaded();

    /**
     * @note[short] Windows: 0x1a1a50
     * @note[short] Android
     */
    bool isSpecialSnapObject(int id);

    /**
     * @note[short] MacOS (ARM): 0x548e74
     * @note[short] MacOS (Intel): 0x603db0
     * @note[short] Windows: 0x19f3e0
     * @note[short] Android
     */
    cocos2d::CCPoint offsetForKey(int id);

    /**
     * @note[short] MacOS (ARM): 0x53f178
     * @note[short] MacOS (Intel): 0x5f7d30
     * @note[short] Windows: 0x5302f0
     * @note[short] iOS: 0x19ff9c
     * @note[short] Android
     */
    std::string serializeCheckpoint(CheckpointObject* checkpoint);
