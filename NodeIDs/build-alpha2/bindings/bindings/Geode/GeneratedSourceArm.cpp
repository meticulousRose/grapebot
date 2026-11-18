
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
	static auto func = wrapFunction<FunctionType>(base::get() + 0x53fa94, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(checkpoint, str, layer);
}

cocos2d::CCPoint offsetForKey(int id) {
	using FunctionType = decltype(offsetForKey(id))(*)(int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x548e74, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(id);
}

std::string serializeCheckpoint(CheckpointObject* checkpoint) {
	using FunctionType = decltype(serializeCheckpoint(checkpoint))(*)(CheckpointObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x53f178, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(checkpoint);
}

extern "C" kmAABB* const kmAABBAssign(kmAABB* p0, kmAABB const* p1) {
	using FunctionType = decltype(kmAABBAssign(p0, p1))(*)(kmAABB*, kmAABB const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5e14e4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1);
}

extern "C" int const kmAABBContainsPoint(kmVec3 const* p0, kmAABB const* p1) {
	using FunctionType = decltype(kmAABBContainsPoint(p0, p1))(*)(kmVec3 const*, kmAABB const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5e1480, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1);
}

extern "C" unsigned char kmAlmostEqual(float p0, float p1) {
	using FunctionType = decltype(kmAlmostEqual(p0, p1))(*)(float, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x77004c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1);
}

extern "C" float kmDegreesToRadians(float p0) {
	using FunctionType = decltype(kmDegreesToRadians(p0))(*)(float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x77000c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0);
}

extern "C" void kmGLFreeAll() {
	using FunctionType = decltype(kmGLFreeAll())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x19d960, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

extern "C" void kmGLGetMatrix(unsigned int p0, kmMat4* p1) {
	using FunctionType = decltype(kmGLGetMatrix(p0, p1))(*)(unsigned int, kmMat4*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x19da08, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1);
}

extern "C" void kmGLLoadIdentity() {
	using FunctionType = decltype(kmGLLoadIdentity())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x19d940, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

extern "C" void kmGLLoadMatrix(kmMat4 const* p0) {
	using FunctionType = decltype(kmGLLoadMatrix(p0))(*)(kmMat4 const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x19d9d8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0);
}

extern "C" void kmGLMatrixMode(unsigned int p0) {
	using FunctionType = decltype(kmGLMatrixMode(p0))(*)(unsigned int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x19d88c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0);
}

extern "C" void kmGLMultMatrix(kmMat4 const* p0) {
	using FunctionType = decltype(kmGLMultMatrix(p0))(*)(kmMat4 const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x19d9a4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0);
}

extern "C" void kmGLPopMatrix() {
	using FunctionType = decltype(kmGLPopMatrix())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x19d918, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

extern "C" void kmGLPushMatrix() {
	using FunctionType = decltype(kmGLPushMatrix())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x19d8d4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

extern "C" void kmGLRotatef(float p0, float p1, float p2, float p3) {
	using FunctionType = decltype(kmGLRotatef(p0, p1, p2, p3))(*)(float, float, float, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x19da94, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1, p2, p3);
}

extern "C" void kmGLScalef(float p0, float p1, float p2) {
	using FunctionType = decltype(kmGLScalef(p0, p1, p2))(*)(float, float, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x19daf8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1, p2);
}

extern "C" void kmGLTranslatef(float p0, float p1, float p2) {
	using FunctionType = decltype(kmGLTranslatef(p0, p1, p2))(*)(float, float, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x19da5c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1, p2);
}

extern "C" kmMat3* const kmMat3Adjugate(kmMat3* p0, kmMat3 const* p1) {
	using FunctionType = decltype(kmMat3Adjugate(p0, p1))(*)(kmMat3*, kmMat3 const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x782ec8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1);
}

extern "C" int const kmMat3AreEqual(kmMat3 const* p0, kmMat3 const* p1) {
	using FunctionType = decltype(kmMat3AreEqual(p0, p1))(*)(kmMat3 const*, kmMat3 const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x7831d8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1);
}

extern "C" kmMat3* const kmMat3Assign(kmMat3* p0, kmMat3 const* p1) {
	using FunctionType = decltype(kmMat3Assign(p0, p1))(*)(kmMat3*, kmMat3 const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x7831b0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1);
}

extern "C" float const kmMat3Determinant(kmMat3 const* p0) {
	using FunctionType = decltype(kmMat3Determinant(p0))(*)(kmMat3 const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x782e7c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0);
}

extern "C" kmMat3* const kmMat3Fill(kmMat3* p0, float const* p1) {
	using FunctionType = decltype(kmMat3Fill(p0, p1))(*)(kmMat3*, float const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x782e4c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1);
}

extern "C" kmMat3* const kmMat3Inverse(kmMat3* p0, float const p1, kmMat3 const* p2) {
	using FunctionType = decltype(kmMat3Inverse(p0, p1, p2))(*)(kmMat3*, float const, kmMat3 const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x782f7c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1, p2);
}

extern "C" int const kmMat3IsIdentity(kmMat3 const* p0) {
	using FunctionType = decltype(kmMat3IsIdentity(p0))(*)(kmMat3 const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x78306c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0);
}

extern "C" kmMat3* const kmMat3RotationAxisAngle(kmMat3* p0, kmVec3 const* p1, float p2) {
	using FunctionType = decltype(kmMat3RotationAxisAngle(p0, p1, p2))(*)(kmMat3*, kmVec3 const*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x783570, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1, p2);
}

extern "C" kmMat3* const kmMat3RotationQuaternion(kmMat3* p0, kmQuaternion const* p1) {
	using FunctionType = decltype(kmMat3RotationQuaternion(p0, p1))(*)(kmMat3*, kmQuaternion const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x783480, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1);
}

extern "C" kmVec3* const kmMat3RotationToAxisAngle(kmVec3* p0, float* p1, kmMat3 const* p2) {
	using FunctionType = decltype(kmMat3RotationToAxisAngle(p0, p1, p2))(*)(kmVec3*, float*, kmMat3 const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x783660, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1, p2);
}

extern "C" kmMat3* const kmMat3RotationX(kmMat3* p0, float const p1) {
	using FunctionType = decltype(kmMat3RotationX(p0, p1))(*)(kmMat3*, float const);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x7836a8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1);
}

extern "C" kmMat3* const kmMat3RotationY(kmMat3* p0, float const p1) {
	using FunctionType = decltype(kmMat3RotationY(p0, p1))(*)(kmMat3*, float const);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x7836e8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1);
}

extern "C" kmMat3* const kmMat3Translation(kmMat3* p0, float const p1, float const p2) {
	using FunctionType = decltype(kmMat3Translation(p0, p1, p2))(*)(kmMat3*, float const, float const);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x783460, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1, p2);
}

extern "C" int const kmMat4AreEqual(kmMat4 const* p0, kmMat4 const* p1) {
	using FunctionType = decltype(kmMat4AreEqual(p0, p1))(*)(kmMat4 const*, kmMat4 const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x342210, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1);
}

extern "C" kmMat4* const kmMat4Assign(kmMat4* p0, kmMat4 const* p1) {
	using FunctionType = decltype(kmMat4Assign(p0, p1))(*)(kmMat4*, kmMat4 const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3420a8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1);
}

extern "C" kmPlane* const kmMat4ExtractPlane(kmPlane* p0, kmMat4 const* p1, unsigned int const p2) {
	using FunctionType = decltype(kmMat4ExtractPlane(p0, p1, p2))(*)(kmPlane*, kmMat4 const*, unsigned int const);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x342e60, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1, p2);
}

extern "C" kmMat4* const kmMat4Fill(kmMat4* p0, float const* p1) {
	using FunctionType = decltype(kmMat4Fill(p0, p1))(*)(kmMat4*, float const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x34174c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1);
}

extern "C" kmMat4* const kmMat4Identity(kmMat4* p0) {
	using FunctionType = decltype(kmMat4Identity(p0))(*)(kmMat4*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x341760, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0);
}

extern "C" kmMat4* const kmMat4Inverse(kmMat4* p0, kmMat4 const* p1) {
	using FunctionType = decltype(kmMat4Inverse(p0, p1))(*)(kmMat4*, kmMat4 const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x342010, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1);
}

extern "C" int const kmMat4IsIdentity(kmMat4 const* p0) {
	using FunctionType = decltype(kmMat4IsIdentity(p0))(*)(kmMat4 const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3420d0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0);
}

extern "C" kmMat4* const kmMat4LookAt(kmMat4* p0, kmVec3 const* p1, kmVec3 const* p2, kmVec3 const* p3) {
	using FunctionType = decltype(kmMat4LookAt(p0, p1, p2, p3))(*)(kmMat4*, kmVec3 const*, kmVec3 const*, kmVec3 const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x342bf4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1, p2, p3);
}

extern "C" kmMat4* const kmMat4Multiply(kmMat4* p0, kmMat4 const* p1, kmMat4 const* p2) {
	using FunctionType = decltype(kmMat4Multiply(p0, p1, p2))(*)(kmMat4*, kmMat4 const*, kmMat4 const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x34219c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1, p2);
}

extern "C" kmMat4* const kmMat4OrthographicProjection(kmMat4* p0, float p1, float p2, float p3, float p4, float p5, float p6) {
	using FunctionType = decltype(kmMat4OrthographicProjection(p0, p1, p2, p3, p4, p5, p6))(*)(kmMat4*, float, float, float, float, float, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x342b84, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1, p2, p3, p4, p5, p6);
}

extern "C" kmMat4* const kmMat4PerspectiveProjection(kmMat4* p0, float p1, float p2, float p3, float p4) {
	using FunctionType = decltype(kmMat4PerspectiveProjection(p0, p1, p2, p3, p4))(*)(kmMat4*, float, float, float, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x342ab4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1, p2, p3, p4);
}

extern "C" kmMat4* const kmMat4RotationAxisAngle(kmMat4* p0, kmVec3 const* p1, float p2) {
	using FunctionType = decltype(kmMat4RotationAxisAngle(p0, p1, p2))(*)(kmMat4*, kmVec3 const*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3425e4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1, p2);
}

extern "C" kmMat4* const kmMat4RotationPitchYawRoll(kmMat4* p0, float const p1, float const p2, float const p3) {
	using FunctionType = decltype(kmMat4RotationPitchYawRoll(p0, p1, p2, p3))(*)(kmMat4*, float const, float const, float const);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3427b4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1, p2, p3);
}

extern "C" kmMat4* const kmMat4RotationQuaternion(kmMat4* p0, kmQuaternion const* p1) {
	using FunctionType = decltype(kmMat4RotationQuaternion(p0, p1))(*)(kmMat4*, kmQuaternion const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3428b0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1);
}

extern "C" kmVec3* const kmMat4RotationToAxisAngle(kmVec3* p0, float* p1, kmMat4 const* p2) {
	using FunctionType = decltype(kmMat4RotationToAxisAngle(p0, p1, p2))(*)(kmVec3*, float*, kmMat4 const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x342d74, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1, p2);
}

extern "C" kmMat4* const kmMat4RotationTranslation(kmMat4* p0, kmMat3 const* p1, kmVec3 const* p2) {
	using FunctionType = decltype(kmMat4RotationTranslation(p0, p1, p2))(*)(kmMat4*, kmMat3 const*, kmVec3 const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x342de8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1, p2);
}

extern "C" kmMat4* const kmMat4RotationX(kmMat4* p0, float const p1) {
	using FunctionType = decltype(kmMat4RotationX(p0, p1))(*)(kmMat4*, float const);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3426b8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1);
}

extern "C" kmMat4* const kmMat4RotationY(kmMat4* p0, float const p1) {
	using FunctionType = decltype(kmMat4RotationY(p0, p1))(*)(kmMat4*, float const);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x342708, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1);
}

extern "C" kmMat4* const kmMat4RotationZ(kmMat4* p0, float const p1) {
	using FunctionType = decltype(kmMat4RotationZ(p0, p1))(*)(kmMat4*, float const);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x342768, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1);
}

extern "C" kmMat4* const kmMat4Scaling(kmMat4* p0, float const p1, float const p2, float const p3) {
	using FunctionType = decltype(kmMat4Scaling(p0, p1, p2, p3))(*)(kmMat4*, float const, float const, float const);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3429a4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1, p2, p3);
}

extern "C" kmMat4* const kmMat4Translation(kmMat4* p0, float const p1, float const p2, float const p3) {
	using FunctionType = decltype(kmMat4Translation(p0, p1, p2, p3))(*)(kmMat4*, float const, float const, float const);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3429c8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1, p2, p3);
}

extern "C" kmMat4* const kmMat4Transpose(kmMat4* p0, kmMat4 const* p1) {
	using FunctionType = decltype(kmMat4Transpose(p0, p1))(*)(kmMat4*, kmMat4 const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x342118, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1);
}

extern "C" float kmMax(float p0, float p1) {
	using FunctionType = decltype(kmMax(p0, p1))(*)(float, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x770040, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1);
}

extern "C" float kmMin(float p0, float p1) {
	using FunctionType = decltype(kmMin(p0, p1))(*)(float, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x770034, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1);
}

extern "C" POINT_CLASSIFICATION const kmPlaneClassifyPoint(kmPlane const* p0, kmVec3 const* p1) {
	using FunctionType = decltype(kmPlaneClassifyPoint(p0, p1))(*)(kmPlane const*, kmVec3 const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3e8f38, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1);
}

extern "C" float const kmPlaneDotCoord(kmPlane const* p0, kmVec3 const* p1) {
	using FunctionType = decltype(kmPlaneDotCoord(p0, p1))(*)(kmPlane const*, kmVec3 const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3e8d4c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1);
}

extern "C" float const kmPlaneDotNormal(kmPlane const* p0, kmVec3 const* p1) {
	using FunctionType = decltype(kmPlaneDotNormal(p0, p1))(*)(kmPlane const*, kmVec3 const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3e8d70, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1);
}

extern "C" kmPlane* const kmPlaneFromPointNormal(kmPlane* p0, kmVec3 const* p1, kmVec3 const* p2) {
	using FunctionType = decltype(kmPlaneFromPointNormal(p0, p1, p2))(*)(kmPlane*, kmVec3 const*, kmVec3 const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3e8d90, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1, p2);
}

extern "C" kmPlane* const kmPlaneFromPoints(kmPlane* p0, kmVec3 const* p1, kmVec3 const* p2, kmVec3 const* p3) {
	using FunctionType = decltype(kmPlaneFromPoints(p0, p1, p2, p3))(*)(kmPlane*, kmVec3 const*, kmVec3 const*, kmVec3 const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3e8dd0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1, p2, p3);
}

extern "C" kmPlane* const kmPlaneNormalize(kmPlane* p0, kmPlane const* p1) {
	using FunctionType = decltype(kmPlaneNormalize(p0, p1))(*)(kmPlane*, kmPlane const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3e8e98, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1);
}

extern "C" kmQuaternion* const kmQuaternionConjugate(kmQuaternion* p0, kmQuaternion const* p1) {
	using FunctionType = decltype(kmQuaternionConjugate(p0, p1))(*)(kmQuaternion*, kmQuaternion const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x46b56c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1);
}

extern "C" kmQuaternion* kmQuaternionIdentity(kmQuaternion* p0) {
	using FunctionType = decltype(kmQuaternionIdentity(p0))(*)(kmQuaternion*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x46b5d4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0);
}

extern "C" kmQuaternion* kmQuaternionInverse(kmQuaternion* p0, kmQuaternion const* p1) {
	using FunctionType = decltype(kmQuaternionInverse(p0, p1))(*)(kmQuaternion*, kmQuaternion const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x46b5e4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1);
}

extern "C" int kmQuaternionIsIdentity(kmQuaternion const* p0) {
	using FunctionType = decltype(kmQuaternionIsIdentity(p0))(*)(kmQuaternion const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x46b670, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0);
}

extern "C" float kmQuaternionLength(kmQuaternion const* p0) {
	using FunctionType = decltype(kmQuaternionLength(p0))(*)(kmQuaternion const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x46b640, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0);
}

extern "C" float kmQuaternionLengthSq(kmQuaternion const* p0) {
	using FunctionType = decltype(kmQuaternionLengthSq(p0))(*)(kmQuaternion const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x46b6b0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0);
}

extern "C" kmQuaternion* kmQuaternionMultiply(kmQuaternion* p0, kmQuaternion const* p1, kmQuaternion const* p2) {
	using FunctionType = decltype(kmQuaternionMultiply(p0, p1, p2))(*)(kmQuaternion*, kmQuaternion const*, kmQuaternion const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x46b6f4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1, p2);
}

extern "C" kmVec3* kmQuaternionMultiplyVec3(kmVec3* p0, kmQuaternion const* p1, kmVec3 const* p2) {
	using FunctionType = decltype(kmQuaternionMultiplyVec3(p0, p1, p2))(*)(kmVec3*, kmQuaternion const*, kmVec3 const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x46bedc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1, p2);
}

extern "C" kmQuaternion* kmQuaternionNormalize(kmQuaternion* p0, kmQuaternion const* p1) {
	using FunctionType = decltype(kmQuaternionNormalize(p0, p1))(*)(kmQuaternion*, kmQuaternion const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x46b770, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1);
}

extern "C" kmQuaternion* kmQuaternionRotationAxis(kmQuaternion* p0, kmVec3 const* p1, float p2) {
	using FunctionType = decltype(kmQuaternionRotationAxis(p0, p1, p2))(*)(kmQuaternion*, kmVec3 const*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x46b7c8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1, p2);
}

extern "C" kmQuaternion* kmQuaternionRotationBetweenVec3(kmQuaternion* p0, kmVec3 const* p1, kmVec3 const* p2, kmVec3 const* p3) {
	using FunctionType = decltype(kmQuaternionRotationBetweenVec3(p0, p1, p2, p3))(*)(kmQuaternion*, kmVec3 const*, kmVec3 const*, kmVec3 const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x46bccc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1, p2, p3);
}

extern "C" kmQuaternion* kmQuaternionRotationMatrix(kmQuaternion* p0, kmMat3 const* p1) {
	using FunctionType = decltype(kmQuaternionRotationMatrix(p0, p1))(*)(kmQuaternion*, kmMat3 const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x46b814, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1);
}

extern "C" kmQuaternion* kmQuaternionRotationYawPitchRoll(kmQuaternion* p0, float p1, float p2, float p3) {
	using FunctionType = decltype(kmQuaternionRotationYawPitchRoll(p0, p1, p2, p3))(*)(kmQuaternion*, float, float, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x46b964, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1, p2, p3);
}

extern "C" kmQuaternion* kmQuaternionSlerp(kmQuaternion* p0, kmQuaternion const* p1, kmQuaternion const* p2, float p3) {
	using FunctionType = decltype(kmQuaternionSlerp(p0, p1, p2, p3))(*)(kmQuaternion*, kmQuaternion const*, kmQuaternion const*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x46ba80, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1, p2, p3);
}

extern "C" void kmQuaternionToAxisAngle(kmQuaternion const* p0, kmVec3* p1, float* p2) {
	using FunctionType = decltype(kmQuaternionToAxisAngle(p0, p1, p2))(*)(kmQuaternion const*, kmVec3*, float*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x46bbd0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1, p2);
}

extern "C" float kmRadiansToDegrees(float p0) {
	using FunctionType = decltype(kmRadiansToDegrees(p0))(*)(float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x770020, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0);
}

extern "C" void kmRay2Fill(kmRay2* p0, float p1, float p2, float p3, float p4) {
	using FunctionType = decltype(kmRay2Fill(p0, p1, p2, p3, p4))(*)(kmRay2*, float, float, float, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x42f578, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1, p2, p3, p4);
}

extern "C" unsigned char kmRay2IntersectLineSegment(kmRay2 const* p0, kmVec2 const* p1, kmVec2 const* p2, kmVec2* p3) {
	using FunctionType = decltype(kmRay2IntersectLineSegment(p0, p1, p2, p3))(*)(kmRay2 const*, kmVec2 const*, kmVec2 const*, kmVec2*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x42f584, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1, p2, p3);
}

extern "C" unsigned char kmRay2IntersectTriangle(kmRay2 const* p0, kmVec2 const* p1, kmVec2 const* p2, kmVec2 const* p3, kmVec2* p4, kmVec2* p5) {
	using FunctionType = decltype(kmRay2IntersectTriangle(p0, p1, p2, p3, p4, p5))(*)(kmRay2 const*, kmVec2 const*, kmVec2 const*, kmVec2 const*, kmVec2*, kmVec2*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x42f7b4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1, p2, p3, p4, p5);
}

extern "C" float kmSQR(float p0) {
	using FunctionType = decltype(kmSQR(p0))(*)(float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x770004, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0);
}

extern "C" int kmVec2AreEqual(kmVec2 const* p0, kmVec2 const* p1) {
	using FunctionType = decltype(kmVec2AreEqual(p0, p1))(*)(kmVec2 const*, kmVec2 const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2a8c90, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1);
}

extern "C" float kmVec2Dot(kmVec2 const* p0, kmVec2 const* p1) {
	using FunctionType = decltype(kmVec2Dot(p0, p1))(*)(kmVec2 const*, kmVec2 const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2a8c0c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1);
}

extern "C" float kmVec2Length(kmVec2 const* p0) {
	using FunctionType = decltype(kmVec2Length(p0))(*)(kmVec2 const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2a8b20, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0);
}

extern "C" float kmVec2LengthSq(kmVec2 const* p0) {
	using FunctionType = decltype(kmVec2LengthSq(p0))(*)(kmVec2 const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2a8b60, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0);
}

extern "C" kmVec2* kmVec2Normalize(kmVec2* p0, kmVec2 const* p1) {
	using FunctionType = decltype(kmVec2Normalize(p0, p1))(*)(kmVec2*, kmVec2 const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2a8b9c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1);
}

extern "C" kmVec2* kmVec2Subtract(kmVec2* p0, kmVec2 const* p1, kmVec2 const* p2) {
	using FunctionType = decltype(kmVec2Subtract(p0, p1, p2))(*)(kmVec2*, kmVec2 const*, kmVec2 const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2a8c20, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1, p2);
}

extern "C" kmVec2* kmVec2Transform(kmVec2* p0, kmVec2 const* p1, kmMat3 const* p2) {
	using FunctionType = decltype(kmVec2Transform(p0, p1, p2))(*)(kmVec2*, kmVec2 const*, kmMat3 const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2a8c34, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1, p2);
}

extern "C" kmVec3* kmVec3Add(kmVec3* p0, kmVec3 const* p1, kmVec3 const* p2) {
	using FunctionType = decltype(kmVec3Add(p0, p1, p2))(*)(kmVec3*, kmVec3 const*, kmVec3 const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5f56fc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1, p2);
}

extern "C" int kmVec3AreEqual(kmVec3 const* p0, kmVec3 const* p1) {
	using FunctionType = decltype(kmVec3AreEqual(p0, p1))(*)(kmVec3 const*, kmVec3 const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5f5918, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1);
}

extern "C" kmVec3* kmVec3Assign(kmVec3* p0, kmVec3 const* p1) {
	using FunctionType = decltype(kmVec3Assign(p0, p1))(*)(kmVec3*, kmVec3 const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5f59c4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1);
}

extern "C" kmVec3* kmVec3Cross(kmVec3* p0, kmVec3 const* p1, kmVec3 const* p2) {
	using FunctionType = decltype(kmVec3Cross(p0, p1, p2))(*)(kmVec3*, kmVec3 const*, kmVec3 const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5f569c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1, p2);
}

extern "C" float kmVec3Dot(kmVec3 const* p0, kmVec3 const* p1) {
	using FunctionType = decltype(kmVec3Dot(p0, p1))(*)(kmVec3 const*, kmVec3 const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5f56dc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1);
}

extern "C" kmVec3* kmVec3Fill(kmVec3* p0, float p1, float p2, float p3) {
	using FunctionType = decltype(kmVec3Fill(p0, p1, p2, p3))(*)(kmVec3*, float, float, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5f5588, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1, p2, p3);
}

extern "C" kmVec3* kmVec3InverseTransform(kmVec3* p0, kmVec3 const* p1, kmMat4 const* p2) {
	using FunctionType = decltype(kmVec3InverseTransform(p0, p1, p2))(*)(kmVec3*, kmVec3 const*, kmMat4 const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5f57fc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1, p2);
}

extern "C" kmVec3* kmVec3InverseTransformNormal(kmVec3* p0, kmVec3 const* p1, kmMat4 const* p2) {
	using FunctionType = decltype(kmVec3InverseTransformNormal(p0, p1, p2))(*)(kmVec3*, kmVec3 const*, kmMat4 const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5f5798, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1, p2);
}

extern "C" float kmVec3Length(kmVec3 const* p0) {
	using FunctionType = decltype(kmVec3Length(p0))(*)(kmVec3 const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5f5594, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0);
}

extern "C" float kmVec3LengthSq(kmVec3 const* p0) {
	using FunctionType = decltype(kmVec3LengthSq(p0))(*)(kmVec3 const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5f55e0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0);
}

extern "C" kmVec3* kmVec3Normalize(kmVec3* p0, kmVec3 const* p1) {
	using FunctionType = decltype(kmVec3Normalize(p0, p1))(*)(kmVec3*, kmVec3 const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5f5628, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1);
}

extern "C" kmVec3* kmVec3Scale(kmVec3* p0, kmVec3 const* p1, float const p2) {
	using FunctionType = decltype(kmVec3Scale(p0, p1, p2))(*)(kmVec3*, kmVec3 const*, float const);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5f58fc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1, p2);
}

extern "C" kmVec3* kmVec3Subtract(kmVec3* p0, kmVec3 const* p1, kmVec3 const* p2) {
	using FunctionType = decltype(kmVec3Subtract(p0, p1, p2))(*)(kmVec3*, kmVec3 const*, kmVec3 const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5f5720, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1, p2);
}

extern "C" kmVec3* kmVec3Transform(kmVec3* p0, kmVec3 const* p1, kmMat4 const* p2) {
	using FunctionType = decltype(kmVec3Transform(p0, p1, p2))(*)(kmVec3*, kmVec3 const*, kmMat4 const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5f5744, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1, p2);
}

extern "C" kmVec3* kmVec3TransformCoord(kmVec3* p0, kmVec3 const* p1, kmMat4 const* p2) {
	using FunctionType = decltype(kmVec3TransformCoord(p0, p1, p2))(*)(kmVec3*, kmVec3 const*, kmMat4 const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5f584c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1, p2);
}

extern "C" kmVec3* kmVec3TransformNormal(kmVec3* p0, kmVec3 const* p1, kmMat4 const* p2) {
	using FunctionType = decltype(kmVec3TransformNormal(p0, p1, p2))(*)(kmVec3*, kmVec3 const*, kmMat4 const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5f58b8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1, p2);
}
