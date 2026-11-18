#include <Geode/cocos/cocoa/CCObject.h>

#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/CCAnimatedSprite.hpp>
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

CCAnimatedSprite::~CCAnimatedSprite() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(CCAnimatedSprite*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x33c840, tulip::hook::TulipConvention::Default);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) CCAnimatedSprite(geode::CutoffConstructor, sizeof(CCAnimatedSprite));
		geode::DestructorLock::addLock(this);
	}
}

auto CCAnimatedSprite::createWithType(char const* definition, cocos2d::CCTexture2D* texture, bool useTexture) -> decltype(createWithType(definition, texture, useTexture)) {
	using FunctionType = decltype(createWithType(definition, texture, useTexture))(*)(char const*, cocos2d::CCTexture2D*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x33b520, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(definition, texture, useTexture);
}

auto CCAnimatedSprite::setOpacity(unsigned char opacity) -> decltype(setOpacity(opacity)) {
	auto self = addresser::thunkAdjust(Resolve<unsigned char>::func(&CCAnimatedSprite::setOpacity), this);
	using FunctionType = decltype(setOpacity(opacity))(*)(CCAnimatedSprite*, unsigned char);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x33c6d0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, opacity);
}

auto CCAnimatedSprite::setColor(cocos2d::ccColor3B const& color) -> decltype(setColor(color)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::ccColor3B const&>::func(&CCAnimatedSprite::setColor), this);
	using FunctionType = decltype(setColor(color))(*)(CCAnimatedSprite*, cocos2d::ccColor3B const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x33c780, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, color);
}

auto CCAnimatedSprite::animationFinished(char const* key) -> decltype(animationFinished(key)) {
	auto self = addresser::thunkAdjust(Resolve<char const*>::func(&CCAnimatedSprite::animationFinished), this);
	using FunctionType = decltype(animationFinished(key))(*)(CCAnimatedSprite*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x33c6b0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, key);
}

auto CCAnimatedSprite::animationFinishedO(cocos2d::CCObject* str) -> decltype(animationFinishedO(str)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCObject*>::func(&CCAnimatedSprite::animationFinishedO), this);
	using FunctionType = decltype(animationFinishedO(str))(*)(CCAnimatedSprite*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x33c680, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, str);
}

auto CCAnimatedSprite::cleanupSprite() -> decltype(cleanupSprite()) {
	using FunctionType = decltype(cleanupSprite())(*)(CCAnimatedSprite*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x33bf40, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto CCAnimatedSprite::initWithType(char const* definition, cocos2d::CCTexture2D* texture, bool useTexture) -> decltype(initWithType(definition, texture, useTexture)) {
	using FunctionType = decltype(initWithType(definition, texture, useTexture))(*)(CCAnimatedSprite*, char const*, cocos2d::CCTexture2D*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x33b600, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, definition, texture, useTexture);
}

auto CCAnimatedSprite::loadType(char const* definition, cocos2d::CCTexture2D* texture, bool useTexture) -> decltype(loadType(definition, texture, useTexture)) {
	using FunctionType = decltype(loadType(definition, texture, useTexture))(*)(CCAnimatedSprite*, char const*, cocos2d::CCTexture2D*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x33b7f0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, definition, texture, useTexture);
}

auto CCAnimatedSprite::runAnimation(std::string animation) -> decltype(runAnimation(animation)) {
	using FunctionType = decltype(runAnimation(animation))(*)(CCAnimatedSprite*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x33c100, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, animation);
}

auto CCAnimatedSprite::runAnimationForced(std::string animation) -> decltype(runAnimationForced(animation)) {
	using FunctionType = decltype(runAnimationForced(animation))(*)(CCAnimatedSprite*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x33c180, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, animation);
}

auto CCAnimatedSprite::stopTween() -> decltype(stopTween()) {
	using FunctionType = decltype(stopTween())(*)(CCAnimatedSprite*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x33c640, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto CCAnimatedSprite::switchToMode(spriteMode mode) -> decltype(switchToMode(mode)) {
	using FunctionType = decltype(switchToMode(mode))(*)(CCAnimatedSprite*, spriteMode);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x33bfe0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, mode);
}

auto CCAnimatedSprite::tweenToAnimation(std::string animation, float duration) -> decltype(tweenToAnimation(animation, duration)) {
	using FunctionType = decltype(tweenToAnimation(animation, duration))(*)(CCAnimatedSprite*, std::string, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x33c240, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, animation, duration);
}

auto CCAnimatedSprite::tweenToAnimationFinished() -> decltype(tweenToAnimationFinished()) {
	using FunctionType = decltype(tweenToAnimationFinished())(*)(CCAnimatedSprite*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x33c530, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto CCAnimatedSprite::willPlayAnimation() -> decltype(willPlayAnimation()) {
	using FunctionType = decltype(willPlayAnimation())(*)(CCAnimatedSprite*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x33c210, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}
