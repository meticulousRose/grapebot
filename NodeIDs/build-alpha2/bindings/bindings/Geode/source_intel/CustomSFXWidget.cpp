
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/CustomSFXWidget.hpp>
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

auto CustomSFXWidget::create(SFXInfoObject* p0, CustomSFXDelegate* p1, bool p2, bool p3, bool p4, bool p5, bool p6, bool p7, bool p8) -> decltype(create(p0, p1, p2, p3, p4, p5, p6, p7, p8)) {
	using FunctionType = decltype(create(p0, p1, p2, p3, p4, p5, p6, p7, p8))(*)(SFXInfoObject*, CustomSFXDelegate*, bool, bool, bool, bool, bool, bool, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x6b5270, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1, p2, p3, p4, p5, p6, p7, p8);
}

auto CustomSFXWidget::downloadSFXFinished(int id) -> decltype(downloadSFXFinished(id)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&CustomSFXWidget::downloadSFXFinished), this);
	using FunctionType = decltype(downloadSFXFinished(id))(*)(CustomSFXWidget*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x6b8740, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, id);
}

auto CustomSFXWidget::downloadSFXFailed(int id, GJSongError errorType) -> decltype(downloadSFXFailed(id, errorType)) {
	auto self = addresser::thunkAdjust(Resolve<int, GJSongError>::func(&CustomSFXWidget::downloadSFXFailed), this);
	using FunctionType = decltype(downloadSFXFailed(id, errorType))(*)(CustomSFXWidget*, int, GJSongError);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x6b87f0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, id, errorType);
}

auto CustomSFXWidget::songStateChanged() -> decltype(songStateChanged()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&CustomSFXWidget::songStateChanged), this);
	using FunctionType = decltype(songStateChanged())(*)(CustomSFXWidget*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x6b86d0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto CustomSFXWidget::FLAlert_Clicked(FLAlertLayer* layer, bool btn2) -> decltype(FLAlert_Clicked(layer, btn2)) {
	auto self = addresser::thunkAdjust(Resolve<FLAlertLayer*, bool>::func(&CustomSFXWidget::FLAlert_Clicked), this);
	using FunctionType = decltype(FLAlert_Clicked(layer, btn2))(*)(CustomSFXWidget*, FLAlertLayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x6b8a10, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, layer, btn2);
}

auto CustomSFXWidget::deleteSFX() -> decltype(deleteSFX()) {
	using FunctionType = decltype(deleteSFX())(*)(CustomSFXWidget*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x6b8130, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto CustomSFXWidget::downloadFailed() -> decltype(downloadFailed()) {
	using FunctionType = decltype(downloadFailed())(*)(CustomSFXWidget*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x6b8620, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto CustomSFXWidget::hideLoadingArt() -> decltype(hideLoadingArt()) {
	using FunctionType = decltype(hideLoadingArt())(*)(CustomSFXWidget*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x6b7480, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto CustomSFXWidget::init(SFXInfoObject* p0, CustomSFXDelegate* p1, bool p2, bool p3, bool p4, bool p5, bool p6, bool p7, bool p8) -> decltype(init(p0, p1, p2, p3, p4, p5, p6, p7, p8)) {
	using FunctionType = decltype(init(p0, p1, p2, p3, p4, p5, p6, p7, p8))(*)(CustomSFXWidget*, SFXInfoObject*, CustomSFXDelegate*, bool, bool, bool, bool, bool, bool, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x6b53c0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1, p2, p3, p4, p5, p6, p7, p8);
}

auto CustomSFXWidget::onDelete(cocos2d::CCObject* sender) -> decltype(onDelete(sender)) {
	using FunctionType = decltype(onDelete(sender))(*)(CustomSFXWidget*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x6b6ac0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CustomSFXWidget::onDownload(cocos2d::CCObject* sender) -> decltype(onDownload(sender)) {
	using FunctionType = decltype(onDownload(sender))(*)(CustomSFXWidget*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x6b6920, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CustomSFXWidget::onPlayback(cocos2d::CCObject* sender) -> decltype(onPlayback(sender)) {
	using FunctionType = decltype(onPlayback(sender))(*)(CustomSFXWidget*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x6b6bd0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CustomSFXWidget::onSelect(cocos2d::CCObject* sender) -> decltype(onSelect(sender)) {
	using FunctionType = decltype(onSelect(sender))(*)(CustomSFXWidget*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x6b6ba0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CustomSFXWidget::onShowInfo(cocos2d::CCObject* sender) -> decltype(onShowInfo(sender)) {
	using FunctionType = decltype(onShowInfo(sender))(*)(CustomSFXWidget*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x6b6d50, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CustomSFXWidget::showLoadingArt() -> decltype(showLoadingArt()) {
	using FunctionType = decltype(showLoadingArt())(*)(CustomSFXWidget*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x69a10, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto CustomSFXWidget::startDownload() -> decltype(startDownload()) {
	using FunctionType = decltype(startDownload())(*)(CustomSFXWidget*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x6b8490, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto CustomSFXWidget::startMonitorDownload() -> decltype(startMonitorDownload()) {
	using FunctionType = decltype(startMonitorDownload())(*)(CustomSFXWidget*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x6b8080, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto CustomSFXWidget::updateDownloadProgress(float dt) -> decltype(updateDownloadProgress(dt)) {
	using FunctionType = decltype(updateDownloadProgress(dt))(*)(CustomSFXWidget*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x6b8550, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, dt);
}

auto CustomSFXWidget::updateError(GJSongError errorType) -> decltype(updateError(errorType)) {
	using FunctionType = decltype(updateError(errorType))(*)(CustomSFXWidget*, GJSongError);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x6b88b0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, errorType);
}

auto CustomSFXWidget::updateLengthMod(float mod) -> decltype(updateLengthMod(mod)) {
	using FunctionType = decltype(updateLengthMod(mod))(*)(CustomSFXWidget*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x6b8700, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, mod);
}

auto CustomSFXWidget::updatePlaybackBtn() -> decltype(updatePlaybackBtn()) {
	using FunctionType = decltype(updatePlaybackBtn())(*)(CustomSFXWidget*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x6b8120, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto CustomSFXWidget::updateProgressBar(int progress) -> decltype(updateProgressBar(progress)) {
	using FunctionType = decltype(updateProgressBar(progress))(*)(CustomSFXWidget*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x6b7400, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, progress);
}

auto CustomSFXWidget::updateSFXInfo() -> decltype(updateSFXInfo()) {
	using FunctionType = decltype(updateSFXInfo())(*)(CustomSFXWidget*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x6b75a0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto CustomSFXWidget::updateSFXObject(SFXInfoObject* object) -> decltype(updateSFXObject(object)) {
	using FunctionType = decltype(updateSFXObject(object))(*)(CustomSFXWidget*, SFXInfoObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x6b7510, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto CustomSFXWidget::verifySFXID(int id) -> decltype(verifySFXID(id)) {
	using FunctionType = decltype(verifySFXID(id))(*)(CustomSFXWidget*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x6b8720, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id);
}
