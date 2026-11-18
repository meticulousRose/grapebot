
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/AutoBackupOptionsPopup.hpp>
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

auto AutoBackupOptionsPopup::valueDidChange(int p0, float p1) -> decltype(valueDidChange(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<int, float>::func(&AutoBackupOptionsPopup::valueDidChange), this);
	using FunctionType = decltype(valueDidChange(p0, p1))(*)(AutoBackupOptionsPopup*, int, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x85cf98, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto AutoBackupOptionsPopup::getValue(int p0) -> decltype(getValue(p0)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&AutoBackupOptionsPopup::getValue), this);
	using FunctionType = decltype(getValue(p0))(*)(AutoBackupOptionsPopup*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x85cf74, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto AutoBackupOptionsPopup::FLAlert_Clicked(FLAlertLayer* p0, bool p1) -> decltype(FLAlert_Clicked(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<FLAlertLayer*, bool>::func(&AutoBackupOptionsPopup::FLAlert_Clicked), this);
	using FunctionType = decltype(FLAlert_Clicked(p0, p1))(*)(AutoBackupOptionsPopup*, FLAlertLayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x85cfac, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}
