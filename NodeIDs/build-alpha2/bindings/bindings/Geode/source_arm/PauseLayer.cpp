#include <Geode/cocos/cocoa/CCObject.h>

#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/PauseLayer.hpp>
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

PauseLayer::~PauseLayer() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(PauseLayer*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x3444e0, tulip::hook::TulipConvention::Default);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) PauseLayer(geode::CutoffConstructor, sizeof(PauseLayer));
		geode::DestructorLock::addLock(this);
	}
}

auto PauseLayer::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&PauseLayer::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(PauseLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3480fc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto PauseLayer::keyDown(cocos2d::enumKeyCodes key, double timestamp) -> decltype(keyDown(key, timestamp)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::enumKeyCodes, double>::func(&PauseLayer::keyDown), this);
	using FunctionType = decltype(keyDown(key, timestamp))(*)(PauseLayer*, cocos2d::enumKeyCodes, double);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x347fc0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, key, timestamp);
}

auto PauseLayer::customSetup() -> decltype(customSetup()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&PauseLayer::customSetup), this);
	using FunctionType = decltype(customSetup())(*)(PauseLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x344754, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto PauseLayer::FLAlert_Clicked(FLAlertLayer* layer, bool btn2) -> decltype(FLAlert_Clicked(layer, btn2)) {
	auto self = addresser::thunkAdjust(Resolve<FLAlertLayer*, bool>::func(&PauseLayer::FLAlert_Clicked), this);
	using FunctionType = decltype(FLAlert_Clicked(layer, btn2))(*)(PauseLayer*, FLAlertLayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x347e1c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, layer, btn2);
}

auto PauseLayer::keyUp(cocos2d::enumKeyCodes key, double timestamp) -> decltype(keyUp(key, timestamp)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::enumKeyCodes, double>::func(&PauseLayer::keyUp), this);
	using FunctionType = decltype(keyUp(key, timestamp))(*)(PauseLayer*, cocos2d::enumKeyCodes, double);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3480f4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, key, timestamp);
}

auto PauseLayer::volumeChanged() -> decltype(volumeChanged()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&PauseLayer::volumeChanged), this);
	using FunctionType = decltype(volumeChanged())(*)(PauseLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3445a0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto PauseLayer::handleAction(int action, bool down, double timestamp) -> decltype(handleAction(action, down, timestamp)) {
	auto self = addresser::thunkAdjust(Resolve<int, bool, double>::func(&PauseLayer::handleAction), this);
	using FunctionType = decltype(handleAction(action, down, timestamp))(*)(PauseLayer*, int, bool, double);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x347f00, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, action, down, timestamp);
}

auto PauseLayer::startPosSelected(StartPosBrowser* p0, int p1, StartPosObject* p2) -> decltype(startPosSelected(p0, p1, p2)) {
	auto self = addresser::thunkAdjust(Resolve<StartPosBrowser*, int, StartPosObject*>::func(&PauseLayer::startPosSelected), this);
	using FunctionType = decltype(startPosSelected(p0, p1, p2))(*)(PauseLayer*, StartPosBrowser*, int, StartPosObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x346e78, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1, p2);
}

auto PauseLayer::createStartPosPopupClosed(CreateStartPosPopup* p0) -> decltype(createStartPosPopupClosed(p0)) {
	auto self = addresser::thunkAdjust(Resolve<CreateStartPosPopup*>::func(&PauseLayer::createStartPosPopupClosed), this);
	using FunctionType = decltype(createStartPosPopupClosed(p0))(*)(PauseLayer*, CreateStartPosPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x346e98, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto PauseLayer::createToggleButton(std::string label, cocos2d::SEL_MenuHandler selector, bool toggled, cocos2d::CCMenu* menu, cocos2d::CCPoint position) -> decltype(createToggleButton(label, selector, toggled, menu, position)) {
	using FunctionType = decltype(createToggleButton(label, selector, toggled, menu, position))(*)(PauseLayer*, std::string, cocos2d::SEL_MenuHandler, bool, cocos2d::CCMenu*, cocos2d::CCPoint);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x346f8c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, label, selector, toggled, menu, position);
}

auto PauseLayer::goEdit() -> decltype(goEdit()) {
	using FunctionType = decltype(goEdit())(*)(PauseLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x347ce4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto PauseLayer::musicSliderChanged(cocos2d::CCObject* sender) -> decltype(musicSliderChanged(sender)) {
	using FunctionType = decltype(musicSliderChanged(sender))(*)(PauseLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x224294, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto PauseLayer::onChangeStartpos(cocos2d::CCObject* sender) -> decltype(onChangeStartpos(sender)) {
	using FunctionType = decltype(onChangeStartpos(sender))(*)(PauseLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x346918, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto PauseLayer::onCreateStartpos(cocos2d::CCObject* sender) -> decltype(onCreateStartpos(sender)) {
	using FunctionType = decltype(onCreateStartpos(sender))(*)(PauseLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x346ad8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto PauseLayer::onEdit(cocos2d::CCObject* sender) -> decltype(onEdit(sender)) {
	using FunctionType = decltype(onEdit(sender))(*)(PauseLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x347c08, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto PauseLayer::onHelp(cocos2d::CCObject* sender) -> decltype(onHelp(sender)) {
	using FunctionType = decltype(onHelp(sender))(*)(PauseLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x347d4c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto PauseLayer::onNormalMode(cocos2d::CCObject* sender) -> decltype(onNormalMode(sender)) {
	using FunctionType = decltype(onNormalMode(sender))(*)(PauseLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x345ff0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto PauseLayer::onPracticeMode(cocos2d::CCObject* sender) -> decltype(onPracticeMode(sender)) {
	using FunctionType = decltype(onPracticeMode(sender))(*)(PauseLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x345fb4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto PauseLayer::onQuit(cocos2d::CCObject* sender) -> decltype(onQuit(sender)) {
	using FunctionType = decltype(onQuit(sender))(*)(PauseLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x347d68, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto PauseLayer::onReplay(cocos2d::CCObject* sender) -> decltype(onReplay(sender)) {
	using FunctionType = decltype(onReplay(sender))(*)(PauseLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x346f88, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto PauseLayer::onRestart(cocos2d::CCObject* sender) -> decltype(onRestart(sender)) {
	using FunctionType = decltype(onRestart(sender))(*)(PauseLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x346298, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto PauseLayer::onRestartFull(cocos2d::CCObject* sender) -> decltype(onRestartFull(sender)) {
	using FunctionType = decltype(onRestartFull(sender))(*)(PauseLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x345ef8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto PauseLayer::onResume(cocos2d::CCObject* sender) -> decltype(onResume(sender)) {
	using FunctionType = decltype(onResume(sender))(*)(PauseLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x34603c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto PauseLayer::onShowStartposBrowser(cocos2d::CCObject* sender) -> decltype(onShowStartposBrowser(sender)) {
	using FunctionType = decltype(onShowStartposBrowser(sender))(*)(PauseLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x346aa0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto PauseLayer::onTime(cocos2d::CCObject* sender) -> decltype(onTime(sender)) {
	using FunctionType = decltype(onTime(sender))(*)(PauseLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x346f84, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto PauseLayer::onTryEdit(cocos2d::CCObject* sender) -> decltype(onTryEdit(sender)) {
	using FunctionType = decltype(onTryEdit(sender))(*)(PauseLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x345dec, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto PauseLayer::setupLegacyProgressBars() -> decltype(setupLegacyProgressBars()) {
	using FunctionType = decltype(setupLegacyProgressBars())(*)(PauseLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x347184, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto PauseLayer::setupPlatformerLabels(bool p0) -> decltype(setupPlatformerLabels(p0)) {
	using FunctionType = decltype(setupPlatformerLabels(p0))(*)(PauseLayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x347814, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto PauseLayer::setupProgressBars() -> decltype(setupProgressBars()) {
	using FunctionType = decltype(setupProgressBars())(*)(PauseLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x345d48, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto PauseLayer::setupSessionProgressBar() -> decltype(setupSessionProgressBar()) {
	using FunctionType = decltype(setupSessionProgressBar())(*)(PauseLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3474bc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto PauseLayer::sfxSliderChanged(cocos2d::CCObject* sender) -> decltype(sfxSliderChanged(sender)) {
	using FunctionType = decltype(sfxSliderChanged(sender))(*)(PauseLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3468d8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto PauseLayer::tryQuit(cocos2d::CCObject* sender) -> decltype(tryQuit(sender)) {
	using FunctionType = decltype(tryQuit(sender))(*)(PauseLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x346140, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto PauseLayer::tryShowBanner(float dt) -> decltype(tryShowBanner(dt)) {
	using FunctionType = decltype(tryShowBanner(dt))(*)(PauseLayer*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x346f54, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, dt);
}
