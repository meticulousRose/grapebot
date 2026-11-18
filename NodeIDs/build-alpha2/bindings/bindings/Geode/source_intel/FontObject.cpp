
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/FontObject.hpp>
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

auto FontObject::createWithConfigFile(char const* font, float scale) -> decltype(createWithConfigFile(font, scale)) {
	using FunctionType = decltype(createWithConfigFile(font, scale))(*)(char const*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x508de0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(font, scale);
}

auto FontObject::getFontWidth(unsigned int p0) -> decltype(getFontWidth(p0)) {
	using FunctionType = decltype(getFontWidth(p0))(*)(FontObject*, unsigned int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8d7410, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto FontObject::initWithConfigFile(char const* font, float scale) -> decltype(initWithConfigFile(font, scale)) {
	using FunctionType = decltype(initWithConfigFile(font, scale))(*)(FontObject*, char const*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x203ab0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, font, scale);
}
