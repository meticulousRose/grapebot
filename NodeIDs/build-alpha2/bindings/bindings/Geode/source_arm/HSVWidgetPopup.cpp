
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/HSVWidgetPopup.hpp>
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

auto HSVWidgetPopup::create(cocos2d::ccHSVValue p0, cocos2d::ccColor3B p1, HSVWidgetDelegate* p2, std::string p3) -> decltype(create(p0, p1, p2, p3)) {
	using FunctionType = decltype(create(p0, p1, p2, p3))(*)(cocos2d::ccHSVValue, cocos2d::ccColor3B, HSVWidgetDelegate*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x29ccc0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1, p2, p3);
}

auto HSVWidgetPopup::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&HSVWidgetPopup::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(HSVWidgetPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x394f6c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto HSVWidgetPopup::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	using FunctionType = decltype(onClose(sender))(*)(HSVWidgetPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x394bd4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}
