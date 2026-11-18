
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/GJPFollowCommandLayer.hpp>
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

auto GJPFollowCommandLayer::valueDidChange(int property, float value) -> decltype(valueDidChange(property, value)) {
	auto self = addresser::thunkAdjust(Resolve<int, float>::func(&GJPFollowCommandLayer::valueDidChange), this);
	using FunctionType = decltype(valueDidChange(property, value))(*)(GJPFollowCommandLayer*, int, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x350ba0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, property, value);
}
