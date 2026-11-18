#include <Geode/cocos/cocoa/CCObject.h>

#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/EditLevelLayer.hpp>
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

EditLevelLayer::~EditLevelLayer() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(EditLevelLayer*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x3d9e34, tulip::hook::TulipConvention::Default);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) EditLevelLayer(geode::CutoffConstructor, sizeof(EditLevelLayer));
		geode::DestructorLock::addLock(this);
	}
}

auto EditLevelLayer::create(GJGameLevel* level) -> decltype(create(level)) {
	using FunctionType = decltype(create(level))(*)(GJGameLevel*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x190a00, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(level);
}

auto EditLevelLayer::scene(GJGameLevel* level) -> decltype(scene(level)) {
	using FunctionType = decltype(scene(level))(*)(GJGameLevel*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1909b4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(level);
}

auto EditLevelLayer::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&EditLevelLayer::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(EditLevelLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x194e58, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto EditLevelLayer::keyDown(cocos2d::enumKeyCodes key, double timestamp) -> decltype(keyDown(key, timestamp)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::enumKeyCodes, double>::func(&EditLevelLayer::keyDown), this);
	using FunctionType = decltype(keyDown(key, timestamp))(*)(EditLevelLayer*, cocos2d::enumKeyCodes, double);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x194e64, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, key, timestamp);
}

auto EditLevelLayer::setIDPopupClosed(SetIDPopup* popup, int value) -> decltype(setIDPopupClosed(popup, value)) {
	auto self = addresser::thunkAdjust(Resolve<SetIDPopup*, int>::func(&EditLevelLayer::setIDPopupClosed), this);
	using FunctionType = decltype(setIDPopupClosed(popup, value))(*)(EditLevelLayer*, SetIDPopup*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x194d58, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, popup, value);
}

auto EditLevelLayer::FLAlert_Clicked(FLAlertLayer* layer, bool btn2) -> decltype(FLAlert_Clicked(layer, btn2)) {
	auto self = addresser::thunkAdjust(Resolve<FLAlertLayer*, bool>::func(&EditLevelLayer::FLAlert_Clicked), this);
	using FunctionType = decltype(FLAlert_Clicked(layer, btn2))(*)(EditLevelLayer*, FLAlertLayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1948d4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, layer, btn2);
}

auto EditLevelLayer::textInputOpened(CCTextInputNode* node) -> decltype(textInputOpened(node)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&EditLevelLayer::textInputOpened), this);
	using FunctionType = decltype(textInputOpened(node))(*)(EditLevelLayer*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x193ce4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, node);
}

auto EditLevelLayer::textInputClosed(CCTextInputNode* node) -> decltype(textInputClosed(node)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&EditLevelLayer::textInputClosed), this);
	using FunctionType = decltype(textInputClosed(node))(*)(EditLevelLayer*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1939a0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, node);
}

auto EditLevelLayer::textChanged(CCTextInputNode* node) -> decltype(textChanged(node)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&EditLevelLayer::textChanged), this);
	using FunctionType = decltype(textChanged(node))(*)(EditLevelLayer*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x193df4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, node);
}

auto EditLevelLayer::uploadActionFinished(int id, int response) -> decltype(uploadActionFinished(id, response)) {
	auto self = addresser::thunkAdjust(Resolve<int, int>::func(&EditLevelLayer::uploadActionFinished), this);
	using FunctionType = decltype(uploadActionFinished(id, response))(*)(EditLevelLayer*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x194ee8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, id, response);
}

auto EditLevelLayer::uploadActionFailed(int id, int response) -> decltype(uploadActionFailed(id, response)) {
	auto self = addresser::thunkAdjust(Resolve<int, int>::func(&EditLevelLayer::uploadActionFailed), this);
	using FunctionType = decltype(uploadActionFailed(id, response))(*)(EditLevelLayer*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x195098, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, id, response);
}

auto EditLevelLayer::onClosePopup(UploadActionPopup* popup) -> decltype(onClosePopup(popup)) {
	auto self = addresser::thunkAdjust(Resolve<UploadActionPopup*>::func(&EditLevelLayer::onClosePopup), this);
	using FunctionType = decltype(onClosePopup(popup))(*)(EditLevelLayer*, UploadActionPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x194e98, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, popup);
}

auto EditLevelLayer::creatorDescriptionChanged(std::string const& p0) -> decltype(creatorDescriptionChanged(p0)) {
	auto self = addresser::thunkAdjust(Resolve<std::string const&>::func(&EditLevelLayer::creatorDescriptionChanged), this);
	using FunctionType = decltype(creatorDescriptionChanged(p0))(*)(EditLevelLayer*, std::string const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x19455c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto EditLevelLayer::emotePickerClosed(EmotePickerPopup* p0) -> decltype(emotePickerClosed(p0)) {
	auto self = addresser::thunkAdjust(Resolve<EmotePickerPopup*>::func(&EditLevelLayer::emotePickerClosed), this);
	using FunctionType = decltype(emotePickerClosed(p0))(*)(EditLevelLayer*, EmotePickerPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x194680, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto EditLevelLayer::closeTextInputs() -> decltype(closeTextInputs()) {
	using FunctionType = decltype(closeTextInputs())(*)(EditLevelLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x193944, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto EditLevelLayer::confirmClone(cocos2d::CCObject* sender) -> decltype(confirmClone(sender)) {
	using FunctionType = decltype(confirmClone(sender))(*)(EditLevelLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x193470, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto EditLevelLayer::confirmDelete(cocos2d::CCObject* sender) -> decltype(confirmDelete(sender)) {
	using FunctionType = decltype(confirmDelete(sender))(*)(EditLevelLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1930f4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto EditLevelLayer::confirmMoveToTop(cocos2d::CCObject* sender) -> decltype(confirmMoveToTop(sender)) {
	using FunctionType = decltype(confirmMoveToTop(sender))(*)(EditLevelLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1931dc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto EditLevelLayer::init(GJGameLevel* level) -> decltype(init(level)) {
	using FunctionType = decltype(init(level))(*)(EditLevelLayer*, GJGameLevel*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x190af8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, level);
}

auto EditLevelLayer::onBack(cocos2d::CCObject* sender) -> decltype(onBack(sender)) {
	using FunctionType = decltype(onBack(sender))(*)(EditLevelLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1937b8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto EditLevelLayer::onClone() -> decltype(onClone()) {
	using FunctionType = decltype(onClone())(*)(EditLevelLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x194bfc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto EditLevelLayer::onDelete() -> decltype(onDelete()) {
	using FunctionType = decltype(onDelete())(*)(EditLevelLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x194894, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto EditLevelLayer::onEdit(cocos2d::CCObject* sender) -> decltype(onEdit(sender)) {
	using FunctionType = decltype(onEdit(sender))(*)(EditLevelLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1921a8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto EditLevelLayer::onLevelLeaderboard(cocos2d::CCObject* sender) -> decltype(onLevelLeaderboard(sender)) {
	using FunctionType = decltype(onLevelLeaderboard(sender))(*)(EditLevelLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x193548, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto EditLevelLayer::onLevelOptions(cocos2d::CCObject* sender) -> decltype(onLevelOptions(sender)) {
	using FunctionType = decltype(onLevelOptions(sender))(*)(EditLevelLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x193924, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto EditLevelLayer::onMoveToTop() -> decltype(onMoveToTop()) {
	using FunctionType = decltype(onMoveToTop())(*)(EditLevelLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x194d2c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto EditLevelLayer::onPlay(cocos2d::CCObject* sender) -> decltype(onPlay(sender)) {
	using FunctionType = decltype(onPlay(sender))(*)(EditLevelLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1922e0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto EditLevelLayer::onSetFolder(cocos2d::CCObject* sender) -> decltype(onSetFolder(sender)) {
	using FunctionType = decltype(onSetFolder(sender))(*)(EditLevelLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x19339c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto EditLevelLayer::onShare(cocos2d::CCObject* sender) -> decltype(onShare(sender)) {
	using FunctionType = decltype(onShare(sender))(*)(EditLevelLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x192554, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto EditLevelLayer::onUpdateDescription(cocos2d::CCObject* sender) -> decltype(onUpdateDescription(sender)) {
	using FunctionType = decltype(onUpdateDescription(sender))(*)(EditLevelLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x19447c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto EditLevelLayer::playStep2() -> decltype(playStep2()) {
	using FunctionType = decltype(playStep2())(*)(EditLevelLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x194330, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto EditLevelLayer::setupLevelInfo() -> decltype(setupLevelInfo()) {
	using FunctionType = decltype(setupLevelInfo())(*)(EditLevelLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1928d4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto EditLevelLayer::updateDescText(char const* text) -> decltype(updateDescText(text)) {
	using FunctionType = decltype(updateDescText(text))(*)(EditLevelLayer*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1921a4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, text);
}

auto EditLevelLayer::verifyLevelName() -> decltype(verifyLevelName()) {
	using FunctionType = decltype(verifyLevelName())(*)(EditLevelLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x193ffc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}
