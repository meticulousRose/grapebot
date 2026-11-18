
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/NewgroundsInfoLayer.hpp>
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

auto NewgroundsInfoLayer::init() -> decltype(init()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&NewgroundsInfoLayer::init), this);
	using FunctionType = decltype(init())(*)(NewgroundsInfoLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1ac350, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto NewgroundsInfoLayer::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&NewgroundsInfoLayer::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(NewgroundsInfoLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1acc68, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto NewgroundsInfoLayer::onArtists(cocos2d::CCObject* sender) -> decltype(onArtists(sender)) {
	using FunctionType = decltype(onArtists(sender))(*)(NewgroundsInfoLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1acae0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto NewgroundsInfoLayer::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	using FunctionType = decltype(onClose(sender))(*)(NewgroundsInfoLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1acaa4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto NewgroundsInfoLayer::onGuidelines(cocos2d::CCObject* sender) -> decltype(onGuidelines(sender)) {
	using FunctionType = decltype(onGuidelines(sender))(*)(NewgroundsInfoLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1acb38, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto NewgroundsInfoLayer::onNewgrounds(cocos2d::CCObject* sender) -> decltype(onNewgrounds(sender)) {
	using FunctionType = decltype(onNewgrounds(sender))(*)(NewgroundsInfoLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1acb14, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto NewgroundsInfoLayer::onSupporter(cocos2d::CCObject* sender) -> decltype(onSupporter(sender)) {
	using FunctionType = decltype(onSupporter(sender))(*)(NewgroundsInfoLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1acb5c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}
