#include <Geode/cocos/cocoa/CCObject.h>

#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/ShaderLayer.hpp>
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

ShaderLayer::~ShaderLayer() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(ShaderLayer*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x33a664, tulip::hook::TulipConvention::Default);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) ShaderLayer(geode::CutoffConstructor, sizeof(ShaderLayer));
		geode::DestructorLock::addLock(this);
	}
}

auto ShaderLayer::init() -> decltype(init()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&ShaderLayer::init), this);
	using FunctionType = decltype(init())(*)(ShaderLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x33a838, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto ShaderLayer::update(float dt) -> decltype(update(dt)) {
	auto self = addresser::thunkAdjust(Resolve<float>::func(&ShaderLayer::update), this);
	using FunctionType = decltype(update(dt))(*)(ShaderLayer*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x33c00c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, dt);
}

auto ShaderLayer::visit() -> decltype(visit()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&ShaderLayer::visit), this);
	using FunctionType = decltype(visit())(*)(ShaderLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x340ff0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto ShaderLayer::objectPosToShaderPos(cocos2d::CCPoint position) -> decltype(objectPosToShaderPos(position)) {
	using FunctionType = decltype(objectPosToShaderPos(position))(*)(ShaderLayer*, cocos2d::CCPoint);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x33c378, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, position);
}

auto ShaderLayer::performCalculations() -> decltype(performCalculations()) {
	using FunctionType = decltype(performCalculations())(*)(ShaderLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x340d4c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto ShaderLayer::preBulgeShader() -> decltype(preBulgeShader()) {
	using FunctionType = decltype(preBulgeShader())(*)(ShaderLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x340218, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto ShaderLayer::preChromaticGlitchShader() -> decltype(preChromaticGlitchShader()) {
	using FunctionType = decltype(preChromaticGlitchShader())(*)(ShaderLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x33ef50, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto ShaderLayer::preChromaticShader() -> decltype(preChromaticShader()) {
	using FunctionType = decltype(preChromaticShader())(*)(ShaderLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x33ecc4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto ShaderLayer::preColorChangeShader() -> decltype(preColorChangeShader()) {
	using FunctionType = decltype(preColorChangeShader())(*)(ShaderLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x340960, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto ShaderLayer::preCommonShader() -> decltype(preCommonShader()) {
	using FunctionType = decltype(preCommonShader())(*)(ShaderLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x33c20c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto ShaderLayer::preGlitchShader() -> decltype(preGlitchShader()) {
	using FunctionType = decltype(preGlitchShader())(*)(ShaderLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x33e7f0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto ShaderLayer::preHueShiftShader() -> decltype(preHueShiftShader()) {
	using FunctionType = decltype(preHueShiftShader())(*)(ShaderLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3407b4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto ShaderLayer::preInvertColorShader() -> decltype(preInvertColorShader()) {
	using FunctionType = decltype(preInvertColorShader())(*)(ShaderLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3406e8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto ShaderLayer::preLensCircleShader() -> decltype(preLensCircleShader()) {
	using FunctionType = decltype(preLensCircleShader())(*)(ShaderLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x33f934, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto ShaderLayer::preMotionBlurShader() -> decltype(preMotionBlurShader()) {
	using FunctionType = decltype(preMotionBlurShader())(*)(ShaderLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x33fe78, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto ShaderLayer::prepareTargetContainer() -> decltype(prepareTargetContainer()) {
	using FunctionType = decltype(prepareTargetContainer())(*)(ShaderLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x33f504, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto ShaderLayer::prePinchShader() -> decltype(prePinchShader()) {
	using FunctionType = decltype(prePinchShader())(*)(ShaderLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x340448, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto ShaderLayer::prePixelateShader() -> decltype(prePixelateShader()) {
	using FunctionType = decltype(prePixelateShader())(*)(ShaderLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x33f320, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto ShaderLayer::preSepiaShader() -> decltype(preSepiaShader()) {
	using FunctionType = decltype(preSepiaShader())(*)(ShaderLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3405c0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto ShaderLayer::resetAllShaders() -> decltype(resetAllShaders()) {
	using FunctionType = decltype(resetAllShaders())(*)(ShaderLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x341348, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto ShaderLayer::setupGlitchUniforms() -> decltype(setupGlitchUniforms()) {
	using FunctionType = decltype(setupGlitchUniforms())(*)(ShaderLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x33b734, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto ShaderLayer::setupGrayscaleShader() -> decltype(setupGrayscaleShader()) {
	using FunctionType = decltype(setupGrayscaleShader())(*)(ShaderLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x33bcb8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto ShaderLayer::setupHueShiftShader() -> decltype(setupHueShiftShader()) {
	using FunctionType = decltype(setupHueShiftShader())(*)(ShaderLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x33bdc0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto ShaderLayer::setupInvertColorShader() -> decltype(setupInvertColorShader()) {
	using FunctionType = decltype(setupInvertColorShader())(*)(ShaderLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x33bd80, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto ShaderLayer::setupLensCircleShader() -> decltype(setupLensCircleShader()) {
	using FunctionType = decltype(setupLensCircleShader())(*)(ShaderLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x33b980, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto ShaderLayer::setupMotionBlurShader() -> decltype(setupMotionBlurShader()) {
	using FunctionType = decltype(setupMotionBlurShader())(*)(ShaderLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x33bc30, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto ShaderLayer::setupSepiaShader() -> decltype(setupSepiaShader()) {
	using FunctionType = decltype(setupSepiaShader())(*)(ShaderLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x33bd40, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto ShaderLayer::setupShader(bool reset) -> decltype(setupShader(reset)) {
	using FunctionType = decltype(setupShader(reset))(*)(ShaderLayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x33a8f8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, reset);
}

auto ShaderLayer::toggleAntiAlias(bool antiAlias) -> decltype(toggleAntiAlias(antiAlias)) {
	using FunctionType = decltype(toggleAntiAlias(antiAlias))(*)(ShaderLayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x33b1b4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, antiAlias);
}

auto ShaderLayer::triggerBulge(float fadeTime, float bulge, float screenOffsetX, float screenOffsetY, float radius, int targetID, int easingType, float easingRate, bool relative) -> decltype(triggerBulge(fadeTime, bulge, screenOffsetX, screenOffsetY, radius, targetID, easingType, easingRate, relative)) {
	using FunctionType = decltype(triggerBulge(fadeTime, bulge, screenOffsetX, screenOffsetY, radius, targetID, easingType, easingRate, relative))(*)(ShaderLayer*, float, float, float, float, float, int, int, float, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x34014c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, fadeTime, bulge, screenOffsetX, screenOffsetY, radius, targetID, easingType, easingRate, relative);
}

auto ShaderLayer::triggerChromaticGlitch(bool enable, float duration, float speed, float strength, float rgbOffset, float lineThickness, float lineStrength, float segmentHeight, int easingType, float easingRate, bool relative, bool relativePos) -> decltype(triggerChromaticGlitch(enable, duration, speed, strength, rgbOffset, lineThickness, lineStrength, segmentHeight, easingType, easingRate, relative, relativePos)) {
	using FunctionType = decltype(triggerChromaticGlitch(enable, duration, speed, strength, rgbOffset, lineThickness, lineStrength, segmentHeight, easingType, easingRate, relative, relativePos))(*)(ShaderLayer*, bool, float, float, float, float, float, float, float, int, float, bool, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x33edd0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, enable, duration, speed, strength, rgbOffset, lineThickness, lineStrength, segmentHeight, easingType, easingRate, relative, relativePos);
}

auto ShaderLayer::triggerChromaticX(float fadeTime, float targetX, int easingType, float easingRate, bool relative) -> decltype(triggerChromaticX(fadeTime, targetX, easingType, easingRate, relative)) {
	using FunctionType = decltype(triggerChromaticX(fadeTime, targetX, easingType, easingRate, relative))(*)(ShaderLayer*, float, float, int, float, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x33ec4c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, fadeTime, targetX, easingType, easingRate, relative);
}

auto ShaderLayer::triggerChromaticY(float fadeTime, float targetY, int easingType, float easingRate, bool relative) -> decltype(triggerChromaticY(fadeTime, targetY, easingType, easingRate, relative)) {
	using FunctionType = decltype(triggerChromaticY(fadeTime, targetY, easingType, easingRate, relative))(*)(ShaderLayer*, float, float, int, float, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x33ec88, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, fadeTime, targetY, easingType, easingRate, relative);
}

auto ShaderLayer::triggerColorChange(float fadeTime, float cr, float cg, float cb, float br, float bg, float bb, int easingType, float easingRate) -> decltype(triggerColorChange(fadeTime, cr, cg, cb, br, bg, bb, easingType, easingRate)) {
	using FunctionType = decltype(triggerColorChange(fadeTime, cr, cg, cb, br, bg, bb, easingType, easingRate))(*)(ShaderLayer*, float, float, float, float, float, float, float, int, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x340864, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, fadeTime, cr, cg, cb, br, bg, bb, easingType, easingRate);
}

auto ShaderLayer::triggerGlitch(float fadeTime, float strength, float speed, float sliceHeight, float maxSliceXOff, float maxColXOff, float maxColYOff, bool relative) -> decltype(triggerGlitch(fadeTime, strength, speed, sliceHeight, maxSliceXOff, maxColXOff, maxColYOff, relative)) {
	using FunctionType = decltype(triggerGlitch(fadeTime, strength, speed, sliceHeight, maxSliceXOff, maxColXOff, maxColYOff, relative))(*)(ShaderLayer*, float, float, float, float, float, float, float, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x33e760, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, fadeTime, strength, speed, sliceHeight, maxSliceXOff, maxColXOff, maxColYOff, relative);
}

auto ShaderLayer::triggerGrayscale(float fadeTime, float target, bool useLuminance, int tintChannel, int easingType, float easingRate) -> decltype(triggerGrayscale(fadeTime, target, useLuminance, tintChannel, easingType, easingRate)) {
	using FunctionType = decltype(triggerGrayscale(fadeTime, target, useLuminance, tintChannel, easingType, easingRate))(*)(ShaderLayer*, float, float, bool, int, int, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3404b0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, fadeTime, target, useLuminance, tintChannel, easingType, easingRate);
}

auto ShaderLayer::triggerHueShift(float fadeTime, float degrees, int easingType, float easingRate) -> decltype(triggerHueShift(fadeTime, degrees, easingType, easingRate)) {
	using FunctionType = decltype(triggerHueShift(fadeTime, degrees, easingType, easingRate))(*)(ShaderLayer*, float, float, int, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x34079c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, fadeTime, degrees, easingType, easingRate);
}

auto ShaderLayer::triggerInvertColor(float fadeTime, float target, float r, float g, float b, bool editRGB, bool tweenRGB, bool clampRGB, int easingType, float easingRate) -> decltype(triggerInvertColor(fadeTime, target, r, g, b, editRGB, tweenRGB, clampRGB, easingType, easingRate)) {
	using FunctionType = decltype(triggerInvertColor(fadeTime, target, r, g, b, editRGB, tweenRGB, clampRGB, easingType, easingRate))(*)(ShaderLayer*, float, float, float, float, float, bool, bool, bool, int, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x340618, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, fadeTime, target, r, g, b, editRGB, tweenRGB, clampRGB, easingType, easingRate);
}

auto ShaderLayer::triggerLensCircle(float fadeTime, float size, float fade, float strength, int targetID, int tintChannel, float screenOffsetX, float screenOffsetY, int easingType, float easingRate, bool relative) -> decltype(triggerLensCircle(fadeTime, size, fade, strength, targetID, tintChannel, screenOffsetX, screenOffsetY, easingType, easingRate, relative)) {
	using FunctionType = decltype(triggerLensCircle(fadeTime, size, fade, strength, targetID, tintChannel, screenOffsetX, screenOffsetY, easingType, easingRate, relative))(*)(ShaderLayer*, float, float, float, float, int, int, float, float, int, float, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x33f824, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, fadeTime, size, fade, strength, targetID, tintChannel, screenOffsetX, screenOffsetY, easingType, easingRate, relative);
}

auto ShaderLayer::triggerMotionBlurX(float fadeTime, float targetX, float intensity, float fade, int targetID, float followEase, bool dualDir, int refChannel, int easingType, float easingRate, bool relative, bool emptyOnly) -> decltype(triggerMotionBlurX(fadeTime, targetX, intensity, fade, targetID, followEase, dualDir, refChannel, easingType, easingRate, relative, emptyOnly)) {
	using FunctionType = decltype(triggerMotionBlurX(fadeTime, targetX, intensity, fade, targetID, followEase, dualDir, refChannel, easingType, easingRate, relative, emptyOnly))(*)(ShaderLayer*, float, float, float, float, int, float, bool, int, int, float, bool, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x33fcd0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, fadeTime, targetX, intensity, fade, targetID, followEase, dualDir, refChannel, easingType, easingRate, relative, emptyOnly);
}

auto ShaderLayer::triggerMotionBlurY(float fadeTime, float targetY, float intensity, float fade, int targetID, float followEase, bool dualDir, int refChannel, int easingType, float easingRate, bool relative, bool emptyOnly) -> decltype(triggerMotionBlurY(fadeTime, targetY, intensity, fade, targetID, followEase, dualDir, refChannel, easingType, easingRate, relative, emptyOnly)) {
	using FunctionType = decltype(triggerMotionBlurY(fadeTime, targetY, intensity, fade, targetID, followEase, dualDir, refChannel, easingType, easingRate, relative, emptyOnly))(*)(ShaderLayer*, float, float, float, float, int, float, bool, int, int, float, bool, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x33fda4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, fadeTime, targetY, intensity, fade, targetID, followEase, dualDir, refChannel, easingType, easingRate, relative, emptyOnly);
}

auto ShaderLayer::triggerPinchX(float fadeTime, float targetX, float screenOffsetX, float radius, float modifier, bool target, int targetID, int easingType, float easingRate, bool relative) -> decltype(triggerPinchX(fadeTime, targetX, screenOffsetX, radius, modifier, target, targetID, easingType, easingRate, relative)) {
	using FunctionType = decltype(triggerPinchX(fadeTime, targetX, screenOffsetX, radius, modifier, target, targetID, easingType, easingRate, relative))(*)(ShaderLayer*, float, float, float, float, float, bool, int, int, float, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x340288, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, fadeTime, targetX, screenOffsetX, radius, modifier, target, targetID, easingType, easingRate, relative);
}

auto ShaderLayer::triggerPinchY(float fadeTime, float targetY, float screenOffsetY, float radius, float modifier, bool target, int targetID, int easingType, float easingRate, bool relative) -> decltype(triggerPinchY(fadeTime, targetY, screenOffsetY, radius, modifier, target, targetID, easingType, easingRate, relative)) {
	using FunctionType = decltype(triggerPinchY(fadeTime, targetY, screenOffsetY, radius, modifier, target, targetID, easingType, easingRate, relative))(*)(ShaderLayer*, float, float, float, float, float, bool, int, int, float, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x340368, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, fadeTime, targetY, screenOffsetY, radius, modifier, target, targetID, easingType, easingRate, relative);
}

auto ShaderLayer::triggerPixelateX(float fadeTime, float targetX, bool snapGrid, bool hardEdges, int easingType, float easingRate, bool relative) -> decltype(triggerPixelateX(fadeTime, targetX, snapGrid, hardEdges, easingType, easingRate, relative)) {
	using FunctionType = decltype(triggerPixelateX(fadeTime, targetX, snapGrid, hardEdges, easingType, easingRate, relative))(*)(ShaderLayer*, float, float, bool, bool, int, float, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x33f248, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, fadeTime, targetX, snapGrid, hardEdges, easingType, easingRate, relative);
}

auto ShaderLayer::triggerPixelateY(float fadeTime, float targetY, bool snapGrid, bool hardEdges, int easingType, float easingRate, bool relative) -> decltype(triggerPixelateY(fadeTime, targetY, snapGrid, hardEdges, easingType, easingRate, relative)) {
	using FunctionType = decltype(triggerPixelateY(fadeTime, targetY, snapGrid, hardEdges, easingType, easingRate, relative))(*)(ShaderLayer*, float, float, bool, bool, int, float, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x33f2b4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, fadeTime, targetY, snapGrid, hardEdges, easingType, easingRate, relative);
}

auto ShaderLayer::triggerRadialBlur(float fadeTime, float size, float intensity, float fade, int refChannel, float screenOffsetX, float screenOffsetY, bool target, int targetID, int easingType, float easingRate, bool emptyOnly) -> decltype(triggerRadialBlur(fadeTime, size, intensity, fade, refChannel, screenOffsetX, screenOffsetY, target, targetID, easingType, easingRate, emptyOnly)) {
	using FunctionType = decltype(triggerRadialBlur(fadeTime, size, intensity, fade, refChannel, screenOffsetX, screenOffsetY, target, targetID, easingType, easingRate, emptyOnly))(*)(ShaderLayer*, float, float, float, float, int, float, float, bool, int, int, float, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x33fac4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, fadeTime, size, intensity, fade, refChannel, screenOffsetX, screenOffsetY, target, targetID, easingType, easingRate, emptyOnly);
}

auto ShaderLayer::triggerSepia(float fadeTime, float target, int easingType, float easingRate) -> decltype(triggerSepia(fadeTime, target, easingType, easingRate)) {
	using FunctionType = decltype(triggerSepia(fadeTime, target, easingType, easingRate))(*)(ShaderLayer*, float, float, int, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3405a8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, fadeTime, target, easingType, easingRate);
}

auto ShaderLayer::triggerShockLine(float speed, float thickness, bool rotate, bool flip, bool dual, bool invert, float strength, float waveWidth, float fadeIn, float fadeOut, float timeOffset, float screenOffset, int targetID, bool target, bool follow, bool relative, float maxSize, bool animate, float fadeTime, int easingType, float easingRate) -> decltype(triggerShockLine(speed, thickness, rotate, flip, dual, invert, strength, waveWidth, fadeIn, fadeOut, timeOffset, screenOffset, targetID, target, follow, relative, maxSize, animate, fadeTime, easingType, easingRate)) {
	using FunctionType = decltype(triggerShockLine(speed, thickness, rotate, flip, dual, invert, strength, waveWidth, fadeIn, fadeOut, timeOffset, screenOffset, targetID, target, follow, relative, maxSize, animate, fadeTime, easingType, easingRate))(*)(ShaderLayer*, float, float, bool, bool, bool, bool, float, float, float, float, float, float, int, bool, bool, bool, float, bool, float, int, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x33e1d0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, speed, thickness, rotate, flip, dual, invert, strength, waveWidth, fadeIn, fadeOut, timeOffset, screenOffset, targetID, target, follow, relative, maxSize, animate, fadeTime, easingType, easingRate);
}

auto ShaderLayer::triggerShockWave(float speed, float thickness, float strength, float waveWidth, float fadeIn, float fadeOut, float timeOffset, bool invert, float inner, float screenOffsetX, float screenOffsetY, int targetID, bool target, bool follow, bool relative, float outer, float maxSize, bool animate, float fadeTime, int easingType, float easingRate) -> decltype(triggerShockWave(speed, thickness, strength, waveWidth, fadeIn, fadeOut, timeOffset, invert, inner, screenOffsetX, screenOffsetY, targetID, target, follow, relative, outer, maxSize, animate, fadeTime, easingType, easingRate)) {
	using FunctionType = decltype(triggerShockWave(speed, thickness, strength, waveWidth, fadeIn, fadeOut, timeOffset, invert, inner, screenOffsetX, screenOffsetY, targetID, target, follow, relative, outer, maxSize, animate, fadeTime, easingType, easingRate))(*)(ShaderLayer*, float, float, float, float, float, float, float, bool, float, float, float, int, bool, bool, bool, float, float, bool, float, int, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x33d4fc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, speed, thickness, strength, waveWidth, fadeIn, fadeOut, timeOffset, invert, inner, screenOffsetX, screenOffsetY, targetID, target, follow, relative, outer, maxSize, animate, fadeTime, easingType, easingRate);
}

auto ShaderLayer::triggerSplitScreenCols(float fadeTime, float targetX, int easingType, float easingRate) -> decltype(triggerSplitScreenCols(fadeTime, targetX, easingType, easingRate)) {
	using FunctionType = decltype(triggerSplitScreenCols(fadeTime, targetX, easingType, easingRate))(*)(ShaderLayer*, float, float, int, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x340ad8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, fadeTime, targetX, easingType, easingRate);
}

auto ShaderLayer::triggerSplitScreenRows(float fadeTime, float targetY, int easingType, float easingRate) -> decltype(triggerSplitScreenRows(fadeTime, targetY, easingType, easingRate)) {
	using FunctionType = decltype(triggerSplitScreenRows(fadeTime, targetY, easingType, easingRate))(*)(ShaderLayer*, float, float, int, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x340ac0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, fadeTime, targetY, easingType, easingRate);
}

auto ShaderLayer::tweenValue(float fromValue, float toValue, int action, float duration, int easingType, float easingRate) -> decltype(tweenValue(fromValue, toValue, action, duration, easingType, easingRate)) {
	using FunctionType = decltype(tweenValue(fromValue, toValue, action, duration, easingType, easingRate))(*)(ShaderLayer*, float, float, int, float, int, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x34125c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, fromValue, toValue, action, duration, easingType, easingRate);
}

auto ShaderLayer::tweenValueAuto(float value, int action, float duration, int easingType, float easingRate) -> decltype(tweenValueAuto(value, action, duration, easingType, easingRate)) {
	using FunctionType = decltype(tweenValueAuto(value, action, duration, easingType, easingRate))(*)(ShaderLayer*, float, int, float, int, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x33d730, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, value, action, duration, easingType, easingRate);
}

auto ShaderLayer::updateMotionBlurSpeedX(float x, float dt) -> decltype(updateMotionBlurSpeedX(x, dt)) {
	using FunctionType = decltype(updateMotionBlurSpeedX(x, dt))(*)(ShaderLayer*, float, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3400e4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, x, dt);
}

auto ShaderLayer::updateMotionBlurSpeedY(float y, float dt) -> decltype(updateMotionBlurSpeedY(y, dt)) {
	using FunctionType = decltype(updateMotionBlurSpeedY(y, dt))(*)(ShaderLayer*, float, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x340118, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, y, dt);
}

auto ShaderLayer::updateShockLineCenter(cocos2d::CCPoint center) -> decltype(updateShockLineCenter(center)) {
	using FunctionType = decltype(updateShockLineCenter(center))(*)(ShaderLayer*, cocos2d::CCPoint);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x33e39c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, center);
}

auto ShaderLayer::updateShockWaveCenter(cocos2d::CCPoint center) -> decltype(updateShockWaveCenter(center)) {
	using FunctionType = decltype(updateShockWaveCenter(center))(*)(ShaderLayer*, cocos2d::CCPoint);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x33de24, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, center);
}

auto ShaderLayer::updateZLayer(int minLayer, int maxLayer, bool noParticles) -> decltype(updateZLayer(minLayer, maxLayer, noParticles)) {
	using FunctionType = decltype(updateZLayer(minLayer, maxLayer, noParticles))(*)(ShaderLayer*, int, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x33b128, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, minLayer, maxLayer, noParticles);
}
