
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/ShardsPage.hpp>
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

auto ShardsPage::init() -> decltype(init()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&ShardsPage::init), this);
	using FunctionType = decltype(init())(*)(ShardsPage*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4bff00, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto ShardsPage::registerWithTouchDispatcher() -> decltype(registerWithTouchDispatcher()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&ShardsPage::registerWithTouchDispatcher), this);
	using FunctionType = decltype(registerWithTouchDispatcher())(*)(ShardsPage*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4c1df0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto ShardsPage::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&ShardsPage::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(ShardsPage*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4c1d80, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto ShardsPage::show() -> decltype(show()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&ShardsPage::show), this);
	using FunctionType = decltype(show())(*)(ShardsPage*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4c1bf0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto ShardsPage::goToPage(int page) -> decltype(goToPage(page)) {
	using FunctionType = decltype(goToPage(page))(*)(ShardsPage*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4c1ab0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, page);
}

auto ShardsPage::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	using FunctionType = decltype(onClose(sender))(*)(ShardsPage*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4c1a10, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto ShardsPage::onIconInfo(cocos2d::CCObject* sender) -> decltype(onIconInfo(sender)) {
	using FunctionType = decltype(onIconInfo(sender))(*)(ShardsPage*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4c1a40, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto ShardsPage::onSwitchPage(cocos2d::CCObject* sender) -> decltype(onSwitchPage(sender)) {
	using FunctionType = decltype(onSwitchPage(sender))(*)(ShardsPage*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4c1a70, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}
