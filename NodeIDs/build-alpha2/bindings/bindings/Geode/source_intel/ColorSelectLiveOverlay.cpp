
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/ColorSelectLiveOverlay.hpp>
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

auto ColorSelectLiveOverlay::createWithObject(EffectGameObject* object) -> decltype(createWithObject(object)) {
	using FunctionType = decltype(createWithObject(object))(*)(EffectGameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x803c30, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(object);
}

auto ColorSelectLiveOverlay::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&ColorSelectLiveOverlay::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(ColorSelectLiveOverlay*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5972d0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto ColorSelectLiveOverlay::show() -> decltype(show()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&ColorSelectLiveOverlay::show), this);
	using FunctionType = decltype(show())(*)(ColorSelectLiveOverlay*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x597380, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto ColorSelectLiveOverlay::closeColorSelect(cocos2d::CCObject* sender) -> decltype(closeColorSelect(sender)) {
	using FunctionType = decltype(closeColorSelect(sender))(*)(ColorSelectLiveOverlay*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x596a30, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto ColorSelectLiveOverlay::colorValueChanged(cocos2d::ccColor3B color) -> decltype(colorValueChanged(color)) {
	using FunctionType = decltype(colorValueChanged(color))(*)(ColorSelectLiveOverlay*, cocos2d::ccColor3B);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5972c0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, color);
}

auto ColorSelectLiveOverlay::createToggleButton(std::string label, cocos2d::SEL_MenuHandler selector, bool toggled, cocos2d::CCMenu* menu, cocos2d::CCPoint position) -> decltype(createToggleButton(label, selector, toggled, menu, position)) {
	using FunctionType = decltype(createToggleButton(label, selector, toggled, menu, position))(*)(ColorSelectLiveOverlay*, std::string, cocos2d::SEL_MenuHandler, bool, cocos2d::CCMenu*, cocos2d::CCPoint);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x597020, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, label, selector, toggled, menu, position);
}

auto ColorSelectLiveOverlay::determineStartValues() -> decltype(determineStartValues()) {
	using FunctionType = decltype(determineStartValues())(*)(ColorSelectLiveOverlay*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x596630, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto ColorSelectLiveOverlay::init(ColorAction* baseAction, ColorAction* detailAction, EffectGameObject* object) -> decltype(init(baseAction, detailAction, object)) {
	using FunctionType = decltype(init(baseAction, detailAction, object))(*)(ColorSelectLiveOverlay*, ColorAction*, ColorAction*, EffectGameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5957d0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, baseAction, detailAction, object);
}

auto ColorSelectLiveOverlay::onSelectTab(cocos2d::CCObject* sender) -> decltype(onSelectTab(sender)) {
	using FunctionType = decltype(onSelectTab(sender))(*)(ColorSelectLiveOverlay*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x596d10, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto ColorSelectLiveOverlay::selectColor(cocos2d::ccColor3B color) -> decltype(selectColor(color)) {
	using FunctionType = decltype(selectColor(color))(*)(ColorSelectLiveOverlay*, cocos2d::ccColor3B);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x596a80, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, color);
}

auto ColorSelectLiveOverlay::sliderChanged(cocos2d::CCObject* sender) -> decltype(sliderChanged(sender)) {
	using FunctionType = decltype(sliderChanged(sender))(*)(ColorSelectLiveOverlay*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5966e0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto ColorSelectLiveOverlay::textChanged(CCTextInputNode* node) -> decltype(textChanged(node)) {
	using FunctionType = decltype(textChanged(node))(*)(ColorSelectLiveOverlay*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x597430, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, node);
}

auto ColorSelectLiveOverlay::textInputClosed(CCTextInputNode* node) -> decltype(textInputClosed(node)) {
	using FunctionType = decltype(textInputClosed(node))(*)(ColorSelectLiveOverlay*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x597440, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, node);
}

auto ColorSelectLiveOverlay::updateColorLabel() -> decltype(updateColorLabel()) {
	using FunctionType = decltype(updateColorLabel())(*)(ColorSelectLiveOverlay*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x596e40, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto ColorSelectLiveOverlay::updateColorValue() -> decltype(updateColorValue()) {
	using FunctionType = decltype(updateColorValue())(*)(ColorSelectLiveOverlay*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x597250, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto ColorSelectLiveOverlay::updateOpacity() -> decltype(updateOpacity()) {
	using FunctionType = decltype(updateOpacity())(*)(ColorSelectLiveOverlay*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5971f0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}
