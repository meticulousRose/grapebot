#include <Geode/cocos/cocoa/CCObject.h>

#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/LevelInfoLayer.hpp>
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

LevelInfoLayer::~LevelInfoLayer() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(LevelInfoLayer*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x24b1d0, tulip::hook::TulipConvention::Default);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) LevelInfoLayer(geode::CutoffConstructor, sizeof(LevelInfoLayer));
		geode::DestructorLock::addLock(this);
	}
}

auto LevelInfoLayer::create(GJGameLevel* level, bool challenge) -> decltype(create(level, challenge)) {
	using FunctionType = decltype(create(level, challenge))(*)(GJGameLevel*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x201718, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(level, challenge);
}

auto LevelInfoLayer::scene(GJGameLevel* level, bool challenge) -> decltype(scene(level, challenge)) {
	using FunctionType = decltype(scene(level, challenge))(*)(GJGameLevel*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x24b34c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(level, challenge);
}

auto LevelInfoLayer::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&LevelInfoLayer::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(LevelInfoLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x252f18, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto LevelInfoLayer::keyDown(cocos2d::enumKeyCodes key, double timestamp) -> decltype(keyDown(key, timestamp)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::enumKeyCodes, double>::func(&LevelInfoLayer::keyDown), this);
	using FunctionType = decltype(keyDown(key, timestamp))(*)(LevelInfoLayer*, cocos2d::enumKeyCodes, double);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x252f24, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, key, timestamp);
}

auto LevelInfoLayer::numberInputClosed(NumberInputLayer* layer) -> decltype(numberInputClosed(layer)) {
	auto self = addresser::thunkAdjust(Resolve<NumberInputLayer*>::func(&LevelInfoLayer::numberInputClosed), this);
	using FunctionType = decltype(numberInputClosed(layer))(*)(LevelInfoLayer*, NumberInputLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x252508, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, layer);
}

auto LevelInfoLayer::cellPerformedAction(TableViewCell* cell, int listType, CellAction action, cocos2d::CCNode* parent) -> decltype(cellPerformedAction(cell, listType, action, parent)) {
	auto self = addresser::thunkAdjust(Resolve<TableViewCell*, int, CellAction, cocos2d::CCNode*>::func(&LevelInfoLayer::cellPerformedAction), this);
	using FunctionType = decltype(cellPerformedAction(cell, listType, action, parent))(*)(LevelInfoLayer*, TableViewCell*, int, CellAction, cocos2d::CCNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x25075c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, cell, listType, action, parent);
}

auto LevelInfoLayer::levelDownloadFinished(GJGameLevel* level) -> decltype(levelDownloadFinished(level)) {
	auto self = addresser::thunkAdjust(Resolve<GJGameLevel*>::func(&LevelInfoLayer::levelDownloadFinished), this);
	using FunctionType = decltype(levelDownloadFinished(level))(*)(LevelInfoLayer*, GJGameLevel*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2516b0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, level);
}

auto LevelInfoLayer::levelDownloadFailed(int response) -> decltype(levelDownloadFailed(response)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&LevelInfoLayer::levelDownloadFailed), this);
	using FunctionType = decltype(levelDownloadFailed(response))(*)(LevelInfoLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x251970, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, response);
}

auto LevelInfoLayer::levelUpdateFinished(GJGameLevel* level, UpdateResponse response) -> decltype(levelUpdateFinished(level, response)) {
	auto self = addresser::thunkAdjust(Resolve<GJGameLevel*, UpdateResponse>::func(&LevelInfoLayer::levelUpdateFinished), this);
	using FunctionType = decltype(levelUpdateFinished(level, response))(*)(LevelInfoLayer*, GJGameLevel*, UpdateResponse);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x251a60, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, level, response);
}

auto LevelInfoLayer::levelUpdateFailed(int response) -> decltype(levelUpdateFailed(response)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&LevelInfoLayer::levelUpdateFailed), this);
	using FunctionType = decltype(levelUpdateFailed(response))(*)(LevelInfoLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x251c68, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, response);
}

auto LevelInfoLayer::levelDeleteFinished(int id) -> decltype(levelDeleteFinished(id)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&LevelInfoLayer::levelDeleteFinished), this);
	using FunctionType = decltype(levelDeleteFinished(id))(*)(LevelInfoLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x251d6c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, id);
}

auto LevelInfoLayer::levelDeleteFailed(int id) -> decltype(levelDeleteFailed(id)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&LevelInfoLayer::levelDeleteFailed), this);
	using FunctionType = decltype(levelDeleteFailed(id))(*)(LevelInfoLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x251e64, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, id);
}

auto LevelInfoLayer::rateLevelClosed() -> decltype(rateLevelClosed()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&LevelInfoLayer::rateLevelClosed), this);
	using FunctionType = decltype(rateLevelClosed())(*)(LevelInfoLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x252bf8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto LevelInfoLayer::likedItem(LikeItemType type, int id, bool liked) -> decltype(likedItem(type, id, liked)) {
	auto self = addresser::thunkAdjust(Resolve<LikeItemType, int, bool>::func(&LevelInfoLayer::likedItem), this);
	using FunctionType = decltype(likedItem(type, id, liked))(*)(LevelInfoLayer*, LikeItemType, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x252c04, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, type, id, liked);
}

auto LevelInfoLayer::FLAlert_Clicked(FLAlertLayer* layer, bool btn2) -> decltype(FLAlert_Clicked(layer, btn2)) {
	auto self = addresser::thunkAdjust(Resolve<FLAlertLayer*, bool>::func(&LevelInfoLayer::FLAlert_Clicked), this);
	using FunctionType = decltype(FLAlert_Clicked(layer, btn2))(*)(LevelInfoLayer*, FLAlertLayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x252d28, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, layer, btn2);
}

auto LevelInfoLayer::setIDPopupClosed(SetIDPopup* popup, int value) -> decltype(setIDPopupClosed(popup, value)) {
	auto self = addresser::thunkAdjust(Resolve<SetIDPopup*, int>::func(&LevelInfoLayer::setIDPopupClosed), this);
	using FunctionType = decltype(setIDPopupClosed(popup, value))(*)(LevelInfoLayer*, SetIDPopup*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2508b4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, popup, value);
}

auto LevelInfoLayer::onEnterTransitionDidFinish() -> decltype(onEnterTransitionDidFinish()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&LevelInfoLayer::onEnterTransitionDidFinish), this);
	using FunctionType = decltype(onEnterTransitionDidFinish())(*)(LevelInfoLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x252054, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto LevelInfoLayer::adminActionConfirmed(int p0, std::vector<int> const& p1, std::string const& p2) -> decltype(adminActionConfirmed(p0, p1, p2)) {
	auto self = addresser::thunkAdjust(Resolve<int, std::vector<int> const&, std::string const&>::func(&LevelInfoLayer::adminActionConfirmed), this);
	using FunctionType = decltype(adminActionConfirmed(p0, p1, p2))(*)(LevelInfoLayer*, int, std::vector<int> const&, std::string const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2529c0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1, p2);
}

auto LevelInfoLayer::confirmClone(cocos2d::CCObject* sender) -> decltype(confirmClone(sender)) {
	using FunctionType = decltype(confirmClone(sender))(*)(LevelInfoLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x24ffec, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto LevelInfoLayer::confirmDelete(cocos2d::CCObject* sender) -> decltype(confirmDelete(sender)) {
	using FunctionType = decltype(confirmDelete(sender))(*)(LevelInfoLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x24f690, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto LevelInfoLayer::confirmMoveToBottom(cocos2d::CCObject* sender) -> decltype(confirmMoveToBottom(sender)) {
	using FunctionType = decltype(confirmMoveToBottom(sender))(*)(LevelInfoLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2504ac, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto LevelInfoLayer::confirmMoveToTop(cocos2d::CCObject* sender) -> decltype(confirmMoveToTop(sender)) {
	using FunctionType = decltype(confirmMoveToTop(sender))(*)(LevelInfoLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x22418c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto LevelInfoLayer::downloadLevel() -> decltype(downloadLevel()) {
	using FunctionType = decltype(downloadLevel())(*)(LevelInfoLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x24e340, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto LevelInfoLayer::incrementDislikes() -> decltype(incrementDislikes()) {
	using FunctionType = decltype(incrementDislikes())(*)(LevelInfoLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x252c8c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto LevelInfoLayer::incrementLikes() -> decltype(incrementLikes()) {
	using FunctionType = decltype(incrementLikes())(*)(LevelInfoLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x252c78, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto LevelInfoLayer::init(GJGameLevel* level, bool challenge) -> decltype(init(level, challenge)) {
	using FunctionType = decltype(init(level, challenge))(*)(LevelInfoLayer*, GJGameLevel*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x24b504, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, level, challenge);
}

auto LevelInfoLayer::loadLevelStep() -> decltype(loadLevelStep()) {
	using FunctionType = decltype(loadLevelStep())(*)(LevelInfoLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x252288, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto LevelInfoLayer::onAddToList(cocos2d::CCObject* sender) -> decltype(onAddToList(sender)) {
	using FunctionType = decltype(onAddToList(sender))(*)(LevelInfoLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x250704, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto LevelInfoLayer::onBack(cocos2d::CCObject* sender) -> decltype(onBack(sender)) {
	using FunctionType = decltype(onBack(sender))(*)(LevelInfoLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x250258, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto LevelInfoLayer::onClone(cocos2d::CCObject* sender) -> decltype(onClone(sender)) {
	using FunctionType = decltype(onClone(sender))(*)(LevelInfoLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2526d4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto LevelInfoLayer::onDelete(cocos2d::CCObject* sender) -> decltype(onDelete(sender)) {
	using FunctionType = decltype(onDelete(sender))(*)(LevelInfoLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x252818, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto LevelInfoLayer::onEdit(cocos2d::CCObject* p0) -> decltype(onEdit(p0)) {
	using FunctionType = decltype(onEdit(p0))(*)(LevelInfoLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x24e1a8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto LevelInfoLayer::onFavorite(cocos2d::CCObject* sender) -> decltype(onFavorite(sender)) {
	using FunctionType = decltype(onFavorite(sender))(*)(LevelInfoLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x250354, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto LevelInfoLayer::onGarage(cocos2d::CCObject* sender) -> decltype(onGarage(sender)) {
	using FunctionType = decltype(onGarage(sender))(*)(LevelInfoLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x250308, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto LevelInfoLayer::onLevelLeaderboard(cocos2d::CCObject* sender) -> decltype(onLevelLeaderboard(sender)) {
	using FunctionType = decltype(onLevelLeaderboard(sender))(*)(LevelInfoLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x24f8d8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto LevelInfoLayer::onLevelOptions(cocos2d::CCObject* sender) -> decltype(onLevelOptions(sender)) {
	using FunctionType = decltype(onLevelOptions(sender))(*)(LevelInfoLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x250590, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto LevelInfoLayer::onLike(cocos2d::CCObject* sender) -> decltype(onLike(sender)) {
	using FunctionType = decltype(onLike(sender))(*)(LevelInfoLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x24f93c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto LevelInfoLayer::onPlay(cocos2d::CCObject* sender) -> decltype(onPlay(sender)) {
	using FunctionType = decltype(onPlay(sender))(*)(LevelInfoLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x24d880, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto LevelInfoLayer::onRate(cocos2d::CCObject* sender) -> decltype(onRate(sender)) {
	using FunctionType = decltype(onRate(sender))(*)(LevelInfoLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x252ab8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto LevelInfoLayer::onRateDemon(cocos2d::CCObject* sender) -> decltype(onRateDemon(sender)) {
	using FunctionType = decltype(onRateDemon(sender))(*)(LevelInfoLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x24fafc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto LevelInfoLayer::onRateStars(cocos2d::CCObject* sender) -> decltype(onRateStars(sender)) {
	using FunctionType = decltype(onRateStars(sender))(*)(LevelInfoLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x24f9ac, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto LevelInfoLayer::onSetFolder(cocos2d::CCObject* sender) -> decltype(onSetFolder(sender)) {
	using FunctionType = decltype(onSetFolder(sender))(*)(LevelInfoLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x250650, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto LevelInfoLayer::onUpdate(cocos2d::CCObject* sender) -> decltype(onUpdate(sender)) {
	using FunctionType = decltype(onUpdate(sender))(*)(LevelInfoLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x24f77c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto LevelInfoLayer::onViewProfile(cocos2d::CCObject* sender) -> decltype(onViewProfile(sender)) {
	using FunctionType = decltype(onViewProfile(sender))(*)(LevelInfoLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x24d810, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto LevelInfoLayer::playStep2() -> decltype(playStep2()) {
	using FunctionType = decltype(playStep2())(*)(LevelInfoLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x25213c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto LevelInfoLayer::playStep3() -> decltype(playStep3()) {
	using FunctionType = decltype(playStep3())(*)(LevelInfoLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x252200, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto LevelInfoLayer::playStep4() -> decltype(playStep4()) {
	using FunctionType = decltype(playStep4())(*)(LevelInfoLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x252364, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto LevelInfoLayer::setupLevelInfo() -> decltype(setupLevelInfo()) {
	using FunctionType = decltype(setupLevelInfo())(*)(LevelInfoLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3f2a94, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto LevelInfoLayer::setupPlatformerStats() -> decltype(setupPlatformerStats()) {
	using FunctionType = decltype(setupPlatformerStats())(*)(LevelInfoLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x24ef24, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto LevelInfoLayer::setupProgressBars() -> decltype(setupProgressBars()) {
	using FunctionType = decltype(setupProgressBars())(*)(LevelInfoLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x24f350, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto LevelInfoLayer::shouldDownloadLevel() -> decltype(shouldDownloadLevel()) {
	using FunctionType = decltype(shouldDownloadLevel())(*)(LevelInfoLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x250a14, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto LevelInfoLayer::showSongWarning() -> decltype(showSongWarning()) {
	using FunctionType = decltype(showSongWarning())(*)(LevelInfoLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x251f5c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto LevelInfoLayer::showUpdateAlert(UpdateResponse type) -> decltype(showUpdateAlert(type)) {
	using FunctionType = decltype(showUpdateAlert(type))(*)(LevelInfoLayer*, UpdateResponse);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x251ad0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, type);
}

auto LevelInfoLayer::tryCloneLevel(cocos2d::CCObject* sender) -> decltype(tryCloneLevel(sender)) {
	using FunctionType = decltype(tryCloneLevel(sender))(*)(LevelInfoLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x25011c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto LevelInfoLayer::tryShowAd() -> decltype(tryShowAd()) {
	using FunctionType = decltype(tryShowAd())(*)(LevelInfoLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x25073c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto LevelInfoLayer::updateLabelValues() -> decltype(updateLabelValues()) {
	using FunctionType = decltype(updateLabelValues())(*)(LevelInfoLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x250c20, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto LevelInfoLayer::updateSideButtons() -> decltype(updateSideButtons()) {
	using FunctionType = decltype(updateSideButtons())(*)(LevelInfoLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x24fb4c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}
