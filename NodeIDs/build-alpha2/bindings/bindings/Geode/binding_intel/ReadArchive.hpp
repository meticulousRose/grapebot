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

class ReadArchive {
public:
    static constexpr auto CLASS_NAME = "ReadArchive";

    /**
     * @note[short] Android: Rebinded
     */
     ReadArchive(std::string const& p0, char const* p1, GJBaseGameLayer* p2);

    /**
     * @note[short] Windows: 0x528780
     * @note[short] Android
     */
    void process(GameObject*& p0);

    /**
     * @note[short] Android
     */
    TodoReturn process(bool& p0);

    /**
     * @note[short] Windows: 0x528430
     * @note[short] Android
     */
    void process(cocos2d::CCPoint& p0);

    /**
     * @note[short] Windows: 0x528500
     * @note[short] Android
     */
    void process(cocos2d::ccColor3B& p0);

    /**
     * @note[short] Windows: 0x528600
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
     * @note[short] Windows: 0x52c150
     * @note[short] Android
     */
    void process(std::map<int, EnterEffectAnimValue>& p0);

    /**
     * @note[short] Windows: 0x529120
     * @note[short] Android
     */
    void process(std::map<int, bool>& p0);

    /**
     * @note[short] Windows: 0x5297b0
     * @note[short] Android
     */
    void process(std::map<std::pair<GJGameEvent, int>, int>& p0);

    /**
     * @note[short] Windows: 0x52a7f0
     * @note[short] Android
     */
    void process(std::map<std::pair<GJGameEvent, int>, std::vector<EventTriggerInstance>>& p0);

    /**
     * @note[short] Windows: 0x52c550
     * @note[short] Android
     */
    void process(std::map<std::pair<int, int>, FMODSoundTween>& p0);

    /**
     * @note[short] Windows: 0x52b420
     * @note[short] Android
     */
    void process(std::map<std::pair<int, int>, SFXTriggerInstance>& p0);

    /**
     * @note[short] Windows: 0x5297b0
     * @note[short] Android
     */
    void process(std::map<std::pair<int, int>, int>& p0);

    /**
     * @note[short] Windows: 0x52a4f0
     * @note[short] Android
     */
    void process(std::unordered_map<int, EnhancedGameObject*>& p0);

    /**
     * @note[short] Windows: 0x52ca20
     * @note[short] Android
     */
    void process(std::unordered_map<int, FMODQueuedMusic>& p0);

    /**
     * @note[short] Windows: 0x52cc00
     * @note[short] Android
     */
    void process(std::unordered_map<int, FMODSoundState>& p0);

    /**
     * @note[short] Windows: 0x52a130
     * @note[short] Android
     */
    void process(std::unordered_map<int, GJValueTween>& p0);

    /**
     * @note[short] Windows: 0x52a310
     * @note[short] Android
     */
    void process(std::unordered_map<int, GameObjectPhysics>& p0);

    /**
     * @note[short] Windows: 0x52dd10
     * @note[short] Android
     */
    void process(std::unordered_map<int, OpacityEffectAction>& p0);

    /**
     * @note[short] Windows: 0x52cde0
     * @note[short] Android
     */
    void process(std::unordered_map<int, SequenceTriggerState>& p0);

    /**
     * @note[short] Windows: 0x52b7e0
     * @note[short] Android
     */
    void process(std::unordered_map<int, SongChannelState>& p0);

    /**
     * @note[short] Windows: 0x52e8a0
     * @note[short] Android
     */
    void process(std::unordered_map<int, TimerItem>& p0);

    /**
     * @note[short] Windows: 0x529580
     * @note[short] Android
     */
    void process(std::unordered_map<int, bool>& p0);

    /**
     * @note[short] Windows: 0x529cd0
     * @note[short] Android
     */
    void process(std::unordered_map<int, double>& p0);

    /**
     * @note[short] Windows: 0x529f00
     * @note[short] Android
     */
    void process(std::unordered_map<int, float>& p0);

    /**
     * @note[short] Windows: 0x529350
     * @note[short] Android
     */
    void process(std::unordered_map<int, int>& p0);

    /**
     * @note[short] Windows: 0x52d210
     * @note[short] Android
     */
    void process(std::unordered_map<int, std::pair<double, double>>& p0);

    /**
     * @note[short] Windows: 0x52da90
     * @note[short] Android
     */
    void process(std::unordered_map<int, std::vector<CountTriggerAction>>& p0);

    /**
     * @note[short] Windows: 0x52ac60
     * @note[short] Android
     */
    void process(std::unordered_map<int, std::vector<EnterEffectInstance>>& p0);

    /**
     * @note[short] Windows: 0x52d810
     * @note[short] Android
     */
    void process(std::unordered_map<int, std::vector<PulseEffectAction>>& p0);

    /**
     * @note[short] Windows: 0x52ba90
     * @note[short] Android
     */
    void process(std::unordered_map<int, std::vector<SongTriggerState>>& p0);

    /**
     * @note[short] Windows: 0x52ea80
     * @note[short] Android
     */
    void process(std::unordered_map<int, std::vector<TimerTriggerAction>>& p0);

    /**
     * @note[short] Windows: 0x529af0
     * @note[short] Android
     */
    void process(std::unordered_map<int, std::vector<int>>& p0);

    /**
     * @note[short] Windows: 0x528b60
     * @note[short] Android
     */
    void process(std::unordered_set<int>& p0);

    /**
     * @note[short] Windows: 0x52b0a0
     * @note[short] Android
     */
    void process(std::vector<AdvancedFollowInstance>& p0);

    /**
     * @note[short] Windows: 0x52d490
     * @note[short] Android
     */
    void process(std::vector<CAState>& p0);

    /**
     * @note[short] Windows: 0x52e0b0
     * @note[short] Android
     */
    void process(std::vector<CollisionTriggerAction>& p0);

    /**
     * @note[short] Windows: 0x52b260
     * @note[short] Android
     */
    void process(std::vector<DynamicObjectAction>& p0);

    /**
     * @note[short] Windows: 0x52aee0
     * @note[short] Android
     */
    void process(std::vector<EnterEffectInstance>& p0);

    /**
     * @note[short] Windows: 0x52e5f0
     * @note[short] Android
     */
    void process(std::vector<GroupCommandObject2>& p0);

    /**
     * @note[short] Windows: 0x52d650
     * @note[short] Android
     */
    void process(std::vector<PulseEffectAction>& p0);

    /**
     * @note[short] Windows: 0x52be70
     * @note[short] Android
     */
    void process(std::vector<SFXTriggerState>& p0);

    /**
     * @note[short] Windows: 0x52e430
     * @note[short] Android
     */
    void process(std::vector<SpawnTriggerAction>& p0);

    /**
     * @note[short] Windows: 0x52e270
     * @note[short] Android
     */
    void process(std::vector<ToggleTriggerAction>& p0);

    /**
     * @note[short] Windows: 0x52def0
     * @note[short] Android
     */
    void process(std::vector<TouchToggleAction>& p0);

    /**
     * @note[short] Windows: 0x528d30
     * @note[short] Android
     */
    void process(std::vector<float>& p0);

    /**
     * @note[short] Windows: 0x528f30
     * @note[short] Android
     */
    void process(std::vector<int>& p0);

    /**
     * @note[short] Windows: 0x5282d0
     * @note[short] Android
     */
    void process(uint64_t& p0);

    /**
     * @note[short] Android
     */
    TodoReturn process(unsigned int& p0);

    /**
     * @note[short] Windows: 0x5288b0
     * @note[short] Android
     */
    void processGOArr(cocos2d::CCArray*& p0);

    /**
     * @note[short] Android
     */
    TodoReturn processString(std::string& p0);

    /**
     * @note[short] Android
     */
    bool valid();
};
