
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/mapping/cocos2d.hpp>
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

auto cocos2d::__CCAffineTransformMake(float p0, float p1, float p2, float p3, float p4, float p5) -> decltype(__CCAffineTransformMake(p0, p1, p2, p3, p4, p5)) {
	using FunctionType = decltype(__CCAffineTransformMake(p0, p1, p2, p3, p4, p5))(*)(float, float, float, float, float, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x225630, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1, p2, p3, p4, p5);
}

auto cocos2d::__CCPointApplyAffineTransform(cocos2d::CCPoint const& p0, cocos2d::CCAffineTransform const& p1) -> decltype(__CCPointApplyAffineTransform(p0, p1)) {
	using FunctionType = decltype(__CCPointApplyAffineTransform(p0, p1))(*)(cocos2d::CCPoint const&, cocos2d::CCAffineTransform const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x225660, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1);
}

auto cocos2d::__CCSizeApplyAffineTransform(cocos2d::CCSize const& p0, cocos2d::CCAffineTransform const& p1) -> decltype(__CCSizeApplyAffineTransform(p0, p1)) {
	using FunctionType = decltype(__CCSizeApplyAffineTransform(p0, p1))(*)(cocos2d::CCSize const&, cocos2d::CCAffineTransform const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2256d0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1);
}

auto cocos2d::cc_utf16_to_utf8(unsigned short const* p0, long p1, long* p2, long* p3) -> decltype(cc_utf16_to_utf8(p0, p1, p2, p3)) {
	using FunctionType = decltype(cc_utf16_to_utf8(p0, p1, p2, p3))(*)(unsigned short const*, long, long*, long*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x73fe90, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1, p2, p3);
}

auto cocos2d::cc_utf16_vec_from_utf16_str(unsigned short const* p0) -> decltype(cc_utf16_vec_from_utf16_str(p0)) {
	using FunctionType = decltype(cc_utf16_vec_from_utf16_str(p0))(*)(unsigned short const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x73fb00, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0);
}

auto cocos2d::cc_utf8_find_last_not_char(std::vector<unsigned short> p0, unsigned short p1) -> decltype(cc_utf8_find_last_not_char(p0, p1)) {
	using FunctionType = decltype(cc_utf8_find_last_not_char(p0, p1))(*)(std::vector<unsigned short>, unsigned short);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x73f600, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1);
}

auto cocos2d::cc_utf8_strlen(char const* p0, int p1) -> decltype(cc_utf8_strlen(p0, p1)) {
	using FunctionType = decltype(cc_utf8_strlen(p0, p1))(*)(char const*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x73f9c0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1);
}

auto cocos2d::cc_utf8_to_utf16(char const* p0, int* p1) -> decltype(cc_utf8_to_utf16(p0, p1)) {
	using FunctionType = decltype(cc_utf8_to_utf16(p0, p1))(*)(char const*, int*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x73fcb0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1);
}

auto cocos2d::cc_utf8_trim_ws(std::vector<unsigned short>* p0) -> decltype(cc_utf8_trim_ws(p0)) {
	using FunctionType = decltype(cc_utf8_trim_ws(p0))(*)(std::vector<unsigned short>*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x73f740, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0);
}

auto cocos2d::cc_wcslen(unsigned short const* p0) -> decltype(cc_wcslen(p0)) {
	using FunctionType = decltype(cc_wcslen(p0))(*)(unsigned short const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x73f990, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0);
}

auto cocos2d::CCAffineTransformConcat(cocos2d::CCAffineTransform const& p0, cocos2d::CCAffineTransform const& p1) -> decltype(CCAffineTransformConcat(p0, p1)) {
	using FunctionType = decltype(CCAffineTransformConcat(p0, p1))(*)(cocos2d::CCAffineTransform const&, cocos2d::CCAffineTransform const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x225a90, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1);
}

auto cocos2d::CCAffineTransformEqualToTransform(cocos2d::CCAffineTransform const& p0, cocos2d::CCAffineTransform const& p1) -> decltype(CCAffineTransformEqualToTransform(p0, p1)) {
	using FunctionType = decltype(CCAffineTransformEqualToTransform(p0, p1))(*)(cocos2d::CCAffineTransform const&, cocos2d::CCAffineTransform const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x225b00, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1);
}

auto cocos2d::CCAffineTransformInvert(cocos2d::CCAffineTransform const& p0) -> decltype(CCAffineTransformInvert(p0)) {
	using FunctionType = decltype(CCAffineTransformInvert(p0))(*)(cocos2d::CCAffineTransform const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x225b60, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0);
}

auto cocos2d::CCAffineTransformMakeIdentity() -> decltype(CCAffineTransformMakeIdentity()) {
	using FunctionType = decltype(CCAffineTransformMakeIdentity())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x225730, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto cocos2d::CCAffineTransformRotate(cocos2d::CCAffineTransform const& p0, float p1) -> decltype(CCAffineTransformRotate(p0, p1)) {
	using FunctionType = decltype(CCAffineTransformRotate(p0, p1))(*)(cocos2d::CCAffineTransform const&, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x225a40, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1);
}

auto cocos2d::CCAffineTransformScale(cocos2d::CCAffineTransform const& p0, float p1, float p2) -> decltype(CCAffineTransformScale(p0, p1, p2)) {
	using FunctionType = decltype(CCAffineTransformScale(p0, p1, p2))(*)(cocos2d::CCAffineTransform const&, float, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x225a20, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1, p2);
}

auto cocos2d::CCAffineTransformTranslate(cocos2d::CCAffineTransform const& p0, float p1, float p2) -> decltype(CCAffineTransformTranslate(p0, p1, p2)) {
	using FunctionType = decltype(CCAffineTransformTranslate(p0, p1, p2))(*)(cocos2d::CCAffineTransform const&, float, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2259e0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1, p2);
}

auto cocos2d::ccCardinalSplineAt(cocos2d::CCPoint& p0, cocos2d::CCPoint& p1, cocos2d::CCPoint& p2, cocos2d::CCPoint& p3, float p4, float p5) -> decltype(ccCardinalSplineAt(p0, p1, p2, p3, p4, p5)) {
	using FunctionType = decltype(ccCardinalSplineAt(p0, p1, p2, p3, p4, p5))(*)(cocos2d::CCPoint&, cocos2d::CCPoint&, cocos2d::CCPoint&, cocos2d::CCPoint&, float, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2be420, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1, p2, p3, p4, p5);
}

auto cocos2d::ccDrawCardinalSpline(cocos2d::CCPointArray* p0, float p1, unsigned int p2) -> decltype(ccDrawCardinalSpline(p0, p1, p2)) {
	using FunctionType = decltype(ccDrawCardinalSpline(p0, p1, p2))(*)(cocos2d::CCPointArray*, float, unsigned int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1ecc60, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1, p2);
}

auto cocos2d::ccDrawCatmullRom(cocos2d::CCPointArray* p0, unsigned int p1) -> decltype(ccDrawCatmullRom(p0, p1)) {
	using FunctionType = decltype(ccDrawCatmullRom(p0, p1))(*)(cocos2d::CCPointArray*, unsigned int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1ecc40, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1);
}

auto cocos2d::ccDrawCircle(cocos2d::CCPoint const& p0, float p1, float p2, unsigned int p3, bool p4) -> decltype(ccDrawCircle(p0, p1, p2, p3, p4)) {
	using FunctionType = decltype(ccDrawCircle(p0, p1, p2, p3, p4))(*)(cocos2d::CCPoint const&, float, float, unsigned int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1ec210, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1, p2, p3, p4);
}

auto cocos2d::ccDrawCircle(cocos2d::CCPoint const& p0, float p1, float p2, unsigned int p3, bool p4, float p5, float p6) -> decltype(ccDrawCircle(p0, p1, p2, p3, p4, p5, p6)) {
	using FunctionType = decltype(ccDrawCircle(p0, p1, p2, p3, p4, p5, p6))(*)(cocos2d::CCPoint const&, float, float, unsigned int, bool, float, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1ebdc0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1, p2, p3, p4, p5, p6);
}

auto cocos2d::ccDrawCircleSegment(cocos2d::CCPoint const& p0, float p1, float p2, float p3, unsigned int p4, bool p5, float p6, float p7) -> decltype(ccDrawCircleSegment(p0, p1, p2, p3, p4, p5, p6, p7)) {
	using FunctionType = decltype(ccDrawCircleSegment(p0, p1, p2, p3, p4, p5, p6, p7))(*)(cocos2d::CCPoint const&, float, float, float, unsigned int, bool, float, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1ec230, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1, p2, p3, p4, p5, p6, p7);
}

auto cocos2d::ccDrawColor4B(unsigned char p0, unsigned char p1, unsigned char p2, unsigned char p3) -> decltype(ccDrawColor4B(p0, p1, p2, p3)) {
	using FunctionType = decltype(ccDrawColor4B(p0, p1, p2, p3))(*)(unsigned char, unsigned char, unsigned char, unsigned char);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1ed1e0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1, p2, p3);
}

auto cocos2d::ccDrawColor4F(float p0, float p1, float p2, float p3) -> decltype(ccDrawColor4F(p0, p1, p2, p3)) {
	using FunctionType = decltype(ccDrawColor4F(p0, p1, p2, p3))(*)(float, float, float, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1ed180, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1, p2, p3);
}

auto cocos2d::ccDrawCubicBezier(cocos2d::CCPoint const& p0, cocos2d::CCPoint const& p1, cocos2d::CCPoint const& p2, cocos2d::CCPoint const& p3, unsigned int p4) -> decltype(ccDrawCubicBezier(p0, p1, p2, p3, p4)) {
	using FunctionType = decltype(ccDrawCubicBezier(p0, p1, p2, p3, p4))(*)(cocos2d::CCPoint const&, cocos2d::CCPoint const&, cocos2d::CCPoint const&, cocos2d::CCPoint const&, unsigned int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1ecf00, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1, p2, p3, p4);
}

auto cocos2d::ccDrawFilledCircle(cocos2d::CCPoint const& p0, float p1, float p2, unsigned int p3) -> decltype(ccDrawFilledCircle(p0, p1, p2, p3)) {
	using FunctionType = decltype(ccDrawFilledCircle(p0, p1, p2, p3))(*)(cocos2d::CCPoint const&, float, float, unsigned int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1ec680, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1, p2, p3);
}

auto cocos2d::ccDrawFree() -> decltype(ccDrawFree()) {
	using FunctionType = decltype(ccDrawFree())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1eb590, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto cocos2d::ccDrawInit() -> decltype(ccDrawInit()) {
	using FunctionType = decltype(ccDrawInit())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1eb510, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto cocos2d::ccDrawLine(cocos2d::CCPoint const& p0, cocos2d::CCPoint const& p1) -> decltype(ccDrawLine(p0, p1)) {
	using FunctionType = decltype(ccDrawLine(p0, p1))(*)(cocos2d::CCPoint const&, cocos2d::CCPoint const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1eb8f0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1);
}

auto cocos2d::ccDrawLines(cocos2d::CCPoint const* p0, unsigned int p1) -> decltype(ccDrawLines(p0, p1)) {
	using FunctionType = decltype(ccDrawLines(p0, p1))(*)(cocos2d::CCPoint const*, unsigned int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1eb7e0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1);
}

auto cocos2d::ccDrawPoint(cocos2d::CCPoint const& p0) -> decltype(ccDrawPoint(p0)) {
	using FunctionType = decltype(ccDrawPoint(p0))(*)(cocos2d::CCPoint const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1eb5c0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0);
}

auto cocos2d::ccDrawPoints(cocos2d::CCPoint const* p0, unsigned int p1) -> decltype(ccDrawPoints(p0, p1)) {
	using FunctionType = decltype(ccDrawPoints(p0, p1))(*)(cocos2d::CCPoint const*, unsigned int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1eb6d0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1);
}

auto cocos2d::ccDrawPoly(cocos2d::CCPoint const* p0, unsigned int p1, bool p2) -> decltype(ccDrawPoly(p0, p1, p2)) {
	using FunctionType = decltype(ccDrawPoly(p0, p1, p2))(*)(cocos2d::CCPoint const*, unsigned int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1ebcc0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1, p2);
}

auto cocos2d::ccDrawQuadBezier(cocos2d::CCPoint const& p0, cocos2d::CCPoint const& p1, cocos2d::CCPoint const& p2, unsigned int p3) -> decltype(ccDrawQuadBezier(p0, p1, p2, p3)) {
	using FunctionType = decltype(ccDrawQuadBezier(p0, p1, p2, p3))(*)(cocos2d::CCPoint const&, cocos2d::CCPoint const&, cocos2d::CCPoint const&, unsigned int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1eca50, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1, p2, p3);
}

auto cocos2d::ccDrawRect(cocos2d::CCPoint p0, cocos2d::CCPoint p1) -> decltype(ccDrawRect(p0, p1)) {
	using FunctionType = decltype(ccDrawRect(p0, p1))(*)(cocos2d::CCPoint, cocos2d::CCPoint);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1eba20, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1);
}

auto cocos2d::ccDrawSolidPoly(cocos2d::CCPoint const* p0, unsigned int p1, cocos2d::ccColor4F p2) -> decltype(ccDrawSolidPoly(p0, p1, p2)) {
	using FunctionType = decltype(ccDrawSolidPoly(p0, p1, p2))(*)(cocos2d::CCPoint const*, unsigned int, cocos2d::ccColor4F);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1ebbc0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1, p2);
}

auto cocos2d::ccDrawSolidRect(cocos2d::CCPoint origin, cocos2d::CCPoint destination, cocos2d::ccColor4F color) -> decltype(ccDrawSolidRect(origin, destination, color)) {
	using FunctionType = decltype(ccDrawSolidRect(origin, destination, color))(*)(cocos2d::CCPoint, cocos2d::CCPoint, cocos2d::ccColor4F);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1ebb10, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(origin, destination, color);
}

auto cocos2d::ccGLBindTexture2D(unsigned int p0) -> decltype(ccGLBindTexture2D(p0)) {
	using FunctionType = decltype(ccGLBindTexture2D(p0))(*)(unsigned int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x346cf0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0);
}

auto cocos2d::ccGLBindTexture2DN(unsigned int p0, unsigned int p1) -> decltype(ccGLBindTexture2DN(p0, p1)) {
	using FunctionType = decltype(ccGLBindTexture2DN(p0, p1))(*)(unsigned int, unsigned int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x346d30, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1);
}

auto cocos2d::ccGLBindVAO(unsigned int p0) -> decltype(ccGLBindVAO(p0)) {
	using FunctionType = decltype(ccGLBindVAO(p0))(*)(unsigned int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x346df0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0);
}

auto cocos2d::ccGLBlendFunc(unsigned int p0, unsigned int p1) -> decltype(ccGLBlendFunc(p0, p1)) {
	using FunctionType = decltype(ccGLBlendFunc(p0, p1))(*)(unsigned int, unsigned int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x346c40, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1);
}

auto cocos2d::ccGLBlendResetToCache() -> decltype(ccGLBlendResetToCache()) {
	using FunctionType = decltype(ccGLBlendResetToCache())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x346ca0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto cocos2d::ccGLDeleteProgram(unsigned int p0) -> decltype(ccGLDeleteProgram(p0)) {
	using FunctionType = decltype(ccGLDeleteProgram(p0))(*)(unsigned int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x346c00, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0);
}

auto cocos2d::ccGLDeleteTexture(unsigned int p0) -> decltype(ccGLDeleteTexture(p0)) {
	using FunctionType = decltype(ccGLDeleteTexture(p0))(*)(unsigned int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x346d70, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0);
}

auto cocos2d::ccGLDeleteTextureN(unsigned int p0, unsigned int p1) -> decltype(ccGLDeleteTextureN(p0, p1)) {
	using FunctionType = decltype(ccGLDeleteTextureN(p0, p1))(*)(unsigned int, unsigned int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x346db0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1);
}

auto cocos2d::ccGLEnable(cocos2d::ccGLServerState p0) -> decltype(ccGLEnable(p0)) {
	using FunctionType = decltype(ccGLEnable(p0))(*)(cocos2d::ccGLServerState);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x346e10, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0);
}

auto cocos2d::ccGLEnableVertexAttribs(unsigned int p0) -> decltype(ccGLEnableVertexAttribs(p0)) {
	using FunctionType = decltype(ccGLEnableVertexAttribs(p0))(*)(unsigned int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x346e20, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0);
}

auto cocos2d::ccGLInvalidateStateCache() -> decltype(ccGLInvalidateStateCache()) {
	using FunctionType = decltype(ccGLInvalidateStateCache())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x346b90, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto cocos2d::ccGLUseProgram(unsigned int p0) -> decltype(ccGLUseProgram(p0)) {
	using FunctionType = decltype(ccGLUseProgram(p0))(*)(unsigned int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x346c20, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0);
}

auto cocos2d::CCLuaLog(char const* p0) -> decltype(CCLuaLog(p0)) {
	using FunctionType = decltype(CCLuaLog(p0))(*)(char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x154ef0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0);
}

auto cocos2d::CCMessageBox(char const* p0, char const* p1) -> decltype(CCMessageBox(p0, p1)) {
	using FunctionType = decltype(CCMessageBox(p0, p1))(*)(char const*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x154f00, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1);
}

auto cocos2d::ccpAngle(cocos2d::CCPoint const& p0, cocos2d::CCPoint const& p1) -> decltype(ccpAngle(p0, p1)) {
	using FunctionType = decltype(ccpAngle(p0, p1))(*)(cocos2d::CCPoint const&, cocos2d::CCPoint const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x341e00, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1);
}

auto cocos2d::ccpAngleSigned(cocos2d::CCPoint const& p0, cocos2d::CCPoint const& p1) -> decltype(ccpAngleSigned(p0, p1)) {
	using FunctionType = decltype(ccpAngleSigned(p0, p1))(*)(cocos2d::CCPoint const&, cocos2d::CCPoint const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x341ac0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1);
}

auto cocos2d::ccpClamp(cocos2d::CCPoint const& p0, cocos2d::CCPoint const& p1, cocos2d::CCPoint const& p2) -> decltype(ccpClamp(p0, p1, p2)) {
	using FunctionType = decltype(ccpClamp(p0, p1, p2))(*)(cocos2d::CCPoint const&, cocos2d::CCPoint const&, cocos2d::CCPoint const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x341990, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1, p2);
}

auto cocos2d::ccpCompMult(cocos2d::CCPoint const& p0, cocos2d::CCPoint const& p1) -> decltype(ccpCompMult(p0, p1)) {
	using FunctionType = decltype(ccpCompMult(p0, p1))(*)(cocos2d::CCPoint const&, cocos2d::CCPoint const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x341a90, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1);
}

auto cocos2d::ccpDistance(cocos2d::CCPoint const& p0, cocos2d::CCPoint const& p1) -> decltype(ccpDistance(p0, p1)) {
	using FunctionType = decltype(ccpDistance(p0, p1))(*)(cocos2d::CCPoint const&, cocos2d::CCPoint const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x341810, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1);
}

auto cocos2d::ccpForAngle(float p0) -> decltype(ccpForAngle(p0)) {
	using FunctionType = decltype(ccpForAngle(p0))(*)(float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3418a0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0);
}

auto cocos2d::ccpFromSize(cocos2d::CCSize const& size) -> decltype(ccpFromSize(size)) {
	using FunctionType = decltype(ccpFromSize(size))(*)(cocos2d::CCSize const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x341a10, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(size);
}

auto cocos2d::ccpFuzzyEqual(cocos2d::CCPoint const& p0, cocos2d::CCPoint const& p1, float p2) -> decltype(ccpFuzzyEqual(p0, p1, p2)) {
	using FunctionType = decltype(ccpFuzzyEqual(p0, p1, p2))(*)(cocos2d::CCPoint const&, cocos2d::CCPoint const&, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x341a80, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1, p2);
}

auto cocos2d::ccpIntersectPoint(cocos2d::CCPoint const& p0, cocos2d::CCPoint const& p1, cocos2d::CCPoint const& p2, cocos2d::CCPoint const& p3) -> decltype(ccpIntersectPoint(p0, p1, p2, p3)) {
	using FunctionType = decltype(ccpIntersectPoint(p0, p1, p2, p3))(*)(cocos2d::CCPoint const&, cocos2d::CCPoint const&, cocos2d::CCPoint const&, cocos2d::CCPoint const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x341ce0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1, p2, p3);
}

auto cocos2d::ccpLength(cocos2d::CCPoint const& p0) -> decltype(ccpLength(p0)) {
	using FunctionType = decltype(ccpLength(p0))(*)(cocos2d::CCPoint const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3417f0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0);
}

auto cocos2d::ccpLerp(cocos2d::CCPoint const& p0, cocos2d::CCPoint const& p1, float p2) -> decltype(ccpLerp(p0, p1, p2)) {
	using FunctionType = decltype(ccpLerp(p0, p1, p2))(*)(cocos2d::CCPoint const&, cocos2d::CCPoint const&, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3418f0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1, p2);
}

auto cocos2d::ccpLineIntersect(cocos2d::CCPoint const& p0, cocos2d::CCPoint const& p1, cocos2d::CCPoint const& p2, cocos2d::CCPoint const& p3, float* p4, float* p5) -> decltype(ccpLineIntersect(p0, p1, p2, p3, p4, p5)) {
	using FunctionType = decltype(ccpLineIntersect(p0, p1, p2, p3, p4, p5))(*)(cocos2d::CCPoint const&, cocos2d::CCPoint const&, cocos2d::CCPoint const&, cocos2d::CCPoint const&, float*, float*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x341bf0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1, p2, p3, p4, p5);
}

auto cocos2d::ccpNormalize(cocos2d::CCPoint const& p0) -> decltype(ccpNormalize(p0)) {
	using FunctionType = decltype(ccpNormalize(p0))(*)(cocos2d::CCPoint const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x341850, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0);
}

auto cocos2d::CCPointFromString(char const* p0) -> decltype(CCPointFromString(p0)) {
	using FunctionType = decltype(CCPointFromString(p0))(*)(char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5943f0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0);
}

auto cocos2d::ccPointSize(float p0) -> decltype(ccPointSize(p0)) {
	using FunctionType = decltype(ccPointSize(p0))(*)(float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1ed1b0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0);
}

auto cocos2d::CCProfilingBeginTimingBlock(char const* p0) -> decltype(CCProfilingBeginTimingBlock(p0)) {
	using FunctionType = decltype(CCProfilingBeginTimingBlock(p0))(*)(char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4e71e0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0);
}

auto cocos2d::CCProfilingEndTimingBlock(char const* p0) -> decltype(CCProfilingEndTimingBlock(p0)) {
	using FunctionType = decltype(CCProfilingEndTimingBlock(p0))(*)(char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4e7370, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0);
}

auto cocos2d::CCProfilingResetTimingBlock(char const* p0) -> decltype(CCProfilingResetTimingBlock(p0)) {
	using FunctionType = decltype(CCProfilingResetTimingBlock(p0))(*)(char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4e7540, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0);
}

auto cocos2d::ccpRotateByAngle(cocos2d::CCPoint const& p0, cocos2d::CCPoint const& p1, float p2) -> decltype(ccpRotateByAngle(p0, p1, p2)) {
	using FunctionType = decltype(ccpRotateByAngle(p0, p1, p2))(*)(cocos2d::CCPoint const&, cocos2d::CCPoint const&, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x341ad0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1, p2);
}

auto cocos2d::ccpSegmentIntersect(cocos2d::CCPoint const& p0, cocos2d::CCPoint const& p1, cocos2d::CCPoint const& p2, cocos2d::CCPoint const& p3) -> decltype(ccpSegmentIntersect(p0, p1, p2, p3)) {
	using FunctionType = decltype(ccpSegmentIntersect(p0, p1, p2, p3))(*)(cocos2d::CCPoint const&, cocos2d::CCPoint const&, cocos2d::CCPoint const&, cocos2d::CCPoint const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x341af0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1, p2, p3);
}

auto cocos2d::ccpToAngle(cocos2d::CCPoint const& point) -> decltype(ccpToAngle(point)) {
	using FunctionType = decltype(ccpToAngle(point))(*)(cocos2d::CCPoint const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3418d0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(point);
}

auto cocos2d::CCRectApplyAffineTransform(cocos2d::CCRect const& p0, cocos2d::CCAffineTransform const& p1) -> decltype(CCRectApplyAffineTransform(p0, p1)) {
	using FunctionType = decltype(CCRectApplyAffineTransform(p0, p1))(*)(cocos2d::CCRect const&, cocos2d::CCAffineTransform const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x225750, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1);
}

auto cocos2d::CCRectFromString(char const* p0) -> decltype(CCRectFromString(p0)) {
	using FunctionType = decltype(CCRectFromString(p0))(*)(char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5936b0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0);
}

auto cocos2d::ccSetProjectionMatrixDirty() -> decltype(ccSetProjectionMatrixDirty()) {
	using FunctionType = decltype(ccSetProjectionMatrixDirty())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x346ee0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto cocos2d::CCSizeFromString(char const* p0) -> decltype(CCSizeFromString(p0)) {
	using FunctionType = decltype(CCSizeFromString(p0))(*)(char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5944f0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0);
}

auto cocos2d::ccVertexLineIntersect(float p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, float* p8) -> decltype(ccVertexLineIntersect(p0, p1, p2, p3, p4, p5, p6, p7, p8)) {
	using FunctionType = decltype(ccVertexLineIntersect(p0, p1, p2, p3, p4, p5, p6, p7, p8))(*)(float, float, float, float, float, float, float, float, float*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x392de0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1, p2, p3, p4, p5, p6, p7, p8);
}

auto cocos2d::ccVertexLineToPolygon(cocos2d::CCPoint* p0, float p1, cocos2d::ccVertex2F* p2, unsigned int p3, unsigned int p4) -> decltype(ccVertexLineToPolygon(p0, p1, p2, p3, p4)) {
	using FunctionType = decltype(ccVertexLineToPolygon(p0, p1, p2, p3, p4))(*)(cocos2d::CCPoint*, float, cocos2d::ccVertex2F*, unsigned int, unsigned int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x392900, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1, p2, p3, p4);
}

auto cocos2d::clampf(float p0, float p1, float p2) -> decltype(clampf(p0, p1, p2)) {
	using FunctionType = decltype(clampf(p0, p1, p2))(*)(float, float, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x341960, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1, p2);
}

auto cocos2d::cocos2dVersion() -> decltype(cocos2dVersion()) {
	using FunctionType = decltype(cocos2dVersion())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x340d80, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto cocos2d::FNTConfigLoadFile(char const* p0) -> decltype(FNTConfigLoadFile(p0)) {
	using FunctionType = decltype(FNTConfigLoadFile(p0))(*)(char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x6a6590, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0);
}

auto cocos2d::FNTConfigRemoveCache() -> decltype(FNTConfigRemoveCache()) {
	using FunctionType = decltype(FNTConfigRemoveCache())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x6a6850, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto cocos2d::isspace_unicode(unsigned short p0) -> decltype(isspace_unicode(p0)) {
	using FunctionType = decltype(isspace_unicode(p0))(*)(unsigned short);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x608a00, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0);
}
