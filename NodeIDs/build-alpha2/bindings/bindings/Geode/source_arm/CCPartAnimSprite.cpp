
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/CCPartAnimSprite.hpp>
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

auto CCPartAnimSprite::createWithAnimDesc(char const* definition, cocos2d::CCTexture2D* texture, bool useTexture) -> decltype(createWithAnimDesc(definition, texture, useTexture)) {
	using FunctionType = decltype(createWithAnimDesc(definition, texture, useTexture))(*)(char const*, cocos2d::CCTexture2D*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2ebf94, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(definition, texture, useTexture);
}

auto CCPartAnimSprite::setScaleX(float scaleX) -> decltype(setScaleX(scaleX)) {
	auto self = addresser::thunkAdjust(Resolve<float>::func(&CCPartAnimSprite::setScaleX), this);
	using FunctionType = decltype(setScaleX(scaleX))(*)(CCPartAnimSprite*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2ed604, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, scaleX);
}

auto CCPartAnimSprite::setScaleY(float scaleY) -> decltype(setScaleY(scaleY)) {
	auto self = addresser::thunkAdjust(Resolve<float>::func(&CCPartAnimSprite::setScaleY), this);
	using FunctionType = decltype(setScaleY(scaleY))(*)(CCPartAnimSprite*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2ed62c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, scaleY);
}

auto CCPartAnimSprite::setScale(float scale) -> decltype(setScale(scale)) {
	auto self = addresser::thunkAdjust(Resolve<float>::func(&CCPartAnimSprite::setScale), this);
	using FunctionType = decltype(setScale(scale))(*)(CCPartAnimSprite*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2ed5dc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, scale);
}

auto CCPartAnimSprite::setOpacity(unsigned char opacity) -> decltype(setOpacity(opacity)) {
	auto self = addresser::thunkAdjust(Resolve<unsigned char>::func(&CCPartAnimSprite::setOpacity), this);
	using FunctionType = decltype(setOpacity(opacity))(*)(CCPartAnimSprite*, unsigned char);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2ed8f0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, opacity);
}

auto CCPartAnimSprite::setBlendFunc(cocos2d::ccBlendFunc blendFunc) -> decltype(setBlendFunc(blendFunc)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::ccBlendFunc>::func(&CCPartAnimSprite::setBlendFunc), this);
	using FunctionType = decltype(setBlendFunc(blendFunc))(*)(CCPartAnimSprite*, cocos2d::ccBlendFunc);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2ed654, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, blendFunc);
}

auto CCPartAnimSprite::setDisplayFrame(cocos2d::CCSpriteFrame* frame) -> decltype(setDisplayFrame(frame)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCSpriteFrame*>::func(&CCPartAnimSprite::setDisplayFrame), this);
	using FunctionType = decltype(setDisplayFrame(frame))(*)(CCPartAnimSprite*, cocos2d::CCSpriteFrame*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2ed1b4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, frame);
}

auto CCPartAnimSprite::isFrameDisplayed(cocos2d::CCSpriteFrame* frame) -> decltype(isFrameDisplayed(frame)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCSpriteFrame*>::func(&CCPartAnimSprite::isFrameDisplayed), this);
	using FunctionType = decltype(isFrameDisplayed(frame))(*)(CCPartAnimSprite*, cocos2d::CCSpriteFrame*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2ed30c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, frame);
}

auto CCPartAnimSprite::displayFrame() -> decltype(displayFrame()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&CCPartAnimSprite::displayFrame), this);
	using FunctionType = decltype(displayFrame())(*)(CCPartAnimSprite*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2ed324, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto CCPartAnimSprite::changeTextureOfID(char const* key, char const* frame) -> decltype(changeTextureOfID(key, frame)) {
	using FunctionType = decltype(changeTextureOfID(key, frame))(*)(CCPartAnimSprite*, char const*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2ece20, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, key, frame);
}

auto CCPartAnimSprite::countParts() -> decltype(countParts()) {
	using FunctionType = decltype(countParts())(*)(CCPartAnimSprite*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2edaa4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto CCPartAnimSprite::dirtify() -> decltype(dirtify()) {
	using FunctionType = decltype(dirtify())(*)(CCPartAnimSprite*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2edac0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto CCPartAnimSprite::initWithAnimDesc(char const* definition, cocos2d::CCTexture2D* texture, bool useTexture) -> decltype(initWithAnimDesc(definition, texture, useTexture)) {
	using FunctionType = decltype(initWithAnimDesc(definition, texture, useTexture))(*)(CCPartAnimSprite*, char const*, cocos2d::CCTexture2D*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2ec080, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, definition, texture, useTexture);
}

auto CCPartAnimSprite::setColor(cocos2d::ccColor3B color) -> decltype(setColor(color)) {
	using FunctionType = decltype(setColor(color))(*)(CCPartAnimSprite*, cocos2d::ccColor3B);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2ed804, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, color);
}

auto CCPartAnimSprite::setFlipX(bool flipX) -> decltype(setFlipX(flipX)) {
	using FunctionType = decltype(setFlipX(flipX))(*)(CCPartAnimSprite*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2ed534, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, flipX);
}

auto CCPartAnimSprite::setFlipY(bool flipY) -> decltype(setFlipY(flipY)) {
	using FunctionType = decltype(setFlipY(flipY))(*)(CCPartAnimSprite*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2ed58c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, flipY);
}

auto CCPartAnimSprite::transformSprite(SpriteDescription* description) -> decltype(transformSprite(description)) {
	using FunctionType = decltype(transformSprite(description))(*)(CCPartAnimSprite*, SpriteDescription*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2ec9dc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, description);
}

auto CCPartAnimSprite::tweenSpriteTo(SpriteDescription* description, float duration) -> decltype(tweenSpriteTo(description, duration)) {
	using FunctionType = decltype(tweenSpriteTo(description, duration))(*)(CCPartAnimSprite*, SpriteDescription*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2ecc78, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, description, duration);
}

auto CCPartAnimSprite::tweenToFrame(cocos2d::CCSpriteFrame* frame, float duration) -> decltype(tweenToFrame(frame, duration)) {
	using FunctionType = decltype(tweenToFrame(frame, duration))(*)(CCPartAnimSprite*, cocos2d::CCSpriteFrame*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2ed32c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, frame, duration);
}
