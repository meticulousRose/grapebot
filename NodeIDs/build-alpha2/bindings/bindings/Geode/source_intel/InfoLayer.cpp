#include <Geode/cocos/cocoa/CCObject.h>

#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/InfoLayer.hpp>
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

InfoLayer::~InfoLayer() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(InfoLayer*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x891280, tulip::hook::TulipConvention::Default);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) InfoLayer(geode::CutoffConstructor, sizeof(InfoLayer));
		geode::DestructorLock::addLock(this);
	}
}

auto InfoLayer::create(GJGameLevel* p0, GJUserScore* p1, GJLevelList* p2, GJEditorSoundConfig* p3) -> decltype(create(p0, p1, p2, p3)) {
	using FunctionType = decltype(create(p0, p1, p2, p3))(*)(GJGameLevel*, GJUserScore*, GJLevelList*, GJEditorSoundConfig*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8914c0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1, p2, p3);
}

auto InfoLayer::registerWithTouchDispatcher() -> decltype(registerWithTouchDispatcher()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&InfoLayer::registerWithTouchDispatcher), this);
	using FunctionType = decltype(registerWithTouchDispatcher())(*)(InfoLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x895e40, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto InfoLayer::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&InfoLayer::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(InfoLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x895d20, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto InfoLayer::show() -> decltype(show()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&InfoLayer::show), this);
	using FunctionType = decltype(show())(*)(InfoLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x896f80, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto InfoLayer::loadCommentsFinished(cocos2d::CCArray* comments, char const* key) -> decltype(loadCommentsFinished(comments, key)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCArray*, char const*>::func(&InfoLayer::loadCommentsFinished), this);
	using FunctionType = decltype(loadCommentsFinished(comments, key))(*)(InfoLayer*, cocos2d::CCArray*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x896110, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, comments, key);
}

auto InfoLayer::loadCommentsFailed(char const* key) -> decltype(loadCommentsFailed(key)) {
	auto self = addresser::thunkAdjust(Resolve<char const*>::func(&InfoLayer::loadCommentsFailed), this);
	using FunctionType = decltype(loadCommentsFailed(key))(*)(InfoLayer*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8961e0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, key);
}

auto InfoLayer::setupPageInfo(std::string info, char const* key) -> decltype(setupPageInfo(info, key)) {
	auto self = addresser::thunkAdjust(Resolve<std::string, char const*>::func(&InfoLayer::setupPageInfo), this);
	using FunctionType = decltype(setupPageInfo(info, key))(*)(InfoLayer*, std::string, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x896280, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, info, key);
}

auto InfoLayer::commentUploadFinished(int parentID) -> decltype(commentUploadFinished(parentID)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&InfoLayer::commentUploadFinished), this);
	using FunctionType = decltype(commentUploadFinished(parentID))(*)(InfoLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x896970, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, parentID);
}

auto InfoLayer::commentUploadFailed(int parentID, CommentError errorType) -> decltype(commentUploadFailed(parentID, errorType)) {
	auto self = addresser::thunkAdjust(Resolve<int, CommentError>::func(&InfoLayer::commentUploadFailed), this);
	using FunctionType = decltype(commentUploadFailed(parentID, errorType))(*)(InfoLayer*, int, CommentError);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x896af0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, parentID, errorType);
}

auto InfoLayer::updateUserScoreFinished() -> decltype(updateUserScoreFinished()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&InfoLayer::updateUserScoreFinished), this);
	using FunctionType = decltype(updateUserScoreFinished())(*)(InfoLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x896850, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto InfoLayer::FLAlert_Clicked(FLAlertLayer* layer, bool btn2) -> decltype(FLAlert_Clicked(layer, btn2)) {
	auto self = addresser::thunkAdjust(Resolve<FLAlertLayer*, bool>::func(&InfoLayer::FLAlert_Clicked), this);
	using FunctionType = decltype(FLAlert_Clicked(layer, btn2))(*)(InfoLayer*, FLAlertLayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x895b60, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, layer, btn2);
}

auto InfoLayer::keyDown(cocos2d::enumKeyCodes key, double timestamp) -> decltype(keyDown(key, timestamp)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::enumKeyCodes, double>::func(&InfoLayer::keyDown), this);
	using FunctionType = decltype(keyDown(key, timestamp))(*)(InfoLayer*, cocos2d::enumKeyCodes, double);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8983f0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, key, timestamp);
}

auto InfoLayer::adminActionConfirmed(int p0, std::vector<int> const& p1, std::string const& p2) -> decltype(adminActionConfirmed(p0, p1, p2)) {
	auto self = addresser::thunkAdjust(Resolve<int, std::vector<int> const&, std::string const&>::func(&InfoLayer::adminActionConfirmed), this);
	using FunctionType = decltype(adminActionConfirmed(p0, p1, p2))(*)(InfoLayer*, int, std::vector<int> const&, std::string const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x897d60, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1, p2);
}

auto InfoLayer::bulkCommentDeleteFinished(int p0) -> decltype(bulkCommentDeleteFinished(p0)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&InfoLayer::bulkCommentDeleteFinished), this);
	using FunctionType = decltype(bulkCommentDeleteFinished(p0))(*)(InfoLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x898080, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto InfoLayer::bulkCommentDeleteFailed() -> decltype(bulkCommentDeleteFailed()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&InfoLayer::bulkCommentDeleteFailed), this);
	using FunctionType = decltype(bulkCommentDeleteFailed())(*)(InfoLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x898290, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto InfoLayer::canBulkDelete() -> decltype(canBulkDelete()) {
	using FunctionType = decltype(canBulkDelete())(*)(InfoLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x897080, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto InfoLayer::canToggleModRoom() -> decltype(canToggleModRoom()) {
	using FunctionType = decltype(canToggleModRoom())(*)(InfoLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8940a0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto InfoLayer::confirmReport(cocos2d::CCObject* sender) -> decltype(confirmReport(sender)) {
	using FunctionType = decltype(confirmReport(sender))(*)(InfoLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5bd6e0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto InfoLayer::getAccountID() -> decltype(getAccountID()) {
	using FunctionType = decltype(getAccountID())(*)(InfoLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8945e0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto InfoLayer::getID() -> decltype(getID()) {
	using FunctionType = decltype(getID())(*)(InfoLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8945e0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto InfoLayer::getRealID() -> decltype(getRealID()) {
	using FunctionType = decltype(getRealID())(*)(InfoLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8958a0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto InfoLayer::getSpriteButton(char const* frame, cocos2d::SEL_MenuHandler selector, cocos2d::CCMenu* menu, float scale, cocos2d::CCPoint position) -> decltype(getSpriteButton(frame, selector, menu, scale, position)) {
	using FunctionType = decltype(getSpriteButton(frame, selector, menu, scale, position))(*)(InfoLayer*, char const*, cocos2d::SEL_MenuHandler, cocos2d::CCMenu*, float, cocos2d::CCPoint);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x894100, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, frame, selector, menu, scale, position);
}

auto InfoLayer::init(GJGameLevel* p0, GJUserScore* p1, GJLevelList* p2, GJEditorSoundConfig* p3) -> decltype(init(p0, p1, p2, p3)) {
	using FunctionType = decltype(init(p0, p1, p2, p3))(*)(InfoLayer*, GJGameLevel*, GJUserScore*, GJLevelList*, GJEditorSoundConfig*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x891550, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1, p2, p3);
}

auto InfoLayer::loadPage(int page, bool noSetup) -> decltype(loadPage(page, noSetup)) {
	using FunctionType = decltype(loadPage(page, noSetup))(*)(InfoLayer*, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x894640, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, page, noSetup);
}

auto InfoLayer::onCopyLevelID(cocos2d::CCObject* sender) -> decltype(onCopyLevelID(sender)) {
	using FunctionType = decltype(onCopyLevelID(sender))(*)(InfoLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x895950, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto InfoLayer::onLevelInfo(cocos2d::CCObject* sender) -> decltype(onLevelInfo(sender)) {
	using FunctionType = decltype(onLevelInfo(sender))(*)(InfoLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x894ef0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto InfoLayer::onMore(cocos2d::CCObject* sender) -> decltype(onMore(sender)) {
	using FunctionType = decltype(onMore(sender))(*)(InfoLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x893680, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto InfoLayer::onNextPage(cocos2d::CCObject* sender) -> decltype(onNextPage(sender)) {
	using FunctionType = decltype(onNextPage(sender))(*)(InfoLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x894080, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto InfoLayer::onOriginal(cocos2d::CCObject* sender) -> decltype(onOriginal(sender)) {
	using FunctionType = decltype(onOriginal(sender))(*)(InfoLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x893910, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto InfoLayer::onPrevPage(cocos2d::CCObject* sender) -> decltype(onPrevPage(sender)) {
	using FunctionType = decltype(onPrevPage(sender))(*)(InfoLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x894060, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto InfoLayer::onRefreshComments(cocos2d::CCObject* sender) -> decltype(onRefreshComments(sender)) {
	using FunctionType = decltype(onRefreshComments(sender))(*)(InfoLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x895480, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto InfoLayer::onSimilar(cocos2d::CCObject* sender) -> decltype(onSimilar(sender)) {
	using FunctionType = decltype(onSimilar(sender))(*)(InfoLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x895bd0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto InfoLayer::parentalCommentsDisabled() -> decltype(parentalCommentsDisabled()) {
	using FunctionType = decltype(parentalCommentsDisabled())(*)(InfoLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x893520, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto InfoLayer::setupCommentsBrowser(cocos2d::CCArray* comments) -> decltype(setupCommentsBrowser(comments)) {
	using FunctionType = decltype(setupCommentsBrowser(comments))(*)(InfoLayer*, cocos2d::CCArray*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x894ad0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, comments);
}

auto InfoLayer::setupLevelInfo() -> decltype(setupLevelInfo()) {
	using FunctionType = decltype(setupLevelInfo())(*)(InfoLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8936f0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto InfoLayer::toggleCommentMode(cocos2d::CCObject* sender) -> decltype(toggleCommentMode(sender)) {
	using FunctionType = decltype(toggleCommentMode(sender))(*)(InfoLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8941e0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto InfoLayer::toggleExtendedMode(cocos2d::CCObject* sender) -> decltype(toggleExtendedMode(sender)) {
	using FunctionType = decltype(toggleExtendedMode(sender))(*)(InfoLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8942c0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto InfoLayer::toggleSmallCommentMode(cocos2d::CCObject* sender) -> decltype(toggleSmallCommentMode(sender)) {
	using FunctionType = decltype(toggleSmallCommentMode(sender))(*)(InfoLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8942f0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto InfoLayer::updateCommentModeButtons() -> decltype(updateCommentModeButtons()) {
	using FunctionType = decltype(updateCommentModeButtons())(*)(InfoLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x894520, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto InfoLayer::updateLevelsLabel() -> decltype(updateLevelsLabel()) {
	using FunctionType = decltype(updateLevelsLabel())(*)(InfoLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8967d0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}
