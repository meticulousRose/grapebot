
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/TutorialLayer.hpp>
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

auto TutorialLayer::init() -> decltype(init()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&TutorialLayer::init), this);
	using FunctionType = decltype(init())(*)(TutorialLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4d7830, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto TutorialLayer::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&TutorialLayer::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(TutorialLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4d8260, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto TutorialLayer::loadPage(int page) -> decltype(loadPage(page)) {
	using FunctionType = decltype(loadPage(page))(*)(TutorialLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4d7db0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, page);
}

auto TutorialLayer::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	using FunctionType = decltype(onClose(sender))(*)(TutorialLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4d7c90, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto TutorialLayer::onNext(cocos2d::CCObject* sender) -> decltype(onNext(sender)) {
	using FunctionType = decltype(onNext(sender))(*)(TutorialLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4d7d10, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto TutorialLayer::removeTutorialTexture() -> decltype(removeTutorialTexture()) {
	using FunctionType = decltype(removeTutorialTexture())(*)(TutorialLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4d8220, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}
