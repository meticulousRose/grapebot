
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/TeleportPortalObject.hpp>
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

auto TeleportPortalObject::create(char const* frame, bool trigger) -> decltype(create(frame, trigger)) {
	using FunctionType = decltype(create(frame, trigger))(*)(char const*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x19e3b0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(frame, trigger);
}

auto TeleportPortalObject::setPosition(cocos2d::CCPoint const& position) -> decltype(setPosition(position)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCPoint const&>::func(&TeleportPortalObject::setPosition), this);
	using FunctionType = decltype(setPosition(position))(*)(TeleportPortalObject*, cocos2d::CCPoint const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x19e750, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, position);
}

auto TeleportPortalObject::setRotation(float rotation) -> decltype(setRotation(rotation)) {
	auto self = addresser::thunkAdjust(Resolve<float>::func(&TeleportPortalObject::setRotation), this);
	using FunctionType = decltype(setRotation(rotation))(*)(TeleportPortalObject*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x19e800, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, rotation);
}

auto TeleportPortalObject::setStartPos(cocos2d::CCPoint position) -> decltype(setStartPos(position)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCPoint>::func(&TeleportPortalObject::setStartPos), this);
	using FunctionType = decltype(setStartPos(position))(*)(TeleportPortalObject*, cocos2d::CCPoint);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x19e5b0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, position);
}

auto TeleportPortalObject::customObjectSetup(std::vector<std::string>& values, std::vector<void*>& exists) -> decltype(customObjectSetup(values, exists)) {
	auto self = addresser::thunkAdjust(Resolve<std::vector<std::string>&, std::vector<void*>&>::func(&TeleportPortalObject::customObjectSetup), this);
	using FunctionType = decltype(customObjectSetup(values, exists))(*)(TeleportPortalObject*, std::vector<std::string>&, std::vector<void*>&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1a0fb0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, values, exists);
}

auto TeleportPortalObject::getSaveString(GJBaseGameLayer* layer) -> decltype(getSaveString(layer)) {
	auto self = addresser::thunkAdjust(Resolve<GJBaseGameLayer*>::func(&TeleportPortalObject::getSaveString), this);
	using FunctionType = decltype(getSaveString(layer))(*)(TeleportPortalObject*, GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x19e950, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, layer);
}

auto TeleportPortalObject::addToGroup(int id) -> decltype(addToGroup(id)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&TeleportPortalObject::addToGroup), this);
	using FunctionType = decltype(addToGroup(id))(*)(TeleportPortalObject*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x19e890, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, id);
}

auto TeleportPortalObject::removeFromGroup(int id) -> decltype(removeFromGroup(id)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&TeleportPortalObject::removeFromGroup), this);
	using FunctionType = decltype(removeFromGroup(id))(*)(TeleportPortalObject*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x19e8f0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, id);
}

auto TeleportPortalObject::setRotation2(float rotation) -> decltype(setRotation2(rotation)) {
	auto self = addresser::thunkAdjust(Resolve<float>::func(&TeleportPortalObject::setRotation2), this);
	using FunctionType = decltype(setRotation2(rotation))(*)(TeleportPortalObject*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x19e860, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, rotation);
}

auto TeleportPortalObject::addToGroup2(int id) -> decltype(addToGroup2(id)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&TeleportPortalObject::addToGroup2), this);
	using FunctionType = decltype(addToGroup2(id))(*)(TeleportPortalObject*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x19e870, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, id);
}

auto TeleportPortalObject::removeFromGroup2(int id) -> decltype(removeFromGroup2(id)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&TeleportPortalObject::removeFromGroup2), this);
	using FunctionType = decltype(removeFromGroup2(id))(*)(TeleportPortalObject*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x19e880, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, id);
}

auto TeleportPortalObject::getTeleportXOff(cocos2d::CCNode* parent) -> decltype(getTeleportXOff(parent)) {
	using FunctionType = decltype(getTeleportXOff(parent))(*)(TeleportPortalObject*, cocos2d::CCNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x19e680, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, parent);
}

auto TeleportPortalObject::init(char const* frame, bool trigger) -> decltype(init(frame, trigger)) {
	using FunctionType = decltype(init(frame, trigger))(*)(TeleportPortalObject*, char const*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x19e510, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, frame, trigger);
}

auto TeleportPortalObject::setPositionOverride(cocos2d::CCPoint position) -> decltype(setPositionOverride(position)) {
	using FunctionType = decltype(setPositionOverride(position))(*)(TeleportPortalObject*, cocos2d::CCPoint);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x19e5a0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, position);
}

auto TeleportPortalObject::setStartPosOverride(cocos2d::CCPoint position) -> decltype(setStartPosOverride(position)) {
	using FunctionType = decltype(setStartPosOverride(position))(*)(TeleportPortalObject*, cocos2d::CCPoint);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x19e570, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, position);
}
