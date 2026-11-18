
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/MultilineBitmapFont.hpp>
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

auto MultilineBitmapFont::setOpacity(unsigned char opacity) -> decltype(setOpacity(opacity)) {
	auto self = addresser::thunkAdjust(Resolve<unsigned char>::func(&MultilineBitmapFont::setOpacity), this);
	using FunctionType = decltype(setOpacity(opacity))(*)(MultilineBitmapFont*, unsigned char);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x47e3d0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, opacity);
}

auto MultilineBitmapFont::moveSpecialDescriptors(int index, int size) -> decltype(moveSpecialDescriptors(index, size)) {
	using FunctionType = decltype(moveSpecialDescriptors(index, size))(*)(MultilineBitmapFont*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x47e550, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, index, size);
}

auto MultilineBitmapFont::stringWithMaxWidth(std::string text, float width, float scale) -> decltype(stringWithMaxWidth(text, width, scale)) {
	using FunctionType = decltype(stringWithMaxWidth(text, width, scale))(*)(MultilineBitmapFont*, std::string, float, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x888ec0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, text, width, scale);
}
