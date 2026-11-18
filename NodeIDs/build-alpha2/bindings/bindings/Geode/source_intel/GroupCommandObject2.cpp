#include <Geode/cocos/cocoa/CCObject.h>

#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/GroupCommandObject2.hpp>
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

GroupCommandObject2::GroupCommandObject2() {
	using FunctionType = void(*)(GroupCommandObject2*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4e76c0, tulip::hook::TulipConvention::Default);
	reinterpret_cast<FunctionType>(func)(this);
}

auto GroupCommandObject2::reset() -> decltype(reset()) {
	using FunctionType = decltype(reset())(*)(GroupCommandObject2*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4e7890, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GroupCommandObject2::resetDelta(bool intermediate) -> decltype(resetDelta(intermediate)) {
	using FunctionType = decltype(resetDelta(intermediate))(*)(GroupCommandObject2*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4e8080, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, intermediate);
}

auto GroupCommandObject2::runFollowCommand(double xMod, double yMod, double duration) -> decltype(runFollowCommand(xMod, yMod, duration)) {
	using FunctionType = decltype(runFollowCommand(xMod, yMod, duration))(*)(GroupCommandObject2*, double, double, double);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4e7fd0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, xMod, yMod, duration);
}

auto GroupCommandObject2::runMoveCommand(cocos2d::CCPoint offset, double duration, int easingType, double easingRate, bool lockPlayerX, bool lockPlayerY, bool lockCameraX, bool lockCameraY, double moveModX, double moveModY) -> decltype(runMoveCommand(offset, duration, easingType, easingRate, lockPlayerX, lockPlayerY, lockCameraX, lockCameraY, moveModX, moveModY)) {
	using FunctionType = decltype(runMoveCommand(offset, duration, easingType, easingRate, lockPlayerX, lockPlayerY, lockCameraX, lockCameraY, moveModX, moveModY))(*)(GroupCommandObject2*, cocos2d::CCPoint, double, int, double, bool, bool, bool, bool, double, double);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4e7d80, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, offset, duration, easingType, easingRate, lockPlayerX, lockPlayerY, lockCameraX, lockCameraY, moveModX, moveModY);
}

auto GroupCommandObject2::runPlayerFollowCommand(double speed, double delay, int offset, double maxSpeed, double duration) -> decltype(runPlayerFollowCommand(speed, delay, offset, maxSpeed, duration)) {
	using FunctionType = decltype(runPlayerFollowCommand(speed, delay, offset, maxSpeed, duration))(*)(GroupCommandObject2*, double, double, int, double, double);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4e8020, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, speed, delay, offset, maxSpeed, duration);
}

auto GroupCommandObject2::runRotateCommand(double offset, double duration, int easingType, double easingRate, bool lockRotation, int targetType) -> decltype(runRotateCommand(offset, duration, easingType, easingRate, lockRotation, targetType)) {
	using FunctionType = decltype(runRotateCommand(offset, duration, easingType, easingRate, lockRotation, targetType))(*)(GroupCommandObject2*, double, double, int, double, bool, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4e7f20, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, offset, duration, easingType, easingRate, lockRotation, targetType);
}

auto GroupCommandObject2::runTransformCommand(double duration, int easingType, double easingRate) -> decltype(runTransformCommand(duration, easingType, easingRate)) {
	using FunctionType = decltype(runTransformCommand(duration, easingType, easingRate))(*)(GroupCommandObject2*, double, int, double);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4e7f90, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, duration, easingType, easingRate);
}

auto GroupCommandObject2::step(float dt) -> decltype(step(dt)) {
	using FunctionType = decltype(step(dt))(*)(GroupCommandObject2*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4e7a10, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, dt);
}

auto GroupCommandObject2::stepTransformCommand(float dt, bool intermediate, bool skipStep) -> decltype(stepTransformCommand(dt, intermediate, skipStep)) {
	using FunctionType = decltype(stepTransformCommand(dt, intermediate, skipStep))(*)(GroupCommandObject2*, float, bool, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4e7c40, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, dt, intermediate, skipStep);
}

auto GroupCommandObject2::updateAction(int type, float value) -> decltype(updateAction(type, value)) {
	using FunctionType = decltype(updateAction(type, value))(*)(GroupCommandObject2*, int, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4e7ae0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, type, value);
}

auto GroupCommandObject2::updateEffectAction(float value, int type) -> decltype(updateEffectAction(value, type)) {
	using FunctionType = decltype(updateEffectAction(value, type))(*)(GroupCommandObject2*, float, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4e80d0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, value, type);
}
