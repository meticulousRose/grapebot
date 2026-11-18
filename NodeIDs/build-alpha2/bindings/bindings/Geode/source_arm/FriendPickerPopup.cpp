
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/FriendPickerPopup.hpp>
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

auto FriendPickerPopup::requestPage(int page) -> decltype(requestPage(page)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&FriendPickerPopup::requestPage), this);
	using FunctionType = decltype(requestPage(page))(*)(FriendPickerPopup*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x81e1a8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, page);
}

auto FriendPickerPopup::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCObject*>::func(&FriendPickerPopup::onClose), this);
	using FunctionType = decltype(onClose(sender))(*)(FriendPickerPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x81f0d8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, sender);
}

auto FriendPickerPopup::virtualRowCount() -> decltype(virtualRowCount()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&FriendPickerPopup::virtualRowCount), this);
	using FunctionType = decltype(virtualRowCount())(*)(FriendPickerPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x81eb64, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto FriendPickerPopup::virtualRowHeight(int p0) -> decltype(virtualRowHeight(p0)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&FriendPickerPopup::virtualRowHeight), this);
	using FunctionType = decltype(virtualRowHeight(p0))(*)(FriendPickerPopup*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x81eb84, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto FriendPickerPopup::mountVirtualRow(int p0, cocos2d::CCNode* p1, cocos2d::CCMenu* p2) -> decltype(mountVirtualRow(p0, p1, p2)) {
	auto self = addresser::thunkAdjust(Resolve<int, cocos2d::CCNode*, cocos2d::CCMenu*>::func(&FriendPickerPopup::mountVirtualRow), this);
	using FunctionType = decltype(mountVirtualRow(p0, p1, p2))(*)(FriendPickerPopup*, int, cocos2d::CCNode*, cocos2d::CCMenu*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x81eb9c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1, p2);
}

auto FriendPickerPopup::getUserListFinished(cocos2d::CCArray* p0, UserListType p1) -> decltype(getUserListFinished(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCArray*, UserListType>::func(&FriendPickerPopup::getUserListFinished), this);
	using FunctionType = decltype(getUserListFinished(p0, p1))(*)(FriendPickerPopup*, cocos2d::CCArray*, UserListType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x81e1b0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto FriendPickerPopup::getUserListFailed(UserListType p0, GJErrorCode p1) -> decltype(getUserListFailed(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<UserListType, GJErrorCode>::func(&FriendPickerPopup::getUserListFailed), this);
	using FunctionType = decltype(getUserListFailed(p0, p1))(*)(FriendPickerPopup*, UserListType, GJErrorCode);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x81e888, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto FriendPickerPopup::textChanged(CCTextInputNode* p0) -> decltype(textChanged(p0)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&FriendPickerPopup::textChanged), this);
	using FunctionType = decltype(textChanged(p0))(*)(FriendPickerPopup*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x81ea00, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto FriendPickerPopup::init(FriendPickerDelegate* p0, bool p1, bool p2, bool p3, bool p4) -> decltype(init(p0, p1, p2, p3, p4)) {
	using FunctionType = decltype(init(p0, p1, p2, p3, p4))(*)(FriendPickerPopup*, FriendPickerDelegate*, bool, bool, bool, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x81d5ac, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1, p2, p3, p4);
}
