
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/GJMapObject.hpp>
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

auto GJMapObject::createMonster(int objectID) -> decltype(createMonster(objectID)) {
	using FunctionType = decltype(createMonster(objectID))(*)(int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1f9d74, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(objectID);
}

auto GJMapObject::init(cocos2d::CCNode* parent) -> decltype(init(parent)) {
	using FunctionType = decltype(init(parent))(*)(GJMapObject*, cocos2d::CCNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1f9c74, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, parent);
}

auto GJMapObject::monsterIdle() -> decltype(monsterIdle()) {
	using FunctionType = decltype(monsterIdle())(*)(GJMapObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1fa898, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJMapObject::monsterJump() -> decltype(monsterJump()) {
	using FunctionType = decltype(monsterJump())(*)(GJMapObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1fa6a0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJMapObject::moveMonster() -> decltype(moveMonster()) {
	using FunctionType = decltype(moveMonster())(*)(GJMapObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1fa49c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJMapObject::moveMonster(cocos2d::CCPoint position, float offset) -> decltype(moveMonster(position, offset)) {
	using FunctionType = decltype(moveMonster(position, offset))(*)(GJMapObject*, cocos2d::CCPoint, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1fa4dc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, position, offset);
}

auto GJMapObject::playerJump() -> decltype(playerJump()) {
	using FunctionType = decltype(playerJump())(*)(GJMapObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1fa220, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJMapObject::setObjectOrigin(cocos2d::CCPoint position, float offset) -> decltype(setObjectOrigin(position, offset)) {
	using FunctionType = decltype(setObjectOrigin(position, offset))(*)(GJMapObject*, cocos2d::CCPoint, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1fa460, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, position, offset);
}

auto GJMapObject::startPlayerJumpLoop() -> decltype(startPlayerJumpLoop()) {
	using FunctionType = decltype(startPlayerJumpLoop())(*)(GJMapObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1fa1c8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJMapObject::touchMonster() -> decltype(touchMonster()) {
	using FunctionType = decltype(touchMonster())(*)(GJMapObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1faafc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJMapObject::updateShadow(float scaleX, float scaleY, cocos2d::CCPoint position) -> decltype(updateShadow(scaleX, scaleY, position)) {
	using FunctionType = decltype(updateShadow(scaleX, scaleY, position))(*)(GJMapObject*, float, float, cocos2d::CCPoint);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1fa010, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, scaleX, scaleY, position);
}
