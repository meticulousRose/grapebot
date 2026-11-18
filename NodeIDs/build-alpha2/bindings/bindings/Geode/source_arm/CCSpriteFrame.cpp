
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/mapping/CCSpriteFrame.hpp>
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

auto cocos2d::CCSpriteFrame::createWithTexture(cocos2d::CCTexture2D* pobTexture, cocos2d::CCRect const& rect) -> decltype(createWithTexture(pobTexture, rect)) {
	using FunctionType = decltype(createWithTexture(pobTexture, rect))(*)(cocos2d::CCTexture2D*, cocos2d::CCRect const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2d4200, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(pobTexture, rect);
}

auto cocos2d::CCSpriteFrame::copyWithZone(cocos2d::CCZone* p0) -> decltype(copyWithZone(p0)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCZone*>::func(&cocos2d::CCSpriteFrame::copyWithZone), this);
	using FunctionType = decltype(copyWithZone(p0))(*)(cocos2d::CCSpriteFrame*, cocos2d::CCZone*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2d49e4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto cocos2d::CCSpriteFrame::getOffset() -> decltype(getOffset()) {
	using FunctionType = decltype(getOffset())(*)(cocos2d::CCSpriteFrame*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2d4c7c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto cocos2d::CCSpriteFrame::getOffsetInPixels() -> decltype(getOffsetInPixels()) {
	using FunctionType = decltype(getOffsetInPixels())(*)(cocos2d::CCSpriteFrame*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2d4cf0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto cocos2d::CCSpriteFrame::getTexture() -> decltype(getTexture()) {
	using FunctionType = decltype(getTexture())(*)(cocos2d::CCSpriteFrame*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2d4d64, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto cocos2d::CCSpriteFrame::initWithTexture(cocos2d::CCTexture2D* pobTexture, cocos2d::CCRect const& rect) -> decltype(initWithTexture(pobTexture, rect)) {
	using FunctionType = decltype(initWithTexture(pobTexture, rect))(*)(cocos2d::CCSpriteFrame*, cocos2d::CCTexture2D*, cocos2d::CCRect const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2d42ec, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, pobTexture, rect);
}

auto cocos2d::CCSpriteFrame::initWithTexture(cocos2d::CCTexture2D* p0, cocos2d::CCRect const& p1, bool p2, cocos2d::CCPoint const& p3, cocos2d::CCSize const& p4) -> decltype(initWithTexture(p0, p1, p2, p3, p4)) {
	using FunctionType = decltype(initWithTexture(p0, p1, p2, p3, p4))(*)(cocos2d::CCSpriteFrame*, cocos2d::CCTexture2D*, cocos2d::CCRect const&, bool, cocos2d::CCPoint const&, cocos2d::CCSize const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2d44b8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1, p2, p3, p4);
}

auto cocos2d::CCSpriteFrame::initWithTextureFilename(char const* filename, cocos2d::CCRect const& rect) -> decltype(initWithTextureFilename(filename, rect)) {
	using FunctionType = decltype(initWithTextureFilename(filename, rect))(*)(cocos2d::CCSpriteFrame*, char const*, cocos2d::CCRect const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2d4140, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, filename, rect);
}

auto cocos2d::CCSpriteFrame::initWithTextureFilename(char const* p0, cocos2d::CCRect const& p1, bool p2, cocos2d::CCPoint const& p3, cocos2d::CCSize const& p4) -> decltype(initWithTextureFilename(p0, p1, p2, p3, p4)) {
	using FunctionType = decltype(initWithTextureFilename(p0, p1, p2, p3, p4))(*)(cocos2d::CCSpriteFrame*, char const*, cocos2d::CCRect const&, bool, cocos2d::CCPoint const&, cocos2d::CCSize const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2d4724, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1, p2, p3, p4);
}

auto cocos2d::CCSpriteFrame::setOffset(cocos2d::CCPoint const& p0) -> decltype(setOffset(p0)) {
	using FunctionType = decltype(setOffset(p0))(*)(cocos2d::CCSpriteFrame*, cocos2d::CCPoint const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2d4c84, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto cocos2d::CCSpriteFrame::setOffsetInPixels(cocos2d::CCPoint const& p0) -> decltype(setOffsetInPixels(p0)) {
	using FunctionType = decltype(setOffsetInPixels(p0))(*)(cocos2d::CCSpriteFrame*, cocos2d::CCPoint const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2d4cf8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto cocos2d::CCSpriteFrame::setRect(cocos2d::CCRect const& p0) -> decltype(setRect(p0)) {
	using FunctionType = decltype(setRect(p0))(*)(cocos2d::CCSpriteFrame*, cocos2d::CCRect const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2d4b40, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto cocos2d::CCSpriteFrame::setRectInPixels(cocos2d::CCRect const& p0) -> decltype(setRectInPixels(p0)) {
	using FunctionType = decltype(setRectInPixels(p0))(*)(cocos2d::CCSpriteFrame*, cocos2d::CCRect const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2d4bdc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto cocos2d::CCSpriteFrame::setTexture(cocos2d::CCTexture2D* p0) -> decltype(setTexture(p0)) {
	using FunctionType = decltype(setTexture(p0))(*)(cocos2d::CCSpriteFrame*, cocos2d::CCTexture2D*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2d4afc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}
