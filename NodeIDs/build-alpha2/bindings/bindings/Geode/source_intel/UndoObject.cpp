#include <Geode/cocos/cocoa/CCObject.h>

#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/UndoObject.hpp>
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

UndoObject::~UndoObject() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(UndoObject*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0xd6690, tulip::hook::TulipConvention::Default);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) UndoObject(geode::CutoffConstructor, sizeof(UndoObject));
		geode::DestructorLock::addLock(this);
	}
}

auto UndoObject::create(GameObject* object, UndoCommand command) -> decltype(create(object, command)) {
	using FunctionType = decltype(create(object, command))(*)(GameObject*, UndoCommand);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xaf3d0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(object, command);
}

auto UndoObject::createWithArray(cocos2d::CCArray* array, UndoCommand command) -> decltype(createWithArray(array, command)) {
	using FunctionType = decltype(createWithArray(array, command))(*)(cocos2d::CCArray*, UndoCommand);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xb2270, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(array, command);
}

auto UndoObject::createWithTransformObjects(cocos2d::CCArray* objects, UndoCommand command) -> decltype(createWithTransformObjects(objects, command)) {
	using FunctionType = decltype(createWithTransformObjects(objects, command))(*)(cocos2d::CCArray*, UndoCommand);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xd67b0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(objects, command);
}

auto UndoObject::init(GameObject* object, UndoCommand command) -> decltype(init(object, command)) {
	using FunctionType = decltype(init(object, command))(*)(UndoObject*, GameObject*, UndoCommand);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xd6780, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, object, command);
}

auto UndoObject::init(cocos2d::CCArray* array, UndoCommand command) -> decltype(init(array, command)) {
	using FunctionType = decltype(init(array, command))(*)(UndoObject*, cocos2d::CCArray*, UndoCommand);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xd6920, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, array, command);
}

auto UndoObject::initWithTransformObjects(cocos2d::CCArray* objects, UndoCommand command) -> decltype(initWithTransformObjects(objects, command)) {
	using FunctionType = decltype(initWithTransformObjects(objects, command))(*)(UndoObject*, cocos2d::CCArray*, UndoCommand);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xd68a0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, objects, command);
}
