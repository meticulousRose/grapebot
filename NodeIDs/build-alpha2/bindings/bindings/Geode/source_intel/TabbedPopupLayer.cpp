#include <Geode/cocos/cocoa/CCObject.h>

#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/TabbedPopupLayer.hpp>
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

TabbedPopupLayer::~TabbedPopupLayer() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(TabbedPopupLayer*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x5fdda0, tulip::hook::TulipConvention::Default);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) TabbedPopupLayer(geode::CutoffConstructor, sizeof(TabbedPopupLayer));
		geode::DestructorLock::addLock(this);
	}
}

auto TabbedPopupLayer::pageChanged() -> decltype(pageChanged()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&TabbedPopupLayer::pageChanged), this);
	using FunctionType = decltype(pageChanged())(*)(TabbedPopupLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x640010, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto TabbedPopupLayer::showTab(int tab) -> decltype(showTab(tab)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&TabbedPopupLayer::showTab), this);
	using FunctionType = decltype(showTab(tab))(*)(TabbedPopupLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x63fc00, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, tab);
}

auto TabbedPopupLayer::addCloseButton() -> decltype(addCloseButton()) {
	using FunctionType = decltype(addCloseButton())(*)(TabbedPopupLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x219a00, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto TabbedPopupLayer::addTab(std::string const& name, char const* icon) -> decltype(addTab(name, icon)) {
	using FunctionType = decltype(addTab(name, icon))(*)(TabbedPopupLayer*, std::string const&, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x63f120, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, name, icon);
}

auto TabbedPopupLayer::beginTab(int tab) -> decltype(beginTab(tab)) {
	using FunctionType = decltype(beginTab(tab))(*)(TabbedPopupLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x63f3e0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, tab);
}

auto TabbedPopupLayer::createTabButtons() -> decltype(createTabButtons()) {
	using FunctionType = decltype(createTabButtons())(*)(TabbedPopupLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x63f670, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}
