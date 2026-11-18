
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/SelectSettingLayer.hpp>
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

auto SelectSettingLayer::frameForItem(SelectSettingType type, int index) -> decltype(frameForItem(type, index)) {
	using FunctionType = decltype(frameForItem(type, index))(*)(SelectSettingType, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x25aff0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(type, index);
}

auto SelectSettingLayer::frameForValue(SelectSettingType type, int value) -> decltype(frameForValue(type, value)) {
	using FunctionType = decltype(frameForValue(type, value))(*)(SelectSettingType, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2585b0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(type, value);
}

auto SelectSettingLayer::idxToValue(SelectSettingType type, int idx) -> decltype(idxToValue(type, idx)) {
	using FunctionType = decltype(idxToValue(type, idx))(*)(SelectSettingType, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x25b300, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(type, idx);
}

auto SelectSettingLayer::valueToIdx(SelectSettingType type, int value) -> decltype(valueToIdx(type, value)) {
	using FunctionType = decltype(valueToIdx(type, value))(*)(SelectSettingType, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x25afc0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(type, value);
}

auto SelectSettingLayer::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&SelectSettingLayer::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(SelectSettingLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x25b330, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto SelectSettingLayer::getSelectedFrame() -> decltype(getSelectedFrame()) {
	using FunctionType = decltype(getSelectedFrame())(*)(SelectSettingLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x258bb0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SelectSettingLayer::getSelectedValue() -> decltype(getSelectedValue()) {
	using FunctionType = decltype(getSelectedValue())(*)(SelectSettingLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x258b80, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SelectSettingLayer::init(SelectSettingType type, int value) -> decltype(init(type, value)) {
	using FunctionType = decltype(init(type, value))(*)(SelectSettingLayer*, SelectSettingType, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x25aa10, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, type, value);
}

auto SelectSettingLayer::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	using FunctionType = decltype(onClose(sender))(*)(SelectSettingLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x25b2b0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SelectSettingLayer::onSelect(cocos2d::CCObject* sender) -> decltype(onSelect(sender)) {
	using FunctionType = decltype(onSelect(sender))(*)(SelectSettingLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x25b200, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}
