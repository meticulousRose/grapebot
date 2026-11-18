
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/BrowseSmartTemplateLayer.hpp>
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

auto BrowseSmartTemplateLayer::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&BrowseSmartTemplateLayer::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(BrowseSmartTemplateLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4e54e0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto BrowseSmartTemplateLayer::onBack(cocos2d::CCObject* sender) -> decltype(onBack(sender)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCObject*>::func(&BrowseSmartTemplateLayer::onBack), this);
	using FunctionType = decltype(onBack(sender))(*)(BrowseSmartTemplateLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4e5520, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, sender);
}

auto BrowseSmartTemplateLayer::addObjectToPage(cocos2d::CCObject* object, int page) -> decltype(addObjectToPage(object, page)) {
	using FunctionType = decltype(addObjectToPage(object, page))(*)(BrowseSmartTemplateLayer*, cocos2d::CCObject*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4e4e40, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, object, page);
}

auto BrowseSmartTemplateLayer::addPrefabMenuItem(SmartPrefabResult result, int index) -> decltype(addPrefabMenuItem(result, index)) {
	using FunctionType = decltype(addPrefabMenuItem(result, index))(*)(BrowseSmartTemplateLayer*, SmartPrefabResult, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4e4490, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, result, index);
}

auto BrowseSmartTemplateLayer::baseSetup() -> decltype(baseSetup()) {
	using FunctionType = decltype(baseSetup())(*)(BrowseSmartTemplateLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4e4150, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto BrowseSmartTemplateLayer::createDots() -> decltype(createDots()) {
	using FunctionType = decltype(createDots())(*)(BrowseSmartTemplateLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4e4f10, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto BrowseSmartTemplateLayer::createPrefab(std::string key, int id) -> decltype(createPrefab(key, id)) {
	using FunctionType = decltype(createPrefab(key, id))(*)(BrowseSmartTemplateLayer*, std::string, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4e5170, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, key, id);
}

auto BrowseSmartTemplateLayer::goToPage(int page) -> decltype(goToPage(page)) {
	using FunctionType = decltype(goToPage(page))(*)(BrowseSmartTemplateLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4e49b0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, page);
}

auto BrowseSmartTemplateLayer::init(GJSmartTemplate* smartTemplate, SmartBrowseFilter browseFilter) -> decltype(init(smartTemplate, browseFilter)) {
	using FunctionType = decltype(init(smartTemplate, browseFilter))(*)(BrowseSmartTemplateLayer*, GJSmartTemplate*, SmartBrowseFilter);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4e3910, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, smartTemplate, browseFilter);
}

auto BrowseSmartTemplateLayer::onClick(cocos2d::CCObject* sender) -> decltype(onClick(sender)) {
	using FunctionType = decltype(onClick(sender))(*)(BrowseSmartTemplateLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4e4ec0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto BrowseSmartTemplateLayer::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	using FunctionType = decltype(onClose(sender))(*)(BrowseSmartTemplateLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4e5220, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto BrowseSmartTemplateLayer::onTemplateObject(cocos2d::CCObject* sender) -> decltype(onTemplateObject(sender)) {
	using FunctionType = decltype(onTemplateObject(sender))(*)(BrowseSmartTemplateLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4e4ba0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto BrowseSmartTemplateLayer::updateDots() -> decltype(updateDots()) {
	using FunctionType = decltype(updateDots())(*)(BrowseSmartTemplateLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4e4fe0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}
