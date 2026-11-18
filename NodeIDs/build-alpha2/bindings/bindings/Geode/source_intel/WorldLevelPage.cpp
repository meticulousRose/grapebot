
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/WorldLevelPage.hpp>
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

auto WorldLevelPage::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&WorldLevelPage::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(WorldLevelPage*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3b0060, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto WorldLevelPage::show() -> decltype(show()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&WorldLevelPage::show), this);
	using FunctionType = decltype(show())(*)(WorldLevelPage*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3aff20, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto WorldLevelPage::init(GJGameLevel* level, GJWorldNode* node) -> decltype(init(level, node)) {
	using FunctionType = decltype(init(level, node))(*)(WorldLevelPage*, GJGameLevel*, GJWorldNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3aec20, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, level, node);
}

auto WorldLevelPage::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	using FunctionType = decltype(onClose(sender))(*)(WorldLevelPage*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x293e30, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto WorldLevelPage::onInfo(cocos2d::CCObject* sender) -> decltype(onInfo(sender)) {
	using FunctionType = decltype(onInfo(sender))(*)(WorldLevelPage*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3afc70, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto WorldLevelPage::onPlay(cocos2d::CCObject* sender) -> decltype(onPlay(sender)) {
	using FunctionType = decltype(onPlay(sender))(*)(WorldLevelPage*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3afc20, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto WorldLevelPage::onSong(cocos2d::CCObject* sender) -> decltype(onSong(sender)) {
	using FunctionType = decltype(onSong(sender))(*)(WorldLevelPage*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3afc40, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}
