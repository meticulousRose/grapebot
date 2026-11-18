#include <Geode/cocos/cocoa/CCObject.h>

#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/ProfilePage.hpp>
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

ProfilePage::~ProfilePage() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(ProfilePage*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x89d7e0, tulip::hook::TulipConvention::Default);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) ProfilePage(geode::CutoffConstructor, sizeof(ProfilePage));
		geode::DestructorLock::addLock(this);
	}
}

auto ProfilePage::create(int accountID, bool ownProfile) -> decltype(create(accountID, ownProfile)) {
	using FunctionType = decltype(create(accountID, ownProfile))(*)(int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x89dad0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(accountID, ownProfile);
}

auto ProfilePage::registerWithTouchDispatcher() -> decltype(registerWithTouchDispatcher()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&ProfilePage::registerWithTouchDispatcher), this);
	using FunctionType = decltype(registerWithTouchDispatcher())(*)(ProfilePage*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8a78e0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto ProfilePage::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&ProfilePage::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(ProfilePage*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8a5d20, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto ProfilePage::show() -> decltype(show()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&ProfilePage::show), this);
	using FunctionType = decltype(show())(*)(ProfilePage*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8a5fb0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto ProfilePage::FLAlert_Clicked(FLAlertLayer* layer, bool btn2) -> decltype(FLAlert_Clicked(layer, btn2)) {
	auto self = addresser::thunkAdjust(Resolve<FLAlertLayer*, bool>::func(&ProfilePage::FLAlert_Clicked), this);
	using FunctionType = decltype(FLAlert_Clicked(layer, btn2))(*)(ProfilePage*, FLAlertLayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8a5770, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, layer, btn2);
}

auto ProfilePage::updateUserScoreFinished() -> decltype(updateUserScoreFinished()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&ProfilePage::updateUserScoreFinished), this);
	using FunctionType = decltype(updateUserScoreFinished())(*)(ProfilePage*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8a5e30, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto ProfilePage::updateUserScoreFailed() -> decltype(updateUserScoreFailed()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&ProfilePage::updateUserScoreFailed), this);
	using FunctionType = decltype(updateUserScoreFailed())(*)(ProfilePage*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8a5f10, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto ProfilePage::getUserInfoFinished(GJUserScore* score) -> decltype(getUserInfoFinished(score)) {
	auto self = addresser::thunkAdjust(Resolve<GJUserScore*>::func(&ProfilePage::getUserInfoFinished), this);
	using FunctionType = decltype(getUserInfoFinished(score))(*)(ProfilePage*, GJUserScore*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8a6850, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, score);
}

auto ProfilePage::getUserInfoFailed(int id) -> decltype(getUserInfoFailed(id)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&ProfilePage::getUserInfoFailed), this);
	using FunctionType = decltype(getUserInfoFailed(id))(*)(ProfilePage*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8a6c20, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, id);
}

auto ProfilePage::userInfoChanged(GJUserScore* score) -> decltype(userInfoChanged(score)) {
	auto self = addresser::thunkAdjust(Resolve<GJUserScore*>::func(&ProfilePage::userInfoChanged), this);
	using FunctionType = decltype(userInfoChanged(score))(*)(ProfilePage*, GJUserScore*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8a6ce0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, score);
}

auto ProfilePage::loadCommentsFinished(cocos2d::CCArray* comments, char const* key) -> decltype(loadCommentsFinished(comments, key)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCArray*, char const*>::func(&ProfilePage::loadCommentsFinished), this);
	using FunctionType = decltype(loadCommentsFinished(comments, key))(*)(ProfilePage*, cocos2d::CCArray*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8a6ef0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, comments, key);
}

auto ProfilePage::loadCommentsFailed(char const* key) -> decltype(loadCommentsFailed(key)) {
	auto self = addresser::thunkAdjust(Resolve<char const*>::func(&ProfilePage::loadCommentsFailed), this);
	using FunctionType = decltype(loadCommentsFailed(key))(*)(ProfilePage*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8a6fe0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, key);
}

auto ProfilePage::setupPageInfo(std::string info, char const* key) -> decltype(setupPageInfo(info, key)) {
	auto self = addresser::thunkAdjust(Resolve<std::string, char const*>::func(&ProfilePage::setupPageInfo), this);
	using FunctionType = decltype(setupPageInfo(info, key))(*)(ProfilePage*, std::string, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8a70b0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, info, key);
}

auto ProfilePage::commentUploadFinished(int parentID) -> decltype(commentUploadFinished(parentID)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&ProfilePage::commentUploadFinished), this);
	using FunctionType = decltype(commentUploadFinished(parentID))(*)(ProfilePage*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8a75e0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, parentID);
}

auto ProfilePage::commentUploadFailed(int parentID, CommentError errorType) -> decltype(commentUploadFailed(parentID, errorType)) {
	auto self = addresser::thunkAdjust(Resolve<int, CommentError>::func(&ProfilePage::commentUploadFailed), this);
	using FunctionType = decltype(commentUploadFailed(parentID, errorType))(*)(ProfilePage*, int, CommentError);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8a7670, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, parentID, errorType);
}

auto ProfilePage::commentDeleteFailed(int id, int parentID) -> decltype(commentDeleteFailed(id, parentID)) {
	auto self = addresser::thunkAdjust(Resolve<int, int>::func(&ProfilePage::commentDeleteFailed), this);
	using FunctionType = decltype(commentDeleteFailed(id, parentID))(*)(ProfilePage*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8a7750, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, id, parentID);
}

auto ProfilePage::onClosePopup(UploadActionPopup* popup) -> decltype(onClosePopup(popup)) {
	auto self = addresser::thunkAdjust(Resolve<UploadActionPopup*>::func(&ProfilePage::onClosePopup), this);
	using FunctionType = decltype(onClosePopup(popup))(*)(ProfilePage*, UploadActionPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8a5990, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, popup);
}

auto ProfilePage::uploadActionFinished(int id, int response) -> decltype(uploadActionFinished(id, response)) {
	auto self = addresser::thunkAdjust(Resolve<int, int>::func(&ProfilePage::uploadActionFinished), this);
	using FunctionType = decltype(uploadActionFinished(id, response))(*)(ProfilePage*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8a5a10, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, id, response);
}

auto ProfilePage::uploadActionFailed(int id, int response) -> decltype(uploadActionFailed(id, response)) {
	auto self = addresser::thunkAdjust(Resolve<int, int>::func(&ProfilePage::uploadActionFailed), this);
	using FunctionType = decltype(uploadActionFailed(id, response))(*)(ProfilePage*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8a5c00, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, id, response);
}

auto ProfilePage::followUserFinished(int p0, bool p1) -> decltype(followUserFinished(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<int, bool>::func(&ProfilePage::followUserFinished), this);
	using FunctionType = decltype(followUserFinished(p0, p1))(*)(ProfilePage*, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8a53e0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto ProfilePage::followUserFailed(int p0, bool p1) -> decltype(followUserFailed(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<int, bool>::func(&ProfilePage::followUserFailed), this);
	using FunctionType = decltype(followUserFailed(p0, p1))(*)(ProfilePage*, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8a5600, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto ProfilePage::blockUser() -> decltype(blockUser()) {
	using FunctionType = decltype(blockUser())(*)(ProfilePage*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8a52a0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto ProfilePage::init(int accountID, bool ownProfile) -> decltype(init(accountID, ownProfile)) {
	using FunctionType = decltype(init(accountID, ownProfile))(*)(ProfilePage*, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x89db40, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, accountID, ownProfile);
}

auto ProfilePage::isOnWatchlist(int id) -> decltype(isOnWatchlist(id)) {
	using FunctionType = decltype(isOnWatchlist(id))(*)(ProfilePage*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x89e9c0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto ProfilePage::loadPage(int page) -> decltype(loadPage(page)) {
	using FunctionType = decltype(loadPage(page))(*)(ProfilePage*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8a68f0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, page);
}

auto ProfilePage::loadPageFromUserInfo(GJUserScore* score) -> decltype(loadPageFromUserInfo(score)) {
	using FunctionType = decltype(loadPageFromUserInfo(score))(*)(ProfilePage*, GJUserScore*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x89f240, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, score);
}

auto ProfilePage::onBlockUser(cocos2d::CCObject* sender) -> decltype(onBlockUser(sender)) {
	using FunctionType = decltype(onBlockUser(sender))(*)(ProfilePage*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x893a60, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto ProfilePage::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	using FunctionType = decltype(onClose(sender))(*)(ProfilePage*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x89e9d0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto ProfilePage::onComment(cocos2d::CCObject* sender) -> decltype(onComment(sender)) {
	using FunctionType = decltype(onComment(sender))(*)(ProfilePage*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8a4650, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto ProfilePage::onCommentHistory(cocos2d::CCObject* sender) -> decltype(onCommentHistory(sender)) {
	using FunctionType = decltype(onCommentHistory(sender))(*)(ProfilePage*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8a3420, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto ProfilePage::onCopyName(cocos2d::CCObject* sender) -> decltype(onCopyName(sender)) {
	using FunctionType = decltype(onCopyName(sender))(*)(ProfilePage*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8a3df0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto ProfilePage::onFollow(cocos2d::CCObject* sender) -> decltype(onFollow(sender)) {
	using FunctionType = decltype(onFollow(sender))(*)(ProfilePage*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x9a920, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto ProfilePage::onFriend(cocos2d::CCObject* sender) -> decltype(onFriend(sender)) {
	using FunctionType = decltype(onFriend(sender))(*)(ProfilePage*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8a2290, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto ProfilePage::onInfo(cocos2d::CCObject* sender) -> decltype(onInfo(sender)) {
	using FunctionType = decltype(onInfo(sender))(*)(ProfilePage*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8a35b0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto ProfilePage::onMyLevels(cocos2d::CCObject* sender) -> decltype(onMyLevels(sender)) {
	using FunctionType = decltype(onMyLevels(sender))(*)(ProfilePage*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8a4030, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto ProfilePage::onMyLists(cocos2d::CCObject* sender) -> decltype(onMyLists(sender)) {
	using FunctionType = decltype(onMyLists(sender))(*)(ProfilePage*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8a4210, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto ProfilePage::onNextPage(cocos2d::CCObject* sender) -> decltype(onNextPage(sender)) {
	using FunctionType = decltype(onNextPage(sender))(*)(ProfilePage*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8a5750, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto ProfilePage::onPrevPage(cocos2d::CCObject* sender) -> decltype(onPrevPage(sender)) {
	using FunctionType = decltype(onPrevPage(sender))(*)(ProfilePage*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8a5730, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto ProfilePage::onRequests(cocos2d::CCObject* sender) -> decltype(onRequests(sender)) {
	using FunctionType = decltype(onRequests(sender))(*)(ProfilePage*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8a4510, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto ProfilePage::onSendMessage(cocos2d::CCObject* sender) -> decltype(onSendMessage(sender)) {
	using FunctionType = decltype(onSendMessage(sender))(*)(ProfilePage*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8a21c0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto ProfilePage::onSettings(cocos2d::CCObject* sender) -> decltype(onSettings(sender)) {
	using FunctionType = decltype(onSettings(sender))(*)(ProfilePage*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8a4630, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto ProfilePage::onUpdate(cocos2d::CCObject* sender) -> decltype(onUpdate(sender)) {
	using FunctionType = decltype(onUpdate(sender))(*)(ProfilePage*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x89edc0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto ProfilePage::setupComments() -> decltype(setupComments()) {
	using FunctionType = decltype(setupComments())(*)(ProfilePage*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x89ea50, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto ProfilePage::setupCommentsBrowser(cocos2d::CCArray* comments) -> decltype(setupCommentsBrowser(comments)) {
	using FunctionType = decltype(setupCommentsBrowser(comments))(*)(ProfilePage*, cocos2d::CCArray*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x89f0c0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, comments);
}

auto ProfilePage::toggleMainPageVisibility(bool visible) -> decltype(toggleMainPageVisibility(visible)) {
	using FunctionType = decltype(toggleMainPageVisibility(visible))(*)(ProfilePage*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8a60f0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, visible);
}

auto ProfilePage::updateLevelsLabel() -> decltype(updateLevelsLabel()) {
	using FunctionType = decltype(updateLevelsLabel())(*)(ProfilePage*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8a75d0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}
