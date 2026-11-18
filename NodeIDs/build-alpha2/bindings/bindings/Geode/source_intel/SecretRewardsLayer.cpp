#include <Geode/cocos/cocoa/CCObject.h>

#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/SecretRewardsLayer.hpp>
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

SecretRewardsLayer::~SecretRewardsLayer() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(SecretRewardsLayer*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x70c8d0, tulip::hook::TulipConvention::Default);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) SecretRewardsLayer(geode::CutoffConstructor, sizeof(SecretRewardsLayer));
		geode::DestructorLock::addLock(this);
	}
}

auto SecretRewardsLayer::create(bool fromShop) -> decltype(create(fromShop)) {
	using FunctionType = decltype(create(fromShop))(*)(bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x70cba0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(fromShop);
}

auto SecretRewardsLayer::scene(bool fromShop) -> decltype(scene(fromShop)) {
	using FunctionType = decltype(scene(fromShop))(*)(bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x70cb60, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(fromShop);
}

auto SecretRewardsLayer::onExit() -> decltype(onExit()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&SecretRewardsLayer::onExit), this);
	using FunctionType = decltype(onExit())(*)(SecretRewardsLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x717060, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto SecretRewardsLayer::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&SecretRewardsLayer::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(SecretRewardsLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x716f90, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto SecretRewardsLayer::dialogClosed(DialogLayer* layer) -> decltype(dialogClosed(layer)) {
	auto self = addresser::thunkAdjust(Resolve<DialogLayer*>::func(&SecretRewardsLayer::dialogClosed), this);
	using FunctionType = decltype(dialogClosed(layer))(*)(SecretRewardsLayer*, DialogLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x716da0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, layer);
}

auto SecretRewardsLayer::scrollLayerMoved(cocos2d::CCPoint position) -> decltype(scrollLayerMoved(position)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCPoint>::func(&SecretRewardsLayer::scrollLayerMoved), this);
	using FunctionType = decltype(scrollLayerMoved(position))(*)(SecretRewardsLayer*, cocos2d::CCPoint);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x70f660, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, position);
}

auto SecretRewardsLayer::createSecondaryLayer(int chestType) -> decltype(createSecondaryLayer(chestType)) {
	using FunctionType = decltype(createSecondaryLayer(chestType))(*)(SecretRewardsLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x710250, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, chestType);
}

auto SecretRewardsLayer::fadeInMusic() -> decltype(fadeInMusic()) {
	using FunctionType = decltype(fadeInMusic())(*)(SecretRewardsLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x716ef0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SecretRewardsLayer::fadeInOutMusic() -> decltype(fadeInOutMusic()) {
	using FunctionType = decltype(fadeInOutMusic())(*)(SecretRewardsLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x716f60, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SecretRewardsLayer::generateChestItems(int chestType) -> decltype(generateChestItems(chestType)) {
	using FunctionType = decltype(generateChestItems(chestType))(*)(SecretRewardsLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x7106d0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, chestType);
}

auto SecretRewardsLayer::getPageColor(int page) -> decltype(getPageColor(page)) {
	using FunctionType = decltype(getPageColor(page))(*)(SecretRewardsLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x70f830, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, page);
}

auto SecretRewardsLayer::goToPage(int page) -> decltype(goToPage(page)) {
	using FunctionType = decltype(goToPage(page))(*)(SecretRewardsLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x70f620, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, page);
}

auto SecretRewardsLayer::init(bool fromShop) -> decltype(init(fromShop)) {
	using FunctionType = decltype(init(fromShop))(*)(SecretRewardsLayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x70ccd0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, fromShop);
}

auto SecretRewardsLayer::moveToMainLayer(cocos2d::CCObject* sender) -> decltype(moveToMainLayer(sender)) {
	using FunctionType = decltype(moveToMainLayer(sender))(*)(SecretRewardsLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x710100, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SecretRewardsLayer::moveToSecondaryLayer(int page) -> decltype(moveToSecondaryLayer(page)) {
	using FunctionType = decltype(moveToSecondaryLayer(page))(*)(SecretRewardsLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x70fc80, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, page);
}

auto SecretRewardsLayer::onBack(cocos2d::CCObject* sender) -> decltype(onBack(sender)) {
	using FunctionType = decltype(onBack(sender))(*)(SecretRewardsLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x70ed20, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SecretRewardsLayer::onChestType(cocos2d::CCObject* sender) -> decltype(onChestType(sender)) {
	using FunctionType = decltype(onChestType(sender))(*)(SecretRewardsLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x70ed80, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SecretRewardsLayer::onGoldChest(cocos2d::CCObject* sender) -> decltype(onGoldChest(sender)) {
	using FunctionType = decltype(onGoldChest(sender))(*)(SecretRewardsLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x707f20, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SecretRewardsLayer::onSelectItem(cocos2d::CCObject* sender) -> decltype(onSelectItem(sender)) {
	using FunctionType = decltype(onSelectItem(sender))(*)(SecretRewardsLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x711450, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SecretRewardsLayer::onShop(cocos2d::CCObject* sender) -> decltype(onShop(sender)) {
	using FunctionType = decltype(onShop(sender))(*)(SecretRewardsLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x70f460, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SecretRewardsLayer::onSpecialItem(cocos2d::CCObject* sender) -> decltype(onSpecialItem(sender)) {
	using FunctionType = decltype(onSpecialItem(sender))(*)(SecretRewardsLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x70f880, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SecretRewardsLayer::onSwitchPage(cocos2d::CCObject* sender) -> decltype(onSwitchPage(sender)) {
	using FunctionType = decltype(onSwitchPage(sender))(*)(SecretRewardsLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x70f5b0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SecretRewardsLayer::showDialog01() -> decltype(showDialog01()) {
	using FunctionType = decltype(showDialog01())(*)(SecretRewardsLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x7117b0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SecretRewardsLayer::showDialog03() -> decltype(showDialog03()) {
	using FunctionType = decltype(showDialog03())(*)(SecretRewardsLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x7134c0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SecretRewardsLayer::showDialogDiamond() -> decltype(showDialogDiamond()) {
	using FunctionType = decltype(showDialogDiamond())(*)(SecretRewardsLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x716000, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SecretRewardsLayer::showDialogMechanic() -> decltype(showDialogMechanic()) {
	using FunctionType = decltype(showDialogMechanic())(*)(SecretRewardsLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x714a60, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SecretRewardsLayer::showLockedChest() -> decltype(showLockedChest()) {
	using FunctionType = decltype(showLockedChest())(*)(SecretRewardsLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x70fd90, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SecretRewardsLayer::showShop(int shop) -> decltype(showShop(shop)) {
	using FunctionType = decltype(showShop(shop))(*)(SecretRewardsLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x716d30, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, shop);
}

auto SecretRewardsLayer::switchToOpenedState(CCMenuItemSpriteExtra* button) -> decltype(switchToOpenedState(button)) {
	using FunctionType = decltype(switchToOpenedState(button))(*)(SecretRewardsLayer*, CCMenuItemSpriteExtra*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x70edc0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, button);
}

auto SecretRewardsLayer::updateBackButton() -> decltype(updateBackButton()) {
	using FunctionType = decltype(updateBackButton())(*)(SecretRewardsLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x70ffd0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SecretRewardsLayer::updateUnlockedGoldLabel() -> decltype(updateUnlockedGoldLabel()) {
	using FunctionType = decltype(updateUnlockedGoldLabel())(*)(SecretRewardsLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x70f3a0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SecretRewardsLayer::updateUnlockedLabel() -> decltype(updateUnlockedLabel()) {
	using FunctionType = decltype(updateUnlockedLabel())(*)(SecretRewardsLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x70ee80, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}
