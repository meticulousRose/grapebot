#include <Geode/cocos/cocoa/CCObject.h>

#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/StartPosLayer.hpp>
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

StartPosLayer::~StartPosLayer() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(StartPosLayer*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x25c150, tulip::hook::TulipConvention::Default);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) StartPosLayer(geode::CutoffConstructor, sizeof(StartPosLayer));
		geode::DestructorLock::addLock(this);
	}
}

auto StartPosLayer::create(StartPosObject* p0) -> decltype(create(p0)) {
	using FunctionType = decltype(create(p0))(*)(StartPosObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x25c430, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0);
}

auto StartPosLayer::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCObject*>::func(&StartPosLayer::onClose), this);
	using FunctionType = decltype(onClose(sender))(*)(StartPosLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x25d900, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, sender);
}

auto StartPosLayer::updateInputNode(int p0, float p1) -> decltype(updateInputNode(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<int, float>::func(&StartPosLayer::updateInputNode), this);
	using FunctionType = decltype(updateInputNode(p0, p1))(*)(StartPosLayer*, int, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x25db00, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto StartPosLayer::valueDidChange(int p0, float p1) -> decltype(valueDidChange(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<int, float>::func(&StartPosLayer::valueDidChange), this);
	using FunctionType = decltype(valueDidChange(p0, p1))(*)(StartPosLayer*, int, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x25dea0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto StartPosLayer::getValue(int p0) -> decltype(getValue(p0)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&StartPosLayer::getValue), this);
	using FunctionType = decltype(getValue(p0))(*)(StartPosLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x25dca0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto StartPosLayer::addModeButtons() -> decltype(addModeButtons()) {
	using FunctionType = decltype(addModeButtons())(*)(StartPosLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x25d3f0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto StartPosLayer::addSpeedButtons() -> decltype(addSpeedButtons()) {
	using FunctionType = decltype(addSpeedButtons())(*)(StartPosLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x25d660, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto StartPosLayer::init(StartPosObject* p0) -> decltype(init(p0)) {
	using FunctionType = decltype(init(p0))(*)(StartPosLayer*, StartPosObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x25c540, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}
