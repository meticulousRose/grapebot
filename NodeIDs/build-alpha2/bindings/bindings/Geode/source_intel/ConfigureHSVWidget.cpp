
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/ConfigureHSVWidget.hpp>
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

auto ConfigureHSVWidget::create(cocos2d::ccHSVValue hsv, bool noBackground, bool addInputs) -> decltype(create(hsv, noBackground, addInputs)) {
	using FunctionType = decltype(create(hsv, noBackground, addInputs))(*)(cocos2d::ccHSVValue, bool, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x41cc10, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(hsv, noBackground, addInputs);
}

auto ConfigureHSVWidget::getHSV(GameObject* object, cocos2d::CCArray* objects, int mode) -> decltype(getHSV(object, objects, mode)) {
	using FunctionType = decltype(getHSV(object, objects, mode))(*)(GameObject*, cocos2d::CCArray*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x41ece0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(object, objects, mode);
}

auto ConfigureHSVWidget::textInputOpened(CCTextInputNode* node) -> decltype(textInputOpened(node)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&ConfigureHSVWidget::textInputOpened), this);
	using FunctionType = decltype(textInputOpened(node))(*)(ConfigureHSVWidget*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x41e6e0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, node);
}

auto ConfigureHSVWidget::textInputClosed(CCTextInputNode* node) -> decltype(textInputClosed(node)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&ConfigureHSVWidget::textInputClosed), this);
	using FunctionType = decltype(textInputClosed(node))(*)(ConfigureHSVWidget*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x41e700, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, node);
}

auto ConfigureHSVWidget::textChanged(CCTextInputNode* node) -> decltype(textChanged(node)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&ConfigureHSVWidget::textChanged), this);
	using FunctionType = decltype(textChanged(node))(*)(ConfigureHSVWidget*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x41ea10, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, node);
}

auto ConfigureHSVWidget::textInputShouldOffset(CCTextInputNode* p0, float p1) -> decltype(textInputShouldOffset(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*, float>::func(&ConfigureHSVWidget::textInputShouldOffset), this);
	using FunctionType = decltype(textInputShouldOffset(p0, p1))(*)(ConfigureHSVWidget*, CCTextInputNode*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x41e740, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto ConfigureHSVWidget::textInputReturn(CCTextInputNode* p0) -> decltype(textInputReturn(p0)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&ConfigureHSVWidget::textInputReturn), this);
	using FunctionType = decltype(textInputReturn(p0))(*)(ConfigureHSVWidget*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x41e900, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto ConfigureHSVWidget::createTextInputNode(cocos2d::CCPoint position, int tag) -> decltype(createTextInputNode(position, tag)) {
	using FunctionType = decltype(createTextInputNode(position, tag))(*)(ConfigureHSVWidget*, cocos2d::CCPoint, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x41dae0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, position, tag);
}

auto ConfigureHSVWidget::init(cocos2d::ccHSVValue hsv, bool noBackground, bool addInputs) -> decltype(init(hsv, noBackground, addInputs)) {
	using FunctionType = decltype(init(hsv, noBackground, addInputs))(*)(ConfigureHSVWidget*, cocos2d::ccHSVValue, bool, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x41d1c0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, hsv, noBackground, addInputs);
}

auto ConfigureHSVWidget::onClose() -> decltype(onClose()) {
	using FunctionType = decltype(onClose())(*)(ConfigureHSVWidget*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x41cee0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto ConfigureHSVWidget::onResetHSV(cocos2d::CCObject* sender) -> decltype(onResetHSV(sender)) {
	using FunctionType = decltype(onResetHSV(sender))(*)(ConfigureHSVWidget*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x41df70, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto ConfigureHSVWidget::onToggleSConst(cocos2d::CCObject* sender) -> decltype(onToggleSConst(sender)) {
	using FunctionType = decltype(onToggleSConst(sender))(*)(ConfigureHSVWidget*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x41de90, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto ConfigureHSVWidget::onToggleVConst(cocos2d::CCObject* sender) -> decltype(onToggleVConst(sender)) {
	using FunctionType = decltype(onToggleVConst(sender))(*)(ConfigureHSVWidget*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x41df00, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto ConfigureHSVWidget::sliderChanged(cocos2d::CCObject* sender) -> decltype(sliderChanged(sender)) {
	using FunctionType = decltype(sliderChanged(sender))(*)(ConfigureHSVWidget*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x41dd10, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto ConfigureHSVWidget::updateLabels() -> decltype(updateLabels()) {
	using FunctionType = decltype(updateLabels())(*)(ConfigureHSVWidget*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x41e040, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto ConfigureHSVWidget::updateSliders() -> decltype(updateSliders()) {
	using FunctionType = decltype(updateSliders())(*)(ConfigureHSVWidget*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x41e600, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}
