#include <Geode/cocos/cocoa/CCObject.h>

#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/PlayLayer.hpp>
#include <Geode/cocos/kazmath/include/kazmath/kazmath.h>

using namespace geode;
using namespace geode::modifier;

#if !defined(GEODE_WRAP_FUNCTION)
#define GEODE_WRAP_FUNCTION
template <class F>
static auto wrapFunction(uintptr_t address, tulip::hook::TulipConvention convention) {
	auto wrapped = geode::hook::createWrapper(reinterpret_cast<void*>(address), tulip::hook::WrapperMetadata{
		.m_convention = geode::hook::createConvention(convention),
		.m_abstract = tulip::hook::AbstractFunction::from(F(nullptr)),
	});
	if (wrapped.isErr()) {
		throw std::runtime_error(wrapped.unwrapErr());
	}
	return wrapped.unwrap();
}
#endif

PlayLayer::~PlayLayer() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(PlayLayer*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x70bec, tulip::hook::TulipConvention::Default);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) PlayLayer(geode::CutoffConstructor, sizeof(PlayLayer));
		geode::DestructorLock::addLock(this);
	}
}

auto PlayLayer::create(GJGameLevel* level, bool dontCreateObjects) -> decltype(create(level, dontCreateObjects)) {
	using FunctionType = decltype(create(level, dontCreateObjects))(*)(GJGameLevel*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x70f44, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(level, dontCreateObjects);
}

auto PlayLayer::scene(GJGameLevel* p0, bool p1) -> decltype(scene(p0, p1)) {
	using FunctionType = decltype(scene(p0, p1))(*)(GJGameLevel*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x70e94, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1);
}

auto PlayLayer::onEnterTransitionDidFinish() -> decltype(onEnterTransitionDidFinish()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&PlayLayer::onEnterTransitionDidFinish), this);
	using FunctionType = decltype(onEnterTransitionDidFinish())(*)(PlayLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x832e8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto PlayLayer::onExit() -> decltype(onExit()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&PlayLayer::onExit), this);
	using FunctionType = decltype(onExit())(*)(PlayLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x83324, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto PlayLayer::postUpdate(float dt) -> decltype(postUpdate(dt)) {
	auto self = addresser::thunkAdjust(Resolve<float>::func(&PlayLayer::postUpdate), this);
	using FunctionType = decltype(postUpdate(dt))(*)(PlayLayer*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x7eb3c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, dt);
}

auto PlayLayer::checkForEnd() -> decltype(checkForEnd()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&PlayLayer::checkForEnd), this);
	using FunctionType = decltype(checkForEnd())(*)(PlayLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x7ec0c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto PlayLayer::updateVerifyDamage() -> decltype(updateVerifyDamage()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&PlayLayer::updateVerifyDamage), this);
	using FunctionType = decltype(updateVerifyDamage())(*)(PlayLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x7ed00, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto PlayLayer::updateAttemptTime(float attemptTime) -> decltype(updateAttemptTime(attemptTime)) {
	auto self = addresser::thunkAdjust(Resolve<float>::func(&PlayLayer::updateAttemptTime), this);
	using FunctionType = decltype(updateAttemptTime(attemptTime))(*)(PlayLayer*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x7edb0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, attemptTime);
}

auto PlayLayer::updateVisibility(float dt) -> decltype(updateVisibility(dt)) {
	auto self = addresser::thunkAdjust(Resolve<float>::func(&PlayLayer::updateVisibility), this);
	using FunctionType = decltype(updateVisibility(dt))(*)(PlayLayer*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x7ae88, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, dt);
}

auto PlayLayer::opacityForObject(GameObject* object) -> decltype(opacityForObject(object)) {
	auto self = addresser::thunkAdjust(Resolve<GameObject*>::func(&PlayLayer::opacityForObject), this);
	using FunctionType = decltype(opacityForObject(object))(*)(PlayLayer*, GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x7cd0c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, object);
}

auto PlayLayer::updateColor(cocos2d::ccColor3B& color, float fadeTime, int colorID, bool blending, float opacity, cocos2d::ccHSVValue& copyHSV, int colorIDToCopy, bool copyOpacity, EffectGameObject* callerObject, int unk1, int unk2) -> decltype(updateColor(color, fadeTime, colorID, blending, opacity, copyHSV, colorIDToCopy, copyOpacity, callerObject, unk1, unk2)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::ccColor3B&, float, int, bool, float, cocos2d::ccHSVValue&, int, bool, EffectGameObject*, int, int>::func(&PlayLayer::updateColor), this);
	using FunctionType = decltype(updateColor(color, fadeTime, colorID, blending, opacity, copyHSV, colorIDToCopy, copyOpacity, callerObject, unk1, unk2))(*)(PlayLayer*, cocos2d::ccColor3B&, float, int, bool, float, cocos2d::ccHSVValue&, int, bool, EffectGameObject*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x7cdd0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, color, fadeTime, colorID, blending, opacity, copyHSV, colorIDToCopy, copyOpacity, callerObject, unk1, unk2);
}

auto PlayLayer::activateEndTrigger(int targetID, bool reverse, bool lockPlayerY) -> decltype(activateEndTrigger(targetID, reverse, lockPlayerY)) {
	auto self = addresser::thunkAdjust(Resolve<int, bool, bool>::func(&PlayLayer::activateEndTrigger), this);
	using FunctionType = decltype(activateEndTrigger(targetID, reverse, lockPlayerY))(*)(PlayLayer*, int, bool, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x79eb4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, targetID, reverse, lockPlayerY);
}

auto PlayLayer::activatePlatformerEndTrigger(EndTriggerGameObject* object, std::vector<int> const& remapKeys) -> decltype(activatePlatformerEndTrigger(object, remapKeys)) {
	auto self = addresser::thunkAdjust(Resolve<EndTriggerGameObject*, std::vector<int> const&>::func(&PlayLayer::activatePlatformerEndTrigger), this);
	using FunctionType = decltype(activatePlatformerEndTrigger(object, remapKeys))(*)(PlayLayer*, EndTriggerGameObject*, std::vector<int> const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x7a2ec, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, object, remapKeys);
}

auto PlayLayer::toggleGlitter(bool visible) -> decltype(toggleGlitter(visible)) {
	auto self = addresser::thunkAdjust(Resolve<bool>::func(&PlayLayer::toggleGlitter), this);
	using FunctionType = decltype(toggleGlitter(visible))(*)(PlayLayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x7d860, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, visible);
}

auto PlayLayer::destroyPlayer(PlayerObject* player, GameObject* object) -> decltype(destroyPlayer(player, object)) {
	auto self = addresser::thunkAdjust(Resolve<PlayerObject*, GameObject*>::func(&PlayLayer::destroyPlayer), this);
	using FunctionType = decltype(destroyPlayer(player, object))(*)(PlayLayer*, PlayerObject*, GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x7d960, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, player, object);
}

auto PlayLayer::shouldDrawDebugHitboxes() -> decltype(shouldDrawDebugHitboxes()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&PlayLayer::shouldDrawDebugHitboxes), this);
	using FunctionType = decltype(shouldDrawDebugHitboxes())(*)(PlayLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x772f8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto PlayLayer::shouldDrawHitboxTrail() -> decltype(shouldDrawHitboxTrail()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&PlayLayer::shouldDrawHitboxTrail), this);
	using FunctionType = decltype(shouldDrawHitboxTrail())(*)(PlayLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x7733c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto PlayLayer::shouldRecordHitboxTrail() -> decltype(shouldRecordHitboxTrail()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&PlayLayer::shouldRecordHitboxTrail), this);
	using FunctionType = decltype(shouldRecordHitboxTrail())(*)(PlayLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x77380, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto PlayLayer::getHitboxTrailMax() -> decltype(getHitboxTrailMax()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&PlayLayer::getHitboxTrailMax), this);
	using FunctionType = decltype(getHitboxTrailMax())(*)(PlayLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x773a4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto PlayLayer::toggleGroundVisibility(bool visible) -> decltype(toggleGroundVisibility(visible)) {
	auto self = addresser::thunkAdjust(Resolve<bool>::func(&PlayLayer::toggleGroundVisibility), this);
	using FunctionType = decltype(toggleGroundVisibility(visible))(*)(PlayLayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x7d758, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, visible);
}

auto PlayLayer::toggleMGVisibility(bool visible) -> decltype(toggleMGVisibility(visible)) {
	auto self = addresser::thunkAdjust(Resolve<bool>::func(&PlayLayer::toggleMGVisibility), this);
	using FunctionType = decltype(toggleMGVisibility(visible))(*)(PlayLayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x7d788, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, visible);
}

auto PlayLayer::toggleHideAttempts(bool hide) -> decltype(toggleHideAttempts(hide)) {
	auto self = addresser::thunkAdjust(Resolve<bool>::func(&PlayLayer::toggleHideAttempts), this);
	using FunctionType = decltype(toggleHideAttempts(hide))(*)(PlayLayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x7d798, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, hide);
}

auto PlayLayer::timeForPos(cocos2d::CCPoint position, int order, int channel, bool songTriggers, int id) -> decltype(timeForPos(position, order, channel, songTriggers, id)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCPoint, int, int, bool, int>::func(&PlayLayer::timeForPos), this);
	using FunctionType = decltype(timeForPos(position, order, channel, songTriggers, id))(*)(PlayLayer*, cocos2d::CCPoint, int, int, bool, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x7d688, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, position, order, channel, songTriggers, id);
}

auto PlayLayer::posForTime(float time) -> decltype(posForTime(time)) {
	auto self = addresser::thunkAdjust(Resolve<float>::func(&PlayLayer::posForTime), this);
	using FunctionType = decltype(posForTime(time))(*)(PlayLayer*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x7d6fc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, time);
}

auto PlayLayer::resetSPTriggered() -> decltype(resetSPTriggered()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&PlayLayer::resetSPTriggered), this);
	using FunctionType = decltype(resetSPTriggered())(*)(PlayLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x7d71c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto PlayLayer::updateTimeWarp(float timeWarp) -> decltype(updateTimeWarp(timeWarp)) {
	auto self = addresser::thunkAdjust(Resolve<float>::func(&PlayLayer::updateTimeWarp), this);
	using FunctionType = decltype(updateTimeWarp(timeWarp))(*)(PlayLayer*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x79dcc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, timeWarp);
}

auto PlayLayer::playGravityEffect(bool flip) -> decltype(playGravityEffect(flip)) {
	auto self = addresser::thunkAdjust(Resolve<bool>::func(&PlayLayer::playGravityEffect), this);
	using FunctionType = decltype(playGravityEffect(flip))(*)(PlayLayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x7ce34, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, flip);
}

auto PlayLayer::manualUpdateObjectColors(GameObject* object) -> decltype(manualUpdateObjectColors(object)) {
	auto self = addresser::thunkAdjust(Resolve<GameObject*>::func(&PlayLayer::manualUpdateObjectColors), this);
	using FunctionType = decltype(manualUpdateObjectColors(object))(*)(PlayLayer*, GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x7cd14, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, object);
}

auto PlayLayer::checkpointActivated(CheckpointGameObject* object) -> decltype(checkpointActivated(object)) {
	auto self = addresser::thunkAdjust(Resolve<CheckpointGameObject*>::func(&PlayLayer::checkpointActivated), this);
	using FunctionType = decltype(checkpointActivated(object))(*)(PlayLayer*, CheckpointGameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x7ee20, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, object);
}

auto PlayLayer::flipArt(bool flip) -> decltype(flipArt(flip)) {
	auto self = addresser::thunkAdjust(Resolve<bool>::func(&PlayLayer::flipArt), this);
	using FunctionType = decltype(flipArt(flip))(*)(PlayLayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x7d624, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, flip);
}

auto PlayLayer::updateTimeLabel(int seconds, int centiseconds, bool decimals) -> decltype(updateTimeLabel(seconds, centiseconds, decimals)) {
	auto self = addresser::thunkAdjust(Resolve<int, int, bool>::func(&PlayLayer::updateTimeLabel), this);
	using FunctionType = decltype(updateTimeLabel(seconds, centiseconds, decimals))(*)(PlayLayer*, int, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x7d250, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, seconds, centiseconds, decimals);
}

auto PlayLayer::checkSnapshot() -> decltype(checkSnapshot()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&PlayLayer::checkSnapshot), this);
	using FunctionType = decltype(checkSnapshot())(*)(PlayLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x81658, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto PlayLayer::toggleProgressbar() -> decltype(toggleProgressbar()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&PlayLayer::toggleProgressbar), this);
	using FunctionType = decltype(toggleProgressbar())(*)(PlayLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x7d42c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto PlayLayer::toggleInfoLabel() -> decltype(toggleInfoLabel()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&PlayLayer::toggleInfoLabel), this);
	using FunctionType = decltype(toggleInfoLabel())(*)(PlayLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x7d644, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto PlayLayer::removeAllCheckpoints() -> decltype(removeAllCheckpoints()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&PlayLayer::removeAllCheckpoints), this);
	using FunctionType = decltype(removeAllCheckpoints())(*)(PlayLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x80ee8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto PlayLayer::toggleMusicInPractice() -> decltype(toggleMusicInPractice()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&PlayLayer::toggleMusicInPractice), this);
	using FunctionType = decltype(toggleMusicInPractice())(*)(PlayLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x7d598, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto PlayLayer::processCheckpoints() -> decltype(processCheckpoints()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&PlayLayer::processCheckpoints), this);
	using FunctionType = decltype(processCheckpoints())(*)(PlayLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x7e75c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto PlayLayer::resetLevel() -> decltype(resetLevel()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&PlayLayer::resetLevel), this);
	using FunctionType = decltype(resetLevel())(*)(PlayLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x81d7c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto PlayLayer::currencyWillExit(CurrencyRewardLayer* layer) -> decltype(currencyWillExit(layer)) {
	auto self = addresser::thunkAdjust(Resolve<CurrencyRewardLayer*>::func(&PlayLayer::currencyWillExit), this);
	using FunctionType = decltype(currencyWillExit(layer))(*)(PlayLayer*, CurrencyRewardLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x7e600, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, layer);
}

auto PlayLayer::circleWaveWillBeRemoved(CCCircleWave* circleWave) -> decltype(circleWaveWillBeRemoved(circleWave)) {
	auto self = addresser::thunkAdjust(Resolve<CCCircleWave*>::func(&PlayLayer::circleWaveWillBeRemoved), this);
	using FunctionType = decltype(circleWaveWillBeRemoved(circleWave))(*)(PlayLayer*, CCCircleWave*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x7e690, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, circleWave);
}

auto PlayLayer::dialogClosed(DialogLayer* layer) -> decltype(dialogClosed(layer)) {
	auto self = addresser::thunkAdjust(Resolve<DialogLayer*>::func(&PlayLayer::dialogClosed), this);
	using FunctionType = decltype(dialogClosed(layer))(*)(PlayLayer*, DialogLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x7e644, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, layer);
}

auto PlayLayer::addCircle(CCCircleWave* cw) -> decltype(addCircle(cw)) {
	using FunctionType = decltype(addCircle(cw))(*)(PlayLayer*, CCCircleWave*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x7e688, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, cw);
}

auto PlayLayer::addLiveStartPosObject(StartPosObject* p0) -> decltype(addLiveStartPosObject(p0)) {
	using FunctionType = decltype(addLiveStartPosObject(p0))(*)(PlayLayer*, StartPosObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x81794, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto PlayLayer::addObject(GameObject* object) -> decltype(addObject(object)) {
	using FunctionType = decltype(addObject(object))(*)(PlayLayer*, GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x76298, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto PlayLayer::addToGroupOld(GameObject* object) -> decltype(addToGroupOld(object)) {
	using FunctionType = decltype(addToGroupOld(object))(*)(PlayLayer*, GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x7ab6c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto PlayLayer::applyCustomEnterEffect(GameObject* object, bool isRight) -> decltype(applyCustomEnterEffect(object, isRight)) {
	using FunctionType = decltype(applyCustomEnterEffect(object, isRight))(*)(PlayLayer*, GameObject*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x7bdd0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, object, isRight);
}

auto PlayLayer::applyEnterEffect(GameObject* object, int enterType, bool isRight) -> decltype(applyEnterEffect(object, enterType, isRight)) {
	using FunctionType = decltype(applyEnterEffect(object, enterType, isRight))(*)(PlayLayer*, GameObject*, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x7c570, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, object, enterType, isRight);
}

auto PlayLayer::canPauseGame() -> decltype(canPauseGame()) {
	using FunctionType = decltype(canPauseGame())(*)(PlayLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x77380, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto PlayLayer::checkpointWithID(int id) -> decltype(checkpointWithID(id)) {
	using FunctionType = decltype(checkpointWithID(id))(*)(PlayLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x80b48, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto PlayLayer::colorObject(int id, cocos2d::ccColor3B color) -> decltype(colorObject(id, color)) {
	using FunctionType = decltype(colorObject(id, color))(*)(PlayLayer*, int, cocos2d::ccColor3B);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x7acb4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id, color);
}

auto PlayLayer::commitJumps() -> decltype(commitJumps()) {
	using FunctionType = decltype(commitJumps())(*)(PlayLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x782cc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto PlayLayer::createCheckpoint() -> decltype(createCheckpoint()) {
	using FunctionType = decltype(createCheckpoint())(*)(PlayLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x7ee38, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto PlayLayer::createObjectsFromSetupFinished() -> decltype(createObjectsFromSetupFinished()) {
	using FunctionType = decltype(createObjectsFromSetupFinished())(*)(PlayLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x7a860, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto PlayLayer::delayedResetLevel() -> decltype(delayedResetLevel()) {
	using FunctionType = decltype(delayedResetLevel())(*)(PlayLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x7e5e0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto PlayLayer::dtCommitPlaytime() -> decltype(dtCommitPlaytime()) {
	using FunctionType = decltype(dtCommitPlaytime())(*)(PlayLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x83e0c0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto PlayLayer::dtFlushCells() -> decltype(dtFlushCells()) {
	using FunctionType = decltype(dtFlushCells())(*)(PlayLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x83e178, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto PlayLayer::fullReset() -> decltype(fullReset()) {
	using FunctionType = decltype(fullReset())(*)(PlayLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x81a80, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto PlayLayer::getCurrentPercent() -> decltype(getCurrentPercent()) {
	using FunctionType = decltype(getCurrentPercent())(*)(PlayLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x7d1b4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto PlayLayer::getCurrentPercentInt() -> decltype(getCurrentPercentInt()) {
	using FunctionType = decltype(getCurrentPercentInt())(*)(PlayLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x7d8bc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto PlayLayer::getEndPosition() -> decltype(getEndPosition()) {
	using FunctionType = decltype(getEndPosition())(*)(PlayLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x775c0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto PlayLayer::getLastCheckpoint() -> decltype(getLastCheckpoint()) {
	using FunctionType = decltype(getLastCheckpoint())(*)(PlayLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x7fd9c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto PlayLayer::getRelativeMod(cocos2d::CCPoint position, float right, float left, float offset) -> decltype(getRelativeMod(position, right, left, offset)) {
	using FunctionType = decltype(getRelativeMod(position, right, left, offset))(*)(PlayLayer*, cocos2d::CCPoint, float, float, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x7cd7c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, position, right, left, offset);
}

auto PlayLayer::getRelativeModNew(cocos2d::CCPoint position, float mod, float offset, bool unused, bool isRight) -> decltype(getRelativeModNew(position, mod, offset, unused, isRight)) {
	using FunctionType = decltype(getRelativeModNew(position, mod, offset, unused, isRight))(*)(PlayLayer*, cocos2d::CCPoint, float, float, bool, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x7bb04, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, position, mod, offset, unused, isRight);
}

auto PlayLayer::gravityEffectFinished() -> decltype(gravityEffectFinished()) {
	using FunctionType = decltype(gravityEffectFinished())(*)(PlayLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x7d19c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto PlayLayer::incrementJumps() -> decltype(incrementJumps()) {
	using FunctionType = decltype(incrementJumps())(*)(PlayLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x82d58, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto PlayLayer::init(GJGameLevel* level, bool dontCreateObjects) -> decltype(init(level, dontCreateObjects)) {
	using FunctionType = decltype(init(level, dontCreateObjects))(*)(PlayLayer*, GJGameLevel*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x70fd8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, level, dontCreateObjects);
}

auto PlayLayer::isGameplayActive() -> decltype(isGameplayActive()) {
	using FunctionType = decltype(isGameplayActive())(*)(PlayLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x832b4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto PlayLayer::levelComplete() -> decltype(levelComplete()) {
	using FunctionType = decltype(levelComplete())(*)(PlayLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x77624, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto PlayLayer::loadActiveSaveObjects(std::vector<SavedActiveObjectState>& activeObjects, std::vector<SavedSpecialObjectState>& specialObjects) -> decltype(loadActiveSaveObjects(activeObjects, specialObjects)) {
	using FunctionType = decltype(loadActiveSaveObjects(activeObjects, specialObjects))(*)(PlayLayer*, std::vector<SavedActiveObjectState>&, std::vector<SavedSpecialObjectState>&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x80e00, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, activeObjects, specialObjects);
}

auto PlayLayer::loadDefaultColors() -> decltype(loadDefaultColors()) {
	using FunctionType = decltype(loadDefaultColors())(*)(PlayLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x75f30, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto PlayLayer::loadDynamicSaveObjects(std::vector<SavedObjectStateRef>& dynamicObjects) -> decltype(loadDynamicSaveObjects(dynamicObjects)) {
	using FunctionType = decltype(loadDynamicSaveObjects(dynamicObjects))(*)(PlayLayer*, std::vector<SavedObjectStateRef>&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x80cc0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, dynamicObjects);
}

auto PlayLayer::loadFromCheckpoint(CheckpointObject* object) -> decltype(loadFromCheckpoint(object)) {
	using FunctionType = decltype(loadFromCheckpoint(object))(*)(PlayLayer*, CheckpointObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x80570, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto PlayLayer::loadLastCheckpoint() -> decltype(loadLastCheckpoint()) {
	using FunctionType = decltype(loadLastCheckpoint())(*)(PlayLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x80518, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto PlayLayer::loadPersistentCheckpoint(std::string& save) -> decltype(loadPersistentCheckpoint(save)) {
	using FunctionType = decltype(loadPersistentCheckpoint(save))(*)(PlayLayer*, std::string&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x81400, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, save);
}

auto PlayLayer::markCheckpoint() -> decltype(markCheckpoint()) {
	using FunctionType = decltype(markCheckpoint())(*)(PlayLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x7e9e0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto PlayLayer::onQuit() -> decltype(onQuit()) {
	using FunctionType = decltype(onQuit())(*)(PlayLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x76f2c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto PlayLayer::pauseGame(bool unfocused) -> decltype(pauseGame(unfocused)) {
	using FunctionType = decltype(pauseGame(unfocused))(*)(PlayLayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x82e88, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, unfocused);
}

auto PlayLayer::playEndAnimationToPos(cocos2d::CCPoint position) -> decltype(playEndAnimationToPos(position)) {
	using FunctionType = decltype(playEndAnimationToPos(position))(*)(PlayLayer*, cocos2d::CCPoint);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x79eb8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, position);
}

auto PlayLayer::playPlatformerEndAnimationToPos(cocos2d::CCPoint position, bool instant) -> decltype(playPlatformerEndAnimationToPos(position, instant)) {
	using FunctionType = decltype(playPlatformerEndAnimationToPos(position, instant))(*)(PlayLayer*, cocos2d::CCPoint, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x7a3dc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, position, instant);
}

auto PlayLayer::prepareCreateObjectsFromSetup(std::string& levelString) -> decltype(prepareCreateObjectsFromSetup(levelString)) {
	using FunctionType = decltype(prepareCreateObjectsFromSetup(levelString))(*)(PlayLayer*, std::string&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x71ba0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, levelString);
}

auto PlayLayer::processCreateObjectsFromSetup() -> decltype(processCreateObjectsFromSetup()) {
	using FunctionType = decltype(processCreateObjectsFromSetup())(*)(PlayLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x72024, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto PlayLayer::processLoadedMoveActions() -> decltype(processLoadedMoveActions()) {
	using FunctionType = decltype(processLoadedMoveActions())(*)(PlayLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x7ace0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto PlayLayer::removeCheckpoint(bool first) -> decltype(removeCheckpoint(first)) {
	using FunctionType = decltype(removeCheckpoint(first))(*)(PlayLayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x80420, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, first);
}

auto PlayLayer::removeFromGroupOld(GameObject* object) -> decltype(removeFromGroupOld(object)) {
	using FunctionType = decltype(removeFromGroupOld(object))(*)(PlayLayer*, GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x7ac48, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto PlayLayer::resetLevelFromStart() -> decltype(resetLevelFromStart()) {
	using FunctionType = decltype(resetLevelFromStart())(*)(PlayLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x816e8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto PlayLayer::resume() -> decltype(resume()) {
	using FunctionType = decltype(resume())(*)(PlayLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8313c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto PlayLayer::resumeAndRestart(bool fromStart) -> decltype(resumeAndRestart(fromStart)) {
	using FunctionType = decltype(resumeAndRestart(fromStart))(*)(PlayLayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x82fec, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, fromStart);
}

auto PlayLayer::saveActiveSaveObjects(std::vector<SavedActiveObjectState>& activeObjects, std::vector<SavedSpecialObjectState>& specialObjects) -> decltype(saveActiveSaveObjects(activeObjects, specialObjects)) {
	using FunctionType = decltype(saveActiveSaveObjects(activeObjects, specialObjects))(*)(PlayLayer*, std::vector<SavedActiveObjectState>&, std::vector<SavedSpecialObjectState>&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x7ffb0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, activeObjects, specialObjects);
}

auto PlayLayer::saveDynamicSaveObjects(std::vector<SavedObjectStateRef>& dynamicObjects) -> decltype(saveDynamicSaveObjects(dynamicObjects)) {
	using FunctionType = decltype(saveDynamicSaveObjects(dynamicObjects))(*)(PlayLayer*, std::vector<SavedObjectStateRef>&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x7fdd8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, dynamicObjects);
}

auto PlayLayer::scanActiveSaveObjects() -> decltype(scanActiveSaveObjects()) {
	using FunctionType = decltype(scanActiveSaveObjects())(*)(PlayLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x74244, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto PlayLayer::scanDynamicSaveObjects() -> decltype(scanDynamicSaveObjects()) {
	using FunctionType = decltype(scanDynamicSaveObjects())(*)(PlayLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x73980, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto PlayLayer::screenFlipObject(GameObject* object) -> decltype(screenFlipObject(object)) {
	using FunctionType = decltype(screenFlipObject(object))(*)(PlayLayer*, GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x7caec, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto PlayLayer::setupHasCompleted() -> decltype(setupHasCompleted()) {
	using FunctionType = decltype(setupHasCompleted())(*)(PlayLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x72824, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto PlayLayer::shouldBlend(int colorID) -> decltype(shouldBlend(colorID)) {
	using FunctionType = decltype(shouldBlend(colorID))(*)(PlayLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x7a858, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, colorID);
}

auto PlayLayer::shouldDebugDraw() -> decltype(shouldDebugDraw()) {
	using FunctionType = decltype(shouldDebugDraw())(*)(PlayLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x772f8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto PlayLayer::showCompleteEffect() -> decltype(showCompleteEffect()) {
	using FunctionType = decltype(showCompleteEffect())(*)(PlayLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x783d4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto PlayLayer::showCompleteText() -> decltype(showCompleteText()) {
	using FunctionType = decltype(showCompleteText())(*)(PlayLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x78784, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto PlayLayer::showEndLayer() -> decltype(showEndLayer()) {
	using FunctionType = decltype(showEndLayer())(*)(PlayLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x7928c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto PlayLayer::showHint() -> decltype(showHint()) {
	using FunctionType = decltype(showHint())(*)(PlayLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x7e470, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto PlayLayer::showNewBest(bool newReward, int orbs, int diamonds, bool demonKey, bool noRetry, bool noTitle) -> decltype(showNewBest(newReward, orbs, diamonds, demonKey, noRetry, noTitle)) {
	using FunctionType = decltype(showNewBest(newReward, orbs, diamonds, demonKey, noRetry, noTitle))(*)(PlayLayer*, bool, int, int, bool, bool, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x79314, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, newReward, orbs, diamonds, demonKey, noRetry, noTitle);
}

auto PlayLayer::showTwoPlayerGuide() -> decltype(showTwoPlayerGuide()) {
	using FunctionType = decltype(showTwoPlayerGuide())(*)(PlayLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x759c4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto PlayLayer::spawnCircle() -> decltype(spawnCircle()) {
	using FunctionType = decltype(spawnCircle())(*)(PlayLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x78300, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto PlayLayer::spawnFirework() -> decltype(spawnFirework()) {
	using FunctionType = decltype(spawnFirework())(*)(PlayLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x79084, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto PlayLayer::startGame() -> decltype(startGame()) {
	using FunctionType = decltype(startGame())(*)(PlayLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x76ec0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto PlayLayer::startGameDelayed() -> decltype(startGameDelayed()) {
	using FunctionType = decltype(startGameDelayed())(*)(PlayLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x775b0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto PlayLayer::startMusic() -> decltype(startMusic()) {
	using FunctionType = decltype(startMusic())(*)(PlayLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x7745c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto PlayLayer::startRecordingDelayed() -> decltype(startRecordingDelayed()) {
	using FunctionType = decltype(startRecordingDelayed())(*)(PlayLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x82ce4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto PlayLayer::stopRecording() -> decltype(stopRecording()) {
	using FunctionType = decltype(stopRecording())(*)(PlayLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x719a4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto PlayLayer::storeCheckpoint(CheckpointObject* checkpoint) -> decltype(storeCheckpoint(checkpoint)) {
	using FunctionType = decltype(storeCheckpoint(checkpoint))(*)(PlayLayer*, CheckpointObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x80348, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, checkpoint);
}

auto PlayLayer::switchToStartPosObject(StartPosObject* p0) -> decltype(switchToStartPosObject(p0)) {
	using FunctionType = decltype(switchToStartPosObject(p0))(*)(PlayLayer*, StartPosObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x81664, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto PlayLayer::toggleBGEffectVisibility(bool enabled) -> decltype(toggleBGEffectVisibility(enabled)) {
	using FunctionType = decltype(toggleBGEffectVisibility(enabled))(*)(PlayLayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x82ca8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, enabled);
}

auto PlayLayer::toggleGhostEffect(int type) -> decltype(toggleGhostEffect(type)) {
	using FunctionType = decltype(toggleGhostEffect(type))(*)(PlayLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x82c60, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, type);
}

auto PlayLayer::togglePracticeMode(bool practiceMode) -> decltype(togglePracticeMode(practiceMode)) {
	using FunctionType = decltype(togglePracticeMode(practiceMode))(*)(PlayLayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x81b64, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, practiceMode);
}

auto PlayLayer::tracksPercent() -> decltype(tracksPercent()) {
	using FunctionType = decltype(tracksPercent())(*)(PlayLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x782a0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto PlayLayer::tryShowDeathMarkers(cocos2d::CCPoint const& position, int percent, bool newBest) -> decltype(tryShowDeathMarkers(position, percent, newBest)) {
	using FunctionType = decltype(tryShowDeathMarkers(position, percent, newBest))(*)(PlayLayer*, cocos2d::CCPoint const&, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x83ec4c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, position, percent, newBest);
}

auto PlayLayer::updateAttempts() -> decltype(updateAttempts()) {
	using FunctionType = decltype(updateAttempts())(*)(PlayLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x82a98, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto PlayLayer::updateEffectPositions() -> decltype(updateEffectPositions()) {
	using FunctionType = decltype(updateEffectPositions())(*)(PlayLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x7e6a8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto PlayLayer::updateInfoLabel() -> decltype(updateInfoLabel()) {
	using FunctionType = decltype(updateInfoLabel())(*)(PlayLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x74460, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto PlayLayer::updateInvisibleBlock(GameObject* object, float rightFadeBound, float leftFadeBound, float rightFadeWidth, float leftFadeWidth, cocos2d::ccColor3B const& lbgColor) -> decltype(updateInvisibleBlock(object, rightFadeBound, leftFadeBound, rightFadeWidth, leftFadeWidth, lbgColor)) {
	using FunctionType = decltype(updateInvisibleBlock(object, rightFadeBound, leftFadeBound, rightFadeWidth, leftFadeWidth, lbgColor))(*)(PlayLayer*, GameObject*, float, float, float, float, cocos2d::ccColor3B const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x7bb50, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, object, rightFadeBound, leftFadeBound, rightFadeWidth, leftFadeWidth, lbgColor);
}

auto PlayLayer::updateProgressbar() -> decltype(updateProgressbar()) {
	using FunctionType = decltype(updateProgressbar())(*)(PlayLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x75d74, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto PlayLayer::updateScreenRotation(int rotation, bool add, bool convert, float duration, int easingType, float easingRate, int uniqueID, int controlID) -> decltype(updateScreenRotation(rotation, add, convert, duration, easingType, easingRate, uniqueID, controlID)) {
	using FunctionType = decltype(updateScreenRotation(rotation, add, convert, duration, easingType, easingRate, uniqueID, controlID))(*)(PlayLayer*, int, bool, bool, float, int, float, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x79de4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, rotation, add, convert, duration, easingType, easingRate, uniqueID, controlID);
}

auto PlayLayer::updateTestModeLabel() -> decltype(updateTestModeLabel()) {
	using FunctionType = decltype(updateTestModeLabel())(*)(PlayLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x76ffc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto PlayLayer::writePersistentSave() -> decltype(writePersistentSave()) {
	using FunctionType = decltype(writePersistentSave())(*)(PlayLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x80f3c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}
