
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

auto MusicDownloadManager::customSFXPathDisplay(std::string const& p0) -> decltype(customSFXPathDisplay(p0)) {
	using FunctionType = decltype(customSFXPathDisplay(p0))(*)(std::string const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x652b50, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0);
}

auto MusicDownloadManager::customSFXPathLeaf(std::string const& p0) -> decltype(customSFXPathLeaf(p0)) {
	using FunctionType = decltype(customSFXPathLeaf(p0))(*)(std::string const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x6529f0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0);
}

auto MusicDownloadManager::encodeCustomSFXMappingEntries(std::map<std::pair<int, int>, std::string> const& mapping) -> decltype(encodeCustomSFXMappingEntries(mapping)) {
	using FunctionType = decltype(encodeCustomSFXMappingEntries(mapping))(*)(std::map<std::pair<int, int>, std::string> const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x653710, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(mapping);
}

auto MusicDownloadManager::linkTypeForURL(std::string const& p0) -> decltype(linkTypeForURL(p0)) {
	using FunctionType = decltype(linkTypeForURL(p0))(*)(std::string const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x65cb70, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0);
}

auto MusicDownloadManager::sharedState() -> decltype(sharedState()) {
	using FunctionType = decltype(sharedState())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x649cd0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto MusicDownloadManager::init() -> decltype(init()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&MusicDownloadManager::init), this);
	using FunctionType = decltype(init())(*)(MusicDownloadManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x64b320, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto MusicDownloadManager::addDLToActive(char const* tag) -> decltype(addDLToActive(tag)) {
	using FunctionType = decltype(addDLToActive(tag))(*)(MusicDownloadManager*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x64bfe0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, tag);
}

auto MusicDownloadManager::addDLToActive(char const* tag, cocos2d::CCObject* obj) -> decltype(addDLToActive(tag, obj)) {
	using FunctionType = decltype(addDLToActive(tag, obj))(*)(MusicDownloadManager*, char const*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x64f710, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, tag, obj);
}

auto MusicDownloadManager::addMusicDownloadDelegate(MusicDownloadDelegate* delegate) -> decltype(addMusicDownloadDelegate(delegate)) {
	using FunctionType = decltype(addMusicDownloadDelegate(delegate))(*)(MusicDownloadManager*, MusicDownloadDelegate*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x64b4d0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, delegate);
}

auto MusicDownloadManager::addSongObjectFromString(std::string str) -> decltype(addSongObjectFromString(str)) {
	using FunctionType = decltype(addSongObjectFromString(str))(*)(MusicDownloadManager*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x64c080, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, str);
}

auto MusicDownloadManager::clearSong(int songID) -> decltype(clearSong(songID)) {
	using FunctionType = decltype(clearSong(songID))(*)(MusicDownloadManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x64ea10, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, songID);
}

auto MusicDownloadManager::clearUnusedSongs() -> decltype(clearUnusedSongs()) {
	using FunctionType = decltype(clearUnusedSongs())(*)(MusicDownloadManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x64ebc0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto MusicDownloadManager::createArtistsInfo(std::string str) -> decltype(createArtistsInfo(str)) {
	using FunctionType = decltype(createArtistsInfo(str))(*)(MusicDownloadManager*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x64d970, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, str);
}

auto MusicDownloadManager::createCustomSFXFolder(std::string p0, int p1, int p2) -> decltype(createCustomSFXFolder(p0, p1, p2)) {
	using FunctionType = decltype(createCustomSFXFolder(p0, p1, p2))(*)(MusicDownloadManager*, std::string, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x651f80, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1, p2);
}

auto MusicDownloadManager::createCustomSFXPlacement(int p0, int p1, std::string p2, int p3) -> decltype(createCustomSFXPlacement(p0, p1, p2, p3)) {
	using FunctionType = decltype(createCustomSFXPlacement(p0, p1, p2, p3))(*)(MusicDownloadManager*, int, int, std::string, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x6522d0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1, p2, p3);
}

auto MusicDownloadManager::createSongsInfo(std::string songsStr, std::string artistsStr) -> decltype(createSongsInfo(songsStr, artistsStr)) {
	using FunctionType = decltype(createSongsInfo(songsStr, artistsStr))(*)(MusicDownloadManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x64d520, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, songsStr, artistsStr);
}

auto MusicDownloadManager::dataLoaded(DS_Dictionary* dict) -> decltype(dataLoaded(dict)) {
	using FunctionType = decltype(dataLoaded(dict))(*)(MusicDownloadManager*, DS_Dictionary*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x657940, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, dict);
}

auto MusicDownloadManager::decodeCustomSFX(std::string const& p0) -> decltype(decodeCustomSFX(p0)) {
	using FunctionType = decltype(decodeCustomSFX(p0))(*)(MusicDownloadManager*, std::string const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x657040, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto MusicDownloadManager::deleteSFX(int id) -> decltype(deleteSFX(id)) {
	using FunctionType = decltype(deleteSFX(id))(*)(MusicDownloadManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x660fc0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto MusicDownloadManager::deleteSong(int id) -> decltype(deleteSong(id)) {
	using FunctionType = decltype(deleteSong(id))(*)(MusicDownloadManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x64e9c0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto MusicDownloadManager::downloadCustomSong(int id) -> decltype(downloadCustomSong(id)) {
	using FunctionType = decltype(downloadCustomSong(id))(*)(MusicDownloadManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x64f120, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto MusicDownloadManager::downloadMusicLibrary() -> decltype(downloadMusicLibrary()) {
	using FunctionType = decltype(downloadMusicLibrary())(*)(MusicDownloadManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x65a1d0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto MusicDownloadManager::downloadSFX(int id) -> decltype(downloadSFX(id)) {
	using FunctionType = decltype(downloadSFX(id))(*)(MusicDownloadManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x65ec30, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto MusicDownloadManager::downloadSFXFailed(int id, GJSongError errorCode) -> decltype(downloadSFXFailed(id, errorCode)) {
	using FunctionType = decltype(downloadSFXFailed(id, errorCode))(*)(MusicDownloadManager*, int, GJSongError);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x65f170, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id, errorCode);
}

auto MusicDownloadManager::downloadSFXFinished(int id) -> decltype(downloadSFXFinished(id)) {
	using FunctionType = decltype(downloadSFXFinished(id))(*)(MusicDownloadManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x65f1e0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto MusicDownloadManager::downloadSFXLibrary() -> decltype(downloadSFXLibrary()) {
	using FunctionType = decltype(downloadSFXLibrary())(*)(MusicDownloadManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x65f590, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto MusicDownloadManager::downloadSong(int id) -> decltype(downloadSong(id)) {
	using FunctionType = decltype(downloadSong(id))(*)(MusicDownloadManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x64ed20, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto MusicDownloadManager::downloadSongFailed(int id, GJSongError errorCode) -> decltype(downloadSongFailed(id, errorCode)) {
	using FunctionType = decltype(downloadSongFailed(id, errorCode))(*)(MusicDownloadManager*, int, GJSongError);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x64f800, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id, errorCode);
}

auto MusicDownloadManager::downloadSongFinished(int id) -> decltype(downloadSongFinished(id)) {
	using FunctionType = decltype(downloadSongFinished(id))(*)(MusicDownloadManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x64f870, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto MusicDownloadManager::downloadSongStarted(int id) -> decltype(downloadSongStarted(id)) {
	using FunctionType = decltype(downloadSongStarted(id))(*)(MusicDownloadManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x64eca0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto MusicDownloadManager::encodeCustomSFX(std::set<int> const& sfxIDs) -> decltype(encodeCustomSFX(sfxIDs)) {
	using FunctionType = decltype(encodeCustomSFX(sfxIDs))(*)(MusicDownloadManager*, std::set<int> const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x6562d0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sfxIDs);
}

auto MusicDownloadManager::encodeDataTo(DS_Dictionary* dict) -> decltype(encodeDataTo(dict)) {
	using FunctionType = decltype(encodeDataTo(dict))(*)(MusicDownloadManager*, DS_Dictionary*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x6572b0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, dict);
}

auto MusicDownloadManager::filterMusicByArtistID(int id, cocos2d::CCArray* songs) -> decltype(filterMusicByArtistID(id, songs)) {
	using FunctionType = decltype(filterMusicByArtistID(id, songs))(*)(MusicDownloadManager*, int, cocos2d::CCArray*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x65e800, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id, songs);
}

auto MusicDownloadManager::filterMusicByTag(int id, cocos2d::CCArray* songs) -> decltype(filterMusicByTag(id, songs)) {
	using FunctionType = decltype(filterMusicByTag(id, songs))(*)(MusicDownloadManager*, int, cocos2d::CCArray*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x65ea20, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id, songs);
}

auto MusicDownloadManager::firstSetup() -> decltype(firstSetup()) {
	using FunctionType = decltype(firstSetup())(*)(MusicDownloadManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x657250, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto MusicDownloadManager::generateCustomContentURL(std::string path) -> decltype(generateCustomContentURL(path)) {
	using FunctionType = decltype(generateCustomContentURL(path))(*)(MusicDownloadManager*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x659690, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, path);
}

auto MusicDownloadManager::generateResourceAssetList() -> decltype(generateResourceAssetList()) {
	using FunctionType = decltype(generateResourceAssetList())(*)(MusicDownloadManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x64b410, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto MusicDownloadManager::getAllMusicArtists(OptionsObjectDelegate* delegate) -> decltype(getAllMusicArtists(delegate)) {
	using FunctionType = decltype(getAllMusicArtists(delegate))(*)(MusicDownloadManager*, OptionsObjectDelegate*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x65e6e0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, delegate);
}

auto MusicDownloadManager::getAllMusicObjects(GJSongType type) -> decltype(getAllMusicObjects(type)) {
	using FunctionType = decltype(getAllMusicObjects(type))(*)(MusicDownloadManager*, GJSongType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x65e2b0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, type);
}

auto MusicDownloadManager::getAllMusicTags(OptionsObjectDelegate* delegate) -> decltype(getAllMusicTags(delegate)) {
	using FunctionType = decltype(getAllMusicTags(delegate))(*)(MusicDownloadManager*, OptionsObjectDelegate*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x65e580, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, delegate);
}

auto MusicDownloadManager::getAllSFXObjects(bool onlySFX) -> decltype(getAllSFXObjects(onlySFX)) {
	using FunctionType = decltype(getAllSFXObjects(onlySFX))(*)(MusicDownloadManager*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x660f00, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, onlySFX);
}

auto MusicDownloadManager::getAllSongs() -> decltype(getAllSongs()) {
	using FunctionType = decltype(getAllSongs())(*)(MusicDownloadManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x64e820, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto MusicDownloadManager::getCustomContentURL() -> decltype(getCustomContentURL()) {
	using FunctionType = decltype(getCustomContentURL())(*)(MusicDownloadManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x658c50, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto MusicDownloadManager::getCustomSFXLocationText(SFXInfoObject* p0) -> decltype(getCustomSFXLocationText(p0)) {
	using FunctionType = decltype(getCustomSFXLocationText(p0))(*)(MusicDownloadManager*, SFXInfoObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x6530d0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto MusicDownloadManager::getCustomSFXRawPath(SFXInfoObject* object) -> decltype(getCustomSFXRawPath(object)) {
	using FunctionType = decltype(getCustomSFXRawPath(object))(*)(MusicDownloadManager*, SFXInfoObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x652d90, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto MusicDownloadManager::getCustomSFXRoot() -> decltype(getCustomSFXRoot()) {
	using FunctionType = decltype(getCustomSFXRoot())(*)(MusicDownloadManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x6514e0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto MusicDownloadManager::getDLObject(char const* id) -> decltype(getDLObject(id)) {
	using FunctionType = decltype(getDLObject(id))(*)(MusicDownloadManager*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x64b770, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto MusicDownloadManager::getDownloadedSongs() -> decltype(getDownloadedSongs()) {
	using FunctionType = decltype(getDownloadedSongs())(*)(MusicDownloadManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x64e4d0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto MusicDownloadManager::getDownloadProgress(int id) -> decltype(getDownloadProgress(id)) {
	using FunctionType = decltype(getDownloadProgress(id))(*)(MusicDownloadManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x64f8e0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto MusicDownloadManager::getMusicArtistForID(int id) -> decltype(getMusicArtistForID(id)) {
	using FunctionType = decltype(getMusicArtistForID(id))(*)(MusicDownloadManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x65e290, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto MusicDownloadManager::getMusicObject(int id) -> decltype(getMusicObject(id)) {
	using FunctionType = decltype(getMusicObject(id))(*)(MusicDownloadManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x64f9a0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto MusicDownloadManager::getSFXDownloadKey(int id) -> decltype(getSFXDownloadKey(id)) {
	using FunctionType = decltype(getSFXDownloadKey(id))(*)(MusicDownloadManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x64f980, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto MusicDownloadManager::getSFXDownloadProgress(int id) -> decltype(getSFXDownloadProgress(id)) {
	using FunctionType = decltype(getSFXDownloadProgress(id))(*)(MusicDownloadManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x64f930, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto MusicDownloadManager::getSFXObject(int id) -> decltype(getSFXObject(id)) {
	using FunctionType = decltype(getSFXObject(id))(*)(MusicDownloadManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x652640, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto MusicDownloadManager::getSongDownloadKey(int id) -> decltype(getSongDownloadKey(id)) {
	using FunctionType = decltype(getSongDownloadKey(id))(*)(MusicDownloadManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x64b700, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto MusicDownloadManager::getSongInfo(int id, bool download) -> decltype(getSongInfo(id, download)) {
	using FunctionType = decltype(getSongInfo(id, download))(*)(MusicDownloadManager*, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x64bb20, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id, download);
}

auto MusicDownloadManager::getSongInfoKey(int id) -> decltype(getSongInfoKey(id)) {
	using FunctionType = decltype(getSongInfoKey(id))(*)(MusicDownloadManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x64b6e0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto MusicDownloadManager::getSongInfoObject(int id) -> decltype(getSongInfoObject(id)) {
	using FunctionType = decltype(getSongInfoObject(id))(*)(MusicDownloadManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x64b9c0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto MusicDownloadManager::getSongPriority() -> decltype(getSongPriority()) {
	using FunctionType = decltype(getSongPriority())(*)(MusicDownloadManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x64bb00, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto MusicDownloadManager::handleIt(bool success, std::string response, std::string tag, GJHttpType type) -> decltype(handleIt(success, response, tag, type)) {
	using FunctionType = decltype(handleIt(success, response, tag, type))(*)(MusicDownloadManager*, bool, std::string, std::string, GJHttpType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x64a380, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, success, response, tag, type);
}

auto MusicDownloadManager::handleItDelayed(bool success, std::string response, std::string tag, GJHttpType type) -> decltype(handleItDelayed(success, response, tag, type)) {
	using FunctionType = decltype(handleItDelayed(success, response, tag, type))(*)(MusicDownloadManager*, bool, std::string, std::string, GJHttpType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x64a650, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, success, response, tag, type);
}

auto MusicDownloadManager::handleItND(cocos2d::CCNode* node, void* data) -> decltype(handleItND(node, data)) {
	using FunctionType = decltype(handleItND(node, data))(*)(MusicDownloadManager*, cocos2d::CCNode*, void*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x64a790, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, node, data);
}

auto MusicDownloadManager::importCustomSFXFromFile(std::string& p0, int& p1, int& p2) -> decltype(importCustomSFXFromFile(p0, p1, p2)) {
	using FunctionType = decltype(importCustomSFXFromFile(p0, p1, p2))(*)(MusicDownloadManager*, std::string&, int&, int&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x656770, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1, p2);
}

auto MusicDownloadManager::importCustomSFXSetup(std::string const& p0, std::string const& p1, bool p2, int& p3, int& p4) -> decltype(importCustomSFXSetup(p0, p1, p2, p3, p4)) {
	using FunctionType = decltype(importCustomSFXSetup(p0, p1, p2, p3, p4))(*)(MusicDownloadManager*, std::string const&, std::string const&, bool, int&, int&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x653bf0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1, p2, p3, p4);
}

auto MusicDownloadManager::incrementPriorityForSong(int id) -> decltype(incrementPriorityForSong(id)) {
	using FunctionType = decltype(incrementPriorityForSong(id))(*)(MusicDownloadManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x64b990, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto MusicDownloadManager::isDLActive(char const* tag) -> decltype(isDLActive(tag)) {
	using FunctionType = decltype(isDLActive(tag))(*)(MusicDownloadManager*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x64b6c0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, tag);
}

auto MusicDownloadManager::isMusicLibraryLoaded() -> decltype(isMusicLibraryLoaded()) {
	using FunctionType = decltype(isMusicLibraryLoaded())(*)(MusicDownloadManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x65cb50, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto MusicDownloadManager::isRunningActionForSongID(int id) -> decltype(isRunningActionForSongID(id)) {
	using FunctionType = decltype(isRunningActionForSongID(id))(*)(MusicDownloadManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x64b650, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto MusicDownloadManager::isSFXDownloaded(int id) -> decltype(isSFXDownloaded(id)) {
	using FunctionType = decltype(isSFXDownloaded(id))(*)(MusicDownloadManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x64fd60, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto MusicDownloadManager::isSFXLibraryLoaded() -> decltype(isSFXLibraryLoaded()) {
	using FunctionType = decltype(isSFXLibraryLoaded())(*)(MusicDownloadManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x660b80, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto MusicDownloadManager::isSongDownloaded(int id) -> decltype(isSongDownloaded(id)) {
	using FunctionType = decltype(isSongDownloaded(id))(*)(MusicDownloadManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x64e570, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto MusicDownloadManager::limitDownloadedSongs() -> decltype(limitDownloadedSongs()) {
	using FunctionType = decltype(limitDownloadedSongs())(*)(MusicDownloadManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x64e880, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto MusicDownloadManager::loadSongInfoFailed(int id, GJSongError errorCode) -> decltype(loadSongInfoFailed(id, errorCode)) {
	using FunctionType = decltype(loadSongInfoFailed(id, errorCode))(*)(MusicDownloadManager*, int, GJSongError);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x64c010, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id, errorCode);
}

auto MusicDownloadManager::loadSongInfoFinished(SongInfoObject* object) -> decltype(loadSongInfoFinished(object)) {
	using FunctionType = decltype(loadSongInfoFinished(object))(*)(MusicDownloadManager*, SongInfoObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x64bf70, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto MusicDownloadManager::musicActionFailed(GJMusicAction action) -> decltype(musicActionFailed(action)) {
	using FunctionType = decltype(musicActionFailed(action))(*)(MusicDownloadManager*, GJMusicAction);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x658dc0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, action);
}

auto MusicDownloadManager::nameForTagID(int id) -> decltype(nameForTagID(id)) {
	using FunctionType = decltype(nameForTagID(id))(*)(MusicDownloadManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x65eb00, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto MusicDownloadManager::onDownloadMusicLibraryCompleted(cocos2d::extension::CCHttpClient* client, cocos2d::extension::CCHttpResponse* response) -> decltype(onDownloadMusicLibraryCompleted(client, response)) {
	using FunctionType = decltype(onDownloadMusicLibraryCompleted(client, response))(*)(MusicDownloadManager*, cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x65a3c0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, client, response);
}

auto MusicDownloadManager::onDownloadNewsFeedCompleted(cocos2d::extension::CCHttpClient* client, cocos2d::extension::CCHttpResponse* response) -> decltype(onDownloadNewsFeedCompleted(client, response)) {
	using FunctionType = decltype(onDownloadNewsFeedCompleted(client, response))(*)(MusicDownloadManager*, cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x6614d0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, client, response);
}

auto MusicDownloadManager::onDownloadSFXCompleted(cocos2d::extension::CCHttpClient* client, cocos2d::extension::CCHttpResponse* response) -> decltype(onDownloadSFXCompleted(client, response)) {
	using FunctionType = decltype(onDownloadSFXCompleted(client, response))(*)(MusicDownloadManager*, cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x65ef20, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, client, response);
}

auto MusicDownloadManager::onDownloadSFXLibraryCompleted(cocos2d::extension::CCHttpClient* client, cocos2d::extension::CCHttpResponse* response) -> decltype(onDownloadSFXLibraryCompleted(client, response)) {
	using FunctionType = decltype(onDownloadSFXLibraryCompleted(client, response))(*)(MusicDownloadManager*, cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x65f740, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, client, response);
}

auto MusicDownloadManager::onDownloadSongCompleted(cocos2d::extension::CCHttpClient* client, cocos2d::extension::CCHttpResponse* response) -> decltype(onDownloadSongCompleted(client, response)) {
	using FunctionType = decltype(onDownloadSongCompleted(client, response))(*)(MusicDownloadManager*, cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x64f460, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, client, response);
}

auto MusicDownloadManager::onGetAudioFilesizeCompleted(std::string response, std::string tag) -> decltype(onGetAudioFilesizeCompleted(response, tag)) {
	using FunctionType = decltype(onGetAudioFilesizeCompleted(response, tag))(*)(MusicDownloadManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x64aca0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto MusicDownloadManager::onGetCustomContentURLCompleted(std::string response, std::string tag) -> decltype(onGetCustomContentURLCompleted(response, tag)) {
	using FunctionType = decltype(onGetCustomContentURLCompleted(response, tag))(*)(MusicDownloadManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x64ab50, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto MusicDownloadManager::onGetSongInfoCompleted(std::string response, std::string tag) -> decltype(onGetSongInfoCompleted(response, tag)) {
	using FunctionType = decltype(onGetSongInfoCompleted(response, tag))(*)(MusicDownloadManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x64a8b0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto MusicDownloadManager::onProcessHttpRequestCompleted(cocos2d::extension::CCHttpClient* client, cocos2d::extension::CCHttpResponse* response) -> decltype(onProcessHttpRequestCompleted(client, response)) {
	using FunctionType = decltype(onProcessHttpRequestCompleted(client, response))(*)(MusicDownloadManager*, cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x64a050, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, client, response);
}

auto MusicDownloadManager::onTryUpdateMusicLibraryCompleted(cocos2d::extension::CCHttpClient* client, cocos2d::extension::CCHttpResponse* response) -> decltype(onTryUpdateMusicLibraryCompleted(client, response)) {
	using FunctionType = decltype(onTryUpdateMusicLibraryCompleted(client, response))(*)(MusicDownloadManager*, cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x65a080, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, client, response);
}

auto MusicDownloadManager::onTryUpdateNewsFeedCompleted(cocos2d::extension::CCHttpClient* client, cocos2d::extension::CCHttpResponse* response) -> decltype(onTryUpdateNewsFeedCompleted(client, response)) {
	using FunctionType = decltype(onTryUpdateNewsFeedCompleted(client, response))(*)(MusicDownloadManager*, cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x6611e0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, client, response);
}

auto MusicDownloadManager::onTryUpdateSFXLibraryCompleted(cocos2d::extension::CCHttpClient* client, cocos2d::extension::CCHttpResponse* response) -> decltype(onTryUpdateSFXLibraryCompleted(client, response)) {
	using FunctionType = decltype(onTryUpdateSFXLibraryCompleted(client, response))(*)(MusicDownloadManager*, cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x65f440, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, client, response);
}

auto MusicDownloadManager::parseMusicLibrary() -> decltype(parseMusicLibrary()) {
	using FunctionType = decltype(parseMusicLibrary())(*)(MusicDownloadManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x65a610, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto MusicDownloadManager::parseNewsFeed() -> decltype(parseNewsFeed()) {
	using FunctionType = decltype(parseNewsFeed())(*)(MusicDownloadManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x661c20, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto MusicDownloadManager::parseSFXLibrary() -> decltype(parseSFXLibrary()) {
	using FunctionType = decltype(parseSFXLibrary())(*)(MusicDownloadManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x65f910, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto MusicDownloadManager::pathForSFX(int id) -> decltype(pathForSFX(id)) {
	using FunctionType = decltype(pathForSFX(id))(*)(MusicDownloadManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x650150, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto MusicDownloadManager::pathForSFXFolder(int id) -> decltype(pathForSFXFolder(id)) {
	using FunctionType = decltype(pathForSFXFolder(id))(*)(MusicDownloadManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x650210, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto MusicDownloadManager::pathForSong(int id) -> decltype(pathForSong(id)) {
	using FunctionType = decltype(pathForSong(id))(*)(MusicDownloadManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x64eb00, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto MusicDownloadManager::pathForSongFolder(int id) -> decltype(pathForSongFolder(id)) {
	using FunctionType = decltype(pathForSongFolder(id))(*)(MusicDownloadManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x64fb00, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto MusicDownloadManager::ProcessHttpGetRequest(std::string url, std::string tag, cocos2d::extension::SEL_HttpResponse selector, int connectTimeout, int readTimeout) -> decltype(ProcessHttpGetRequest(url, tag, selector, connectTimeout, readTimeout)) {
	using FunctionType = decltype(ProcessHttpGetRequest(url, tag, selector, connectTimeout, readTimeout))(*)(MusicDownloadManager*, std::string, std::string, cocos2d::extension::SEL_HttpResponse, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x64a210, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, url, tag, selector, connectTimeout, readTimeout);
}

auto MusicDownloadManager::ProcessHttpRequest(std::string url, std::string params, std::string tag, GJHttpType type) -> decltype(ProcessHttpRequest(url, params, tag, type)) {
	using FunctionType = decltype(ProcessHttpRequest(url, params, tag, type))(*)(MusicDownloadManager*, std::string, std::string, std::string, GJHttpType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x649ec0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, url, params, tag, type);
}

auto MusicDownloadManager::removeDLFromActive(char const* tag) -> decltype(removeDLFromActive(tag)) {
	using FunctionType = decltype(removeDLFromActive(tag))(*)(MusicDownloadManager*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x64b850, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, tag);
}

auto MusicDownloadManager::removeMusicDownloadDelegate(MusicDownloadDelegate* delegate) -> decltype(removeMusicDownloadDelegate(delegate)) {
	using FunctionType = decltype(removeMusicDownloadDelegate(delegate))(*)(MusicDownloadManager*, MusicDownloadDelegate*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x64b5c0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, delegate);
}

auto MusicDownloadManager::responseToDict(std::string response, char const* delimiter) -> decltype(responseToDict(response, delimiter)) {
	using FunctionType = decltype(responseToDict(response, delimiter))(*)(MusicDownloadManager*, std::string, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x64c320, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, response, delimiter);
}

auto MusicDownloadManager::showTOS(FLAlertLayerProtocol* delegate) -> decltype(showTOS(delegate)) {
	using FunctionType = decltype(showTOS(delegate))(*)(MusicDownloadManager*, FLAlertLayerProtocol*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x650470, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, delegate);
}

auto MusicDownloadManager::songStateChanged() -> decltype(songStateChanged()) {
	using FunctionType = decltype(songStateChanged())(*)(MusicDownloadManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x64b930, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto MusicDownloadManager::stopDownload(int id) -> decltype(stopDownload(id)) {
	using FunctionType = decltype(stopDownload(id))(*)(MusicDownloadManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x64b720, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto MusicDownloadManager::storeMusicObject(SongInfoObject* object) -> decltype(storeMusicObject(object)) {
	using FunctionType = decltype(storeMusicObject(object))(*)(MusicDownloadManager*, SongInfoObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x65ddb0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto MusicDownloadManager::storeSFXInfoObject(SFXInfoObject* object) -> decltype(storeSFXInfoObject(object)) {
	using FunctionType = decltype(storeSFXInfoObject(object))(*)(MusicDownloadManager*, SFXInfoObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x660ba0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto MusicDownloadManager::tryLoadLibraries() -> decltype(tryLoadLibraries()) {
	using FunctionType = decltype(tryLoadLibraries())(*)(MusicDownloadManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x660c80, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto MusicDownloadManager::tryLoadNewsFeed() -> decltype(tryLoadNewsFeed()) {
	using FunctionType = decltype(tryLoadNewsFeed())(*)(MusicDownloadManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x6611b0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto MusicDownloadManager::tryUpdateMusicLibrary() -> decltype(tryUpdateMusicLibrary()) {
	using FunctionType = decltype(tryUpdateMusicLibrary())(*)(MusicDownloadManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x659e90, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}
