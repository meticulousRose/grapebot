#include <Geode/cocos/cocoa/CCObject.h>

#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/StartPosBrowser.hpp>
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

StartPosBrowser::~StartPosBrowser() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(StartPosBrowser*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x34834c, tulip::hook::TulipConvention::Default);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) StartPosBrowser(geode::CutoffConstructor, sizeof(StartPosBrowser));
		geode::DestructorLock::addLock(this);
	}
}

auto StartPosBrowser::create(cocos2d::CCArray* p0, int p1) -> decltype(create(p0, p1)) {
	using FunctionType = decltype(create(p0, p1))(*)(cocos2d::CCArray*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x346cd8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1);
}

auto StartPosBrowser::registerWithTouchDispatcher() -> decltype(registerWithTouchDispatcher()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&StartPosBrowser::registerWithTouchDispatcher), this);
	using FunctionType = decltype(registerWithTouchDispatcher())(*)(StartPosBrowser*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x348ef8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto StartPosBrowser::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&StartPosBrowser::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(StartPosBrowser*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x348e0c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto StartPosBrowser::cellPerformedAction(TableViewCell* p0, int p1, CellAction p2, cocos2d::CCNode* p3) -> decltype(cellPerformedAction(p0, p1, p2, p3)) {
	auto self = addresser::thunkAdjust(Resolve<TableViewCell*, int, CellAction, cocos2d::CCNode*>::func(&StartPosBrowser::cellPerformedAction), this);
	using FunctionType = decltype(cellPerformedAction(p0, p1, p2, p3))(*)(StartPosBrowser*, TableViewCell*, int, CellAction, cocos2d::CCNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x348cf0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1, p2, p3);
}

auto StartPosBrowser::getSelectedCellIdx() -> decltype(getSelectedCellIdx()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&StartPosBrowser::getSelectedCellIdx), this);
	using FunctionType = decltype(getSelectedCellIdx())(*)(StartPosBrowser*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x348dfc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto StartPosBrowser::stateChanged(OptionsObject* p0) -> decltype(stateChanged(p0)) {
	auto self = addresser::thunkAdjust(Resolve<OptionsObject*>::func(&StartPosBrowser::stateChanged), this);
	using FunctionType = decltype(stateChanged(p0))(*)(StartPosBrowser*, OptionsObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x348bb0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto StartPosBrowser::init(cocos2d::CCArray* p0, int p1) -> decltype(init(p0, p1)) {
	using FunctionType = decltype(init(p0, p1))(*)(StartPosBrowser*, cocos2d::CCArray*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3483d0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1);
}

auto StartPosBrowser::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	using FunctionType = decltype(onClose(sender))(*)(StartPosBrowser*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x34870c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto StartPosBrowser::setupList() -> decltype(setupList()) {
	using FunctionType = decltype(setupList())(*)(StartPosBrowser*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x348780, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto StartPosBrowser::updatePageLabel() -> decltype(updatePageLabel()) {
	using FunctionType = decltype(updatePageLabel())(*)(StartPosBrowser*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x348bb8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}
