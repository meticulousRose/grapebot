#include <Geode/cocos/cocoa/CCObject.h>

#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/LevelBindingsLayer.hpp>
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

LevelBindingsLayer::~LevelBindingsLayer() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(LevelBindingsLayer*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x804224, tulip::hook::TulipConvention::Default);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) LevelBindingsLayer(geode::CutoffConstructor, sizeof(LevelBindingsLayer));
		geode::DestructorLock::addLock(this);
	}
}

auto LevelBindingsLayer::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCObject*>::func(&LevelBindingsLayer::onClose), this);
	using FunctionType = decltype(onClose(sender))(*)(LevelBindingsLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8041b8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, sender);
}

auto LevelBindingsLayer::setupTabs() -> decltype(setupTabs()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&LevelBindingsLayer::setupTabs), this);
	using FunctionType = decltype(setupTabs())(*)(LevelBindingsLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x80401c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto LevelBindingsLayer::actionsToShow(int tab) -> decltype(actionsToShow(tab)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&LevelBindingsLayer::actionsToShow), this);
	using FunctionType = decltype(actionsToShow(tab))(*)(LevelBindingsLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x80413c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, tab);
}

auto LevelBindingsLayer::openBindingEditor(int action, int chord) -> decltype(openBindingEditor(action, chord)) {
	auto self = addresser::thunkAdjust(Resolve<int, int>::func(&LevelBindingsLayer::openBindingEditor), this);
	using FunctionType = decltype(openBindingEditor(action, chord))(*)(LevelBindingsLayer*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x804190, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, action, chord);
}

auto LevelBindingsLayer::settingsEntries() -> decltype(settingsEntries()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&LevelBindingsLayer::settingsEntries), this);
	using FunctionType = decltype(settingsEntries())(*)(LevelBindingsLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8030c0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}
