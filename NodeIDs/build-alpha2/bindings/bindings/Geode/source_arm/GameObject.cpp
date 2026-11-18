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
	static auto func = wrapFunction<FunctionType>(base::get() + 0x18afb8, tulip::hook::TulipConvention::Default);
	reinterpret_cast<FunctionType>(func)(this);
}

GameObject::~GameObject() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(GameObject*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x5a63ac, tulip::hook::TulipConvention::Default);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) GameObject(geode::CutoffConstructor, sizeof(GameObject));
		geode::DestructorLock::addLock(this);
	}
}

auto GameObject::createWithFrame(char const* name) -> decltype(createWithFrame(name)) {
	using FunctionType = decltype(createWithFrame(name))(*)(char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5a6958, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(name);
}

auto GameObject::createWithKey(int key) -> decltype(createWithKey(key)) {
	using FunctionType = decltype(createWithKey(key))(*)(int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5a6484, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(key);
}

auto GameObject::isBasicEnterEffect(int id) -> decltype(isBasicEnterEffect(id)) {
	using FunctionType = decltype(isBasicEnterEffect(id))(*)(int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5bb020, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(id);
}

auto GameObject::objectFromVector(std::vector<std::string>& propValues, std::vector<void*>& propIsPresent, GJBaseGameLayer* gameLayer, bool lowDetail) -> decltype(objectFromVector(propValues, propIsPresent, gameLayer, lowDetail)) {
	using FunctionType = decltype(objectFromVector(propValues, propIsPresent, gameLayer, lowDetail))(*)(std::vector<std::string>&, std::vector<void*>&, GJBaseGameLayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5b1424, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(propValues, propIsPresent, gameLayer, lowDetail);
}

auto GameObject::resetMID() -> decltype(resetMID()) {
	using FunctionType = decltype(resetMID())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5a639c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto GameObject::update(float dt) -> decltype(update(dt)) {
	auto self = addresser::thunkAdjust(Resolve<float>::func(&GameObject::update), this);
	using FunctionType = decltype(update(dt))(*)(GameObject*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5a8b0c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, dt);
}

auto GameObject::setScaleX(float scaleX) -> decltype(setScaleX(scaleX)) {
	auto self = addresser::thunkAdjust(Resolve<float>::func(&GameObject::setScaleX), this);
	using FunctionType = decltype(setScaleX(scaleX))(*)(GameObject*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5ada9c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, scaleX);
}

auto GameObject::setScaleY(float scaleY) -> decltype(setScaleY(scaleY)) {
	auto self = addresser::thunkAdjust(Resolve<float>::func(&GameObject::setScaleY), this);
	using FunctionType = decltype(setScaleY(scaleY))(*)(GameObject*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5adb34, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, scaleY);
}

auto GameObject::setScale(float scale) -> decltype(setScale(scale)) {
	auto self = addresser::thunkAdjust(Resolve<float>::func(&GameObject::setScale), this);
	using FunctionType = decltype(setScale(scale))(*)(GameObject*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5adbcc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, scale);
}

auto GameObject::setPosition(cocos2d::CCPoint const& position) -> decltype(setPosition(position)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCPoint const&>::func(&GameObject::setPosition), this);
	using FunctionType = decltype(setPosition(position))(*)(GameObject*, cocos2d::CCPoint const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5ad4fc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, position);
}

auto GameObject::setVisible(bool visible) -> decltype(setVisible(visible)) {
	auto self = addresser::thunkAdjust(Resolve<bool>::func(&GameObject::setVisible), this);
	using FunctionType = decltype(setVisible(visible))(*)(GameObject*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5ae204, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, visible);
}

auto GameObject::setRotation(float rotation) -> decltype(setRotation(rotation)) {
	auto self = addresser::thunkAdjust(Resolve<float>::func(&GameObject::setRotation), this);
	using FunctionType = decltype(setRotation(rotation))(*)(GameObject*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5ad780, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, rotation);
}

auto GameObject::setRotationX(float rotationX) -> decltype(setRotationX(rotationX)) {
	auto self = addresser::thunkAdjust(Resolve<float>::func(&GameObject::setRotationX), this);
	using FunctionType = decltype(setRotationX(rotationX))(*)(GameObject*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5ad868, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, rotationX);
}

auto GameObject::setRotationY(float rotationY) -> decltype(setRotationY(rotationY)) {
	auto self = addresser::thunkAdjust(Resolve<float>::func(&GameObject::setRotationY), this);
	using FunctionType = decltype(setRotationY(rotationY))(*)(GameObject*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5ad944, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, rotationY);
}

auto GameObject::setOpacity(unsigned char opacity) -> decltype(setOpacity(opacity)) {
	auto self = addresser::thunkAdjust(Resolve<unsigned char>::func(&GameObject::setOpacity), this);
	using FunctionType = decltype(setOpacity(opacity))(*)(GameObject*, unsigned char);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5adee8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, opacity);
}

auto GameObject::initWithTexture(cocos2d::CCTexture2D* texture) -> decltype(initWithTexture(texture)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTexture2D*>::func(&GameObject::initWithTexture), this);
	using FunctionType = decltype(initWithTexture(texture))(*)(GameObject*, cocos2d::CCTexture2D*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5a6bec, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, texture);
}

auto GameObject::setChildColor(cocos2d::ccColor3B const& color) -> decltype(setChildColor(color)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::ccColor3B const&>::func(&GameObject::setChildColor), this);
	using FunctionType = decltype(setChildColor(color))(*)(GameObject*, cocos2d::ccColor3B const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5b8a4c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, color);
}

auto GameObject::setFlipX(bool flipX) -> decltype(setFlipX(flipX)) {
	auto self = addresser::thunkAdjust(Resolve<bool>::func(&GameObject::setFlipX), this);
	using FunctionType = decltype(setFlipX(flipX))(*)(GameObject*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5ada04, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, flipX);
}

auto GameObject::setFlipY(bool flipY) -> decltype(setFlipY(flipY)) {
	auto self = addresser::thunkAdjust(Resolve<bool>::func(&GameObject::setFlipY), this);
	using FunctionType = decltype(setFlipY(flipY))(*)(GameObject*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5ada50, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, flipY);
}

auto GameObject::customSetup() -> decltype(customSetup()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GameObject::customSetup), this);
	using FunctionType = decltype(customSetup())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5a8b10, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GameObject::setupCustomSprites(std::string frameName) -> decltype(setupCustomSprites(frameName)) {
	auto self = addresser::thunkAdjust(Resolve<std::string>::func(&GameObject::setupCustomSprites), this);
	using FunctionType = decltype(setupCustomSprites(frameName))(*)(GameObject*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3aebc4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, frameName);
}

auto GameObject::addMainSpriteToParent(bool reorder) -> decltype(addMainSpriteToParent(reorder)) {
	auto self = addresser::thunkAdjust(Resolve<bool>::func(&GameObject::addMainSpriteToParent), this);
	using FunctionType = decltype(addMainSpriteToParent(reorder))(*)(GameObject*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5af6b8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, reorder);
}

auto GameObject::resetObject() -> decltype(resetObject()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GameObject::resetObject), this);
	using FunctionType = decltype(resetObject())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5a8100, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GameObject::activateObject() -> decltype(activateObject()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GameObject::activateObject), this);
	using FunctionType = decltype(activateObject())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5a85c4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GameObject::deactivateObject(bool deactivate) -> decltype(deactivateObject(deactivate)) {
	auto self = addresser::thunkAdjust(Resolve<bool>::func(&GameObject::deactivateObject), this);
	using FunctionType = decltype(deactivateObject(deactivate))(*)(GameObject*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5a8938, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, deactivate);
}

auto GameObject::transferObjectRect(cocos2d::CCRect& rect) -> decltype(transferObjectRect(rect)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCRect&>::func(&GameObject::transferObjectRect), this);
	using FunctionType = decltype(transferObjectRect(rect))(*)(GameObject*, cocos2d::CCRect&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5acecc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, rect);
}

auto GameObject::getObjectRect() -> decltype(getObjectRect()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GameObject::getObjectRect), this);
	using FunctionType = decltype(getObjectRect())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5acf4c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GameObject::getObjectRect(float width, float height) -> decltype(getObjectRect(width, height)) {
	auto self = addresser::thunkAdjust(Resolve<float, float>::func(&GameObject::getObjectRect), this);
	using FunctionType = decltype(getObjectRect(width, height))(*)(GameObject*, float, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5acf60, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, width, height);
}

auto GameObject::getObjectRect2(float width, float height) -> decltype(getObjectRect2(width, height)) {
	auto self = addresser::thunkAdjust(Resolve<float, float>::func(&GameObject::getObjectRect2), this);
	using FunctionType = decltype(getObjectRect2(width, height))(*)(GameObject*, float, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5ad148, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, width, height);
}

auto GameObject::getObjectTextureRect() -> decltype(getObjectTextureRect()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GameObject::getObjectTextureRect), this);
	using FunctionType = decltype(getObjectTextureRect())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5ad21c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GameObject::getRealPosition() -> decltype(getRealPosition()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GameObject::getRealPosition), this);
	using FunctionType = decltype(getRealPosition())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5ad46c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GameObject::setStartPos(cocos2d::CCPoint position) -> decltype(setStartPos(position)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCPoint>::func(&GameObject::setStartPos), this);
	using FunctionType = decltype(setStartPos(position))(*)(GameObject*, cocos2d::CCPoint);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5a7ff0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, position);
}

auto GameObject::updateStartValues() -> decltype(updateStartValues()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GameObject::updateStartValues), this);
	using FunctionType = decltype(updateStartValues())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5a8454, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GameObject::getSaveString(GJBaseGameLayer* layer) -> decltype(getSaveString(layer)) {
	auto self = addresser::thunkAdjust(Resolve<GJBaseGameLayer*>::func(&GameObject::getSaveString), this);
	using FunctionType = decltype(getSaveString(layer))(*)(GameObject*, GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5b2dbc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, layer);
}

auto GameObject::claimParticle() -> decltype(claimParticle()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GameObject::claimParticle), this);
	using FunctionType = decltype(claimParticle())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5ae350, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GameObject::unclaimParticle() -> decltype(unclaimParticle()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GameObject::unclaimParticle), this);
	using FunctionType = decltype(unclaimParticle())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5ae928, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GameObject::particleWasActivated() -> decltype(particleWasActivated()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GameObject::particleWasActivated), this);
	using FunctionType = decltype(particleWasActivated())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5ae998, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GameObject::isFlipX() -> decltype(isFlipX()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GameObject::isFlipX), this);
	using FunctionType = decltype(isFlipX())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5ad9f4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GameObject::isFlipY() -> decltype(isFlipY()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GameObject::isFlipY), this);
	using FunctionType = decltype(isFlipY())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5ad9fc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GameObject::setRScaleX(float scaleX) -> decltype(setRScaleX(scaleX)) {
	auto self = addresser::thunkAdjust(Resolve<float>::func(&GameObject::setRScaleX), this);
	using FunctionType = decltype(setRScaleX(scaleX))(*)(GameObject*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5adc64, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, scaleX);
}

auto GameObject::setRScaleY(float scaleY) -> decltype(setRScaleY(scaleY)) {
	auto self = addresser::thunkAdjust(Resolve<float>::func(&GameObject::setRScaleY), this);
	using FunctionType = decltype(setRScaleY(scaleY))(*)(GameObject*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5adc98, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, scaleY);
}

auto GameObject::setRScale(float scale) -> decltype(setRScale(scale)) {
	auto self = addresser::thunkAdjust(Resolve<float>::func(&GameObject::setRScale), this);
	using FunctionType = decltype(setRScale(scale))(*)(GameObject*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5adccc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, scale);
}

auto GameObject::getRScaleX() -> decltype(getRScaleX()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GameObject::getRScaleX), this);
	using FunctionType = decltype(getRScaleX())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5add50, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GameObject::getRScaleY() -> decltype(getRScaleY()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GameObject::getRScaleY), this);
	using FunctionType = decltype(getRScaleY())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5add88, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GameObject::setRRotation(float rotation) -> decltype(setRRotation(rotation)) {
	auto self = addresser::thunkAdjust(Resolve<float>::func(&GameObject::setRRotation), this);
	using FunctionType = decltype(setRRotation(rotation))(*)(GameObject*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5ad6f0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, rotation);
}

auto GameObject::setObjectColor(cocos2d::ccColor3B const& color) -> decltype(setObjectColor(color)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::ccColor3B const&>::func(&GameObject::setObjectColor), this);
	using FunctionType = decltype(setObjectColor(color))(*)(GameObject*, cocos2d::ccColor3B const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5b8708, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, color);
}

auto GameObject::setGlowColor(cocos2d::ccColor3B const& color) -> decltype(setGlowColor(color)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::ccColor3B const&>::func(&GameObject::setGlowColor), this);
	using FunctionType = decltype(setGlowColor(color))(*)(GameObject*, cocos2d::ccColor3B const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5b89f8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, color);
}

auto GameObject::restoreObject() -> decltype(restoreObject()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GameObject::restoreObject), this);
	using FunctionType = decltype(restoreObject())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5ae9b8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GameObject::selectObject(cocos2d::ccColor3B color) -> decltype(selectObject(color)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::ccColor3B>::func(&GameObject::selectObject), this);
	using FunctionType = decltype(selectObject(color))(*)(GameObject*, cocos2d::ccColor3B);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5b8ad0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, color);
}

auto GameObject::getOrientedBox() -> decltype(getOrientedBox()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GameObject::getOrientedBox), this);
	using FunctionType = decltype(getOrientedBox())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5b92d4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GameObject::updateOrientedBox() -> decltype(updateOrientedBox()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GameObject::updateOrientedBox), this);
	using FunctionType = decltype(updateOrientedBox())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5b936c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GameObject::getObjectRotation() -> decltype(getObjectRotation()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GameObject::getObjectRotation), this);
	using FunctionType = decltype(getObjectRotation())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5bf0dc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GameObject::updateMainColor(cocos2d::ccColor3B const& color) -> decltype(updateMainColor(color)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::ccColor3B const&>::func(&GameObject::updateMainColor), this);
	using FunctionType = decltype(updateMainColor(color))(*)(GameObject*, cocos2d::ccColor3B const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5b9d84, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, color);
}

auto GameObject::updateSecondaryColor(cocos2d::ccColor3B const& color) -> decltype(updateSecondaryColor(color)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::ccColor3B const&>::func(&GameObject::updateSecondaryColor), this);
	using FunctionType = decltype(updateSecondaryColor(color))(*)(GameObject*, cocos2d::ccColor3B const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5ba288, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, color);
}

auto GameObject::addToGroup(int id) -> decltype(addToGroup(id)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&GameObject::addToGroup), this);
	using FunctionType = decltype(addToGroup(id))(*)(GameObject*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5afda0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, id);
}

auto GameObject::removeFromGroup(int id) -> decltype(removeFromGroup(id)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&GameObject::removeFromGroup), this);
	using FunctionType = decltype(removeFromGroup(id))(*)(GameObject*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5afe70, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, id);
}

auto GameObject::saveActiveColors() -> decltype(saveActiveColors()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GameObject::saveActiveColors), this);
	using FunctionType = decltype(saveActiveColors())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5b8544, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GameObject::spawnXPosition() -> decltype(spawnXPosition()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GameObject::spawnXPosition), this);
	using FunctionType = decltype(spawnXPosition())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x18a9d4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GameObject::updateParticleColor(cocos2d::ccColor3B const& color) -> decltype(updateParticleColor(color)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::ccColor3B const&>::func(&GameObject::updateParticleColor), this);
	using FunctionType = decltype(updateParticleColor(color))(*)(GameObject*, cocos2d::ccColor3B const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5b8930, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, color);
}

auto GameObject::updateParticleOpacity(unsigned char opacity) -> decltype(updateParticleOpacity(opacity)) {
	auto self = addresser::thunkAdjust(Resolve<unsigned char>::func(&GameObject::updateParticleOpacity), this);
	using FunctionType = decltype(updateParticleOpacity(opacity))(*)(GameObject*, unsigned char);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5ae17c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, opacity);
}

auto GameObject::shouldDrawEditorHitbox() -> decltype(shouldDrawEditorHitbox()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GameObject::shouldDrawEditorHitbox), this);
	using FunctionType = decltype(shouldDrawEditorHitbox())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5bb05c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GameObject::getObjectRectDirty() const  -> decltype(getObjectRectDirty()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GameObject::getObjectRectDirty), this);
	using FunctionType = decltype(getObjectRectDirty())(*)(GameObject const *);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x18a9f4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GameObject::setObjectRectDirty(bool dirty) -> decltype(setObjectRectDirty(dirty)) {
	auto self = addresser::thunkAdjust(Resolve<bool>::func(&GameObject::setObjectRectDirty), this);
	using FunctionType = decltype(setObjectRectDirty(dirty))(*)(GameObject*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x18a9fc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, dirty);
}

auto GameObject::getOrientedRectDirty() const  -> decltype(getOrientedRectDirty()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GameObject::getOrientedRectDirty), this);
	using FunctionType = decltype(getOrientedRectDirty())(*)(GameObject const *);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x18aa04, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GameObject::setOrientedRectDirty(bool dirty) -> decltype(setOrientedRectDirty(dirty)) {
	auto self = addresser::thunkAdjust(Resolve<bool>::func(&GameObject::setOrientedRectDirty), this);
	using FunctionType = decltype(setOrientedRectDirty(dirty))(*)(GameObject*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x18aa0c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, dirty);
}

auto GameObject::getType() const  -> decltype(getType()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GameObject::getType), this);
	using FunctionType = decltype(getType())(*)(GameObject const *);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x18aa14, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GameObject::setType(GameObjectType type) -> decltype(setType(type)) {
	auto self = addresser::thunkAdjust(Resolve<GameObjectType>::func(&GameObject::setType), this);
	using FunctionType = decltype(setType(type))(*)(GameObject*, GameObjectType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x18aa1c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, type);
}

auto GameObject::getStartPos() const  -> decltype(getStartPos()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GameObject::getStartPos), this);
	using FunctionType = decltype(getStartPos())(*)(GameObject const *);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x18aa24, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GameObject::addColorSprite(std::string frame) -> decltype(addColorSprite(frame)) {
	using FunctionType = decltype(addColorSprite(frame))(*)(GameObject*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5a7540, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, frame);
}

auto GameObject::addColorSpriteToParent(bool reorder) -> decltype(addColorSpriteToParent(reorder)) {
	using FunctionType = decltype(addColorSpriteToParent(reorder))(*)(GameObject*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5a8714, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, reorder);
}

auto GameObject::addColorSpriteToSelf() -> decltype(addColorSpriteToSelf()) {
	using FunctionType = decltype(addColorSpriteToSelf())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5af844, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::addCustomBlackChild(std::string frame, float opacity, bool color) -> decltype(addCustomBlackChild(frame, opacity, color)) {
	using FunctionType = decltype(addCustomBlackChild(frame, opacity, color))(*)(GameObject*, std::string, float, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5ac8ac, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, frame, opacity, color);
}

auto GameObject::addCustomChild(std::string frame, cocos2d::CCPoint offset, int zOrder) -> decltype(addCustomChild(frame, offset, zOrder)) {
	using FunctionType = decltype(addCustomChild(frame, offset, zOrder))(*)(GameObject*, std::string, cocos2d::CCPoint, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5aca94, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, frame, offset, zOrder);
}

auto GameObject::addCustomColorChild(std::string frame) -> decltype(addCustomColorChild(frame)) {
	using FunctionType = decltype(addCustomColorChild(frame))(*)(GameObject*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5acb3c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, frame);
}

auto GameObject::addEmptyGlow() -> decltype(addEmptyGlow()) {
	using FunctionType = decltype(addEmptyGlow())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5a73e8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::addGlow(std::string frame) -> decltype(addGlow(frame)) {
	using FunctionType = decltype(addGlow(frame))(*)(GameObject*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5a6cf4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, frame);
}

auto GameObject::addInternalChild(cocos2d::CCSprite* parent, std::string frame, cocos2d::CCPoint offset, int zOrder) -> decltype(addInternalChild(parent, frame, offset, zOrder)) {
	using FunctionType = decltype(addInternalChild(parent, frame, offset, zOrder))(*)(GameObject*, cocos2d::CCSprite*, std::string, cocos2d::CCPoint, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5accd8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, parent, frame, offset, zOrder);
}

auto GameObject::addInternalCustomColorChild(std::string frame, cocos2d::CCPoint offset, int zOrder) -> decltype(addInternalCustomColorChild(frame, offset, zOrder)) {
	using FunctionType = decltype(addInternalCustomColorChild(frame, offset, zOrder))(*)(GameObject*, std::string, cocos2d::CCPoint, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5acc14, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, frame, offset, zOrder);
}

auto GameObject::addInternalGlowChild(std::string frame, cocos2d::CCPoint offset) -> decltype(addInternalGlowChild(frame, offset)) {
	using FunctionType = decltype(addInternalGlowChild(frame, offset))(*)(GameObject*, std::string, cocos2d::CCPoint);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5acd7c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, frame, offset);
}

auto GameObject::addNewSlope01(bool dontDraw) -> decltype(addNewSlope01(dontDraw)) {
	using FunctionType = decltype(addNewSlope01(dontDraw))(*)(GameObject*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5baa80, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, dontDraw);
}

auto GameObject::addNewSlope01Glow(bool dontDraw) -> decltype(addNewSlope01Glow(dontDraw)) {
	using FunctionType = decltype(addNewSlope01Glow(dontDraw))(*)(GameObject*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5bab88, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, dontDraw);
}

auto GameObject::addNewSlope02(bool dontDraw) -> decltype(addNewSlope02(dontDraw)) {
	using FunctionType = decltype(addNewSlope02(dontDraw))(*)(GameObject*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5baccc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, dontDraw);
}

auto GameObject::addNewSlope02Glow(bool dontDraw) -> decltype(addNewSlope02Glow(dontDraw)) {
	using FunctionType = decltype(addNewSlope02Glow(dontDraw))(*)(GameObject*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5badd4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, dontDraw);
}

auto GameObject::addRotation(float rotationX, float rotationY) -> decltype(addRotation(rotationX, rotationY)) {
	using FunctionType = decltype(addRotation(rotationX, rotationY))(*)(GameObject*, float, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5ad684, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, rotationX, rotationY);
}

auto GameObject::addToColorGroup(int group) -> decltype(addToColorGroup(group)) {
	using FunctionType = decltype(addToColorGroup(group))(*)(GameObject*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5b0030, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, group);
}

auto GameObject::addToCustomScaleX(float scale) -> decltype(addToCustomScaleX(scale)) {
	using FunctionType = decltype(addToCustomScaleX(scale))(*)(GameObject*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5addc0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, scale);
}

auto GameObject::addToCustomScaleY(float scale) -> decltype(addToCustomScaleY(scale)) {
	using FunctionType = decltype(addToCustomScaleY(scale))(*)(GameObject*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5adde8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, scale);
}

auto GameObject::addToOpacityGroup(int group) -> decltype(addToOpacityGroup(group)) {
	using FunctionType = decltype(addToOpacityGroup(group))(*)(GameObject*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5b0170, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, group);
}

auto GameObject::addToTempOffset(double offsetX, double offsetY) -> decltype(addToTempOffset(offsetX, offsetY)) {
	using FunctionType = decltype(addToTempOffset(offsetX, offsetY))(*)(GameObject*, double, double);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5ad3e8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, offsetX, offsetY);
}

auto GameObject::assignUniqueID() -> decltype(assignUniqueID()) {
	using FunctionType = decltype(assignUniqueID())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5a6c20, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::belongsToGroup(int group) -> decltype(belongsToGroup(group)) {
	using FunctionType = decltype(belongsToGroup(group))(*)(GameObject*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5aff9c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, group);
}

auto GameObject::calculateOrientedBox() -> decltype(calculateOrientedBox()) {
	using FunctionType = decltype(calculateOrientedBox())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5b9330, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::canChangeCustomColor() -> decltype(canChangeCustomColor()) {
	using FunctionType = decltype(canChangeCustomColor())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5b97fc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::canChangeMainColor() -> decltype(canChangeMainColor()) {
	using FunctionType = decltype(canChangeMainColor())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5b9830, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::canChangeSecondaryColor() -> decltype(canChangeSecondaryColor()) {
	using FunctionType = decltype(canChangeSecondaryColor())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5b9844, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::canRotateFree() -> decltype(canRotateFree()) {
	using FunctionType = decltype(canRotateFree())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5afcf8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::colorForMode(int id, bool mainColor) -> decltype(colorForMode(id, mainColor)) {
	using FunctionType = decltype(colorForMode(id, mainColor))(*)(GameObject*, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5b9e88, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id, mainColor);
}

auto GameObject::commonInteractiveSetup() -> decltype(commonInteractiveSetup()) {
	using FunctionType = decltype(commonInteractiveSetup())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5ab9e4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::copyGroups(GameObject* object) -> decltype(copyGroups(object)) {
	using FunctionType = decltype(copyGroups(object))(*)(GameObject*, GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5aff24, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto GameObject::createAndAddParticle(int objectType, char const* plistName, int tag, cocos2d::tCCPositionType positionType) -> decltype(createAndAddParticle(objectType, plistName, tag, positionType)) {
	using FunctionType = decltype(createAndAddParticle(objectType, plistName, tag, positionType))(*)(GameObject*, int, char const*, int, cocos2d::tCCPositionType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x58ce30, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, objectType, plistName, tag, positionType);
}

auto GameObject::createGlow(std::string frame) -> decltype(createGlow(frame)) {
	using FunctionType = decltype(createGlow(frame))(*)(GameObject*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5a7354, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, frame);
}

auto GameObject::createGroupContainer(int size) -> decltype(createGroupContainer(size)) {
	using FunctionType = decltype(createGroupContainer(size))(*)(GameObject*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5afd40, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, size);
}

auto GameObject::createSpriteColor(int type) -> decltype(createSpriteColor(type)) {
	using FunctionType = decltype(createSpriteColor(type))(*)(GameObject*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5a6c3c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, type);
}

auto GameObject::deselectObject() -> decltype(deselectObject()) {
	using FunctionType = decltype(deselectObject())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5b8f9c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::destroyObject() -> decltype(destroyObject()) {
	using FunctionType = decltype(destroyObject())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5ae99c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::determineSlopeDirection() -> decltype(determineSlopeDirection()) {
	using FunctionType = decltype(determineSlopeDirection())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5af938, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::didScaleXChange() -> decltype(didScaleXChange()) {
	using FunctionType = decltype(didScaleXChange())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5ade10, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::didScaleYChange() -> decltype(didScaleYChange()) {
	using FunctionType = decltype(didScaleYChange())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5ade40, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::dirtifyObjectPos() -> decltype(dirtifyObjectPos()) {
	using FunctionType = decltype(dirtifyObjectPos())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5acebc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::dirtifyObjectRect() -> decltype(dirtifyObjectRect()) {
	using FunctionType = decltype(dirtifyObjectRect())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5aceb0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::disableObject() -> decltype(disableObject()) {
	using FunctionType = decltype(disableObject())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5aea04, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::duplicateAttributes(GameObject* object) -> decltype(duplicateAttributes(object)) {
	using FunctionType = decltype(duplicateAttributes(object))(*)(GameObject*, GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5b9a4c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto GameObject::duplicateColorMode(GameObject* object) -> decltype(duplicateColorMode(object)) {
	using FunctionType = decltype(duplicateColorMode(object))(*)(GameObject*, GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5b99b4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto GameObject::duplicateValues(GameObject* object) -> decltype(duplicateValues(object)) {
	using FunctionType = decltype(duplicateValues(object))(*)(GameObject*, GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5b9af0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto GameObject::editorColorForCustomMode(int id) -> decltype(editorColorForCustomMode(id)) {
	using FunctionType = decltype(editorColorForCustomMode(id))(*)(GameObject*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5b8e64, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto GameObject::editorColorForMode(int id) -> decltype(editorColorForMode(id)) {
	using FunctionType = decltype(editorColorForMode(id))(*)(GameObject*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5b8c90, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto GameObject::fastRotateObject(float rotation) -> decltype(fastRotateObject(rotation)) {
	using FunctionType = decltype(fastRotateObject(rotation))(*)(GameObject*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5b95bc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, rotation);
}

auto GameObject::getActiveColorForMode(int id, bool mainColor) -> decltype(getActiveColorForMode(id, mainColor)) {
	using FunctionType = decltype(getActiveColorForMode(id, mainColor))(*)(GameObject*, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5ba4b8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id, mainColor);
}

auto GameObject::getBallFrame(int index) -> decltype(getBallFrame(index)) {
	using FunctionType = decltype(getBallFrame(index))(*)(GameObject*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5b850c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, index);
}

auto GameObject::getBoundingRect() -> decltype(getBoundingRect()) {
	using FunctionType = decltype(getBoundingRect())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5ace4c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::getBoxOffset() -> decltype(getBoxOffset()) {
	using FunctionType = decltype(getBoxOffset())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5ad058, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::getColorIndex() -> decltype(getColorIndex()) {
	using FunctionType = decltype(getColorIndex())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5ba8c8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::getColorKey(bool isMainColor, bool colorGroups) -> decltype(getColorKey(isMainColor, colorGroups)) {
	using FunctionType = decltype(getColorKey(isMainColor, colorGroups))(*)(GameObject*, bool, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5b0a9c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, isMainColor, colorGroups);
}

auto GameObject::getCustomZLayer() -> decltype(getCustomZLayer()) {
	using FunctionType = decltype(getCustomZLayer())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5afd28, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::getGroupDisabled() -> decltype(getGroupDisabled()) {
	using FunctionType = decltype(getGroupDisabled())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5b0220, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::getGroupID(int index) -> decltype(getGroupID(index)) {
	using FunctionType = decltype(getGroupID(index))(*)(GameObject*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5aff04, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, index);
}

auto GameObject::getGroupString() -> decltype(getGroupString()) {
	using FunctionType = decltype(getGroupString())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5b025c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::getLastPosition() -> decltype(getLastPosition()) {
	using FunctionType = decltype(getLastPosition())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5ba678, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::getMainColor() -> decltype(getMainColor()) {
	using FunctionType = decltype(getMainColor())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5b97ec, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::getMainColorMode() -> decltype(getMainColorMode()) {
	using FunctionType = decltype(getMainColorMode())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5b13e4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::getObjectDirection() -> decltype(getObjectDirection()) {
	using FunctionType = decltype(getObjectDirection())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5afb8c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::getObjectRadius() -> decltype(getObjectRadius()) {
	using FunctionType = decltype(getObjectRadius())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5ba9dc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::getObjectRectPointer() -> decltype(getObjectRectPointer()) {
	using FunctionType = decltype(getObjectRectPointer())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5acf10, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::getObjectZLayer() -> decltype(getObjectZLayer()) {
	using FunctionType = decltype(getObjectZLayer())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5a86fc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::getObjectZOrder() -> decltype(getObjectZOrder()) {
	using FunctionType = decltype(getObjectZOrder())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5af82c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::getOuterObjectRect() -> decltype(getOuterObjectRect()) {
	using FunctionType = decltype(getOuterObjectRect())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5ad1d8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::getParentMode() -> decltype(getParentMode()) {
	using FunctionType = decltype(getParentMode())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5ae8a4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::getRelativeSpriteColor(int type) -> decltype(getRelativeSpriteColor(type)) {
	using FunctionType = decltype(getRelativeSpriteColor(type))(*)(GameObject*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5b9864, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, type);
}

auto GameObject::getScalePosDelta() -> decltype(getScalePosDelta()) {
	using FunctionType = decltype(getScalePosDelta())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5afbd8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::getSecondaryColor() -> decltype(getSecondaryColor()) {
	using FunctionType = decltype(getSecondaryColor())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5b97f4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::getSecondaryColorMode() -> decltype(getSecondaryColorMode()) {
	using FunctionType = decltype(getSecondaryColorMode())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5b1404, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::getSlopeAngle() -> decltype(getSlopeAngle()) {
	using FunctionType = decltype(getSlopeAngle())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5afb54, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::getUnmodifiedPosition() -> decltype(getUnmodifiedPosition()) {
	using FunctionType = decltype(getUnmodifiedPosition())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5ad40c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::groupColor(cocos2d::ccColor3B const& color, bool mainColor) -> decltype(groupColor(color, mainColor)) {
	using FunctionType = decltype(groupColor(color, mainColor))(*)(GameObject*, cocos2d::ccColor3B const&, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5ba5a0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, color, mainColor);
}

auto GameObject::groupOpacityMod() -> decltype(groupOpacityMod()) {
	using FunctionType = decltype(groupOpacityMod())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5b0914, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::groupWasDisabled() -> decltype(groupWasDisabled()) {
	using FunctionType = decltype(groupWasDisabled())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5b0244, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::groupWasEnabled() -> decltype(groupWasEnabled()) {
	using FunctionType = decltype(groupWasEnabled())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5b0228, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::hasSecondaryColor() -> decltype(hasSecondaryColor()) {
	using FunctionType = decltype(hasSecondaryColor())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5b99a4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::ignoreEditorDuration() -> decltype(ignoreEditorDuration()) {
	using FunctionType = decltype(ignoreEditorDuration())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5ac0b0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::ignoreEnter() -> decltype(ignoreEnter()) {
	using FunctionType = decltype(ignoreEnter())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5ace44, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::ignoreFade() -> decltype(ignoreFade()) {
	using FunctionType = decltype(ignoreFade())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5ace3c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::init(char const* frame) -> decltype(init(frame)) {
	using FunctionType = decltype(init(frame))(*)(GameObject*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5a69e8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, frame);
}

auto GameObject::isBasicTrigger() -> decltype(isBasicTrigger()) {
	using FunctionType = decltype(isBasicTrigger())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5baf30, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::isColorObject() -> decltype(isColorObject()) {
	using FunctionType = decltype(isColorObject())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5b98dc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::isColorTrigger() -> decltype(isColorTrigger()) {
	using FunctionType = decltype(isColorTrigger())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5ba874, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::isConfigurablePortal() -> decltype(isConfigurablePortal()) {
	using FunctionType = decltype(isConfigurablePortal())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5bafa4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::isEditorSpawnableTrigger() -> decltype(isEditorSpawnableTrigger()) {
	using FunctionType = decltype(isEditorSpawnableTrigger())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5ac2c0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::isFacingDown() -> decltype(isFacingDown()) {
	using FunctionType = decltype(isFacingDown())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5b96ac, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::isFacingLeft() -> decltype(isFacingLeft()) {
	using FunctionType = decltype(isFacingLeft())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5b973c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::isSettingsObject() -> decltype(isSettingsObject()) {
	using FunctionType = decltype(isSettingsObject())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5baf18, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::isSpawnableTrigger() -> decltype(isSpawnableTrigger()) {
	using FunctionType = decltype(isSpawnableTrigger())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5ba688, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::isSpecialObject() -> decltype(isSpecialObject()) {
	using FunctionType = decltype(isSpecialObject())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5baa08, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::isSpeedObject() -> decltype(isSpeedObject()) {
	using FunctionType = decltype(isSpeedObject())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5ba954, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::isStoppableTrigger() -> decltype(isStoppableTrigger()) {
	using FunctionType = decltype(isStoppableTrigger())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5abf54, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::isTrigger() -> decltype(isTrigger()) {
	using FunctionType = decltype(isTrigger())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5abd58, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::loadGroupsFromString(std::string groupList) -> decltype(loadGroupsFromString(groupList)) {
	using FunctionType = decltype(loadGroupsFromString(groupList))(*)(GameObject*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5b04b8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, groupList);
}

auto GameObject::makeInvisible() -> decltype(makeInvisible()) {
	using FunctionType = decltype(makeInvisible())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5ae9d0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::makeVisible() -> decltype(makeVisible()) {
	using FunctionType = decltype(makeVisible())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5ae9ec, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::opacityModForMode(int id, bool mainColor) -> decltype(opacityModForMode(id, mainColor)) {
	using FunctionType = decltype(opacityModForMode(id, mainColor))(*)(GameObject*, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5ba198, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id, mainColor);
}

auto GameObject::parentForZLayer(int zLayer, bool blending, int parentMode) -> decltype(parentForZLayer(zLayer, blending, parentMode)) {
	using FunctionType = decltype(parentForZLayer(zLayer, blending, parentMode))(*)(GameObject*, int, bool, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x306b0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, zLayer, blending, parentMode);
}

auto GameObject::perspectiveColorFrame(char const* prefix, int index) -> decltype(perspectiveColorFrame(prefix, index)) {
	using FunctionType = decltype(perspectiveColorFrame(prefix, index))(*)(GameObject*, char const*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3aeb48, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, prefix, index);
}

auto GameObject::perspectiveFrame(char const* prefix, int index) -> decltype(perspectiveFrame(prefix, index)) {
	using FunctionType = decltype(perspectiveFrame(prefix, index))(*)(GameObject*, char const*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3ae850, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, prefix, index);
}

auto GameObject::playDestroyObjectAnim(GJBaseGameLayer* layer) -> decltype(playDestroyObjectAnim(layer)) {
	using FunctionType = decltype(playDestroyObjectAnim(layer))(*)(GameObject*, GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1f1afc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, layer);
}

auto GameObject::playPickupAnimation(cocos2d::CCSprite* target, float offset, float duration, float randomValue1, float randomValue2) -> decltype(playPickupAnimation(target, offset, duration, randomValue1, randomValue2)) {
	using FunctionType = decltype(playPickupAnimation(target, offset, duration, randomValue1, randomValue2))(*)(GameObject*, cocos2d::CCSprite*, float, float, float, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1f162c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, target, offset, duration, randomValue1, randomValue2);
}

auto GameObject::playPickupAnimation(cocos2d::CCSprite* target, float xOffset, float yOffset, float controlYOffset1, float controlYOffset2, float endYOffset, float duration, float fadeDelay, float fadeDuration, bool rotate, float randomValue1, float randomValue2) -> decltype(playPickupAnimation(target, xOffset, yOffset, controlYOffset1, controlYOffset2, endYOffset, duration, fadeDelay, fadeDuration, rotate, randomValue1, randomValue2)) {
	using FunctionType = decltype(playPickupAnimation(target, xOffset, yOffset, controlYOffset1, controlYOffset2, endYOffset, duration, fadeDelay, fadeDuration, rotate, randomValue1, randomValue2))(*)(GameObject*, cocos2d::CCSprite*, float, float, float, float, float, float, float, float, bool, float, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1f16b4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, target, xOffset, yOffset, controlYOffset1, controlYOffset2, endYOffset, duration, fadeDelay, fadeDuration, rotate, randomValue1, randomValue2);
}

auto GameObject::playShineEffect() -> decltype(playShineEffect()) {
	using FunctionType = decltype(playShineEffect())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x305270, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::quickUpdatePosition() -> decltype(quickUpdatePosition()) {
	using FunctionType = decltype(quickUpdatePosition())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5ad484, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::quickUpdatePosition2() -> decltype(quickUpdatePosition2()) {
	using FunctionType = decltype(quickUpdatePosition2())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5ad4ec, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::removeColorSprite() -> decltype(removeColorSprite()) {
	using FunctionType = decltype(removeColorSprite())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5a7514, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::removeGlow() -> decltype(removeGlow()) {
	using FunctionType = decltype(removeGlow())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5a74d8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::reorderColorSprite() -> decltype(reorderColorSprite()) {
	using FunctionType = decltype(reorderColorSprite())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5af934, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::resetColorGroups() -> decltype(resetColorGroups()) {
	using FunctionType = decltype(resetColorGroups())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5b00e0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::resetGroupDisabled() -> decltype(resetGroupDisabled()) {
	using FunctionType = decltype(resetGroupDisabled())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5a8388, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::resetGroups() -> decltype(resetGroups()) {
	using FunctionType = decltype(resetGroups())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5afefc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::resetMainColorMode() -> decltype(resetMainColorMode()) {
	using FunctionType = decltype(resetMainColorMode())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5b995c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::resetMoveOffset() -> decltype(resetMoveOffset()) {
	using FunctionType = decltype(resetMoveOffset())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5a85b4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::resetRScaleForced() -> decltype(resetRScaleForced()) {
	using FunctionType = decltype(resetRScaleForced())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5add10, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::resetSecondaryColorMode() -> decltype(resetSecondaryColorMode()) {
	using FunctionType = decltype(resetSecondaryColorMode())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5b9980, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::setAreaOpacity(float step, float value, int index) -> decltype(setAreaOpacity(step, value, index)) {
	using FunctionType = decltype(setAreaOpacity(step, value, index))(*)(GameObject*, float, float, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5ade70, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, step, value, index);
}

auto GameObject::setCustomZLayer(int zLayer) -> decltype(setCustomZLayer(zLayer)) {
	using FunctionType = decltype(setCustomZLayer(zLayer))(*)(GameObject*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5afd30, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, zLayer);
}

auto GameObject::setDefaultMainColorMode(int id) -> decltype(setDefaultMainColorMode(id)) {
	using FunctionType = decltype(setDefaultMainColorMode(id))(*)(GameObject*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5ab9c4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto GameObject::setDefaultSecondaryColorMode(int id) -> decltype(setDefaultSecondaryColorMode(id)) {
	using FunctionType = decltype(setDefaultSecondaryColorMode(id))(*)(GameObject*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5a7eb4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto GameObject::setGlowOpacity(unsigned char opacity) -> decltype(setGlowOpacity(opacity)) {
	using FunctionType = decltype(setGlowOpacity(opacity))(*)(GameObject*, unsigned char);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5ae118, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, opacity);
}

auto GameObject::setLastPosition(cocos2d::CCPoint const& position) -> decltype(setLastPosition(position)) {
	using FunctionType = decltype(setLastPosition(position))(*)(GameObject*, cocos2d::CCPoint const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5ba680, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, position);
}

auto GameObject::setMainColorMode(int id) -> decltype(setMainColorMode(id)) {
	using FunctionType = decltype(setMainColorMode(id))(*)(GameObject*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5b991c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto GameObject::setSecondaryColorMode(int id) -> decltype(setSecondaryColorMode(id)) {
	using FunctionType = decltype(setSecondaryColorMode(id))(*)(GameObject*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5b993c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto GameObject::setupColorSprite(int id, bool mainColor) -> decltype(setupColorSprite(id, mainColor)) {
	using FunctionType = decltype(setupColorSprite(id, mainColor))(*)(GameObject*, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5b86cc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id, mainColor);
}

auto GameObject::setupPixelScale() -> decltype(setupPixelScale()) {
	using FunctionType = decltype(setupPixelScale())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3cd9d4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::setupSpriteSize() -> decltype(setupSpriteSize()) {
	using FunctionType = decltype(setupSpriteSize())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5ac474, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::shouldBlendColor(GJSpriteColor* color, bool mainColor) -> decltype(shouldBlendColor(color, mainColor)) {
	using FunctionType = decltype(shouldBlendColor(color, mainColor))(*)(GameObject*, GJSpriteColor*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5af5c0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, color, mainColor);
}

auto GameObject::shouldLockX() -> decltype(shouldLockX()) {
	using FunctionType = decltype(shouldLockX())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5abb74, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::shouldNotHideAnimFreeze() -> decltype(shouldNotHideAnimFreeze()) {
	using FunctionType = decltype(shouldNotHideAnimFreeze())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1f15d4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::shouldShowPickupEffects() -> decltype(shouldShowPickupEffects()) {
	using FunctionType = decltype(shouldShowPickupEffects())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1f18b4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::slopeFloorTop() -> decltype(slopeFloorTop()) {
	using FunctionType = decltype(slopeFloorTop())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5b90a0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::slopeWallLeft() -> decltype(slopeWallLeft()) {
	using FunctionType = decltype(slopeWallLeft())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5b9084, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::slopeYPos(GameObject* object) -> decltype(slopeYPos(object)) {
	using FunctionType = decltype(slopeYPos(object))(*)(GameObject*, GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5b90bc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto GameObject::slopeYPos(cocos2d::CCRect rect) -> decltype(slopeYPos(rect)) {
	using FunctionType = decltype(slopeYPos(rect))(*)(GameObject*, cocos2d::CCRect);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5b915c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, rect);
}

auto GameObject::slopeYPos(float x) -> decltype(slopeYPos(x)) {
	using FunctionType = decltype(slopeYPos(x))(*)(GameObject*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5b91cc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, x);
}

auto GameObject::spawnDefaultPickupParticle(GJBaseGameLayer* layer) -> decltype(spawnDefaultPickupParticle(layer)) {
	using FunctionType = decltype(spawnDefaultPickupParticle(layer))(*)(GameObject*, GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1f1924, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, layer);
}

auto GameObject::updateCustomColorType(short type) -> decltype(updateCustomColorType(type)) {
	using FunctionType = decltype(updateCustomColorType(type))(*)(GameObject*, short);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5ba624, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, type);
}

auto GameObject::updateCustomScaleX(float scaleX) -> decltype(updateCustomScaleX(scaleX)) {
	using FunctionType = decltype(updateCustomScaleX(scaleX))(*)(GameObject*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5a8394, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, scaleX);
}

auto GameObject::updateCustomScaleY(float scaleY) -> decltype(updateCustomScaleY(scaleY)) {
	using FunctionType = decltype(updateCustomScaleY(scaleY))(*)(GameObject*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5a83f4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, scaleY);
}

auto GameObject::updateHSVState() -> decltype(updateHSVState()) {
	using FunctionType = decltype(updateHSVState())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5b09ac, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::updateIsOriented() -> decltype(updateIsOriented()) {
	using FunctionType = decltype(updateIsOriented())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5b94f0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::updateMainColor() -> decltype(updateMainColor()) {
	using FunctionType = decltype(updateMainColor())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5b9d90, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::updateMainColorOnly() -> decltype(updateMainColorOnly()) {
	using FunctionType = decltype(updateMainColorOnly())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5ba148, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::updateMainOpacity() -> decltype(updateMainOpacity()) {
	using FunctionType = decltype(updateMainOpacity())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5ba070, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::updateObjectEditorColor() -> decltype(updateObjectEditorColor()) {
	using FunctionType = decltype(updateObjectEditorColor())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5b8fa4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::updateSecondaryColor() -> decltype(updateSecondaryColor()) {
	using FunctionType = decltype(updateSecondaryColor())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5ba294, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::updateSecondaryColorOnly() -> decltype(updateSecondaryColorOnly()) {
	using FunctionType = decltype(updateSecondaryColorOnly())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5ba468, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::updateSecondaryOpacity() -> decltype(updateSecondaryOpacity()) {
	using FunctionType = decltype(updateSecondaryOpacity())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5ba390, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::updateStartPos() -> decltype(updateStartPos()) {
	using FunctionType = decltype(updateStartPos())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5a8060, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::updateUnmodifiedPositions() -> decltype(updateUnmodifiedPositions()) {
	using FunctionType = decltype(updateUnmodifiedPositions())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5ad43c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::usesFreezeAnimation() -> decltype(usesFreezeAnimation()) {
	using FunctionType = decltype(usesFreezeAnimation())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1f152c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameObject::usesSpecialAnimation() -> decltype(usesSpecialAnimation()) {
	using FunctionType = decltype(usesSpecialAnimation())(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1f15e4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}
