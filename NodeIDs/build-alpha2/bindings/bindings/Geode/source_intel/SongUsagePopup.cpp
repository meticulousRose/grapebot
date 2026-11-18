
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/SongUsagePopup.hpp>
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

auto SongUsagePopup::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&SongUsagePopup::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(SongUsagePopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x977400, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto SongUsagePopup::songUsageFinished(int p0, std::string p1) -> decltype(songUsageFinished(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<int, std::string>::func(&SongUsagePopup::songUsageFinished), this);
	using FunctionType = decltype(songUsageFinished(p0, p1))(*)(SongUsagePopup*, int, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x975d70, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto SongUsagePopup::songUsageFailed(int p0) -> decltype(songUsageFailed(p0)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&SongUsagePopup::songUsageFailed), this);
	using FunctionType = decltype(songUsageFailed(p0))(*)(SongUsagePopup*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x9772a0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}
