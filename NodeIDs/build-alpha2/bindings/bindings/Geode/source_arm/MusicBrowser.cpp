
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/MusicBrowser.hpp>
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

auto MusicBrowser::update(float dt) -> decltype(update(dt)) {
	auto self = addresser::thunkAdjust(Resolve<float>::func(&MusicBrowser::update), this);
	using FunctionType = decltype(update(dt))(*)(MusicBrowser*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5fcdcc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, dt);
}

auto MusicBrowser::registerWithTouchDispatcher() -> decltype(registerWithTouchDispatcher()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&MusicBrowser::registerWithTouchDispatcher), this);
	using FunctionType = decltype(registerWithTouchDispatcher())(*)(MusicBrowser*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5fe7f4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto MusicBrowser::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&MusicBrowser::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(MusicBrowser*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5fe7e8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto MusicBrowser::musicActionFinished(GJMusicAction action) -> decltype(musicActionFinished(action)) {
	auto self = addresser::thunkAdjust(Resolve<GJMusicAction>::func(&MusicBrowser::musicActionFinished), this);
	using FunctionType = decltype(musicActionFinished(action))(*)(MusicBrowser*, GJMusicAction);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5fdd28, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, action);
}

auto MusicBrowser::musicActionFailed(GJMusicAction action) -> decltype(musicActionFailed(action)) {
	auto self = addresser::thunkAdjust(Resolve<GJMusicAction>::func(&MusicBrowser::musicActionFailed), this);
	using FunctionType = decltype(musicActionFailed(action))(*)(MusicBrowser*, GJMusicAction);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5fddf0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, action);
}

auto MusicBrowser::sliderEnded(Slider* slider) -> decltype(sliderEnded(slider)) {
	auto self = addresser::thunkAdjust(Resolve<Slider*>::func(&MusicBrowser::sliderEnded), this);
	using FunctionType = decltype(sliderEnded(slider))(*)(MusicBrowser*, Slider*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5fd200, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, slider);
}

auto MusicBrowser::cellPerformedAction(TableViewCell* cell, int listType, CellAction action, cocos2d::CCNode* parent) -> decltype(cellPerformedAction(cell, listType, action, parent)) {
	auto self = addresser::thunkAdjust(Resolve<TableViewCell*, int, CellAction, cocos2d::CCNode*>::func(&MusicBrowser::cellPerformedAction), this);
	using FunctionType = decltype(cellPerformedAction(cell, listType, action, parent))(*)(MusicBrowser*, TableViewCell*, int, CellAction, cocos2d::CCNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5fe170, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, cell, listType, action, parent);
}

auto MusicBrowser::getSelectedCellIdx() -> decltype(getSelectedCellIdx()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&MusicBrowser::getSelectedCellIdx), this);
	using FunctionType = decltype(getSelectedCellIdx())(*)(MusicBrowser*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5fe210, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto MusicBrowser::FLAlert_Clicked(FLAlertLayer* layer, bool btn2) -> decltype(FLAlert_Clicked(layer, btn2)) {
	auto self = addresser::thunkAdjust(Resolve<FLAlertLayer*, bool>::func(&MusicBrowser::FLAlert_Clicked), this);
	using FunctionType = decltype(FLAlert_Clicked(layer, btn2))(*)(MusicBrowser*, FLAlertLayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5fe720, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, layer, btn2);
}

auto MusicBrowser::textChanged(CCTextInputNode* p0) -> decltype(textChanged(p0)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&MusicBrowser::textChanged), this);
	using FunctionType = decltype(textChanged(p0))(*)(MusicBrowser*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5fe220, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto MusicBrowser::sortSelectClosed(SelectSFXSortLayer* p0) -> decltype(sortSelectClosed(p0)) {
	auto self = addresser::thunkAdjust(Resolve<SelectSFXSortLayer*>::func(&MusicBrowser::sortSelectClosed), this);
	using FunctionType = decltype(sortSelectClosed(p0))(*)(MusicBrowser*, SelectSFXSortLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5fe674, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto MusicBrowser::onPage(cocos2d::CCObject* sender) -> decltype(onPage(sender)) {
	using FunctionType = decltype(onPage(sender))(*)(MusicBrowser*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5fc518, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto MusicBrowser::onPlaybackControl(cocos2d::CCObject* sender) -> decltype(onPlaybackControl(sender)) {
	using FunctionType = decltype(onPlaybackControl(sender))(*)(MusicBrowser*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5fcf14, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto MusicBrowser::setupList(MusicSearchResult* result) -> decltype(setupList(result)) {
	using FunctionType = decltype(setupList(result))(*)(MusicBrowser*, MusicSearchResult*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5fd720, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, result);
}

auto MusicBrowser::setupMusicBrowser() -> decltype(setupMusicBrowser()) {
	using FunctionType = decltype(setupMusicBrowser())(*)(MusicBrowser*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x504ba0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto MusicBrowser::sliderChanged(cocos2d::CCObject* sender) -> decltype(sliderChanged(sender)) {
	using FunctionType = decltype(sliderChanged(sender))(*)(MusicBrowser*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5fcf0c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto MusicBrowser::trySetupMusicBrowser() -> decltype(trySetupMusicBrowser()) {
	using FunctionType = decltype(trySetupMusicBrowser())(*)(MusicBrowser*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3a6b60, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto MusicBrowser::updatePageLabel() -> decltype(updatePageLabel()) {
	using FunctionType = decltype(updatePageLabel())(*)(MusicBrowser*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5fdfbc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}
