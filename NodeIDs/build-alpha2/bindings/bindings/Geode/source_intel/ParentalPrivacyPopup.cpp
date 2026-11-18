
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/ParentalPrivacyPopup.hpp>
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

auto ParentalPrivacyPopup::getUserInfoFinished(GJUserScore* p0) -> decltype(getUserInfoFinished(p0)) {
	auto self = addresser::thunkAdjust(Resolve<GJUserScore*>::func(&ParentalPrivacyPopup::getUserInfoFinished), this);
	using FunctionType = decltype(getUserInfoFinished(p0))(*)(ParentalPrivacyPopup*, GJUserScore*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x887ad0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto ParentalPrivacyPopup::getUserInfoFailed(int p0) -> decltype(getUserInfoFailed(p0)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&ParentalPrivacyPopup::getUserInfoFailed), this);
	using FunctionType = decltype(getUserInfoFailed(p0))(*)(ParentalPrivacyPopup*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x887bd0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto ParentalPrivacyPopup::updateSettingsFinished() -> decltype(updateSettingsFinished()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&ParentalPrivacyPopup::updateSettingsFinished), this);
	using FunctionType = decltype(updateSettingsFinished())(*)(ParentalPrivacyPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x887c90, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto ParentalPrivacyPopup::updateSettingsFailed() -> decltype(updateSettingsFailed()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&ParentalPrivacyPopup::updateSettingsFailed), this);
	using FunctionType = decltype(updateSettingsFailed())(*)(ParentalPrivacyPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x887ec0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto ParentalPrivacyPopup::startWithScore(GJUserScore* p0) -> decltype(startWithScore(p0)) {
	using FunctionType = decltype(startWithScore(p0))(*)(ParentalPrivacyPopup*, GJUserScore*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x887310, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}
