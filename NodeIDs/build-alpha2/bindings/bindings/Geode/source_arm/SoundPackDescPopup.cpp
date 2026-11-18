
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/SoundPackDescPopup.hpp>
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

auto SoundPackDescPopup::create(std::string const& p0, std::string const& p1, SoundPackDescDelegate* p2) -> decltype(create(p0, p1, p2)) {
	using FunctionType = decltype(create(p0, p1, p2))(*)(std::string const&, std::string const&, SoundPackDescDelegate*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x7dfa6c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1, p2);
}

auto SoundPackDescPopup::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&SoundPackDescPopup::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(SoundPackDescPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x7e2c3c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto SoundPackDescPopup::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCObject*>::func(&SoundPackDescPopup::onClose), this);
	using FunctionType = decltype(onClose(sender))(*)(SoundPackDescPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x7e2be0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, sender);
}

auto SoundPackDescPopup::textChanged(CCTextInputNode* p0) -> decltype(textChanged(p0)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&SoundPackDescPopup::textChanged), this);
	using FunctionType = decltype(textChanged(p0))(*)(SoundPackDescPopup*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x7e2990, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto SoundPackDescPopup::emotePicked(EmotePickerPopup* p0, EmoteDef const* p1) -> decltype(emotePicked(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<EmotePickerPopup*, EmoteDef const*>::func(&SoundPackDescPopup::emotePicked), this);
	using FunctionType = decltype(emotePicked(p0, p1))(*)(SoundPackDescPopup*, EmotePickerPopup*, EmoteDef const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x7e2b60, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto SoundPackDescPopup::emotePickerClosed(EmotePickerPopup* p0) -> decltype(emotePickerClosed(p0)) {
	auto self = addresser::thunkAdjust(Resolve<EmotePickerPopup*>::func(&SoundPackDescPopup::emotePickerClosed), this);
	using FunctionType = decltype(emotePickerClosed(p0))(*)(SoundPackDescPopup*, EmotePickerPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x7e2bd0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto SoundPackDescPopup::init(std::string const& p0, std::string const& p1, SoundPackDescDelegate* p2) -> decltype(init(p0, p1, p2)) {
	using FunctionType = decltype(init(p0, p1, p2))(*)(SoundPackDescPopup*, std::string const&, std::string const&, SoundPackDescDelegate*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x7e1dec, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1, p2);
}
