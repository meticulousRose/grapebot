
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/AudioAssetsBrowser.hpp>
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

auto AudioAssetsBrowser::registerWithTouchDispatcher() -> decltype(registerWithTouchDispatcher()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&AudioAssetsBrowser::registerWithTouchDispatcher), this);
	using FunctionType = decltype(registerWithTouchDispatcher())(*)(AudioAssetsBrowser*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x78d9e8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto AudioAssetsBrowser::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&AudioAssetsBrowser::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(AudioAssetsBrowser*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x78d96c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto AudioAssetsBrowser::musicActionFinished(GJMusicAction action) -> decltype(musicActionFinished(action)) {
	auto self = addresser::thunkAdjust(Resolve<GJMusicAction>::func(&AudioAssetsBrowser::musicActionFinished), this);
	using FunctionType = decltype(musicActionFinished(action))(*)(AudioAssetsBrowser*, GJMusicAction);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x78d918, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, action);
}

auto AudioAssetsBrowser::musicActionFailed(GJMusicAction action) -> decltype(musicActionFailed(action)) {
	auto self = addresser::thunkAdjust(Resolve<GJMusicAction>::func(&AudioAssetsBrowser::musicActionFailed), this);
	using FunctionType = decltype(musicActionFailed(action))(*)(AudioAssetsBrowser*, GJMusicAction);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x78d924, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, action);
}

auto AudioAssetsBrowser::cellPerformedAction(TableViewCell* cell, int listType, CellAction action, cocos2d::CCNode* parent) -> decltype(cellPerformedAction(cell, listType, action, parent)) {
	auto self = addresser::thunkAdjust(Resolve<TableViewCell*, int, CellAction, cocos2d::CCNode*>::func(&AudioAssetsBrowser::cellPerformedAction), this);
	using FunctionType = decltype(cellPerformedAction(cell, listType, action, parent))(*)(AudioAssetsBrowser*, TableViewCell*, int, CellAction, cocos2d::CCNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x78d938, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, cell, listType, action, parent);
}

auto AudioAssetsBrowser::getSelectedCellIdx() -> decltype(getSelectedCellIdx()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&AudioAssetsBrowser::getSelectedCellIdx), this);
	using FunctionType = decltype(getSelectedCellIdx())(*)(AudioAssetsBrowser*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x78d948, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto AudioAssetsBrowser::getCellDelegateType() -> decltype(getCellDelegateType()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&AudioAssetsBrowser::getCellDelegateType), this);
	using FunctionType = decltype(getCellDelegateType())(*)(AudioAssetsBrowser*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x78d958, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto AudioAssetsBrowser::init(std::vector<int>& songIds, std::vector<int>& sfxIds) -> decltype(init(songIds, sfxIds)) {
	using FunctionType = decltype(init(songIds, sfxIds))(*)(AudioAssetsBrowser*, std::vector<int>&, std::vector<int>&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x78cb30, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, songIds, sfxIds);
}

auto AudioAssetsBrowser::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	using FunctionType = decltype(onClose(sender))(*)(AudioAssetsBrowser*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x78d068, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto AudioAssetsBrowser::onInfo(cocos2d::CCObject* sender) -> decltype(onInfo(sender)) {
	using FunctionType = decltype(onInfo(sender))(*)(AudioAssetsBrowser*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x78d0a4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto AudioAssetsBrowser::onPage(cocos2d::CCObject* sender) -> decltype(onPage(sender)) {
	using FunctionType = decltype(onPage(sender))(*)(AudioAssetsBrowser*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x78d934, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto AudioAssetsBrowser::setupList() -> decltype(setupList()) {
	using FunctionType = decltype(setupList())(*)(AudioAssetsBrowser*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x78d6e4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto AudioAssetsBrowser::trySetupAudioBrowser() -> decltype(trySetupAudioBrowser()) {
	using FunctionType = decltype(trySetupAudioBrowser())(*)(AudioAssetsBrowser*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x78d878, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}
