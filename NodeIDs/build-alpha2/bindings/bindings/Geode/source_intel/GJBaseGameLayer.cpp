#include <Geode/cocos/cocoa/CCObject.h>

#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/GJBaseGameLayer.hpp>
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

GJBaseGameLayer::GJBaseGameLayer() : GJBaseGameLayer(geode::CutoffConstructor, sizeof(GJBaseGameLayer)) {
	// here we construct it as normal as we can, then destruct it
	// using the generated functions. this ensures no memory gets leaked
	// no crashes :pray:
	geode::DestructorLock::addLock(this);
	GJBaseGameLayer::~GJBaseGameLayer();

	using FunctionType = void(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8e720, tulip::hook::TulipConvention::Default);
	reinterpret_cast<FunctionType>(func)(this);
}

GJBaseGameLayer::~GJBaseGameLayer() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(GJBaseGameLayer*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0xebd40, tulip::hook::TulipConvention::Default);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) GJBaseGameLayer(geode::CutoffConstructor, sizeof(GJBaseGameLayer));
		geode::DestructorLock::addLock(this);
	}
}

auto GJBaseGameLayer::convertToClosestDirection(float angle, float bound) -> decltype(convertToClosestDirection(angle, bound)) {
	using FunctionType = decltype(convertToClosestDirection(angle, bound))(*)(float, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x115da0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(angle, bound);
}

auto GJBaseGameLayer::gameEventToString(GJGameEvent event) -> decltype(gameEventToString(event)) {
	using FunctionType = decltype(gameEventToString(event))(*)(GJGameEvent);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x129860, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(event);
}

auto GJBaseGameLayer::update(float dt) -> decltype(update(dt)) {
	auto self = addresser::thunkAdjust(Resolve<float>::func(&GJBaseGameLayer::update), this);
	using FunctionType = decltype(update(dt))(*)(GJBaseGameLayer*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x12f230, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, dt);
}

auto GJBaseGameLayer::init() -> decltype(init()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GJBaseGameLayer::init), this);
	using FunctionType = decltype(init())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xebd80, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GJBaseGameLayer::visit() -> decltype(visit()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GJBaseGameLayer::visit), this);
	using FunctionType = decltype(visit())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x142f70, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GJBaseGameLayer::opacityForObject(GameObject* object) -> decltype(opacityForObject(object)) {
	auto self = addresser::thunkAdjust(Resolve<GameObject*>::func(&GJBaseGameLayer::opacityForObject), this);
	using FunctionType = decltype(opacityForObject(object))(*)(GJBaseGameLayer*, GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x12efe0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, object);
}

auto GJBaseGameLayer::objectsCollided(int blockAID, int blockBID) -> decltype(objectsCollided(blockAID, blockBID)) {
	auto self = addresser::thunkAdjust(Resolve<int, int>::func(&GJBaseGameLayer::objectsCollided), this);
	using FunctionType = decltype(objectsCollided(blockAID, blockBID))(*)(GJBaseGameLayer*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x109580, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, blockAID, blockBID);
}

auto GJBaseGameLayer::updateColor(cocos2d::ccColor3B& color, float fadeTime, int colorID, bool blending, float opacity, cocos2d::ccHSVValue& copyHSV, int colorIDToCopy, bool copyOpacity, EffectGameObject* callerObject, int unk1, int unk2) -> decltype(updateColor(color, fadeTime, colorID, blending, opacity, copyHSV, colorIDToCopy, copyOpacity, callerObject, unk1, unk2)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::ccColor3B&, float, int, bool, float, cocos2d::ccHSVValue&, int, bool, EffectGameObject*, int, int>::func(&GJBaseGameLayer::updateColor), this);
	using FunctionType = decltype(updateColor(color, fadeTime, colorID, blending, opacity, copyHSV, colorIDToCopy, copyOpacity, callerObject, unk1, unk2))(*)(GJBaseGameLayer*, cocos2d::ccColor3B&, float, int, bool, float, cocos2d::ccHSVValue&, int, bool, EffectGameObject*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x119d30, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, color, fadeTime, colorID, blending, opacity, copyHSV, colorIDToCopy, copyOpacity, callerObject, unk1, unk2);
}

auto GJBaseGameLayer::toggleGroupTriggered(int group, bool activate, std::vector<int> const& remapKeys, int triggerID, int controlID) -> decltype(toggleGroupTriggered(group, activate, remapKeys, triggerID, controlID)) {
	auto self = addresser::thunkAdjust(Resolve<int, bool, std::vector<int> const&, int, int>::func(&GJBaseGameLayer::toggleGroupTriggered), this);
	using FunctionType = decltype(toggleGroupTriggered(group, activate, remapKeys, triggerID, controlID))(*)(GJBaseGameLayer*, int, bool, std::vector<int> const&, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x119ed0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, group, activate, remapKeys, triggerID, controlID);
}

auto GJBaseGameLayer::checkSpawnAbuse() -> decltype(checkSpawnAbuse()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GJBaseGameLayer::checkSpawnAbuse), this);
	using FunctionType = decltype(checkSpawnAbuse())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x10a460, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GJBaseGameLayer::spawnGroup(int group, bool ordered, double delay, std::vector<int> const& remapKeys, int triggerID, int controlID) -> decltype(spawnGroup(group, ordered, delay, remapKeys, triggerID, controlID)) {
	auto self = addresser::thunkAdjust(Resolve<int, bool, double, std::vector<int> const&, int, int>::func(&GJBaseGameLayer::spawnGroup), this);
	using FunctionType = decltype(spawnGroup(group, ordered, delay, remapKeys, triggerID, controlID))(*)(GJBaseGameLayer*, int, bool, double, std::vector<int> const&, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x10a4d0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, group, ordered, delay, remapKeys, triggerID, controlID);
}

auto GJBaseGameLayer::spawnObject(GameObject* object, double delay, std::vector<int> const& remapKeys) -> decltype(spawnObject(object, delay, remapKeys)) {
	auto self = addresser::thunkAdjust(Resolve<GameObject*, double, std::vector<int> const&>::func(&GJBaseGameLayer::spawnObject), this);
	using FunctionType = decltype(spawnObject(object, delay, remapKeys))(*)(GJBaseGameLayer*, GameObject*, double, std::vector<int> const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x10a900, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, object, delay, remapKeys);
}

auto GJBaseGameLayer::updateDebugDraw() -> decltype(updateDebugDraw()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GJBaseGameLayer::updateDebugDraw), this);
	using FunctionType = decltype(updateDebugDraw())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xfdc30, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GJBaseGameLayer::shouldDrawDebugHitboxes() -> decltype(shouldDrawDebugHitboxes()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GJBaseGameLayer::shouldDrawDebugHitboxes), this);
	using FunctionType = decltype(shouldDrawDebugHitboxes())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xff110, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GJBaseGameLayer::shouldDrawHitboxTrail() -> decltype(shouldDrawHitboxTrail()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GJBaseGameLayer::shouldDrawHitboxTrail), this);
	using FunctionType = decltype(shouldDrawHitboxTrail())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xff130, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GJBaseGameLayer::shouldRecordHitboxTrail() -> decltype(shouldRecordHitboxTrail()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GJBaseGameLayer::shouldRecordHitboxTrail), this);
	using FunctionType = decltype(shouldRecordHitboxTrail())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xff140, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GJBaseGameLayer::getHitboxTrailMax() -> decltype(getHitboxTrailMax()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GJBaseGameLayer::getHitboxTrailMax), this);
	using FunctionType = decltype(getHitboxTrailMax())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xff150, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GJBaseGameLayer::addToSection(GameObject* object) -> decltype(addToSection(object)) {
	auto self = addresser::thunkAdjust(Resolve<GameObject*>::func(&GJBaseGameLayer::addToSection), this);
	using FunctionType = decltype(addToSection(object))(*)(GJBaseGameLayer*, GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x11d090, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, object);
}

auto GJBaseGameLayer::addToGroup(GameObject* object, int groupID, bool triggerGroup) -> decltype(addToGroup(object, groupID, triggerGroup)) {
	auto self = addresser::thunkAdjust(Resolve<GameObject*, int, bool>::func(&GJBaseGameLayer::addToGroup), this);
	using FunctionType = decltype(addToGroup(object, groupID, triggerGroup))(*)(GJBaseGameLayer*, GameObject*, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x11a450, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, object, groupID, triggerGroup);
}

auto GJBaseGameLayer::removeFromGroup(GameObject* object, int groupID) -> decltype(removeFromGroup(object, groupID)) {
	auto self = addresser::thunkAdjust(Resolve<GameObject*, int>::func(&GJBaseGameLayer::removeFromGroup), this);
	using FunctionType = decltype(removeFromGroup(object, groupID))(*)(GJBaseGameLayer*, GameObject*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x11a6a0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, object, groupID);
}

auto GJBaseGameLayer::updateObjectSection(GameObject* object) -> decltype(updateObjectSection(object)) {
	auto self = addresser::thunkAdjust(Resolve<GameObject*>::func(&GJBaseGameLayer::updateObjectSection), this);
	using FunctionType = decltype(updateObjectSection(object))(*)(GJBaseGameLayer*, GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x11ec10, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, object);
}

auto GJBaseGameLayer::toggleGroundVisibility(bool visible) -> decltype(toggleGroundVisibility(visible)) {
	auto self = addresser::thunkAdjust(Resolve<bool>::func(&GJBaseGameLayer::toggleGroundVisibility), this);
	using FunctionType = decltype(toggleGroundVisibility(visible))(*)(GJBaseGameLayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x12c970, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, visible);
}

auto GJBaseGameLayer::toggleMGVisibility(bool visible) -> decltype(toggleMGVisibility(visible)) {
	auto self = addresser::thunkAdjust(Resolve<bool>::func(&GJBaseGameLayer::toggleMGVisibility), this);
	using FunctionType = decltype(toggleMGVisibility(visible))(*)(GJBaseGameLayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x12c980, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, visible);
}

auto GJBaseGameLayer::toggleHideAttempts(bool hide) -> decltype(toggleHideAttempts(hide)) {
	auto self = addresser::thunkAdjust(Resolve<bool>::func(&GJBaseGameLayer::toggleHideAttempts), this);
	using FunctionType = decltype(toggleHideAttempts(hide))(*)(GJBaseGameLayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x12c990, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, hide);
}

auto GJBaseGameLayer::updateScreenRotation(float rotation, bool add, bool convert, float duration, int easingType, float easingRate, int uniqueID, int controlID) -> decltype(updateScreenRotation(rotation, add, convert, duration, easingType, easingRate, uniqueID, controlID)) {
	auto self = addresser::thunkAdjust(Resolve<float, bool, bool, float, int, float, int, int>::func(&GJBaseGameLayer::updateScreenRotation), this);
	using FunctionType = decltype(updateScreenRotation(rotation, add, convert, duration, easingType, easingRate, uniqueID, controlID))(*)(GJBaseGameLayer*, float, bool, bool, float, int, float, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x12cb30, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, rotation, add, convert, duration, easingType, easingRate, uniqueID, controlID);
}

auto GJBaseGameLayer::reverseDirection(EffectGameObject* object) -> decltype(reverseDirection(object)) {
	auto self = addresser::thunkAdjust(Resolve<EffectGameObject*>::func(&GJBaseGameLayer::reverseDirection), this);
	using FunctionType = decltype(reverseDirection(object))(*)(GJBaseGameLayer*, EffectGameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1087c0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, object);
}

auto GJBaseGameLayer::rotateGameplay(RotateGameplayGameObject* object) -> decltype(rotateGameplay(object)) {
	auto self = addresser::thunkAdjust(Resolve<RotateGameplayGameObject*>::func(&GJBaseGameLayer::rotateGameplay), this);
	using FunctionType = decltype(rotateGameplay(object))(*)(GJBaseGameLayer*, RotateGameplayGameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x108800, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, object);
}

auto GJBaseGameLayer::updateTimeWarp(float timeWarp) -> decltype(updateTimeWarp(timeWarp)) {
	auto self = addresser::thunkAdjust(Resolve<float>::func(&GJBaseGameLayer::updateTimeWarp), this);
	using FunctionType = decltype(updateTimeWarp(timeWarp))(*)(GJBaseGameLayer*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x12d210, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, timeWarp);
}

auto GJBaseGameLayer::applyTimeWarp(float timeWarp) -> decltype(applyTimeWarp(timeWarp)) {
	auto self = addresser::thunkAdjust(Resolve<float>::func(&GJBaseGameLayer::applyTimeWarp), this);
	using FunctionType = decltype(applyTimeWarp(timeWarp))(*)(GJBaseGameLayer*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x12d260, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, timeWarp);
}

auto GJBaseGameLayer::createCustomParticle(std::string const& key, cocos2d::ParticleStruct const& particleStruct, int minimum, bool dontAdd) -> decltype(createCustomParticle(key, particleStruct, minimum, dontAdd)) {
	auto self = addresser::thunkAdjust(Resolve<std::string const&, cocos2d::ParticleStruct const&, int, bool>::func(&GJBaseGameLayer::createCustomParticle), this);
	using FunctionType = decltype(createCustomParticle(key, particleStruct, minimum, dontAdd))(*)(GJBaseGameLayer*, std::string const&, cocos2d::ParticleStruct const&, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x13d270, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, key, particleStruct, minimum, dontAdd);
}

auto GJBaseGameLayer::claimCustomParticle(std::string const& key, cocos2d::ParticleStruct const& particleStruct, int zLayer, int zOrder, int uiObject, bool dontAdd) -> decltype(claimCustomParticle(key, particleStruct, zLayer, zOrder, uiObject, dontAdd)) {
	auto self = addresser::thunkAdjust(Resolve<std::string const&, cocos2d::ParticleStruct const&, int, int, int, bool>::func(&GJBaseGameLayer::claimCustomParticle), this);
	using FunctionType = decltype(claimCustomParticle(key, particleStruct, zLayer, zOrder, uiObject, dontAdd))(*)(GJBaseGameLayer*, std::string const&, cocos2d::ParticleStruct const&, int, int, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x13d5e0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, key, particleStruct, zLayer, zOrder, uiObject, dontAdd);
}

auto GJBaseGameLayer::unclaimCustomParticle(std::string const& key, cocos2d::CCParticleSystemQuad* particle) -> decltype(unclaimCustomParticle(key, particle)) {
	auto self = addresser::thunkAdjust(Resolve<std::string const&, cocos2d::CCParticleSystemQuad*>::func(&GJBaseGameLayer::unclaimCustomParticle), this);
	using FunctionType = decltype(unclaimCustomParticle(key, particle))(*)(GJBaseGameLayer*, std::string const&, cocos2d::CCParticleSystemQuad*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x13da50, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, key, particle);
}

auto GJBaseGameLayer::activatedAudioTrigger(SFXTriggerGameObject* object) -> decltype(activatedAudioTrigger(object)) {
	auto self = addresser::thunkAdjust(Resolve<SFXTriggerGameObject*>::func(&GJBaseGameLayer::activatedAudioTrigger), this);
	using FunctionType = decltype(activatedAudioTrigger(object))(*)(GJBaseGameLayer*, SFXTriggerGameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x13ea40, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, object);
}

auto GJBaseGameLayer::checkpointActivated(CheckpointGameObject* object) -> decltype(checkpointActivated(object)) {
	auto self = addresser::thunkAdjust(Resolve<CheckpointGameObject*>::func(&GJBaseGameLayer::checkpointActivated), this);
	using FunctionType = decltype(checkpointActivated(object))(*)(GJBaseGameLayer*, CheckpointGameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x142c90, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, object);
}

auto GJBaseGameLayer::flipArt(bool flip) -> decltype(flipArt(flip)) {
	auto self = addresser::thunkAdjust(Resolve<bool>::func(&GJBaseGameLayer::flipArt), this);
	using FunctionType = decltype(flipArt(flip))(*)(GJBaseGameLayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x142c80, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, flip);
}

auto GJBaseGameLayer::addKeyframe(KeyframeGameObject* object) -> decltype(addKeyframe(object)) {
	auto self = addresser::thunkAdjust(Resolve<KeyframeGameObject*>::func(&GJBaseGameLayer::addKeyframe), this);
	using FunctionType = decltype(addKeyframe(object))(*)(GJBaseGameLayer*, KeyframeGameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x129a40, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, object);
}

auto GJBaseGameLayer::activateCustomRing(RingObject* object) -> decltype(activateCustomRing(object)) {
	using FunctionType = decltype(activateCustomRing(object))(*)(GJBaseGameLayer*, RingObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x113730, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto GJBaseGameLayer::activatedAudioTrigger(SFXTriggerGameObject* object, float levelTime) -> decltype(activatedAudioTrigger(object, levelTime)) {
	using FunctionType = decltype(activatedAudioTrigger(object, levelTime))(*)(GJBaseGameLayer*, SFXTriggerGameObject*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x13ea60, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, object, levelTime);
}

auto GJBaseGameLayer::activateEventTrigger(EventLinkTrigger* object, std::vector<int> const& remapKeys) -> decltype(activateEventTrigger(object, remapKeys)) {
	using FunctionType = decltype(activateEventTrigger(object, remapKeys))(*)(GJBaseGameLayer*, EventLinkTrigger*, std::vector<int> const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x129380, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, object, remapKeys);
}

auto GJBaseGameLayer::activateItemCompareTrigger(ItemTriggerGameObject* object, std::vector<int> const& remapKeys) -> decltype(activateItemCompareTrigger(object, remapKeys)) {
	using FunctionType = decltype(activateItemCompareTrigger(object, remapKeys))(*)(GJBaseGameLayer*, ItemTriggerGameObject*, std::vector<int> const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x12aa70, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, object, remapKeys);
}

auto GJBaseGameLayer::activateItemEditTrigger(ItemTriggerGameObject* object) -> decltype(activateItemEditTrigger(object)) {
	using FunctionType = decltype(activateItemEditTrigger(object))(*)(GJBaseGameLayer*, ItemTriggerGameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x12a230, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto GJBaseGameLayer::activatePersistentItemTrigger(ItemTriggerGameObject* object) -> decltype(activatePersistentItemTrigger(object)) {
	using FunctionType = decltype(activatePersistentItemTrigger(object))(*)(GJBaseGameLayer*, ItemTriggerGameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x12b160, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto GJBaseGameLayer::activatePlayerControlTrigger(PlayerControlGameObject* object) -> decltype(activatePlayerControlTrigger(object)) {
	using FunctionType = decltype(activatePlayerControlTrigger(object))(*)(GJBaseGameLayer*, PlayerControlGameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1077d0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto GJBaseGameLayer::activateResetTrigger(EffectGameObject* object) -> decltype(activateResetTrigger(object)) {
	using FunctionType = decltype(activateResetTrigger(object))(*)(GJBaseGameLayer*, EffectGameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x129c30, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto GJBaseGameLayer::activateSFXEditTrigger(SFXTriggerGameObject* object) -> decltype(activateSFXEditTrigger(object)) {
	using FunctionType = decltype(activateSFXEditTrigger(object))(*)(GJBaseGameLayer*, SFXTriggerGameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x139fb0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto GJBaseGameLayer::activateSFXTrigger(SFXTriggerGameObject* object) -> decltype(activateSFXTrigger(object)) {
	using FunctionType = decltype(activateSFXTrigger(object))(*)(GJBaseGameLayer*, SFXTriggerGameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x139c10, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto GJBaseGameLayer::activateSongEditTrigger(SongTriggerGameObject* object) -> decltype(activateSongEditTrigger(object)) {
	using FunctionType = decltype(activateSongEditTrigger(object))(*)(GJBaseGameLayer*, SongTriggerGameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x139a60, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto GJBaseGameLayer::activateSongTrigger(SongTriggerGameObject* object) -> decltype(activateSongTrigger(object)) {
	using FunctionType = decltype(activateSongTrigger(object))(*)(GJBaseGameLayer*, SongTriggerGameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1397f0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto GJBaseGameLayer::activateTimerTrigger(TimerTriggerGameObject* object, std::vector<int> const& remapKeys) -> decltype(activateTimerTrigger(object, remapKeys)) {
	using FunctionType = decltype(activateTimerTrigger(object, remapKeys))(*)(GJBaseGameLayer*, TimerTriggerGameObject*, std::vector<int> const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x12b560, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, object, remapKeys);
}

auto GJBaseGameLayer::addAreaEffect(EnterEffectObject* object, std::vector<EnterEffectInstance>* instances, GJAreaActionType type) -> decltype(addAreaEffect(object, instances, type)) {
	using FunctionType = decltype(addAreaEffect(object, instances, type))(*)(GJBaseGameLayer*, EnterEffectObject*, std::vector<EnterEffectInstance>*, GJAreaActionType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x11e2c0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, object, instances, type);
}

auto GJBaseGameLayer::addCustomEnterEffect(EnterEffectObject* object, bool enter) -> decltype(addCustomEnterEffect(object, enter)) {
	using FunctionType = decltype(addCustomEnterEffect(object, enter))(*)(GJBaseGameLayer*, EnterEffectObject*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xfa8d0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, object, enter);
}

auto GJBaseGameLayer::addGuideArt(GameObject* object) -> decltype(addGuideArt(object)) {
	using FunctionType = decltype(addGuideArt(object))(*)(GJBaseGameLayer*, GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x141c40, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto GJBaseGameLayer::addObjectCounter(LabelGameObject* object) -> decltype(addObjectCounter(object)) {
	using FunctionType = decltype(addObjectCounter(object))(*)(GJBaseGameLayer*, LabelGameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x129f90, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto GJBaseGameLayer::addPickupTrigger(CountTriggerGameObject* object) -> decltype(addPickupTrigger(object)) {
	using FunctionType = decltype(addPickupTrigger(object))(*)(GJBaseGameLayer*, CountTriggerGameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x129e80, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto GJBaseGameLayer::addPoints(int points) -> decltype(addPoints(points)) {
	using FunctionType = decltype(addPoints(points))(*)(GJBaseGameLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1343f0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, points);
}

auto GJBaseGameLayer::addProximityVolumeEffect(int channelID, int targetType, SFXTriggerGameObject* object) -> decltype(addProximityVolumeEffect(channelID, targetType, object)) {
	using FunctionType = decltype(addProximityVolumeEffect(channelID, targetType, object))(*)(GJBaseGameLayer*, int, int, SFXTriggerGameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x13df40, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, channelID, targetType, object);
}

auto GJBaseGameLayer::addRemapTargets(std::set<int>& targets) -> decltype(addRemapTargets(targets)) {
	using FunctionType = decltype(addRemapTargets(targets))(*)(GJBaseGameLayer*, std::set<int>&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xf2e20, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, targets);
}

auto GJBaseGameLayer::addToGroups(GameObject* object, bool duplicateTrigger) -> decltype(addToGroups(object, duplicateTrigger)) {
	using FunctionType = decltype(addToGroups(object, duplicateTrigger))(*)(GJBaseGameLayer*, GameObject*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x11a3e0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, object, duplicateTrigger);
}

auto GJBaseGameLayer::addUIObject(GameObject* object) -> decltype(addUIObject(object)) {
	using FunctionType = decltype(addUIObject(object))(*)(GJBaseGameLayer*, GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x11afa0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto GJBaseGameLayer::animateInDualGroundNew(GameObject* object, float height, bool instant, float duration) -> decltype(animateInDualGroundNew(object, height, instant, duration)) {
	using FunctionType = decltype(animateInDualGroundNew(object, height, instant, duration))(*)(GJBaseGameLayer*, GameObject*, float, bool, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x102780, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, object, height, instant, duration);
}

auto GJBaseGameLayer::animateInGroundNew(bool unk1, float unk2, bool unk3) -> decltype(animateInGroundNew(unk1, unk2, unk3)) {
	using FunctionType = decltype(animateInGroundNew(unk1, unk2, unk3))(*)(GJBaseGameLayer*, bool, float, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x102fb0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, unk1, unk2, unk3);
}

auto GJBaseGameLayer::animateOutGroundNew(bool instant) -> decltype(animateOutGroundNew(instant)) {
	using FunctionType = decltype(animateOutGroundNew(instant))(*)(GJBaseGameLayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x102a70, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, instant);
}

auto GJBaseGameLayer::animatePortalY(float fromY, float toY, float duration, float easingRate) -> decltype(animatePortalY(fromY, toY, duration, easingRate)) {
	using FunctionType = decltype(animatePortalY(fromY, toY, duration, easingRate))(*)(GJBaseGameLayer*, float, float, float, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x13b550, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, fromY, toY, duration, easingRate);
}

auto GJBaseGameLayer::applyLevelSettings(GameObject* object) -> decltype(applyLevelSettings(object)) {
	using FunctionType = decltype(applyLevelSettings(object))(*)(GJBaseGameLayer*, GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x138240, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto GJBaseGameLayer::applyRemap(EffectGameObject* object, std::vector<int> const& remapKeys, std::unordered_map<int, int>& remap) -> decltype(applyRemap(object, remapKeys, remap)) {
	using FunctionType = decltype(applyRemap(object, remapKeys, remap))(*)(GJBaseGameLayer*, EffectGameObject*, std::vector<int> const&, std::unordered_map<int, int>&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x10aac0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, object, remapKeys, remap);
}

auto GJBaseGameLayer::applySFXEditTrigger(int channelID, int targetType, SFXTriggerGameObject* object) -> decltype(applySFXEditTrigger(channelID, targetType, object)) {
	using FunctionType = decltype(applySFXEditTrigger(channelID, targetType, object))(*)(GJBaseGameLayer*, int, int, SFXTriggerGameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x13de20, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, channelID, targetType, object);
}

auto GJBaseGameLayer::applyShake(cocos2d::CCPoint& point) -> decltype(applyShake(point)) {
	using FunctionType = decltype(applyShake(point))(*)(GJBaseGameLayer*, cocos2d::CCPoint&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x13a640, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, point);
}

auto GJBaseGameLayer::assignNewStickyGroups(cocos2d::CCArray* objects) -> decltype(assignNewStickyGroups(objects)) {
	using FunctionType = decltype(assignNewStickyGroups(objects))(*)(GJBaseGameLayer*, cocos2d::CCArray*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x11c3f0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, objects);
}

auto GJBaseGameLayer::asyncBGLoaded(int background) -> decltype(asyncBGLoaded(background)) {
	using FunctionType = decltype(asyncBGLoaded(background))(*)(GJBaseGameLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xf0880, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, background);
}

auto GJBaseGameLayer::asyncGLoaded(int ground) -> decltype(asyncGLoaded(ground)) {
	using FunctionType = decltype(asyncGLoaded(ground))(*)(GJBaseGameLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xf0b90, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, ground);
}

auto GJBaseGameLayer::asyncMGLoaded(int middleground) -> decltype(asyncMGLoaded(middleground)) {
	using FunctionType = decltype(asyncMGLoaded(middleground))(*)(GJBaseGameLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xf0e60, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, middleground);
}

auto GJBaseGameLayer::atlasValue(int atlas) -> decltype(atlasValue(atlas)) {
	using FunctionType = decltype(atlasValue(atlas))(*)(GJBaseGameLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xfa300, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, atlas);
}

auto GJBaseGameLayer::bumpPlayer(PlayerObject* player, EffectGameObject* object) -> decltype(bumpPlayer(player, object)) {
	using FunctionType = decltype(bumpPlayer(player, object))(*)(GJBaseGameLayer*, PlayerObject*, EffectGameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1059c0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, player, object);
}

auto GJBaseGameLayer::buttonIDToButton(int id) -> decltype(buttonIDToButton(id)) {
	using FunctionType = decltype(buttonIDToButton(id))(*)(GJBaseGameLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x134820, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto GJBaseGameLayer::buttonIsRelevant(PlayerButtonCommand const& button) -> decltype(buttonIsRelevant(button)) {
	using FunctionType = decltype(buttonIsRelevant(button))(*)(GJBaseGameLayer*, PlayerButtonCommand const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1291a0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, button);
}

auto GJBaseGameLayer::calculateColorGroups() -> decltype(calculateColorGroups()) {
	using FunctionType = decltype(calculateColorGroups())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xfa050, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::cameraMoveX(float value, float duration, float rate, bool unused) -> decltype(cameraMoveX(value, duration, rate, unused)) {
	using FunctionType = decltype(cameraMoveX(value, duration, rate, unused))(*)(GJBaseGameLayer*, float, float, float, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x13b1e0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, value, duration, rate, unused);
}

auto GJBaseGameLayer::cameraMoveY(float value, float duration, float rate, bool force) -> decltype(cameraMoveY(value, duration, rate, force)) {
	using FunctionType = decltype(cameraMoveY(value, duration, rate, force))(*)(GJBaseGameLayer*, float, float, float, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x13b290, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, value, duration, rate, force);
}

auto GJBaseGameLayer::canBeActivatedByPlayer(PlayerObject* player, EffectGameObject* object) -> decltype(canBeActivatedByPlayer(player, object)) {
	using FunctionType = decltype(canBeActivatedByPlayer(player, object))(*)(GJBaseGameLayer*, PlayerObject*, EffectGameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x105760, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, player, object);
}

auto GJBaseGameLayer::canProcessSFX(SFXTriggerState& state, std::unordered_map<int, int>& stateIndices, std::unordered_map<int, float>& times, std::vector<SFXTriggerState>& states) -> decltype(canProcessSFX(state, stateIndices, times, states)) {
	using FunctionType = decltype(canProcessSFX(state, stateIndices, times, states))(*)(GJBaseGameLayer*, SFXTriggerState&, std::unordered_map<int, int>&, std::unordered_map<int, float>&, std::vector<SFXTriggerState>&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x13ef50, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, state, stateIndices, times, states);
}

auto GJBaseGameLayer::canTouchObject(GameObject* object) -> decltype(canTouchObject(object)) {
	using FunctionType = decltype(canTouchObject(object))(*)(GJBaseGameLayer*, GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x105730, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto GJBaseGameLayer::checkCameraLimitAfterTeleport(PlayerObject* player, float yOffset) -> decltype(checkCameraLimitAfterTeleport(player, yOffset)) {
	using FunctionType = decltype(checkCameraLimitAfterTeleport(player, yOffset))(*)(GJBaseGameLayer*, PlayerObject*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xfd7e0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, player, yOffset);
}

auto GJBaseGameLayer::checkCollision(int blockAID, int blockBID) -> decltype(checkCollision(blockAID, blockBID)) {
	using FunctionType = decltype(checkCollision(blockAID, blockBID))(*)(GJBaseGameLayer*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x109550, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, blockAID, blockBID);
}

auto GJBaseGameLayer::checkCollisionBlocks(EffectGameObject* object, std::vector<EffectGameObject*>* blocks, int blockCount) -> decltype(checkCollisionBlocks(object, blocks, blockCount)) {
	using FunctionType = decltype(checkCollisionBlocks(object, blocks, blockCount))(*)(GJBaseGameLayer*, EffectGameObject*, std::vector<EffectGameObject*>*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1093b0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, object, blocks, blockCount);
}

auto GJBaseGameLayer::checkCollisions(PlayerObject* object, float dt, bool ignoreDamage) -> decltype(checkCollisions(object, dt, ignoreDamage)) {
	using FunctionType = decltype(checkCollisions(object, dt, ignoreDamage))(*)(GJBaseGameLayer*, PlayerObject*, float, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x103270, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, object, dt, ignoreDamage);
}

auto GJBaseGameLayer::checkRepellPlayer() -> decltype(checkRepellPlayer()) {
	using FunctionType = decltype(checkRepellPlayer())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1315f0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::claimMoveAction(int groupID, bool ignoreStaticGroups) -> decltype(claimMoveAction(groupID, ignoreStaticGroups)) {
	using FunctionType = decltype(claimMoveAction(groupID, ignoreStaticGroups))(*)(GJBaseGameLayer*, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x125510, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, groupID, ignoreStaticGroups);
}

auto GJBaseGameLayer::claimParticle(std::string key, int zLayer) -> decltype(claimParticle(key, zLayer)) {
	using FunctionType = decltype(claimParticle(key, zLayer))(*)(GJBaseGameLayer*, std::string, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x13cc80, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, key, zLayer);
}

auto GJBaseGameLayer::claimRotationAction(int targetID, int centerID, float& rotation, float& offset, bool ignoreStaticGroups, bool unused) -> decltype(claimRotationAction(targetID, centerID, rotation, offset, ignoreStaticGroups, unused)) {
	using FunctionType = decltype(claimRotationAction(targetID, centerID, rotation, offset, ignoreStaticGroups, unused))(*)(GJBaseGameLayer*, int, int, float&, float&, bool, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1253a0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, targetID, centerID, rotation, offset, ignoreStaticGroups, unused);
}

auto GJBaseGameLayer::clearActivatedAudioTriggers() -> decltype(clearActivatedAudioTriggers()) {
	using FunctionType = decltype(clearActivatedAudioTriggers())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1390e0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::clearPickedUpItems() -> decltype(clearPickedUpItems()) {
	using FunctionType = decltype(clearPickedUpItems())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x54ac60, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::collectedObject(EffectGameObject* object) -> decltype(collectedObject(object)) {
	using FunctionType = decltype(collectedObject(object))(*)(GJBaseGameLayer*, EffectGameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x129e30, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto GJBaseGameLayer::collisionCheckObjects(PlayerObject* object, std::vector<GameObject*>* objects, int objectCount, float dt) -> decltype(collisionCheckObjects(object, objects, objectCount, dt)) {
	using FunctionType = decltype(collisionCheckObjects(object, objects, objectCount, dt))(*)(GJBaseGameLayer*, PlayerObject*, std::vector<GameObject*>*, int, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x104380, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, object, objects, objectCount, dt);
}

auto GJBaseGameLayer::controlAdvancedFollowCommand(AdvancedFollowTriggerObject* object, int controlID, GJActionCommand command) -> decltype(controlAdvancedFollowCommand(object, controlID, command)) {
	using FunctionType = decltype(controlAdvancedFollowCommand(object, controlID, command))(*)(GJBaseGameLayer*, AdvancedFollowTriggerObject*, int, GJActionCommand);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x114210, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, object, controlID, command);
}

auto GJBaseGameLayer::controlAreaEffect(EnterEffectObject* object, std::vector<EnterEffectInstance>* instances, GJActionCommand command) -> decltype(controlAreaEffect(object, instances, command)) {
	using FunctionType = decltype(controlAreaEffect(object, instances, command))(*)(GJBaseGameLayer*, EnterEffectObject*, std::vector<EnterEffectInstance>*, GJActionCommand);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x114160, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, object, instances, command);
}

auto GJBaseGameLayer::controlAreaEffectWithID(int uniqueID, int controlID, GJActionCommand command) -> decltype(controlAreaEffectWithID(uniqueID, controlID, command)) {
	using FunctionType = decltype(controlAreaEffectWithID(uniqueID, controlID, command))(*)(GJBaseGameLayer*, int, int, GJActionCommand);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x114c20, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, uniqueID, controlID, command);
}

auto GJBaseGameLayer::controlDynamicCommand(EffectGameObject* object, int controlID, std::vector<DynamicObjectAction>& actions, GJActionCommand command) -> decltype(controlDynamicCommand(object, controlID, actions, command)) {
	using FunctionType = decltype(controlDynamicCommand(object, controlID, actions, command))(*)(GJBaseGameLayer*, EffectGameObject*, int, std::vector<DynamicObjectAction>&, GJActionCommand);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x116330, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, object, controlID, actions, command);
}

auto GJBaseGameLayer::controlEventLink(int uniqueID, int controlID, GJActionCommand command) -> decltype(controlEventLink(uniqueID, controlID, command)) {
	using FunctionType = decltype(controlEventLink(uniqueID, controlID, command))(*)(GJBaseGameLayer*, int, int, GJActionCommand);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1144c0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, uniqueID, controlID, command);
}

auto GJBaseGameLayer::controlGradientTrigger(GradientTriggerObject* object, GJActionCommand command) -> decltype(controlGradientTrigger(object, command)) {
	using FunctionType = decltype(controlGradientTrigger(object, command))(*)(GJBaseGameLayer*, GradientTriggerObject*, GJActionCommand);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1146b0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, object, command);
}

auto GJBaseGameLayer::controlTriggersInGroup(int group, GJActionCommand command) -> decltype(controlTriggersInGroup(group, command)) {
	using FunctionType = decltype(controlTriggersInGroup(group, command))(*)(GJBaseGameLayer*, int, GJActionCommand);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1137f0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, group, command);
}

auto GJBaseGameLayer::controlTriggersWithControlID(int controlID, GJActionCommand command) -> decltype(controlTriggersWithControlID(controlID, command)) {
	using FunctionType = decltype(controlTriggersWithControlID(controlID, command))(*)(GJBaseGameLayer*, int, GJActionCommand);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x114910, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, controlID, command);
}

auto GJBaseGameLayer::countCollectedUserCoins() -> decltype(countCollectedUserCoins()) {
	using FunctionType = decltype(countCollectedUserCoins())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x106f30, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::createBackground(int background) -> decltype(createBackground(background)) {
	using FunctionType = decltype(createBackground(background))(*)(GJBaseGameLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xf0630, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, background);
}

auto GJBaseGameLayer::createGroundLayer(int ground, int line) -> decltype(createGroundLayer(ground, line)) {
	using FunctionType = decltype(createGroundLayer(ground, line))(*)(GJBaseGameLayer*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xf0bb0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, ground, line);
}

auto GJBaseGameLayer::createLiveStartPosObject() -> decltype(createLiveStartPosObject()) {
	using FunctionType = decltype(createLiveStartPosObject())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x100770, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::createMiddleground(int middleground) -> decltype(createMiddleground(middleground)) {
	using FunctionType = decltype(createMiddleground(middleground))(*)(GJBaseGameLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xf0dc0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, middleground);
}

auto GJBaseGameLayer::createNewKeyframeAnim() -> decltype(createNewKeyframeAnim()) {
	using FunctionType = decltype(createNewKeyframeAnim())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1299f0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::createParticle(int objectType, char const* plistName, int tag, cocos2d::tCCPositionType positionType) -> decltype(createParticle(objectType, plistName, tag, positionType)) {
	using FunctionType = decltype(createParticle(objectType, plistName, tag, positionType))(*)(GJBaseGameLayer*, int, char const*, int, cocos2d::tCCPositionType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x13c790, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, objectType, plistName, tag, positionType);
}

auto GJBaseGameLayer::createPlayer() -> decltype(createPlayer()) {
	using FunctionType = decltype(createPlayer())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x305780, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::createPlayerCollisionBlock() -> decltype(createPlayerCollisionBlock()) {
	using FunctionType = decltype(createPlayerCollisionBlock())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1089e0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::createTextLayers() -> decltype(createTextLayers()) {
	using FunctionType = decltype(createTextLayers())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xfbcb0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::damagingObjectsInRect(cocos2d::CCRect rect, bool enabledGroups) -> decltype(damagingObjectsInRect(rect, enabledGroups)) {
	using FunctionType = decltype(damagingObjectsInRect(rect, enabledGroups))(*)(GJBaseGameLayer*, cocos2d::CCRect, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xff8d0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, rect, enabledGroups);
}

auto GJBaseGameLayer::destroyObject(GameObject* object) -> decltype(destroyObject(object)) {
	using FunctionType = decltype(destroyObject(object))(*)(GJBaseGameLayer*, GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1061d0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto GJBaseGameLayer::enterDualMode(GameObject* object, bool unused) -> decltype(enterDualMode(object, unused)) {
	using FunctionType = decltype(enterDualMode(object, unused))(*)(GJBaseGameLayer*, GameObject*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x107760, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, object, unused);
}

auto GJBaseGameLayer::exitStaticCamera(bool exitX, bool exitY, float time, int easingType, float easingRate, bool smoothVelocity, float smoothVelocityMod, bool exitInstant) -> decltype(exitStaticCamera(exitX, exitY, time, easingType, easingRate, smoothVelocity, smoothVelocityMod, exitInstant)) {
	using FunctionType = decltype(exitStaticCamera(exitX, exitY, time, easingType, easingRate, smoothVelocity, smoothVelocityMod, exitInstant))(*)(GJBaseGameLayer*, bool, bool, float, int, float, bool, float, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x13bae0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, exitX, exitY, time, easingType, easingRate, smoothVelocity, smoothVelocityMod, exitInstant);
}

auto GJBaseGameLayer::findStartPosWinnerInArray(cocos2d::CCArray* p0) -> decltype(findStartPosWinnerInArray(p0)) {
	using FunctionType = decltype(findStartPosWinnerInArray(p0))(*)(GJBaseGameLayer*, cocos2d::CCArray*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1009f0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto GJBaseGameLayer::flipFinished() -> decltype(flipFinished()) {
	using FunctionType = decltype(flipFinished())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x134380, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::flipGravity(PlayerObject* object, bool flip, bool noEffects) -> decltype(flipGravity(object, flip, noEffects)) {
	using FunctionType = decltype(flipGravity(object, flip, noEffects))(*)(GJBaseGameLayer*, PlayerObject*, bool, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x102310, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, object, flip, noEffects);
}

auto GJBaseGameLayer::flipObjects() -> decltype(flipObjects()) {
	using FunctionType = decltype(flipObjects())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x142bd0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::gameEventTriggered(GJGameEvent event, int material, int playerID) -> decltype(gameEventTriggered(event, material, playerID)) {
	using FunctionType = decltype(gameEventTriggered(event, material, playerID))(*)(GJBaseGameLayer*, GJGameEvent, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xfd8a0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, event, material, playerID);
}

auto GJBaseGameLayer::generateEnterEasingBuffer(int easingType, float easingRate) -> decltype(generateEnterEasingBuffer(easingType, easingRate)) {
	using FunctionType = decltype(generateEnterEasingBuffer(easingType, easingRate))(*)(GJBaseGameLayer*, int, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xfb4c0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, easingType, easingRate);
}

auto GJBaseGameLayer::generateEnterEasingBuffers(EnterEffectObject* object) -> decltype(generateEnterEasingBuffers(object)) {
	using FunctionType = decltype(generateEnterEasingBuffers(object))(*)(GJBaseGameLayer*, EnterEffectObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xfb430, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto GJBaseGameLayer::generatePickupAnimRandVal(GameObject* object, float& randomValue1, float& randomValue2) -> decltype(generatePickupAnimRandVal(object, randomValue1, randomValue2)) {
	using FunctionType = decltype(generatePickupAnimRandVal(object, randomValue1, randomValue2))(*)(GJBaseGameLayer*, GameObject*, float&, float&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1069d0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, object, randomValue1, randomValue2);
}

auto GJBaseGameLayer::generateSpawnRemap() -> decltype(generateSpawnRemap()) {
	using FunctionType = decltype(generateSpawnRemap())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xf3710, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::generateTargetGroups() -> decltype(generateTargetGroups()) {
	using FunctionType = decltype(generateTargetGroups())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xf68f0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::generateVisibilityGroups() -> decltype(generateVisibilityGroups()) {
	using FunctionType = decltype(generateVisibilityGroups())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xf8e00, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::getActiveOrderSpawnObjects() -> decltype(getActiveOrderSpawnObjects()) {
	using FunctionType = decltype(getActiveOrderSpawnObjects())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x10a430, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::getAreaObjectValue(EnterEffectInstance* instance, GameObject* object, cocos2d::CCPoint& position, bool& show) -> decltype(getAreaObjectValue(instance, object, position, show)) {
	using FunctionType = decltype(getAreaObjectValue(instance, object, position, show))(*)(GJBaseGameLayer*, EnterEffectInstance*, GameObject*, cocos2d::CCPoint&, bool&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x121e10, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, instance, object, position, show);
}

auto GJBaseGameLayer::getBumpMod(PlayerObject* player, int type) -> decltype(getBumpMod(player, type)) {
	using FunctionType = decltype(getBumpMod(player, type))(*)(GJBaseGameLayer*, PlayerObject*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1080c0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, player, type);
}

auto GJBaseGameLayer::getCapacityString() -> decltype(getCapacityString()) {
	using FunctionType = decltype(getCapacityString())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xfb8a0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::getCenterGroupObject(int groupID, int defaultID) -> decltype(getCenterGroupObject(groupID, defaultID)) {
	using FunctionType = decltype(getCenterGroupObject(groupID, defaultID))(*)(GJBaseGameLayer*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x11a9a0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, groupID, defaultID);
}

auto GJBaseGameLayer::getCustomEnterEffects(int id, bool enter) -> decltype(getCustomEnterEffects(id, enter)) {
	using FunctionType = decltype(getCustomEnterEffects(id, enter))(*)(GJBaseGameLayer*, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xfb310, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id, enter);
}

auto GJBaseGameLayer::getEasedAreaValue(GameObject* object, EnterEffectInstance* instance, float value, bool show, int index) -> decltype(getEasedAreaValue(object, instance, value, show, index)) {
	using FunctionType = decltype(getEasedAreaValue(object, instance, value, show, index))(*)(GJBaseGameLayer*, GameObject*, EnterEffectInstance*, float, bool, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x122040, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, object, instance, value, show, index);
}

auto GJBaseGameLayer::getEnterEasingKey(int easingType, float easingRate) -> decltype(getEnterEasingKey(easingType, easingRate)) {
	using FunctionType = decltype(getEnterEasingKey(easingType, easingRate))(*)(GJBaseGameLayer*, int, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xfb480, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, easingType, easingRate);
}

auto GJBaseGameLayer::getEnterEasingValue(float value, int easingType, float easingRate, int easingBuffer) -> decltype(getEnterEasingValue(value, easingType, easingRate, easingBuffer)) {
	using FunctionType = decltype(getEnterEasingValue(value, easingType, easingRate, easingBuffer))(*)(GJBaseGameLayer*, float, int, float, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xfb830, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, value, easingType, easingRate, easingBuffer);
}

auto GJBaseGameLayer::getFollowSpeedVal(GameObject* object, int startSpeedRef, int startDirRef, float startDir, float startSpeed) -> decltype(getFollowSpeedVal(object, startSpeedRef, startDirRef, startDir, startSpeed)) {
	using FunctionType = decltype(getFollowSpeedVal(object, startSpeedRef, startDirRef, startDir, startSpeed))(*)(GJBaseGameLayer*, GameObject*, int, int, float, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x126020, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, object, startSpeedRef, startDirRef, startDir, startSpeed);
}

auto GJBaseGameLayer::getGroundHeight(PlayerObject* player, int type) -> decltype(getGroundHeight(player, type)) {
	using FunctionType = decltype(getGroundHeight(player, type))(*)(GJBaseGameLayer*, PlayerObject*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x100060, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, player, type);
}

auto GJBaseGameLayer::getGroundHeightForMode(int type) -> decltype(getGroundHeightForMode(type)) {
	using FunctionType = decltype(getGroundHeightForMode(type))(*)(GJBaseGameLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x100000, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, type);
}

auto GJBaseGameLayer::getGroup(int id) -> decltype(getGroup(id)) {
	using FunctionType = decltype(getGroup(id))(*)(GJBaseGameLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xfa290, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto GJBaseGameLayer::getItemValue(int type, int id) -> decltype(getItemValue(type, id)) {
	using FunctionType = decltype(getItemValue(type, id))(*)(GJBaseGameLayer*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x12a0f0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, type, id);
}

auto GJBaseGameLayer::getMaxPortalY() -> decltype(getMaxPortalY()) {
	using FunctionType = decltype(getMaxPortalY())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1031c0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::getMinDistance(cocos2d::CCPoint position, cocos2d::CCArray* objects, float minNear, int mode) -> decltype(getMinDistance(position, objects, minNear, mode)) {
	using FunctionType = decltype(getMinDistance(position, objects, minNear, mode))(*)(GJBaseGameLayer*, cocos2d::CCPoint, cocos2d::CCArray*, float, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x13e550, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, position, objects, minNear, mode);
}

auto GJBaseGameLayer::getMinPortalY() -> decltype(getMinPortalY()) {
	using FunctionType = decltype(getMinPortalY())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1030e0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::getModifiedDelta(float dt) -> decltype(getModifiedDelta(dt)) {
	using FunctionType = decltype(getModifiedDelta(dt))(*)(GJBaseGameLayer*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x12f180, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, dt);
}

auto GJBaseGameLayer::getOptimizedGroup(int groupID) -> decltype(getOptimizedGroup(groupID)) {
	using FunctionType = decltype(getOptimizedGroup(groupID))(*)(GJBaseGameLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x11a560, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, groupID);
}

auto GJBaseGameLayer::getOtherPlayer(PlayerObject* player) -> decltype(getOtherPlayer(player)) {
	using FunctionType = decltype(getOtherPlayer(player))(*)(GJBaseGameLayer*, PlayerObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x100170, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, player);
}

auto GJBaseGameLayer::getParticleKey(int objectType, char const* plistName, int tag, cocos2d::tCCPositionType positionType) -> decltype(getParticleKey(objectType, plistName, tag, positionType)) {
	using FunctionType = decltype(getParticleKey(objectType, plistName, tag, positionType))(*)(GJBaseGameLayer*, int, char const*, int, cocos2d::tCCPositionType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x13c2d0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, objectType, plistName, tag, positionType);
}

auto GJBaseGameLayer::getParticleKey2(std::string key) -> decltype(getParticleKey2(key)) {
	using FunctionType = decltype(getParticleKey2(key))(*)(GJBaseGameLayer*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x13c6c0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, key);
}

auto GJBaseGameLayer::getPlayerButtonID(int button, bool player2) -> decltype(getPlayerButtonID(button, player2)) {
	using FunctionType = decltype(getPlayerButtonID(button, player2))(*)(GJBaseGameLayer*, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1347e0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, button, player2);
}

auto GJBaseGameLayer::getPlayTimerFullSeconds() -> decltype(getPlayTimerFullSeconds()) {
	using FunctionType = decltype(getPlayTimerFullSeconds())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1343e0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::getPlayTimerMilli() -> decltype(getPlayTimerMilli()) {
	using FunctionType = decltype(getPlayTimerMilli())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1343c0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::getPortalTarget(TeleportPortalObject* object) -> decltype(getPortalTarget(object)) {
	using FunctionType = decltype(getPortalTarget(object))(*)(GJBaseGameLayer*, TeleportPortalObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xfd4b0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto GJBaseGameLayer::getPortalTargetPos(TeleportPortalObject* object, GameObject* target, PlayerObject* player) -> decltype(getPortalTargetPos(object, target, player)) {
	using FunctionType = decltype(getPortalTargetPos(object, target, player))(*)(GJBaseGameLayer*, TeleportPortalObject*, GameObject*, PlayerObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xfd5c0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, object, target, player);
}

auto GJBaseGameLayer::getRecordString(bool compress) -> decltype(getRecordString(compress)) {
	using FunctionType = decltype(getRecordString(compress))(*)(GJBaseGameLayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x136650, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, compress);
}

auto GJBaseGameLayer::getRotateCommandTargets(EnhancedTriggerObject* object, GameObject*& centerObject, GameObject*& targetObject, GameObject*& rotateObject) -> decltype(getRotateCommandTargets(object, centerObject, targetObject, rotateObject)) {
	using FunctionType = decltype(getRotateCommandTargets(object, centerObject, targetObject, rotateObject))(*)(GJBaseGameLayer*, EnhancedTriggerObject*, GameObject*&, GameObject*&, GameObject*&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1159a0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, object, centerObject, targetObject, rotateObject);
}

auto GJBaseGameLayer::getSavedPosition(int groupID, float delay) -> decltype(getSavedPosition(groupID, delay)) {
	using FunctionType = decltype(getSavedPosition(groupID, delay))(*)(GJBaseGameLayer*, int, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1096c0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, groupID, delay);
}

auto GJBaseGameLayer::getScaledGroundHeight(float height) -> decltype(getScaledGroundHeight(height)) {
	using FunctionType = decltype(getScaledGroundHeight(height))(*)(GJBaseGameLayer*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x108990, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, height);
}

auto GJBaseGameLayer::getSingleGroupObject(int groupID) -> decltype(getSingleGroupObject(groupID)) {
	using FunctionType = decltype(getSingleGroupObject(groupID))(*)(GJBaseGameLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x101b20, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, groupID);
}

auto GJBaseGameLayer::getSpecialKey(int groupID, bool ignoreGroupParent, bool ignoreLinkedObjects) -> decltype(getSpecialKey(groupID, ignoreGroupParent, ignoreLinkedObjects)) {
	using FunctionType = decltype(getSpecialKey(groupID, ignoreGroupParent, ignoreLinkedObjects))(*)(GJBaseGameLayer*, int, bool, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xfb170, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, groupID, ignoreGroupParent, ignoreLinkedObjects);
}

auto GJBaseGameLayer::getStartPosObjectsForCurrentMode() -> decltype(getStartPosObjectsForCurrentMode()) {
	using FunctionType = decltype(getStartPosObjectsForCurrentMode())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x100940, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::getStaticGroup(int groupID) -> decltype(getStaticGroup(groupID)) {
	using FunctionType = decltype(getStaticGroup(groupID))(*)(GJBaseGameLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x11a5d0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, groupID);
}

auto GJBaseGameLayer::getStickyGroup(int group) -> decltype(getStickyGroup(group)) {
	using FunctionType = decltype(getStickyGroup(group))(*)(GJBaseGameLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x11c1f0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, group);
}

auto GJBaseGameLayer::getTargetFlyCameraY(GameObject* object) -> decltype(getTargetFlyCameraY(object)) {
	using FunctionType = decltype(getTargetFlyCameraY(object))(*)(GJBaseGameLayer*, GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x102ba0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto GJBaseGameLayer::getTargetGroup(int index, int uniqueID) -> decltype(getTargetGroup(index, uniqueID)) {
	using FunctionType = decltype(getTargetGroup(index, uniqueID))(*)(GJBaseGameLayer*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x11c860, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, index, uniqueID);
}

auto GJBaseGameLayer::getTargetGroupOrigin(int index, int uniqueID) -> decltype(getTargetGroupOrigin(index, uniqueID)) {
	using FunctionType = decltype(getTargetGroupOrigin(index, uniqueID))(*)(GJBaseGameLayer*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x11c890, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, index, uniqueID);
}

auto GJBaseGameLayer::gravBumpPlayer(PlayerObject* player, EffectGameObject* object) -> decltype(gravBumpPlayer(player, object)) {
	using FunctionType = decltype(gravBumpPlayer(player, object))(*)(GJBaseGameLayer*, PlayerObject*, EffectGameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x105c60, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, player, object);
}

auto GJBaseGameLayer::groupStickyObjects(cocos2d::CCArray* objects) -> decltype(groupStickyObjects(objects)) {
	using FunctionType = decltype(groupStickyObjects(objects))(*)(GJBaseGameLayer*, cocos2d::CCArray*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x11c210, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, objects);
}

auto GJBaseGameLayer::handleButton(bool down, int button, bool isPlayer1) -> decltype(handleButton(down, button, isPlayer1)) {
	using FunctionType = decltype(handleButton(down, button, isPlayer1))(*)(GJBaseGameLayer*, bool, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x128ec0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, down, button, isPlayer1);
}

auto GJBaseGameLayer::hasUniqueCoin(EffectGameObject* object) -> decltype(hasUniqueCoin(object)) {
	using FunctionType = decltype(hasUniqueCoin(object))(*)(GJBaseGameLayer*, EffectGameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1063b0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto GJBaseGameLayer::increaseBatchNodeCapacity() -> decltype(increaseBatchNodeCapacity()) {
	using FunctionType = decltype(increaseBatchNodeCapacity())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xf16b0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::isFlipping() -> decltype(isFlipping()) {
	using FunctionType = decltype(isFlipping())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x134350, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::isPlayer2Button(int button) -> decltype(isPlayer2Button(button)) {
	using FunctionType = decltype(isPlayer2Button(button))(*)(GJBaseGameLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1347d0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, button);
}

auto GJBaseGameLayer::lightningFlash(cocos2d::CCPoint to, cocos2d::ccColor3B color) -> decltype(lightningFlash(to, color)) {
	using FunctionType = decltype(lightningFlash(to, color))(*)(GJBaseGameLayer*, cocos2d::CCPoint, cocos2d::ccColor3B);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x142dd0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, to, color);
}

auto GJBaseGameLayer::lightningFlash(cocos2d::CCPoint from, cocos2d::CCPoint to, cocos2d::ccColor3B color, float lineWidth, float duration, int displacement, bool flash, float opacity) -> decltype(lightningFlash(from, to, color, lineWidth, duration, displacement, flash, opacity)) {
	using FunctionType = decltype(lightningFlash(from, to, color, lineWidth, duration, displacement, flash, opacity))(*)(GJBaseGameLayer*, cocos2d::CCPoint, cocos2d::CCPoint, cocos2d::ccColor3B, float, float, int, bool, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xfd640, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, from, to, color, lineWidth, duration, displacement, flash, opacity);
}

auto GJBaseGameLayer::loadLevelSettings() -> decltype(loadLevelSettings()) {
	using FunctionType = decltype(loadLevelSettings())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1380a0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::loadStartPosObject(StartPosObject* p0) -> decltype(loadStartPosObject(p0)) {
	using FunctionType = decltype(loadStartPosObject(p0))(*)(GJBaseGameLayer*, StartPosObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x12c2f0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto GJBaseGameLayer::loadUpToPosition(float position, int order, int channel) -> decltype(loadUpToPosition(position, order, channel)) {
	using FunctionType = decltype(loadUpToPosition(position, order, channel))(*)(GJBaseGameLayer*, float, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x12c540, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, position, order, channel);
}

auto GJBaseGameLayer::logPickupItem(EffectGameObject* p0) -> decltype(logPickupItem(p0)) {
	using FunctionType = decltype(logPickupItem(p0))(*)(GJBaseGameLayer*, EffectGameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1062a0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto GJBaseGameLayer::maxZOrderForShaderZ(int zLayer) -> decltype(maxZOrderForShaderZ(zLayer)) {
	using FunctionType = decltype(maxZOrderForShaderZ(zLayer))(*)(GJBaseGameLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x116ec0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, zLayer);
}

auto GJBaseGameLayer::minZOrderForShaderZ(int zLayer) -> decltype(minZOrderForShaderZ(zLayer)) {
	using FunctionType = decltype(minZOrderForShaderZ(zLayer))(*)(GJBaseGameLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x119bb0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, zLayer);
}

auto GJBaseGameLayer::modifyGroupPhysics(AdvancedFollowEditObject* object, cocos2d::CCArray* group) -> decltype(modifyGroupPhysics(object, group)) {
	using FunctionType = decltype(modifyGroupPhysics(object, group))(*)(GJBaseGameLayer*, AdvancedFollowEditObject*, cocos2d::CCArray*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1268a0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, object, group);
}

auto GJBaseGameLayer::modifyObjectPhysics(AdvancedFollowEditObject* object, GameObjectPhysics& physics) -> decltype(modifyObjectPhysics(object, physics)) {
	using FunctionType = decltype(modifyObjectPhysics(object, physics))(*)(GJBaseGameLayer*, AdvancedFollowEditObject*, GameObjectPhysics&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x126ae0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, object, physics);
}

auto GJBaseGameLayer::moveCameraToPos(cocos2d::CCPoint pos) -> decltype(moveCameraToPos(pos)) {
	using FunctionType = decltype(moveCameraToPos(pos))(*)(GJBaseGameLayer*, cocos2d::CCPoint);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x13b080, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, pos);
}

auto GJBaseGameLayer::moveObject(GameObject* object, double dx, double dy, bool lockPlayerY) -> decltype(moveObject(object, dx, dy, lockPlayerY)) {
	using FunctionType = decltype(moveObject(object, dx, dy, lockPlayerY))(*)(GJBaseGameLayer*, GameObject*, double, double, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x125fc0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, object, dx, dy, lockPlayerY);
}

auto GJBaseGameLayer::moveObjects(cocos2d::CCArray* objects, double dx, double dy, bool lockPlayerY) -> decltype(moveObjects(objects, dx, dy, lockPlayerY)) {
	using FunctionType = decltype(moveObjects(objects, dx, dy, lockPlayerY))(*)(GJBaseGameLayer*, cocos2d::CCArray*, double, double, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x125ca0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, objects, dx, dy, lockPlayerY);
}

auto GJBaseGameLayer::moveObjectsSilent(int groupId, double dx, double dy) -> decltype(moveObjectsSilent(groupId, dx, dy)) {
	using FunctionType = decltype(moveObjectsSilent(groupId, dx, dy))(*)(GJBaseGameLayer*, int, double, double);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x115660, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, groupId, dx, dy);
}

auto GJBaseGameLayer::moveObjectToStaticGroup(GameObject* object) -> decltype(moveObjectToStaticGroup(object)) {
	using FunctionType = decltype(moveObjectToStaticGroup(object))(*)(GJBaseGameLayer*, GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x128970, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto GJBaseGameLayer::objectIntersectsCircle(GameObject* object, GameObject* circle) -> decltype(objectIntersectsCircle(object, circle)) {
	using FunctionType = decltype(objectIntersectsCircle(object, circle))(*)(GJBaseGameLayer*, GameObject*, GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1002d0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, object, circle);
}

auto GJBaseGameLayer::objectTypeToGameEvent(int type) -> decltype(objectTypeToGameEvent(type)) {
	using FunctionType = decltype(objectTypeToGameEvent(type))(*)(GJBaseGameLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x102760, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, type);
}

auto GJBaseGameLayer::optimizeMoveGroups() -> decltype(optimizeMoveGroups()) {
	using FunctionType = decltype(optimizeMoveGroups())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x7c3c0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::orderSpawnObjects() -> decltype(orderSpawnObjects()) {
	using FunctionType = decltype(orderSpawnObjects())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x141b90, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::parentForZLayer(int zLayer, bool blending, int parentMode, int uiObject) -> decltype(parentForZLayer(zLayer, blending, parentMode, uiObject)) {
	using FunctionType = decltype(parentForZLayer(zLayer, blending, parentMode, uiObject))(*)(GJBaseGameLayer*, int, bool, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xfc0f0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, zLayer, blending, parentMode, uiObject);
}

auto GJBaseGameLayer::pauseAudio() -> decltype(pauseAudio()) {
	using FunctionType = decltype(pauseAudio())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x12f080, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::performMathOperation(double operand1, double operand2, int operation) -> decltype(performMathOperation(operand1, operand2, operation)) {
	using FunctionType = decltype(performMathOperation(operand1, operand2, operation))(*)(GJBaseGameLayer*, double, double, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x12a160, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, operand1, operand2, operation);
}

auto GJBaseGameLayer::performMathRounding(double value, int type) -> decltype(performMathRounding(value, type)) {
	using FunctionType = decltype(performMathRounding(value, type))(*)(GJBaseGameLayer*, double, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x12a1c0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, value, type);
}

auto GJBaseGameLayer::pickupItem(EffectGameObject* object) -> decltype(pickupItem(object)) {
	using FunctionType = decltype(pickupItem(object))(*)(GJBaseGameLayer*, EffectGameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1064b0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto GJBaseGameLayer::playAnimationCommand(int id, int groupID) -> decltype(playAnimationCommand(id, groupID)) {
	using FunctionType = decltype(playAnimationCommand(id, groupID))(*)(GJBaseGameLayer*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x108190, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id, groupID);
}

auto GJBaseGameLayer::playerCircleCollision(PlayerObject* player, GameObject* object) -> decltype(playerCircleCollision(player, object)) {
	using FunctionType = decltype(playerCircleCollision(player, object))(*)(GJBaseGameLayer*, PlayerObject*, GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1001a0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, player, object);
}

auto GJBaseGameLayer::playerIntersectsCircle(PlayerObject* player, GameObject* object) -> decltype(playerIntersectsCircle(player, object)) {
	using FunctionType = decltype(playerIntersectsCircle(player, object))(*)(GJBaseGameLayer*, PlayerObject*, GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x100240, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, player, object);
}

auto GJBaseGameLayer::playerTouchedObject(PlayerObject* player, GameObject* object) -> decltype(playerTouchedObject(player, object)) {
	using FunctionType = decltype(playerTouchedObject(player, object))(*)(GJBaseGameLayer*, PlayerObject*, GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x107fd0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, player, object);
}

auto GJBaseGameLayer::playerTouchedRing(PlayerObject* player, RingObject* object) -> decltype(playerTouchedRing(player, object)) {
	using FunctionType = decltype(playerTouchedRing(player, object))(*)(GJBaseGameLayer*, PlayerObject*, RingObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x105e90, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, player, object);
}

auto GJBaseGameLayer::playerTouchedTrigger(PlayerObject* player, EffectGameObject* object) -> decltype(playerTouchedTrigger(player, object)) {
	using FunctionType = decltype(playerTouchedTrigger(player, object))(*)(GJBaseGameLayer*, PlayerObject*, EffectGameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x105f40, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, player, object);
}

auto GJBaseGameLayer::playerWasTouchingObject(PlayerObject* player, GameObject* object) -> decltype(playerWasTouchingObject(player, object)) {
	using FunctionType = decltype(playerWasTouchingObject(player, object))(*)(GJBaseGameLayer*, PlayerObject*, GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x107f80, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, player, object);
}

auto GJBaseGameLayer::playerWillSwitchMode(PlayerObject* player, GameObject* object) -> decltype(playerWillSwitchMode(player, object)) {
	using FunctionType = decltype(playerWillSwitchMode(player, object))(*)(GJBaseGameLayer*, PlayerObject*, GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x102490, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, player, object);
}

auto GJBaseGameLayer::playExitDualEffect(PlayerObject* player) -> decltype(playExitDualEffect(player)) {
	using FunctionType = decltype(playExitDualEffect(player))(*)(GJBaseGameLayer*, PlayerObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x107290, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, player);
}

auto GJBaseGameLayer::playFlashEffect(float duration, int flashes, float unknown) -> decltype(playFlashEffect(duration, flashes, unknown)) {
	using FunctionType = decltype(playFlashEffect(duration, flashes, unknown))(*)(GJBaseGameLayer*, float, int, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x142ed0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, duration, flashes, unknown);
}

auto GJBaseGameLayer::playKeyframeAnimation(KeyframeAnimTriggerObject* object, std::vector<int> const& remapKeys) -> decltype(playKeyframeAnimation(object, remapKeys)) {
	using FunctionType = decltype(playKeyframeAnimation(object, remapKeys))(*)(GJBaseGameLayer*, KeyframeAnimTriggerObject*, std::vector<int> const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x108250, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, object, remapKeys);
}

auto GJBaseGameLayer::playSpeedParticle(float timeMod) -> decltype(playSpeedParticle(timeMod)) {
	using FunctionType = decltype(playSpeedParticle(timeMod))(*)(GJBaseGameLayer*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x13c150, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, timeMod);
}

auto GJBaseGameLayer::prepareTransformParent(bool rotateNode) -> decltype(prepareTransformParent(rotateNode)) {
	using FunctionType = decltype(prepareTransformParent(rotateNode))(*)(GJBaseGameLayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1226d0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, rotateNode);
}

auto GJBaseGameLayer::preResumeGame() -> decltype(preResumeGame()) {
	using FunctionType = decltype(preResumeGame())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x12f070, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::preUpdateVisibility(float dt) -> decltype(preUpdateVisibility(dt)) {
	using FunctionType = decltype(preUpdateVisibility(dt))(*)(GJBaseGameLayer*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x12d340, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, dt);
}

auto GJBaseGameLayer::processActivatedAudioTriggers(float levelTime) -> decltype(processActivatedAudioTriggers(levelTime)) {
	using FunctionType = decltype(processActivatedAudioTriggers(levelTime))(*)(GJBaseGameLayer*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x13fb40, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, levelTime);
}

auto GJBaseGameLayer::processAdvancedFollowActions(float dt) -> decltype(processAdvancedFollowActions(dt)) {
	using FunctionType = decltype(processAdvancedFollowActions(dt))(*)(GJBaseGameLayer*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x124dc0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, dt);
}

auto GJBaseGameLayer::processAreaFadeGroupAction(cocos2d::CCArray* objects, EnterEffectInstance* instance, cocos2d::CCPoint position, bool targetGroups) -> decltype(processAreaFadeGroupAction(objects, instance, position, targetGroups)) {
	using FunctionType = decltype(processAreaFadeGroupAction(objects, instance, position, targetGroups))(*)(GJBaseGameLayer*, cocos2d::CCArray*, EnterEffectInstance*, cocos2d::CCPoint, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x120de0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, objects, instance, position, targetGroups);
}

auto GJBaseGameLayer::processAreaMoveGroupAction(cocos2d::CCArray* objects, EnterEffectInstance* instance, cocos2d::CCPoint position, int outerMin, int outerMax, int middleMin, int middleMax, int startIndex, bool targetGroups, bool reset) -> decltype(processAreaMoveGroupAction(objects, instance, position, outerMin, outerMax, middleMin, middleMax, startIndex, targetGroups, reset)) {
	using FunctionType = decltype(processAreaMoveGroupAction(objects, instance, position, outerMin, outerMax, middleMin, middleMax, startIndex, targetGroups, reset))(*)(GJBaseGameLayer*, cocos2d::CCArray*, EnterEffectInstance*, cocos2d::CCPoint, int, int, int, int, int, bool, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1205c0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, objects, instance, position, outerMin, outerMax, middleMin, middleMax, startIndex, targetGroups, reset);
}

auto GJBaseGameLayer::processAreaRotateGroupAction(cocos2d::CCArray* objects, EnterEffectInstance* instance, cocos2d::CCPoint position, int outerMin, int outerMax, int middleMin, int middleMax, int startIndex, bool targetGroups, bool reset) -> decltype(processAreaRotateGroupAction(objects, instance, position, outerMin, outerMax, middleMin, middleMax, startIndex, targetGroups, reset)) {
	using FunctionType = decltype(processAreaRotateGroupAction(objects, instance, position, outerMin, outerMax, middleMin, middleMax, startIndex, targetGroups, reset))(*)(GJBaseGameLayer*, cocos2d::CCArray*, EnterEffectInstance*, cocos2d::CCPoint, int, int, int, int, int, bool, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x120290, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, objects, instance, position, outerMin, outerMax, middleMin, middleMax, startIndex, targetGroups, reset);
}

auto GJBaseGameLayer::processAreaTintGroupAction(cocos2d::CCArray* objects, EnterEffectInstance* instance, cocos2d::CCPoint position, bool targetGroups) -> decltype(processAreaTintGroupAction(objects, instance, position, targetGroups)) {
	using FunctionType = decltype(processAreaTintGroupAction(objects, instance, position, targetGroups))(*)(GJBaseGameLayer*, cocos2d::CCArray*, EnterEffectInstance*, cocos2d::CCPoint, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x121030, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, objects, instance, position, targetGroups);
}

auto GJBaseGameLayer::processAreaTransformGroupAction(cocos2d::CCArray* objects, EnterEffectInstance* instance, cocos2d::CCPoint position, int outerMin, int outerMax, int middleMin, int middleMax, int startIndex, bool targetGroups, bool reset) -> decltype(processAreaTransformGroupAction(objects, instance, position, outerMin, outerMax, middleMin, middleMax, startIndex, targetGroups, reset)) {
	using FunctionType = decltype(processAreaTransformGroupAction(objects, instance, position, outerMin, outerMax, middleMin, middleMax, startIndex, targetGroups, reset))(*)(GJBaseGameLayer*, cocos2d::CCArray*, EnterEffectInstance*, cocos2d::CCPoint, int, int, int, int, int, bool, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x11fe50, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, objects, instance, position, outerMin, outerMax, middleMin, middleMax, startIndex, targetGroups, reset);
}

auto GJBaseGameLayer::processAreaVisualActions(float dt) -> decltype(processAreaVisualActions(dt)) {
	using FunctionType = decltype(processAreaVisualActions(dt))(*)(GJBaseGameLayer*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x121dc0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, dt);
}

auto GJBaseGameLayer::processCameraObject(GameObject* object, PlayerObject* player) -> decltype(processCameraObject(object, player)) {
	using FunctionType = decltype(processCameraObject(object, player))(*)(GJBaseGameLayer*, GameObject*, PlayerObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x100450, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, object, player);
}

auto GJBaseGameLayer::processCommands(float dt, bool isHalfTick, bool isLastTick) -> decltype(processCommands(dt, isHalfTick, isLastTick)) {
	using FunctionType = decltype(processCommands(dt, isHalfTick, isLastTick))(*)(GJBaseGameLayer*, float, bool, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1312d0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, dt, isHalfTick, isLastTick);
}

auto GJBaseGameLayer::processDynamicObjectActions(int type, float dt) -> decltype(processDynamicObjectActions(type, dt)) {
	using FunctionType = decltype(processDynamicObjectActions(type, dt))(*)(GJBaseGameLayer*, int, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x122ca0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, type, dt);
}

auto GJBaseGameLayer::processItems() -> decltype(processItems()) {
	using FunctionType = decltype(processItems())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x106f80, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::processMoveActions() -> decltype(processMoveActions()) {
	using FunctionType = decltype(processMoveActions())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x124900, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::processMoveActionsStep(float dt, bool visibleFrame) -> decltype(processMoveActionsStep(dt, visibleFrame)) {
	using FunctionType = decltype(processMoveActionsStep(dt, visibleFrame))(*)(GJBaseGameLayer*, float, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x122b70, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, dt, visibleFrame);
}

auto GJBaseGameLayer::processOptionsTrigger(GameOptionsTrigger* object) -> decltype(processOptionsTrigger(object)) {
	using FunctionType = decltype(processOptionsTrigger(object))(*)(GJBaseGameLayer*, GameOptionsTrigger*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x11a0f0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto GJBaseGameLayer::processPlayerFollowActions(float dt) -> decltype(processPlayerFollowActions(dt)) {
	using FunctionType = decltype(processPlayerFollowActions(dt))(*)(GJBaseGameLayer*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x124af0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, dt);
}

auto GJBaseGameLayer::processQueuedAudioTriggers() -> decltype(processQueuedAudioTriggers()) {
	using FunctionType = decltype(processQueuedAudioTriggers())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x139730, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::processQueuedButtons(float dt, bool clearInputQueue) -> decltype(processQueuedButtons(dt, clearInputQueue)) {
	using FunctionType = decltype(processQueuedButtons(dt, clearInputQueue))(*)(GJBaseGameLayer*, float, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x128da0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, dt, clearInputQueue);
}

auto GJBaseGameLayer::processRotationActions() -> decltype(processRotationActions()) {
	using FunctionType = decltype(processRotationActions())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1240c0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::processSFXObjects() -> decltype(processSFXObjects()) {
	using FunctionType = decltype(processSFXObjects())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xf9e20, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::processSFXState(SFXTriggerState* state1, SFXTriggerState* state2, int type, float levelTime) -> decltype(processSFXState(state1, state2, type, levelTime)) {
	using FunctionType = decltype(processSFXState(state1, state2, type, levelTime))(*)(GJBaseGameLayer*, SFXTriggerState*, SFXTriggerState*, int, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x13f3b0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, state1, state2, type, levelTime);
}

auto GJBaseGameLayer::processSongState(int musicID, float spawnDelay, float levelTime, int songOffset, float volume, float speed, std::vector<SongTriggerState>* states, SongTriggerGameObject* object) -> decltype(processSongState(musicID, spawnDelay, levelTime, songOffset, volume, speed, states, object)) {
	using FunctionType = decltype(processSongState(musicID, spawnDelay, levelTime, songOffset, volume, speed, states, object))(*)(GJBaseGameLayer*, int, float, float, int, float, float, std::vector<SongTriggerState>*, SongTriggerGameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1415a0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, musicID, spawnDelay, levelTime, songOffset, volume, speed, states, object);
}

auto GJBaseGameLayer::processStartPosObjects() -> decltype(processStartPosObjects()) {
	using FunctionType = decltype(processStartPosObjects())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x100c10, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::processStateObjects() -> decltype(processStateObjects()) {
	using FunctionType = decltype(processStateObjects())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x108710, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::processTransformActions(bool visibleFrame) -> decltype(processTransformActions(visibleFrame)) {
	using FunctionType = decltype(processTransformActions(visibleFrame))(*)(GJBaseGameLayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x123290, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, visibleFrame);
}

auto GJBaseGameLayer::queueButton(int button, bool push, bool isPlayer2, double timestamp) -> decltype(queueButton(button, push, isPlayer2, timestamp)) {
	using FunctionType = decltype(queueButton(button, push, isPlayer2, timestamp))(*)(GJBaseGameLayer*, int, bool, bool, double);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x128c20, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, button, push, isPlayer2, timestamp);
}

auto GJBaseGameLayer::queueTimeWarp(float timeWarp) -> decltype(queueTimeWarp(timeWarp)) {
	using FunctionType = decltype(queueTimeWarp(timeWarp))(*)(GJBaseGameLayer*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x12d200, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, timeWarp);
}

auto GJBaseGameLayer::reAddToStickyGroup(GameObject* object) -> decltype(reAddToStickyGroup(object)) {
	using FunctionType = decltype(reAddToStickyGroup(object))(*)(GJBaseGameLayer*, GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x11c590, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto GJBaseGameLayer::rectIntersectsCircle(cocos2d::CCRect rect, cocos2d::CCPoint center, float radius) -> decltype(rectIntersectsCircle(rect, center, radius)) {
	using FunctionType = decltype(rectIntersectsCircle(rect, center, radius))(*)(GJBaseGameLayer*, cocos2d::CCRect, cocos2d::CCPoint, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xffe50, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, rect, center, radius);
}

auto GJBaseGameLayer::refreshCounterLabels() -> decltype(refreshCounterLabels()) {
	using FunctionType = decltype(refreshCounterLabels())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x12bda0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::refreshKeyframeAnims() -> decltype(refreshKeyframeAnims()) {
	using FunctionType = decltype(refreshKeyframeAnims())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xf9c30, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::regenerateEnterEasingBuffers() -> decltype(regenerateEnterEasingBuffers()) {
	using FunctionType = decltype(regenerateEnterEasingBuffers())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xf38a0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::registerSpawnRemap(std::vector<ChanceObject>& spawnRemap) -> decltype(registerSpawnRemap(spawnRemap)) {
	using FunctionType = decltype(registerSpawnRemap(spawnRemap))(*)(GJBaseGameLayer*, std::vector<ChanceObject>&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1135f0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, spawnRemap);
}

auto GJBaseGameLayer::registerStateObject(EffectGameObject* object) -> decltype(registerStateObject(object)) {
	using FunctionType = decltype(registerStateObject(object))(*)(GJBaseGameLayer*, EffectGameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1086c0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto GJBaseGameLayer::removeBackground() -> decltype(removeBackground()) {
	using FunctionType = decltype(removeBackground())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xf07f0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::removeCustomEnterEffects(int id, bool enter) -> decltype(removeCustomEnterEffects(id, enter)) {
	using FunctionType = decltype(removeCustomEnterEffects(id, enter))(*)(GJBaseGameLayer*, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xfad00, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id, enter);
}

auto GJBaseGameLayer::removeFromGroups(GameObject* object) -> decltype(removeFromGroups(object)) {
	using FunctionType = decltype(removeFromGroups(object))(*)(GJBaseGameLayer*, GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x11a640, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto GJBaseGameLayer::removeFromStickyGroup(GameObject* object) -> decltype(removeFromStickyGroup(object)) {
	using FunctionType = decltype(removeFromStickyGroup(object))(*)(GJBaseGameLayer*, GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x11c500, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto GJBaseGameLayer::removeGroundLayer() -> decltype(removeGroundLayer()) {
	using FunctionType = decltype(removeGroundLayer())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xf0f20, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::removeKeyframe(KeyframeGameObject* object) -> decltype(removeKeyframe(object)) {
	using FunctionType = decltype(removeKeyframe(object))(*)(GJBaseGameLayer*, KeyframeGameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x129be0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto GJBaseGameLayer::removeMiddleground() -> decltype(removeMiddleground()) {
	using FunctionType = decltype(removeMiddleground())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xf0ef0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::removeObjectFromSection(GameObject* object) -> decltype(removeObjectFromSection(object)) {
	using FunctionType = decltype(removeObjectFromSection(object))(*)(GJBaseGameLayer*, GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x11cd20, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto GJBaseGameLayer::removePlayer2() -> decltype(removePlayer2()) {
	using FunctionType = decltype(removePlayer2())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x107700, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::removeReleasedButtons() -> decltype(removeReleasedButtons()) {
	using FunctionType = decltype(removeReleasedButtons())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x128ac0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::removeTemporaryParticles() -> decltype(removeTemporaryParticles()) {
	using FunctionType = decltype(removeTemporaryParticles())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1391f0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::reorderObjectSection(GameObject* object) -> decltype(reorderObjectSection(object)) {
	using FunctionType = decltype(reorderObjectSection(object))(*)(GJBaseGameLayer*, GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x108e50, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto GJBaseGameLayer::reparentObject(cocos2d::CCNode* node, cocos2d::CCNode* parent) -> decltype(reparentObject(node, parent)) {
	using FunctionType = decltype(reparentObject(node, parent))(*)(GJBaseGameLayer*, cocos2d::CCNode*, cocos2d::CCNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x119b30, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, node, parent);
}

auto GJBaseGameLayer::resetActiveEnterEffects() -> decltype(resetActiveEnterEffects()) {
	using FunctionType = decltype(resetActiveEnterEffects())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xfa330, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::resetAreaObjectValues(GameObject* object, bool update) -> decltype(resetAreaObjectValues(object, update)) {
	using FunctionType = decltype(resetAreaObjectValues(object, update))(*)(GJBaseGameLayer*, GameObject*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x11fa00, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, object, update);
}

auto GJBaseGameLayer::resetAudio() -> decltype(resetAudio()) {
	using FunctionType = decltype(resetAudio())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x12f0f0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::resetCamera() -> decltype(resetCamera()) {
	using FunctionType = decltype(resetCamera())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1392c0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::resetGradientLayers() -> decltype(resetGradientLayers()) {
	using FunctionType = decltype(resetGradientLayers())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x116cb0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::resetGroupCounters(bool reset) -> decltype(resetGroupCounters(reset)) {
	using FunctionType = decltype(resetGroupCounters(reset))(*)(GJBaseGameLayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x12c0f0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, reset);
}

auto GJBaseGameLayer::resetLevelVariables() -> decltype(resetLevelVariables()) {
	using FunctionType = decltype(resetLevelVariables())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1384f0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::resetMoveOptimizedValue() -> decltype(resetMoveOptimizedValue()) {
	using FunctionType = decltype(resetMoveOptimizedValue())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x128910, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::resetPlayer() -> decltype(resetPlayer()) {
	using FunctionType = decltype(resetPlayer())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1004e0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::resetRecord(int steps, bool loadedSave) -> decltype(resetRecord(steps, loadedSave)) {
	using FunctionType = decltype(resetRecord(steps, loadedSave))(*)(GJBaseGameLayer*, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x134ba0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, steps, loadedSave);
}

auto GJBaseGameLayer::resetRecordFull() -> decltype(resetRecordFull()) {
	using FunctionType = decltype(resetRecordFull())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x134ae0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::resetSongTriggerValues() -> decltype(resetSongTriggerValues()) {
	using FunctionType = decltype(resetSongTriggerValues())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x12c8e0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::resetSpawnChannelIndex() -> decltype(resetSpawnChannelIndex()) {
	using FunctionType = decltype(resetSpawnChannelIndex())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x684c0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::resetStaticCamera(bool resetX, bool resetY) -> decltype(resetStaticCamera(resetX, resetY)) {
	using FunctionType = decltype(resetStaticCamera(resetX, resetY))(*)(GJBaseGameLayer*, bool, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x102fc0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, resetX, resetY);
}

auto GJBaseGameLayer::resetStoppedAreaObjects() -> decltype(resetStoppedAreaObjects()) {
	using FunctionType = decltype(resetStoppedAreaObjects())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x121d20, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::restoreAllUIObjects() -> decltype(restoreAllUIObjects()) {
	using FunctionType = decltype(restoreAllUIObjects())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x11cee0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::restoreDefaultGameplayOffsetX() -> decltype(restoreDefaultGameplayOffsetX()) {
	using FunctionType = decltype(restoreDefaultGameplayOffsetX())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x12d080, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::restoreDefaultGameplayOffsetY() -> decltype(restoreDefaultGameplayOffsetY()) {
	using FunctionType = decltype(restoreDefaultGameplayOffsetY())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x12d0c0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::restoreRemap(EffectGameObject* object, std::unordered_map<int, int>& remap) -> decltype(restoreRemap(object, remap)) {
	using FunctionType = decltype(restoreRemap(object, remap))(*)(GJBaseGameLayer*, EffectGameObject*, std::unordered_map<int, int>&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1111b0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, object, remap);
}

auto GJBaseGameLayer::resumeAudio() -> decltype(resumeAudio()) {
	using FunctionType = decltype(resumeAudio())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x12f0c0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::rotateAreaObjects(GameObject* object, cocos2d::CCArray* objects, float rotation, bool reset) -> decltype(rotateAreaObjects(object, objects, rotation, reset)) {
	using FunctionType = decltype(rotateAreaObjects(object, objects, rotation, reset))(*)(GJBaseGameLayer*, GameObject*, cocos2d::CCArray*, float, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x122740, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, object, objects, rotation, reset);
}

auto GJBaseGameLayer::rotateObject(GameObject* object, float rotation) -> decltype(rotateObject(object, rotation)) {
	using FunctionType = decltype(rotateObject(object, rotation))(*)(GJBaseGameLayer*, GameObject*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x125760, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, object, rotation);
}

auto GJBaseGameLayer::rotateObjects(cocos2d::CCArray* objects, float rotation, cocos2d::CCPoint position, cocos2d::CCPoint offset, bool finished, bool unused) -> decltype(rotateObjects(objects, rotation, position, offset, finished, unused)) {
	using FunctionType = decltype(rotateObjects(objects, rotation, position, offset, finished, unused))(*)(GJBaseGameLayer*, cocos2d::CCArray*, float, cocos2d::CCPoint, cocos2d::CCPoint, bool, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1257e0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, objects, rotation, position, offset, finished, unused);
}

auto GJBaseGameLayer::setActiveStartPosObject(StartPosObject* p0) -> decltype(setActiveStartPosObject(p0)) {
	using FunctionType = decltype(setActiveStartPosObject(p0))(*)(GJBaseGameLayer*, StartPosObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x100720, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto GJBaseGameLayer::setGroupParent(GameObject* object, int groupID) -> decltype(setGroupParent(object, groupID)) {
	using FunctionType = decltype(setGroupParent(object, groupID))(*)(GJBaseGameLayer*, GameObject*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x11ad00, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, object, groupID);
}

auto GJBaseGameLayer::setupLayers() -> decltype(setupLayers()) {
	using FunctionType = decltype(setupLayers())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xed8b0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::setupLevelStart(LevelSettingsObject* settings) -> decltype(setupLevelStart(settings)) {
	using FunctionType = decltype(setupLevelStart(settings))(*)(GJBaseGameLayer*, LevelSettingsObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x100da0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, settings);
}

auto GJBaseGameLayer::shakeCamera(float duration, float strength, float interval) -> decltype(shakeCamera(duration, strength, interval)) {
	using FunctionType = decltype(shakeCamera(duration, strength, interval))(*)(GJBaseGameLayer*, float, float, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x13a410, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, duration, strength, interval);
}

auto GJBaseGameLayer::shouldExitHackedLevel() -> decltype(shouldExitHackedLevel()) {
	using FunctionType = decltype(shouldExitHackedLevel())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xf0080, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::shouldUseSubstepForButton(float dt) -> decltype(shouldUseSubstepForButton(dt)) {
	using FunctionType = decltype(shouldUseSubstepForButton(dt))(*)(GJBaseGameLayer*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1290d0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, dt);
}

auto GJBaseGameLayer::sortAllGroupsX() -> decltype(sortAllGroupsX()) {
	using FunctionType = decltype(sortAllGroupsX())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x11a940, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::sortGroups() -> decltype(sortGroups()) {
	using FunctionType = decltype(sortGroups())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xf39e0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::sortSectionVector() -> decltype(sortSectionVector()) {
	using FunctionType = decltype(sortSectionVector())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x11dea0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::sortStartPosObjects() -> decltype(sortStartPosObjects()) {
	using FunctionType = decltype(sortStartPosObjects())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x100d20, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::sortStickyGroups() -> decltype(sortStickyGroups()) {
	using FunctionType = decltype(sortStickyGroups())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xf67a0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::spawnObjectsInOrder(cocos2d::CCArray* objects, double delay, std::vector<int> const& remapKeys, int uniqueID, int controlID) -> decltype(spawnObjectsInOrder(objects, delay, remapKeys, uniqueID, controlID)) {
	using FunctionType = decltype(spawnObjectsInOrder(objects, delay, remapKeys, uniqueID, controlID))(*)(GJBaseGameLayer*, cocos2d::CCArray*, double, std::vector<int> const&, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x10a770, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, objects, delay, remapKeys, uniqueID, controlID);
}

auto GJBaseGameLayer::spawnParticle(char const* plist, int zOrder, cocos2d::tCCPositionType positionType, cocos2d::CCPoint position) -> decltype(spawnParticle(plist, zOrder, positionType, position)) {
	using FunctionType = decltype(spawnParticle(plist, zOrder, positionType, position))(*)(GJBaseGameLayer*, char const*, int, cocos2d::tCCPositionType, cocos2d::CCPoint);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x13c0a0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, plist, zOrder, positionType, position);
}

auto GJBaseGameLayer::spawnParticleTrigger(SpawnParticleGameObject* object) -> decltype(spawnParticleTrigger(object)) {
	using FunctionType = decltype(spawnParticleTrigger(object))(*)(GJBaseGameLayer*, SpawnParticleGameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x13bec0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto GJBaseGameLayer::spawnParticleTrigger(int particleID, cocos2d::CCPoint position, float rotation, float scale) -> decltype(spawnParticleTrigger(particleID, position, rotation, scale)) {
	using FunctionType = decltype(spawnParticleTrigger(particleID, position, rotation, scale))(*)(GJBaseGameLayer*, int, cocos2d::CCPoint, float, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1065c0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, particleID, position, rotation, scale);
}

auto GJBaseGameLayer::spawnPlayer2() -> decltype(spawnPlayer2()) {
	using FunctionType = decltype(spawnPlayer2())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x107210, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::staticObjectsInRect(cocos2d::CCRect rect, bool enabledGroups) -> decltype(staticObjectsInRect(rect, enabledGroups)) {
	using FunctionType = decltype(staticObjectsInRect(rect, enabledGroups))(*)(GJBaseGameLayer*, cocos2d::CCRect, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xff3e0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, rect, enabledGroups);
}

auto GJBaseGameLayer::stopAllGroundActions() -> decltype(stopAllGroundActions()) {
	using FunctionType = decltype(stopAllGroundActions())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x84220, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::stopCameraShake() -> decltype(stopCameraShake()) {
	using FunctionType = decltype(stopCameraShake())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xc55f0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::stopCustomEnterEffect(EnterEffectObject* object) -> decltype(stopCustomEnterEffect(object)) {
	using FunctionType = decltype(stopCustomEnterEffect(object))(*)(GJBaseGameLayer*, EnterEffectObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xfb1a0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto GJBaseGameLayer::stopCustomEnterEffect(EnterEffectObject* object, bool enter) -> decltype(stopCustomEnterEffect(object, enter)) {
	using FunctionType = decltype(stopCustomEnterEffect(object, enter))(*)(GJBaseGameLayer*, EnterEffectObject*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xfb1f0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, object, enter);
}

auto GJBaseGameLayer::stopSFXTrigger(SFXTriggerGameObject* object) -> decltype(stopSFXTrigger(object)) {
	using FunctionType = decltype(stopSFXTrigger(object))(*)(GJBaseGameLayer*, SFXTriggerGameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x114310, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto GJBaseGameLayer::swapBackground(int background) -> decltype(swapBackground(background)) {
	using FunctionType = decltype(swapBackground(background))(*)(GJBaseGameLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xf0820, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, background);
}

auto GJBaseGameLayer::swapGround(int ground) -> decltype(swapGround(ground)) {
	using FunctionType = decltype(swapGround(ground))(*)(GJBaseGameLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xf0b50, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, ground);
}

auto GJBaseGameLayer::swapMiddleground(int middleground) -> decltype(swapMiddleground(middleground)) {
	using FunctionType = decltype(swapMiddleground(middleground))(*)(GJBaseGameLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xf0ca0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, middleground);
}

auto GJBaseGameLayer::switchToFlyMode(PlayerObject* player, GameObject* object, bool noPortal, int type) -> decltype(switchToFlyMode(player, object, noPortal, type)) {
	using FunctionType = decltype(switchToFlyMode(player, object, noPortal, type))(*)(GJBaseGameLayer*, PlayerObject*, GameObject*, bool, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x101bb0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, player, object, noPortal, type);
}

auto GJBaseGameLayer::syncBGTextures() -> decltype(syncBGTextures()) {
	using FunctionType = decltype(syncBGTextures())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1383e0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::teleportPlayer(TeleportPortalObject* object, PlayerObject* player) -> decltype(teleportPlayer(object, player)) {
	using FunctionType = decltype(teleportPlayer(object, player))(*)(GJBaseGameLayer*, TeleportPortalObject*, PlayerObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xfcdd0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, object, player);
}

auto GJBaseGameLayer::testInstantCountTrigger(int itemID, int compareCount, int groupID, bool activateGroup, int triggerMode, std::vector<int> const& remapKeys, int uniqueID, int controlID) -> decltype(testInstantCountTrigger(itemID, compareCount, groupID, activateGroup, triggerMode, remapKeys, uniqueID, controlID)) {
	using FunctionType = decltype(testInstantCountTrigger(itemID, compareCount, groupID, activateGroup, triggerMode, remapKeys, uniqueID, controlID))(*)(GJBaseGameLayer*, int, int, int, bool, int, std::vector<int> const&, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x129d90, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, itemID, compareCount, groupID, activateGroup, triggerMode, remapKeys, uniqueID, controlID);
}

auto GJBaseGameLayer::toggleAudioVisualizer(bool visible) -> decltype(toggleAudioVisualizer(visible)) {
	using FunctionType = decltype(toggleAudioVisualizer(visible))(*)(GJBaseGameLayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xed740, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, visible);
}

auto GJBaseGameLayer::toggleDualMode(GameObject* object, bool dual, PlayerObject* player, bool noEffects) -> decltype(toggleDualMode(object, dual, player, noEffects)) {
	using FunctionType = decltype(toggleDualMode(object, dual, player, noEffects))(*)(GJBaseGameLayer*, GameObject*, bool, PlayerObject*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1017a0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, object, dual, player, noEffects);
}

auto GJBaseGameLayer::toggleFlipped(bool flip, bool noEffects) -> decltype(toggleFlipped(flip, noEffects)) {
	using FunctionType = decltype(toggleFlipped(flip, noEffects))(*)(GJBaseGameLayer*, bool, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x101f00, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, flip, noEffects);
}

auto GJBaseGameLayer::toggleGroup(int id, bool activate) -> decltype(toggleGroup(id, activate)) {
	using FunctionType = decltype(toggleGroup(id, activate))(*)(GJBaseGameLayer*, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x119f40, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id, activate);
}

auto GJBaseGameLayer::toggleLockPlayer(bool disable, bool player2) -> decltype(toggleLockPlayer(disable, player2)) {
	using FunctionType = decltype(toggleLockPlayer(disable, player2))(*)(GJBaseGameLayer*, bool, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x11a390, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, disable, player2);
}

auto GJBaseGameLayer::togglePlayerStreakBlend(bool blend, bool force) -> decltype(togglePlayerStreakBlend(blend, force)) {
	using FunctionType = decltype(togglePlayerStreakBlend(blend, force))(*)(GJBaseGameLayer*, bool, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x11a310, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, blend, force);
}

auto GJBaseGameLayer::togglePlayerVisibility(bool visible) -> decltype(togglePlayerVisibility(visible)) {
	using FunctionType = decltype(togglePlayerVisibility(visible))(*)(GJBaseGameLayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x12c930, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, visible);
}

auto GJBaseGameLayer::togglePlayerVisibility(bool visible, bool player1) -> decltype(togglePlayerVisibility(visible, player1)) {
	using FunctionType = decltype(togglePlayerVisibility(visible, player1))(*)(GJBaseGameLayer*, bool, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x11a360, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, visible, player1);
}

auto GJBaseGameLayer::transformAreaObjects(GameObject* object, cocos2d::CCArray* objects, float scaleX, float scaleY, bool reset) -> decltype(transformAreaObjects(object, objects, scaleX, scaleY, reset)) {
	using FunctionType = decltype(transformAreaObjects(object, objects, scaleX, scaleY, reset))(*)(GJBaseGameLayer*, GameObject*, cocos2d::CCArray*, float, float, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x122150, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, object, objects, scaleX, scaleY, reset);
}

auto GJBaseGameLayer::triggerAdvancedFollowCommand(AdvancedFollowTriggerObject* object) -> decltype(triggerAdvancedFollowCommand(object)) {
	using FunctionType = decltype(triggerAdvancedFollowCommand(object))(*)(GJBaseGameLayer*, AdvancedFollowTriggerObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x116570, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto GJBaseGameLayer::triggerAdvancedFollowEditCommand(AdvancedFollowEditObject* object) -> decltype(triggerAdvancedFollowEditCommand(object)) {
	using FunctionType = decltype(triggerAdvancedFollowEditCommand(object))(*)(GJBaseGameLayer*, AdvancedFollowEditObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x126190, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto GJBaseGameLayer::triggerAreaEffect(EnterEffectObject* object) -> decltype(triggerAreaEffect(object)) {
	using FunctionType = decltype(triggerAreaEffect(object))(*)(GJBaseGameLayer*, EnterEffectObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x11e210, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto GJBaseGameLayer::triggerAreaEffectAnimation(EnterEffectObject* object) -> decltype(triggerAreaEffectAnimation(object)) {
	using FunctionType = decltype(triggerAreaEffectAnimation(object))(*)(GJBaseGameLayer*, EnterEffectObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x11e720, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto GJBaseGameLayer::triggerDynamicMoveCommand(EffectGameObject* object) -> decltype(triggerDynamicMoveCommand(object)) {
	using FunctionType = decltype(triggerDynamicMoveCommand(object))(*)(GJBaseGameLayer*, EffectGameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1155a0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto GJBaseGameLayer::triggerDynamicRotateCommand(EnhancedTriggerObject* object) -> decltype(triggerDynamicRotateCommand(object)) {
	using FunctionType = decltype(triggerDynamicRotateCommand(object))(*)(GJBaseGameLayer*, EnhancedTriggerObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x116010, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto GJBaseGameLayer::triggerGradientCommand(GradientTriggerObject* object) -> decltype(triggerGradientCommand(object)) {
	using FunctionType = decltype(triggerGradientCommand(object))(*)(GJBaseGameLayer*, GradientTriggerObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1167d0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto GJBaseGameLayer::triggerGravityChange(EffectGameObject* object, int playerID) -> decltype(triggerGravityChange(object, playerID)) {
	using FunctionType = decltype(triggerGravityChange(object, playerID))(*)(GJBaseGameLayer*, EffectGameObject*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x119cc0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, object, playerID);
}

auto GJBaseGameLayer::triggerMoveCommand(EffectGameObject* object) -> decltype(triggerMoveCommand(object)) {
	using FunctionType = decltype(triggerMoveCommand(object))(*)(GJBaseGameLayer*, EffectGameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x115280, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto GJBaseGameLayer::triggerRotateCommand(EnhancedTriggerObject* object) -> decltype(triggerRotateCommand(object)) {
	using FunctionType = decltype(triggerRotateCommand(object))(*)(GJBaseGameLayer*, EnhancedTriggerObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x115e20, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto GJBaseGameLayer::triggerShaderCommand(ShaderGameObject* object) -> decltype(triggerShaderCommand(object)) {
	using FunctionType = decltype(triggerShaderCommand(object))(*)(GJBaseGameLayer*, ShaderGameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x117f40, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto GJBaseGameLayer::tryGetGroupParent(int groupID) -> decltype(tryGetGroupParent(groupID)) {
	using FunctionType = decltype(tryGetGroupParent(groupID))(*)(GJBaseGameLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x11aab0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, groupID);
}

auto GJBaseGameLayer::tryGetMainObject(int groupID) -> decltype(tryGetMainObject(groupID)) {
	using FunctionType = decltype(tryGetMainObject(groupID))(*)(GJBaseGameLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1085f0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, groupID);
}

auto GJBaseGameLayer::tryGetObject(int groupID) -> decltype(tryGetObject(groupID)) {
	using FunctionType = decltype(tryGetObject(groupID))(*)(GJBaseGameLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x100640, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, groupID);
}

auto GJBaseGameLayer::tryResumeAudio() -> decltype(tryResumeAudio()) {
	using FunctionType = decltype(tryResumeAudio())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x12f120, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::unclaimParticle(char const* key, cocos2d::CCParticleSystemQuad* particle) -> decltype(unclaimParticle(key, particle)) {
	using FunctionType = decltype(unclaimParticle(key, particle))(*)(GJBaseGameLayer*, char const*, cocos2d::CCParticleSystemQuad*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x13cf80, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, key, particle);
}

auto GJBaseGameLayer::ungroupStickyObjects(cocos2d::CCArray* objects) -> decltype(ungroupStickyObjects(objects)) {
	using FunctionType = decltype(ungroupStickyObjects(objects))(*)(GJBaseGameLayer*, cocos2d::CCArray*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x11c330, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, objects);
}

auto GJBaseGameLayer::unlinkAllEvents() -> decltype(unlinkAllEvents()) {
	using FunctionType = decltype(unlinkAllEvents())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x129820, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::updateActiveEnterEffect(EnterEffectObject* object) -> decltype(updateActiveEnterEffect(object)) {
	using FunctionType = decltype(updateActiveEnterEffect(object))(*)(GJBaseGameLayer*, EnterEffectObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xfa3a0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto GJBaseGameLayer::updateAllObjectSection() -> decltype(updateAllObjectSection()) {
	using FunctionType = decltype(updateAllObjectSection())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x138380, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::updateAudioVisualizer() -> decltype(updateAudioVisualizer()) {
	using FunctionType = decltype(updateAudioVisualizer())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x131160, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::updateBGArtSpeed(float modX, float modY) -> decltype(updateBGArtSpeed(modX, modY)) {
	using FunctionType = decltype(updateBGArtSpeed(modX, modY))(*)(GJBaseGameLayer*, float, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x139060, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, modX, modY);
}

auto GJBaseGameLayer::updateCamera(float dt) -> decltype(updateCamera(dt)) {
	using FunctionType = decltype(updateCamera(dt))(*)(GJBaseGameLayer*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x131810, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, dt);
}

auto GJBaseGameLayer::updateCameraBGArt(cocos2d::CCPoint position, float zoom) -> decltype(updateCameraBGArt(position, zoom)) {
	using FunctionType = decltype(updateCameraBGArt(position, zoom))(*)(GJBaseGameLayer*, cocos2d::CCPoint, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x13a760, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, position, zoom);
}

auto GJBaseGameLayer::updateCameraEdge(int direction, int value) -> decltype(updateCameraEdge(direction, value)) {
	using FunctionType = decltype(updateCameraEdge(direction, value))(*)(GJBaseGameLayer*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x12cf60, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, direction, value);
}

auto GJBaseGameLayer::updateCameraMode(EffectGameObject* obj, bool updateDual) -> decltype(updateCameraMode(obj, updateDual)) {
	using FunctionType = decltype(updateCameraMode(obj, updateDual))(*)(GJBaseGameLayer*, EffectGameObject*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x102410, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, obj, updateDual);
}

auto GJBaseGameLayer::updateCounters(int itemId, int value) -> decltype(updateCounters(itemId, value)) {
	using FunctionType = decltype(updateCounters(itemId, value))(*)(GJBaseGameLayer*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x107ad0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, itemId, value);
}

auto GJBaseGameLayer::updateDualGround(PlayerObject* object, int mode, bool instant, float duration) -> decltype(updateDualGround(object, mode, instant, duration)) {
	using FunctionType = decltype(updateDualGround(object, mode, instant, duration))(*)(GJBaseGameLayer*, PlayerObject*, int, bool, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1020f0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, object, mode, instant, duration);
}

auto GJBaseGameLayer::updateEnterEffects(float dt) -> decltype(updateEnterEffects(dt)) {
	using FunctionType = decltype(updateEnterEffects(dt))(*)(GJBaseGameLayer*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xfb370, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, dt);
}

auto GJBaseGameLayer::updateExtendedCollision(GameObject* object, bool extendedCollision) -> decltype(updateExtendedCollision(object, extendedCollision)) {
	using FunctionType = decltype(updateExtendedCollision(object, extendedCollision))(*)(GJBaseGameLayer*, GameObject*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x11de50, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, object, extendedCollision);
}

auto GJBaseGameLayer::updateExtraGameLayers() -> decltype(updateExtraGameLayers()) {
	using FunctionType = decltype(updateExtraGameLayers())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x119bd0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::updateGameplayOffsetX(int offsetX, bool staticOffset) -> decltype(updateGameplayOffsetX(offsetX, staticOffset)) {
	using FunctionType = decltype(updateGameplayOffsetX(offsetX, staticOffset))(*)(GJBaseGameLayer*, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x12d0a0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, offsetX, staticOffset);
}

auto GJBaseGameLayer::updateGameplayOffsetY(int offsetY, bool staticOffset) -> decltype(updateGameplayOffsetY(offsetY, staticOffset)) {
	using FunctionType = decltype(updateGameplayOffsetY(offsetY, staticOffset))(*)(GJBaseGameLayer*, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x12d0e0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, offsetY, staticOffset);
}

auto GJBaseGameLayer::updateGradientLayers() -> decltype(updateGradientLayers()) {
	using FunctionType = decltype(updateGradientLayers())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x116ee0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::updateGroundShadows() -> decltype(updateGroundShadows()) {
	using FunctionType = decltype(updateGroundShadows())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xf0f70, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::updateGuideArt() -> decltype(updateGuideArt()) {
	using FunctionType = decltype(updateGuideArt())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x131090, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::updateInternalCamOffsetX(float offsetX, float duration, float easingRate) -> decltype(updateInternalCamOffsetX(offsetX, duration, easingRate)) {
	using FunctionType = decltype(updateInternalCamOffsetX(offsetX, duration, easingRate))(*)(GJBaseGameLayer*, float, float, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x13b370, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, offsetX, duration, easingRate);
}

auto GJBaseGameLayer::updateInternalCamOffsetY(float offsetY, float duration, float easingRate) -> decltype(updateInternalCamOffsetY(offsetY, duration, easingRate)) {
	using FunctionType = decltype(updateInternalCamOffsetY(offsetY, duration, easingRate))(*)(GJBaseGameLayer*, float, float, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x13b460, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, offsetY, duration, easingRate);
}

auto GJBaseGameLayer::updateKeyframeOrder(int keyframeGroup) -> decltype(updateKeyframeOrder(keyframeGroup)) {
	using FunctionType = decltype(updateKeyframeOrder(keyframeGroup))(*)(GJBaseGameLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x129ad0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, keyframeGroup);
}

auto GJBaseGameLayer::updateLegacyLayerCapacity(int front, int frontBlend, int back, int backBlend) -> decltype(updateLegacyLayerCapacity(front, frontBlend, back, backBlend)) {
	using FunctionType = decltype(updateLegacyLayerCapacity(front, frontBlend, back, backBlend))(*)(GJBaseGameLayer*, int, int, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xf1750, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, front, frontBlend, back, backBlend);
}

auto GJBaseGameLayer::updateLevelColors() -> decltype(updateLevelColors()) {
	using FunctionType = decltype(updateLevelColors())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xf08a0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::updateMaxGameplayY() -> decltype(updateMaxGameplayY()) {
	using FunctionType = decltype(updateMaxGameplayY())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x138290, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::updateMGArtSpeed(float modX, float modY) -> decltype(updateMGArtSpeed(modX, modY)) {
	using FunctionType = decltype(updateMGArtSpeed(modX, modY))(*)(GJBaseGameLayer*, float, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1390a0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, modX, modY);
}

auto GJBaseGameLayer::updateMGOffsetY(float offsetY, float duration, int easingType, float easingRate, int uniqueID, int controlID) -> decltype(updateMGOffsetY(offsetY, duration, easingType, easingRate, uniqueID, controlID)) {
	using FunctionType = decltype(updateMGOffsetY(offsetY, duration, easingType, easingRate, uniqueID, controlID))(*)(GJBaseGameLayer*, float, float, int, float, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x12d100, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, offsetY, duration, easingType, easingRate, uniqueID, controlID);
}

auto GJBaseGameLayer::updateOBB2(cocos2d::CCRect rect) -> decltype(updateOBB2(rect)) {
	using FunctionType = decltype(updateOBB2(rect))(*)(GJBaseGameLayer*, cocos2d::CCRect);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xffdd0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, rect);
}

auto GJBaseGameLayer::updateParticles(float dt) -> decltype(updateParticles(dt)) {
	using FunctionType = decltype(updateParticles(dt))(*)(GJBaseGameLayer*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x13db00, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, dt);
}

auto GJBaseGameLayer::updatePlatformerTime() -> decltype(updatePlatformerTime()) {
	using FunctionType = decltype(updatePlatformerTime())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x134410, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::updatePlayerCollisionBlocks() -> decltype(updatePlayerCollisionBlocks()) {
	using FunctionType = decltype(updatePlayerCollisionBlocks())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x108cb0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::updateProximityVolumeEffects() -> decltype(updateProximityVolumeEffects()) {
	using FunctionType = decltype(updateProximityVolumeEffects())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x134290, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::updateQueuedLabels() -> decltype(updateQueuedLabels()) {
	using FunctionType = decltype(updateQueuedLabels())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x12bce0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::updateReplay() -> decltype(updateReplay()) {
	using FunctionType = decltype(updateReplay())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1349f0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::updateSavePositionObjects() -> decltype(updateSavePositionObjects()) {
	using FunctionType = decltype(updateSavePositionObjects())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x109aa0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::updateShaderLayer(float dt) -> decltype(updateShaderLayer(dt)) {
	using FunctionType = decltype(updateShaderLayer(dt))(*)(GJBaseGameLayer*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x118950, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, dt);
}

auto GJBaseGameLayer::updateSpecialGroupData() -> decltype(updateSpecialGroupData()) {
	using FunctionType = decltype(updateSpecialGroupData())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xf36a0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::updateSpecialLabels() -> decltype(updateSpecialLabels()) {
	using FunctionType = decltype(updateSpecialLabels())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x133d40, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::updateStaticCameraPos(cocos2d::CCPoint pos, bool staticX, bool staticY, bool followOrSmoothEase, float time, int easingType, float easingRate) -> decltype(updateStaticCameraPos(pos, staticX, staticY, followOrSmoothEase, time, easingType, easingRate)) {
	using FunctionType = decltype(updateStaticCameraPos(pos, staticX, staticY, followOrSmoothEase, time, easingType, easingRate))(*)(GJBaseGameLayer*, cocos2d::CCPoint, bool, bool, bool, float, int, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x102c20, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, pos, staticX, staticY, followOrSmoothEase, time, easingType, easingRate);
}

auto GJBaseGameLayer::updateStaticCameraPosToGroup(int centerID, bool updateX, bool updateY, bool followObject, float followEase, float duration, int easingType, float easingRate, bool smoothVelocity, float velocityMod) -> decltype(updateStaticCameraPosToGroup(centerID, updateX, updateY, followObject, followEase, duration, easingType, easingRate, smoothVelocity, velocityMod)) {
	using FunctionType = decltype(updateStaticCameraPosToGroup(centerID, updateX, updateY, followObject, followEase, duration, easingType, easingRate, smoothVelocity, velocityMod))(*)(GJBaseGameLayer*, int, bool, bool, bool, float, float, int, float, bool, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x13b630, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, centerID, updateX, updateY, followObject, followEase, duration, easingType, easingRate, smoothVelocity, velocityMod);
}

auto GJBaseGameLayer::updateTimeMod(float speed, bool players, bool noEffects) -> decltype(updateTimeMod(speed, players, noEffects)) {
	using FunctionType = decltype(updateTimeMod(speed, players, noEffects))(*)(GJBaseGameLayer*, float, bool, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x102290, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, speed, players, noEffects);
}

auto GJBaseGameLayer::updateTimerLabels() -> decltype(updateTimerLabels()) {
	using FunctionType = decltype(updateTimerLabels())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x12b690, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::updateZoom(float zoom, float duration, int easing, float rate, int uniqueID, int controlID) -> decltype(updateZoom(zoom, duration, easing, rate, uniqueID, controlID)) {
	using FunctionType = decltype(updateZoom(zoom, duration, easing, rate, uniqueID, controlID))(*)(GJBaseGameLayer*, float, float, int, float, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x12c9a0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, zoom, duration, easing, rate, uniqueID, controlID);
}

auto GJBaseGameLayer::visitWithColorFlash() -> decltype(visitWithColorFlash()) {
	using FunctionType = decltype(visitWithColorFlash())(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1444d0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJBaseGameLayer::volumeForProximityEffect(SFXTriggerInstance& instance) -> decltype(volumeForProximityEffect(instance)) {
	using FunctionType = decltype(volumeForProximityEffect(instance))(*)(GJBaseGameLayer*, SFXTriggerInstance&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x13e170, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, instance);
}
