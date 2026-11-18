
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/BrowseSmartKeyLayer.hpp>
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

auto BrowseSmartKeyLayer::create(GJSmartTemplate* smartTemplate, std::string prefabKey) -> decltype(create(smartTemplate, prefabKey)) {
	using FunctionType = decltype(create(smartTemplate, prefabKey))(*)(GJSmartTemplate*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x443fa4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(smartTemplate, prefabKey);
}

auto BrowseSmartKeyLayer::onBack(cocos2d::CCObject* sender) -> decltype(onBack(sender)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCObject*>::func(&BrowseSmartKeyLayer::onBack), this);
	using FunctionType = decltype(onBack(sender))(*)(BrowseSmartKeyLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x445620, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, sender);
}

auto BrowseSmartKeyLayer::addChanceToSelected(int chance, bool zero) -> decltype(addChanceToSelected(chance, zero)) {
	using FunctionType = decltype(addChanceToSelected(chance, zero))(*)(BrowseSmartKeyLayer*, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x445198, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, chance, zero);
}

auto BrowseSmartKeyLayer::createTemplateObjects() -> decltype(createTemplateObjects()) {
	using FunctionType = decltype(createTemplateObjects())(*)(BrowseSmartKeyLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x444de4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto BrowseSmartKeyLayer::deletedSelectedItems() -> decltype(deletedSelectedItems()) {
	using FunctionType = decltype(deletedSelectedItems())(*)(BrowseSmartKeyLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x445014, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto BrowseSmartKeyLayer::getAllSelectedBlocks() -> decltype(getAllSelectedBlocks()) {
	using FunctionType = decltype(getAllSelectedBlocks())(*)(BrowseSmartKeyLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x44537c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto BrowseSmartKeyLayer::init(GJSmartTemplate* smartTemplate, std::string prefabKey) -> decltype(init(smartTemplate, prefabKey)) {
	using FunctionType = decltype(init(smartTemplate, prefabKey))(*)(BrowseSmartKeyLayer*, GJSmartTemplate*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x444354, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, smartTemplate, prefabKey);
}

auto BrowseSmartKeyLayer::onButton(cocos2d::CCObject* sender) -> decltype(onButton(sender)) {
	using FunctionType = decltype(onButton(sender))(*)(BrowseSmartKeyLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x444d40, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto BrowseSmartKeyLayer::onPrefabObject(cocos2d::CCObject* sender) -> decltype(onPrefabObject(sender)) {
	using FunctionType = decltype(onPrefabObject(sender))(*)(BrowseSmartKeyLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x444d14, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto BrowseSmartKeyLayer::updateChanceValues() -> decltype(updateChanceValues()) {
	using FunctionType = decltype(updateChanceValues())(*)(BrowseSmartKeyLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x445444, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}
