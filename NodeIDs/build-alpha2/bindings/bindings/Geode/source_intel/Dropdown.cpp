
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/Dropdown.hpp>
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

auto Dropdown::setPosition(cocos2d::CCPoint const& p0) -> decltype(setPosition(p0)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCPoint const&>::func(&Dropdown::setPosition), this);
	using FunctionType = decltype(setPosition(p0))(*)(Dropdown*, cocos2d::CCPoint const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8d9f10, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto Dropdown::setVisible(bool p0) -> decltype(setVisible(p0)) {
	auto self = addresser::thunkAdjust(Resolve<bool>::func(&Dropdown::setVisible), this);
	using FunctionType = decltype(setVisible(p0))(*)(Dropdown*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8d9f70, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto Dropdown::dropdownListPopupClosed(DropdownListPopup* p0) -> decltype(dropdownListPopupClosed(p0)) {
	auto self = addresser::thunkAdjust(Resolve<DropdownListPopup*>::func(&Dropdown::dropdownListPopupClosed), this);
	using FunctionType = decltype(dropdownListPopupClosed(p0))(*)(Dropdown*, DropdownListPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8da870, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}
