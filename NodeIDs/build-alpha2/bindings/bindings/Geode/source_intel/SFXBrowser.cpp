#include <Geode/cocos/cocoa/CCObject.h>

#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/SFXBrowser.hpp>
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

SFXBrowser::SFXBrowser() : SFXBrowser(geode::CutoffConstructor, sizeof(SFXBrowser)) {
	// here we construct it as normal as we can, then destruct it
	// using the generated functions. this ensures no memory gets leaked
	// no crashes :pray:
	geode::DestructorLock::addLock(this);
	SFXBrowser::~SFXBrowser();

	using FunctionType = void(*)(SFXBrowser*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4358b0, tulip::hook::TulipConvention::Default);
	reinterpret_cast<FunctionType>(func)(this);
}

SFXBrowser::~SFXBrowser() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(SFXBrowser*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x8b3120, tulip::hook::TulipConvention::Default);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) SFXBrowser(geode::CutoffConstructor, sizeof(SFXBrowser));
		geode::DestructorLock::addLock(this);
	}
}

auto SFXBrowser::create(int p0, int p1) -> decltype(create(p0, p1)) {
	using FunctionType = decltype(create(p0, p1))(*)(int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x42bf40, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1);
}

auto SFXBrowser::registerWithTouchDispatcher() -> decltype(registerWithTouchDispatcher()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&SFXBrowser::registerWithTouchDispatcher), this);
	using FunctionType = decltype(registerWithTouchDispatcher())(*)(SFXBrowser*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x435300, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto SFXBrowser::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&SFXBrowser::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(SFXBrowser*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4352d0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto SFXBrowser::musicActionFinished(GJMusicAction action) -> decltype(musicActionFinished(action)) {
	auto self = addresser::thunkAdjust(Resolve<GJMusicAction>::func(&SFXBrowser::musicActionFinished), this);
	using FunctionType = decltype(musicActionFinished(action))(*)(SFXBrowser*, GJMusicAction);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x431230, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, action);
}

auto SFXBrowser::musicActionFailed(GJMusicAction action) -> decltype(musicActionFailed(action)) {
	auto self = addresser::thunkAdjust(Resolve<GJMusicAction>::func(&SFXBrowser::musicActionFailed), this);
	using FunctionType = decltype(musicActionFailed(action))(*)(SFXBrowser*, GJMusicAction);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x431330, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, action);
}

auto SFXBrowser::sortSelectClosed(SelectSFXSortLayer* layer) -> decltype(sortSelectClosed(layer)) {
	auto self = addresser::thunkAdjust(Resolve<SelectSFXSortLayer*>::func(&SFXBrowser::sortSelectClosed), this);
	using FunctionType = decltype(sortSelectClosed(layer))(*)(SFXBrowser*, SelectSFXSortLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4344c0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, layer);
}

auto SFXBrowser::setTextPopupClosed(SetTextPopup* popup, std::string text) -> decltype(setTextPopupClosed(popup, text)) {
	auto self = addresser::thunkAdjust(Resolve<SetTextPopup*, std::string>::func(&SFXBrowser::setTextPopupClosed), this);
	using FunctionType = decltype(setTextPopupClosed(popup, text))(*)(SFXBrowser*, SetTextPopup*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x433ac0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, popup, text);
}

auto SFXBrowser::cellPerformedAction(TableViewCell* cell, int listType, CellAction action, cocos2d::CCNode* parent) -> decltype(cellPerformedAction(cell, listType, action, parent)) {
	auto self = addresser::thunkAdjust(Resolve<TableViewCell*, int, CellAction, cocos2d::CCNode*>::func(&SFXBrowser::cellPerformedAction), this);
	using FunctionType = decltype(cellPerformedAction(cell, listType, action, parent))(*)(SFXBrowser*, TableViewCell*, int, CellAction, cocos2d::CCNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4349b0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, cell, listType, action, parent);
}

auto SFXBrowser::getSelectedCellIdx() -> decltype(getSelectedCellIdx()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&SFXBrowser::getSelectedCellIdx), this);
	using FunctionType = decltype(getSelectedCellIdx())(*)(SFXBrowser*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x435290, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto SFXBrowser::shouldSnapToSelected() -> decltype(shouldSnapToSelected()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&SFXBrowser::shouldSnapToSelected), this);
	using FunctionType = decltype(shouldSnapToSelected())(*)(SFXBrowser*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4352b0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto SFXBrowser::rebuildContent() -> decltype(rebuildContent()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&SFXBrowser::rebuildContent), this);
	using FunctionType = decltype(rebuildContent())(*)(SFXBrowser*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4346e0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto SFXBrowser::sfxFolderPicked(SFXFolderPickerPopup* p0, int p1, std::string const& p2) -> decltype(sfxFolderPicked(p0, p1, p2)) {
	auto self = addresser::thunkAdjust(Resolve<SFXFolderPickerPopup*, int, std::string const&>::func(&SFXBrowser::sfxFolderPicked), this);
	using FunctionType = decltype(sfxFolderPicked(p0, p1, p2))(*)(SFXBrowser*, SFXFolderPickerPopup*, int, std::string const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x432cb0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1, p2);
}

auto SFXBrowser::sfxFoldersPicked(SFXFolderPickerPopup* p0, std::set<int> const& p1) -> decltype(sfxFoldersPicked(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<SFXFolderPickerPopup*, std::set<int> const&>::func(&SFXBrowser::sfxFoldersPicked), this);
	using FunctionType = decltype(sfxFoldersPicked(p0, p1))(*)(SFXBrowser*, SFXFolderPickerPopup*, std::set<int> const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x433460, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto SFXBrowser::FLAlert_Clicked(FLAlertLayer* p0, bool p1) -> decltype(FLAlert_Clicked(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<FLAlertLayer*, bool>::func(&SFXBrowser::FLAlert_Clicked), this);
	using FunctionType = decltype(FLAlert_Clicked(p0, p1))(*)(SFXBrowser*, FLAlertLayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x433fd0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto SFXBrowser::textChanged(CCTextInputNode* p0) -> decltype(textChanged(p0)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&SFXBrowser::textChanged), this);
	using FunctionType = decltype(textChanged(p0))(*)(SFXBrowser*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x434860, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto SFXBrowser::getSelectedCellCustomIdx() -> decltype(getSelectedCellCustomIdx()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&SFXBrowser::getSelectedCellCustomIdx), this);
	using FunctionType = decltype(getSelectedCellCustomIdx())(*)(SFXBrowser*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4351c0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto SFXBrowser::allowsCustomSFXActions() -> decltype(allowsCustomSFXActions()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&SFXBrowser::allowsCustomSFXActions), this);
	using FunctionType = decltype(allowsCustomSFXActions())(*)(SFXBrowser*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4351e0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto SFXBrowser::isCustomIDSelected(int p0) -> decltype(isCustomIDSelected(p0)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&SFXBrowser::isCustomIDSelected), this);
	using FunctionType = decltype(isCustomIDSelected(p0))(*)(SFXBrowser*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4333e0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto SFXBrowser::inCustomSFXTree() -> decltype(inCustomSFXTree()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&SFXBrowser::inCustomSFXTree), this);
	using FunctionType = decltype(inCustomSFXTree())(*)(SFXBrowser*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x435200, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto SFXBrowser::showsSFXInfoButton() -> decltype(showsSFXInfoButton()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&SFXBrowser::showsSFXInfoButton), this);
	using FunctionType = decltype(showsSFXInfoButton())(*)(SFXBrowser*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x435240, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto SFXBrowser::init(int p0, int p1) -> decltype(init(p0, p1)) {
	using FunctionType = decltype(init(p0, p1))(*)(SFXBrowser*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x42bfb0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1);
}

auto SFXBrowser::onImportFile(cocos2d::CCObject* sender) -> decltype(onImportFile(sender)) {
	using FunctionType = decltype(onImportFile(sender))(*)(SFXBrowser*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x42f570, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SFXBrowser::onPage(cocos2d::CCObject* sender) -> decltype(onPage(sender)) {
	using FunctionType = decltype(onPage(sender))(*)(SFXBrowser*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x42e1f0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SFXBrowser::onSorting(cocos2d::CCObject* sender) -> decltype(onSorting(sender)) {
	using FunctionType = decltype(onSorting(sender))(*)(SFXBrowser*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x42e300, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SFXBrowser::onToggleCompactMode(cocos2d::CCObject* sender) -> decltype(onToggleCompactMode(sender)) {
	using FunctionType = decltype(onToggleCompactMode(sender))(*)(SFXBrowser*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x42e350, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SFXBrowser::onUpdateLibrary(cocos2d::CCObject* sender) -> decltype(onUpdateLibrary(sender)) {
	using FunctionType = decltype(onUpdateLibrary(sender))(*)(SFXBrowser*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x42e290, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SFXBrowser::refreshLevelIDList(SFXSearchResult* p0) -> decltype(refreshLevelIDList(p0)) {
	using FunctionType = decltype(refreshLevelIDList(p0))(*)(SFXBrowser*, SFXSearchResult*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4304e0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto SFXBrowser::setupSFXBrowser() -> decltype(setupSFXBrowser()) {
	using FunctionType = decltype(setupSFXBrowser())(*)(SFXBrowser*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x42fcc0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SFXBrowser::updatePageLabel() -> decltype(updatePageLabel()) {
	using FunctionType = decltype(updatePageLabel())(*)(SFXBrowser*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x432480, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}
