#include <Geode/cocos/cocoa/CCObject.h>

#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/SecretLayer.hpp>
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

SecretLayer::~SecretLayer() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(SecretLayer*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x61d494, tulip::hook::TulipConvention::Default);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) SecretLayer(geode::CutoffConstructor, sizeof(SecretLayer));
		geode::DestructorLock::addLock(this);
	}
}

auto SecretLayer::scene() -> decltype(scene()) {
	using FunctionType = decltype(scene())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5e8734, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto SecretLayer::init() -> decltype(init()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&SecretLayer::init), this);
	using FunctionType = decltype(init())(*)(SecretLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5e88f4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto SecretLayer::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&SecretLayer::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(SecretLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5ec270, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto SecretLayer::textInputOpened(CCTextInputNode* node) -> decltype(textInputOpened(node)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&SecretLayer::textInputOpened), this);
	using FunctionType = decltype(textInputOpened(node))(*)(SecretLayer*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5eb43c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, node);
}

auto SecretLayer::textInputClosed(CCTextInputNode* node) -> decltype(textInputClosed(node)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&SecretLayer::textInputClosed), this);
	using FunctionType = decltype(textInputClosed(node))(*)(SecretLayer*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5eb51c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, node);
}

auto SecretLayer::textChanged(CCTextInputNode* node) -> decltype(textChanged(node)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&SecretLayer::textChanged), this);
	using FunctionType = decltype(textChanged(node))(*)(SecretLayer*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5eb62c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, node);
}

auto SecretLayer::FLAlert_Clicked(FLAlertLayer* layer, bool btn2) -> decltype(FLAlert_Clicked(layer, btn2)) {
	auto self = addresser::thunkAdjust(Resolve<FLAlertLayer*, bool>::func(&SecretLayer::FLAlert_Clicked), this);
	using FunctionType = decltype(FLAlert_Clicked(layer, btn2))(*)(SecretLayer*, FLAlertLayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5eb434, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, layer, btn2);
}

auto SecretLayer::getBasicMessage() -> decltype(getBasicMessage()) {
	using FunctionType = decltype(getBasicMessage())(*)(SecretLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5eade8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SecretLayer::getMessage() -> decltype(getMessage()) {
	using FunctionType = decltype(getMessage())(*)(SecretLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5e94c8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SecretLayer::getThreadMessage() -> decltype(getThreadMessage()) {
	using FunctionType = decltype(getThreadMessage())(*)(SecretLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5eb80c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SecretLayer::nodeWithTag(int tag) -> decltype(nodeWithTag(tag)) {
	using FunctionType = decltype(nodeWithTag(tag))(*)(SecretLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5e943c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, tag);
}

auto SecretLayer::onBack(cocos2d::CCObject* sender) -> decltype(onBack(sender)) {
	using FunctionType = decltype(onBack(sender))(*)(SecretLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5e97b8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SecretLayer::onSubmit(cocos2d::CCObject* sender) -> decltype(onSubmit(sender)) {
	using FunctionType = decltype(onSubmit(sender))(*)(SecretLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5e9824, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SecretLayer::selectAThread() -> decltype(selectAThread()) {
	using FunctionType = decltype(selectAThread())(*)(SecretLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5eb73c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SecretLayer::updateMessageLabel(std::string text) -> decltype(updateMessageLabel(text)) {
	using FunctionType = decltype(updateMessageLabel(text))(*)(SecretLayer*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5e9474, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, text);
}
