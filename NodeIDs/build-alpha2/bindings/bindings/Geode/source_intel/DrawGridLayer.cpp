#include <Geode/cocos/cocoa/CCObject.h>

#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/DrawGridLayer.hpp>
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

DrawGridLayer::~DrawGridLayer() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(DrawGridLayer*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0xd6ac0, tulip::hook::TulipConvention::Default);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) DrawGridLayer(geode::CutoffConstructor, sizeof(DrawGridLayer));
		geode::DestructorLock::addLock(this);
	}
}

auto DrawGridLayer::create(cocos2d::CCNode* parent, LevelEditorLayer* layer) -> decltype(create(parent, layer)) {
	using FunctionType = decltype(create(parent, layer))(*)(cocos2d::CCNode*, LevelEditorLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xaba40, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(parent, layer);
}

auto DrawGridLayer::update(float dt) -> decltype(update(dt)) {
	auto self = addresser::thunkAdjust(Resolve<float>::func(&DrawGridLayer::update), this);
	using FunctionType = decltype(update(dt))(*)(DrawGridLayer*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xd6f80, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, dt);
}

auto DrawGridLayer::draw() -> decltype(draw()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&DrawGridLayer::draw), this);
	using FunctionType = decltype(draw())(*)(DrawGridLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xd7110, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto DrawGridLayer::addAudioLineObject(AudioLineGuideGameObject* object) -> decltype(addAudioLineObject(object)) {
	using FunctionType = decltype(addAudioLineObject(object))(*)(DrawGridLayer*, AudioLineGuideGameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xbce80, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto DrawGridLayer::addToEffects(EffectGameObject* object) -> decltype(addToEffects(object)) {
	using FunctionType = decltype(addToEffects(object))(*)(DrawGridLayer*, EffectGameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xbcd00, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto DrawGridLayer::addToGuides(GameObject* object) -> decltype(addToGuides(object)) {
	using FunctionType = decltype(addToGuides(object))(*)(DrawGridLayer*, GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xbd480, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto DrawGridLayer::addToSpeedObjects(EffectGameObject* object) -> decltype(addToSpeedObjects(object)) {
	using FunctionType = decltype(addToSpeedObjects(object))(*)(DrawGridLayer*, EffectGameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xbd500, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto DrawGridLayer::getPortalMinMax(GameObject* object) -> decltype(getPortalMinMax(object)) {
	using FunctionType = decltype(getPortalMinMax(object))(*)(DrawGridLayer*, GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xd6ea0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto DrawGridLayer::init(cocos2d::CCNode* parent, LevelEditorLayer* layer) -> decltype(init(parent, layer)) {
	using FunctionType = decltype(init(parent, layer))(*)(DrawGridLayer*, cocos2d::CCNode*, LevelEditorLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xd6d00, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, parent, layer);
}

auto DrawGridLayer::loadTimeMarkers(std::string markers) -> decltype(loadTimeMarkers(markers)) {
	using FunctionType = decltype(loadTimeMarkers(markers))(*)(DrawGridLayer*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xae770, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, markers);
}

auto DrawGridLayer::posForTime(float time) -> decltype(posForTime(time)) {
	using FunctionType = decltype(posForTime(time))(*)(DrawGridLayer*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xc3f30, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, time);
}

auto DrawGridLayer::postUpdate() -> decltype(postUpdate()) {
	using FunctionType = decltype(postUpdate())(*)(DrawGridLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xd6f60, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto DrawGridLayer::removeAudioLineObject(AudioLineGuideGameObject* object) -> decltype(removeAudioLineObject(object)) {
	using FunctionType = decltype(removeAudioLineObject(object))(*)(DrawGridLayer*, AudioLineGuideGameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xbd430, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto DrawGridLayer::removeFromEffects(EffectGameObject* object) -> decltype(removeFromEffects(object)) {
	using FunctionType = decltype(removeFromEffects(object))(*)(DrawGridLayer*, EffectGameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xbd400, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto DrawGridLayer::removeFromGuides(GameObject* object) -> decltype(removeFromGuides(object)) {
	using FunctionType = decltype(removeFromGuides(object))(*)(DrawGridLayer*, GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xbd460, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto DrawGridLayer::removeFromSpeedObjects(EffectGameObject* object) -> decltype(removeFromSpeedObjects(object)) {
	using FunctionType = decltype(removeFromSpeedObjects(object))(*)(DrawGridLayer*, EffectGameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xbd4c0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto DrawGridLayer::sortSpeedObjects() -> decltype(sortSpeedObjects()) {
	using FunctionType = decltype(sortSpeedObjects())(*)(DrawGridLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xd6e80, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto DrawGridLayer::timeForPos(cocos2d::CCPoint position, int order, int channel, bool songTriggers, bool ignoreWarp, bool ignoreRotate, int id) -> decltype(timeForPos(position, order, channel, songTriggers, ignoreWarp, ignoreRotate, id)) {
	using FunctionType = decltype(timeForPos(position, order, channel, songTriggers, ignoreWarp, ignoreRotate, id))(*)(DrawGridLayer*, cocos2d::CCPoint, int, int, bool, bool, bool, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xc2480, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, position, order, channel, songTriggers, ignoreWarp, ignoreRotate, id);
}

auto DrawGridLayer::updateMusicGuideTime(float time) -> decltype(updateMusicGuideTime(time)) {
	using FunctionType = decltype(updateMusicGuideTime(time))(*)(DrawGridLayer*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xd70f0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, time);
}

auto DrawGridLayer::updateTimeMarkers() -> decltype(updateTimeMarkers()) {
	using FunctionType = decltype(updateTimeMarkers())(*)(DrawGridLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xc23e0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}
