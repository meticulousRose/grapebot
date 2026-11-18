#include <Geode/cocos/cocoa/CCObject.h>

#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/SecretLayer4.hpp>
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

SecretLayer4::~SecretLayer4() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(SecretLayer4*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x322930, tulip::hook::TulipConvention::Default);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) SecretLayer4(geode::CutoffConstructor, sizeof(SecretLayer4));
		geode::DestructorLock::addLock(this);
	}
}

auto SecretLayer4::create() -> decltype(create()) {
	using FunctionType = decltype(create())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x322bac, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto SecretLayer4::scene() -> decltype(scene()) {
	using FunctionType = decltype(scene())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x322b68, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto SecretLayer4::init() -> decltype(init()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&SecretLayer4::init), this);
	using FunctionType = decltype(init())(*)(SecretLayer4*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x322c84, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto SecretLayer4::onExit() -> decltype(onExit()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&SecretLayer4::onExit), this);
	using FunctionType = decltype(onExit())(*)(SecretLayer4*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x326efc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto SecretLayer4::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&SecretLayer4::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(SecretLayer4*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x326e08, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto SecretLayer4::textInputOpened(CCTextInputNode* node) -> decltype(textInputOpened(node)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&SecretLayer4::textInputOpened), this);
	using FunctionType = decltype(textInputOpened(node))(*)(SecretLayer4*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x325e74, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, node);
}

auto SecretLayer4::textInputClosed(CCTextInputNode* node) -> decltype(textInputClosed(node)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&SecretLayer4::textInputClosed), this);
	using FunctionType = decltype(textInputClosed(node))(*)(SecretLayer4*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x325f54, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, node);
}

auto SecretLayer4::textChanged(CCTextInputNode* node) -> decltype(textChanged(node)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&SecretLayer4::textChanged), this);
	using FunctionType = decltype(textChanged(node))(*)(SecretLayer4*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x326064, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, node);
}

auto SecretLayer4::FLAlert_Clicked(FLAlertLayer* layer, bool btn2) -> decltype(FLAlert_Clicked(layer, btn2)) {
	auto self = addresser::thunkAdjust(Resolve<FLAlertLayer*, bool>::func(&SecretLayer4::FLAlert_Clicked), this);
	using FunctionType = decltype(FLAlert_Clicked(layer, btn2))(*)(SecretLayer4*, FLAlertLayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x325e6c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, layer, btn2);
}

auto SecretLayer4::dialogClosed(DialogLayer* layer) -> decltype(dialogClosed(layer)) {
	auto self = addresser::thunkAdjust(Resolve<DialogLayer*>::func(&SecretLayer4::dialogClosed), this);
	using FunctionType = decltype(dialogClosed(layer))(*)(SecretLayer4*, DialogLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3255fc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, layer);
}

auto SecretLayer4::getBasicMessage() -> decltype(getBasicMessage()) {
	using FunctionType = decltype(getBasicMessage())(*)(SecretLayer4*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x326244, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SecretLayer4::getThreadMessage() -> decltype(getThreadMessage()) {
	using FunctionType = decltype(getThreadMessage())(*)(SecretLayer4*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3266a8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SecretLayer4::nodeWithTag(int tag) -> decltype(nodeWithTag(tag)) {
	using FunctionType = decltype(nodeWithTag(tag))(*)(SecretLayer4*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3238b8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, tag);
}

auto SecretLayer4::onBack(cocos2d::CCObject* sender) -> decltype(onBack(sender)) {
	using FunctionType = decltype(onBack(sender))(*)(SecretLayer4*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x324000, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SecretLayer4::onChest01(cocos2d::CCObject* sender) -> decltype(onChest01(sender)) {
	using FunctionType = decltype(onChest01(sender))(*)(SecretLayer4*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x324d04, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SecretLayer4::onSubmit(cocos2d::CCObject* sender) -> decltype(onSubmit(sender)) {
	using FunctionType = decltype(onSubmit(sender))(*)(SecretLayer4*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x324078, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SecretLayer4::selectAThread() -> decltype(selectAThread()) {
	using FunctionType = decltype(selectAThread())(*)(SecretLayer4*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x326174, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SecretLayer4::showFirstDialog() -> decltype(showFirstDialog()) {
	using FunctionType = decltype(showFirstDialog())(*)(SecretLayer4*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3238f0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}
