#include <Geode/cocos/cocoa/CCObject.h>

#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/SecretLayer5.hpp>
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

SecretLayer5::~SecretLayer5() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(SecretLayer5*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x26e4e0, tulip::hook::TulipConvention::Default);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) SecretLayer5(geode::CutoffConstructor, sizeof(SecretLayer5));
		geode::DestructorLock::addLock(this);
	}
}

auto SecretLayer5::create() -> decltype(create()) {
	using FunctionType = decltype(create())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x46e850, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto SecretLayer5::scene() -> decltype(scene()) {
	using FunctionType = decltype(scene())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x46e810, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto SecretLayer5::init() -> decltype(init()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&SecretLayer5::init), this);
	using FunctionType = decltype(init())(*)(SecretLayer5*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x46e9a0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto SecretLayer5::onExit() -> decltype(onExit()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&SecretLayer5::onExit), this);
	using FunctionType = decltype(onExit())(*)(SecretLayer5*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x473270, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto SecretLayer5::updateTweenActionInt(float value, int tag) -> decltype(updateTweenActionInt(value, tag)) {
	auto self = addresser::thunkAdjust(Resolve<float, int>::func(&SecretLayer5::updateTweenActionInt), this);
	using FunctionType = decltype(updateTweenActionInt(value, tag))(*)(SecretLayer5*, float, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x470fe0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, value, tag);
}

auto SecretLayer5::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&SecretLayer5::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(SecretLayer5*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x473180, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto SecretLayer5::textInputOpened(CCTextInputNode* node) -> decltype(textInputOpened(node)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&SecretLayer5::textInputOpened), this);
	using FunctionType = decltype(textInputOpened(node))(*)(SecretLayer5*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x472ee0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, node);
}

auto SecretLayer5::textInputClosed(CCTextInputNode* node) -> decltype(textInputClosed(node)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&SecretLayer5::textInputClosed), this);
	using FunctionType = decltype(textInputClosed(node))(*)(SecretLayer5*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x472fb0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, node);
}

auto SecretLayer5::textChanged(CCTextInputNode* node) -> decltype(textChanged(node)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&SecretLayer5::textChanged), this);
	using FunctionType = decltype(textChanged(node))(*)(SecretLayer5*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x473080, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, node);
}

auto SecretLayer5::FLAlert_Clicked(FLAlertLayer* layer, bool btn2) -> decltype(FLAlert_Clicked(layer, btn2)) {
	auto self = addresser::thunkAdjust(Resolve<FLAlertLayer*, bool>::func(&SecretLayer5::FLAlert_Clicked), this);
	using FunctionType = decltype(FLAlert_Clicked(layer, btn2))(*)(SecretLayer5*, FLAlertLayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x472ec0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, layer, btn2);
}

auto SecretLayer5::dialogClosed(DialogLayer* layer) -> decltype(dialogClosed(layer)) {
	auto self = addresser::thunkAdjust(Resolve<DialogLayer*>::func(&SecretLayer5::dialogClosed), this);
	using FunctionType = decltype(dialogClosed(layer))(*)(SecretLayer5*, DialogLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x472ea0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, layer);
}

auto SecretLayer5::onlineRewardStatusFinished(std::string key) -> decltype(onlineRewardStatusFinished(key)) {
	auto self = addresser::thunkAdjust(Resolve<std::string>::func(&SecretLayer5::onlineRewardStatusFinished), this);
	using FunctionType = decltype(onlineRewardStatusFinished(key))(*)(SecretLayer5*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4722a0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, key);
}

auto SecretLayer5::onlineRewardStatusFailed() -> decltype(onlineRewardStatusFailed()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&SecretLayer5::onlineRewardStatusFailed), this);
	using FunctionType = decltype(onlineRewardStatusFailed())(*)(SecretLayer5*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4723f0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto SecretLayer5::animateHead() -> decltype(animateHead()) {
	using FunctionType = decltype(animateHead())(*)(SecretLayer5*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x470c80, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SecretLayer5::claimOnlineReward() -> decltype(claimOnlineReward()) {
	using FunctionType = decltype(claimOnlineReward())(*)(SecretLayer5*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x472040, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SecretLayer5::fadeInMessage() -> decltype(fadeInMessage()) {
	using FunctionType = decltype(fadeInMessage())(*)(SecretLayer5*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x470af0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SecretLayer5::fadeInSubmitMessage() -> decltype(fadeInSubmitMessage()) {
	using FunctionType = decltype(fadeInSubmitMessage())(*)(SecretLayer5*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x470a70, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SecretLayer5::fadeOutMessage() -> decltype(fadeOutMessage()) {
	using FunctionType = decltype(fadeOutMessage())(*)(SecretLayer5*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x470c50, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SecretLayer5::finishLoadingState() -> decltype(finishLoadingState()) {
	using FunctionType = decltype(finishLoadingState())(*)(SecretLayer5*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x471000, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SecretLayer5::getMessage() -> decltype(getMessage()) {
	using FunctionType = decltype(getMessage())(*)(SecretLayer5*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x46fa90, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SecretLayer5::handleSecretResponse() -> decltype(handleSecretResponse()) {
	using FunctionType = decltype(handleSecretResponse())(*)(SecretLayer5*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x471020, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SecretLayer5::hideTextInput() -> decltype(hideTextInput()) {
	using FunctionType = decltype(hideTextInput())(*)(SecretLayer5*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x472490, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SecretLayer5::incrementChatIdx() -> decltype(incrementChatIdx()) {
	using FunctionType = decltype(incrementChatIdx())(*)(SecretLayer5*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x470940, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SecretLayer5::nodeWithTag(int tag) -> decltype(nodeWithTag(tag)) {
	using FunctionType = decltype(nodeWithTag(tag))(*)(SecretLayer5*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x473150, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, tag);
}

auto SecretLayer5::onBack(cocos2d::CCObject* sender) -> decltype(onBack(sender)) {
	using FunctionType = decltype(onBack(sender))(*)(SecretLayer5*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x46fd40, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SecretLayer5::onSubmit(cocos2d::CCObject* sender) -> decltype(onSubmit(sender)) {
	using FunctionType = decltype(onSubmit(sender))(*)(SecretLayer5*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x46fdb0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SecretLayer5::playWinSFX() -> decltype(playWinSFX()) {
	using FunctionType = decltype(playWinSFX())(*)(SecretLayer5*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x471fc0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SecretLayer5::showFailAnimation() -> decltype(showFailAnimation()) {
	using FunctionType = decltype(showFailAnimation())(*)(SecretLayer5*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4719e0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SecretLayer5::showFirstDialog() -> decltype(showFirstDialog()) {
	using FunctionType = decltype(showFirstDialog())(*)(SecretLayer5*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x470370, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SecretLayer5::showSuccessAnimation() -> decltype(showSuccessAnimation()) {
	using FunctionType = decltype(showSuccessAnimation())(*)(SecretLayer5*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4710e0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SecretLayer5::showTextInput() -> decltype(showTextInput()) {
	using FunctionType = decltype(showTextInput())(*)(SecretLayer5*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x471f50, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SecretLayer5::unlockUI() -> decltype(unlockUI()) {
	using FunctionType = decltype(unlockUI())(*)(SecretLayer5*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x472230, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SecretLayer5::updateMessageLabel(std::string text) -> decltype(updateMessageLabel(text)) {
	using FunctionType = decltype(updateMessageLabel(text))(*)(SecretLayer5*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x46fa40, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, text);
}
