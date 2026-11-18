
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/ThreadOptionsPopup.hpp>
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

auto ThreadOptionsPopup::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&ThreadOptionsPopup::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(ThreadOptionsPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x94ba80, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto ThreadOptionsPopup::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCObject*>::func(&ThreadOptionsPopup::onClose), this);
	using FunctionType = decltype(onClose(sender))(*)(ThreadOptionsPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x94ba10, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, sender);
}

auto ThreadOptionsPopup::FLAlert_Clicked(FLAlertLayer* p0, bool p1) -> decltype(FLAlert_Clicked(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<FLAlertLayer*, bool>::func(&ThreadOptionsPopup::FLAlert_Clicked), this);
	using FunctionType = decltype(FLAlert_Clicked(p0, p1))(*)(ThreadOptionsPopup*, FLAlertLayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x94ab00, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto ThreadOptionsPopup::threadUpdateFinished(int p0, int p1) -> decltype(threadUpdateFinished(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<int, int>::func(&ThreadOptionsPopup::threadUpdateFinished), this);
	using FunctionType = decltype(threadUpdateFinished(p0, p1))(*)(ThreadOptionsPopup*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x94ae00, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto ThreadOptionsPopup::threadUpdateFailed(int p0, int p1) -> decltype(threadUpdateFailed(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<int, int>::func(&ThreadOptionsPopup::threadUpdateFailed), this);
	using FunctionType = decltype(threadUpdateFailed(p0, p1))(*)(ThreadOptionsPopup*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x94b3c0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto ThreadOptionsPopup::threadMessagesFinished(int p0, cocos2d::CCArray* p1, bool p2) -> decltype(threadMessagesFinished(p0, p1, p2)) {
	auto self = addresser::thunkAdjust(Resolve<int, cocos2d::CCArray*, bool>::func(&ThreadOptionsPopup::threadMessagesFinished), this);
	using FunctionType = decltype(threadMessagesFinished(p0, p1, p2))(*)(ThreadOptionsPopup*, int, cocos2d::CCArray*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x94b630, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1, p2);
}

auto ThreadOptionsPopup::threadMessagesFailed(int p0) -> decltype(threadMessagesFailed(p0)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&ThreadOptionsPopup::threadMessagesFailed), this);
	using FunctionType = decltype(threadMessagesFailed(p0))(*)(ThreadOptionsPopup*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x94b6e0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto ThreadOptionsPopup::threadSearchFinished(int p0, cocos2d::CCArray* p1, bool p2) -> decltype(threadSearchFinished(p0, p1, p2)) {
	auto self = addresser::thunkAdjust(Resolve<int, cocos2d::CCArray*, bool>::func(&ThreadOptionsPopup::threadSearchFinished), this);
	using FunctionType = decltype(threadSearchFinished(p0, p1, p2))(*)(ThreadOptionsPopup*, int, cocos2d::CCArray*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x94b780, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1, p2);
}

auto ThreadOptionsPopup::threadSearchFailed(int p0) -> decltype(threadSearchFailed(p0)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&ThreadOptionsPopup::threadSearchFailed), this);
	using FunctionType = decltype(threadSearchFailed(p0))(*)(ThreadOptionsPopup*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x94b830, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto ThreadOptionsPopup::threadSendFailed() -> decltype(threadSendFailed()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&ThreadOptionsPopup::threadSendFailed), this);
	using FunctionType = decltype(threadSendFailed())(*)(ThreadOptionsPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x94b970, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto ThreadOptionsPopup::init(GJMessageThread* p0, ThreadViewPopup* p1, bool p2) -> decltype(init(p0, p1, p2)) {
	using FunctionType = decltype(init(p0, p1, p2))(*)(ThreadOptionsPopup*, GJMessageThread*, ThreadViewPopup*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x949430, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1, p2);
}
