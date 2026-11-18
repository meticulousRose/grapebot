
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/SetupAnimationPopup.hpp>
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

auto SetupAnimationPopup::determineStartValues() -> decltype(determineStartValues()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&SetupAnimationPopup::determineStartValues), this);
	using FunctionType = decltype(determineStartValues())(*)(SetupAnimationPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x343ea0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto SetupAnimationPopup::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCObject*>::func(&SetupAnimationPopup::onClose), this);
	using FunctionType = decltype(onClose(sender))(*)(SetupAnimationPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x34420c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, sender);
}

auto SetupAnimationPopup::textChanged(CCTextInputNode* node) -> decltype(textChanged(node)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&SetupAnimationPopup::textChanged), this);
	using FunctionType = decltype(textChanged(node))(*)(SetupAnimationPopup*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x343ffc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, node);
}

auto SetupAnimationPopup::onAnimationIDArrow(cocos2d::CCObject* sender) -> decltype(onAnimationIDArrow(sender)) {
	using FunctionType = decltype(onAnimationIDArrow(sender))(*)(SetupAnimationPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x343bf8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetupAnimationPopup::updateAnimationID() -> decltype(updateAnimationID()) {
	using FunctionType = decltype(updateAnimationID())(*)(SetupAnimationPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5d6328, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}
