#include <Geode/cocos/cocoa/CCObject.h>

#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/HardStreak.hpp>
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

HardStreak::~HardStreak() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(HardStreak*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x5cf98, tulip::hook::TulipConvention::Default);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) HardStreak(geode::CutoffConstructor, sizeof(HardStreak));
		geode::DestructorLock::addLock(this);
	}
}

auto HardStreak::create() -> decltype(create()) {
	using FunctionType = decltype(create())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5cfe0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto HardStreak::init() -> decltype(init()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&HardStreak::init), this);
	using FunctionType = decltype(init())(*)(HardStreak*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5d0a8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto HardStreak::addPoint(cocos2d::CCPoint point) -> decltype(addPoint(point)) {
	using FunctionType = decltype(addPoint(point))(*)(HardStreak*, cocos2d::CCPoint);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5dbbc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, point);
}

auto HardStreak::clearAboveXPos(float x) -> decltype(clearAboveXPos(x)) {
	using FunctionType = decltype(clearAboveXPos(x))(*)(HardStreak*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5df34, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, x);
}

auto HardStreak::clearBehindXPos(float x) -> decltype(clearBehindXPos(x)) {
	using FunctionType = decltype(clearBehindXPos(x))(*)(HardStreak*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5de9c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, x);
}

auto HardStreak::createDuplicate() -> decltype(createDuplicate()) {
	using FunctionType = decltype(createDuplicate())(*)(HardStreak*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5e118, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto HardStreak::normalizeAngle(double angle) -> decltype(normalizeAngle(angle)) {
	using FunctionType = decltype(normalizeAngle(angle))(*)(HardStreak*, double);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5e0e4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, angle);
}

auto HardStreak::quadCornerOffset(cocos2d::CCPoint start, cocos2d::CCPoint end, float width) -> decltype(quadCornerOffset(start, end, width)) {
	using FunctionType = decltype(quadCornerOffset(start, end, width))(*)(HardStreak*, cocos2d::CCPoint, cocos2d::CCPoint, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5dfcc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, start, end, width);
}

auto HardStreak::reset() -> decltype(reset()) {
	using FunctionType = decltype(reset())(*)(HardStreak*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5db98, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto HardStreak::resumeStroke() -> decltype(resumeStroke()) {
	using FunctionType = decltype(resumeStroke())(*)(HardStreak*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5db50, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto HardStreak::scheduleAutoUpdate() -> decltype(scheduleAutoUpdate()) {
	using FunctionType = decltype(scheduleAutoUpdate())(*)(HardStreak*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5d1cc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto HardStreak::stopStroke() -> decltype(stopStroke()) {
	using FunctionType = decltype(stopStroke())(*)(HardStreak*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5db5c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto HardStreak::updateStroke(float dt) -> decltype(updateStroke(dt)) {
	using FunctionType = decltype(updateStroke(dt))(*)(HardStreak*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5d1dc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, dt);
}
