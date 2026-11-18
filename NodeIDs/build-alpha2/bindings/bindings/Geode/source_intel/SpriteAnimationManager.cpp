#include <Geode/cocos/cocoa/CCObject.h>

#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/SpriteAnimationManager.hpp>
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

SpriteAnimationManager::~SpriteAnimationManager() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(SpriteAnimationManager*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x8035c0, tulip::hook::TulipConvention::Default);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) SpriteAnimationManager(geode::CutoffConstructor, sizeof(SpriteAnimationManager));
		geode::DestructorLock::addLock(this);
	}
}

auto SpriteAnimationManager::createAnimations(std::string definition) -> decltype(createAnimations(definition)) {
	using FunctionType = decltype(createAnimations(definition))(*)(std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8001e0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(definition);
}

auto SpriteAnimationManager::animationFinished() -> decltype(animationFinished()) {
	using FunctionType = decltype(animationFinished())(*)(SpriteAnimationManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x801e40, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SpriteAnimationManager::callAnimationFinished() -> decltype(callAnimationFinished()) {
	using FunctionType = decltype(callAnimationFinished())(*)(SpriteAnimationManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8030d0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SpriteAnimationManager::doCleanup() -> decltype(doCleanup()) {
	using FunctionType = decltype(doCleanup())(*)(SpriteAnimationManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x803590, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SpriteAnimationManager::executeAnimation(std::string animation) -> decltype(executeAnimation(animation)) {
	using FunctionType = decltype(executeAnimation(animation))(*)(SpriteAnimationManager*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8029d0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, animation);
}

auto SpriteAnimationManager::finishAnimation(std::string animation) -> decltype(finishAnimation(animation)) {
	using FunctionType = decltype(finishAnimation(animation))(*)(SpriteAnimationManager*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8031e0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, animation);
}

auto SpriteAnimationManager::getAnimType(std::string animation) -> decltype(getAnimType(animation)) {
	using FunctionType = decltype(getAnimType(animation))(*)(SpriteAnimationManager*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x802de0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, animation);
}

auto SpriteAnimationManager::getPrio(std::string animation) -> decltype(getPrio(animation)) {
	using FunctionType = decltype(getPrio(animation))(*)(SpriteAnimationManager*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x27e840, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, animation);
}

auto SpriteAnimationManager::initWithOwner(CCAnimatedSprite* sprite, std::string definition) -> decltype(initWithOwner(sprite, definition)) {
	using FunctionType = decltype(initWithOwner(sprite, definition))(*)(SpriteAnimationManager*, CCAnimatedSprite*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x7fffc0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sprite, definition);
}

auto SpriteAnimationManager::loadAnimations(std::string definition) -> decltype(loadAnimations(definition)) {
	using FunctionType = decltype(loadAnimations(definition))(*)(SpriteAnimationManager*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x801190, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, definition);
}

auto SpriteAnimationManager::offsetCurrentAnimation(float dt) -> decltype(offsetCurrentAnimation(dt)) {
	using FunctionType = decltype(offsetCurrentAnimation(dt))(*)(SpriteAnimationManager*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x803330, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, dt);
}

auto SpriteAnimationManager::overridePrio() -> decltype(overridePrio()) {
	using FunctionType = decltype(overridePrio())(*)(SpriteAnimationManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x802e00, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SpriteAnimationManager::playSound(std::string sound) -> decltype(playSound(sound)) {
	using FunctionType = decltype(playSound(sound))(*)(SpriteAnimationManager*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8023e0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sound);
}

auto SpriteAnimationManager::playSoundForAnimation(std::string animation) -> decltype(playSoundForAnimation(animation)) {
	using FunctionType = decltype(playSoundForAnimation(animation))(*)(SpriteAnimationManager*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8021f0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, animation);
}

auto SpriteAnimationManager::resetAnimState() -> decltype(resetAnimState()) {
	using FunctionType = decltype(resetAnimState())(*)(SpriteAnimationManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x803390, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SpriteAnimationManager::runAnimation(std::string animation) -> decltype(runAnimation(animation)) {
	using FunctionType = decltype(runAnimation(animation))(*)(SpriteAnimationManager*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8023f0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, animation);
}

auto SpriteAnimationManager::runQueuedAnimation() -> decltype(runQueuedAnimation()) {
	using FunctionType = decltype(runQueuedAnimation())(*)(SpriteAnimationManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x802eb0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SpriteAnimationManager::stopAnimations() -> decltype(stopAnimations()) {
	using FunctionType = decltype(stopAnimations())(*)(SpriteAnimationManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x803000, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SpriteAnimationManager::storeAnimation(cocos2d::CCAnimate* action, cocos2d::CCAnimate* frames, std::string name, int priority, spriteMode type, cocos2d::CCSpriteFrame* first) -> decltype(storeAnimation(action, frames, name, priority, type, first)) {
	using FunctionType = decltype(storeAnimation(action, frames, name, priority, type, first))(*)(SpriteAnimationManager*, cocos2d::CCAnimate*, cocos2d::CCAnimate*, std::string, int, spriteMode, cocos2d::CCSpriteFrame*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x801ea0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, action, frames, name, priority, type, first);
}

auto SpriteAnimationManager::storeSoundForAnimation(cocos2d::CCString* sound, std::string animation, float delay) -> decltype(storeSoundForAnimation(sound, animation, delay)) {
	using FunctionType = decltype(storeSoundForAnimation(sound, animation, delay))(*)(SpriteAnimationManager*, cocos2d::CCString*, std::string, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x801de0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sound, animation, delay);
}

auto SpriteAnimationManager::switchToFirstFrameOfAnimation(std::string animation) -> decltype(switchToFirstFrameOfAnimation(animation)) {
	using FunctionType = decltype(switchToFirstFrameOfAnimation(animation))(*)(SpriteAnimationManager*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8033d0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, animation);
}

auto SpriteAnimationManager::updateAnimationSpeed(float speed) -> decltype(updateAnimationSpeed(speed)) {
	using FunctionType = decltype(updateAnimationSpeed(speed))(*)(SpriteAnimationManager*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x802190, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, speed);
}
