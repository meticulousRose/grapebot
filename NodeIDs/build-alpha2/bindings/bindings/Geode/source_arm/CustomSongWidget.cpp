#include <Geode/cocos/cocoa/CCObject.h>

#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/CustomSongWidget.hpp>
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

CustomSongWidget::~CustomSongWidget() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(CustomSongWidget*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x1ad4cc, tulip::hook::TulipConvention::Default);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) CustomSongWidget(geode::CutoffConstructor, sizeof(CustomSongWidget));
		geode::DestructorLock::addLock(this);
	}
}

auto CustomSongWidget::create(SongInfoObject* p0, CustomSongDelegate* p1, bool p2, bool p3, bool p4, bool p5, bool p6, bool p7, int p8, bool p9, bool p10) -> decltype(create(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10)) {
	using FunctionType = decltype(create(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10))(*)(SongInfoObject*, CustomSongDelegate*, bool, bool, bool, bool, bool, bool, int, bool, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x6091d4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10);
}

auto CustomSongWidget::loadSongInfoFinished(SongInfoObject* object) -> decltype(loadSongInfoFinished(object)) {
	auto self = addresser::thunkAdjust(Resolve<SongInfoObject*>::func(&CustomSongWidget::loadSongInfoFinished), this);
	using FunctionType = decltype(loadSongInfoFinished(object))(*)(CustomSongWidget*, SongInfoObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x60e4ec, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, object);
}

auto CustomSongWidget::loadSongInfoFailed(int id, GJSongError errorType) -> decltype(loadSongInfoFailed(id, errorType)) {
	auto self = addresser::thunkAdjust(Resolve<int, GJSongError>::func(&CustomSongWidget::loadSongInfoFailed), this);
	using FunctionType = decltype(loadSongInfoFailed(id, errorType))(*)(CustomSongWidget*, int, GJSongError);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x60e790, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, id, errorType);
}

auto CustomSongWidget::downloadSongStarted(int id) -> decltype(downloadSongStarted(id)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&CustomSongWidget::downloadSongStarted), this);
	using FunctionType = decltype(downloadSongStarted(id))(*)(CustomSongWidget*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x60ea8c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, id);
}

auto CustomSongWidget::downloadSongFinished(int id) -> decltype(downloadSongFinished(id)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&CustomSongWidget::downloadSongFinished), this);
	using FunctionType = decltype(downloadSongFinished(id))(*)(CustomSongWidget*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x60ec20, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, id);
}

auto CustomSongWidget::downloadSongFailed(int id, GJSongError errorType) -> decltype(downloadSongFailed(id, errorType)) {
	auto self = addresser::thunkAdjust(Resolve<int, GJSongError>::func(&CustomSongWidget::downloadSongFailed), this);
	using FunctionType = decltype(downloadSongFailed(id, errorType))(*)(CustomSongWidget*, int, GJSongError);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x60eefc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, id, errorType);
}

auto CustomSongWidget::downloadSFXFinished(int id) -> decltype(downloadSFXFinished(id)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&CustomSongWidget::downloadSFXFinished), this);
	using FunctionType = decltype(downloadSFXFinished(id))(*)(CustomSongWidget*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x60f128, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, id);
}

auto CustomSongWidget::downloadSFXFailed(int id, GJSongError errorType) -> decltype(downloadSFXFailed(id, errorType)) {
	auto self = addresser::thunkAdjust(Resolve<int, GJSongError>::func(&CustomSongWidget::downloadSFXFailed), this);
	using FunctionType = decltype(downloadSFXFailed(id, errorType))(*)(CustomSongWidget*, int, GJSongError);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x60f13c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, id, errorType);
}

auto CustomSongWidget::musicActionFinished(GJMusicAction action) -> decltype(musicActionFinished(action)) {
	auto self = addresser::thunkAdjust(Resolve<GJMusicAction>::func(&CustomSongWidget::musicActionFinished), this);
	using FunctionType = decltype(musicActionFinished(action))(*)(CustomSongWidget*, GJMusicAction);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x60f510, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, action);
}

auto CustomSongWidget::musicActionFailed(GJMusicAction action) -> decltype(musicActionFailed(action)) {
	auto self = addresser::thunkAdjust(Resolve<GJMusicAction>::func(&CustomSongWidget::musicActionFailed), this);
	using FunctionType = decltype(musicActionFailed(action))(*)(CustomSongWidget*, GJMusicAction);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x60f558, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, action);
}

auto CustomSongWidget::songStateChanged() -> decltype(songStateChanged()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&CustomSongWidget::songStateChanged), this);
	using FunctionType = decltype(songStateChanged())(*)(CustomSongWidget*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x60d4e0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto CustomSongWidget::FLAlert_Clicked(FLAlertLayer* layer, bool btn2) -> decltype(FLAlert_Clicked(layer, btn2)) {
	auto self = addresser::thunkAdjust(Resolve<FLAlertLayer*, bool>::func(&CustomSongWidget::FLAlert_Clicked), this);
	using FunctionType = decltype(FLAlert_Clicked(layer, btn2))(*)(CustomSongWidget*, FLAlertLayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x60f614, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, layer, btn2);
}

auto CustomSongWidget::addExtraVisuals(bool newMusic, bool newLibraryMusic) -> decltype(addExtraVisuals(newMusic, newLibraryMusic)) {
	using FunctionType = decltype(addExtraVisuals(newMusic, newLibraryMusic))(*)(CustomSongWidget*, bool, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x60c984, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, newMusic, newLibraryMusic);
}

auto CustomSongWidget::deleteSong() -> decltype(deleteSong()) {
	using FunctionType = decltype(deleteSong())(*)(CustomSongWidget*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1e8dec, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto CustomSongWidget::downloadAssetFailed(int id, GJAssetType type, GJSongError errorType) -> decltype(downloadAssetFailed(id, type, errorType)) {
	using FunctionType = decltype(downloadAssetFailed(id, type, errorType))(*)(CustomSongWidget*, int, GJAssetType, GJSongError);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x60f094, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id, type, errorType);
}

auto CustomSongWidget::downloadAssetFinished(int id, GJAssetType type) -> decltype(downloadAssetFinished(id, type)) {
	using FunctionType = decltype(downloadAssetFinished(id, type))(*)(CustomSongWidget*, int, GJAssetType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x60ece4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id, type);
}

auto CustomSongWidget::downloadFailed() -> decltype(downloadFailed()) {
	using FunctionType = decltype(downloadFailed())(*)(CustomSongWidget*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x60d494, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto CustomSongWidget::getSongInfoIfUnloaded() -> decltype(getSongInfoIfUnloaded()) {
	using FunctionType = decltype(getSongInfoIfUnloaded())(*)(CustomSongWidget*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x60cf10, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto CustomSongWidget::init(SongInfoObject* p0, CustomSongDelegate* p1, bool p2, bool p3, bool p4, bool p5, bool p6, bool p7, int p8, bool p9, bool p10) -> decltype(init(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10)) {
	using FunctionType = decltype(init(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10))(*)(CustomSongWidget*, SongInfoObject*, CustomSongDelegate*, bool, bool, bool, bool, bool, bool, int, bool, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x609350, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10);
}

auto CustomSongWidget::onCancelDownload(cocos2d::CCObject* sender) -> decltype(onCancelDownload(sender)) {
	using FunctionType = decltype(onCancelDownload(sender))(*)(CustomSongWidget*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x60a7a4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CustomSongWidget::onDelete(cocos2d::CCObject* sender) -> decltype(onDelete(sender)) {
	using FunctionType = decltype(onDelete(sender))(*)(CustomSongWidget*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x60a7e0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CustomSongWidget::onDownload(cocos2d::CCObject* sender) -> decltype(onDownload(sender)) {
	using FunctionType = decltype(onDownload(sender))(*)(CustomSongWidget*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x60a554, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CustomSongWidget::onGetSongInfo(cocos2d::CCObject* sender) -> decltype(onGetSongInfo(sender)) {
	using FunctionType = decltype(onGetSongInfo(sender))(*)(CustomSongWidget*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x60a920, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CustomSongWidget::onInfo(cocos2d::CCObject* sender) -> decltype(onInfo(sender)) {
	using FunctionType = decltype(onInfo(sender))(*)(CustomSongWidget*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x60acb4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CustomSongWidget::onPlayback(cocos2d::CCObject* sender) -> decltype(onPlayback(sender)) {
	using FunctionType = decltype(onPlayback(sender))(*)(CustomSongWidget*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x60a9ac, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CustomSongWidget::onSelect(cocos2d::CCObject* sender) -> decltype(onSelect(sender)) {
	using FunctionType = decltype(onSelect(sender))(*)(CustomSongWidget*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x60a8c0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CustomSongWidget::positionInfoObjects() -> decltype(positionInfoObjects()) {
	using FunctionType = decltype(positionInfoObjects())(*)(CustomSongWidget*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x60b184, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto CustomSongWidget::processNextMultiAsset() -> decltype(processNextMultiAsset()) {
	using FunctionType = decltype(processNextMultiAsset())(*)(CustomSongWidget*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x60f24c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto CustomSongWidget::showError(bool fast) -> decltype(showError(fast)) {
	using FunctionType = decltype(showError(fast))(*)(CustomSongWidget*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x60cd10, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, fast);
}

auto CustomSongWidget::startDownload() -> decltype(startDownload()) {
	using FunctionType = decltype(startDownload())(*)(CustomSongWidget*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5d1a30, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto CustomSongWidget::startMultiAssetDownload() -> decltype(startMultiAssetDownload()) {
	using FunctionType = decltype(startMultiAssetDownload())(*)(CustomSongWidget*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x60d074, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto CustomSongWidget::toggleUpdateButton(bool enabled) -> decltype(toggleUpdateButton(enabled)) {
	using FunctionType = decltype(toggleUpdateButton(enabled))(*)(CustomSongWidget*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x60d01c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, enabled);
}

auto CustomSongWidget::updateDownloadProgress(float dt) -> decltype(updateDownloadProgress(dt)) {
	using FunctionType = decltype(updateDownloadProgress(dt))(*)(CustomSongWidget*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x60d3d0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, dt);
}

auto CustomSongWidget::updateError(GJSongError errorType) -> decltype(updateError(errorType)) {
	using FunctionType = decltype(updateError(errorType))(*)(CustomSongWidget*, GJSongError);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x60e9a8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, errorType);
}

auto CustomSongWidget::updateLengthMod(float lengthMod) -> decltype(updateLengthMod(lengthMod)) {
	using FunctionType = decltype(updateLengthMod(lengthMod))(*)(CustomSongWidget*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x60d52c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, lengthMod);
}

auto CustomSongWidget::updateMultiAssetInfo(bool update) -> decltype(updateMultiAssetInfo(update)) {
	using FunctionType = decltype(updateMultiAssetInfo(update))(*)(CustomSongWidget*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x60dd44, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, update);
}

auto CustomSongWidget::updatePlaybackBtn() -> decltype(updatePlaybackBtn()) {
	using FunctionType = decltype(updatePlaybackBtn())(*)(CustomSongWidget*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x60c8a8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto CustomSongWidget::updateProgressBar(int progress) -> decltype(updateProgressBar(progress)) {
	using FunctionType = decltype(updateProgressBar(progress))(*)(CustomSongWidget*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x60b7a0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, progress);
}

auto CustomSongWidget::updateSongInfo() -> decltype(updateSongInfo()) {
	using FunctionType = decltype(updateSongInfo())(*)(CustomSongWidget*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x60b8bc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto CustomSongWidget::updateSongObject(SongInfoObject* songInfo) -> decltype(updateSongObject(songInfo)) {
	using FunctionType = decltype(updateSongObject(songInfo))(*)(CustomSongWidget*, SongInfoObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x60b818, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, songInfo);
}

auto CustomSongWidget::updateWithMultiAssets(std::string songList, std::string sfxList, int bytes) -> decltype(updateWithMultiAssets(songList, sfxList, bytes)) {
	using FunctionType = decltype(updateWithMultiAssets(songList, sfxList, bytes))(*)(CustomSongWidget*, std::string, std::string, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x60d534, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, songList, sfxList, bytes);
}

auto CustomSongWidget::verifySongID(int id) -> decltype(verifySongID(id)) {
	using FunctionType = decltype(verifySongID(id))(*)(CustomSongWidget*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x60e4d8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id);
}
