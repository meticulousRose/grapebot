#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCPoint.hpp>
#include <Geode/mapping/ccTypes.hpp>
#include <Geode/mapping/map.hpp>
#include <Geode/mapping/unordered_map.hpp>
#include <Geode/mapping/unordered_set.hpp>
#include <Geode/mapping/vector.hpp>

class WriteArchive {
public:
    static constexpr auto CLASS_NAME = "WriteArchive";

    /**
     * @note[short] Android
     */
    TodoReturn getString();

    /**
     * @note[short] Android
     */
    TodoReturn process(GameObject*& p0);

    /**
     * @note[short] Android
     */
    TodoReturn process(bool& p0);

    /**
     * @note[short] Windows: 0x5213d0
     * @note[short] Android
     */
    void process(cocos2d::CCPoint& p0);

    /**
     * @note[short] Windows: 0x5214e0
     * @note[short] Android
     */
    void process(cocos2d::ccColor3B& p0);

    /**
     * @note[short] Windows: 0x5215b0
     * @note[short] Android
     */
    void process(cocos2d::ccHSVValue& p0);

    /**
     * @note[short] Android
     */
    TodoReturn process(double& p0);

    /**
     * @note[short] Android
     */
    TodoReturn process(float& p0);

    /**
     * @note[short] Android
     */
    TodoReturn process(int& p0);

    /**
     * @note[short] Windows: 0x523280
     * @note[short] Android
     */
    void process(std::map<int, EnterEffectAnimValue>& p0);

    /**
     * @note[short] Windows: 0x522090
     * @note[short] Android
     */
    void process(std::map<int, bool>& p0);

    /**
     * @note[short] Windows: 0x522850
     * @note[short] Android
     */
    void process(std::map<std::pair<GJGameEvent, int>, int>& p0);

    /**
     * @note[short] Windows: 0x523e00
     * @note[short] Android
     */
    void process(std::map<std::pair<GJGameEvent, int>, std::vector<EventTriggerInstance>>& p0);

    /**
     * @note[short] Windows: 0x5253b0
     * @note[short] Android
     */
    void process(std::map<std::pair<int, int>, FMODSoundTween>& p0);

    /**
     * @note[short] Windows: 0x524a20
     * @note[short] Android
     */
    void process(std::map<std::pair<int, int>, SFXTriggerInstance>& p0);

    /**
     * @note[short] Windows: 0x522850
     * @note[short] Android
     */
    void process(std::map<std::pair<int, int>, int>& p0);

    /**
     * @note[short] Windows: 0x523b90
     * @note[short] Android
     */
    void process(std::unordered_map<int, EnhancedGameObject*>& p0);

    /**
     * @note[short] Windows: 0x525670
     * @note[short] Android
     */
    void process(std::unordered_map<int, FMODQueuedMusic>& p0);

    /**
     * @note[short] Windows: 0x525890
     * @note[short] Android
     */
    void process(std::unordered_map<int, FMODSoundState>& p0);

    /**
     * @note[short] Windows: 0x523750
     * @note[short] Android
     */
    void process(std::unordered_map<int, GJValueTween>& p0);

    /**
     * @note[short] Windows: 0x523970
     * @note[short] Android
     */
    void process(std::unordered_map<int, GameObjectPhysics>& p0);

    /**
     * @note[short] Windows: 0x526bf0
     * @note[short] Android
     */
    void process(std::unordered_map<int, OpacityEffectAction>& p0);

    /**
     * @note[short] Windows: 0x525ab0
     * @note[short] Android
     */
    void process(std::unordered_map<int, SequenceTriggerState>& p0);

    /**
     * @note[short] Windows: 0x524ce0
     * @note[short] Android
     */
    void process(std::unordered_map<int, SongChannelState>& p0);

    /**
     * @note[short] Windows: 0x527e00
     * @note[short] Android
     */
    void process(std::unordered_map<int, TimerItem>& p0);

    /**
     * @note[short] Windows: 0x5225c0
     * @note[short] Android
     */
    void process(std::unordered_map<int, bool>& p0);

    /**
     * @note[short] Windows: 0x522d60
     * @note[short] Android
     */
    void process(std::unordered_map<int, double>& p0);

    /**
     * @note[short] Windows: 0x522ff0
     * @note[short] Android
     */
    void process(std::unordered_map<int, float>& p0);

    /**
     * @note[short] Windows: 0x522360
     * @note[short] Android
     */
    void process(std::unordered_map<int, int>& p0);

    /**
     * @note[short] Windows: 0x525f90
     * @note[short] Android
     */
    void process(std::unordered_map<int, std::pair<double, double>>& p0);

    /**
     * @note[short] Windows: 0x526970
     * @note[short] Android
     */
    void process(std::unordered_map<int, std::vector<CountTriggerAction>>& p0);

    /**
     * @note[short] Windows: 0x524130
     * @note[short] Android
     */
    void process(std::unordered_map<int, std::vector<EnterEffectInstance>>& p0);

    /**
     * @note[short] Windows: 0x5266c0
     * @note[short] Android
     */
    void process(std::unordered_map<int, std::vector<PulseEffectAction>>& p0);

    /**
     * @note[short] Windows: 0x524f10
     * @note[short] Android
     */
    void process(std::unordered_map<int, std::vector<SongTriggerState>>& p0);

    /**
     * @note[short] Windows: 0x528020
     * @note[short] Android
     */
    void process(std::unordered_map<int, std::vector<TimerTriggerAction>>& p0);

    /**
     * @note[short] Windows: 0x522b40
     * @note[short] Android
     */
    void process(std::unordered_map<int, std::vector<int>>& p0);

    /**
     * @note[short] Windows: 0x521a10
     * @note[short] Android
     */
    void process(std::unordered_set<int>& p0);

    /**
     * @note[short] Windows: 0x524600
     * @note[short] Android
     */
    void process(std::vector<AdvancedFollowInstance>& p0);

    /**
     * @note[short] Windows: 0x526280
     * @note[short] Android
     */
    void process(std::vector<CAState>& p0);

    /**
     * @note[short] Windows: 0x527240
     * @note[short] Android
     */
    void process(std::vector<CollisionTriggerAction>& p0);

    /**
     * @note[short] Windows: 0x524800
     * @note[short] Android
     */
    void process(std::vector<DynamicObjectAction>& p0);

    /**
     * @note[short] Windows: 0x5243e0
     * @note[short] Android
     */
    void process(std::vector<EnterEffectInstance>& p0);

    /**
     * @note[short] Windows: 0x527be0
     * @note[short] Android
     */
    void process(std::vector<GroupCommandObject2>& p0);

    /**
     * @note[short] Windows: 0x5264a0
     * @note[short] Android
     */
    void process(std::vector<PulseEffectAction>& p0);

    /**
     * @note[short] Windows: 0x525190
     * @note[short] Android
     */
    void process(std::vector<SFXTriggerState>& p0);

    /**
     * @note[short] Windows: 0x5279c0
     * @note[short] Android
     */
    void process(std::vector<SpawnTriggerAction>& p0);

    /**
     * @note[short] Windows: 0x527650
     * @note[short] Android
     */
    void process(std::vector<ToggleTriggerAction>& p0);

    /**
     * @note[short] Windows: 0x526e10
     * @note[short] Android
     */
    void process(std::vector<TouchToggleAction>& p0);

    /**
     * @note[short] Windows: 0x521c20
     * @note[short] Android
     */
    void process(std::vector<float>& p0);

    /**
     * @note[short] Windows: 0x521e70
     * @note[short] Android
     */
    void process(std::vector<int>& p0);

    /**
     * @note[short] Windows: 0x5212b0
     * @note[short] Android
     */
    void process(uint64_t& p0);

    /**
     * @note[short] Android
     */
    TodoReturn process(unsigned int& p0);

    /**
     * @note[short] Windows: 0x5217b0
     * @note[short] Android
     */
    void processGOArr(cocos2d::CCArray*& p0);

    /**
     * @note[short] Android
     */
    TodoReturn processString(std::string& p0);
};
