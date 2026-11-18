#include <Geode/cocos/cocoa/CCObject.h>

#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/GameObject.hpp>
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

GameObject::GameObject() : GameObject(geode::CutoffConstructor, sizeof(GameObject)) {
	// here we construct it as normal as we can, then destruct it
	// using the generated functions. this ensures no memory gets leaked
	// no crashes :pray:
	geode::DestructorLock::addLock(this);
	GameObject::~GameObject();

	using FunctionType = void(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1d67f0, tulip::hook::TulipConvention::Default);
	reinterpret_cast<FunctionType>(func)(this);
}

GameObject::~GameObject() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(GameObject*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x66ea30, tulip::hook::TulipConvention::Default);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) GameObject(geode::CutoffConstructor, sizeof(GameObject));
		geode::DestructorLock::addLock(this);
	}
}

auto GameObject::createWithFrame(char const* name) -> decltype(createWithFrame(name)) {
	using FunctionType = decltype(createWithFrame(name))(*)(char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x6736c0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(name);
}

auto GameObject::createWithKey(int key) -> decltype(createWithKey(key)) {
	using FunctionType = decltype(createWithKey(key))(*)(int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x66eb50, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(key);
}

auto GameObject::isBasicEnterEffect(int id) -> decltype(isBasicEnterEffect(id)) {
	using FunctionType = decltype(isBasicEnterEffect(id))(*)(int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x69d430, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(id);
}

auto GameObject::objectFromVector(std::vector<std::string>& propValues, std::vector<void*>& propIsPresent, GJBaseGameLayer* gameLayer, bool lowDetail) -> decltype(objectFromVector(propValues, propIsPresent, gameLayer, lowDetail)) {
	using FunctionType = decltype(objectFromVector(propValues, propIsPresent, gameLayer, lowDetail))(*)(std::vector<std::string>&, std::vector<void*>&, GJBaseGameLayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x691390, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(propValues, propIsPresent, gameLayer, lowDetail);
}

auto GameObject::resetMID() -> decltype(resetMID()) {
	using FunctionType = decltype(resetMID())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x66ea20, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto GameObject::update(float dt) -> decltype(update(dt)) {
	auto self = addresser::thunkAdjust(Resolve<float>::func(&GameObject::update), this);
	using FunctionType = decltype(update(dt))(*)(GameObject*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x67bb80, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, dt);
}

auto GameObject::setScaleX(float scaleX) -> decltype(setScaleX(scaleX)) {
	auto self = addresser::thunkAdjust(Resolve<float>::func(&GameObject::setScaleX), this);
	using FunctionType = decltype(setScaleX(scaleX))(*)(GameObject*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x68d960, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, scaleX);
}

auto GameObject::setScaleY(float scaleY) -> decltype(setScaleY(scaleY)) {
	auto self = addresser::thunkAdjust(Resolve<float>::func(&GameObject::setScaleY), this);
	using FunctionType = decltype(setScaleY(scaleY))(*)(GameObject*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x68d9f0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, scaleY);
}

auto GameObject::setScale(float scale) -> decltype(setScale(scale)) {
	auto self = addresser::thunkAdjust(Resolve<float>::func(&GameObject::setScale), this);
	using FunctionType = decltype(setScale(scale))(*)(GameObject*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x68da80, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, scale);
}

auto GameObject::setPosition(cocos2d::CCPoint const& position) -> decltype(setPosition(position)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCPoint const&>::func(&GameObject::setPosition), this);
	using FunctionType = decltype(setPosition(position))(*)(GameObject*, cocos2d::CCPoint const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x68d420, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, position);
}

auto GameObject::setVisible(bool visible) -> decltype(setVisible(visible)) {
	auto self = addresser::thunkAdjust(Resolve<bool>::func(&GameObject::setVisible), this);
	using FunctionType = decltype(setVisible(visible))(*)(GameObject*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x68e170, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, visible);
}

auto GameObject::setRotation(float rotation) -> decltype(setRotation(rotation)) {
	auto self = addresser::thunkAdjust(Resolve<float>::func(&GameObject::setRotation), this);
	using FunctionType = decltype(setRotation(rotation))(*)(GameObject*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x68d690, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, rotation);
}

auto GameObject::setRotationX(float rotationX) -> decltype(setRotationX(rotationX)) {
	auto self = addresser::thunkAdjust(Resolve<float>::func(&GameObject::setRotationX), this);
	using FunctionType = decltype(setRotationX(rotationX))(*)(GameObject*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x68d760, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, rotationX);
}

auto GameObject::setRotationY(float rotationY) -> decltype(setRotationY(rotationY)) {
	auto self = addresser::thunkAdjust(Resolve<float>::func(&GameObject::setRotationY), this);
	using FunctionType = decltype(setRotationY(rotationY))(*)(GameObject*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x68d820, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, rotationY);
}

auto GameObject::setOpacity(unsigned char opacity) -> decltype(setOpacity(opacity)) {
	auto self = addresser::thunkAdjust(Resolve<unsigned char>::func(&GameObject::setOpacity), this);
	using FunctionType = decltype(setOpacity(opacity))(*)(GameObject*, unsigned char);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x68ddd0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, opacity);
}

auto GameObject::initWithTexture(cocos2d::CCTexture2D* texture) -> decltype(initWithTexture(texture)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTexture2D*>::func(&GameObject::initWithTexture), this);
	using FunctionType = decltype(initWithTexture(texture))(*)(GameObject*, cocos2d::CCTexture2D*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x673940, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, texture);
}

auto GameObject::setChildColor(cocos2d::ccColor3B const& color) -> decltype(setChildColor(color)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::ccColor3B const&>::func(&GameObject::setChildColor), this);
	using FunctionType = decltype(setChildColor(color))(*)(GameObject*, cocos2d::ccColor3B const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x69a770, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, color);
}

auto GameObject::setFlipX(bool flipX) -> decltype(setFlipX(flipX)) {
	auto self = addresser::thunkAdjust(Resolve<bool>::func(&GameObject::setFlipX), this);
	using FunctionType = decltype(setFlipX(flipX))(*)(GameObject*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x68d8e0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, flipX);
}

auto GameObject::setFlipY(bool flipY) -> decltype(setFlipY(flipY)) {
	auto self = addresser::thunkAdjust(Resolve<bool>::func(&GameObject::setFlipY), this);
	using FunctionType = decltype(setFlipY(flipY))(*)(GameObject*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x68d920, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, flipY);
}

auto GameObject::customSetup() -> decltype(customSetup()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GameObject::customSetup), this);
	using FunctionType = decltype(customSetup())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x67bb90, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GameObject::setupCustomSprites(std::string frameName) -> decltype(setupCustomSprites(frameName)) {
	auto self = addresser::thunkAdjust(Resolve<std::string>::func(&GameObject::setupCustomSprites), this);
	using FunctionType = decltype(setupCustomSprites(frameName))(*)(GameObject*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x438860, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, frameName);
}

auto GameObject::addMainSpriteToParent(bool reorder) -> decltype(addMainSpriteToParent(reorder)) {
	auto self = addresser::thunkAdjust(Resolve<bool>::func(&GameObject::addMainSpriteToParent), this);
	using FunctionType = decltype(addMainSpriteToParent(reorder))(*)(GameObject*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x68f4c0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, reorder);
}

auto GameObject::resetObject() -> decltype(resetObject()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GameObject::resetObject), this);
	using FunctionType = decltype(resetObject())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x67b040, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GameObject::activateObject() -> decltype(activateObject()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GameObject::activateObject), this);
	using FunctionType = decltype(activateObject())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x67b670, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GameObject::deactivateObject(bool deactivate) -> decltype(deactivateObject(deactivate)) {
	auto self = addresser::thunkAdjust(Resolve<bool>::func(&GameObject::deactivateObject), this);
	using FunctionType = decltype(deactivateObject(deactivate))(*)(GameObject*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x67b9d0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, deactivate);
}

auto GameObject::transferObjectRect(cocos2d::CCRect& rect) -> decltype(transferObjectRect(rect)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCRect&>::func(&GameObject::transferObjectRect), this);
	using FunctionType = decltype(transferObjectRect(rect))(*)(GameObject*, cocos2d::CCRect&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x68cd40, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, rect);
}

auto GameObject::getObjectRect() -> decltype(getObjectRect()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GameObject::getObjectRect), this);
	using FunctionType = decltype(getObjectRect())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x68cdb0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GameObject::getObjectRect(float width, float height) -> decltype(getObjectRect(width, height)) {
	auto self = addresser::thunkAdjust(Resolve<float, float>::func(&GameObject::getObjectRect), this);
	using FunctionType = decltype(getObjectRect(width, height))(*)(GameObject*, float, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x68cde0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, width, height);
}

auto GameObject::getObjectRect2(float width, float height) -> decltype(getObjectRect2(width, height)) {
	auto self = addresser::thunkAdjust(Resolve<float, float>::func(&GameObject::getObjectRect2), this);
	using FunctionType = decltype(getObjectRect2(width, height))(*)(GameObject*, float, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x68d010, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, width, height);
}

auto GameObject::getObjectTextureRect() -> decltype(getObjectTextureRect()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GameObject::getObjectTextureRect), this);
	using FunctionType = decltype(getObjectTextureRect())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x68d0e0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GameObject::getRealPosition() -> decltype(getRealPosition()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GameObject::getRealPosition), this);
	using FunctionType = decltype(getRealPosition())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x68d360, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GameObject::setStartPos(cocos2d::CCPoint position) -> decltype(setStartPos(position)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCPoint>::func(&GameObject::setStartPos), this);
	using FunctionType = decltype(setStartPos(position))(*)(GameObject*, cocos2d::CCPoint);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x67af30, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, position);
}

auto GameObject::updateStartValues() -> decltype(updateStartValues()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GameObject::updateStartValues), this);
	using FunctionType = decltype(updateStartValues())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x67b4a0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GameObject::getSaveString(GJBaseGameLayer* layer) -> decltype(getSaveString(layer)) {
	auto self = addresser::thunkAdjust(Resolve<GJBaseGameLayer*>::func(&GameObject::getSaveString), this);
	using FunctionType = decltype(getSaveString(layer))(*)(GameObject*, GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x693300, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, layer);
}

auto GameObject::claimParticle() -> decltype(claimParticle()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GameObject::claimParticle), this);
	using FunctionType = decltype(claimParticle())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x68e2d0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GameObject::unclaimParticle() -> decltype(unclaimParticle()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GameObject::unclaimParticle), this);
	using FunctionType = decltype(unclaimParticle())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x68e8e0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GameObject::particleWasActivated() -> decltype(particleWasActivated()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GameObject::particleWasActivated), this);
	using FunctionType = decltype(particleWasActivated())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x68e950, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GameObject::isFlipX() -> decltype(isFlipX()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GameObject::isFlipX), this);
	using FunctionType = decltype(isFlipX())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x68d8c0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GameObject::isFlipY() -> decltype(isFlipY()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GameObject::isFlipY), this);
	using FunctionType = decltype(isFlipY())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x68d8d0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GameObject::setRScaleX(float scaleX) -> decltype(setRScaleX(scaleX)) {
	auto self = addresser::thunkAdjust(Resolve<float>::func(&GameObject::setRScaleX), this);
	using FunctionType = decltype(setRScaleX(scaleX))(*)(GameObject*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x68db10, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, scaleX);
}

auto GameObject::setRScaleY(float scaleY) -> decltype(setRScaleY(scaleY)) {
	auto self = addresser::thunkAdjust(Resolve<float>::func(&GameObject::setRScaleY), this);
	using FunctionType = decltype(setRScaleY(scaleY))(*)(GameObject*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x68db50, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, scaleY);
}

auto GameObject::setRScale(float scale) -> decltype(setRScale(scale)) {
	auto self = addresser::thunkAdjust(Resolve<float>::func(&GameObject::setRScale), this);
	using FunctionType = decltype(setRScale(scale))(*)(GameObject*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x68db90, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, scale);
}

auto GameObject::getRScaleX() -> decltype(getRScaleX()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GameObject::getRScaleX), this);
	using FunctionType = decltype(getRScaleX())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x68dc10, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GameObject::getRScaleY() -> decltype(getRScaleY()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GameObject::getRScaleY), this);
	using FunctionType = decltype(getRScaleY())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x68dc40, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GameObject::setRRotation(float rotation) -> decltype(setRRotation(rotation)) {
	auto self = addresser::thunkAdjust(Resolve<float>::func(&GameObject::setRRotation), this);
	using FunctionType = decltype(setRRotation(rotation))(*)(GameObject*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x68d610, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, rotation);
}

auto GameObject::setObjectColor(cocos2d::ccColor3B const& color) -> decltype(setObjectColor(color)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::ccColor3B const&>::func(&GameObject::setObjectColor), this);
	using FunctionType = decltype(setObjectColor(color))(*)(GameObject*, cocos2d::ccColor3B const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x69a490, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, color);
}

auto GameObject::setGlowColor(cocos2d::ccColor3B const& color) -> decltype(setGlowColor(color)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::ccColor3B const&>::func(&GameObject::setGlowColor), this);
	using FunctionType = decltype(setGlowColor(color))(*)(GameObject*, cocos2d::ccColor3B const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x69a720, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, color);
}

auto GameObject::restoreObject() -> decltype(restoreObject()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GameObject::restoreObject), this);
	using FunctionType = decltype(restoreObject())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x68e990, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GameObject::selectObject(cocos2d::ccColor3B color) -> decltype(selectObject(color)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::ccColor3B>::func(&GameObject::selectObject), this);
	using FunctionType = decltype(selectObject(color))(*)(GameObject*, cocos2d::ccColor3B);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x69a7e0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, color);
}

auto GameObject::getOrientedBox() -> decltype(getOrientedBox()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GameObject::getOrientedBox), this);
	using FunctionType = decltype(getOrientedBox())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x69b210, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GameObject::updateOrientedBox() -> decltype(updateOrientedBox()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GameObject::updateOrientedBox), this);
	using FunctionType = decltype(updateOrientedBox())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x69b290, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GameObject::getObjectRotation() -> decltype(getObjectRotation()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GameObject::getObjectRotation), this);
	using FunctionType = decltype(getObjectRotation())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x6a3d30, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GameObject::updateMainColor(cocos2d::ccColor3B const& color) -> decltype(updateMainColor(color)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::ccColor3B const&>::func(&GameObject::updateMainColor), this);
	using FunctionType = decltype(updateMainColor(color))(*)(GameObject*, cocos2d::ccColor3B const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x69be10, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, color);
}

auto GameObject::updateSecondaryColor(cocos2d::ccColor3B const& color) -> decltype(updateSecondaryColor(color)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::ccColor3B const&>::func(&GameObject::updateSecondaryColor), this);
	using FunctionType = decltype(updateSecondaryColor(color))(*)(GameObject*, cocos2d::ccColor3B const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x69c300, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, color);
}

auto GameObject::addToGroup(int id) -> decltype(addToGroup(id)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&GameObject::addToGroup), this);
	using FunctionType = decltype(addToGroup(id))(*)(GameObject*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x68fba0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, id);
}

auto GameObject::removeFromGroup(int id) -> decltype(removeFromGroup(id)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&GameObject::removeFromGroup), this);
	using FunctionType = decltype(removeFromGroup(id))(*)(GameObject*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x68fc50, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, id);
}

auto GameObject::saveActiveColors() -> decltype(saveActiveColors()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GameObject::saveActiveColors), this);
	using FunctionType = decltype(saveActiveColors())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x69a2d0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GameObject::spawnXPosition() -> decltype(spawnXPosition()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GameObject::spawnXPosition), this);
	using FunctionType = decltype(spawnXPosition())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1d5ff0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GameObject::updateParticleColor(cocos2d::ccColor3B const& color) -> decltype(updateParticleColor(color)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::ccColor3B const&>::func(&GameObject::updateParticleColor), this);
	using FunctionType = decltype(updateParticleColor(color))(*)(GameObject*, cocos2d::ccColor3B const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x69a660, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, color);
}

auto GameObject::updateParticleOpacity(unsigned char opacity) -> decltype(updateParticleOpacity(opacity)) {
	auto self = addresser::thunkAdjust(Resolve<unsigned char>::func(&GameObject::updateParticleOpacity), this);
	using FunctionType = decltype(updateParticleOpacity(opacity))(*)(GameObject*, unsigned char);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x68e0e0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, opacity);
}

auto GameObject::shouldDrawEditorHitbox() -> decltype(shouldDrawEditorHitbox()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GameObject::shouldDrawEditorHitbox), this);
	using FunctionType = decltype(shouldDrawEditorHitbox())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x69d460, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GameObject::getObjectRectDirty() const  -> decltype(getObjectRectDirty()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GameObject::getObjectRectDirty), this);
	using FunctionType = decltype(getObjectRectDirty())(*)(GameObject const *);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1d6010, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GameObject::setObjectRectDirty(bool dirty) -> decltype(setObjectRectDirty(dirty)) {
	auto self = addresser::thunkAdjust(Resolve<bool>::func(&GameObject::setObjectRectDirty), this);
	using FunctionType = decltype(setObjectRectDirty(dirty))(*)(GameObject*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1d6020, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, dirty);
}

auto GameObject::getOrientedRectDirty() const  -> decltype(getOrientedRectDirty()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GameObject::getOrientedRectDirty), this);
	using FunctionType = decltype(getOrientedRectDirty())(*)(GameObject const *);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1d6030, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GameObject::setOrientedRectDirty(bool dirty) -> decltype(setOrientedRectDirty(dirty)) {
	auto self = addresser::thunkAdjust(Resolve<bool>::func(&GameObject::setOrientedRectDirty), this);
	using FunctionType = decltype(setOrientedRectDirty(dirty))(*)(GameObject*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1d6040, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, dirty);
}

auto GameObject::getType() const  -> decltype(getType()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GameObject::getType), this);
	using FunctionType = decltype(getType())(*)(GameObject const *);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1d6050, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GameObject::setType(GameObjectType type) -> decltype(setType(type)) {
	auto self = addresser::thunkAdjust(Resolve<GameObjectType>::func(&GameObject::setType), this);
	using FunctionType = decltype(setType(type))(*)(GameObject*, GameObjectType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1d6060, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, type);
}

auto GameObject::getStartPos() const  -> decltype(getStartPos()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GameObject::getStartPos), this);
	using FunctionType = decltype(getStartPos())(*)(GameObject const *);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1d6070, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GameObject::addColorSprite(std::string frame) -> decltype(addColorSprite(frame)) {
	using FunctionType = decltype(addColorSprite(frame))(*)(GameObject*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x6760e0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, frame);
}

auto GameObject::addColorSpriteToParent(bool reorder) -> decltype(addColorSpriteToParent(reorder)) {
	using FunctionType = decltype(addColorSpriteToParent(reorder))(*)(GameObject*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x67b7c0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, reorder);
}

auto GameObject::addColorSpriteToSelf() -> decltype(addColorSpriteToSelf()) {
	using FunctionType = decltype(addColorSpriteToSelf())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x68f630, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::addCustomBlackChild(std::string frame, float opacity, bool color) -> decltype(addCustomBlackChild(frame, opacity, color)) {
	using FunctionType = decltype(addCustomBlackChild(frame, opacity, color))(*)(GameObject*, std::string, float, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x68c780, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, frame, opacity, color);
}

auto GameObject::addCustomChild(std::string frame, cocos2d::CCPoint offset, int zOrder) -> decltype(addCustomChild(frame, offset, zOrder)) {
	using FunctionType = decltype(addCustomChild(frame, offset, zOrder))(*)(GameObject*, std::string, cocos2d::CCPoint, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x68c920, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, frame, offset, zOrder);
}

auto GameObject::addCustomColorChild(std::string frame) -> decltype(addCustomColorChild(frame)) {
	using FunctionType = decltype(addCustomColorChild(frame))(*)(GameObject*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x68c9c0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, frame);
}

auto GameObject::addEmptyGlow() -> decltype(addEmptyGlow()) {
	using FunctionType = decltype(addEmptyGlow())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x675f70, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::addGlow(std::string frame) -> decltype(addGlow(frame)) {
	using FunctionType = decltype(addGlow(frame))(*)(GameObject*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x673a50, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, frame);
}

auto GameObject::addInternalChild(cocos2d::CCSprite* parent, std::string frame, cocos2d::CCPoint offset, int zOrder) -> decltype(addInternalChild(parent, frame, offset, zOrder)) {
	using FunctionType = decltype(addInternalChild(parent, frame, offset, zOrder))(*)(GameObject*, cocos2d::CCSprite*, std::string, cocos2d::CCPoint, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x68cb60, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, parent, frame, offset, zOrder);
}

auto GameObject::addInternalCustomColorChild(std::string frame, cocos2d::CCPoint offset, int zOrder) -> decltype(addInternalCustomColorChild(frame, offset, zOrder)) {
	using FunctionType = decltype(addInternalCustomColorChild(frame, offset, zOrder))(*)(GameObject*, std::string, cocos2d::CCPoint, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x68cab0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, frame, offset, zOrder);
}

auto GameObject::addInternalGlowChild(std::string frame, cocos2d::CCPoint offset) -> decltype(addInternalGlowChild(frame, offset)) {
	using FunctionType = decltype(addInternalGlowChild(frame, offset))(*)(GameObject*, std::string, cocos2d::CCPoint);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x68cbf0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, frame, offset);
}

auto GameObject::addRotation(float rotationX, float rotationY) -> decltype(addRotation(rotationX, rotationY)) {
	using FunctionType = decltype(addRotation(rotationX, rotationY))(*)(GameObject*, float, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x68d5b0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, rotationX, rotationY);
}

auto GameObject::addToColorGroup(int group) -> decltype(addToColorGroup(group)) {
	using FunctionType = decltype(addToColorGroup(group))(*)(GameObject*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x68fe10, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, group);
}

auto GameObject::addToCustomScaleX(float scale) -> decltype(addToCustomScaleX(scale)) {
	using FunctionType = decltype(addToCustomScaleX(scale))(*)(GameObject*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x68dc70, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, scale);
}

auto GameObject::addToCustomScaleY(float scale) -> decltype(addToCustomScaleY(scale)) {
	using FunctionType = decltype(addToCustomScaleY(scale))(*)(GameObject*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x68dcb0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, scale);
}

auto GameObject::addToOpacityGroup(int group) -> decltype(addToOpacityGroup(group)) {
	using FunctionType = decltype(addToOpacityGroup(group))(*)(GameObject*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x68ff60, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, group);
}

auto GameObject::addToTempOffset(double offsetX, double offsetY) -> decltype(addToTempOffset(offsetX, offsetY)) {
	using FunctionType = decltype(addToTempOffset(offsetX, offsetY))(*)(GameObject*, double, double);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x68d2a0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, offsetX, offsetY);
}

auto GameObject::assignUniqueID() -> decltype(assignUniqueID()) {
	using FunctionType = decltype(assignUniqueID())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x673970, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::belongsToGroup(int group) -> decltype(belongsToGroup(group)) {
	using FunctionType = decltype(belongsToGroup(group))(*)(GameObject*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x68fd70, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, group);
}

auto GameObject::calculateOrientedBox() -> decltype(calculateOrientedBox()) {
	using FunctionType = decltype(calculateOrientedBox())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x69b260, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::canChangeCustomColor() -> decltype(canChangeCustomColor()) {
	using FunctionType = decltype(canChangeCustomColor())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x69b750, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::canChangeMainColor() -> decltype(canChangeMainColor()) {
	using FunctionType = decltype(canChangeMainColor())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x69b780, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::canChangeSecondaryColor() -> decltype(canChangeSecondaryColor()) {
	using FunctionType = decltype(canChangeSecondaryColor())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x69b7a0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::canRotateFree() -> decltype(canRotateFree()) {
	using FunctionType = decltype(canRotateFree())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x68fae0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::colorForMode(int id, bool mainColor) -> decltype(colorForMode(id, mainColor)) {
	using FunctionType = decltype(colorForMode(id, mainColor))(*)(GameObject*, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x69bf20, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id, mainColor);
}

auto GameObject::commonInteractiveSetup() -> decltype(commonInteractiveSetup()) {
	using FunctionType = decltype(commonInteractiveSetup())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x686ba0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::commonSetup() -> decltype(commonSetup()) {
	using FunctionType = decltype(commonSetup())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xd50a0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::copyGroups(GameObject* object) -> decltype(copyGroups(object)) {
	using FunctionType = decltype(copyGroups(object))(*)(GameObject*, GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x68fd00, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto GameObject::createAndAddParticle(int objectType, char const* plistName, int tag, cocos2d::tCCPositionType positionType) -> decltype(createAndAddParticle(objectType, plistName, tag, positionType)) {
	using FunctionType = decltype(createAndAddParticle(objectType, plistName, tag, positionType))(*)(GameObject*, int, char const*, int, cocos2d::tCCPositionType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x686c60, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, objectType, plistName, tag, positionType);
}

auto GameObject::createGlow(std::string frame) -> decltype(createGlow(frame)) {
	using FunctionType = decltype(createGlow(frame))(*)(GameObject*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x675ed0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, frame);
}

auto GameObject::createGroupContainer(int size) -> decltype(createGroupContainer(size)) {
	using FunctionType = decltype(createGroupContainer(size))(*)(GameObject*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x68fb40, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, size);
}

auto GameObject::createSpriteColor(int type) -> decltype(createSpriteColor(type)) {
	using FunctionType = decltype(createSpriteColor(type))(*)(GameObject*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x673990, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, type);
}

auto GameObject::deselectObject() -> decltype(deselectObject()) {
	using FunctionType = decltype(deselectObject())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x69abf0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::destroyObject() -> decltype(destroyObject()) {
	using FunctionType = decltype(destroyObject())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x68e960, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::determineSlopeDirection() -> decltype(determineSlopeDirection()) {
	using FunctionType = decltype(determineSlopeDirection())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x68f730, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::didScaleXChange() -> decltype(didScaleXChange()) {
	using FunctionType = decltype(didScaleXChange())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x68dcf0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::didScaleYChange() -> decltype(didScaleYChange()) {
	using FunctionType = decltype(didScaleYChange())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x68dd20, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::dirtifyObjectPos() -> decltype(dirtifyObjectPos()) {
	using FunctionType = decltype(dirtifyObjectPos())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x68cd30, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::dirtifyObjectRect() -> decltype(dirtifyObjectRect()) {
	using FunctionType = decltype(dirtifyObjectRect())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x68cd20, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::disableObject() -> decltype(disableObject()) {
	using FunctionType = decltype(disableObject())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x68ea20, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::dontCountTowardsLimit() -> decltype(dontCountTowardsLimit()) {
	using FunctionType = decltype(dontCountTowardsLimit())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x687360, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::duplicateAttributes(GameObject* object) -> decltype(duplicateAttributes(object)) {
	using FunctionType = decltype(duplicateAttributes(object))(*)(GameObject*, GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x69ba30, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto GameObject::duplicateColorMode(GameObject* object) -> decltype(duplicateColorMode(object)) {
	using FunctionType = decltype(duplicateColorMode(object))(*)(GameObject*, GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x69b980, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto GameObject::duplicateValues(GameObject* object) -> decltype(duplicateValues(object)) {
	using FunctionType = decltype(duplicateValues(object))(*)(GameObject*, GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x69bb10, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto GameObject::editorColorForCustomMode(int id) -> decltype(editorColorForCustomMode(id)) {
	using FunctionType = decltype(editorColorForCustomMode(id))(*)(GameObject*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x69ab20, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto GameObject::editorColorForMode(int id) -> decltype(editorColorForMode(id)) {
	using FunctionType = decltype(editorColorForMode(id))(*)(GameObject*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x69a9c0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto GameObject::fastRotateObject(float rotation) -> decltype(fastRotateObject(rotation)) {
	using FunctionType = decltype(fastRotateObject(rotation))(*)(GameObject*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x69b530, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, rotation);
}

auto GameObject::getActiveColorForMode(int id, bool mainColor) -> decltype(getActiveColorForMode(id, mainColor)) {
	using FunctionType = decltype(getActiveColorForMode(id, mainColor))(*)(GameObject*, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x69c550, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id, mainColor);
}

auto GameObject::getBallFrame(int index) -> decltype(getBallFrame(index)) {
	using FunctionType = decltype(getBallFrame(index))(*)(GameObject*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x69a2a0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, index);
}

auto GameObject::getBoundingRect() -> decltype(getBoundingRect()) {
	using FunctionType = decltype(getBoundingRect())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x68ccb0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::getBoxOffset() -> decltype(getBoxOffset()) {
	using FunctionType = decltype(getBoxOffset())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x68cf10, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::getColorIndex() -> decltype(getColorIndex()) {
	using FunctionType = decltype(getColorIndex())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x69cd10, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::getColorKey(bool isMainColor, bool colorGroups) -> decltype(getColorKey(isMainColor, colorGroups)) {
	using FunctionType = decltype(getColorKey(isMainColor, colorGroups))(*)(GameObject*, bool, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4ee800, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, isMainColor, colorGroups);
}

auto GameObject::getCustomZLayer() -> decltype(getCustomZLayer()) {
	using FunctionType = decltype(getCustomZLayer())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x68fb10, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::getGroupDisabled() -> decltype(getGroupDisabled()) {
	using FunctionType = decltype(getGroupDisabled())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x690000, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::getGroupID(int index) -> decltype(getGroupID(index)) {
	using FunctionType = decltype(getGroupID(index))(*)(GameObject*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x68fce0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, index);
}

auto GameObject::getGroupString() -> decltype(getGroupString()) {
	using FunctionType = decltype(getGroupString())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x690050, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::getLastPosition() -> decltype(getLastPosition()) {
	using FunctionType = decltype(getLastPosition())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x69c730, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::getMainColor() -> decltype(getMainColor()) {
	using FunctionType = decltype(getMainColor())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x69b730, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::getMainColorMode() -> decltype(getMainColorMode()) {
	using FunctionType = decltype(getMainColorMode())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x691350, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::getObjectDirection() -> decltype(getObjectDirection()) {
	using FunctionType = decltype(getObjectDirection())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x68f990, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::getObjectRadius() -> decltype(getObjectRadius()) {
	using FunctionType = decltype(getObjectRadius())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x69ce10, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::getObjectRectPointer() -> decltype(getObjectRectPointer()) {
	using FunctionType = decltype(getObjectRectPointer())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x68cd80, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::getObjectZLayer() -> decltype(getObjectZLayer()) {
	using FunctionType = decltype(getObjectZLayer())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x67b7a0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::getObjectZOrder() -> decltype(getObjectZOrder()) {
	using FunctionType = decltype(getObjectZOrder())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x68f610, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::getOuterObjectRect() -> decltype(getOuterObjectRect()) {
	using FunctionType = decltype(getOuterObjectRect())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x68d0a0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::getParentMode() -> decltype(getParentMode()) {
	using FunctionType = decltype(getParentMode())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x68e870, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::getRelativeSpriteColor(int type) -> decltype(getRelativeSpriteColor(type)) {
	using FunctionType = decltype(getRelativeSpriteColor(type))(*)(GameObject*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x69b7c0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, type);
}

auto GameObject::getScalePosDelta() -> decltype(getScalePosDelta()) {
	using FunctionType = decltype(getScalePosDelta())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x68f9d0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::getSecondaryColor() -> decltype(getSecondaryColor()) {
	using FunctionType = decltype(getSecondaryColor())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x69b740, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::getSecondaryColorMode() -> decltype(getSecondaryColorMode()) {
	using FunctionType = decltype(getSecondaryColorMode())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x691370, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::getSlopeAngle() -> decltype(getSlopeAngle()) {
	using FunctionType = decltype(getSlopeAngle())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x68f950, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::getUnmodifiedPosition() -> decltype(getUnmodifiedPosition()) {
	using FunctionType = decltype(getUnmodifiedPosition())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x68d2d0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::groupColor(cocos2d::ccColor3B const& color, bool mainColor) -> decltype(groupColor(color, mainColor)) {
	using FunctionType = decltype(groupColor(color, mainColor))(*)(GameObject*, cocos2d::ccColor3B const&, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x69c640, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, color, mainColor);
}

auto GameObject::groupOpacityMod() -> decltype(groupOpacityMod()) {
	using FunctionType = decltype(groupOpacityMod())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x690630, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::groupWasDisabled() -> decltype(groupWasDisabled()) {
	using FunctionType = decltype(groupWasDisabled())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x690030, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::groupWasEnabled() -> decltype(groupWasEnabled()) {
	using FunctionType = decltype(groupWasEnabled())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x690010, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::hasSecondaryColor() -> decltype(hasSecondaryColor()) {
	using FunctionType = decltype(hasSecondaryColor())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x69b960, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::ignoreEditorDuration() -> decltype(ignoreEditorDuration()) {
	using FunctionType = decltype(ignoreEditorDuration())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x687a20, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::ignoreEnter() -> decltype(ignoreEnter()) {
	using FunctionType = decltype(ignoreEnter())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x68cca0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::ignoreFade() -> decltype(ignoreFade()) {
	using FunctionType = decltype(ignoreFade())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x68cc90, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::init(char const* frame) -> decltype(init(frame)) {
	using FunctionType = decltype(init(frame))(*)(GameObject*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x673730, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, frame);
}

auto GameObject::isBasicTrigger() -> decltype(isBasicTrigger()) {
	using FunctionType = decltype(isBasicTrigger())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x69d350, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::isColorObject() -> decltype(isColorObject()) {
	using FunctionType = decltype(isColorObject())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x69b830, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::isColorTrigger() -> decltype(isColorTrigger()) {
	using FunctionType = decltype(isColorTrigger())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x69ccc0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::isConfigurablePortal() -> decltype(isConfigurablePortal()) {
	using FunctionType = decltype(isConfigurablePortal())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x69d3c0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::isEditorSpawnableTrigger() -> decltype(isEditorSpawnableTrigger()) {
	using FunctionType = decltype(isEditorSpawnableTrigger())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x688570, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::isFacingDown() -> decltype(isFacingDown()) {
	using FunctionType = decltype(isFacingDown())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x69b610, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::isFacingLeft() -> decltype(isFacingLeft()) {
	using FunctionType = decltype(isFacingLeft())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x69b690, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::isSettingsObject() -> decltype(isSettingsObject()) {
	using FunctionType = decltype(isSettingsObject())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x69d330, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::isSpawnableTrigger() -> decltype(isSpawnableTrigger()) {
	using FunctionType = decltype(isSpawnableTrigger())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x69c760, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::isSpecialObject() -> decltype(isSpecialObject()) {
	using FunctionType = decltype(isSpecialObject())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x69ce60, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::isSpeedObject() -> decltype(isSpeedObject()) {
	using FunctionType = decltype(isSpeedObject())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x69cd90, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::isStoppableTrigger() -> decltype(isStoppableTrigger()) {
	using FunctionType = decltype(isStoppableTrigger())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x6878e0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::isTrigger() -> decltype(isTrigger()) {
	using FunctionType = decltype(isTrigger())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x687370, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::loadGroupsFromString(std::string groupList) -> decltype(loadGroupsFromString(groupList)) {
	using FunctionType = decltype(loadGroupsFromString(groupList))(*)(GameObject*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x690320, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, groupList);
}

auto GameObject::makeInvisible() -> decltype(makeInvisible()) {
	using FunctionType = decltype(makeInvisible())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x68e9c0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::makeVisible() -> decltype(makeVisible()) {
	using FunctionType = decltype(makeVisible())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x68e9f0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::opacityModForMode(int id, bool mainColor) -> decltype(opacityModForMode(id, mainColor)) {
	using FunctionType = decltype(opacityModForMode(id, mainColor))(*)(GameObject*, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x69c240, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id, mainColor);
}

auto GameObject::parentForZLayer(int zLayer, bool blending, int parentMode) -> decltype(parentForZLayer(zLayer, blending, parentMode)) {
	using FunctionType = decltype(parentForZLayer(zLayer, blending, parentMode))(*)(GameObject*, int, bool, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x67b740, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, zLayer, blending, parentMode);
}

auto GameObject::perspectiveColorFrame(char const* prefix, int index) -> decltype(perspectiveColorFrame(prefix, index)) {
	using FunctionType = decltype(perspectiveColorFrame(prefix, index))(*)(GameObject*, char const*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4387f0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, prefix, index);
}

auto GameObject::perspectiveFrame(char const* prefix, int index) -> decltype(perspectiveFrame(prefix, index)) {
	using FunctionType = decltype(perspectiveFrame(prefix, index))(*)(GameObject*, char const*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x438480, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, prefix, index);
}

auto GameObject::playDestroyObjectAnim(GJBaseGameLayer* layer) -> decltype(playDestroyObjectAnim(layer)) {
	using FunctionType = decltype(playDestroyObjectAnim(layer))(*)(GameObject*, GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2484c0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, layer);
}

auto GameObject::playPickupAnimation(cocos2d::CCSprite* target, float offset, float duration, float randomValue1, float randomValue2) -> decltype(playPickupAnimation(target, offset, duration, randomValue1, randomValue2)) {
	using FunctionType = decltype(playPickupAnimation(target, offset, duration, randomValue1, randomValue2))(*)(GameObject*, cocos2d::CCSprite*, float, float, float, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x247fc0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, target, offset, duration, randomValue1, randomValue2);
}

auto GameObject::playPickupAnimation(cocos2d::CCSprite* target, float xOffset, float yOffset, float controlYOffset1, float controlYOffset2, float endYOffset, float duration, float fadeDelay, float fadeDuration, bool rotate, float randomValue1, float randomValue2) -> decltype(playPickupAnimation(target, xOffset, yOffset, controlYOffset1, controlYOffset2, endYOffset, duration, fadeDelay, fadeDuration, rotate, randomValue1, randomValue2)) {
	using FunctionType = decltype(playPickupAnimation(target, xOffset, yOffset, controlYOffset1, controlYOffset2, endYOffset, duration, fadeDelay, fadeDuration, rotate, randomValue1, randomValue2))(*)(GameObject*, cocos2d::CCSprite*, float, float, float, float, float, float, float, float, bool, float, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x248050, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, target, xOffset, yOffset, controlYOffset1, controlYOffset2, endYOffset, duration, fadeDelay, fadeDuration, rotate, randomValue1, randomValue2);
}

auto GameObject::playShineEffect() -> decltype(playShineEffect()) {
	using FunctionType = decltype(playShineEffect())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x68ea60, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::quickUpdatePosition() -> decltype(quickUpdatePosition()) {
	using FunctionType = decltype(quickUpdatePosition())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x68d390, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::quickUpdatePosition2() -> decltype(quickUpdatePosition2()) {
	using FunctionType = decltype(quickUpdatePosition2())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x68d400, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::removeColorSprite() -> decltype(removeColorSprite()) {
	using FunctionType = decltype(removeColorSprite())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x6760b0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::removeGlow() -> decltype(removeGlow()) {
	using FunctionType = decltype(removeGlow())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x676070, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::reorderColorSprite() -> decltype(reorderColorSprite()) {
	using FunctionType = decltype(reorderColorSprite())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x68f720, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::resetColorGroups() -> decltype(resetColorGroups()) {
	using FunctionType = decltype(resetColorGroups())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x68feb0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::resetGroupDisabled() -> decltype(resetGroupDisabled()) {
	using FunctionType = decltype(resetGroupDisabled())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x67b380, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::resetGroups() -> decltype(resetGroups()) {
	using FunctionType = decltype(resetGroups())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x68fcd0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::resetMainColorMode() -> decltype(resetMainColorMode()) {
	using FunctionType = decltype(resetMainColorMode())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x69b8e0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::resetMoveOffset() -> decltype(resetMoveOffset()) {
	using FunctionType = decltype(resetMoveOffset())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x67b650, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::resetRScaleForced() -> decltype(resetRScaleForced()) {
	using FunctionType = decltype(resetRScaleForced())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x68dbd0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::resetSecondaryColorMode() -> decltype(resetSecondaryColorMode()) {
	using FunctionType = decltype(resetSecondaryColorMode())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x69b920, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::setAreaOpacity(float step, float value, int index) -> decltype(setAreaOpacity(step, value, index)) {
	using FunctionType = decltype(setAreaOpacity(step, value, index))(*)(GameObject*, float, float, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x68dd50, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, step, value, index);
}

auto GameObject::setCustomZLayer(int zLayer) -> decltype(setCustomZLayer(zLayer)) {
	using FunctionType = decltype(setCustomZLayer(zLayer))(*)(GameObject*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x68fb20, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, zLayer);
}

auto GameObject::setDefaultMainColorMode(int id) -> decltype(setDefaultMainColorMode(id)) {
	using FunctionType = decltype(setDefaultMainColorMode(id))(*)(GameObject*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x686b70, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto GameObject::setDefaultSecondaryColorMode(int id) -> decltype(setDefaultSecondaryColorMode(id)) {
	using FunctionType = decltype(setDefaultSecondaryColorMode(id))(*)(GameObject*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x67adf0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto GameObject::setGlowOpacity(unsigned char opacity) -> decltype(setGlowOpacity(opacity)) {
	using FunctionType = decltype(setGlowOpacity(opacity))(*)(GameObject*, unsigned char);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x68e060, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, opacity);
}

auto GameObject::setLastPosition(cocos2d::CCPoint const& position) -> decltype(setLastPosition(position)) {
	using FunctionType = decltype(setLastPosition(position))(*)(GameObject*, cocos2d::CCPoint const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x69c740, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, position);
}

auto GameObject::setMainColorMode(int id) -> decltype(setMainColorMode(id)) {
	using FunctionType = decltype(setMainColorMode(id))(*)(GameObject*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x69b880, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto GameObject::setSecondaryColorMode(int id) -> decltype(setSecondaryColorMode(id)) {
	using FunctionType = decltype(setSecondaryColorMode(id))(*)(GameObject*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x69b8b0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto GameObject::setupColorSprite(int id, bool mainColor) -> decltype(setupColorSprite(id, mainColor)) {
	using FunctionType = decltype(setupColorSprite(id, mainColor))(*)(GameObject*, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x69a460, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id, mainColor);
}

auto GameObject::setupPixelScale() -> decltype(setupPixelScale()) {
	using FunctionType = decltype(setupPixelScale())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x45e470, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::setupSpriteSize() -> decltype(setupSpriteSize()) {
	using FunctionType = decltype(setupSpriteSize())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x6888d0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::shouldLockX() -> decltype(shouldLockX()) {
	using FunctionType = decltype(shouldLockX())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x686d30, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::shouldNotHideAnimFreeze() -> decltype(shouldNotHideAnimFreeze()) {
	using FunctionType = decltype(shouldNotHideAnimFreeze())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x247f50, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::shouldShowPickupEffects() -> decltype(shouldShowPickupEffects()) {
	using FunctionType = decltype(shouldShowPickupEffects())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x248290, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::slopeFloorTop() -> decltype(slopeFloorTop()) {
	using FunctionType = decltype(slopeFloorTop())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x69b000, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::slopeWallLeft() -> decltype(slopeWallLeft()) {
	using FunctionType = decltype(slopeWallLeft())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x69afe0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::slopeYPos(GameObject* object) -> decltype(slopeYPos(object)) {
	using FunctionType = decltype(slopeYPos(object))(*)(GameObject*, GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x69b020, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto GameObject::slopeYPos(cocos2d::CCRect rect) -> decltype(slopeYPos(rect)) {
	using FunctionType = decltype(slopeYPos(rect))(*)(GameObject*, cocos2d::CCRect);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x69b090, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, rect);
}

auto GameObject::slopeYPos(float x) -> decltype(slopeYPos(x)) {
	using FunctionType = decltype(slopeYPos(x))(*)(GameObject*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x69b0e0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, x);
}

auto GameObject::spawnDefaultPickupParticle(GJBaseGameLayer* layer) -> decltype(spawnDefaultPickupParticle(layer)) {
	using FunctionType = decltype(spawnDefaultPickupParticle(layer))(*)(GameObject*, GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2482f0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, layer);
}

auto GameObject::updateBlendMode() -> decltype(updateBlendMode()) {
	using FunctionType = decltype(updateBlendMode())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2366e0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::updateCustomColorType(short type) -> decltype(updateCustomColorType(type)) {
	using FunctionType = decltype(updateCustomColorType(type))(*)(GameObject*, short);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x69c6d0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, type);
}

auto GameObject::updateCustomScaleX(float scaleX) -> decltype(updateCustomScaleX(scaleX)) {
	using FunctionType = decltype(updateCustomScaleX(scaleX))(*)(GameObject*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x67b3a0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, scaleX);
}

auto GameObject::updateCustomScaleY(float scaleY) -> decltype(updateCustomScaleY(scaleY)) {
	using FunctionType = decltype(updateCustomScaleY(scaleY))(*)(GameObject*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x67b420, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, scaleY);
}

auto GameObject::updateHSVState() -> decltype(updateHSVState()) {
	using FunctionType = decltype(updateHSVState())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x6906c0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::updateIsOriented() -> decltype(updateIsOriented()) {
	using FunctionType = decltype(updateIsOriented())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x69b430, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::updateMainColor() -> decltype(updateMainColor()) {
	using FunctionType = decltype(updateMainColor())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x69be30, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::updateMainColorOnly() -> decltype(updateMainColorOnly()) {
	using FunctionType = decltype(updateMainColorOnly())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x69c1f0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::updateMainOpacity() -> decltype(updateMainOpacity()) {
	using FunctionType = decltype(updateMainOpacity())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x69c120, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::updateObjectEditorColor() -> decltype(updateObjectEditorColor()) {
	using FunctionType = decltype(updateObjectEditorColor())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x69ac10, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::updateSecondaryColor() -> decltype(updateSecondaryColor()) {
	using FunctionType = decltype(updateSecondaryColor())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x69c320, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::updateSecondaryColorOnly() -> decltype(updateSecondaryColorOnly()) {
	using FunctionType = decltype(updateSecondaryColorOnly())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x69c500, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::updateSecondaryOpacity() -> decltype(updateSecondaryOpacity()) {
	using FunctionType = decltype(updateSecondaryOpacity())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x69c430, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::updateStartPos() -> decltype(updateStartPos()) {
	using FunctionType = decltype(updateStartPos())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x67afb0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::updateUnmodifiedPositions() -> decltype(updateUnmodifiedPositions()) {
	using FunctionType = decltype(updateUnmodifiedPositions())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x68d320, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::usesFreezeAnimation() -> decltype(usesFreezeAnimation()) {
	using FunctionType = decltype(usesFreezeAnimation())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x247bb0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::usesSpecialAnimation() -> decltype(usesSpecialAnimation()) {
	using FunctionType = decltype(usesSpecialAnimation())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x247f70, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}
