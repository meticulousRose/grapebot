#include <Geode/cocos/cocoa/CCObject.h>

#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/SetupEventLinkPopup.hpp>
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

SetupEventLinkPopup::~SetupEventLinkPopup() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(SetupEventLinkPopup*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x4f37c0, tulip::hook::TulipConvention::Default);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) SetupEventLinkPopup(geode::CutoffConstructor, sizeof(SetupEventLinkPopup));
		geode::DestructorLock::addLock(this);
	}
}

auto SetupEventLinkPopup::init(EventLinkTrigger* object, cocos2d::CCArray* objects) -> decltype(init(object, objects)) {
	using FunctionType = decltype(init(object, objects))(*)(SetupEventLinkPopup*, EventLinkTrigger*, cocos2d::CCArray*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4f38e0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, object, objects);
}

auto SetupEventLinkPopup::onSelectEvent(cocos2d::CCObject* sender) -> decltype(onSelectEvent(sender)) {
	using FunctionType = decltype(onSelectEvent(sender))(*)(SetupEventLinkPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4f3d98, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetupEventLinkPopup::updateEventIDs(std::set<int>& eventIDs) -> decltype(updateEventIDs(eventIDs)) {
	using FunctionType = decltype(updateEventIDs(eventIDs))(*)(SetupEventLinkPopup*, std::set<int>&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4f3f88, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, eventIDs);
}
