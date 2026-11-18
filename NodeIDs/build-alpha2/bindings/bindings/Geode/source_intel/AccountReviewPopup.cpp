
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/AccountReviewPopup.hpp>
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

auto AccountReviewPopup::rebuildContent() -> decltype(rebuildContent()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&AccountReviewPopup::rebuildContent), this);
	using FunctionType = decltype(rebuildContent())(*)(AccountReviewPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x99bc10, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto AccountReviewPopup::requestPage(int page) -> decltype(requestPage(page)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&AccountReviewPopup::requestPage), this);
	using FunctionType = decltype(requestPage(page))(*)(AccountReviewPopup*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x99bb00, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, page);
}

auto AccountReviewPopup::clearPageContent() -> decltype(clearPageContent()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&AccountReviewPopup::clearPageContent), this);
	using FunctionType = decltype(clearPageContent())(*)(AccountReviewPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x99bb90, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto AccountReviewPopup::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCObject*>::func(&AccountReviewPopup::onClose), this);
	using FunctionType = decltype(onClose(sender))(*)(AccountReviewPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x994570, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, sender);
}

auto AccountReviewPopup::dropdownSelectionChanged(Dropdown* p0, int p1) -> decltype(dropdownSelectionChanged(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<Dropdown*, int>::func(&AccountReviewPopup::dropdownSelectionChanged), this);
	using FunctionType = decltype(dropdownSelectionChanged(p0, p1))(*)(AccountReviewPopup*, Dropdown*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x99bc60, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto AccountReviewPopup::reviewChoicePicked(int p0, int p1, std::string const& p2) -> decltype(reviewChoicePicked(p0, p1, p2)) {
	auto self = addresser::thunkAdjust(Resolve<int, int, std::string const&>::func(&AccountReviewPopup::reviewChoicePicked), this);
	using FunctionType = decltype(reviewChoicePicked(p0, p1, p2))(*)(AccountReviewPopup*, int, int, std::string const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x9a2920, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1, p2);
}

auto AccountReviewPopup::adminActionConfirmed(int p0, std::vector<int> const& p1, std::string const& p2) -> decltype(adminActionConfirmed(p0, p1, p2)) {
	auto self = addresser::thunkAdjust(Resolve<int, std::vector<int> const&, std::string const&>::func(&AccountReviewPopup::adminActionConfirmed), this);
	using FunctionType = decltype(adminActionConfirmed(p0, p1, p2))(*)(AccountReviewPopup*, int, std::vector<int> const&, std::string const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x9a41b0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1, p2);
}

auto AccountReviewPopup::FLAlert_Clicked(FLAlertLayer* layer, bool btn2) -> decltype(FLAlert_Clicked(layer, btn2)) {
	auto self = addresser::thunkAdjust(Resolve<FLAlertLayer*, bool>::func(&AccountReviewPopup::FLAlert_Clicked), this);
	using FunctionType = decltype(FLAlert_Clicked(layer, btn2))(*)(AccountReviewPopup*, FLAlertLayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x9a32f0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, layer, btn2);
}

auto AccountReviewPopup::onClosePopup(UploadActionPopup* p0) -> decltype(onClosePopup(p0)) {
	auto self = addresser::thunkAdjust(Resolve<UploadActionPopup*>::func(&AccountReviewPopup::onClosePopup), this);
	using FunctionType = decltype(onClosePopup(p0))(*)(AccountReviewPopup*, UploadActionPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x9a4590, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto AccountReviewPopup::commentDeleteFailed(int p0, int p1) -> decltype(commentDeleteFailed(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<int, int>::func(&AccountReviewPopup::commentDeleteFailed), this);
	using FunctionType = decltype(commentDeleteFailed(p0, p1))(*)(AccountReviewPopup*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x9a3eb0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto AccountReviewPopup::threadUpdateFinished(int p0, int p1) -> decltype(threadUpdateFinished(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<int, int>::func(&AccountReviewPopup::threadUpdateFinished), this);
	using FunctionType = decltype(threadUpdateFinished(p0, p1))(*)(AccountReviewPopup*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x9a3d10, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto AccountReviewPopup::threadUpdateFailed(int p0, int p1) -> decltype(threadUpdateFailed(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<int, int>::func(&AccountReviewPopup::threadUpdateFailed), this);
	using FunctionType = decltype(threadUpdateFailed(p0, p1))(*)(AccountReviewPopup*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x9a3dd0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto AccountReviewPopup::adminAccountReviewFinished(int p0, AccountReviewCard const& p1) -> decltype(adminAccountReviewFinished(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<int, AccountReviewCard const&>::func(&AccountReviewPopup::adminAccountReviewFinished), this);
	using FunctionType = decltype(adminAccountReviewFinished(p0, p1))(*)(AccountReviewPopup*, int, AccountReviewCard const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x9980e0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto AccountReviewPopup::adminAccountReviewFailed(int p0) -> decltype(adminAccountReviewFailed(p0)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&AccountReviewPopup::adminAccountReviewFailed), this);
	using FunctionType = decltype(adminAccountReviewFailed(p0))(*)(AccountReviewPopup*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x99ab30, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto AccountReviewPopup::adminReportedContentFinished(int p0, cocos2d::CCArray* p1, AdminReportedMeta const& p2) -> decltype(adminReportedContentFinished(p0, p1, p2)) {
	auto self = addresser::thunkAdjust(Resolve<int, cocos2d::CCArray*, AdminReportedMeta const&>::func(&AccountReviewPopup::adminReportedContentFinished), this);
	using FunctionType = decltype(adminReportedContentFinished(p0, p1, p2))(*)(AccountReviewPopup*, int, cocos2d::CCArray*, AdminReportedMeta const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x99bca0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1, p2);
}

auto AccountReviewPopup::adminReportedContentFailed(int p0) -> decltype(adminReportedContentFailed(p0)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&AccountReviewPopup::adminReportedContentFailed), this);
	using FunctionType = decltype(adminReportedContentFailed(p0))(*)(AccountReviewPopup*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x99d810, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto AccountReviewPopup::adminAbuseInfoFinished(int p0, cocos2d::CCArray* p1, AdminAbuseMeta const& p2) -> decltype(adminAbuseInfoFinished(p0, p1, p2)) {
	auto self = addresser::thunkAdjust(Resolve<int, cocos2d::CCArray*, AdminAbuseMeta const&>::func(&AccountReviewPopup::adminAbuseInfoFinished), this);
	using FunctionType = decltype(adminAbuseInfoFinished(p0, p1, p2))(*)(AccountReviewPopup*, int, cocos2d::CCArray*, AdminAbuseMeta const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x99d8b0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1, p2);
}

auto AccountReviewPopup::adminAbuseInfoFailed(int p0) -> decltype(adminAbuseInfoFailed(p0)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&AccountReviewPopup::adminAbuseInfoFailed), this);
	using FunctionType = decltype(adminAbuseInfoFailed(p0))(*)(AccountReviewPopup*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x99f090, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto AccountReviewPopup::adminUserHistoryFinished(int p0, cocos2d::CCArray* p1, int p2, int p3, int p4) -> decltype(adminUserHistoryFinished(p0, p1, p2, p3, p4)) {
	auto self = addresser::thunkAdjust(Resolve<int, cocos2d::CCArray*, int, int, int>::func(&AccountReviewPopup::adminUserHistoryFinished), this);
	using FunctionType = decltype(adminUserHistoryFinished(p0, p1, p2, p3, p4))(*)(AccountReviewPopup*, int, cocos2d::CCArray*, int, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x99f130, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1, p2, p3, p4);
}

auto AccountReviewPopup::adminUserHistoryFailed(int p0) -> decltype(adminUserHistoryFailed(p0)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&AccountReviewPopup::adminUserHistoryFailed), this);
	using FunctionType = decltype(adminUserHistoryFailed(p0))(*)(AccountReviewPopup*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x9a0ed0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto AccountReviewPopup::adminClearReportsFinished(int p0, int p1) -> decltype(adminClearReportsFinished(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<int, int>::func(&AccountReviewPopup::adminClearReportsFinished), this);
	using FunctionType = decltype(adminClearReportsFinished(p0, p1))(*)(AccountReviewPopup*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x9a3080, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto AccountReviewPopup::adminClearReportsFailed(int p0) -> decltype(adminClearReportsFailed(p0)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&AccountReviewPopup::adminClearReportsFailed), this);
	using FunctionType = decltype(adminClearReportsFailed(p0))(*)(AccountReviewPopup*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x9a3290, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto AccountReviewPopup::adminDeleteCommentsFinished(int p0) -> decltype(adminDeleteCommentsFinished(p0)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&AccountReviewPopup::adminDeleteCommentsFinished), this);
	using FunctionType = decltype(adminDeleteCommentsFinished(p0))(*)(AccountReviewPopup*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x9a42d0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto AccountReviewPopup::adminDeleteCommentsFailed() -> decltype(adminDeleteCommentsFailed()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&AccountReviewPopup::adminDeleteCommentsFailed), this);
	using FunctionType = decltype(adminDeleteCommentsFailed())(*)(AccountReviewPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x9a4450, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto AccountReviewPopup::adminCloseCaseFinished(int p0, int p1, bool p2) -> decltype(adminCloseCaseFinished(p0, p1, p2)) {
	auto self = addresser::thunkAdjust(Resolve<int, int, bool>::func(&AccountReviewPopup::adminCloseCaseFinished), this);
	using FunctionType = decltype(adminCloseCaseFinished(p0, p1, p2))(*)(AccountReviewPopup*, int, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x9a46c0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1, p2);
}

auto AccountReviewPopup::adminCloseCaseFailed(int p0) -> decltype(adminCloseCaseFailed(p0)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&AccountReviewPopup::adminCloseCaseFailed), this);
	using FunctionType = decltype(adminCloseCaseFailed(p0))(*)(AccountReviewPopup*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x9a49a0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}
