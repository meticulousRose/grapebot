
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/CCSpriteGrayscale.hpp>
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

auto CCSpriteGrayscale::create(std::string const& file) -> decltype(create(file)) {
	using FunctionType = decltype(create(file))(*)(std::string const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5dc5f0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(file);
}

auto CCSpriteGrayscale::create(std::string const& file, cocos2d::CCRect const& rect) -> decltype(create(file, rect)) {
	using FunctionType = decltype(create(file, rect))(*)(std::string const&, cocos2d::CCRect const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5dc6bc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(file, rect);
}

auto CCSpriteGrayscale::createWithSpriteFrameName(std::string const& frameName) -> decltype(createWithSpriteFrameName(frameName)) {
	using FunctionType = decltype(createWithSpriteFrameName(frameName))(*)(std::string const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5dcaa4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(frameName);
}

auto CCSpriteGrayscale::getShaderName() -> decltype(getShaderName()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&CCSpriteGrayscale::getShaderName), this);
	using FunctionType = decltype(getShaderName())(*)(CCSpriteGrayscale*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5dc5cc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto CCSpriteGrayscale::shaderBody() -> decltype(shaderBody()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&CCSpriteGrayscale::shaderBody), this);
	using FunctionType = decltype(shaderBody())(*)(CCSpriteGrayscale*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5dc48c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}
