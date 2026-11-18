
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/RenameThreadPopup.hpp>
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

auto RenameThreadPopup::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&RenameThreadPopup::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(RenameThreadPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8314f0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto RenameThreadPopup::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCObject*>::func(&RenameThreadPopup::onClose), this);
	using FunctionType = decltype(onClose(sender))(*)(RenameThreadPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x82fa98, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, sender);
}

auto RenameThreadPopup::threadUpdateFinished(int p0, int p1) -> decltype(threadUpdateFinished(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<int, int>::func(&RenameThreadPopup::threadUpdateFinished), this);
	using FunctionType = decltype(threadUpdateFinished(p0, p1))(*)(RenameThreadPopup*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x82f2f8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto RenameThreadPopup::threadUpdateFailed(int p0, int p1) -> decltype(threadUpdateFailed(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<int, int>::func(&RenameThreadPopup::threadUpdateFailed), this);
	using FunctionType = decltype(threadUpdateFailed(p0, p1))(*)(RenameThreadPopup*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x82f4b8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto RenameThreadPopup::threadMessagesFinished(int p0, cocos2d::CCArray* p1, bool p2) -> decltype(threadMessagesFinished(p0, p1, p2)) {
	auto self = addresser::thunkAdjust(Resolve<int, cocos2d::CCArray*, bool>::func(&RenameThreadPopup::threadMessagesFinished), this);
	using FunctionType = decltype(threadMessagesFinished(p0, p1, p2))(*)(RenameThreadPopup*, int, cocos2d::CCArray*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x82f690, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1, p2);
}

auto RenameThreadPopup::threadMessagesFailed(int p0) -> decltype(threadMessagesFailed(p0)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&RenameThreadPopup::threadMessagesFailed), this);
	using FunctionType = decltype(threadMessagesFailed(p0))(*)(RenameThreadPopup*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x82f73c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto RenameThreadPopup::threadSearchFinished(int p0, cocos2d::CCArray* p1, bool p2) -> decltype(threadSearchFinished(p0, p1, p2)) {
	auto self = addresser::thunkAdjust(Resolve<int, cocos2d::CCArray*, bool>::func(&RenameThreadPopup::threadSearchFinished), this);
	using FunctionType = decltype(threadSearchFinished(p0, p1, p2))(*)(RenameThreadPopup*, int, cocos2d::CCArray*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x82f7e8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1, p2);
}

auto RenameThreadPopup::threadSearchFailed(int p0) -> decltype(threadSearchFailed(p0)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&RenameThreadPopup::threadSearchFailed), this);
	using FunctionType = decltype(threadSearchFailed(p0))(*)(RenameThreadPopup*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x82f894, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto RenameThreadPopup::threadSendFailed() -> decltype(threadSendFailed()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&RenameThreadPopup::threadSendFailed), this);
	using FunctionType = decltype(threadSendFailed())(*)(RenameThreadPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x82f9ec, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}
