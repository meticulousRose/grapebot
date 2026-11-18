#include <Geode/cocos/cocoa/CCObject.h>

#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/GJActionManager.hpp>
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

GJActionManager::~GJActionManager() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(GJActionManager*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x5f59ec, tulip::hook::TulipConvention::Default);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) GJActionManager(geode::CutoffConstructor, sizeof(GJActionManager));
		geode::DestructorLock::addLock(this);
	}
}

auto GJActionManager::create() -> decltype(create()) {
	using FunctionType = decltype(create())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5f5aa4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto GJActionManager::init() -> decltype(init()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GJActionManager::init), this);
	using FunctionType = decltype(init())(*)(GJActionManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5f5b38, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GJActionManager::getInternalAction(int id) -> decltype(getInternalAction(id)) {
	using FunctionType = decltype(getInternalAction(id))(*)(GJActionManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5f5bac, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto GJActionManager::runInternalAction(cocos2d::CCAction* action, cocos2d::CCNode* target) -> decltype(runInternalAction(action, target)) {
	using FunctionType = decltype(runInternalAction(action, target))(*)(GJActionManager*, cocos2d::CCAction*, cocos2d::CCNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5f5b70, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, action, target);
}

auto GJActionManager::stopAllInternalActions() -> decltype(stopAllInternalActions()) {
	using FunctionType = decltype(stopAllInternalActions())(*)(GJActionManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x14fe0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJActionManager::stopInternalAction(int id) -> decltype(stopInternalAction(id)) {
	using FunctionType = decltype(stopInternalAction(id))(*)(GJActionManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5f5bb8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto GJActionManager::updateInternalActions(float dt, bool remove) -> decltype(updateInternalActions(dt, remove)) {
	using FunctionType = decltype(updateInternalActions(dt, remove))(*)(GJActionManager*, float, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5f5ca8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, dt, remove);
}
