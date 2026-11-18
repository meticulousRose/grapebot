#include <Geode/cocos/cocoa/CCObject.h>

#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/LevelBrowserLayer.hpp>
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

LevelBrowserLayer::~LevelBrowserLayer() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(LevelBrowserLayer*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x480220, tulip::hook::TulipConvention::Default);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) LevelBrowserLayer(geode::CutoffConstructor, sizeof(LevelBrowserLayer));
		geode::DestructorLock::addLock(this);
	}
}

auto LevelBrowserLayer::create(GJSearchObject* object) -> decltype(create(object)) {
	using FunctionType = decltype(create(object))(*)(GJSearchObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4804a0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(object);
}

auto LevelBrowserLayer::scene(GJSearchObject* object) -> decltype(scene(object)) {
	using FunctionType = decltype(scene(object))(*)(GJSearchObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x480460, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(object);
}

auto LevelBrowserLayer::onEnter() -> decltype(onEnter()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&LevelBrowserLayer::onEnter), this);
	using FunctionType = decltype(onEnter())(*)(LevelBrowserLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4885d0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto LevelBrowserLayer::onEnterTransitionDidFinish() -> decltype(onEnterTransitionDidFinish()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&LevelBrowserLayer::onEnterTransitionDidFinish), this);
	using FunctionType = decltype(onEnterTransitionDidFinish())(*)(LevelBrowserLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x488bb0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto LevelBrowserLayer::ccTouchBegan(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) -> decltype(ccTouchBegan(touch, event)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&LevelBrowserLayer::ccTouchBegan), this);
	using FunctionType = decltype(ccTouchBegan(touch, event))(*)(LevelBrowserLayer*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x488c90, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, touch, event);
}

auto LevelBrowserLayer::ccTouchMoved(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) -> decltype(ccTouchMoved(touch, event)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&LevelBrowserLayer::ccTouchMoved), this);
	using FunctionType = decltype(ccTouchMoved(touch, event))(*)(LevelBrowserLayer*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x488cf0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, touch, event);
}

auto LevelBrowserLayer::ccTouchEnded(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) -> decltype(ccTouchEnded(touch, event)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&LevelBrowserLayer::ccTouchEnded), this);
	using FunctionType = decltype(ccTouchEnded(touch, event))(*)(LevelBrowserLayer*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x488cb0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, touch, event);
}

auto LevelBrowserLayer::ccTouchCancelled(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) -> decltype(ccTouchCancelled(touch, event)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&LevelBrowserLayer::ccTouchCancelled), this);
	using FunctionType = decltype(ccTouchCancelled(touch, event))(*)(LevelBrowserLayer*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x488cd0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, touch, event);
}

auto LevelBrowserLayer::registerWithTouchDispatcher() -> decltype(registerWithTouchDispatcher()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&LevelBrowserLayer::registerWithTouchDispatcher), this);
	using FunctionType = decltype(registerWithTouchDispatcher())(*)(LevelBrowserLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x488bc0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto LevelBrowserLayer::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&LevelBrowserLayer::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(LevelBrowserLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x487290, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto LevelBrowserLayer::keyDown(cocos2d::enumKeyCodes key, double timestamp) -> decltype(keyDown(key, timestamp)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::enumKeyCodes, double>::func(&LevelBrowserLayer::keyDown), this);
	using FunctionType = decltype(keyDown(key, timestamp))(*)(LevelBrowserLayer*, cocos2d::enumKeyCodes, double);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4872d0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, key, timestamp);
}

auto LevelBrowserLayer::loadLevelsFinished(cocos2d::CCArray* levels, char const* key, int type) -> decltype(loadLevelsFinished(levels, key, type)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCArray*, char const*, int>::func(&LevelBrowserLayer::loadLevelsFinished), this);
	using FunctionType = decltype(loadLevelsFinished(levels, key, type))(*)(LevelBrowserLayer*, cocos2d::CCArray*, char const*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x486700, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, levels, key, type);
}

auto LevelBrowserLayer::loadLevelsFailed(char const* key, int type) -> decltype(loadLevelsFailed(key, type)) {
	auto self = addresser::thunkAdjust(Resolve<char const*, int>::func(&LevelBrowserLayer::loadLevelsFailed), this);
	using FunctionType = decltype(loadLevelsFailed(key, type))(*)(LevelBrowserLayer*, char const*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4868e0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, key, type);
}

auto LevelBrowserLayer::setupPageInfo(std::string info, char const* key) -> decltype(setupPageInfo(info, key)) {
	auto self = addresser::thunkAdjust(Resolve<std::string, char const*>::func(&LevelBrowserLayer::setupPageInfo), this);
	using FunctionType = decltype(setupPageInfo(info, key))(*)(LevelBrowserLayer*, std::string, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4869c0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, info, key);
}

auto LevelBrowserLayer::onBack(cocos2d::CCObject* sender) -> decltype(onBack(sender)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCObject*>::func(&LevelBrowserLayer::onBack), this);
	using FunctionType = decltype(onBack(sender))(*)(LevelBrowserLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4871e0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, sender);
}

auto LevelBrowserLayer::shareCommentClosed(std::string text, ShareCommentLayer* layer) -> decltype(shareCommentClosed(text, layer)) {
	auto self = addresser::thunkAdjust(Resolve<std::string, ShareCommentLayer*>::func(&LevelBrowserLayer::shareCommentClosed), this);
	using FunctionType = decltype(shareCommentClosed(text, layer))(*)(LevelBrowserLayer*, std::string, ShareCommentLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4875e0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, text, layer);
}

auto LevelBrowserLayer::setTextPopupClosed(SetTextPopup* popup, std::string text) -> decltype(setTextPopupClosed(popup, text)) {
	auto self = addresser::thunkAdjust(Resolve<SetTextPopup*, std::string>::func(&LevelBrowserLayer::setTextPopupClosed), this);
	using FunctionType = decltype(setTextPopupClosed(popup, text))(*)(LevelBrowserLayer*, SetTextPopup*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4876c0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, popup, text);
}

auto LevelBrowserLayer::FLAlert_Clicked(FLAlertLayer* layer, bool btn2) -> decltype(FLAlert_Clicked(layer, btn2)) {
	auto self = addresser::thunkAdjust(Resolve<FLAlertLayer*, bool>::func(&LevelBrowserLayer::FLAlert_Clicked), this);
	using FunctionType = decltype(FLAlert_Clicked(layer, btn2))(*)(LevelBrowserLayer*, FLAlertLayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x487e90, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, layer, btn2);
}

auto LevelBrowserLayer::setIDPopupClosed(SetIDPopup* popup, int value) -> decltype(setIDPopupClosed(popup, value)) {
	auto self = addresser::thunkAdjust(Resolve<SetIDPopup*, int>::func(&LevelBrowserLayer::setIDPopupClosed), this);
	using FunctionType = decltype(setIDPopupClosed(popup, value))(*)(LevelBrowserLayer*, SetIDPopup*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x487080, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, popup, value);
}

auto LevelBrowserLayer::updateResultArray(cocos2d::CCArray* results) -> decltype(updateResultArray(results)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCArray*>::func(&LevelBrowserLayer::updateResultArray), this);
	using FunctionType = decltype(updateResultArray(results))(*)(LevelBrowserLayer*, cocos2d::CCArray*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x488d10, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, results);
}

auto LevelBrowserLayer::cellPerformedAction(TableViewCell* cell, int listType, CellAction action, cocos2d::CCNode* parent) -> decltype(cellPerformedAction(cell, listType, action, parent)) {
	auto self = addresser::thunkAdjust(Resolve<TableViewCell*, int, CellAction, cocos2d::CCNode*>::func(&LevelBrowserLayer::cellPerformedAction), this);
	using FunctionType = decltype(cellPerformedAction(cell, listType, action, parent))(*)(LevelBrowserLayer*, TableViewCell*, int, CellAction, cocos2d::CCNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x488650, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, cell, listType, action, parent);
}

auto LevelBrowserLayer::createNewLevel(cocos2d::CCObject* sender) -> decltype(createNewLevel(sender)) {
	using FunctionType = decltype(createNewLevel(sender))(*)(LevelBrowserLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x487570, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto LevelBrowserLayer::createNewList(cocos2d::CCObject* sender) -> decltype(createNewList(sender)) {
	using FunctionType = decltype(createNewList(sender))(*)(LevelBrowserLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x487450, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto LevelBrowserLayer::createNewSmartTemplate(cocos2d::CCObject* sender) -> decltype(createNewSmartTemplate(sender)) {
	using FunctionType = decltype(createNewSmartTemplate(sender))(*)(LevelBrowserLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4873f0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto LevelBrowserLayer::deleteSelected() -> decltype(deleteSelected()) {
	using FunctionType = decltype(deleteSelected())(*)(LevelBrowserLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x482bc0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto LevelBrowserLayer::exitLayer(cocos2d::CCObject* sender) -> decltype(exitLayer(sender)) {
	using FunctionType = decltype(exitLayer(sender))(*)(LevelBrowserLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x487250, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto LevelBrowserLayer::getItemsMatchingSearch(cocos2d::CCArray* items, std::string query, GJSearchObject* object) -> decltype(getItemsMatchingSearch(items, query, object)) {
	using FunctionType = decltype(getItemsMatchingSearch(items, query, object))(*)(LevelBrowserLayer*, cocos2d::CCArray*, std::string, GJSearchObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x485900, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, items, query, object);
}

auto LevelBrowserLayer::getSearchTitle() -> decltype(getSearchTitle()) {
	using FunctionType = decltype(getSearchTitle())(*)(LevelBrowserLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x485fb0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto LevelBrowserLayer::init(GJSearchObject* object) -> decltype(init(object)) {
	using FunctionType = decltype(init(object))(*)(LevelBrowserLayer*, GJSearchObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x480690, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto LevelBrowserLayer::isCorrect(char const* key) -> decltype(isCorrect(key)) {
	using FunctionType = decltype(isCorrect(key))(*)(LevelBrowserLayer*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x485730, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, key);
}

auto LevelBrowserLayer::isSafeType() -> decltype(isSafeType()) {
	using FunctionType = decltype(isSafeType())(*)(LevelBrowserLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x482770, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto LevelBrowserLayer::isVaultType() -> decltype(isVaultType()) {
	using FunctionType = decltype(isVaultType())(*)(LevelBrowserLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x483ec0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto LevelBrowserLayer::onClearSearch(cocos2d::CCObject* sender) -> decltype(onClearSearch(sender)) {
	using FunctionType = decltype(onClearSearch(sender))(*)(LevelBrowserLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x484430, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto LevelBrowserLayer::onDeleteAll(cocos2d::CCObject* sender) -> decltype(onDeleteAll(sender)) {
	using FunctionType = decltype(onDeleteAll(sender))(*)(LevelBrowserLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x483540, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto LevelBrowserLayer::onGoToFolder(cocos2d::CCObject* sender) -> decltype(onGoToFolder(sender)) {
	using FunctionType = decltype(onGoToFolder(sender))(*)(LevelBrowserLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x484050, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto LevelBrowserLayer::onGoToPage(cocos2d::CCObject* sender) -> decltype(onGoToPage(sender)) {
	using FunctionType = decltype(onGoToPage(sender))(*)(LevelBrowserLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x482970, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto LevelBrowserLayer::onHelp(cocos2d::CCObject* sender) -> decltype(onHelp(sender)) {
	using FunctionType = decltype(onHelp(sender))(*)(LevelBrowserLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4873e0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto LevelBrowserLayer::onInfo(cocos2d::CCObject* sender) -> decltype(onInfo(sender)) {
	using FunctionType = decltype(onInfo(sender))(*)(LevelBrowserLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x483a40, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto LevelBrowserLayer::onLocalMode(cocos2d::CCObject* sender) -> decltype(onLocalMode(sender)) {
	using FunctionType = decltype(onLocalMode(sender))(*)(LevelBrowserLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x483330, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto LevelBrowserLayer::onMyOnlineLevels(cocos2d::CCObject* sender) -> decltype(onMyOnlineLevels(sender)) {
	using FunctionType = decltype(onMyOnlineLevels(sender))(*)(LevelBrowserLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x240e20, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto LevelBrowserLayer::onNew(cocos2d::CCObject* sender) -> decltype(onNew(sender)) {
	using FunctionType = decltype(onNew(sender))(*)(LevelBrowserLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x482f20, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto LevelBrowserLayer::onRefresh(cocos2d::CCObject* sender) -> decltype(onRefresh(sender)) {
	using FunctionType = decltype(onRefresh(sender))(*)(LevelBrowserLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x483920, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto LevelBrowserLayer::onRemoveAllFavorites(cocos2d::CCObject* sender) -> decltype(onRemoveAllFavorites(sender)) {
	using FunctionType = decltype(onRemoveAllFavorites(sender))(*)(LevelBrowserLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x483400, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto LevelBrowserLayer::onSavedMode(cocos2d::CCObject* sender) -> decltype(onSavedMode(sender)) {
	using FunctionType = decltype(onSavedMode(sender))(*)(LevelBrowserLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x483610, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto LevelBrowserLayer::setupLevelBrowser(cocos2d::CCArray* items) -> decltype(setupLevelBrowser(items)) {
	using FunctionType = decltype(setupLevelBrowser(items))(*)(LevelBrowserLayer*, cocos2d::CCArray*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x485cc0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, items);
}

auto LevelBrowserLayer::show() -> decltype(show()) {
	using FunctionType = decltype(show())(*)(LevelBrowserLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x488c10, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto LevelBrowserLayer::updateLevelsLabel() -> decltype(updateLevelsLabel()) {
	using FunctionType = decltype(updateLevelsLabel())(*)(LevelBrowserLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x486fe0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto LevelBrowserLayer::updatePageLabel() -> decltype(updatePageLabel()) {
	using FunctionType = decltype(updatePageLabel())(*)(LevelBrowserLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x482850, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}
