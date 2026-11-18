#include <Geode/cocos/cocoa/CCObject.h>

#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/mapping/CCGLProgram.hpp>
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

cocos2d::CCGLProgram::CCGLProgram() : cocos2d::CCGLProgram(geode::CutoffConstructor, sizeof(cocos2d::CCGLProgram)) {
	// here we construct it as normal as we can, then destruct it
	// using the generated functions. this ensures no memory gets leaked
	// no crashes :pray:
	geode::DestructorLock::addLock(this);
	cocos2d::CCGLProgram::~CCGLProgram();

	using FunctionType = void(*)(cocos2d::CCGLProgram*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x417390, tulip::hook::TulipConvention::Default);
	reinterpret_cast<FunctionType>(func)(this);
}

cocos2d::CCGLProgram::~CCGLProgram() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(cocos2d::CCGLProgram*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x4173e0, tulip::hook::TulipConvention::Default);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) cocos2d::CCGLProgram(geode::CutoffConstructor, sizeof(cocos2d::CCGLProgram));
		geode::DestructorLock::addLock(this);
	}
}

auto cocos2d::CCGLProgram::addAttribute(char const* p0, unsigned int p1) -> decltype(addAttribute(p0, p1)) {
	using FunctionType = decltype(addAttribute(p0, p1))(*)(cocos2d::CCGLProgram*, char const*, unsigned int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x417800, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1);
}

auto cocos2d::CCGLProgram::compileShader(unsigned int* p0, unsigned int p1, char const* p2) -> decltype(compileShader(p0, p1, p2)) {
	using FunctionType = decltype(compileShader(p0, p1, p2))(*)(cocos2d::CCGLProgram*, unsigned int*, unsigned int, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x417640, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1, p2);
}

auto cocos2d::CCGLProgram::description() -> decltype(description()) {
	using FunctionType = decltype(description())(*)(cocos2d::CCGLProgram*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4177d0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto cocos2d::CCGLProgram::fragmentShaderLog() -> decltype(fragmentShaderLog()) {
	using FunctionType = decltype(fragmentShaderLog())(*)(cocos2d::CCGLProgram*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x417c10, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto cocos2d::CCGLProgram::getUniformLocationForName(char const* p0) -> decltype(getUniformLocationForName(p0)) {
	using FunctionType = decltype(getUniformLocationForName(p0))(*)(cocos2d::CCGLProgram*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4182b0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto cocos2d::CCGLProgram::initWithVertexShaderByteArray(char const* p0, char const* p1) -> decltype(initWithVertexShaderByteArray(p0, p1)) {
	using FunctionType = decltype(initWithVertexShaderByteArray(p0, p1))(*)(cocos2d::CCGLProgram*, char const*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4175a0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1);
}

auto cocos2d::CCGLProgram::initWithVertexShaderFilename(char const* p0, char const* p1) -> decltype(initWithVertexShaderFilename(p0, p1)) {
	using FunctionType = decltype(initWithVertexShaderFilename(p0, p1))(*)(cocos2d::CCGLProgram*, char const*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4176f0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1);
}

auto cocos2d::CCGLProgram::link() -> decltype(link()) {
	using FunctionType = decltype(link())(*)(cocos2d::CCGLProgram*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x417970, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto cocos2d::CCGLProgram::logForOpenGLObject(unsigned int p0, cocos2d::GLInfoFunction p1, cocos2d::GLLogFunction p2) -> decltype(logForOpenGLObject(p0, p1, p2)) {
	using FunctionType = decltype(logForOpenGLObject(p0, p1, p2))(*)(cocos2d::CCGLProgram*, unsigned int, cocos2d::GLInfoFunction, cocos2d::GLLogFunction);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4179b0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1, p2);
}

auto cocos2d::CCGLProgram::programLog() -> decltype(programLog()) {
	using FunctionType = decltype(programLog())(*)(cocos2d::CCGLProgram*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x417d40, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto cocos2d::CCGLProgram::reset() -> decltype(reset()) {
	using FunctionType = decltype(reset())(*)(cocos2d::CCGLProgram*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x418c60, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto cocos2d::CCGLProgram::setUniformLocationWith1f(int p0, float p1) -> decltype(setUniformLocationWith1f(p0, p1)) {
	using FunctionType = decltype(setUniformLocationWith1f(p0, p1))(*)(cocos2d::CCGLProgram*, int, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x418590, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1);
}

auto cocos2d::CCGLProgram::setUniformLocationWith1i(int p0, int p1) -> decltype(setUniformLocationWith1i(p0, p1)) {
	using FunctionType = decltype(setUniformLocationWith1i(p0, p1))(*)(cocos2d::CCGLProgram*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x417930, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1);
}

auto cocos2d::CCGLProgram::setUniformLocationWith2f(int p0, float p1, float p2) -> decltype(setUniformLocationWith2f(p0, p1, p2)) {
	using FunctionType = decltype(setUniformLocationWith2f(p0, p1, p2))(*)(cocos2d::CCGLProgram*, int, float, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4185d0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1, p2);
}

auto cocos2d::CCGLProgram::setUniformLocationWith2fv(int p0, float* p1, unsigned int p2) -> decltype(setUniformLocationWith2fv(p0, p1, p2)) {
	using FunctionType = decltype(setUniformLocationWith2fv(p0, p1, p2))(*)(cocos2d::CCGLProgram*, int, float*, unsigned int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4187a0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1, p2);
}

auto cocos2d::CCGLProgram::setUniformLocationWith2i(int p0, int p1, int p2) -> decltype(setUniformLocationWith2i(p0, p1, p2)) {
	using FunctionType = decltype(setUniformLocationWith2i(p0, p1, p2))(*)(cocos2d::CCGLProgram*, int, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4182c0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1, p2);
}

auto cocos2d::CCGLProgram::setUniformLocationWith2iv(int p0, int* p1, unsigned int p2) -> decltype(setUniformLocationWith2iv(p0, p1, p2)) {
	using FunctionType = decltype(setUniformLocationWith2iv(p0, p1, p2))(*)(cocos2d::CCGLProgram*, int, int*, unsigned int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4184a0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1, p2);
}

auto cocos2d::CCGLProgram::setUniformLocationWith3f(int p0, float p1, float p2, float p3) -> decltype(setUniformLocationWith3f(p0, p1, p2, p3)) {
	using FunctionType = decltype(setUniformLocationWith3f(p0, p1, p2, p3))(*)(cocos2d::CCGLProgram*, int, float, float, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x418660, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1, p2, p3);
}

auto cocos2d::CCGLProgram::setUniformLocationWith3fv(int p0, float* p1, unsigned int p2) -> decltype(setUniformLocationWith3fv(p0, p1, p2)) {
	using FunctionType = decltype(setUniformLocationWith3fv(p0, p1, p2))(*)(cocos2d::CCGLProgram*, int, float*, unsigned int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4187f0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1, p2);
}

auto cocos2d::CCGLProgram::setUniformLocationWith3i(int p0, int p1, int p2, int p3) -> decltype(setUniformLocationWith3i(p0, p1, p2, p3)) {
	using FunctionType = decltype(setUniformLocationWith3i(p0, p1, p2, p3))(*)(cocos2d::CCGLProgram*, int, int, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x418350, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1, p2, p3);
}

auto cocos2d::CCGLProgram::setUniformLocationWith3iv(int p0, int* p1, unsigned int p2) -> decltype(setUniformLocationWith3iv(p0, p1, p2)) {
	using FunctionType = decltype(setUniformLocationWith3iv(p0, p1, p2))(*)(cocos2d::CCGLProgram*, int, int*, unsigned int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4184f0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1, p2);
}

auto cocos2d::CCGLProgram::setUniformLocationWith4f(int p0, float p1, float p2, float p3, float p4) -> decltype(setUniformLocationWith4f(p0, p1, p2, p3, p4)) {
	using FunctionType = decltype(setUniformLocationWith4f(p0, p1, p2, p3, p4))(*)(cocos2d::CCGLProgram*, int, float, float, float, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x418700, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1, p2, p3, p4);
}

auto cocos2d::CCGLProgram::setUniformLocationWith4fv(int p0, float* p1, unsigned int p2) -> decltype(setUniformLocationWith4fv(p0, p1, p2)) {
	using FunctionType = decltype(setUniformLocationWith4fv(p0, p1, p2))(*)(cocos2d::CCGLProgram*, int, float*, unsigned int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x418890, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1, p2);
}

auto cocos2d::CCGLProgram::setUniformLocationWith4i(int p0, int p1, int p2, int p3, int p4) -> decltype(setUniformLocationWith4i(p0, p1, p2, p3, p4)) {
	using FunctionType = decltype(setUniformLocationWith4i(p0, p1, p2, p3, p4))(*)(cocos2d::CCGLProgram*, int, int, int, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4183f0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1, p2, p3, p4);
}

auto cocos2d::CCGLProgram::setUniformLocationWith4iv(int p0, int* p1, unsigned int p2) -> decltype(setUniformLocationWith4iv(p0, p1, p2)) {
	using FunctionType = decltype(setUniformLocationWith4iv(p0, p1, p2))(*)(cocos2d::CCGLProgram*, int, int*, unsigned int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x418540, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1, p2);
}

auto cocos2d::CCGLProgram::setUniformLocationWithMatrix3fv(int p0, float* p1, unsigned int p2) -> decltype(setUniformLocationWithMatrix3fv(p0, p1, p2)) {
	using FunctionType = decltype(setUniformLocationWithMatrix3fv(p0, p1, p2))(*)(cocos2d::CCGLProgram*, int, float*, unsigned int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x418840, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1, p2);
}

auto cocos2d::CCGLProgram::setUniformLocationWithMatrix4fv(int p0, float* p1, unsigned int p2) -> decltype(setUniformLocationWithMatrix4fv(p0, p1, p2)) {
	using FunctionType = decltype(setUniformLocationWithMatrix4fv(p0, p1, p2))(*)(cocos2d::CCGLProgram*, int, float*, unsigned int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4188e0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1, p2);
}

auto cocos2d::CCGLProgram::setUniformsForBuiltins() -> decltype(setUniformsForBuiltins()) {
	using FunctionType = decltype(setUniformsForBuiltins())(*)(cocos2d::CCGLProgram*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x418930, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto cocos2d::CCGLProgram::updateUniformLocation(int p0, void* p1, unsigned int p2) -> decltype(updateUniformLocation(p0, p1, p2)) {
	using FunctionType = decltype(updateUniformLocation(p0, p1, p2))(*)(cocos2d::CCGLProgram*, int, void*, unsigned int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x417e70, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1, p2);
}

auto cocos2d::CCGLProgram::updateUniforms() -> decltype(updateUniforms()) {
	using FunctionType = decltype(updateUniforms())(*)(cocos2d::CCGLProgram*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x417820, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto cocos2d::CCGLProgram::use() -> decltype(use()) {
	using FunctionType = decltype(use())(*)(cocos2d::CCGLProgram*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x417920, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto cocos2d::CCGLProgram::vertexShaderLog() -> decltype(vertexShaderLog()) {
	using FunctionType = decltype(vertexShaderLog())(*)(cocos2d::CCGLProgram*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x417ae0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}
