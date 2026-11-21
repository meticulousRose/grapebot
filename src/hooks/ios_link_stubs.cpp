#include <Geode/Geode.hpp>
#include <Geode/binding/GameObject.hpp>
#include <Geode/binding/PlayerObject.hpp>
#include <Geode/binding/GameManager.hpp>
#include <Geode/binding/FMODAudioEngine.hpp>
#include <Geode/binding/UndoObject.hpp>
#include <Geode/binding/EffectGameObject.hpp>
#include <Geode/binding/GJEffectManager.hpp>
#include <Geode/binding/CheckpointGameObject.hpp>
#include <Geode/binding/ForceBlockGameObject.hpp>
#include <Geode/binding/EditorUI.hpp>
#include <Geode/binding/OBB2D.hpp>
#include <Geode/Enums.hpp>

using namespace cocos2d;

#ifdef GEODE_IS_IOS

// The iOS bindings lack addresses for these functions, so Grape's references
// to them do not link. Neutral definitions satisfy the linker; bot features
// that depend on the real behavior degrade on iOS.

bool GameObject::isFacingDown() { return false; }
bool GameObject::isFacingLeft() { return false; }

void PlayerObject::copyAttributes(PlayerObject* player) {}
void PlayerObject::doReversePlayer(bool reverse) {}
bool PlayerObject::handleRotatedCollisionInternal(float dt, GameObject* object,
                                                  CCRect rect, bool skipCheck,
                                                  bool skipPre, bool slope) {
    return false;
}
bool PlayerObject::pushButton(PlayerButton button) { return false; }
bool PlayerObject::releaseButton(PlayerButton button) { return false; }
void PlayerObject::reversePlayer(EffectGameObject* object) {}
void PlayerObject::rotateGameplay(int moveDirection, int groundDirection,
                                  bool editVelocity, float velocityModX,
                                  float velocityModY, bool overrideVelocity,
                                  bool dontSlide) {}
void PlayerObject::runBallRotation(float speed) {}
void PlayerObject::runBallRotation2() {}
void PlayerObject::spiderTestJumpInternal(bool dynamic) {}
void PlayerObject::switchedToMode(GameObjectType type) {}
void PlayerObject::toggleBirdMode(bool enable, bool noEffects) {}
void PlayerObject::toggleDartMode(bool enable, bool noEffects) {}
void PlayerObject::toggleFlyMode(bool enable, bool noEffects) {}
void PlayerObject::toggleRobotMode(bool enable, bool noEffects) {}
void PlayerObject::toggleRollMode(bool enable, bool noEffects) {}
void PlayerObject::toggleSpiderMode(bool enable, bool noEffects) {}
void PlayerObject::toggleSwingMode(bool enable, bool noEffects) {}
void PlayerObject::updateTimeMod(float speed, bool noEffects) {}

int GameManager::activeIconForType(IconType type) { return 0; }

void FMODAudioEngine::stopAllEffects() {}

UndoObject* UndoObject::createWithTransformObjects(CCArray* objects,
                                                   UndoCommand command) {
    return nullptr;
}

void FMODAudioEngine::setEffectsVolume(float volume) {}
float FMODAudioEngine::getBackgroundMusicVolume() { return 1.f; }
void FMODAudioEngine::setBackgroundMusicVolume(float volume) {}

void GJEffectManager::saveToState(EffectManagerState& state) {}
void GJEffectManager::loadFromState(EffectManagerState& state) {}
void GJEffectManager::playerButton(bool down, bool player1) {}
ColorAction* GJEffectManager::getColorAction(int index) { return nullptr; }
void GJEffectManager::postCollisionCheck() {}

EffectManagerState::EffectManagerState() = default;

void LevelEditorLayer::addToUndoList(UndoObject* object, bool keepRedo) {}
void CheckpointGameObject::updateCheckpointSpriteVisibility() {}
CCPoint ForceBlockGameObject::calculateForceToTarget(GameObject* target) {
    return CCPointZero;
}
bool OBB2D::overlaps1Way(OBB2D* other) { return false; }
void EditorUI::moveObject(GameObject* object, CCPoint offset) {}
CCArray* EditorUI::getSelectedObjects() { return CCArray::create(); }

#endif
