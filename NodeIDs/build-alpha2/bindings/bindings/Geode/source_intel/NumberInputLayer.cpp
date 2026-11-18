
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/NumberInputLayer.hpp>
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

auto NumberInputLayer::init() -> decltype(init()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&NumberInputLayer::init), this);
	using FunctionType = decltype(init())(*)(NumberInputLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x489360, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto NumberInputLayer::registerWithTouchDispatcher() -> decltype(registerWithTouchDispatcher()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&NumberInputLayer::registerWithTouchDispatcher), this);
	using FunctionType = decltype(registerWithTouchDispatcher())(*)(NumberInputLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x48a260, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto NumberInputLayer::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&NumberInputLayer::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(NumberInputLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x48a1f0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto NumberInputLayer::onDone(cocos2d::CCObject* sender) -> decltype(onDone(sender)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCObject*>::func(&NumberInputLayer::onDone), this);
	using FunctionType = decltype(onDone(sender))(*)(NumberInputLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x48a1a0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, sender);
}

auto NumberInputLayer::deleteLast() -> decltype(deleteLast()) {
	using FunctionType = decltype(deleteLast())(*)(NumberInputLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2922b0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto NumberInputLayer::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	using FunctionType = decltype(onClose(sender))(*)(NumberInputLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4357b0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto NumberInputLayer::onNumber(cocos2d::CCObject* sender) -> decltype(onNumber(sender)) {
	using FunctionType = decltype(onNumber(sender))(*)(NumberInputLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x895b60, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}
