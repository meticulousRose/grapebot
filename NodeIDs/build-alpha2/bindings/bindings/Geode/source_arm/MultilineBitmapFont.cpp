
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

auto MultilineBitmapFont::createWithFont(char const* font, std::string text, float scale, float width, cocos2d::CCPoint anchor, int height, bool disableColor, bool p7, int p8, float p9) -> decltype(createWithFont(font, text, scale, width, anchor, height, disableColor, p7, p8, p9)) {
	using FunctionType = decltype(createWithFont(font, text, scale, width, anchor, height, disableColor, p7, p8, p9))(*)(char const*, std::string, float, float, cocos2d::CCPoint, int, bool, bool, int, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5e694, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(font, text, scale, width, anchor, height, disableColor, p7, p8, p9);
}

auto MultilineBitmapFont::setOpacity(unsigned char opacity) -> decltype(setOpacity(opacity)) {
	auto self = addresser::thunkAdjust(Resolve<unsigned char>::func(&MultilineBitmapFont::setOpacity), this);
	using FunctionType = decltype(setOpacity(opacity))(*)(MultilineBitmapFont*, unsigned char);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3e87a0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, opacity);
}

auto MultilineBitmapFont::initWithFont(char const* font, std::string text, float scale, float width, cocos2d::CCPoint anchor, int height, bool disableColor, bool p7, int p8, float p9) -> decltype(initWithFont(font, text, scale, width, anchor, height, disableColor, p7, p8, p9)) {
	using FunctionType = decltype(initWithFont(font, text, scale, width, anchor, height, disableColor, p7, p8, p9))(*)(MultilineBitmapFont*, char const*, std::string, float, float, cocos2d::CCPoint, int, bool, bool, int, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4f9fe0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, font, text, scale, width, anchor, height, disableColor, p7, p8, p9);
}

auto MultilineBitmapFont::moveSpecialDescriptors(int index, int size) -> decltype(moveSpecialDescriptors(index, size)) {
	using FunctionType = decltype(moveSpecialDescriptors(index, size))(*)(MultilineBitmapFont*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3e88fc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, index, size);
}
