
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/LevelStatsInfoPopup.hpp>
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

auto LevelStatsInfoPopup::create(GJGameLevel* p0) -> decltype(create(p0)) {
	using FunctionType = decltype(create(p0))(*)(GJGameLevel*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x808820, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0);
}

auto LevelStatsInfoPopup::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&LevelStatsInfoPopup::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(LevelStatsInfoPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x80a364, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto LevelStatsInfoPopup::init(GJGameLevel* p0) -> decltype(init(p0)) {
	using FunctionType = decltype(init(p0))(*)(LevelStatsInfoPopup*, GJGameLevel*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8089a8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}
