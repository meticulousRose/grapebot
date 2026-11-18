
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/ParticleGameObject.hpp>
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

auto ParticleGameObject::create() -> decltype(create()) {
	using FunctionType = decltype(create())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x152714, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto ParticleGameObject::init() -> decltype(init()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&ParticleGameObject::init), this);
	using FunctionType = decltype(init())(*)(ParticleGameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x152874, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto ParticleGameObject::setScaleX(float scaleX) -> decltype(setScaleX(scaleX)) {
	auto self = addresser::thunkAdjust(Resolve<float>::func(&ParticleGameObject::setScaleX), this);
	using FunctionType = decltype(setScaleX(scaleX))(*)(ParticleGameObject*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x15387c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, scaleX);
}

auto ParticleGameObject::setScaleY(float scaleY) -> decltype(setScaleY(scaleY)) {
	auto self = addresser::thunkAdjust(Resolve<float>::func(&ParticleGameObject::setScaleY), this);
	using FunctionType = decltype(setScaleY(scaleY))(*)(ParticleGameObject*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1538f0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, scaleY);
}

auto ParticleGameObject::setScale(float scale) -> decltype(setScale(scale)) {
	auto self = addresser::thunkAdjust(Resolve<float>::func(&ParticleGameObject::setScale), this);
	using FunctionType = decltype(setScale(scale))(*)(ParticleGameObject*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x153964, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, scale);
}

auto ParticleGameObject::setRotation(float rotation) -> decltype(setRotation(rotation)) {
	auto self = addresser::thunkAdjust(Resolve<float>::func(&ParticleGameObject::setRotation), this);
	using FunctionType = decltype(setRotation(rotation))(*)(ParticleGameObject*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x15378c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, rotation);
}

auto ParticleGameObject::setRotationX(float rotationX) -> decltype(setRotationX(rotationX)) {
	auto self = addresser::thunkAdjust(Resolve<float>::func(&ParticleGameObject::setRotationX), this);
	using FunctionType = decltype(setRotationX(rotationX))(*)(ParticleGameObject*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1537dc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, rotationX);
}

auto ParticleGameObject::setRotationY(float rotationY) -> decltype(setRotationY(rotationY)) {
	auto self = addresser::thunkAdjust(Resolve<float>::func(&ParticleGameObject::setRotationY), this);
	using FunctionType = decltype(setRotationY(rotationY))(*)(ParticleGameObject*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x15382c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, rotationY);
}

auto ParticleGameObject::setChildColor(cocos2d::ccColor3B const& color) -> decltype(setChildColor(color)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::ccColor3B const&>::func(&ParticleGameObject::setChildColor), this);
	using FunctionType = decltype(setChildColor(color))(*)(ParticleGameObject*, cocos2d::ccColor3B const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x153ad4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, color);
}

auto ParticleGameObject::customSetup() -> decltype(customSetup()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&ParticleGameObject::customSetup), this);
	using FunctionType = decltype(customSetup())(*)(ParticleGameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x152a94, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto ParticleGameObject::addMainSpriteToParent(bool reorder) -> decltype(addMainSpriteToParent(reorder)) {
	auto self = addresser::thunkAdjust(Resolve<bool>::func(&ParticleGameObject::addMainSpriteToParent), this);
	using FunctionType = decltype(addMainSpriteToParent(reorder))(*)(ParticleGameObject*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x152b44, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, reorder);
}

auto ParticleGameObject::resetObject() -> decltype(resetObject()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&ParticleGameObject::resetObject), this);
	using FunctionType = decltype(resetObject())(*)(ParticleGameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x153c90, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto ParticleGameObject::deactivateObject(bool deactivate) -> decltype(deactivateObject(deactivate)) {
	auto self = addresser::thunkAdjust(Resolve<bool>::func(&ParticleGameObject::deactivateObject), this);
	using FunctionType = decltype(deactivateObject(deactivate))(*)(ParticleGameObject*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x153c54, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, deactivate);
}

auto ParticleGameObject::customObjectSetup(std::vector<std::string>& values, std::vector<void*>& exists) -> decltype(customObjectSetup(values, exists)) {
	auto self = addresser::thunkAdjust(Resolve<std::vector<std::string>&, std::vector<void*>&>::func(&ParticleGameObject::customObjectSetup), this);
	using FunctionType = decltype(customObjectSetup(values, exists))(*)(ParticleGameObject*, std::vector<std::string>&, std::vector<void*>&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1528ac, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, values, exists);
}

auto ParticleGameObject::getSaveString(GJBaseGameLayer* layer) -> decltype(getSaveString(layer)) {
	auto self = addresser::thunkAdjust(Resolve<GJBaseGameLayer*>::func(&ParticleGameObject::getSaveString), this);
	using FunctionType = decltype(getSaveString(layer))(*)(ParticleGameObject*, GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x153e9c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, layer);
}

auto ParticleGameObject::claimParticle() -> decltype(claimParticle()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&ParticleGameObject::claimParticle), this);
	using FunctionType = decltype(claimParticle())(*)(ParticleGameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x152c28, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto ParticleGameObject::unclaimParticle() -> decltype(unclaimParticle()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&ParticleGameObject::unclaimParticle), this);
	using FunctionType = decltype(unclaimParticle())(*)(ParticleGameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1531b4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto ParticleGameObject::particleWasActivated() -> decltype(particleWasActivated()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&ParticleGameObject::particleWasActivated), this);
	using FunctionType = decltype(particleWasActivated())(*)(ParticleGameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x15321c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto ParticleGameObject::setObjectColor(cocos2d::ccColor3B const& color) -> decltype(setObjectColor(color)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::ccColor3B const&>::func(&ParticleGameObject::setObjectColor), this);
	using FunctionType = decltype(setObjectColor(color))(*)(ParticleGameObject*, cocos2d::ccColor3B const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1539d8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, color);
}

auto ParticleGameObject::blendModeChanged() -> decltype(blendModeChanged()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&ParticleGameObject::blendModeChanged), this);
	using FunctionType = decltype(blendModeChanged())(*)(ParticleGameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x152b10, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto ParticleGameObject::updateMainParticleOpacity(unsigned char opacity) -> decltype(updateMainParticleOpacity(opacity)) {
	auto self = addresser::thunkAdjust(Resolve<unsigned char>::func(&ParticleGameObject::updateMainParticleOpacity), this);
	using FunctionType = decltype(updateMainParticleOpacity(opacity))(*)(ParticleGameObject*, unsigned char);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x153bd0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, opacity);
}

auto ParticleGameObject::updateSecondaryParticleOpacity(unsigned char opacity) -> decltype(updateSecondaryParticleOpacity(opacity)) {
	auto self = addresser::thunkAdjust(Resolve<unsigned char>::func(&ParticleGameObject::updateSecondaryParticleOpacity), this);
	using FunctionType = decltype(updateSecondaryParticleOpacity(opacity))(*)(ParticleGameObject*, unsigned char);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x153c14, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, opacity);
}

auto ParticleGameObject::updateSyncedAnimation(float totalTime, int frameIndex) -> decltype(updateSyncedAnimation(totalTime, frameIndex)) {
	auto self = addresser::thunkAdjust(Resolve<float, int>::func(&ParticleGameObject::updateSyncedAnimation), this);
	using FunctionType = decltype(updateSyncedAnimation(totalTime, frameIndex))(*)(ParticleGameObject*, float, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x153cf8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, totalTime, frameIndex);
}

auto ParticleGameObject::updateAnimateOnTrigger(bool animate) -> decltype(updateAnimateOnTrigger(animate)) {
	auto self = addresser::thunkAdjust(Resolve<bool>::func(&ParticleGameObject::updateAnimateOnTrigger), this);
	using FunctionType = decltype(updateAnimateOnTrigger(animate))(*)(ParticleGameObject*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x153e44, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, animate);
}

auto ParticleGameObject::applyParticleSettings(cocos2d::CCParticleSystemQuad* particle) -> decltype(applyParticleSettings(particle)) {
	using FunctionType = decltype(applyParticleSettings(particle))(*)(ParticleGameObject*, cocos2d::CCParticleSystemQuad*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x152d80, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, particle);
}

auto ParticleGameObject::createAndAddCustomParticle() -> decltype(createAndAddCustomParticle()) {
	using FunctionType = decltype(createAndAddCustomParticle())(*)(ParticleGameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x152a3c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto ParticleGameObject::createParticlePreviewArt() -> decltype(createParticlePreviewArt()) {
	using FunctionType = decltype(createParticlePreviewArt())(*)(ParticleGameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x153584, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto ParticleGameObject::setParticleString(std::string str) -> decltype(setParticleString(str)) {
	using FunctionType = decltype(setParticleString(str))(*)(ParticleGameObject*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x153374, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, str);
}

auto ParticleGameObject::updateParticle() -> decltype(updateParticle()) {
	using FunctionType = decltype(updateParticle())(*)(ParticleGameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x153408, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto ParticleGameObject::updateParticleAngle(float angle, cocos2d::CCParticleSystemQuad* particle) -> decltype(updateParticleAngle(angle, particle)) {
	using FunctionType = decltype(updateParticleAngle(angle, particle))(*)(ParticleGameObject*, float, cocos2d::CCParticleSystemQuad*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x153098, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, angle, particle);
}

auto ParticleGameObject::updateParticlePreviewArtOpacity(float opacity) -> decltype(updateParticlePreviewArtOpacity(opacity)) {
	using FunctionType = decltype(updateParticlePreviewArtOpacity(opacity))(*)(ParticleGameObject*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x153708, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, opacity);
}

auto ParticleGameObject::updateParticleScale(float scale) -> decltype(updateParticleScale(scale)) {
	using FunctionType = decltype(updateParticleScale(scale))(*)(ParticleGameObject*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x153530, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, scale);
}

auto ParticleGameObject::updateParticleStruct() -> decltype(updateParticleStruct()) {
	using FunctionType = decltype(updateParticleStruct())(*)(ParticleGameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x152c04, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}
