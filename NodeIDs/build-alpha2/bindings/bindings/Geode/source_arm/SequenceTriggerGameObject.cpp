
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/SequenceTriggerGameObject.hpp>
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

auto SequenceTriggerGameObject::create() -> decltype(create()) {
	using FunctionType = decltype(create())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x16306c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto SequenceTriggerGameObject::init() -> decltype(init()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&SequenceTriggerGameObject::init), this);
	using FunctionType = decltype(init())(*)(SequenceTriggerGameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x163160, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto SequenceTriggerGameObject::resetObject() -> decltype(resetObject()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&SequenceTriggerGameObject::resetObject), this);
	using FunctionType = decltype(resetObject())(*)(SequenceTriggerGameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1631b0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto SequenceTriggerGameObject::triggerObject(GJBaseGameLayer* layer, int uniqueID, std::vector<int> const* remapKeys) -> decltype(triggerObject(layer, uniqueID, remapKeys)) {
	auto self = addresser::thunkAdjust(Resolve<GJBaseGameLayer*, int, std::vector<int> const*>::func(&SequenceTriggerGameObject::triggerObject), this);
	using FunctionType = decltype(triggerObject(layer, uniqueID, remapKeys))(*)(SequenceTriggerGameObject*, GJBaseGameLayer*, int, std::vector<int> const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x16337c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, layer, uniqueID, remapKeys);
}

auto SequenceTriggerGameObject::customObjectSetup(std::vector<std::string>& values, std::vector<void*>& exists) -> decltype(customObjectSetup(values, exists)) {
	auto self = addresser::thunkAdjust(Resolve<std::vector<std::string>&, std::vector<void*>&>::func(&SequenceTriggerGameObject::customObjectSetup), this);
	using FunctionType = decltype(customObjectSetup(values, exists))(*)(SequenceTriggerGameObject*, std::vector<std::string>&, std::vector<void*>&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x163860, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, values, exists);
}

auto SequenceTriggerGameObject::getSaveString(GJBaseGameLayer* layer) -> decltype(getSaveString(layer)) {
	auto self = addresser::thunkAdjust(Resolve<GJBaseGameLayer*>::func(&SequenceTriggerGameObject::getSaveString), this);
	using FunctionType = decltype(getSaveString(layer))(*)(SequenceTriggerGameObject*, GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x163d18, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, layer);
}

auto SequenceTriggerGameObject::addCount(int index, int count) -> decltype(addCount(index, count)) {
	using FunctionType = decltype(addCount(index, count))(*)(SequenceTriggerGameObject*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x164cc0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, index, count);
}

auto SequenceTriggerGameObject::addTarget(int groupID, int count) -> decltype(addTarget(groupID, count)) {
	using FunctionType = decltype(addTarget(groupID, count))(*)(SequenceTriggerGameObject*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x164abc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, groupID, count);
}

auto SequenceTriggerGameObject::deleteTarget(int index) -> decltype(deleteTarget(index)) {
	using FunctionType = decltype(deleteTarget(index))(*)(SequenceTriggerGameObject*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x164c44, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, index);
}

auto SequenceTriggerGameObject::reorderTarget(int index, bool left) -> decltype(reorderTarget(index, left)) {
	using FunctionType = decltype(reorderTarget(index, left))(*)(SequenceTriggerGameObject*, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x164bc8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, index, left);
}

auto SequenceTriggerGameObject::updateSequenceTotalCount() -> decltype(updateSequenceTotalCount()) {
	using FunctionType = decltype(updateSequenceTotalCount())(*)(SequenceTriggerGameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x163248, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}
