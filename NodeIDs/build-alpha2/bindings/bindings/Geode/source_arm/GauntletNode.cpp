#include <Geode/cocos/cocoa/CCObject.h>

#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/GauntletNode.hpp>
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

GauntletNode::~GauntletNode() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(GauntletNode*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x4f04e0, tulip::hook::TulipConvention::Default);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) GauntletNode(geode::CutoffConstructor, sizeof(GauntletNode));
		geode::DestructorLock::addLock(this);
	}
}

auto GauntletNode::create(GJMapPack* gauntlet) -> decltype(create(gauntlet)) {
	using FunctionType = decltype(create(gauntlet))(*)(GJMapPack*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4eec64, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(gauntlet);
}

auto GauntletNode::frameForType(GauntletType type) -> decltype(frameForType(type)) {
	using FunctionType = decltype(frameForType(type))(*)(GauntletType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4f1f38, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(type);
}

auto GauntletNode::nameForType(GauntletType type) -> decltype(nameForType(type)) {
	using FunctionType = decltype(nameForType(type))(*)(GauntletType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4f1f08, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(type);
}

auto GauntletNode::generateNode() -> decltype(generateNode()) {
	using FunctionType = decltype(generateNode())(*)(GauntletNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4f0574, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GauntletNode::init(GJMapPack* gauntlet) -> decltype(init(gauntlet)) {
	using FunctionType = decltype(init(gauntlet))(*)(GauntletNode*, GJMapPack*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4f0520, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, gauntlet);
}

auto GauntletNode::onClaimReward() -> decltype(onClaimReward()) {
	using FunctionType = decltype(onClaimReward())(*)(GauntletNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4ef5e0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GauntletNode::onUnlock() -> decltype(onUnlock()) {
	using FunctionType = decltype(onUnlock())(*)(GauntletNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4efae4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GauntletNode::showUnlockAnimation() -> decltype(showUnlockAnimation()) {
	using FunctionType = decltype(showUnlockAnimation())(*)(GauntletNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4efc50, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}
