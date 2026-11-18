#include <Geode/cocos/cocoa/CCObject.h>

#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/GJGarageLayer.hpp>
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

GJGarageLayer::~GJGarageLayer() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(GJGarageLayer*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x352320, tulip::hook::TulipConvention::Default);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) GJGarageLayer(geode::CutoffConstructor, sizeof(GJGarageLayer));
		geode::DestructorLock::addLock(this);
	}
}

auto GJGarageLayer::achievementForUnlock(int id, UnlockType type) -> decltype(achievementForUnlock(id, type)) {
	using FunctionType = decltype(achievementForUnlock(id, type))(*)(int, UnlockType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x358d80, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(id, type);
}

auto GJGarageLayer::descriptionForUnlock(int id, UnlockType type) -> decltype(descriptionForUnlock(id, type)) {
	using FunctionType = decltype(descriptionForUnlock(id, type))(*)(int, UnlockType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x358c00, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(id, type);
}

auto GJGarageLayer::node() -> decltype(node()) {
	using FunctionType = decltype(node())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x352520, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto GJGarageLayer::scene() -> decltype(scene()) {
	using FunctionType = decltype(scene())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3524e0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto GJGarageLayer::titleForUnlock(int id, UnlockType type) -> decltype(titleForUnlock(id, type)) {
	using FunctionType = decltype(titleForUnlock(id, type))(*)(int, UnlockType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x358a90, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(id, type);
}

auto GJGarageLayer::init() -> decltype(init()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GJGarageLayer::init), this);
	using FunctionType = decltype(init())(*)(GJGarageLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x352690, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GJGarageLayer::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GJGarageLayer::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(GJGarageLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x359340, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GJGarageLayer::textInputOpened(CCTextInputNode* node) -> decltype(textInputOpened(node)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&GJGarageLayer::textInputOpened), this);
	using FunctionType = decltype(textInputOpened(node))(*)(GJGarageLayer*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x355b50, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, node);
}

auto GJGarageLayer::textInputClosed(CCTextInputNode* node) -> decltype(textInputClosed(node)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&GJGarageLayer::textInputClosed), this);
	using FunctionType = decltype(textInputClosed(node))(*)(GJGarageLayer*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x355c80, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, node);
}

auto GJGarageLayer::textChanged(CCTextInputNode* node) -> decltype(textChanged(node)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&GJGarageLayer::textChanged), this);
	using FunctionType = decltype(textChanged(node))(*)(GJGarageLayer*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x355e40, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, node);
}

auto GJGarageLayer::listButtonBarSwitchedPage(ListButtonBar* bar, int page) -> decltype(listButtonBarSwitchedPage(bar, page)) {
	auto self = addresser::thunkAdjust(Resolve<ListButtonBar*, int>::func(&GJGarageLayer::listButtonBarSwitchedPage), this);
	using FunctionType = decltype(listButtonBarSwitchedPage(bar, page))(*)(GJGarageLayer*, ListButtonBar*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x358250, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, bar, page);
}

auto GJGarageLayer::showUnlockPopup(int id, UnlockType type) -> decltype(showUnlockPopup(id, type)) {
	auto self = addresser::thunkAdjust(Resolve<int, UnlockType>::func(&GJGarageLayer::showUnlockPopup), this);
	using FunctionType = decltype(showUnlockPopup(id, type))(*)(GJGarageLayer*, int, UnlockType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x358490, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, id, type);
}

auto GJGarageLayer::updateRate() -> decltype(updateRate()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GJGarageLayer::updateRate), this);
	using FunctionType = decltype(updateRate())(*)(GJGarageLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3590f0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GJGarageLayer::FLAlert_Clicked(FLAlertLayer* layer, bool btn2) -> decltype(FLAlert_Clicked(layer, btn2)) {
	auto self = addresser::thunkAdjust(Resolve<FLAlertLayer*, bool>::func(&GJGarageLayer::FLAlert_Clicked), this);
	using FunctionType = decltype(FLAlert_Clicked(layer, btn2))(*)(GJGarageLayer*, FLAlertLayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x358e80, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, layer, btn2);
}

auto GJGarageLayer::dialogClosed(DialogLayer* layer) -> decltype(dialogClosed(layer)) {
	auto self = addresser::thunkAdjust(Resolve<DialogLayer*>::func(&GJGarageLayer::dialogClosed), this);
	using FunctionType = decltype(dialogClosed(layer))(*)(GJGarageLayer*, DialogLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x358f90, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, layer);
}

auto GJGarageLayer::playerColorChanged() -> decltype(playerColorChanged()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GJGarageLayer::playerColorChanged), this);
	using FunctionType = decltype(playerColorChanged())(*)(GJGarageLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x358150, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GJGarageLayer::rewardedVideoFinished() -> decltype(rewardedVideoFinished()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GJGarageLayer::rewardedVideoFinished), this);
	using FunctionType = decltype(rewardedVideoFinished())(*)(GJGarageLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x355b30, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GJGarageLayer::getItems(IconType type) -> decltype(getItems(type)) {
	using FunctionType = decltype(getItems(type))(*)(GJGarageLayer*, IconType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x357220, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, type);
}

auto GJGarageLayer::getItems(int count, int page, IconType type, int current) -> decltype(getItems(count, page, type, current)) {
	using FunctionType = decltype(getItems(count, page, type, current))(*)(GJGarageLayer*, int, int, IconType, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x356ea0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, count, page, type, current);
}

auto GJGarageLayer::getLockFrame(int id, UnlockType type) -> decltype(getLockFrame(id, type)) {
	using FunctionType = decltype(getLockFrame(id, type))(*)(GJGarageLayer*, int, UnlockType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3580b0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id, type);
}

auto GJGarageLayer::onArrow(cocos2d::CCObject* sender) -> decltype(onArrow(sender)) {
	using FunctionType = decltype(onArrow(sender))(*)(GJGarageLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x355ed0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto GJGarageLayer::onBack(cocos2d::CCObject* sender) -> decltype(onBack(sender)) {
	using FunctionType = decltype(onBack(sender))(*)(GJGarageLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x355330, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto GJGarageLayer::onInfo(cocos2d::CCObject* sender) -> decltype(onInfo(sender)) {
	using FunctionType = decltype(onInfo(sender))(*)(GJGarageLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x355590, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto GJGarageLayer::onNavigate(cocos2d::CCObject* sender) -> decltype(onNavigate(sender)) {
	using FunctionType = decltype(onNavigate(sender))(*)(GJGarageLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3567b0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto GJGarageLayer::onPaint(cocos2d::CCObject* sender) -> decltype(onPaint(sender)) {
	using FunctionType = decltype(onPaint(sender))(*)(GJGarageLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x355530, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto GJGarageLayer::onSelect(cocos2d::CCObject* sender) -> decltype(onSelect(sender)) {
	using FunctionType = decltype(onSelect(sender))(*)(GJGarageLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3572d0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto GJGarageLayer::onSelectTab(cocos2d::CCObject* sender) -> decltype(onSelectTab(sender)) {
	using FunctionType = decltype(onSelectTab(sender))(*)(GJGarageLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x355ea0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto GJGarageLayer::onShards(cocos2d::CCObject* sender) -> decltype(onShards(sender)) {
	using FunctionType = decltype(onShards(sender))(*)(GJGarageLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x355500, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto GJGarageLayer::onShop(cocos2d::CCObject* sender) -> decltype(onShop(sender)) {
	using FunctionType = decltype(onShop(sender))(*)(GJGarageLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3554a0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto GJGarageLayer::onSpecial(cocos2d::CCObject* sender) -> decltype(onSpecial(sender)) {
	using FunctionType = decltype(onSpecial(sender))(*)(GJGarageLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x357200, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto GJGarageLayer::onToggleItem(cocos2d::CCObject* sender) -> decltype(onToggleItem(sender)) {
	using FunctionType = decltype(onToggleItem(sender))(*)(GJGarageLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x357b30, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto GJGarageLayer::playRainbowEffect() -> decltype(playRainbowEffect()) {
	using FunctionType = decltype(playRainbowEffect())(*)(GJGarageLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x357f10, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJGarageLayer::playShadowEffect() -> decltype(playShadowEffect()) {
	using FunctionType = decltype(playShadowEffect())(*)(GJGarageLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3592b0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJGarageLayer::selectTab(IconType type) -> decltype(selectTab(type)) {
	using FunctionType = decltype(selectTab(type))(*)(GJGarageLayer*, IconType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x25e120, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, type);
}

auto GJGarageLayer::setupIconSelect() -> decltype(setupIconSelect()) {
	using FunctionType = decltype(setupIconSelect())(*)(GJGarageLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x354840, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJGarageLayer::setupPage(int page, IconType type) -> decltype(setupPage(page, type)) {
	using FunctionType = decltype(setupPage(page, type))(*)(GJGarageLayer*, int, IconType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x356160, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, page, type);
}

auto GJGarageLayer::setupSpecialPage() -> decltype(setupSpecialPage()) {
	using FunctionType = decltype(setupSpecialPage())(*)(GJGarageLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3567e0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJGarageLayer::showUnlockPopupNew(int id, UnlockType type) -> decltype(showUnlockPopupNew(id, type)) {
	using FunctionType = decltype(showUnlockPopupNew(id, type))(*)(GJGarageLayer*, int, UnlockType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x358270, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id, type);
}

auto GJGarageLayer::toggleGlow() -> decltype(toggleGlow()) {
	using FunctionType = decltype(toggleGlow())(*)(GJGarageLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3580e0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJGarageLayer::updatePlayerColors() -> decltype(updatePlayerColors()) {
	using FunctionType = decltype(updatePlayerColors())(*)(GJGarageLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x354230, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJGarageLayer::updatePlayerName(char const* name) -> decltype(updatePlayerName(name)) {
	using FunctionType = decltype(updatePlayerName(name))(*)(GJGarageLayer*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x355c60, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, name);
}
