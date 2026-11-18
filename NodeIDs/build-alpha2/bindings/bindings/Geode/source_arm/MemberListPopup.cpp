
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/MemberListPopup.hpp>
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

auto MemberListPopup::requestPage(int page) -> decltype(requestPage(page)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&MemberListPopup::requestPage), this);
	using FunctionType = decltype(requestPage(page))(*)(MemberListPopup*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x823338, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, page);
}

auto MemberListPopup::friendPicked(GJUserScore* p0) -> decltype(friendPicked(p0)) {
	auto self = addresser::thunkAdjust(Resolve<GJUserScore*>::func(&MemberListPopup::friendPicked), this);
	using FunctionType = decltype(friendPicked(p0))(*)(MemberListPopup*, GJUserScore*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x823d98, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto MemberListPopup::isRecipientSelected(int p0) -> decltype(isRecipientSelected(p0)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&MemberListPopup::isRecipientSelected), this);
	using FunctionType = decltype(isRecipientSelected(p0))(*)(MemberListPopup*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x823f54, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto MemberListPopup::selectedRecipientCount() -> decltype(selectedRecipientCount()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&MemberListPopup::selectedRecipientCount), this);
	using FunctionType = decltype(selectedRecipientCount())(*)(MemberListPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x824064, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto MemberListPopup::selectedRecipients() -> decltype(selectedRecipients()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&MemberListPopup::selectedRecipients), this);
	using FunctionType = decltype(selectedRecipients())(*)(MemberListPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x824084, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto MemberListPopup::pickerRowState(int p0) -> decltype(pickerRowState(p0)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&MemberListPopup::pickerRowState), this);
	using FunctionType = decltype(pickerRowState(p0))(*)(MemberListPopup*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x824094, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto MemberListPopup::pickerCountBase() -> decltype(pickerCountBase()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&MemberListPopup::pickerCountBase), this);
	using FunctionType = decltype(pickerCountBase())(*)(MemberListPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x824180, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto MemberListPopup::friendPickerAdd() -> decltype(friendPickerAdd()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&MemberListPopup::friendPickerAdd), this);
	using FunctionType = decltype(friendPickerAdd())(*)(MemberListPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8241d0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto MemberListPopup::friendPickerClosed() -> decltype(friendPickerClosed()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&MemberListPopup::friendPickerClosed), this);
	using FunctionType = decltype(friendPickerClosed())(*)(MemberListPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x824198, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto MemberListPopup::FLAlert_Clicked(FLAlertLayer* p0, bool p1) -> decltype(FLAlert_Clicked(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<FLAlertLayer*, bool>::func(&MemberListPopup::FLAlert_Clicked), this);
	using FunctionType = decltype(FLAlert_Clicked(p0, p1))(*)(MemberListPopup*, FLAlertLayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x823a1c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto MemberListPopup::threadUpdateFinished(int p0, int p1) -> decltype(threadUpdateFinished(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<int, int>::func(&MemberListPopup::threadUpdateFinished), this);
	using FunctionType = decltype(threadUpdateFinished(p0, p1))(*)(MemberListPopup*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x82449c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto MemberListPopup::threadUpdateFailed(int p0, int p1) -> decltype(threadUpdateFailed(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<int, int>::func(&MemberListPopup::threadUpdateFailed), this);
	using FunctionType = decltype(threadUpdateFailed(p0, p1))(*)(MemberListPopup*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8248a0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto MemberListPopup::threadMembersFinished(int p0) -> decltype(threadMembersFinished(p0)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&MemberListPopup::threadMembersFinished), this);
	using FunctionType = decltype(threadMembersFinished(p0))(*)(MemberListPopup*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x822d54, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto MemberListPopup::threadMembersFailed(int p0) -> decltype(threadMembersFailed(p0)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&MemberListPopup::threadMembersFailed), this);
	using FunctionType = decltype(threadMembersFailed(p0))(*)(MemberListPopup*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x822e50, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto MemberListPopup::threadMessagesFinished(int p0, cocos2d::CCArray* p1, bool p2) -> decltype(threadMessagesFinished(p0, p1, p2)) {
	auto self = addresser::thunkAdjust(Resolve<int, cocos2d::CCArray*, bool>::func(&MemberListPopup::threadMessagesFinished), this);
	using FunctionType = decltype(threadMessagesFinished(p0, p1, p2))(*)(MemberListPopup*, int, cocos2d::CCArray*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x822f4c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1, p2);
}

auto MemberListPopup::threadMessagesFailed(int p0) -> decltype(threadMessagesFailed(p0)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&MemberListPopup::threadMessagesFailed), this);
	using FunctionType = decltype(threadMessagesFailed(p0))(*)(MemberListPopup*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x82300c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto MemberListPopup::threadSearchFinished(int p0, cocos2d::CCArray* p1, bool p2) -> decltype(threadSearchFinished(p0, p1, p2)) {
	auto self = addresser::thunkAdjust(Resolve<int, cocos2d::CCArray*, bool>::func(&MemberListPopup::threadSearchFinished), this);
	using FunctionType = decltype(threadSearchFinished(p0, p1, p2))(*)(MemberListPopup*, int, cocos2d::CCArray*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x82303c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1, p2);
}

auto MemberListPopup::threadSearchFailed(int p0) -> decltype(threadSearchFailed(p0)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&MemberListPopup::threadSearchFailed), this);
	using FunctionType = decltype(threadSearchFailed(p0))(*)(MemberListPopup*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x82306c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto MemberListPopup::threadSendFailed() -> decltype(threadSendFailed()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&MemberListPopup::threadSendFailed), this);
	using FunctionType = decltype(threadSendFailed())(*)(MemberListPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x823208, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto MemberListPopup::init(GJMessageThread* p0, ThreadViewPopup* p1, bool p2) -> decltype(init(p0, p1, p2)) {
	using FunctionType = decltype(init(p0, p1, p2))(*)(MemberListPopup*, GJMessageThread*, ThreadViewPopup*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8221a4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1, p2);
}

auto MemberListPopup::refreshPolicyBtn() -> decltype(refreshPolicyBtn()) {
	using FunctionType = decltype(refreshPolicyBtn())(*)(MemberListPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x82253c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}
