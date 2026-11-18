
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/ChanceTriggerGameObject.hpp>
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

auto ChanceTriggerGameObject::containsTargetID(int id) -> decltype(containsTargetID(id)) {
	using FunctionType = decltype(containsTargetID(id))(*)(ChanceTriggerGameObject*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x19bc40, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto ChanceTriggerGameObject::editChanceObject(int oldID, int newID) -> decltype(editChanceObject(oldID, newID)) {
	using FunctionType = decltype(editChanceObject(oldID, newID))(*)(ChanceTriggerGameObject*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1a36c0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, oldID, newID);
}

auto ChanceTriggerGameObject::getTargetIDs(std::vector<int>& ids) -> decltype(getTargetIDs(ids)) {
	using FunctionType = decltype(getTargetIDs(ids))(*)(ChanceTriggerGameObject*, std::vector<int>&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1a3700, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, ids);
}

auto ChanceTriggerGameObject::init(char const* frame) -> decltype(init(frame)) {
	using FunctionType = decltype(init(frame))(*)(ChanceTriggerGameObject*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1a34f0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, frame);
}

auto ChanceTriggerGameObject::remapChanceObjects(std::unordered_map<int, int> const* remap) -> decltype(remapChanceObjects(remap)) {
	using FunctionType = decltype(remapChanceObjects(remap))(*)(ChanceTriggerGameObject*, std::unordered_map<int, int> const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1a3540, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, remap);
}

auto ChanceTriggerGameObject::revertChanceRemap() -> decltype(revertChanceRemap()) {
	using FunctionType = decltype(revertChanceRemap())(*)(ChanceTriggerGameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1a3690, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}
