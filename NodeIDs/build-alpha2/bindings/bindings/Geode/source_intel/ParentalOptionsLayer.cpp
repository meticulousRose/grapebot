
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/ParentalOptionsLayer.hpp>
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

auto ParentalOptionsLayer::init() -> decltype(init()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&ParentalOptionsLayer::init), this);
	using FunctionType = decltype(init())(*)(ParentalOptionsLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x884450, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto ParentalOptionsLayer::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&ParentalOptionsLayer::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(ParentalOptionsLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x886c10, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto ParentalOptionsLayer::layerKey(int page) -> decltype(layerKey(page)) {
	using FunctionType = decltype(layerKey(page))(*)(ParentalOptionsLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x7096b0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, page);
}
