
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/GJAccountSettingsLayer.hpp>
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

auto GJAccountSettingsLayer::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GJAccountSettingsLayer::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(GJAccountSettingsLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2323d8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GJAccountSettingsLayer::closeAccInputNodes(cocos2d::CCArray* nodes) -> decltype(closeAccInputNodes(nodes)) {
	using FunctionType = decltype(closeAccInputNodes(nodes))(*)(GJAccountSettingsLayer*, cocos2d::CCArray*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2315fc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, nodes);
}

auto GJAccountSettingsLayer::createToggleButton(std::string label, cocos2d::SEL_MenuHandler selector, bool toggled, cocos2d::CCMenu* menu, cocos2d::CCPoint position, float width, float scale) -> decltype(createToggleButton(label, selector, toggled, menu, position, width, scale)) {
	using FunctionType = decltype(createToggleButton(label, selector, toggled, menu, position, width, scale))(*)(GJAccountSettingsLayer*, std::string, cocos2d::SEL_MenuHandler, bool, cocos2d::CCMenu*, cocos2d::CCPoint, float, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2307cc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, label, selector, toggled, menu, position, width, scale);
}

auto GJAccountSettingsLayer::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	using FunctionType = decltype(onClose(sender))(*)(GJAccountSettingsLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x230c58, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto GJAccountSettingsLayer::updateScoreValues() -> decltype(updateScoreValues()) {
	using FunctionType = decltype(updateScoreValues())(*)(GJAccountSettingsLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x231c68, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}
