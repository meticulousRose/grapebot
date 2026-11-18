#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/GJDropDownLayer.hpp>

class GJMoreGamesLayer : public GJDropDownLayer {
public:
    static constexpr auto CLASS_NAME = "GJMoreGamesLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GJMoreGamesLayer, GJDropDownLayer)

    /**
     * @note[short] Android
     */
    static GJMoreGamesLayer* create();

    /**
     * @note[short] MacOS (ARM): 0x76bf20
     * @note[short] MacOS (Intel): 0x875ef0
     * @note[short] Android
     */
    virtual void customSetup();

    /**
     * @note[short] MacOS (ARM): 0x76bb90
     * @note[short] MacOS (Intel): 0x875b50
     * @note[short] Android
     */
    cocos2d::CCArray* getMoreGamesList();
    cocos2d::CCArray* m_moreGamesList;
};
