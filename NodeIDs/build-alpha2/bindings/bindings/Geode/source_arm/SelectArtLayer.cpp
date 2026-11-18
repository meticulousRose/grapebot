
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/SelectArtLayer.hpp>
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

auto SelectArtLayer::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&SelectArtLayer::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(SelectArtLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x202968, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto SelectArtLayer::init(SelectArtType type, int index) -> decltype(init(type, index)) {
	using FunctionType = decltype(init(type, index))(*)(SelectArtLayer*, SelectArtType, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x201de0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, type, index);
}

auto SelectArtLayer::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	using FunctionType = decltype(onClose(sender))(*)(SelectArtLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x202860, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SelectArtLayer::onSelectCustom(cocos2d::CCObject* sender) -> decltype(onSelectCustom(sender)) {
	using FunctionType = decltype(onSelectCustom(sender))(*)(SelectArtLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2028c0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SelectArtLayer::selectArt(cocos2d::CCObject* sender) -> decltype(selectArt(sender)) {
	using FunctionType = decltype(selectArt(sender))(*)(SelectArtLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x202778, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SelectArtLayer::updateSelectedCustom(int idx) -> decltype(updateSelectedCustom(idx)) {
	using FunctionType = decltype(updateSelectedCustom(idx))(*)(SelectArtLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2018b4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, idx);
}
