
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/Standalones.hpp>

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

void deserializeCheckpoint(CheckpointObject* checkpoint, std::string const& str, GJBaseGameLayer* layer) {
	using FunctionType = decltype(deserializeCheckpoint(checkpoint, str, layer))(*)(CheckpointObject*, std::string const&, GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5f8940, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(checkpoint, str, layer);
}

cocos2d::CCPoint offsetForKey(int id) {
	using FunctionType = decltype(offsetForKey(id))(*)(int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x603db0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(id);
}

std::string serializeCheckpoint(CheckpointObject* checkpoint) {
	using FunctionType = decltype(serializeCheckpoint(checkpoint))(*)(CheckpointObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5f7d30, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(checkpoint);
}

extern "C" kmAABB* const kmAABBAssign(kmAABB* p0, kmAABB const* p1) {
	using FunctionType = decltype(kmAABBAssign(p0, p1))(*)(kmAABB*, kmAABB const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x6c94a0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1);
}

extern "C" int const kmAABBContainsPoint(kmVec3 const* p0, kmAABB const* p1) {
	using FunctionType = decltype(kmAABBContainsPoint(p0, p1))(*)(kmVec3 const*, kmAABB const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x6c9450, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1);
}

extern "C" unsigned char kmAlmostEqual(float p0, float p1) {
	using FunctionType = decltype(kmAlmostEqual(p0, p1))(*)(float, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x87a700, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1);
}

extern "C" float kmDegreesToRadians(float p0) {
	using FunctionType = decltype(kmDegreesToRadians(p0))(*)(float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x87a6c0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0);
}

extern "C" void kmGLFreeAll() {
	using FunctionType = decltype(kmGLFreeAll())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1eb340, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

extern "C" void kmGLGetMatrix(unsigned int p0, kmMat4* p1) {
	using FunctionType = decltype(kmGLGetMatrix(p0, p1))(*)(unsigned int, kmMat4*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1eb3e0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1);
}

extern "C" void kmGLLoadIdentity() {
	using FunctionType = decltype(kmGLLoadIdentity())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1eb320, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

extern "C" void kmGLLoadMatrix(kmMat4 const* p0) {
	using FunctionType = decltype(kmGLLoadMatrix(p0))(*)(kmMat4 const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1eb3b0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0);
}

extern "C" void kmGLMatrixMode(unsigned int p0) {
	using FunctionType = decltype(kmGLMatrixMode(p0))(*)(unsigned int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1eb280, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0);
}

extern "C" void kmGLMultMatrix(kmMat4 const* p0) {
	using FunctionType = decltype(kmGLMultMatrix(p0))(*)(kmMat4 const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1eb380, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0);
}

extern "C" void kmGLPopMatrix() {
	using FunctionType = decltype(kmGLPopMatrix())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1eb300, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

extern "C" void kmGLPushMatrix() {
	using FunctionType = decltype(kmGLPushMatrix())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1eb2c0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

extern "C" void kmGLRotatef(float p0, float p1, float p2, float p3) {
	using FunctionType = decltype(kmGLRotatef(p0, p1, p2, p3))(*)(float, float, float, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1eb470, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1, p2, p3);
}

extern "C" void kmGLScalef(float p0, float p1, float p2) {
	using FunctionType = decltype(kmGLScalef(p0, p1, p2))(*)(float, float, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1eb4d0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1, p2);
}

extern "C" void kmGLTranslatef(float p0, float p1, float p2) {
	using FunctionType = decltype(kmGLTranslatef(p0, p1, p2))(*)(float, float, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1eb430, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1, p2);
}

extern "C" kmMat3* const kmMat3Adjugate(kmMat3* p0, kmMat3 const* p1) {
	using FunctionType = decltype(kmMat3Adjugate(p0, p1))(*)(kmMat3*, kmMat3 const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x88eb20, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1);
}

extern "C" int const kmMat3AreEqual(kmMat3 const* p0, kmMat3 const* p1) {
	using FunctionType = decltype(kmMat3AreEqual(p0, p1))(*)(kmMat3 const*, kmMat3 const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x88ef90, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1);
}

extern "C" kmMat3* const kmMat3Assign(kmMat3* p0, kmMat3 const* p1) {
	using FunctionType = decltype(kmMat3Assign(p0, p1))(*)(kmMat3*, kmMat3 const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x88ef60, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1);
}

extern "C" float const kmMat3Determinant(kmMat3 const* p0) {
	using FunctionType = decltype(kmMat3Determinant(p0))(*)(kmMat3 const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x88eaa0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0);
}

extern "C" kmMat3* const kmMat3Fill(kmMat3* p0, float const* p1) {
	using FunctionType = decltype(kmMat3Fill(p0, p1))(*)(kmMat3*, float const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x88ea50, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1);
}

extern "C" kmMat3* const kmMat3Identity(kmMat3* p0) {
	using FunctionType = decltype(kmMat3Identity(p0))(*)(kmMat3*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x88ea70, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0);
}

extern "C" kmMat3* const kmMat3Inverse(kmMat3* p0, float const p1, kmMat3 const* p2) {
	using FunctionType = decltype(kmMat3Inverse(p0, p1, p2))(*)(kmMat3*, float const, kmMat3 const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x88ec10, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1, p2);
}

extern "C" kmMat3* const kmMat3Multiply(kmMat3* p0, kmMat3 const* p1, kmMat3 const* p2) {
	using FunctionType = decltype(kmMat3Multiply(p0, p1, p2))(*)(kmMat3*, kmMat3 const*, kmMat3 const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x88ee10, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1, p2);
}

extern "C" kmMat3* const kmMat3Rotation(kmMat3* p0, float const p1) {
	using FunctionType = decltype(kmMat3Rotation(p0, p1))(*)(kmMat3*, float const);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x88f1a0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1);
}

extern "C" kmMat3* const kmMat3RotationAxisAngle(kmMat3* p0, kmVec3 const* p1, float p2) {
	using FunctionType = decltype(kmMat3RotationAxisAngle(p0, p1, p2))(*)(kmMat3*, kmVec3 const*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x88f3c0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1, p2);
}

extern "C" kmMat3* const kmMat3RotationQuaternion(kmMat3* p0, kmQuaternion const* p1) {
	using FunctionType = decltype(kmMat3RotationQuaternion(p0, p1))(*)(kmMat3*, kmQuaternion const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x88f260, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1);
}

extern "C" kmVec3* const kmMat3RotationToAxisAngle(kmVec3* p0, float* p1, kmMat3 const* p2) {
	using FunctionType = decltype(kmMat3RotationToAxisAngle(p0, p1, p2))(*)(kmVec3*, float*, kmMat3 const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x88f500, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1, p2);
}

extern "C" kmMat3* const kmMat3RotationX(kmMat3* p0, float const p1) {
	using FunctionType = decltype(kmMat3RotationX(p0, p1))(*)(kmMat3*, float const);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x88f540, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1);
}

extern "C" kmMat3* const kmMat3RotationY(kmMat3* p0, float const p1) {
	using FunctionType = decltype(kmMat3RotationY(p0, p1))(*)(kmMat3*, float const);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x88f590, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1);
}

extern "C" kmMat3* const kmMat3RotationZ(kmMat3* p0, float const p1) {
	using FunctionType = decltype(kmMat3RotationZ(p0, p1))(*)(kmMat3*, float const);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x88f5f0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1);
}

extern "C" kmMat3* const kmMat3ScalarMultiply(kmMat3* p0, kmMat3 const* p1, float const p2) {
	using FunctionType = decltype(kmMat3ScalarMultiply(p0, p1, p2))(*)(kmMat3*, kmMat3 const*, float const);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x88ed40, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1, p2);
}

extern "C" kmMat3* const kmMat3Scaling(kmMat3* p0, float const p1, float const p2) {
	using FunctionType = decltype(kmMat3Scaling(p0, p1, p2))(*)(kmMat3*, float const, float const);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x88f1f0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1, p2);
}

extern "C" kmMat3* const kmMat3Translation(kmMat3* p0, float const p1, float const p2) {
	using FunctionType = decltype(kmMat3Translation(p0, p1, p2))(*)(kmMat3*, float const, float const);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x88f220, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1, p2);
}

extern "C" int const kmMat4AreEqual(kmMat4 const* p0, kmMat4 const* p1) {
	using FunctionType = decltype(kmMat4AreEqual(p0, p1))(*)(kmMat4 const*, kmMat4 const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3bcc70, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1);
}

extern "C" kmMat4* const kmMat4Assign(kmMat4* p0, kmMat4 const* p1) {
	using FunctionType = decltype(kmMat4Assign(p0, p1))(*)(kmMat4*, kmMat4 const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3bca50, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1);
}

extern "C" kmPlane* const kmMat4ExtractPlane(kmPlane* p0, kmMat4 const* p1, unsigned int const p2) {
	using FunctionType = decltype(kmMat4ExtractPlane(p0, p1, p2))(*)(kmPlane*, kmMat4 const*, unsigned int const);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3bdb30, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1, p2);
}

extern "C" kmMat4* const kmMat4Fill(kmMat4* p0, float const* p1) {
	using FunctionType = decltype(kmMat4Fill(p0, p1))(*)(kmMat4*, float const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3bbed0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1);
}

extern "C" kmMat4* const kmMat4Identity(kmMat4* p0) {
	using FunctionType = decltype(kmMat4Identity(p0))(*)(kmMat4*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3bbf00, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0);
}

extern "C" kmMat4* const kmMat4Inverse(kmMat4* p0, kmMat4 const* p1) {
	using FunctionType = decltype(kmMat4Inverse(p0, p1))(*)(kmMat4*, kmMat4 const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3bc9a0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1);
}

extern "C" kmMat4* const kmMat4LookAt(kmMat4* p0, kmVec3 const* p1, kmVec3 const* p2, kmVec3 const* p3) {
	using FunctionType = decltype(kmMat4LookAt(p0, p1, p2, p3))(*)(kmMat4*, kmVec3 const*, kmVec3 const*, kmVec3 const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3bd820, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1, p2, p3);
}

extern "C" kmMat4* const kmMat4Multiply(kmMat4* p0, kmMat4 const* p1, kmMat4 const* p2) {
	using FunctionType = decltype(kmMat4Multiply(p0, p1, p2))(*)(kmMat4*, kmMat4 const*, kmMat4 const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3bcb60, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1, p2);
}

extern "C" kmMat4* const kmMat4OrthographicProjection(kmMat4* p0, float p1, float p2, float p3, float p4, float p5, float p6) {
	using FunctionType = decltype(kmMat4OrthographicProjection(p0, p1, p2, p3, p4, p5, p6))(*)(kmMat4*, float, float, float, float, float, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3bd790, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1, p2, p3, p4, p5, p6);
}

extern "C" kmMat4* const kmMat4PerspectiveProjection(kmMat4* p0, float p1, float p2, float p3, float p4) {
	using FunctionType = decltype(kmMat4PerspectiveProjection(p0, p1, p2, p3, p4))(*)(kmMat4*, float, float, float, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3bd690, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1, p2, p3, p4);
}

extern "C" kmMat4* const kmMat4RotationAxisAngle(kmMat4* p0, kmVec3 const* p1, float p2) {
	using FunctionType = decltype(kmMat4RotationAxisAngle(p0, p1, p2))(*)(kmMat4*, kmVec3 const*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3bd020, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1, p2);
}

extern "C" kmMat4* const kmMat4RotationPitchYawRoll(kmMat4* p0, float const p1, float const p2, float const p3) {
	using FunctionType = decltype(kmMat4RotationPitchYawRoll(p0, p1, p2, p3))(*)(kmMat4*, float const, float const, float const);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3bd2b0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1, p2, p3);
}

extern "C" kmMat4* const kmMat4RotationQuaternion(kmMat4* p0, kmQuaternion const* p1) {
	using FunctionType = decltype(kmMat4RotationQuaternion(p0, p1))(*)(kmMat4*, kmQuaternion const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3bd3f0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1);
}

extern "C" kmVec3* const kmMat4RotationToAxisAngle(kmVec3* p0, float* p1, kmMat4 const* p2) {
	using FunctionType = decltype(kmMat4RotationToAxisAngle(p0, p1, p2))(*)(kmVec3*, float*, kmMat4 const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3bda10, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1, p2);
}

extern "C" kmMat4* const kmMat4RotationTranslation(kmMat4* p0, kmMat3 const* p1, kmVec3 const* p2) {
	using FunctionType = decltype(kmMat4RotationTranslation(p0, p1, p2))(*)(kmMat4*, kmMat3 const*, kmVec3 const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3bda90, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1, p2);
}

extern "C" kmMat4* const kmMat4RotationY(kmMat4* p0, float const p1) {
	using FunctionType = decltype(kmMat4RotationY(p0, p1))(*)(kmMat4*, float const);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3bd1e0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1);
}

extern "C" kmMat4* const kmMat4Scaling(kmMat4* p0, float const p1, float const p2, float const p3) {
	using FunctionType = decltype(kmMat4Scaling(p0, p1, p2, p3))(*)(kmMat4*, float const, float const, float const);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3bd550, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1, p2, p3);
}

extern "C" kmMat4* const kmMat4Translation(kmMat4* p0, float const p1, float const p2, float const p3) {
	using FunctionType = decltype(kmMat4Translation(p0, p1, p2, p3))(*)(kmMat4*, float const, float const, float const);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3bd580, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1, p2, p3);
}

extern "C" kmMat4* const kmMat4Transpose(kmMat4* p0, kmMat4 const* p1) {
	using FunctionType = decltype(kmMat4Transpose(p0, p1))(*)(kmMat4*, kmMat4 const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3bcab0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1);
}

extern "C" float kmMax(float p0, float p1) {
	using FunctionType = decltype(kmMax(p0, p1))(*)(float, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x87a6f0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1);
}

extern "C" float kmMin(float p0, float p1) {
	using FunctionType = decltype(kmMin(p0, p1))(*)(float, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x87a6e0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1);
}

extern "C" POINT_CLASSIFICATION const kmPlaneClassifyPoint(kmPlane const* p0, kmVec3 const* p1) {
	using FunctionType = decltype(kmPlaneClassifyPoint(p0, p1))(*)(kmPlane const*, kmVec3 const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x47ec60, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1);
}

extern "C" float const kmPlaneDotCoord(kmPlane const* p0, kmVec3 const* p1) {
	using FunctionType = decltype(kmPlaneDotCoord(p0, p1))(*)(kmPlane const*, kmVec3 const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x47ea20, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1);
}

extern "C" float const kmPlaneDotNormal(kmPlane const* p0, kmVec3 const* p1) {
	using FunctionType = decltype(kmPlaneDotNormal(p0, p1))(*)(kmPlane const*, kmVec3 const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x47ea50, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1);
}

extern "C" kmPlane* const kmPlaneFromPointNormal(kmPlane* p0, kmVec3 const* p1, kmVec3 const* p2) {
	using FunctionType = decltype(kmPlaneFromPointNormal(p0, p1, p2))(*)(kmPlane*, kmVec3 const*, kmVec3 const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x47ea80, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1, p2);
}

extern "C" kmPlane* const kmPlaneFromPoints(kmPlane* p0, kmVec3 const* p1, kmVec3 const* p2, kmVec3 const* p3) {
	using FunctionType = decltype(kmPlaneFromPoints(p0, p1, p2, p3))(*)(kmPlane*, kmVec3 const*, kmVec3 const*, kmVec3 const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x47eac0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1, p2, p3);
}

extern "C" kmPlane* const kmPlaneNormalize(kmPlane* p0, kmPlane const* p1) {
	using FunctionType = decltype(kmPlaneNormalize(p0, p1))(*)(kmPlane*, kmPlane const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x47eba0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1);
}

extern "C" kmQuaternion* kmQuaternionAssign(kmQuaternion* p0, kmQuaternion const* p1) {
	using FunctionType = decltype(kmQuaternionAssign(p0, p1))(*)(kmQuaternion*, kmQuaternion const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x510850, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1);
}

extern "C" kmQuaternion* const kmQuaternionConjugate(kmQuaternion* p0, kmQuaternion const* p1) {
	using FunctionType = decltype(kmQuaternionConjugate(p0, p1))(*)(kmQuaternion*, kmQuaternion const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x50fe40, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1);
}

extern "C" kmQuaternion* kmQuaternionIdentity(kmQuaternion* p0) {
	using FunctionType = decltype(kmQuaternionIdentity(p0))(*)(kmQuaternion*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x50fef0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0);
}

extern "C" kmQuaternion* kmQuaternionInverse(kmQuaternion* p0, kmQuaternion const* p1) {
	using FunctionType = decltype(kmQuaternionInverse(p0, p1))(*)(kmQuaternion*, kmQuaternion const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x50ff10, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1);
}

extern "C" int kmQuaternionIsIdentity(kmQuaternion const* p0) {
	using FunctionType = decltype(kmQuaternionIsIdentity(p0))(*)(kmQuaternion const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x510000, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0);
}

extern "C" float kmQuaternionLength(kmQuaternion const* p0) {
	using FunctionType = decltype(kmQuaternionLength(p0))(*)(kmQuaternion const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x50ffa0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0);
}

extern "C" kmQuaternion* kmQuaternionMultiply(kmQuaternion* p0, kmQuaternion const* p1, kmQuaternion const* p2) {
	using FunctionType = decltype(kmQuaternionMultiply(p0, p1, p2))(*)(kmQuaternion*, kmQuaternion const*, kmQuaternion const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5100c0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1, p2);
}

extern "C" kmVec3* kmQuaternionMultiplyVec3(kmVec3* p0, kmQuaternion const* p1, kmVec3 const* p2) {
	using FunctionType = decltype(kmQuaternionMultiplyVec3(p0, p1, p2))(*)(kmVec3*, kmQuaternion const*, kmVec3 const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x510ac0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1, p2);
}

extern "C" kmQuaternion* kmQuaternionNormalize(kmQuaternion* p0, kmQuaternion const* p1) {
	using FunctionType = decltype(kmQuaternionNormalize(p0, p1))(*)(kmQuaternion*, kmQuaternion const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5101a0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1);
}

extern "C" kmQuaternion* kmQuaternionRotationAxis(kmQuaternion* p0, kmVec3 const* p1, float p2) {
	using FunctionType = decltype(kmQuaternionRotationAxis(p0, p1, p2))(*)(kmQuaternion*, kmVec3 const*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x510220, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1, p2);
}

extern "C" kmQuaternion* kmQuaternionRotationBetweenVec3(kmQuaternion* p0, kmVec3 const* p1, kmVec3 const* p2, kmVec3 const* p3) {
	using FunctionType = decltype(kmQuaternionRotationBetweenVec3(p0, p1, p2, p3))(*)(kmQuaternion*, kmVec3 const*, kmVec3 const*, kmVec3 const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x510860, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1, p2, p3);
}

extern "C" kmQuaternion* kmQuaternionRotationMatrix(kmQuaternion* p0, kmMat3 const* p1) {
	using FunctionType = decltype(kmQuaternionRotationMatrix(p0, p1))(*)(kmQuaternion*, kmMat3 const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x510270, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1);
}

extern "C" kmQuaternion* kmQuaternionRotationYawPitchRoll(kmQuaternion* p0, float p1, float p2, float p3) {
	using FunctionType = decltype(kmQuaternionRotationYawPitchRoll(p0, p1, p2, p3))(*)(kmQuaternion*, float, float, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x510410, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1, p2, p3);
}

extern "C" kmQuaternion* kmQuaternionScale(kmQuaternion* p0, kmQuaternion const* p1, float p2) {
	using FunctionType = decltype(kmQuaternionScale(p0, p1, p2))(*)(kmQuaternion*, kmQuaternion const*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x50ffe0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1, p2);
}

extern "C" kmQuaternion* kmQuaternionSlerp(kmQuaternion* p0, kmQuaternion const* p1, kmQuaternion const* p2, float p3) {
	using FunctionType = decltype(kmQuaternionSlerp(p0, p1, p2, p3))(*)(kmQuaternion*, kmQuaternion const*, kmQuaternion const*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5105a0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1, p2, p3);
}

extern "C" void kmQuaternionToAxisAngle(kmQuaternion const* p0, kmVec3* p1, float* p2) {
	using FunctionType = decltype(kmQuaternionToAxisAngle(p0, p1, p2))(*)(kmQuaternion const*, kmVec3*, float*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x510750, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1, p2);
}

extern "C" float kmRadiansToDegrees(float p0) {
	using FunctionType = decltype(kmRadiansToDegrees(p0))(*)(float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x87a6d0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0);
}

extern "C" unsigned char kmRay2IntersectLineSegment(kmRay2 const* p0, kmVec2 const* p1, kmVec2 const* p2, kmVec2* p3) {
	using FunctionType = decltype(kmRay2IntersectLineSegment(p0, p1, p2, p3))(*)(kmRay2 const*, kmVec2 const*, kmVec2 const*, kmVec2*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4ccfc0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1, p2, p3);
}

extern "C" unsigned char kmRay2IntersectTriangle(kmRay2 const* p0, kmVec2 const* p1, kmVec2 const* p2, kmVec2 const* p3, kmVec2* p4, kmVec2* p5) {
	using FunctionType = decltype(kmRay2IntersectTriangle(p0, p1, p2, p3, p4, p5))(*)(kmRay2 const*, kmVec2 const*, kmVec2 const*, kmVec2 const*, kmVec2*, kmVec2*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4cd240, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1, p2, p3, p4, p5);
}

extern "C" float kmSQR(float p0) {
	using FunctionType = decltype(kmSQR(p0))(*)(float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x87a6b0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0);
}

extern "C" int kmVec2AreEqual(kmVec2 const* p0, kmVec2 const* p1) {
	using FunctionType = decltype(kmVec2AreEqual(p0, p1))(*)(kmVec2 const*, kmVec2 const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x316cd0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1);
}

extern "C" float kmVec2Dot(kmVec2 const* p0, kmVec2 const* p1) {
	using FunctionType = decltype(kmVec2Dot(p0, p1))(*)(kmVec2 const*, kmVec2 const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x316c00, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1);
}

extern "C" kmVec2* kmVec2Fill(kmVec2* p0, float p1, float p2) {
	using FunctionType = decltype(kmVec2Fill(p0, p1, p2))(*)(kmVec2*, float, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x316af0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1, p2);
}

extern "C" float kmVec2Length(kmVec2 const* p0) {
	using FunctionType = decltype(kmVec2Length(p0))(*)(kmVec2 const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x316b10, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0);
}

extern "C" float kmVec2LengthSq(kmVec2 const* p0) {
	using FunctionType = decltype(kmVec2LengthSq(p0))(*)(kmVec2 const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x316b50, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0);
}

extern "C" kmVec2* kmVec2Normalize(kmVec2* p0, kmVec2 const* p1) {
	using FunctionType = decltype(kmVec2Normalize(p0, p1))(*)(kmVec2*, kmVec2 const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x316b80, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1);
}

extern "C" kmVec2* kmVec2Subtract(kmVec2* p0, kmVec2 const* p1, kmVec2 const* p2) {
	using FunctionType = decltype(kmVec2Subtract(p0, p1, p2))(*)(kmVec2*, kmVec2 const*, kmVec2 const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x316c20, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1, p2);
}

extern "C" kmVec2* kmVec2Transform(kmVec2* p0, kmVec2 const* p1, kmMat3 const* p2) {
	using FunctionType = decltype(kmVec2Transform(p0, p1, p2))(*)(kmVec2*, kmVec2 const*, kmMat3 const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x316c40, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1, p2);
}

extern "C" kmVec3* kmVec3Add(kmVec3* p0, kmVec3 const* p1, kmVec3 const* p2) {
	using FunctionType = decltype(kmVec3Add(p0, p1, p2))(*)(kmVec3*, kmVec3 const*, kmVec3 const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x6e0a70, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1, p2);
}

extern "C" int kmVec3AreEqual(kmVec3 const* p0, kmVec3 const* p1) {
	using FunctionType = decltype(kmVec3AreEqual(p0, p1))(*)(kmVec3 const*, kmVec3 const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x6e0d60, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1);
}

extern "C" kmVec3* kmVec3Assign(kmVec3* p0, kmVec3 const* p1) {
	using FunctionType = decltype(kmVec3Assign(p0, p1))(*)(kmVec3*, kmVec3 const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x6e0e10, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1);
}

extern "C" kmVec3* kmVec3Cross(kmVec3* p0, kmVec3 const* p1, kmVec3 const* p2) {
	using FunctionType = decltype(kmVec3Cross(p0, p1, p2))(*)(kmVec3*, kmVec3 const*, kmVec3 const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x6e09f0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1, p2);
}

extern "C" float kmVec3Dot(kmVec3 const* p0, kmVec3 const* p1) {
	using FunctionType = decltype(kmVec3Dot(p0, p1))(*)(kmVec3 const*, kmVec3 const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x6e0a40, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1);
}

extern "C" kmVec3* kmVec3Fill(kmVec3* p0, float p1, float p2, float p3) {
	using FunctionType = decltype(kmVec3Fill(p0, p1, p2, p3))(*)(kmVec3*, float, float, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x6e08b0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1, p2, p3);
}

extern "C" kmVec3* kmVec3InverseTransform(kmVec3* p0, kmVec3 const* p1, kmMat4 const* p2) {
	using FunctionType = decltype(kmVec3InverseTransform(p0, p1, p2))(*)(kmVec3*, kmVec3 const*, kmMat4 const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x6e0bd0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1, p2);
}

extern "C" kmVec3* kmVec3InverseTransformNormal(kmVec3* p0, kmVec3 const* p1, kmMat4 const* p2) {
	using FunctionType = decltype(kmVec3InverseTransformNormal(p0, p1, p2))(*)(kmVec3*, kmVec3 const*, kmMat4 const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x6e0b40, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1, p2);
}

extern "C" float kmVec3Length(kmVec3 const* p0) {
	using FunctionType = decltype(kmVec3Length(p0))(*)(kmVec3 const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x6e08d0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0);
}

extern "C" float kmVec3LengthSq(kmVec3 const* p0) {
	using FunctionType = decltype(kmVec3LengthSq(p0))(*)(kmVec3 const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x6e0920, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0);
}

extern "C" kmVec3* kmVec3Normalize(kmVec3* p0, kmVec3 const* p1) {
	using FunctionType = decltype(kmVec3Normalize(p0, p1))(*)(kmVec3*, kmVec3 const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x6e0970, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1);
}

extern "C" kmVec3* kmVec3Scale(kmVec3* p0, kmVec3 const* p1, float const p2) {
	using FunctionType = decltype(kmVec3Scale(p0, p1, p2))(*)(kmVec3*, kmVec3 const*, float const);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x6e0d30, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1, p2);
}

extern "C" kmVec3* kmVec3Subtract(kmVec3* p0, kmVec3 const* p1, kmVec3 const* p2) {
	using FunctionType = decltype(kmVec3Subtract(p0, p1, p2))(*)(kmVec3*, kmVec3 const*, kmVec3 const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x6e0aa0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1, p2);
}

extern "C" kmVec3* kmVec3Transform(kmVec3* p0, kmVec3 const* p1, kmMat4 const* p2) {
	using FunctionType = decltype(kmVec3Transform(p0, p1, p2))(*)(kmVec3*, kmVec3 const*, kmMat4 const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x6e0ad0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1, p2);
}

extern "C" kmVec3* kmVec3TransformCoord(kmVec3* p0, kmVec3 const* p1, kmMat4 const* p2) {
	using FunctionType = decltype(kmVec3TransformCoord(p0, p1, p2))(*)(kmVec3*, kmVec3 const*, kmMat4 const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x6e0c50, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1, p2);
}

extern "C" kmVec3* kmVec3TransformNormal(kmVec3* p0, kmVec3 const* p1, kmMat4 const* p2) {
	using FunctionType = decltype(kmVec3TransformNormal(p0, p1, p2))(*)(kmVec3*, kmVec3 const*, kmMat4 const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x6e0cd0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1, p2);
}
