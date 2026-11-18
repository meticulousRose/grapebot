
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/MoreVideoOptionsLayer.hpp>
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

auto MoreVideoOptionsLayer::init() -> decltype(init()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&MoreVideoOptionsLayer::init), this);
	using FunctionType = decltype(init())(*)(MoreVideoOptionsLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x882100, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto MoreVideoOptionsLayer::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&MoreVideoOptionsLayer::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(MoreVideoOptionsLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x884240, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto MoreVideoOptionsLayer::layerKey(int page) -> decltype(layerKey(page)) {
	using FunctionType = decltype(layerKey(page))(*)(MoreVideoOptionsLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x883fe0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, page);
}

auto MoreVideoOptionsLayer::objectKey(int page) -> decltype(objectKey(page)) {
	using FunctionType = decltype(objectKey(page))(*)(MoreVideoOptionsLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x883fc0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, page);
}

auto MoreVideoOptionsLayer::onApplyFPS(cocos2d::CCObject* sender) -> decltype(onApplyFPS(sender)) {
	using FunctionType = decltype(onApplyFPS(sender))(*)(MoreVideoOptionsLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8840a0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto MoreVideoOptionsLayer::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	using FunctionType = decltype(onClose(sender))(*)(MoreVideoOptionsLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x882b10, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto MoreVideoOptionsLayer::onToggle(cocos2d::CCObject* sender) -> decltype(onToggle(sender)) {
	using FunctionType = decltype(onToggle(sender))(*)(MoreVideoOptionsLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x883300, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto MoreVideoOptionsLayer::pageKey(int page) -> decltype(pageKey(page)) {
	using FunctionType = decltype(pageKey(page))(*)(MoreVideoOptionsLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x883fa0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, page);
}

auto MoreVideoOptionsLayer::updateFPSButtons() -> decltype(updateFPSButtons()) {
	using FunctionType = decltype(updateFPSButtons())(*)(MoreVideoOptionsLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x884000, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}
