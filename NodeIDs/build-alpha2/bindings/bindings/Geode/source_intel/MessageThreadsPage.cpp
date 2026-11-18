#include <Geode/cocos/cocoa/CCObject.h>

#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/MessageThreadsPage.hpp>
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

MessageThreadsPage::~MessageThreadsPage() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(MessageThreadsPage*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x927d30, tulip::hook::TulipConvention::Default);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) MessageThreadsPage(geode::CutoffConstructor, sizeof(MessageThreadsPage));
		geode::DestructorLock::addLock(this);
	}
}

auto MessageThreadsPage::create() -> decltype(create()) {
	using FunctionType = decltype(create())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x927f30, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto MessageThreadsPage::init() -> decltype(init()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&MessageThreadsPage::init), this);
	using FunctionType = decltype(init())(*)(MessageThreadsPage*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x9281c0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto MessageThreadsPage::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&MessageThreadsPage::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(MessageThreadsPage*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x92d3b0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto MessageThreadsPage::show() -> decltype(show()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&MessageThreadsPage::show), this);
	using FunctionType = decltype(show())(*)(MessageThreadsPage*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x92d250, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto MessageThreadsPage::textInputClosed(CCTextInputNode* p0) -> decltype(textInputClosed(p0)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&MessageThreadsPage::textInputClosed), this);
	using FunctionType = decltype(textInputClosed(p0))(*)(MessageThreadsPage*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x92b640, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto MessageThreadsPage::friendPicked(GJUserScore* p0) -> decltype(friendPicked(p0)) {
	auto self = addresser::thunkAdjust(Resolve<GJUserScore*>::func(&MessageThreadsPage::friendPicked), this);
	using FunctionType = decltype(friendPicked(p0))(*)(MessageThreadsPage*, GJUserScore*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x92b8c0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto MessageThreadsPage::isRecipientSelected(int p0) -> decltype(isRecipientSelected(p0)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&MessageThreadsPage::isRecipientSelected), this);
	using FunctionType = decltype(isRecipientSelected(p0))(*)(MessageThreadsPage*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x92bad0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto MessageThreadsPage::selectedRecipientCount() -> decltype(selectedRecipientCount()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&MessageThreadsPage::selectedRecipientCount), this);
	using FunctionType = decltype(selectedRecipientCount())(*)(MessageThreadsPage*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x92bbb0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto MessageThreadsPage::selectedRecipients() -> decltype(selectedRecipients()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&MessageThreadsPage::selectedRecipients), this);
	using FunctionType = decltype(selectedRecipients())(*)(MessageThreadsPage*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x92bbf0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto MessageThreadsPage::clearRecipients() -> decltype(clearRecipients()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&MessageThreadsPage::clearRecipients), this);
	using FunctionType = decltype(clearRecipients())(*)(MessageThreadsPage*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x92bc10, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto MessageThreadsPage::friendPickerClosed() -> decltype(friendPickerClosed()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&MessageThreadsPage::friendPickerClosed), this);
	using FunctionType = decltype(friendPickerClosed())(*)(MessageThreadsPage*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x92bd30, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto MessageThreadsPage::FLAlert_Clicked(FLAlertLayer* p0, bool p1) -> decltype(FLAlert_Clicked(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<FLAlertLayer*, bool>::func(&MessageThreadsPage::FLAlert_Clicked), this);
	using FunctionType = decltype(FLAlert_Clicked(p0, p1))(*)(MessageThreadsPage*, FLAlertLayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x92ae90, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto MessageThreadsPage::threadListFinished(cocos2d::CCArray* p0, int p1, int p2, int p3) -> decltype(threadListFinished(p0, p1, p2, p3)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCArray*, int, int, int>::func(&MessageThreadsPage::threadListFinished), this);
	using FunctionType = decltype(threadListFinished(p0, p1, p2, p3))(*)(MessageThreadsPage*, cocos2d::CCArray*, int, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x92c180, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1, p2, p3);
}

auto MessageThreadsPage::threadListFailed() -> decltype(threadListFailed()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&MessageThreadsPage::threadListFailed), this);
	using FunctionType = decltype(threadListFailed())(*)(MessageThreadsPage*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x92d040, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto MessageThreadsPage::threadUpdateFinished(int p0, int p1) -> decltype(threadUpdateFinished(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<int, int>::func(&MessageThreadsPage::threadUpdateFinished), this);
	using FunctionType = decltype(threadUpdateFinished(p0, p1))(*)(MessageThreadsPage*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x92b2a0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto MessageThreadsPage::threadUpdateFailed(int p0, int p1) -> decltype(threadUpdateFailed(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<int, int>::func(&MessageThreadsPage::threadUpdateFailed), this);
	using FunctionType = decltype(threadUpdateFailed(p0, p1))(*)(MessageThreadsPage*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x92b4c0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto MessageThreadsPage::applyThreadList(cocos2d::CCArray* p0, int p1, int p2, int p3, bool p4) -> decltype(applyThreadList(p0, p1, p2, p3, p4)) {
	using FunctionType = decltype(applyThreadList(p0, p1, p2, p3, p4))(*)(MessageThreadsPage*, cocos2d::CCArray*, int, int, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x92c7e0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1, p2, p3, p4);
}

auto MessageThreadsPage::onClearSearch(cocos2d::CCObject* sender) -> decltype(onClearSearch(sender)) {
	using FunctionType = decltype(onClearSearch(sender))(*)(MessageThreadsPage*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x9299a0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto MessageThreadsPage::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	using FunctionType = decltype(onClose(sender))(*)(MessageThreadsPage*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x929760, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto MessageThreadsPage::onDeleteSelected(cocos2d::CCObject* sender) -> decltype(onDeleteSelected(sender)) {
	using FunctionType = decltype(onDeleteSelected(sender))(*)(MessageThreadsPage*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x92a0c0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto MessageThreadsPage::onLegacyMessages(cocos2d::CCObject* sender) -> decltype(onLegacyMessages(sender)) {
	using FunctionType = decltype(onLegacyMessages(sender))(*)(MessageThreadsPage*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x929830, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto MessageThreadsPage::onMarkRead(cocos2d::CCObject* sender) -> decltype(onMarkRead(sender)) {
	using FunctionType = decltype(onMarkRead(sender))(*)(MessageThreadsPage*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x929f10, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto MessageThreadsPage::onNewThread(cocos2d::CCObject* sender) -> decltype(onNewThread(sender)) {
	using FunctionType = decltype(onNewThread(sender))(*)(MessageThreadsPage*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x9298c0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto MessageThreadsPage::onNextPage(cocos2d::CCObject* sender) -> decltype(onNextPage(sender)) {
	using FunctionType = decltype(onNextPage(sender))(*)(MessageThreadsPage*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x929c00, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto MessageThreadsPage::onPrevPage(cocos2d::CCObject* sender) -> decltype(onPrevPage(sender)) {
	using FunctionType = decltype(onPrevPage(sender))(*)(MessageThreadsPage*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x929be0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto MessageThreadsPage::onRefresh(cocos2d::CCObject* sender) -> decltype(onRefresh(sender)) {
	using FunctionType = decltype(onRefresh(sender))(*)(MessageThreadsPage*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x929c20, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto MessageThreadsPage::onScrollToTop(cocos2d::CCObject* sender) -> decltype(onScrollToTop(sender)) {
	using FunctionType = decltype(onScrollToTop(sender))(*)(MessageThreadsPage*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x929d40, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto MessageThreadsPage::onSearch(cocos2d::CCObject* sender) -> decltype(onSearch(sender)) {
	using FunctionType = decltype(onSearch(sender))(*)(MessageThreadsPage*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x929960, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto MessageThreadsPage::onSelectFilter(cocos2d::CCObject* sender) -> decltype(onSelectFilter(sender)) {
	using FunctionType = decltype(onSelectFilter(sender))(*)(MessageThreadsPage*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x929af0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto MessageThreadsPage::onSelectionChanged(cocos2d::CCObject* sender) -> decltype(onSelectionChanged(sender)) {
	using FunctionType = decltype(onSelectionChanged(sender))(*)(MessageThreadsPage*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x92a800, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto MessageThreadsPage::onShowInvites(cocos2d::CCObject* sender) -> decltype(onShowInvites(sender)) {
	using FunctionType = decltype(onShowInvites(sender))(*)(MessageThreadsPage*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x92a6a0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto MessageThreadsPage::onThreadsChanged(cocos2d::CCObject* sender) -> decltype(onThreadsChanged(sender)) {
	using FunctionType = decltype(onThreadsChanged(sender))(*)(MessageThreadsPage*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x92a7c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto MessageThreadsPage::onUserFilter(cocos2d::CCObject* sender) -> decltype(onUserFilter(sender)) {
	using FunctionType = decltype(onUserFilter(sender))(*)(MessageThreadsPage*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x929a40, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}
