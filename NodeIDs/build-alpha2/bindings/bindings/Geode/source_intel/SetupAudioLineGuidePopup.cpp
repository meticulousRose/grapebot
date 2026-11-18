
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/SetupAudioLineGuidePopup.hpp>
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

auto SetupAudioLineGuidePopup::selectSettingClosed(SelectSettingLayer* layer) -> decltype(selectSettingClosed(layer)) {
	auto self = addresser::thunkAdjust(Resolve<SelectSettingLayer*>::func(&SetupAudioLineGuidePopup::selectSettingClosed), this);
	using FunctionType = decltype(selectSettingClosed(layer))(*)(SetupAudioLineGuidePopup*, SelectSettingLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5b08c0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, layer);
}

auto SetupAudioLineGuidePopup::onSpeed(cocos2d::CCObject* sender) -> decltype(onSpeed(sender)) {
	using FunctionType = decltype(onSpeed(sender))(*)(SetupAudioLineGuidePopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5b0870, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}
