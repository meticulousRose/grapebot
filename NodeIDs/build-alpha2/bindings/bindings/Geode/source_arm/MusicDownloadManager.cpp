
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/MusicDownloadManager.hpp>
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

auto MusicDownloadManager::linkRowString(GJLinkObject const& object) -> decltype(linkRowString(object)) {
	using FunctionType = decltype(linkRowString(object))(*)(GJLinkObject const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x59e918, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(object);
}

auto MusicDownloadManager::sharedState() -> decltype(sharedState()) {
	using FunctionType = decltype(sharedState())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x584e0c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto MusicDownloadManager::urlEncode(std::string const& p0) -> decltype(urlEncode(p0)) {
	using FunctionType = decltype(urlEncode(p0))(*)(std::string const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5a17c4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0);
}

auto MusicDownloadManager::init() -> decltype(init()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&MusicDownloadManager::init), this);
	using FunctionType = decltype(init())(*)(MusicDownloadManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x586200, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto MusicDownloadManager::addDLToActive(char const* tag) -> decltype(addDLToActive(tag)) {
	using FunctionType = decltype(addDLToActive(tag))(*)(MusicDownloadManager*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x586e88, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, tag);
}

auto MusicDownloadManager::addDLToActive(char const* tag, cocos2d::CCObject* obj) -> decltype(addDLToActive(tag, obj)) {
	using FunctionType = decltype(addDLToActive(tag, obj))(*)(MusicDownloadManager*, char const*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x58a198, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, tag, obj);
}

auto MusicDownloadManager::addMusicDownloadDelegate(MusicDownloadDelegate* delegate) -> decltype(addMusicDownloadDelegate(delegate)) {
	using FunctionType = decltype(addMusicDownloadDelegate(delegate))(*)(MusicDownloadManager*, MusicDownloadDelegate*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x586380, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, delegate);
}

auto MusicDownloadManager::addSongObjectFromString(std::string str) -> decltype(addSongObjectFromString(str)) {
	using FunctionType = decltype(addSongObjectFromString(str))(*)(MusicDownloadManager*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4c6374, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, str);
}

auto MusicDownloadManager::clearSong(int songID) -> decltype(clearSong(songID)) {
	using FunctionType = decltype(clearSong(songID))(*)(MusicDownloadManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x589514, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, songID);
}

auto MusicDownloadManager::clearUnusedSongs() -> decltype(clearUnusedSongs()) {
	using FunctionType = decltype(clearUnusedSongs())(*)(MusicDownloadManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x589708, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto MusicDownloadManager::createSongsInfo(std::string songsStr, std::string artistsStr) -> decltype(createSongsInfo(songsStr, artistsStr)) {
	using FunctionType = decltype(createSongsInfo(songsStr, artistsStr))(*)(MusicDownloadManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x588154, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, songsStr, artistsStr);
}

auto MusicDownloadManager::dataLoaded(DS_Dictionary* dict) -> decltype(dataLoaded(dict)) {
	using FunctionType = decltype(dataLoaded(dict))(*)(MusicDownloadManager*, DS_Dictionary*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x591d84, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, dict);
}

auto MusicDownloadManager::deleteSFX(int id) -> decltype(deleteSFX(id)) {
	using FunctionType = decltype(deleteSFX(id))(*)(MusicDownloadManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x59a3fc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto MusicDownloadManager::deleteSong(int id) -> decltype(deleteSong(id)) {
	using FunctionType = decltype(deleteSong(id))(*)(MusicDownloadManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5894b4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto MusicDownloadManager::downloadCustomSong(int id) -> decltype(downloadCustomSong(id)) {
	using FunctionType = decltype(downloadCustomSong(id))(*)(MusicDownloadManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x589bf4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto MusicDownloadManager::downloadMusicLibrary() -> decltype(downloadMusicLibrary()) {
	using FunctionType = decltype(downloadMusicLibrary())(*)(MusicDownloadManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x594228, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto MusicDownloadManager::downloadNewsFeed() -> decltype(downloadNewsFeed()) {
	using FunctionType = decltype(downloadNewsFeed())(*)(MusicDownloadManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x59a748, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto MusicDownloadManager::downloadNewsImage(std::string imageKey) -> decltype(downloadNewsImage(imageKey)) {
	using FunctionType = decltype(downloadNewsImage(imageKey))(*)(MusicDownloadManager*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x59c6a0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, imageKey);
}

auto MusicDownloadManager::downloadSFX(int id) -> decltype(downloadSFX(id)) {
	using FunctionType = decltype(downloadSFX(id))(*)(MusicDownloadManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x598410, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto MusicDownloadManager::downloadSFXFailed(int id, GJSongError errorCode) -> decltype(downloadSFXFailed(id, errorCode)) {
	using FunctionType = decltype(downloadSFXFailed(id, errorCode))(*)(MusicDownloadManager*, int, GJSongError);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x598920, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id, errorCode);
}

auto MusicDownloadManager::downloadSFXFinished(int id) -> decltype(downloadSFXFinished(id)) {
	using FunctionType = decltype(downloadSFXFinished(id))(*)(MusicDownloadManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x593064, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto MusicDownloadManager::downloadSFXLibrary() -> decltype(downloadSFXLibrary()) {
	using FunctionType = decltype(downloadSFXLibrary())(*)(MusicDownloadManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x598d50, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto MusicDownloadManager::downloadSong(int id) -> decltype(downloadSong(id)) {
	using FunctionType = decltype(downloadSong(id))(*)(MusicDownloadManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x589850, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto MusicDownloadManager::downloadSongFailed(int id, GJSongError errorCode) -> decltype(downloadSongFailed(id, errorCode)) {
	using FunctionType = decltype(downloadSongFailed(id, errorCode))(*)(MusicDownloadManager*, int, GJSongError);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x58a298, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id, errorCode);
}

auto MusicDownloadManager::downloadSongFinished(int id) -> decltype(downloadSongFinished(id)) {
	using FunctionType = decltype(downloadSongFinished(id))(*)(MusicDownloadManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x58a30c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto MusicDownloadManager::downloadSongStarted(int id) -> decltype(downloadSongStarted(id)) {
	using FunctionType = decltype(downloadSongStarted(id))(*)(MusicDownloadManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5897d8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto MusicDownloadManager::encodeDataTo(DS_Dictionary* dict) -> decltype(encodeDataTo(dict)) {
	using FunctionType = decltype(encodeDataTo(dict))(*)(MusicDownloadManager*, DS_Dictionary*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5915e4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, dict);
}

auto MusicDownloadManager::filterMusicByArtistID(int id, cocos2d::CCArray* songs) -> decltype(filterMusicByArtistID(id, songs)) {
	using FunctionType = decltype(filterMusicByArtistID(id, songs))(*)(MusicDownloadManager*, int, cocos2d::CCArray*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x598098, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id, songs);
}

auto MusicDownloadManager::filterMusicByTag(int id, cocos2d::CCArray* songs) -> decltype(filterMusicByTag(id, songs)) {
	using FunctionType = decltype(filterMusicByTag(id, songs))(*)(MusicDownloadManager*, int, cocos2d::CCArray*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5981f0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id, songs);
}

auto MusicDownloadManager::firstSetup() -> decltype(firstSetup()) {
	using FunctionType = decltype(firstSetup())(*)(MusicDownloadManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x59157c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto MusicDownloadManager::generateCustomContentURL(std::string path) -> decltype(generateCustomContentURL(path)) {
	using FunctionType = decltype(generateCustomContentURL(path))(*)(MusicDownloadManager*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5938c0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, path);
}

auto MusicDownloadManager::generateResourceAssetList() -> decltype(generateResourceAssetList()) {
	using FunctionType = decltype(generateResourceAssetList())(*)(MusicDownloadManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5862d4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto MusicDownloadManager::getAllMusicArtists(OptionsObjectDelegate* delegate) -> decltype(getAllMusicArtists(delegate)) {
	using FunctionType = decltype(getAllMusicArtists(delegate))(*)(MusicDownloadManager*, OptionsObjectDelegate*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x597f8c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, delegate);
}

auto MusicDownloadManager::getAllMusicObjects(GJSongType type) -> decltype(getAllMusicObjects(type)) {
	using FunctionType = decltype(getAllMusicObjects(type))(*)(MusicDownloadManager*, GJSongType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x597b7c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, type);
}

auto MusicDownloadManager::getAllMusicTags(OptionsObjectDelegate* delegate) -> decltype(getAllMusicTags(delegate)) {
	using FunctionType = decltype(getAllMusicTags(delegate))(*)(MusicDownloadManager*, OptionsObjectDelegate*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x597e38, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, delegate);
}

auto MusicDownloadManager::getAllSFXObjects(bool onlySFX) -> decltype(getAllSFXObjects(onlySFX)) {
	using FunctionType = decltype(getAllSFXObjects(onlySFX))(*)(MusicDownloadManager*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x59a354, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, onlySFX);
}

auto MusicDownloadManager::getAllSongs() -> decltype(getAllSongs()) {
	using FunctionType = decltype(getAllSongs())(*)(MusicDownloadManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x589330, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto MusicDownloadManager::getAudioFilesize(std::string songIDs, std::string sfxIDs) -> decltype(getAudioFilesize(songIDs, sfxIDs)) {
	using FunctionType = decltype(getAudioFilesize(songIDs, sfxIDs))(*)(MusicDownloadManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5935cc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, songIDs, sfxIDs);
}

auto MusicDownloadManager::getCustomContentURL() -> decltype(getCustomContentURL()) {
	using FunctionType = decltype(getCustomContentURL())(*)(MusicDownloadManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x592e78, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto MusicDownloadManager::getDLObject(char const* id) -> decltype(getDLObject(id)) {
	using FunctionType = decltype(getDLObject(id))(*)(MusicDownloadManager*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x586644, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto MusicDownloadManager::getDownloadedSongs() -> decltype(getDownloadedSongs()) {
	using FunctionType = decltype(getDownloadedSongs())(*)(MusicDownloadManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x58902c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto MusicDownloadManager::getDownloadProgress(int id) -> decltype(getDownloadProgress(id)) {
	using FunctionType = decltype(getDownloadProgress(id))(*)(MusicDownloadManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x58a378, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto MusicDownloadManager::getMusicArtistForID(int id) -> decltype(getMusicArtistForID(id)) {
	using FunctionType = decltype(getMusicArtistForID(id))(*)(MusicDownloadManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x597b68, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto MusicDownloadManager::getMusicObject(int id) -> decltype(getMusicObject(id)) {
	using FunctionType = decltype(getMusicObject(id))(*)(MusicDownloadManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x58a460, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto MusicDownloadManager::getNewsImageDownloadKey(std::string imageKey) -> decltype(getNewsImageDownloadKey(imageKey)) {
	using FunctionType = decltype(getNewsImageDownloadKey(imageKey))(*)(MusicDownloadManager*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x59c66c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, imageKey);
}

auto MusicDownloadManager::getSFXDownloadKey(int id) -> decltype(getSFXDownloadKey(id)) {
	using FunctionType = decltype(getSFXDownloadKey(id))(*)(MusicDownloadManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x58a438, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto MusicDownloadManager::getSFXDownloadProgress(int id) -> decltype(getSFXDownloadProgress(id)) {
	using FunctionType = decltype(getSFXDownloadProgress(id))(*)(MusicDownloadManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x58a3d8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto MusicDownloadManager::getSFXObject(int id) -> decltype(getSFXObject(id)) {
	using FunctionType = decltype(getSFXObject(id))(*)(MusicDownloadManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x58ce1c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto MusicDownloadManager::getSongDownloadKey(int id) -> decltype(getSongDownloadKey(id)) {
	using FunctionType = decltype(getSongDownloadKey(id))(*)(MusicDownloadManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5865c0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto MusicDownloadManager::getSongInfo(int id, bool download) -> decltype(getSongInfo(id, download)) {
	using FunctionType = decltype(getSongInfo(id, download))(*)(MusicDownloadManager*, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x586a14, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id, download);
}

auto MusicDownloadManager::getSongInfoKey(int id) -> decltype(getSongInfoKey(id)) {
	using FunctionType = decltype(getSongInfoKey(id))(*)(MusicDownloadManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x586598, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto MusicDownloadManager::getSongInfoObject(int id) -> decltype(getSongInfoObject(id)) {
	using FunctionType = decltype(getSongInfoObject(id))(*)(MusicDownloadManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5868d0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto MusicDownloadManager::getSongPriority() -> decltype(getSongPriority()) {
	using FunctionType = decltype(getSongPriority())(*)(MusicDownloadManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x586a00, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto MusicDownloadManager::handleIt(bool success, std::string response, std::string tag, GJHttpType type) -> decltype(handleIt(success, response, tag, type)) {
	using FunctionType = decltype(handleIt(success, response, tag, type))(*)(MusicDownloadManager*, bool, std::string, std::string, GJHttpType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x58538c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, success, response, tag, type);
}

auto MusicDownloadManager::handleItDelayed(bool success, std::string response, std::string tag, GJHttpType type) -> decltype(handleItDelayed(success, response, tag, type)) {
	using FunctionType = decltype(handleItDelayed(success, response, tag, type))(*)(MusicDownloadManager*, bool, std::string, std::string, GJHttpType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x58564c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, success, response, tag, type);
}

auto MusicDownloadManager::handleItND(cocos2d::CCNode* node, void* data) -> decltype(handleItND(node, data)) {
	using FunctionType = decltype(handleItND(node, data))(*)(MusicDownloadManager*, cocos2d::CCNode*, void*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5857b8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, node, data);
}

auto MusicDownloadManager::hasUnreadNews() -> decltype(hasUnreadNews()) {
	using FunctionType = decltype(hasUnreadNews())(*)(MusicDownloadManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x59cf00, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto MusicDownloadManager::incrementPriorityForSong(int id) -> decltype(incrementPriorityForSong(id)) {
	using FunctionType = decltype(incrementPriorityForSong(id))(*)(MusicDownloadManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x58689c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto MusicDownloadManager::isDLActive(char const* tag) -> decltype(isDLActive(tag)) {
	using FunctionType = decltype(isDLActive(tag))(*)(MusicDownloadManager*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x58657c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, tag);
}

auto MusicDownloadManager::isMusicLibraryLoaded() -> decltype(isMusicLibraryLoaded()) {
	using FunctionType = decltype(isMusicLibraryLoaded())(*)(MusicDownloadManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x596454, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto MusicDownloadManager::isResourceSFX(int id) -> decltype(isResourceSFX(id)) {
	using FunctionType = decltype(isResourceSFX(id))(*)(MusicDownloadManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x58a9a8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto MusicDownloadManager::isResourceSong(int id) -> decltype(isResourceSong(id)) {
	using FunctionType = decltype(isResourceSong(id))(*)(MusicDownloadManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x58a474, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto MusicDownloadManager::isRunningActionForSongID(int id) -> decltype(isRunningActionForSongID(id)) {
	using FunctionType = decltype(isRunningActionForSongID(id))(*)(MusicDownloadManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5864f4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto MusicDownloadManager::isSFXDownloaded(int id) -> decltype(isSFXDownloaded(id)) {
	using FunctionType = decltype(isSFXDownloaded(id))(*)(MusicDownloadManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x58a73c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto MusicDownloadManager::isSFXLibraryLoaded() -> decltype(isSFXLibraryLoaded()) {
	using FunctionType = decltype(isSFXLibraryLoaded())(*)(MusicDownloadManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x599fdc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto MusicDownloadManager::isSongDownloaded(int id) -> decltype(isSongDownloaded(id)) {
	using FunctionType = decltype(isSongDownloaded(id))(*)(MusicDownloadManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5890c4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto MusicDownloadManager::limitDownloadedSongs() -> decltype(limitDownloadedSongs()) {
	using FunctionType = decltype(limitDownloadedSongs())(*)(MusicDownloadManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x589380, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto MusicDownloadManager::loadSongInfoFailed(int id, GJSongError errorCode) -> decltype(loadSongInfoFailed(id, errorCode)) {
	using FunctionType = decltype(loadSongInfoFailed(id, errorCode))(*)(MusicDownloadManager*, int, GJSongError);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x586eb8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id, errorCode);
}

auto MusicDownloadManager::loadSongInfoFinished(SongInfoObject* object) -> decltype(loadSongInfoFinished(object)) {
	using FunctionType = decltype(loadSongInfoFinished(object))(*)(MusicDownloadManager*, SongInfoObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x586e1c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto MusicDownloadManager::musicActionFailed(GJMusicAction action) -> decltype(musicActionFailed(action)) {
	using FunctionType = decltype(musicActionFailed(action))(*)(MusicDownloadManager*, GJMusicAction);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x592ff8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, action);
}

auto MusicDownloadManager::nameForTagID(int id) -> decltype(nameForTagID(id)) {
	using FunctionType = decltype(nameForTagID(id))(*)(MusicDownloadManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5982c4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto MusicDownloadManager::newsImageDownloaded(std::string imageKey) -> decltype(newsImageDownloaded(imageKey)) {
	using FunctionType = decltype(newsImageDownloaded(imageKey))(*)(MusicDownloadManager*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x59ce2c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, imageKey);
}

auto MusicDownloadManager::newsImageFailed(std::string imageKey) -> decltype(newsImageFailed(imageKey)) {
	using FunctionType = decltype(newsImageFailed(imageKey))(*)(MusicDownloadManager*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x59cd58, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, imageKey);
}

auto MusicDownloadManager::onDownloadMusicLibraryCompleted(cocos2d::extension::CCHttpClient* client, cocos2d::extension::CCHttpResponse* response) -> decltype(onDownloadMusicLibraryCompleted(client, response)) {
	using FunctionType = decltype(onDownloadMusicLibraryCompleted(client, response))(*)(MusicDownloadManager*, cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x594428, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, client, response);
}

auto MusicDownloadManager::onDownloadNewsFeedCompleted(cocos2d::extension::CCHttpClient* client, cocos2d::extension::CCHttpResponse* response) -> decltype(onDownloadNewsFeedCompleted(client, response)) {
	using FunctionType = decltype(onDownloadNewsFeedCompleted(client, response))(*)(MusicDownloadManager*, cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x59a90c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, client, response);
}

auto MusicDownloadManager::onDownloadNewsImageCompleted(cocos2d::extension::CCHttpClient* client, cocos2d::extension::CCHttpResponse* response) -> decltype(onDownloadNewsImageCompleted(client, response)) {
	using FunctionType = decltype(onDownloadNewsImageCompleted(client, response))(*)(MusicDownloadManager*, cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x59c98c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, client, response);
}

auto MusicDownloadManager::onDownloadSFXCompleted(cocos2d::extension::CCHttpClient* client, cocos2d::extension::CCHttpResponse* response) -> decltype(onDownloadSFXCompleted(client, response)) {
	using FunctionType = decltype(onDownloadSFXCompleted(client, response))(*)(MusicDownloadManager*, cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5986e8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, client, response);
}

auto MusicDownloadManager::onDownloadSFXLibraryCompleted(cocos2d::extension::CCHttpClient* client, cocos2d::extension::CCHttpResponse* response) -> decltype(onDownloadSFXLibraryCompleted(client, response)) {
	using FunctionType = decltype(onDownloadSFXLibraryCompleted(client, response))(*)(MusicDownloadManager*, cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x598f2c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, client, response);
}

auto MusicDownloadManager::onDownloadSongCompleted(cocos2d::extension::CCHttpClient* client, cocos2d::extension::CCHttpResponse* response) -> decltype(onDownloadSongCompleted(client, response)) {
	using FunctionType = decltype(onDownloadSongCompleted(client, response))(*)(MusicDownloadManager*, cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x589f20, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, client, response);
}

auto MusicDownloadManager::onGetAudioFilesizeCompleted(std::string response, std::string tag) -> decltype(onGetAudioFilesizeCompleted(response, tag)) {
	using FunctionType = decltype(onGetAudioFilesizeCompleted(response, tag))(*)(MusicDownloadManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x585cb0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto MusicDownloadManager::onGetCustomContentURLCompleted(std::string response, std::string tag) -> decltype(onGetCustomContentURLCompleted(response, tag)) {
	using FunctionType = decltype(onGetCustomContentURLCompleted(response, tag))(*)(MusicDownloadManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x585b6c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto MusicDownloadManager::onGetSongInfoCompleted(std::string response, std::string tag) -> decltype(onGetSongInfoCompleted(response, tag)) {
	using FunctionType = decltype(onGetSongInfoCompleted(response, tag))(*)(MusicDownloadManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5858dc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto MusicDownloadManager::onProcessHttpRequestCompleted(cocos2d::extension::CCHttpClient* client, cocos2d::extension::CCHttpResponse* response) -> decltype(onProcessHttpRequestCompleted(client, response)) {
	using FunctionType = decltype(onProcessHttpRequestCompleted(client, response))(*)(MusicDownloadManager*, cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x58507c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, client, response);
}

auto MusicDownloadManager::onTryUpdateMusicLibraryCompleted(cocos2d::extension::CCHttpClient* client, cocos2d::extension::CCHttpResponse* response) -> decltype(onTryUpdateMusicLibraryCompleted(client, response)) {
	using FunctionType = decltype(onTryUpdateMusicLibraryCompleted(client, response))(*)(MusicDownloadManager*, cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5940d8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, client, response);
}

auto MusicDownloadManager::onTryUpdateNewsFeedCompleted(cocos2d::extension::CCHttpClient* client, cocos2d::extension::CCHttpResponse* response) -> decltype(onTryUpdateNewsFeedCompleted(client, response)) {
	using FunctionType = decltype(onTryUpdateNewsFeedCompleted(client, response))(*)(MusicDownloadManager*, cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x59a5f8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, client, response);
}

auto MusicDownloadManager::onTryUpdateSFXLibraryCompleted(cocos2d::extension::CCHttpClient* client, cocos2d::extension::CCHttpResponse* response) -> decltype(onTryUpdateSFXLibraryCompleted(client, response)) {
	using FunctionType = decltype(onTryUpdateSFXLibraryCompleted(client, response))(*)(MusicDownloadManager*, cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x598c00, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, client, response);
}

auto MusicDownloadManager::parseMusicLibrary() -> decltype(parseMusicLibrary()) {
	using FunctionType = decltype(parseMusicLibrary())(*)(MusicDownloadManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x594654, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto MusicDownloadManager::parseNewsFeed() -> decltype(parseNewsFeed()) {
	using FunctionType = decltype(parseNewsFeed())(*)(MusicDownloadManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x59b008, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto MusicDownloadManager::parseSFXLibrary() -> decltype(parseSFXLibrary()) {
	using FunctionType = decltype(parseSFXLibrary())(*)(MusicDownloadManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5990fc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto MusicDownloadManager::pathForNewsFolder() -> decltype(pathForNewsFolder()) {
	using FunctionType = decltype(pathForNewsFolder())(*)(MusicDownloadManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x59c370, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto MusicDownloadManager::pathForSFX(int id) -> decltype(pathForSFX(id)) {
	using FunctionType = decltype(pathForSFX(id))(*)(MusicDownloadManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x58aa8c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto MusicDownloadManager::pathForSFXFolder(int id) -> decltype(pathForSFXFolder(id)) {
	using FunctionType = decltype(pathForSFXFolder(id))(*)(MusicDownloadManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x58ab70, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto MusicDownloadManager::pathForSong(int id) -> decltype(pathForSong(id)) {
	using FunctionType = decltype(pathForSong(id))(*)(MusicDownloadManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x58961c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto MusicDownloadManager::pathForSongFolder(int id) -> decltype(pathForSongFolder(id)) {
	using FunctionType = decltype(pathForSongFolder(id))(*)(MusicDownloadManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x58a558, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto MusicDownloadManager::ProcessHttpGetRequest(std::string url, std::string tag, cocos2d::extension::SEL_HttpResponse selector, int connectTimeout, int readTimeout) -> decltype(ProcessHttpGetRequest(url, tag, selector, connectTimeout, readTimeout)) {
	using FunctionType = decltype(ProcessHttpGetRequest(url, tag, selector, connectTimeout, readTimeout))(*)(MusicDownloadManager*, std::string, std::string, cocos2d::extension::SEL_HttpResponse, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x58526c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, url, tag, selector, connectTimeout, readTimeout);
}

auto MusicDownloadManager::ProcessHttpRequest(std::string url, std::string params, std::string tag, GJHttpType type) -> decltype(ProcessHttpRequest(url, params, tag, type)) {
	using FunctionType = decltype(ProcessHttpRequest(url, params, tag, type))(*)(MusicDownloadManager*, std::string, std::string, std::string, GJHttpType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x584f3c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, url, params, tag, type);
}

auto MusicDownloadManager::removeDLFromActive(char const* tag) -> decltype(removeDLFromActive(tag)) {
	using FunctionType = decltype(removeDLFromActive(tag))(*)(MusicDownloadManager*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x586748, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, tag);
}

auto MusicDownloadManager::removeMusicDownloadDelegate(MusicDownloadDelegate* delegate) -> decltype(removeMusicDownloadDelegate(delegate)) {
	using FunctionType = decltype(removeMusicDownloadDelegate(delegate))(*)(MusicDownloadManager*, MusicDownloadDelegate*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x586474, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, delegate);
}

auto MusicDownloadManager::responseToDict(std::string response, char const* delimiter) -> decltype(responseToDict(response, delimiter)) {
	using FunctionType = decltype(responseToDict(response, delimiter))(*)(MusicDownloadManager*, std::string, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5871cc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, response, delimiter);
}

auto MusicDownloadManager::showTOS(FLAlertLayerProtocol* delegate) -> decltype(showTOS(delegate)) {
	using FunctionType = decltype(showTOS(delegate))(*)(MusicDownloadManager*, FLAlertLayerProtocol*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x58ad54, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, delegate);
}

auto MusicDownloadManager::songStateChanged() -> decltype(songStateChanged()) {
	using FunctionType = decltype(songStateChanged())(*)(MusicDownloadManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x586840, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto MusicDownloadManager::stopDownload(int id) -> decltype(stopDownload(id)) {
	using FunctionType = decltype(stopDownload(id))(*)(MusicDownloadManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5865e8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto MusicDownloadManager::storeSFXInfoObject(SFXInfoObject* object) -> decltype(storeSFXInfoObject(object)) {
	using FunctionType = decltype(storeSFXInfoObject(object))(*)(MusicDownloadManager*, SFXInfoObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x59a000, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto MusicDownloadManager::tryLoadLibraries() -> decltype(tryLoadLibraries()) {
	using FunctionType = decltype(tryLoadLibraries())(*)(MusicDownloadManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x59a0e4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto MusicDownloadManager::tryLoadNewsFeed() -> decltype(tryLoadNewsFeed()) {
	using FunctionType = decltype(tryLoadNewsFeed())(*)(MusicDownloadManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x59a5d0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto MusicDownloadManager::tryUpdateMusicLibrary() -> decltype(tryUpdateMusicLibrary()) {
	using FunctionType = decltype(tryUpdateMusicLibrary())(*)(MusicDownloadManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x593ed8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto MusicDownloadManager::tryUpdateNewsFeed() -> decltype(tryUpdateNewsFeed()) {
	using FunctionType = decltype(tryUpdateNewsFeed())(*)(MusicDownloadManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5930d0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto MusicDownloadManager::tryUpdateSFXLibrary() -> decltype(tryUpdateSFXLibrary()) {
	using FunctionType = decltype(tryUpdateSFXLibrary())(*)(MusicDownloadManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x598a00, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}
