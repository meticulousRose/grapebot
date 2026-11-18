
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/AudioEffectsLayer.hpp>
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

auto AudioEffectsLayer::create(std::string audioString) -> decltype(create(audioString)) {
	using FunctionType = decltype(create(audioString))(*)(std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x40e8e8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(audioString);
}

auto AudioEffectsLayer::draw() -> decltype(draw()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&AudioEffectsLayer::draw), this);
	using FunctionType = decltype(draw())(*)(AudioEffectsLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x40f354, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto AudioEffectsLayer::updateTweenAction(float value, char const* key) -> decltype(updateTweenAction(value, key)) {
	auto self = addresser::thunkAdjust(Resolve<float, char const*>::func(&AudioEffectsLayer::updateTweenAction), this);
	using FunctionType = decltype(updateTweenAction(value, key))(*)(AudioEffectsLayer*, float, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x40f22c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, value, key);
}

auto AudioEffectsLayer::audioStep(float dt) -> decltype(audioStep(dt)) {
	using FunctionType = decltype(audioStep(dt))(*)(AudioEffectsLayer*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x40f000, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, dt);
}

auto AudioEffectsLayer::getBGSquare() -> decltype(getBGSquare()) {
	using FunctionType = decltype(getBGSquare())(*)(AudioEffectsLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x40f358, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto AudioEffectsLayer::goingDown() -> decltype(goingDown()) {
	using FunctionType = decltype(goingDown())(*)(AudioEffectsLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x40f220, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto AudioEffectsLayer::init(std::string audioString) -> decltype(init(audioString)) {
	using FunctionType = decltype(init(audioString))(*)(AudioEffectsLayer*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x40ea20, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, audioString);
}

auto AudioEffectsLayer::resetAudioVars() -> decltype(resetAudioVars()) {
	using FunctionType = decltype(resetAudioVars())(*)(AudioEffectsLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x40efb8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto AudioEffectsLayer::triggerEffect(float pulse) -> decltype(triggerEffect(pulse)) {
	using FunctionType = decltype(triggerEffect(pulse))(*)(AudioEffectsLayer*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x40f0bc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, pulse);
}
