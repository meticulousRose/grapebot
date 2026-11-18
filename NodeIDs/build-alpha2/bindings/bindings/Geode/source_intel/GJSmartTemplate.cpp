
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/GJSmartTemplate.hpp>
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

auto GJSmartTemplate::applyTransformationsForType(SmartBlockType type, cocos2d::CCSprite* sprite) -> decltype(applyTransformationsForType(type, sprite)) {
	using FunctionType = decltype(applyTransformationsForType(type, sprite))(*)(SmartBlockType, cocos2d::CCSprite*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x413600, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(type, sprite);
}

auto GJSmartTemplate::create() -> decltype(create()) {
	using FunctionType = decltype(create())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x40ebf0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto GJSmartTemplate::createWithCoder(DS_Dictionary* dict) -> decltype(createWithCoder(dict)) {
	using FunctionType = decltype(createWithCoder(dict))(*)(DS_Dictionary*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x414c80, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(dict);
}

auto GJSmartTemplate::flipBlockType(SmartBlockType type, bool flipX, bool flipY) -> decltype(flipBlockType(type, flipX, flipY)) {
	using FunctionType = decltype(flipBlockType(type, flipX, flipY))(*)(SmartBlockType, bool, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x413870, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(type, flipX, flipY);
}

auto GJSmartTemplate::flipBlockTypeX(SmartBlockType type) -> decltype(flipBlockTypeX(type)) {
	using FunctionType = decltype(flipBlockTypeX(type))(*)(SmartBlockType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x413830, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(type);
}

auto GJSmartTemplate::flipBlockTypeY(SmartBlockType type) -> decltype(flipBlockTypeY(type)) {
	using FunctionType = decltype(flipBlockTypeY(type))(*)(SmartBlockType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x413850, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(type);
}

auto GJSmartTemplate::flipKey(std::string key, bool flipX, bool flipY) -> decltype(flipKey(key, flipX, flipY)) {
	using FunctionType = decltype(flipKey(key, flipX, flipY))(*)(std::string, bool, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x412830, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(key, flipX, flipY);
}

auto GJSmartTemplate::generateRemapDict() -> decltype(generateRemapDict()) {
	using FunctionType = decltype(generateRemapDict())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x413b50, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto GJSmartTemplate::getSimplifiedKey(std::string key) -> decltype(getSimplifiedKey(key)) {
	using FunctionType = decltype(getSimplifiedKey(key))(*)(std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x40faf0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(key);
}

auto GJSmartTemplate::getSimplifiedType(SmartBlockType type, bool& changed) -> decltype(getSimplifiedType(type, changed)) {
	using FunctionType = decltype(getSimplifiedType(type, changed))(*)(SmartBlockType, bool&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4105e0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(type, changed);
}

auto GJSmartTemplate::getVerySimplifiedKey(std::string key) -> decltype(getVerySimplifiedKey(key)) {
	using FunctionType = decltype(getVerySimplifiedKey(key))(*)(std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x410420, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(key);
}

auto GJSmartTemplate::keyFromNeighbors(SmartBlockType type, SmartBlockType left, SmartBlockType right, SmartBlockType top, SmartBlockType bottom, SmartBlockType topLeft, SmartBlockType topRight, SmartBlockType bottomLeft, SmartBlockType bottomRight) -> decltype(keyFromNeighbors(type, left, right, top, bottom, topLeft, topRight, bottomLeft, bottomRight)) {
	using FunctionType = decltype(keyFromNeighbors(type, left, right, top, bottom, topLeft, topRight, bottomLeft, bottomRight))(*)(SmartBlockType, SmartBlockType, SmartBlockType, SmartBlockType, SmartBlockType, SmartBlockType, SmartBlockType, SmartBlockType, SmartBlockType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x410610, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(type, left, right, top, bottom, topLeft, topRight, bottomLeft, bottomRight);
}

auto GJSmartTemplate::keyFromNeighbors(cocos2d::CCPoint position, SmartGameObject* object, SmartGameObject* left, SmartGameObject* right, SmartGameObject* top, SmartGameObject* bottom, SmartGameObject* topLeft, SmartGameObject* topRight, SmartGameObject* bottomLeft, SmartGameObject* bottomRight) -> decltype(keyFromNeighbors(position, object, left, right, top, bottom, topLeft, topRight, bottomLeft, bottomRight)) {
	using FunctionType = decltype(keyFromNeighbors(position, object, left, right, top, bottom, topLeft, topRight, bottomLeft, bottomRight))(*)(cocos2d::CCPoint, SmartGameObject*, SmartGameObject*, SmartGameObject*, SmartGameObject*, SmartGameObject*, SmartGameObject*, SmartGameObject*, SmartGameObject*, SmartGameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x412bd0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(position, object, left, right, top, bottom, topLeft, topRight, bottomLeft, bottomRight);
}

auto GJSmartTemplate::keyFromNeighborsOld(bool left, bool right, bool top, bool bottom, bool topLeft, bool topRight, bool bottomLeft, bool bottomRight) -> decltype(keyFromNeighborsOld(left, right, top, bottom, topLeft, topRight, bottomLeft, bottomRight)) {
	using FunctionType = decltype(keyFromNeighborsOld(left, right, top, bottom, topLeft, topRight, bottomLeft, bottomRight))(*)(bool, bool, bool, bool, bool, bool, bool, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4138e0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(left, right, top, bottom, topLeft, topRight, bottomLeft, bottomRight);
}

auto GJSmartTemplate::offsetForDir(GJSmartDirection direction, int key) -> decltype(offsetForDir(direction, key)) {
	using FunctionType = decltype(offsetForDir(direction, key))(*)(GJSmartDirection, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x413060, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(direction, key);
}

auto GJSmartTemplate::offsetForObject(SmartGameObject* object) -> decltype(offsetForObject(object)) {
	using FunctionType = decltype(offsetForObject(object))(*)(SmartGameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x413150, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(object);
}

auto GJSmartTemplate::offsetForType(SmartBlockType type) -> decltype(offsetForType(type)) {
	using FunctionType = decltype(offsetForType(type))(*)(SmartBlockType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x413470, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(type);
}

auto GJSmartTemplate::rotateBlockType(SmartBlockType type, int degrees) -> decltype(rotateBlockType(type, degrees)) {
	using FunctionType = decltype(rotateBlockType(type, degrees))(*)(SmartBlockType, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x413780, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(type, degrees);
}

auto GJSmartTemplate::rotateBlockType90(SmartBlockType type) -> decltype(rotateBlockType90(type)) {
	using FunctionType = decltype(rotateBlockType90(type))(*)(SmartBlockType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x413750, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(type);
}

auto GJSmartTemplate::rotateKey(std::string key, int degrees) -> decltype(rotateKey(key, degrees)) {
	using FunctionType = decltype(rotateKey(key, degrees))(*)(std::string, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x411440, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(key, degrees);
}

auto GJSmartTemplate::shouldDiscardObject(SmartBlockType type, GJSmartDirection direction) -> decltype(shouldDiscardObject(type, direction)) {
	using FunctionType = decltype(shouldDiscardObject(type, direction))(*)(SmartBlockType, GJSmartDirection);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x413540, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(type, direction);
}

auto GJSmartTemplate::smartObjectToType(SmartGameObject* object, cocos2d::CCPoint point) -> decltype(smartObjectToType(object, point)) {
	using FunctionType = decltype(smartObjectToType(object, point))(*)(SmartGameObject*, cocos2d::CCPoint);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4131b0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(object, point);
}

auto GJSmartTemplate::smartTypeToObjectKey(SmartBlockType type) -> decltype(smartTypeToObjectKey(type)) {
	using FunctionType = decltype(smartTypeToObjectKey(type))(*)(SmartBlockType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x413730, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(type);
}

auto GJSmartTemplate::encodeWithCoder(DS_Dictionary* dict) -> decltype(encodeWithCoder(dict)) {
	auto self = addresser::thunkAdjust(Resolve<DS_Dictionary*>::func(&GJSmartTemplate::encodeWithCoder), this);
	using FunctionType = decltype(encodeWithCoder(dict))(*)(GJSmartTemplate*, DS_Dictionary*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x415050, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, dict);
}

auto GJSmartTemplate::canEncode() -> decltype(canEncode()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GJSmartTemplate::canEncode), this);
	using FunctionType = decltype(canEncode())(*)(GJSmartTemplate*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x414c70, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GJSmartTemplate::dataLoaded(DS_Dictionary* dict) -> decltype(dataLoaded(dict)) {
	using FunctionType = decltype(dataLoaded(dict))(*)(GJSmartTemplate*, DS_Dictionary*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x414d30, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, dict);
}

auto GJSmartTemplate::getNoCornerKey(std::string key) -> decltype(getNoCornerKey(key)) {
	using FunctionType = decltype(getNoCornerKey(key))(*)(GJSmartTemplate*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4102e0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, key);
}

auto GJSmartTemplate::getPrefab(std::string key, bool flipX, bool flipY) -> decltype(getPrefab(key, flipX, flipY)) {
	using FunctionType = decltype(getPrefab(key, flipX, flipY))(*)(GJSmartTemplate*, std::string, bool, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x411c90, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, key, flipX, flipY);
}

auto GJSmartTemplate::getPrefab(cocos2d::CCPoint position, SmartGameObject* object, SmartGameObject* left, SmartGameObject* right, SmartGameObject* top, SmartGameObject* bottom, SmartGameObject* topLeft, SmartGameObject* topRight, SmartGameObject* bottomLeft, SmartGameObject* bottomRight) -> decltype(getPrefab(position, object, left, right, top, bottom, topLeft, topRight, bottomLeft, bottomRight)) {
	using FunctionType = decltype(getPrefab(position, object, left, right, top, bottom, topLeft, topRight, bottomLeft, bottomRight))(*)(GJSmartTemplate*, cocos2d::CCPoint, SmartGameObject*, SmartGameObject*, SmartGameObject*, SmartGameObject*, SmartGameObject*, SmartGameObject*, SmartGameObject*, SmartGameObject*, SmartGameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x412b10, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, position, object, left, right, top, bottom, topLeft, topRight, bottomLeft, bottomRight);
}

auto GJSmartTemplate::getPrefabs(std::string key) -> decltype(getPrefabs(key)) {
	using FunctionType = decltype(getPrefabs(key))(*)(GJSmartTemplate*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x412b00, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, key);
}

auto GJSmartTemplate::getPrefabWithID(std::string key, int id) -> decltype(getPrefabWithID(key, id)) {
	using FunctionType = decltype(getPrefabWithID(key, id))(*)(GJSmartTemplate*, std::string, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x412f60, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, key, id);
}

auto GJSmartTemplate::getRandomPrefab(std::string key) -> decltype(getRandomPrefab(key)) {
	using FunctionType = decltype(getRandomPrefab(key))(*)(GJSmartTemplate*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4112a0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, key);
}

auto GJSmartTemplate::getTemplateState(std::vector<SmartPrefabResult>& results) -> decltype(getTemplateState(results)) {
	using FunctionType = decltype(getTemplateState(results))(*)(GJSmartTemplate*, std::vector<SmartPrefabResult>&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x414600, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, results);
}

auto GJSmartTemplate::getTotalChanceForPrefab(std::string key) -> decltype(getTotalChanceForPrefab(key)) {
	using FunctionType = decltype(getTotalChanceForPrefab(key))(*)(GJSmartTemplate*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x412a40, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, key);
}

auto GJSmartTemplate::init() -> decltype(init()) {
	using FunctionType = decltype(init())(*)(GJSmartTemplate*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x40ec90, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJSmartTemplate::isUnrequired(std::string key) -> decltype(isUnrequired(key)) {
	using FunctionType = decltype(isUnrequired(key))(*)(GJSmartTemplate*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4144c0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, key);
}

auto GJSmartTemplate::logTemplateStatus(bool unused) -> decltype(logTemplateStatus(unused)) {
	using FunctionType = decltype(logTemplateStatus(unused))(*)(GJSmartTemplate*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x413fe0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, unused);
}

auto GJSmartTemplate::removePrefab(std::string prefabKey, int prefabID) -> decltype(removePrefab(prefabKey, prefabID)) {
	using FunctionType = decltype(removePrefab(prefabKey, prefabID))(*)(GJSmartTemplate*, std::string, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x412fd0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, prefabKey, prefabID);
}

auto GJSmartTemplate::resetScannedPrefabs() -> decltype(resetScannedPrefabs()) {
	using FunctionType = decltype(resetScannedPrefabs())(*)(GJSmartTemplate*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4106d0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJSmartTemplate::savePrefab(std::string key, std::string data) -> decltype(savePrefab(key, data)) {
	using FunctionType = decltype(savePrefab(key, data))(*)(GJSmartTemplate*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x40ed40, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, key, data);
}

auto GJSmartTemplate::saveRemap(std::string key) -> decltype(saveRemap(key)) {
	using FunctionType = decltype(saveRemap(key))(*)(GJSmartTemplate*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x40efb0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, key);
}

auto GJSmartTemplate::saveRemapToDict(std::string key, std::string remap, cocos2d::CCDictionary* dict) -> decltype(saveRemapToDict(key, remap, dict)) {
	using FunctionType = decltype(saveRemapToDict(key, remap, dict))(*)(GJSmartTemplate*, std::string, std::string, cocos2d::CCDictionary*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4100f0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, key, remap, dict);
}

auto GJSmartTemplate::scanForPrefab(std::string key) -> decltype(scanForPrefab(key)) {
	using FunctionType = decltype(scanForPrefab(key))(*)(GJSmartTemplate*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x410700, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, key);
}
