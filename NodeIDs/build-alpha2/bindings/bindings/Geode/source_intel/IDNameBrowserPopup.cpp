
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/IDNameBrowserPopup.hpp>
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

auto IDNameBrowserPopup::ccTouchBegan(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) -> decltype(ccTouchBegan(touch, event)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&IDNameBrowserPopup::ccTouchBegan), this);
	using FunctionType = decltype(ccTouchBegan(touch, event))(*)(IDNameBrowserPopup*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x90c9c0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, touch, event);
}

auto IDNameBrowserPopup::ccTouchMoved(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) -> decltype(ccTouchMoved(touch, event)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&IDNameBrowserPopup::ccTouchMoved), this);
	using FunctionType = decltype(ccTouchMoved(touch, event))(*)(IDNameBrowserPopup*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x90ca70, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, touch, event);
}

auto IDNameBrowserPopup::ccTouchEnded(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) -> decltype(ccTouchEnded(touch, event)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&IDNameBrowserPopup::ccTouchEnded), this);
	using FunctionType = decltype(ccTouchEnded(touch, event))(*)(IDNameBrowserPopup*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x90cb10, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, touch, event);
}

auto IDNameBrowserPopup::ccTouchCancelled(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) -> decltype(ccTouchCancelled(touch, event)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&IDNameBrowserPopup::ccTouchCancelled), this);
	using FunctionType = decltype(ccTouchCancelled(touch, event))(*)(IDNameBrowserPopup*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x90cbb0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, touch, event);
}

auto IDNameBrowserPopup::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&IDNameBrowserPopup::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(IDNameBrowserPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x90c990, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto IDNameBrowserPopup::show() -> decltype(show()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&IDNameBrowserPopup::show), this);
	using FunctionType = decltype(show())(*)(IDNameBrowserPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x90c930, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto IDNameBrowserPopup::textChanged(CCTextInputNode* p0) -> decltype(textChanged(p0)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&IDNameBrowserPopup::textChanged), this);
	using FunctionType = decltype(textChanged(p0))(*)(IDNameBrowserPopup*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x90c460, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto IDNameBrowserPopup::textInputClosed(CCTextInputNode* p0) -> decltype(textInputClosed(p0)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&IDNameBrowserPopup::textInputClosed), this);
	using FunctionType = decltype(textInputClosed(p0))(*)(IDNameBrowserPopup*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x90c880, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto IDNameBrowserPopup::virtualRowCount() -> decltype(virtualRowCount()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&IDNameBrowserPopup::virtualRowCount), this);
	using FunctionType = decltype(virtualRowCount())(*)(IDNameBrowserPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x90bb70, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto IDNameBrowserPopup::virtualRowHeight(int p0) -> decltype(virtualRowHeight(p0)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&IDNameBrowserPopup::virtualRowHeight), this);
	using FunctionType = decltype(virtualRowHeight(p0))(*)(IDNameBrowserPopup*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x90bbb0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto IDNameBrowserPopup::mountVirtualRow(int p0, cocos2d::CCNode* p1, cocos2d::CCMenu* p2) -> decltype(mountVirtualRow(p0, p1, p2)) {
	auto self = addresser::thunkAdjust(Resolve<int, cocos2d::CCNode*, cocos2d::CCMenu*>::func(&IDNameBrowserPopup::mountVirtualRow), this);
	using FunctionType = decltype(mountVirtualRow(p0, p1, p2))(*)(IDNameBrowserPopup*, int, cocos2d::CCNode*, cocos2d::CCMenu*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x90bbd0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1, p2);
}
