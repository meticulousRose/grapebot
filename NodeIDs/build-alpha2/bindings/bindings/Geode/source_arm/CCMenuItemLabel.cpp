
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/mapping/CCMenuItemLabel.hpp>
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

auto cocos2d::CCMenuItemLabel::create(cocos2d::CCNode* p0) -> decltype(create(p0)) {
	using FunctionType = decltype(create(p0))(*)(cocos2d::CCNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x32f940, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0);
}

auto cocos2d::CCMenuItemLabel::create(cocos2d::CCNode* p0, cocos2d::CCObject* p1, cocos2d::SEL_MenuHandler p2) -> decltype(create(p0, p1, p2)) {
	using FunctionType = decltype(create(p0, p1, p2))(*)(cocos2d::CCNode*, cocos2d::CCObject*, cocos2d::SEL_MenuHandler);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x32f70c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1, p2);
}

auto cocos2d::CCMenuItemLabel::getDisabledColor() -> decltype(getDisabledColor()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&cocos2d::CCMenuItemLabel::getDisabledColor), this);
	using FunctionType = decltype(getDisabledColor())(*)(cocos2d::CCMenuItemLabel*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x32f640, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto cocos2d::CCMenuItemLabel::setDisabledColor(cocos2d::ccColor3B const& p0) -> decltype(setDisabledColor(p0)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::ccColor3B const&>::func(&cocos2d::CCMenuItemLabel::setDisabledColor), this);
	using FunctionType = decltype(setDisabledColor(p0))(*)(cocos2d::CCMenuItemLabel*, cocos2d::ccColor3B const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x32f648, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto cocos2d::CCMenuItemLabel::getLabel() -> decltype(getLabel()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&cocos2d::CCMenuItemLabel::getLabel), this);
	using FunctionType = decltype(getLabel())(*)(cocos2d::CCMenuItemLabel*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x32f65c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto cocos2d::CCMenuItemLabel::setLabel(cocos2d::CCNode* p0) -> decltype(setLabel(p0)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCNode*>::func(&cocos2d::CCMenuItemLabel::setLabel), this);
	using FunctionType = decltype(setLabel(p0))(*)(cocos2d::CCMenuItemLabel*, cocos2d::CCNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x32f664, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto cocos2d::CCMenuItemLabel::activate() -> decltype(activate()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&cocos2d::CCMenuItemLabel::activate), this);
	using FunctionType = decltype(activate())(*)(cocos2d::CCMenuItemLabel*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x32fbf4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto cocos2d::CCMenuItemLabel::selected() -> decltype(selected()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&cocos2d::CCMenuItemLabel::selected), this);
	using FunctionType = decltype(selected())(*)(cocos2d::CCMenuItemLabel*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x32fc98, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto cocos2d::CCMenuItemLabel::unselected() -> decltype(unselected()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&cocos2d::CCMenuItemLabel::unselected), this);
	using FunctionType = decltype(unselected())(*)(cocos2d::CCMenuItemLabel*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x32fd40, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto cocos2d::CCMenuItemLabel::setEnabled(bool p0) -> decltype(setEnabled(p0)) {
	auto self = addresser::thunkAdjust(Resolve<bool>::func(&cocos2d::CCMenuItemLabel::setEnabled), this);
	using FunctionType = decltype(setEnabled(p0))(*)(cocos2d::CCMenuItemLabel*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x32fdb0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto cocos2d::CCMenuItemLabel::initWithLabel(cocos2d::CCNode* p0, cocos2d::CCObject* p1, cocos2d::SEL_MenuHandler p2) -> decltype(initWithLabel(p0, p1, p2)) {
	using FunctionType = decltype(initWithLabel(p0, p1, p2))(*)(cocos2d::CCMenuItemLabel*, cocos2d::CCNode*, cocos2d::CCObject*, cocos2d::SEL_MenuHandler);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x32f850, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1, p2);
}

auto cocos2d::CCMenuItemLabel::setString(char const* p0) -> decltype(setString(p0)) {
	using FunctionType = decltype(setString(p0))(*)(cocos2d::CCMenuItemLabel*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x32fb88, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}
