#include <Geode/cocos/cocoa/CCObject.h>

#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/ThreadViewPopup.hpp>
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

ThreadViewPopup::ThreadViewPopup() : ThreadViewPopup(geode::CutoffConstructor, sizeof(ThreadViewPopup)) {
	// here we construct it as normal as we can, then destruct it
	// using the generated functions. this ensures no memory gets leaked
	// no crashes :pray:
	geode::DestructorLock::addLock(this);
	ThreadViewPopup::~ThreadViewPopup();

	using FunctionType = void(*)(ThreadViewPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x834680, tulip::hook::TulipConvention::Default);
	reinterpret_cast<FunctionType>(func)(this);
}

auto ThreadViewPopup::create(GJMessageThread* p0) -> decltype(create(p0)) {
	using FunctionType = decltype(create(p0))(*)(GJMessageThread*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x80fa1c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0);
}

auto ThreadViewPopup::createModView(GJMessageThread* p0, long long p1) -> decltype(createModView(p0, p1)) {
	using FunctionType = decltype(createModView(p0, p1))(*)(GJMessageThread*, long long);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x810b94, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1);
}

auto ThreadViewPopup::ccTouchBegan(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) -> decltype(ccTouchBegan(touch, event)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&ThreadViewPopup::ccTouchBegan), this);
	using FunctionType = decltype(ccTouchBegan(touch, event))(*)(ThreadViewPopup*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x81b470, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, touch, event);
}

auto ThreadViewPopup::ccTouchMoved(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) -> decltype(ccTouchMoved(touch, event)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&ThreadViewPopup::ccTouchMoved), this);
	using FunctionType = decltype(ccTouchMoved(touch, event))(*)(ThreadViewPopup*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x81b52c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, touch, event);
}

auto ThreadViewPopup::ccTouchEnded(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) -> decltype(ccTouchEnded(touch, event)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&ThreadViewPopup::ccTouchEnded), this);
	using FunctionType = decltype(ccTouchEnded(touch, event))(*)(ThreadViewPopup*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x81b5b8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, touch, event);
}

auto ThreadViewPopup::ccTouchCancelled(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) -> decltype(ccTouchCancelled(touch, event)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&ThreadViewPopup::ccTouchCancelled), this);
	using FunctionType = decltype(ccTouchCancelled(touch, event))(*)(ThreadViewPopup*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x81ba7c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, touch, event);
}

auto ThreadViewPopup::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&ThreadViewPopup::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(ThreadViewPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x81b084, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto ThreadViewPopup::keyDown(cocos2d::enumKeyCodes key, double timestamp) -> decltype(keyDown(key, timestamp)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::enumKeyCodes, double>::func(&ThreadViewPopup::keyDown), this);
	using FunctionType = decltype(keyDown(key, timestamp))(*)(ThreadViewPopup*, cocos2d::enumKeyCodes, double);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x81b204, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, key, timestamp);
}

auto ThreadViewPopup::show() -> decltype(show()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&ThreadViewPopup::show), this);
	using FunctionType = decltype(show())(*)(ThreadViewPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x81b000, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto ThreadViewPopup::emotePickerKeyDown(EmotePickerPopup* p0, cocos2d::enumKeyCodes p1, double p2) -> decltype(emotePickerKeyDown(p0, p1, p2)) {
	auto self = addresser::thunkAdjust(Resolve<EmotePickerPopup*, cocos2d::enumKeyCodes, double>::func(&ThreadViewPopup::emotePickerKeyDown), this);
	using FunctionType = decltype(emotePickerKeyDown(p0, p1, p2))(*)(ThreadViewPopup*, EmotePickerPopup*, cocos2d::enumKeyCodes, double);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x81b1e0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1, p2);
}

auto ThreadViewPopup::textChanged(CCTextInputNode* p0) -> decltype(textChanged(p0)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&ThreadViewPopup::textChanged), this);
	using FunctionType = decltype(textChanged(p0))(*)(ThreadViewPopup*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x81b380, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto ThreadViewPopup::textInputOpened(CCTextInputNode* p0) -> decltype(textInputOpened(p0)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&ThreadViewPopup::textInputOpened), this);
	using FunctionType = decltype(textInputOpened(p0))(*)(ThreadViewPopup*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x81b2f4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto ThreadViewPopup::textInputClosed(CCTextInputNode* p0) -> decltype(textInputClosed(p0)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&ThreadViewPopup::textInputClosed), this);
	using FunctionType = decltype(textInputClosed(p0))(*)(ThreadViewPopup*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x81b32c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto ThreadViewPopup::emotePickerClosed(EmotePickerPopup* p0) -> decltype(emotePickerClosed(p0)) {
	auto self = addresser::thunkAdjust(Resolve<EmotePickerPopup*>::func(&ThreadViewPopup::emotePickerClosed), this);
	using FunctionType = decltype(emotePickerClosed(p0))(*)(ThreadViewPopup*, EmotePickerPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x816064, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto ThreadViewPopup::levelPicked(GJGameLevel* p0) -> decltype(levelPicked(p0)) {
	auto self = addresser::thunkAdjust(Resolve<GJGameLevel*>::func(&ThreadViewPopup::levelPicked), this);
	using FunctionType = decltype(levelPicked(p0))(*)(ThreadViewPopup*, GJGameLevel*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8148a0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto ThreadViewPopup::listPicked(GJLevelList* p0) -> decltype(listPicked(p0)) {
	auto self = addresser::thunkAdjust(Resolve<GJLevelList*>::func(&ThreadViewPopup::listPicked), this);
	using FunctionType = decltype(listPicked(p0))(*)(ThreadViewPopup*, GJLevelList*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x814cd8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto ThreadViewPopup::shareIDPicked(int p0, bool p1) -> decltype(shareIDPicked(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<int, bool>::func(&ThreadViewPopup::shareIDPicked), this);
	using FunctionType = decltype(shareIDPicked(p0, p1))(*)(ThreadViewPopup*, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x814df8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto ThreadViewPopup::threadMessagesFinished(int p0, cocos2d::CCArray* p1, bool p2) -> decltype(threadMessagesFinished(p0, p1, p2)) {
	auto self = addresser::thunkAdjust(Resolve<int, cocos2d::CCArray*, bool>::func(&ThreadViewPopup::threadMessagesFinished), this);
	using FunctionType = decltype(threadMessagesFinished(p0, p1, p2))(*)(ThreadViewPopup*, int, cocos2d::CCArray*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8165e8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1, p2);
}

auto ThreadViewPopup::threadMessagesFailed(int p0) -> decltype(threadMessagesFailed(p0)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&ThreadViewPopup::threadMessagesFailed), this);
	using FunctionType = decltype(threadMessagesFailed(p0))(*)(ThreadViewPopup*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x817c38, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto ThreadViewPopup::threadSearchFinished(int p0, cocos2d::CCArray* p1, bool p2) -> decltype(threadSearchFinished(p0, p1, p2)) {
	auto self = addresser::thunkAdjust(Resolve<int, cocos2d::CCArray*, bool>::func(&ThreadViewPopup::threadSearchFinished), this);
	using FunctionType = decltype(threadSearchFinished(p0, p1, p2))(*)(ThreadViewPopup*, int, cocos2d::CCArray*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x813974, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1, p2);
}

auto ThreadViewPopup::threadSearchFailed(int p0) -> decltype(threadSearchFailed(p0)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&ThreadViewPopup::threadSearchFailed), this);
	using FunctionType = decltype(threadSearchFailed(p0))(*)(ThreadViewPopup*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x81401c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto ThreadViewPopup::threadSendFailed() -> decltype(threadSendFailed()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&ThreadViewPopup::threadSendFailed), this);
	using FunctionType = decltype(threadSendFailed())(*)(ThreadViewPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x81635c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto ThreadViewPopup::threadUpdateFinished(int p0, int p1) -> decltype(threadUpdateFinished(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<int, int>::func(&ThreadViewPopup::threadUpdateFinished), this);
	using FunctionType = decltype(threadUpdateFinished(p0, p1))(*)(ThreadViewPopup*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8151d4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto ThreadViewPopup::threadUpdateFailed(int p0, int p1) -> decltype(threadUpdateFailed(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<int, int>::func(&ThreadViewPopup::threadUpdateFailed), this);
	using FunctionType = decltype(threadUpdateFailed(p0, p1))(*)(ThreadViewPopup*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x815c40, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto ThreadViewPopup::virtualRowCount() -> decltype(virtualRowCount()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&ThreadViewPopup::virtualRowCount), this);
	using FunctionType = decltype(virtualRowCount())(*)(ThreadViewPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8194e0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto ThreadViewPopup::virtualRowHeight(int p0) -> decltype(virtualRowHeight(p0)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&ThreadViewPopup::virtualRowHeight), this);
	using FunctionType = decltype(virtualRowHeight(p0))(*)(ThreadViewPopup*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x81951c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto ThreadViewPopup::mountVirtualRow(int p0, cocos2d::CCNode* p1, cocos2d::CCMenu* p2) -> decltype(mountVirtualRow(p0, p1, p2)) {
	auto self = addresser::thunkAdjust(Resolve<int, cocos2d::CCNode*, cocos2d::CCMenu*>::func(&ThreadViewPopup::mountVirtualRow), this);
	using FunctionType = decltype(mountVirtualRow(p0, p1, p2))(*)(ThreadViewPopup*, int, cocos2d::CCNode*, cocos2d::CCMenu*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x819718, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1, p2);
}

auto ThreadViewPopup::unmountVirtualRow(int p0, cocos2d::CCNode* p1) -> decltype(unmountVirtualRow(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<int, cocos2d::CCNode*>::func(&ThreadViewPopup::unmountVirtualRow), this);
	using FunctionType = decltype(unmountVirtualRow(p0, p1))(*)(ThreadViewPopup*, int, cocos2d::CCNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x819544, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto ThreadViewPopup::buildMemberButton() -> decltype(buildMemberButton()) {
	using FunctionType = decltype(buildMemberButton())(*)(ThreadViewPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x81151c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto ThreadViewPopup::init(GJMessageThread* p0) -> decltype(init(p0)) {
	using FunctionType = decltype(init(p0))(*)(ThreadViewPopup*, GJMessageThread*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x80fa9c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto ThreadViewPopup::layoutComposeBar() -> decltype(layoutComposeBar()) {
	using FunctionType = decltype(layoutComposeBar())(*)(ThreadViewPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x811d7c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}
