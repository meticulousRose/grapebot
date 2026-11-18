#include <Geode/cocos/cocoa/CCObject.h>

#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/LoadingCircle.hpp>
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

LoadingCircle::~LoadingCircle() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(LoadingCircle*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x4116c4, tulip::hook::TulipConvention::Default);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) LoadingCircle(geode::CutoffConstructor, sizeof(LoadingCircle));
		geode::DestructorLock::addLock(this);
	}
}

auto LoadingCircle::create() -> decltype(create()) {
	using FunctionType = decltype(create())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x41c688, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto LoadingCircle::init() -> decltype(init()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&LoadingCircle::init), this);
	using FunctionType = decltype(init())(*)(LoadingCircle*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x41c784, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto LoadingCircle::draw() -> decltype(draw()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&LoadingCircle::draw), this);
	using FunctionType = decltype(draw())(*)(LoadingCircle*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x41c9f0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto LoadingCircle::registerWithTouchDispatcher() -> decltype(registerWithTouchDispatcher()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&LoadingCircle::registerWithTouchDispatcher), this);
	using FunctionType = decltype(registerWithTouchDispatcher())(*)(LoadingCircle*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x41ca04, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto LoadingCircle::fadeAndRemove() -> decltype(fadeAndRemove()) {
	using FunctionType = decltype(fadeAndRemove())(*)(LoadingCircle*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x41c93c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto LoadingCircle::show() -> decltype(show()) {
	using FunctionType = decltype(show())(*)(LoadingCircle*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x41c840, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}
