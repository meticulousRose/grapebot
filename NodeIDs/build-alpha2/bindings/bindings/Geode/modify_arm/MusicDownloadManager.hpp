#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/MusicDownloadManager.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_customSFXPathDisplay
		#define GEODE_STATICS_customSFXPathDisplay
		GEODE_AS_STATIC_FUNCTION(customSFXPathDisplay) 
	#endif

	#ifndef GEODE_STATICS_customSFXPathLeaf
		#define GEODE_STATICS_customSFXPathLeaf
		GEODE_AS_STATIC_FUNCTION(customSFXPathLeaf) 
	#endif

	#ifndef GEODE_STATICS_decodeCustomSFXMappingEntries
		#define GEODE_STATICS_decodeCustomSFXMappingEntries
		GEODE_AS_STATIC_FUNCTION(decodeCustomSFXMappingEntries) 
	#endif

	#ifndef GEODE_STATICS_encodeCustomSFXMappingEntries
		#define GEODE_STATICS_encodeCustomSFXMappingEntries
		GEODE_AS_STATIC_FUNCTION(encodeCustomSFXMappingEntries) 
	#endif

	#ifndef GEODE_STATICS_joinIDString
		#define GEODE_STATICS_joinIDString
		GEODE_AS_STATIC_FUNCTION(joinIDString) 
	#endif

	#ifndef GEODE_STATICS_linkRowString
		#define GEODE_STATICS_linkRowString
		GEODE_AS_STATIC_FUNCTION(linkRowString) 
	#endif

	#ifndef GEODE_STATICS_linkTitleForType
		#define GEODE_STATICS_linkTitleForType
		GEODE_AS_STATIC_FUNCTION(linkTitleForType) 
	#endif

	#ifndef GEODE_STATICS_linkTypeForURL
		#define GEODE_STATICS_linkTypeForURL
		GEODE_AS_STATIC_FUNCTION(linkTypeForURL) 
	#endif

	#ifndef GEODE_STATICS_parseLinkRows
		#define GEODE_STATICS_parseLinkRows
		GEODE_AS_STATIC_FUNCTION(parseLinkRows) 
	#endif

	#ifndef GEODE_STATICS_sharedState
		#define GEODE_STATICS_sharedState
		GEODE_AS_STATIC_FUNCTION(sharedState) 
	#endif

	#ifndef GEODE_STATICS_splitIDString
		#define GEODE_STATICS_splitIDString
		GEODE_AS_STATIC_FUNCTION(splitIDString) 
	#endif

	#ifndef GEODE_STATICS_urlEncode
		#define GEODE_STATICS_urlEncode
		GEODE_AS_STATIC_FUNCTION(urlEncode) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_addDLToActive
		#define GEODE_STATICS_addDLToActive
		GEODE_AS_STATIC_FUNCTION(addDLToActive) 
	#endif

	#ifndef GEODE_STATICS_addMusicDownloadDelegate
		#define GEODE_STATICS_addMusicDownloadDelegate
		GEODE_AS_STATIC_FUNCTION(addMusicDownloadDelegate) 
	#endif

	#ifndef GEODE_STATICS_addSongObjectFromString
		#define GEODE_STATICS_addSongObjectFromString
		GEODE_AS_STATIC_FUNCTION(addSongObjectFromString) 
	#endif

	#ifndef GEODE_STATICS_clearSong
		#define GEODE_STATICS_clearSong
		GEODE_AS_STATIC_FUNCTION(clearSong) 
	#endif

	#ifndef GEODE_STATICS_clearSortedMusicCache
		#define GEODE_STATICS_clearSortedMusicCache
		GEODE_AS_STATIC_FUNCTION(clearSortedMusicCache) 
	#endif

	#ifndef GEODE_STATICS_clearUnusedSongs
		#define GEODE_STATICS_clearUnusedSongs
		GEODE_AS_STATIC_FUNCTION(clearUnusedSongs) 
	#endif

	#ifndef GEODE_STATICS_createArtistsInfo
		#define GEODE_STATICS_createArtistsInfo
		GEODE_AS_STATIC_FUNCTION(createArtistsInfo) 
	#endif

	#ifndef GEODE_STATICS_createCustomSFXFolder
		#define GEODE_STATICS_createCustomSFXFolder
		GEODE_AS_STATIC_FUNCTION(createCustomSFXFolder) 
	#endif

	#ifndef GEODE_STATICS_createCustomSFXPlacement
		#define GEODE_STATICS_createCustomSFXPlacement
		GEODE_AS_STATIC_FUNCTION(createCustomSFXPlacement) 
	#endif

	#ifndef GEODE_STATICS_createSongsInfo
		#define GEODE_STATICS_createSongsInfo
		GEODE_AS_STATIC_FUNCTION(createSongsInfo) 
	#endif

	#ifndef GEODE_STATICS_dataLoaded
		#define GEODE_STATICS_dataLoaded
		GEODE_AS_STATIC_FUNCTION(dataLoaded) 
	#endif

	#ifndef GEODE_STATICS_decodeCustomSFX
		#define GEODE_STATICS_decodeCustomSFX
		GEODE_AS_STATIC_FUNCTION(decodeCustomSFX) 
	#endif

	#ifndef GEODE_STATICS_deleteCustomSFXObject
		#define GEODE_STATICS_deleteCustomSFXObject
		GEODE_AS_STATIC_FUNCTION(deleteCustomSFXObject) 
	#endif

	#ifndef GEODE_STATICS_deleteSFX
		#define GEODE_STATICS_deleteSFX
		GEODE_AS_STATIC_FUNCTION(deleteSFX) 
	#endif

	#ifndef GEODE_STATICS_deleteSong
		#define GEODE_STATICS_deleteSong
		GEODE_AS_STATIC_FUNCTION(deleteSong) 
	#endif

	#ifndef GEODE_STATICS_downloadCustomSong
		#define GEODE_STATICS_downloadCustomSong
		GEODE_AS_STATIC_FUNCTION(downloadCustomSong) 
	#endif

	#ifndef GEODE_STATICS_downloadMusicLibrary
		#define GEODE_STATICS_downloadMusicLibrary
		GEODE_AS_STATIC_FUNCTION(downloadMusicLibrary) 
	#endif

	#ifndef GEODE_STATICS_downloadNewsFeed
		#define GEODE_STATICS_downloadNewsFeed
		GEODE_AS_STATIC_FUNCTION(downloadNewsFeed) 
	#endif

	#ifndef GEODE_STATICS_downloadNewsImage
		#define GEODE_STATICS_downloadNewsImage
		GEODE_AS_STATIC_FUNCTION(downloadNewsImage) 
	#endif

	#ifndef GEODE_STATICS_downloadSFX
		#define GEODE_STATICS_downloadSFX
		GEODE_AS_STATIC_FUNCTION(downloadSFX) 
	#endif

	#ifndef GEODE_STATICS_downloadSFXFailed
		#define GEODE_STATICS_downloadSFXFailed
		GEODE_AS_STATIC_FUNCTION(downloadSFXFailed) 
	#endif

	#ifndef GEODE_STATICS_downloadSFXFinished
		#define GEODE_STATICS_downloadSFXFinished
		GEODE_AS_STATIC_FUNCTION(downloadSFXFinished) 
	#endif

	#ifndef GEODE_STATICS_downloadSFXLibrary
		#define GEODE_STATICS_downloadSFXLibrary
		GEODE_AS_STATIC_FUNCTION(downloadSFXLibrary) 
	#endif

	#ifndef GEODE_STATICS_downloadSong
		#define GEODE_STATICS_downloadSong
		GEODE_AS_STATIC_FUNCTION(downloadSong) 
	#endif

	#ifndef GEODE_STATICS_downloadSongFailed
		#define GEODE_STATICS_downloadSongFailed
		GEODE_AS_STATIC_FUNCTION(downloadSongFailed) 
	#endif

	#ifndef GEODE_STATICS_downloadSongFinished
		#define GEODE_STATICS_downloadSongFinished
		GEODE_AS_STATIC_FUNCTION(downloadSongFinished) 
	#endif

	#ifndef GEODE_STATICS_downloadSongStarted
		#define GEODE_STATICS_downloadSongStarted
		GEODE_AS_STATIC_FUNCTION(downloadSongStarted) 
	#endif

	#ifndef GEODE_STATICS_encodeCustomSFX
		#define GEODE_STATICS_encodeCustomSFX
		GEODE_AS_STATIC_FUNCTION(encodeCustomSFX) 
	#endif

	#ifndef GEODE_STATICS_encodeDataTo
		#define GEODE_STATICS_encodeDataTo
		GEODE_AS_STATIC_FUNCTION(encodeDataTo) 
	#endif

	#ifndef GEODE_STATICS_exportCustomSFXToFile
		#define GEODE_STATICS_exportCustomSFXToFile
		GEODE_AS_STATIC_FUNCTION(exportCustomSFXToFile) 
	#endif

	#ifndef GEODE_STATICS_filterMusicByArtistID
		#define GEODE_STATICS_filterMusicByArtistID
		GEODE_AS_STATIC_FUNCTION(filterMusicByArtistID) 
	#endif

	#ifndef GEODE_STATICS_filterMusicByTag
		#define GEODE_STATICS_filterMusicByTag
		GEODE_AS_STATIC_FUNCTION(filterMusicByTag) 
	#endif

	#ifndef GEODE_STATICS_firstSetup
		#define GEODE_STATICS_firstSetup
		GEODE_AS_STATIC_FUNCTION(firstSetup) 
	#endif

	#ifndef GEODE_STATICS_generateCustomContentURL
		#define GEODE_STATICS_generateCustomContentURL
		GEODE_AS_STATIC_FUNCTION(generateCustomContentURL) 
	#endif

	#ifndef GEODE_STATICS_generateResourceAssetList
		#define GEODE_STATICS_generateResourceAssetList
		GEODE_AS_STATIC_FUNCTION(generateResourceAssetList) 
	#endif

	#ifndef GEODE_STATICS_getAllMusicArtists
		#define GEODE_STATICS_getAllMusicArtists
		GEODE_AS_STATIC_FUNCTION(getAllMusicArtists) 
	#endif

	#ifndef GEODE_STATICS_getAllMusicObjects
		#define GEODE_STATICS_getAllMusicObjects
		GEODE_AS_STATIC_FUNCTION(getAllMusicObjects) 
	#endif

	#ifndef GEODE_STATICS_getAllMusicObjectsSorted
		#define GEODE_STATICS_getAllMusicObjectsSorted
		GEODE_AS_STATIC_FUNCTION(getAllMusicObjectsSorted) 
	#endif

	#ifndef GEODE_STATICS_getAllMusicTags
		#define GEODE_STATICS_getAllMusicTags
		GEODE_AS_STATIC_FUNCTION(getAllMusicTags) 
	#endif

	#ifndef GEODE_STATICS_getAllSFXObjects
		#define GEODE_STATICS_getAllSFXObjects
		GEODE_AS_STATIC_FUNCTION(getAllSFXObjects) 
	#endif

	#ifndef GEODE_STATICS_getAllSongs
		#define GEODE_STATICS_getAllSongs
		GEODE_AS_STATIC_FUNCTION(getAllSongs) 
	#endif

	#ifndef GEODE_STATICS_getAudioFilesize
		#define GEODE_STATICS_getAudioFilesize
		GEODE_AS_STATIC_FUNCTION(getAudioFilesize) 
	#endif

	#ifndef GEODE_STATICS_getCustomContentURL
		#define GEODE_STATICS_getCustomContentURL
		GEODE_AS_STATIC_FUNCTION(getCustomContentURL) 
	#endif

	#ifndef GEODE_STATICS_getCustomSFXCount
		#define GEODE_STATICS_getCustomSFXCount
		GEODE_AS_STATIC_FUNCTION(getCustomSFXCount) 
	#endif

	#ifndef GEODE_STATICS_getCustomSFXFolderForID
		#define GEODE_STATICS_getCustomSFXFolderForID
		GEODE_AS_STATIC_FUNCTION(getCustomSFXFolderForID) 
	#endif

	#ifndef GEODE_STATICS_getCustomSFXFolderPath
		#define GEODE_STATICS_getCustomSFXFolderPath
		GEODE_AS_STATIC_FUNCTION(getCustomSFXFolderPath) 
	#endif

	#ifndef GEODE_STATICS_getCustomSFXLocationText
		#define GEODE_STATICS_getCustomSFXLocationText
		GEODE_AS_STATIC_FUNCTION(getCustomSFXLocationText) 
	#endif

	#ifndef GEODE_STATICS_getCustomSFXObject
		#define GEODE_STATICS_getCustomSFXObject
		GEODE_AS_STATIC_FUNCTION(getCustomSFXObject) 
	#endif

	#ifndef GEODE_STATICS_getCustomSFXRawPath
		#define GEODE_STATICS_getCustomSFXRawPath
		GEODE_AS_STATIC_FUNCTION(getCustomSFXRawPath) 
	#endif

	#ifndef GEODE_STATICS_getCustomSFXRoot
		#define GEODE_STATICS_getCustomSFXRoot
		GEODE_AS_STATIC_FUNCTION(getCustomSFXRoot) 
	#endif

	#ifndef GEODE_STATICS_getDLObject
		#define GEODE_STATICS_getDLObject
		GEODE_AS_STATIC_FUNCTION(getDLObject) 
	#endif

	#ifndef GEODE_STATICS_getDownloadedSongs
		#define GEODE_STATICS_getDownloadedSongs
		GEODE_AS_STATIC_FUNCTION(getDownloadedSongs) 
	#endif

	#ifndef GEODE_STATICS_getDownloadProgress
		#define GEODE_STATICS_getDownloadProgress
		GEODE_AS_STATIC_FUNCTION(getDownloadProgress) 
	#endif

	#ifndef GEODE_STATICS_getMusicArtistForID
		#define GEODE_STATICS_getMusicArtistForID
		GEODE_AS_STATIC_FUNCTION(getMusicArtistForID) 
	#endif

	#ifndef GEODE_STATICS_getMusicObject
		#define GEODE_STATICS_getMusicObject
		GEODE_AS_STATIC_FUNCTION(getMusicObject) 
	#endif

	#ifndef GEODE_STATICS_getNewsImageDownloadKey
		#define GEODE_STATICS_getNewsImageDownloadKey
		GEODE_AS_STATIC_FUNCTION(getNewsImageDownloadKey) 
	#endif

	#ifndef GEODE_STATICS_getSFXDownloadKey
		#define GEODE_STATICS_getSFXDownloadKey
		GEODE_AS_STATIC_FUNCTION(getSFXDownloadKey) 
	#endif

	#ifndef GEODE_STATICS_getSFXDownloadProgress
		#define GEODE_STATICS_getSFXDownloadProgress
		GEODE_AS_STATIC_FUNCTION(getSFXDownloadProgress) 
	#endif

	#ifndef GEODE_STATICS_getSFXFolderObjectForID
		#define GEODE_STATICS_getSFXFolderObjectForID
		GEODE_AS_STATIC_FUNCTION(getSFXFolderObjectForID) 
	#endif

	#ifndef GEODE_STATICS_getSFXFolderPathForID
		#define GEODE_STATICS_getSFXFolderPathForID
		GEODE_AS_STATIC_FUNCTION(getSFXFolderPathForID) 
	#endif

	#ifndef GEODE_STATICS_getSFXObject
		#define GEODE_STATICS_getSFXObject
		GEODE_AS_STATIC_FUNCTION(getSFXObject) 
	#endif

	#ifndef GEODE_STATICS_getSongDownloadKey
		#define GEODE_STATICS_getSongDownloadKey
		GEODE_AS_STATIC_FUNCTION(getSongDownloadKey) 
	#endif

	#ifndef GEODE_STATICS_getSongInfo
		#define GEODE_STATICS_getSongInfo
		GEODE_AS_STATIC_FUNCTION(getSongInfo) 
	#endif

	#ifndef GEODE_STATICS_getSongInfoKey
		#define GEODE_STATICS_getSongInfoKey
		GEODE_AS_STATIC_FUNCTION(getSongInfoKey) 
	#endif

	#ifndef GEODE_STATICS_getSongInfoObject
		#define GEODE_STATICS_getSongInfoObject
		GEODE_AS_STATIC_FUNCTION(getSongInfoObject) 
	#endif

	#ifndef GEODE_STATICS_getSongPriority
		#define GEODE_STATICS_getSongPriority
		GEODE_AS_STATIC_FUNCTION(getSongPriority) 
	#endif

	#ifndef GEODE_STATICS_handleIt
		#define GEODE_STATICS_handleIt
		GEODE_AS_STATIC_FUNCTION(handleIt) 
	#endif

	#ifndef GEODE_STATICS_handleItDelayed
		#define GEODE_STATICS_handleItDelayed
		GEODE_AS_STATIC_FUNCTION(handleItDelayed) 
	#endif

	#ifndef GEODE_STATICS_handleItND
		#define GEODE_STATICS_handleItND
		GEODE_AS_STATIC_FUNCTION(handleItND) 
	#endif

	#ifndef GEODE_STATICS_hasUnreadNews
		#define GEODE_STATICS_hasUnreadNews
		GEODE_AS_STATIC_FUNCTION(hasUnreadNews) 
	#endif

	#ifndef GEODE_STATICS_importCustomSFXFromFile
		#define GEODE_STATICS_importCustomSFXFromFile
		GEODE_AS_STATIC_FUNCTION(importCustomSFXFromFile) 
	#endif

	#ifndef GEODE_STATICS_importCustomSFXMappings
		#define GEODE_STATICS_importCustomSFXMappings
		GEODE_AS_STATIC_FUNCTION(importCustomSFXMappings) 
	#endif

	#ifndef GEODE_STATICS_importCustomSFXSetup
		#define GEODE_STATICS_importCustomSFXSetup
		GEODE_AS_STATIC_FUNCTION(importCustomSFXSetup) 
	#endif

	#ifndef GEODE_STATICS_incrementPriorityForSong
		#define GEODE_STATICS_incrementPriorityForSong
		GEODE_AS_STATIC_FUNCTION(incrementPriorityForSong) 
	#endif

	#ifndef GEODE_STATICS_isCustomSFXFavorite
		#define GEODE_STATICS_isCustomSFXFavorite
		GEODE_AS_STATIC_FUNCTION(isCustomSFXFavorite) 
	#endif

	#ifndef GEODE_STATICS_isCustomSFXInScope
		#define GEODE_STATICS_isCustomSFXInScope
		GEODE_AS_STATIC_FUNCTION(isCustomSFXInScope) 
	#endif

	#ifndef GEODE_STATICS_isDLActive
		#define GEODE_STATICS_isDLActive
		GEODE_AS_STATIC_FUNCTION(isDLActive) 
	#endif

	#ifndef GEODE_STATICS_isMusicFavorite
		#define GEODE_STATICS_isMusicFavorite
		GEODE_AS_STATIC_FUNCTION(isMusicFavorite) 
	#endif

	#ifndef GEODE_STATICS_isMusicLibraryLoaded
		#define GEODE_STATICS_isMusicLibraryLoaded
		GEODE_AS_STATIC_FUNCTION(isMusicLibraryLoaded) 
	#endif

	#ifndef GEODE_STATICS_isNewsFeedLoaded
		#define GEODE_STATICS_isNewsFeedLoaded
		GEODE_AS_STATIC_FUNCTION(isNewsFeedLoaded) 
	#endif

	#ifndef GEODE_STATICS_isNewsImageDownloaded
		#define GEODE_STATICS_isNewsImageDownloaded
		GEODE_AS_STATIC_FUNCTION(isNewsImageDownloaded) 
	#endif

	#ifndef GEODE_STATICS_isResourceSFX
		#define GEODE_STATICS_isResourceSFX
		GEODE_AS_STATIC_FUNCTION(isResourceSFX) 
	#endif

	#ifndef GEODE_STATICS_isResourceSong
		#define GEODE_STATICS_isResourceSong
		GEODE_AS_STATIC_FUNCTION(isResourceSong) 
	#endif

	#ifndef GEODE_STATICS_isRunningActionForSongID
		#define GEODE_STATICS_isRunningActionForSongID
		GEODE_AS_STATIC_FUNCTION(isRunningActionForSongID) 
	#endif

	#ifndef GEODE_STATICS_isSFXDownloaded
		#define GEODE_STATICS_isSFXDownloaded
		GEODE_AS_STATIC_FUNCTION(isSFXDownloaded) 
	#endif

	#ifndef GEODE_STATICS_isSFXFavorite
		#define GEODE_STATICS_isSFXFavorite
		GEODE_AS_STATIC_FUNCTION(isSFXFavorite) 
	#endif

	#ifndef GEODE_STATICS_isSFXLibraryLoaded
		#define GEODE_STATICS_isSFXLibraryLoaded
		GEODE_AS_STATIC_FUNCTION(isSFXLibraryLoaded) 
	#endif

	#ifndef GEODE_STATICS_isSongDownloaded
		#define GEODE_STATICS_isSongDownloaded
		GEODE_AS_STATIC_FUNCTION(isSongDownloaded) 
	#endif

	#ifndef GEODE_STATICS_limitDownloadedSongs
		#define GEODE_STATICS_limitDownloadedSongs
		GEODE_AS_STATIC_FUNCTION(limitDownloadedSongs) 
	#endif

	#ifndef GEODE_STATICS_loadSongInfoFailed
		#define GEODE_STATICS_loadSongInfoFailed
		GEODE_AS_STATIC_FUNCTION(loadSongInfoFailed) 
	#endif

	#ifndef GEODE_STATICS_loadSongInfoFinished
		#define GEODE_STATICS_loadSongInfoFinished
		GEODE_AS_STATIC_FUNCTION(loadSongInfoFinished) 
	#endif

	#ifndef GEODE_STATICS_mintCustomSFXID
		#define GEODE_STATICS_mintCustomSFXID
		GEODE_AS_STATIC_FUNCTION(mintCustomSFXID) 
	#endif

	#ifndef GEODE_STATICS_moveCustomSFXObject
		#define GEODE_STATICS_moveCustomSFXObject
		GEODE_AS_STATIC_FUNCTION(moveCustomSFXObject) 
	#endif

	#ifndef GEODE_STATICS_musicActionFailed
		#define GEODE_STATICS_musicActionFailed
		GEODE_AS_STATIC_FUNCTION(musicActionFailed) 
	#endif

	#ifndef GEODE_STATICS_musicActionFinished
		#define GEODE_STATICS_musicActionFinished
		GEODE_AS_STATIC_FUNCTION(musicActionFinished) 
	#endif

	#ifndef GEODE_STATICS_nameForTagID
		#define GEODE_STATICS_nameForTagID
		GEODE_AS_STATIC_FUNCTION(nameForTagID) 
	#endif

	#ifndef GEODE_STATICS_newsImageDownloaded
		#define GEODE_STATICS_newsImageDownloaded
		GEODE_AS_STATIC_FUNCTION(newsImageDownloaded) 
	#endif

	#ifndef GEODE_STATICS_newsImageFailed
		#define GEODE_STATICS_newsImageFailed
		GEODE_AS_STATIC_FUNCTION(newsImageFailed) 
	#endif

	#ifndef GEODE_STATICS_noteSFXUsed
		#define GEODE_STATICS_noteSFXUsed
		GEODE_AS_STATIC_FUNCTION(noteSFXUsed) 
	#endif

	#ifndef GEODE_STATICS_noteSongUsed
		#define GEODE_STATICS_noteSongUsed
		GEODE_AS_STATIC_FUNCTION(noteSongUsed) 
	#endif

	#ifndef GEODE_STATICS_onDownloadMusicLibraryCompleted
		#define GEODE_STATICS_onDownloadMusicLibraryCompleted
		GEODE_AS_STATIC_FUNCTION(onDownloadMusicLibraryCompleted) 
	#endif

	#ifndef GEODE_STATICS_onDownloadNewsFeedCompleted
		#define GEODE_STATICS_onDownloadNewsFeedCompleted
		GEODE_AS_STATIC_FUNCTION(onDownloadNewsFeedCompleted) 
	#endif

	#ifndef GEODE_STATICS_onDownloadNewsImageCompleted
		#define GEODE_STATICS_onDownloadNewsImageCompleted
		GEODE_AS_STATIC_FUNCTION(onDownloadNewsImageCompleted) 
	#endif

	#ifndef GEODE_STATICS_onDownloadSFXCompleted
		#define GEODE_STATICS_onDownloadSFXCompleted
		GEODE_AS_STATIC_FUNCTION(onDownloadSFXCompleted) 
	#endif

	#ifndef GEODE_STATICS_onDownloadSFXLibraryCompleted
		#define GEODE_STATICS_onDownloadSFXLibraryCompleted
		GEODE_AS_STATIC_FUNCTION(onDownloadSFXLibraryCompleted) 
	#endif

	#ifndef GEODE_STATICS_onDownloadSongCompleted
		#define GEODE_STATICS_onDownloadSongCompleted
		GEODE_AS_STATIC_FUNCTION(onDownloadSongCompleted) 
	#endif

	#ifndef GEODE_STATICS_onGetAudioFilesizeCompleted
		#define GEODE_STATICS_onGetAudioFilesizeCompleted
		GEODE_AS_STATIC_FUNCTION(onGetAudioFilesizeCompleted) 
	#endif

	#ifndef GEODE_STATICS_onGetCustomContentURLCompleted
		#define GEODE_STATICS_onGetCustomContentURLCompleted
		GEODE_AS_STATIC_FUNCTION(onGetCustomContentURLCompleted) 
	#endif

	#ifndef GEODE_STATICS_onGetSongInfoCompleted
		#define GEODE_STATICS_onGetSongInfoCompleted
		GEODE_AS_STATIC_FUNCTION(onGetSongInfoCompleted) 
	#endif

	#ifndef GEODE_STATICS_onProcessHttpRequestCompleted
		#define GEODE_STATICS_onProcessHttpRequestCompleted
		GEODE_AS_STATIC_FUNCTION(onProcessHttpRequestCompleted) 
	#endif

	#ifndef GEODE_STATICS_onTryUpdateMusicLibraryCompleted
		#define GEODE_STATICS_onTryUpdateMusicLibraryCompleted
		GEODE_AS_STATIC_FUNCTION(onTryUpdateMusicLibraryCompleted) 
	#endif

	#ifndef GEODE_STATICS_onTryUpdateNewsFeedCompleted
		#define GEODE_STATICS_onTryUpdateNewsFeedCompleted
		GEODE_AS_STATIC_FUNCTION(onTryUpdateNewsFeedCompleted) 
	#endif

	#ifndef GEODE_STATICS_onTryUpdateSFXLibraryCompleted
		#define GEODE_STATICS_onTryUpdateSFXLibraryCompleted
		GEODE_AS_STATIC_FUNCTION(onTryUpdateSFXLibraryCompleted) 
	#endif

	#ifndef GEODE_STATICS_parseMusicLibrary
		#define GEODE_STATICS_parseMusicLibrary
		GEODE_AS_STATIC_FUNCTION(parseMusicLibrary) 
	#endif

	#ifndef GEODE_STATICS_parseNewsFeed
		#define GEODE_STATICS_parseNewsFeed
		GEODE_AS_STATIC_FUNCTION(parseNewsFeed) 
	#endif

	#ifndef GEODE_STATICS_parseSFXLibrary
		#define GEODE_STATICS_parseSFXLibrary
		GEODE_AS_STATIC_FUNCTION(parseSFXLibrary) 
	#endif

	#ifndef GEODE_STATICS_pathForNewsFolder
		#define GEODE_STATICS_pathForNewsFolder
		GEODE_AS_STATIC_FUNCTION(pathForNewsFolder) 
	#endif

	#ifndef GEODE_STATICS_pathForSFX
		#define GEODE_STATICS_pathForSFX
		GEODE_AS_STATIC_FUNCTION(pathForSFX) 
	#endif

	#ifndef GEODE_STATICS_pathForSFXFolder
		#define GEODE_STATICS_pathForSFXFolder
		GEODE_AS_STATIC_FUNCTION(pathForSFXFolder) 
	#endif

	#ifndef GEODE_STATICS_pathForSong
		#define GEODE_STATICS_pathForSong
		GEODE_AS_STATIC_FUNCTION(pathForSong) 
	#endif

	#ifndef GEODE_STATICS_pathForSongFolder
		#define GEODE_STATICS_pathForSongFolder
		GEODE_AS_STATIC_FUNCTION(pathForSongFolder) 
	#endif

	#ifndef GEODE_STATICS_ProcessHttpGetRequest
		#define GEODE_STATICS_ProcessHttpGetRequest
		GEODE_AS_STATIC_FUNCTION(ProcessHttpGetRequest) 
	#endif

	#ifndef GEODE_STATICS_ProcessHttpRequest
		#define GEODE_STATICS_ProcessHttpRequest
		GEODE_AS_STATIC_FUNCTION(ProcessHttpRequest) 
	#endif

	#ifndef GEODE_STATICS_rebuildCustomSFXMappings
		#define GEODE_STATICS_rebuildCustomSFXMappings
		GEODE_AS_STATIC_FUNCTION(rebuildCustomSFXMappings) 
	#endif

	#ifndef GEODE_STATICS_removeDLFromActive
		#define GEODE_STATICS_removeDLFromActive
		GEODE_AS_STATIC_FUNCTION(removeDLFromActive) 
	#endif

	#ifndef GEODE_STATICS_removeMusicDownloadDelegate
		#define GEODE_STATICS_removeMusicDownloadDelegate
		GEODE_AS_STATIC_FUNCTION(removeMusicDownloadDelegate) 
	#endif

	#ifndef GEODE_STATICS_renameCustomSFXObject
		#define GEODE_STATICS_renameCustomSFXObject
		GEODE_AS_STATIC_FUNCTION(renameCustomSFXObject) 
	#endif

	#ifndef GEODE_STATICS_resolveSFXPlacement
		#define GEODE_STATICS_resolveSFXPlacement
		GEODE_AS_STATIC_FUNCTION(resolveSFXPlacement) 
	#endif

	#ifndef GEODE_STATICS_responseToDict
		#define GEODE_STATICS_responseToDict
		GEODE_AS_STATIC_FUNCTION(responseToDict) 
	#endif

	#ifndef GEODE_STATICS_showTOS
		#define GEODE_STATICS_showTOS
		GEODE_AS_STATIC_FUNCTION(showTOS) 
	#endif

	#ifndef GEODE_STATICS_songStateChanged
		#define GEODE_STATICS_songStateChanged
		GEODE_AS_STATIC_FUNCTION(songStateChanged) 
	#endif

	#ifndef GEODE_STATICS_stopDownload
		#define GEODE_STATICS_stopDownload
		GEODE_AS_STATIC_FUNCTION(stopDownload) 
	#endif

	#ifndef GEODE_STATICS_storeMusicObject
		#define GEODE_STATICS_storeMusicObject
		GEODE_AS_STATIC_FUNCTION(storeMusicObject) 
	#endif

	#ifndef GEODE_STATICS_storeSFXInfoObject
		#define GEODE_STATICS_storeSFXInfoObject
		GEODE_AS_STATIC_FUNCTION(storeSFXInfoObject) 
	#endif

	#ifndef GEODE_STATICS_sumLocalAudioSizeBytes
		#define GEODE_STATICS_sumLocalAudioSizeBytes
		GEODE_AS_STATIC_FUNCTION(sumLocalAudioSizeBytes) 
	#endif

	#ifndef GEODE_STATICS_syncCustomSFXPlacements
		#define GEODE_STATICS_syncCustomSFXPlacements
		GEODE_AS_STATIC_FUNCTION(syncCustomSFXPlacements) 
	#endif

	#ifndef GEODE_STATICS_toggleCustomSFXFavorite
		#define GEODE_STATICS_toggleCustomSFXFavorite
		GEODE_AS_STATIC_FUNCTION(toggleCustomSFXFavorite) 
	#endif

	#ifndef GEODE_STATICS_toggleMusicFavorite
		#define GEODE_STATICS_toggleMusicFavorite
		GEODE_AS_STATIC_FUNCTION(toggleMusicFavorite) 
	#endif

	#ifndef GEODE_STATICS_toggleSFXFavorite
		#define GEODE_STATICS_toggleSFXFavorite
		GEODE_AS_STATIC_FUNCTION(toggleSFXFavorite) 
	#endif

	#ifndef GEODE_STATICS_tryLoadLibraries
		#define GEODE_STATICS_tryLoadLibraries
		GEODE_AS_STATIC_FUNCTION(tryLoadLibraries) 
	#endif

	#ifndef GEODE_STATICS_tryLoadNewsFeed
		#define GEODE_STATICS_tryLoadNewsFeed
		GEODE_AS_STATIC_FUNCTION(tryLoadNewsFeed) 
	#endif

	#ifndef GEODE_STATICS_tryUpdateMusicLibrary
		#define GEODE_STATICS_tryUpdateMusicLibrary
		GEODE_AS_STATIC_FUNCTION(tryUpdateMusicLibrary) 
	#endif

	#ifndef GEODE_STATICS_tryUpdateNewsFeed
		#define GEODE_STATICS_tryUpdateNewsFeed
		GEODE_AS_STATIC_FUNCTION(tryUpdateNewsFeed) 
	#endif

	#ifndef GEODE_STATICS_tryUpdateSFXLibrary
		#define GEODE_STATICS_tryUpdateSFXLibrary
		GEODE_AS_STATIC_FUNCTION(tryUpdateSFXLibrary) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_customSFXPathDisplay
		#define GEODE_CONCEPT_CHECK_customSFXPathDisplay
		GEODE_CONCEPT_FUNCTION_CHECK(customSFXPathDisplay) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_customSFXPathLeaf
		#define GEODE_CONCEPT_CHECK_customSFXPathLeaf
		GEODE_CONCEPT_FUNCTION_CHECK(customSFXPathLeaf) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_decodeCustomSFXMappingEntries
		#define GEODE_CONCEPT_CHECK_decodeCustomSFXMappingEntries
		GEODE_CONCEPT_FUNCTION_CHECK(decodeCustomSFXMappingEntries) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_encodeCustomSFXMappingEntries
		#define GEODE_CONCEPT_CHECK_encodeCustomSFXMappingEntries
		GEODE_CONCEPT_FUNCTION_CHECK(encodeCustomSFXMappingEntries) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_joinIDString
		#define GEODE_CONCEPT_CHECK_joinIDString
		GEODE_CONCEPT_FUNCTION_CHECK(joinIDString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_linkRowString
		#define GEODE_CONCEPT_CHECK_linkRowString
		GEODE_CONCEPT_FUNCTION_CHECK(linkRowString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_linkTitleForType
		#define GEODE_CONCEPT_CHECK_linkTitleForType
		GEODE_CONCEPT_FUNCTION_CHECK(linkTitleForType) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_linkTypeForURL
		#define GEODE_CONCEPT_CHECK_linkTypeForURL
		GEODE_CONCEPT_FUNCTION_CHECK(linkTypeForURL) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_parseLinkRows
		#define GEODE_CONCEPT_CHECK_parseLinkRows
		GEODE_CONCEPT_FUNCTION_CHECK(parseLinkRows) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_sharedState
		#define GEODE_CONCEPT_CHECK_sharedState
		GEODE_CONCEPT_FUNCTION_CHECK(sharedState) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_splitIDString
		#define GEODE_CONCEPT_CHECK_splitIDString
		GEODE_CONCEPT_FUNCTION_CHECK(splitIDString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_urlEncode
		#define GEODE_CONCEPT_CHECK_urlEncode
		GEODE_CONCEPT_FUNCTION_CHECK(urlEncode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addDLToActive
		#define GEODE_CONCEPT_CHECK_addDLToActive
		GEODE_CONCEPT_FUNCTION_CHECK(addDLToActive) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addMusicDownloadDelegate
		#define GEODE_CONCEPT_CHECK_addMusicDownloadDelegate
		GEODE_CONCEPT_FUNCTION_CHECK(addMusicDownloadDelegate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addSongObjectFromString
		#define GEODE_CONCEPT_CHECK_addSongObjectFromString
		GEODE_CONCEPT_FUNCTION_CHECK(addSongObjectFromString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_clearSong
		#define GEODE_CONCEPT_CHECK_clearSong
		GEODE_CONCEPT_FUNCTION_CHECK(clearSong) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_clearSortedMusicCache
		#define GEODE_CONCEPT_CHECK_clearSortedMusicCache
		GEODE_CONCEPT_FUNCTION_CHECK(clearSortedMusicCache) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_clearUnusedSongs
		#define GEODE_CONCEPT_CHECK_clearUnusedSongs
		GEODE_CONCEPT_FUNCTION_CHECK(clearUnusedSongs) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createArtistsInfo
		#define GEODE_CONCEPT_CHECK_createArtistsInfo
		GEODE_CONCEPT_FUNCTION_CHECK(createArtistsInfo) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createCustomSFXFolder
		#define GEODE_CONCEPT_CHECK_createCustomSFXFolder
		GEODE_CONCEPT_FUNCTION_CHECK(createCustomSFXFolder) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createCustomSFXPlacement
		#define GEODE_CONCEPT_CHECK_createCustomSFXPlacement
		GEODE_CONCEPT_FUNCTION_CHECK(createCustomSFXPlacement) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createSongsInfo
		#define GEODE_CONCEPT_CHECK_createSongsInfo
		GEODE_CONCEPT_FUNCTION_CHECK(createSongsInfo) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_dataLoaded
		#define GEODE_CONCEPT_CHECK_dataLoaded
		GEODE_CONCEPT_FUNCTION_CHECK(dataLoaded) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_decodeCustomSFX
		#define GEODE_CONCEPT_CHECK_decodeCustomSFX
		GEODE_CONCEPT_FUNCTION_CHECK(decodeCustomSFX) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_deleteCustomSFXObject
		#define GEODE_CONCEPT_CHECK_deleteCustomSFXObject
		GEODE_CONCEPT_FUNCTION_CHECK(deleteCustomSFXObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_deleteSFX
		#define GEODE_CONCEPT_CHECK_deleteSFX
		GEODE_CONCEPT_FUNCTION_CHECK(deleteSFX) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_deleteSong
		#define GEODE_CONCEPT_CHECK_deleteSong
		GEODE_CONCEPT_FUNCTION_CHECK(deleteSong) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_downloadCustomSong
		#define GEODE_CONCEPT_CHECK_downloadCustomSong
		GEODE_CONCEPT_FUNCTION_CHECK(downloadCustomSong) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_downloadMusicLibrary
		#define GEODE_CONCEPT_CHECK_downloadMusicLibrary
		GEODE_CONCEPT_FUNCTION_CHECK(downloadMusicLibrary) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_downloadNewsFeed
		#define GEODE_CONCEPT_CHECK_downloadNewsFeed
		GEODE_CONCEPT_FUNCTION_CHECK(downloadNewsFeed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_downloadNewsImage
		#define GEODE_CONCEPT_CHECK_downloadNewsImage
		GEODE_CONCEPT_FUNCTION_CHECK(downloadNewsImage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_downloadSFX
		#define GEODE_CONCEPT_CHECK_downloadSFX
		GEODE_CONCEPT_FUNCTION_CHECK(downloadSFX) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_downloadSFXFailed
		#define GEODE_CONCEPT_CHECK_downloadSFXFailed
		GEODE_CONCEPT_FUNCTION_CHECK(downloadSFXFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_downloadSFXFinished
		#define GEODE_CONCEPT_CHECK_downloadSFXFinished
		GEODE_CONCEPT_FUNCTION_CHECK(downloadSFXFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_downloadSFXLibrary
		#define GEODE_CONCEPT_CHECK_downloadSFXLibrary
		GEODE_CONCEPT_FUNCTION_CHECK(downloadSFXLibrary) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_downloadSong
		#define GEODE_CONCEPT_CHECK_downloadSong
		GEODE_CONCEPT_FUNCTION_CHECK(downloadSong) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_downloadSongFailed
		#define GEODE_CONCEPT_CHECK_downloadSongFailed
		GEODE_CONCEPT_FUNCTION_CHECK(downloadSongFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_downloadSongFinished
		#define GEODE_CONCEPT_CHECK_downloadSongFinished
		GEODE_CONCEPT_FUNCTION_CHECK(downloadSongFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_downloadSongStarted
		#define GEODE_CONCEPT_CHECK_downloadSongStarted
		GEODE_CONCEPT_FUNCTION_CHECK(downloadSongStarted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_encodeCustomSFX
		#define GEODE_CONCEPT_CHECK_encodeCustomSFX
		GEODE_CONCEPT_FUNCTION_CHECK(encodeCustomSFX) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_encodeDataTo
		#define GEODE_CONCEPT_CHECK_encodeDataTo
		GEODE_CONCEPT_FUNCTION_CHECK(encodeDataTo) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_exportCustomSFXToFile
		#define GEODE_CONCEPT_CHECK_exportCustomSFXToFile
		GEODE_CONCEPT_FUNCTION_CHECK(exportCustomSFXToFile) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_filterMusicByArtistID
		#define GEODE_CONCEPT_CHECK_filterMusicByArtistID
		GEODE_CONCEPT_FUNCTION_CHECK(filterMusicByArtistID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_filterMusicByTag
		#define GEODE_CONCEPT_CHECK_filterMusicByTag
		GEODE_CONCEPT_FUNCTION_CHECK(filterMusicByTag) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_firstSetup
		#define GEODE_CONCEPT_CHECK_firstSetup
		GEODE_CONCEPT_FUNCTION_CHECK(firstSetup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_generateCustomContentURL
		#define GEODE_CONCEPT_CHECK_generateCustomContentURL
		GEODE_CONCEPT_FUNCTION_CHECK(generateCustomContentURL) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_generateResourceAssetList
		#define GEODE_CONCEPT_CHECK_generateResourceAssetList
		GEODE_CONCEPT_FUNCTION_CHECK(generateResourceAssetList) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getAllMusicArtists
		#define GEODE_CONCEPT_CHECK_getAllMusicArtists
		GEODE_CONCEPT_FUNCTION_CHECK(getAllMusicArtists) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getAllMusicObjects
		#define GEODE_CONCEPT_CHECK_getAllMusicObjects
		GEODE_CONCEPT_FUNCTION_CHECK(getAllMusicObjects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getAllMusicObjectsSorted
		#define GEODE_CONCEPT_CHECK_getAllMusicObjectsSorted
		GEODE_CONCEPT_FUNCTION_CHECK(getAllMusicObjectsSorted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getAllMusicTags
		#define GEODE_CONCEPT_CHECK_getAllMusicTags
		GEODE_CONCEPT_FUNCTION_CHECK(getAllMusicTags) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getAllSFXObjects
		#define GEODE_CONCEPT_CHECK_getAllSFXObjects
		GEODE_CONCEPT_FUNCTION_CHECK(getAllSFXObjects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getAllSongs
		#define GEODE_CONCEPT_CHECK_getAllSongs
		GEODE_CONCEPT_FUNCTION_CHECK(getAllSongs) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getAudioFilesize
		#define GEODE_CONCEPT_CHECK_getAudioFilesize
		GEODE_CONCEPT_FUNCTION_CHECK(getAudioFilesize) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getCustomContentURL
		#define GEODE_CONCEPT_CHECK_getCustomContentURL
		GEODE_CONCEPT_FUNCTION_CHECK(getCustomContentURL) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getCustomSFXCount
		#define GEODE_CONCEPT_CHECK_getCustomSFXCount
		GEODE_CONCEPT_FUNCTION_CHECK(getCustomSFXCount) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getCustomSFXFolderForID
		#define GEODE_CONCEPT_CHECK_getCustomSFXFolderForID
		GEODE_CONCEPT_FUNCTION_CHECK(getCustomSFXFolderForID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getCustomSFXFolderPath
		#define GEODE_CONCEPT_CHECK_getCustomSFXFolderPath
		GEODE_CONCEPT_FUNCTION_CHECK(getCustomSFXFolderPath) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getCustomSFXLocationText
		#define GEODE_CONCEPT_CHECK_getCustomSFXLocationText
		GEODE_CONCEPT_FUNCTION_CHECK(getCustomSFXLocationText) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getCustomSFXObject
		#define GEODE_CONCEPT_CHECK_getCustomSFXObject
		GEODE_CONCEPT_FUNCTION_CHECK(getCustomSFXObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getCustomSFXRawPath
		#define GEODE_CONCEPT_CHECK_getCustomSFXRawPath
		GEODE_CONCEPT_FUNCTION_CHECK(getCustomSFXRawPath) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getCustomSFXRoot
		#define GEODE_CONCEPT_CHECK_getCustomSFXRoot
		GEODE_CONCEPT_FUNCTION_CHECK(getCustomSFXRoot) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getDLObject
		#define GEODE_CONCEPT_CHECK_getDLObject
		GEODE_CONCEPT_FUNCTION_CHECK(getDLObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getDownloadedSongs
		#define GEODE_CONCEPT_CHECK_getDownloadedSongs
		GEODE_CONCEPT_FUNCTION_CHECK(getDownloadedSongs) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getDownloadProgress
		#define GEODE_CONCEPT_CHECK_getDownloadProgress
		GEODE_CONCEPT_FUNCTION_CHECK(getDownloadProgress) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getMusicArtistForID
		#define GEODE_CONCEPT_CHECK_getMusicArtistForID
		GEODE_CONCEPT_FUNCTION_CHECK(getMusicArtistForID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getMusicObject
		#define GEODE_CONCEPT_CHECK_getMusicObject
		GEODE_CONCEPT_FUNCTION_CHECK(getMusicObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getNewsImageDownloadKey
		#define GEODE_CONCEPT_CHECK_getNewsImageDownloadKey
		GEODE_CONCEPT_FUNCTION_CHECK(getNewsImageDownloadKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSFXDownloadKey
		#define GEODE_CONCEPT_CHECK_getSFXDownloadKey
		GEODE_CONCEPT_FUNCTION_CHECK(getSFXDownloadKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSFXDownloadProgress
		#define GEODE_CONCEPT_CHECK_getSFXDownloadProgress
		GEODE_CONCEPT_FUNCTION_CHECK(getSFXDownloadProgress) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSFXFolderObjectForID
		#define GEODE_CONCEPT_CHECK_getSFXFolderObjectForID
		GEODE_CONCEPT_FUNCTION_CHECK(getSFXFolderObjectForID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSFXFolderPathForID
		#define GEODE_CONCEPT_CHECK_getSFXFolderPathForID
		GEODE_CONCEPT_FUNCTION_CHECK(getSFXFolderPathForID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSFXObject
		#define GEODE_CONCEPT_CHECK_getSFXObject
		GEODE_CONCEPT_FUNCTION_CHECK(getSFXObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSongDownloadKey
		#define GEODE_CONCEPT_CHECK_getSongDownloadKey
		GEODE_CONCEPT_FUNCTION_CHECK(getSongDownloadKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSongInfo
		#define GEODE_CONCEPT_CHECK_getSongInfo
		GEODE_CONCEPT_FUNCTION_CHECK(getSongInfo) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSongInfoKey
		#define GEODE_CONCEPT_CHECK_getSongInfoKey
		GEODE_CONCEPT_FUNCTION_CHECK(getSongInfoKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSongInfoObject
		#define GEODE_CONCEPT_CHECK_getSongInfoObject
		GEODE_CONCEPT_FUNCTION_CHECK(getSongInfoObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSongPriority
		#define GEODE_CONCEPT_CHECK_getSongPriority
		GEODE_CONCEPT_FUNCTION_CHECK(getSongPriority) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_handleIt
		#define GEODE_CONCEPT_CHECK_handleIt
		GEODE_CONCEPT_FUNCTION_CHECK(handleIt) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_handleItDelayed
		#define GEODE_CONCEPT_CHECK_handleItDelayed
		GEODE_CONCEPT_FUNCTION_CHECK(handleItDelayed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_handleItND
		#define GEODE_CONCEPT_CHECK_handleItND
		GEODE_CONCEPT_FUNCTION_CHECK(handleItND) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_hasUnreadNews
		#define GEODE_CONCEPT_CHECK_hasUnreadNews
		GEODE_CONCEPT_FUNCTION_CHECK(hasUnreadNews) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_importCustomSFXFromFile
		#define GEODE_CONCEPT_CHECK_importCustomSFXFromFile
		GEODE_CONCEPT_FUNCTION_CHECK(importCustomSFXFromFile) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_importCustomSFXMappings
		#define GEODE_CONCEPT_CHECK_importCustomSFXMappings
		GEODE_CONCEPT_FUNCTION_CHECK(importCustomSFXMappings) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_importCustomSFXSetup
		#define GEODE_CONCEPT_CHECK_importCustomSFXSetup
		GEODE_CONCEPT_FUNCTION_CHECK(importCustomSFXSetup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_incrementPriorityForSong
		#define GEODE_CONCEPT_CHECK_incrementPriorityForSong
		GEODE_CONCEPT_FUNCTION_CHECK(incrementPriorityForSong) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isCustomSFXFavorite
		#define GEODE_CONCEPT_CHECK_isCustomSFXFavorite
		GEODE_CONCEPT_FUNCTION_CHECK(isCustomSFXFavorite) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isCustomSFXInScope
		#define GEODE_CONCEPT_CHECK_isCustomSFXInScope
		GEODE_CONCEPT_FUNCTION_CHECK(isCustomSFXInScope) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isDLActive
		#define GEODE_CONCEPT_CHECK_isDLActive
		GEODE_CONCEPT_FUNCTION_CHECK(isDLActive) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isMusicFavorite
		#define GEODE_CONCEPT_CHECK_isMusicFavorite
		GEODE_CONCEPT_FUNCTION_CHECK(isMusicFavorite) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isMusicLibraryLoaded
		#define GEODE_CONCEPT_CHECK_isMusicLibraryLoaded
		GEODE_CONCEPT_FUNCTION_CHECK(isMusicLibraryLoaded) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isNewsFeedLoaded
		#define GEODE_CONCEPT_CHECK_isNewsFeedLoaded
		GEODE_CONCEPT_FUNCTION_CHECK(isNewsFeedLoaded) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isNewsImageDownloaded
		#define GEODE_CONCEPT_CHECK_isNewsImageDownloaded
		GEODE_CONCEPT_FUNCTION_CHECK(isNewsImageDownloaded) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isResourceSFX
		#define GEODE_CONCEPT_CHECK_isResourceSFX
		GEODE_CONCEPT_FUNCTION_CHECK(isResourceSFX) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isResourceSong
		#define GEODE_CONCEPT_CHECK_isResourceSong
		GEODE_CONCEPT_FUNCTION_CHECK(isResourceSong) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isRunningActionForSongID
		#define GEODE_CONCEPT_CHECK_isRunningActionForSongID
		GEODE_CONCEPT_FUNCTION_CHECK(isRunningActionForSongID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isSFXDownloaded
		#define GEODE_CONCEPT_CHECK_isSFXDownloaded
		GEODE_CONCEPT_FUNCTION_CHECK(isSFXDownloaded) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isSFXFavorite
		#define GEODE_CONCEPT_CHECK_isSFXFavorite
		GEODE_CONCEPT_FUNCTION_CHECK(isSFXFavorite) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isSFXLibraryLoaded
		#define GEODE_CONCEPT_CHECK_isSFXLibraryLoaded
		GEODE_CONCEPT_FUNCTION_CHECK(isSFXLibraryLoaded) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isSongDownloaded
		#define GEODE_CONCEPT_CHECK_isSongDownloaded
		GEODE_CONCEPT_FUNCTION_CHECK(isSongDownloaded) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_limitDownloadedSongs
		#define GEODE_CONCEPT_CHECK_limitDownloadedSongs
		GEODE_CONCEPT_FUNCTION_CHECK(limitDownloadedSongs) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadSongInfoFailed
		#define GEODE_CONCEPT_CHECK_loadSongInfoFailed
		GEODE_CONCEPT_FUNCTION_CHECK(loadSongInfoFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadSongInfoFinished
		#define GEODE_CONCEPT_CHECK_loadSongInfoFinished
		GEODE_CONCEPT_FUNCTION_CHECK(loadSongInfoFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_mintCustomSFXID
		#define GEODE_CONCEPT_CHECK_mintCustomSFXID
		GEODE_CONCEPT_FUNCTION_CHECK(mintCustomSFXID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_moveCustomSFXObject
		#define GEODE_CONCEPT_CHECK_moveCustomSFXObject
		GEODE_CONCEPT_FUNCTION_CHECK(moveCustomSFXObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_musicActionFailed
		#define GEODE_CONCEPT_CHECK_musicActionFailed
		GEODE_CONCEPT_FUNCTION_CHECK(musicActionFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_musicActionFinished
		#define GEODE_CONCEPT_CHECK_musicActionFinished
		GEODE_CONCEPT_FUNCTION_CHECK(musicActionFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_nameForTagID
		#define GEODE_CONCEPT_CHECK_nameForTagID
		GEODE_CONCEPT_FUNCTION_CHECK(nameForTagID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_newsImageDownloaded
		#define GEODE_CONCEPT_CHECK_newsImageDownloaded
		GEODE_CONCEPT_FUNCTION_CHECK(newsImageDownloaded) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_newsImageFailed
		#define GEODE_CONCEPT_CHECK_newsImageFailed
		GEODE_CONCEPT_FUNCTION_CHECK(newsImageFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_noteSFXUsed
		#define GEODE_CONCEPT_CHECK_noteSFXUsed
		GEODE_CONCEPT_FUNCTION_CHECK(noteSFXUsed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_noteSongUsed
		#define GEODE_CONCEPT_CHECK_noteSongUsed
		GEODE_CONCEPT_FUNCTION_CHECK(noteSongUsed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onDownloadMusicLibraryCompleted
		#define GEODE_CONCEPT_CHECK_onDownloadMusicLibraryCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onDownloadMusicLibraryCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onDownloadNewsFeedCompleted
		#define GEODE_CONCEPT_CHECK_onDownloadNewsFeedCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onDownloadNewsFeedCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onDownloadNewsImageCompleted
		#define GEODE_CONCEPT_CHECK_onDownloadNewsImageCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onDownloadNewsImageCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onDownloadSFXCompleted
		#define GEODE_CONCEPT_CHECK_onDownloadSFXCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onDownloadSFXCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onDownloadSFXLibraryCompleted
		#define GEODE_CONCEPT_CHECK_onDownloadSFXLibraryCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onDownloadSFXLibraryCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onDownloadSongCompleted
		#define GEODE_CONCEPT_CHECK_onDownloadSongCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onDownloadSongCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onGetAudioFilesizeCompleted
		#define GEODE_CONCEPT_CHECK_onGetAudioFilesizeCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onGetAudioFilesizeCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onGetCustomContentURLCompleted
		#define GEODE_CONCEPT_CHECK_onGetCustomContentURLCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onGetCustomContentURLCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onGetSongInfoCompleted
		#define GEODE_CONCEPT_CHECK_onGetSongInfoCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onGetSongInfoCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onProcessHttpRequestCompleted
		#define GEODE_CONCEPT_CHECK_onProcessHttpRequestCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onProcessHttpRequestCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onTryUpdateMusicLibraryCompleted
		#define GEODE_CONCEPT_CHECK_onTryUpdateMusicLibraryCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onTryUpdateMusicLibraryCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onTryUpdateNewsFeedCompleted
		#define GEODE_CONCEPT_CHECK_onTryUpdateNewsFeedCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onTryUpdateNewsFeedCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onTryUpdateSFXLibraryCompleted
		#define GEODE_CONCEPT_CHECK_onTryUpdateSFXLibraryCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onTryUpdateSFXLibraryCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_parseMusicLibrary
		#define GEODE_CONCEPT_CHECK_parseMusicLibrary
		GEODE_CONCEPT_FUNCTION_CHECK(parseMusicLibrary) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_parseNewsFeed
		#define GEODE_CONCEPT_CHECK_parseNewsFeed
		GEODE_CONCEPT_FUNCTION_CHECK(parseNewsFeed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_parseSFXLibrary
		#define GEODE_CONCEPT_CHECK_parseSFXLibrary
		GEODE_CONCEPT_FUNCTION_CHECK(parseSFXLibrary) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_pathForNewsFolder
		#define GEODE_CONCEPT_CHECK_pathForNewsFolder
		GEODE_CONCEPT_FUNCTION_CHECK(pathForNewsFolder) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_pathForNewsImage
		#define GEODE_CONCEPT_CHECK_pathForNewsImage
		GEODE_CONCEPT_FUNCTION_CHECK(pathForNewsImage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_pathForSFX
		#define GEODE_CONCEPT_CHECK_pathForSFX
		GEODE_CONCEPT_FUNCTION_CHECK(pathForSFX) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_pathForSFXFolder
		#define GEODE_CONCEPT_CHECK_pathForSFXFolder
		GEODE_CONCEPT_FUNCTION_CHECK(pathForSFXFolder) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_pathForSong
		#define GEODE_CONCEPT_CHECK_pathForSong
		GEODE_CONCEPT_FUNCTION_CHECK(pathForSong) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_pathForSongFolder
		#define GEODE_CONCEPT_CHECK_pathForSongFolder
		GEODE_CONCEPT_FUNCTION_CHECK(pathForSongFolder) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_ProcessHttpGetRequest
		#define GEODE_CONCEPT_CHECK_ProcessHttpGetRequest
		GEODE_CONCEPT_FUNCTION_CHECK(ProcessHttpGetRequest) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_ProcessHttpRequest
		#define GEODE_CONCEPT_CHECK_ProcessHttpRequest
		GEODE_CONCEPT_FUNCTION_CHECK(ProcessHttpRequest) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_rebuildCustomSFXMappings
		#define GEODE_CONCEPT_CHECK_rebuildCustomSFXMappings
		GEODE_CONCEPT_FUNCTION_CHECK(rebuildCustomSFXMappings) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeDLFromActive
		#define GEODE_CONCEPT_CHECK_removeDLFromActive
		GEODE_CONCEPT_FUNCTION_CHECK(removeDLFromActive) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeMusicDownloadDelegate
		#define GEODE_CONCEPT_CHECK_removeMusicDownloadDelegate
		GEODE_CONCEPT_FUNCTION_CHECK(removeMusicDownloadDelegate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_renameCustomSFXObject
		#define GEODE_CONCEPT_CHECK_renameCustomSFXObject
		GEODE_CONCEPT_FUNCTION_CHECK(renameCustomSFXObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resolveSFXPlacement
		#define GEODE_CONCEPT_CHECK_resolveSFXPlacement
		GEODE_CONCEPT_FUNCTION_CHECK(resolveSFXPlacement) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_responseToDict
		#define GEODE_CONCEPT_CHECK_responseToDict
		GEODE_CONCEPT_FUNCTION_CHECK(responseToDict) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_showTOS
		#define GEODE_CONCEPT_CHECK_showTOS
		GEODE_CONCEPT_FUNCTION_CHECK(showTOS) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_songStateChanged
		#define GEODE_CONCEPT_CHECK_songStateChanged
		GEODE_CONCEPT_FUNCTION_CHECK(songStateChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_stopDownload
		#define GEODE_CONCEPT_CHECK_stopDownload
		GEODE_CONCEPT_FUNCTION_CHECK(stopDownload) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_storeMusicObject
		#define GEODE_CONCEPT_CHECK_storeMusicObject
		GEODE_CONCEPT_FUNCTION_CHECK(storeMusicObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_storeSFXInfoObject
		#define GEODE_CONCEPT_CHECK_storeSFXInfoObject
		GEODE_CONCEPT_FUNCTION_CHECK(storeSFXInfoObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_sumLocalAudioSizeBytes
		#define GEODE_CONCEPT_CHECK_sumLocalAudioSizeBytes
		GEODE_CONCEPT_FUNCTION_CHECK(sumLocalAudioSizeBytes) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_syncCustomSFXPlacements
		#define GEODE_CONCEPT_CHECK_syncCustomSFXPlacements
		GEODE_CONCEPT_FUNCTION_CHECK(syncCustomSFXPlacements) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleCustomSFXFavorite
		#define GEODE_CONCEPT_CHECK_toggleCustomSFXFavorite
		GEODE_CONCEPT_FUNCTION_CHECK(toggleCustomSFXFavorite) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleMusicFavorite
		#define GEODE_CONCEPT_CHECK_toggleMusicFavorite
		GEODE_CONCEPT_FUNCTION_CHECK(toggleMusicFavorite) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleSFXFavorite
		#define GEODE_CONCEPT_CHECK_toggleSFXFavorite
		GEODE_CONCEPT_FUNCTION_CHECK(toggleSFXFavorite) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_tryLoadLibraries
		#define GEODE_CONCEPT_CHECK_tryLoadLibraries
		GEODE_CONCEPT_FUNCTION_CHECK(tryLoadLibraries) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_tryLoadNewsFeed
		#define GEODE_CONCEPT_CHECK_tryLoadNewsFeed
		GEODE_CONCEPT_FUNCTION_CHECK(tryLoadNewsFeed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_tryUpdateMusicLibrary
		#define GEODE_CONCEPT_CHECK_tryUpdateMusicLibrary
		GEODE_CONCEPT_FUNCTION_CHECK(tryUpdateMusicLibrary) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_tryUpdateNewsFeed
		#define GEODE_CONCEPT_CHECK_tryUpdateNewsFeed
		GEODE_CONCEPT_FUNCTION_CHECK(tryUpdateNewsFeed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_tryUpdateSFXLibrary
		#define GEODE_CONCEPT_CHECK_tryUpdateSFXLibrary
		GEODE_CONCEPT_FUNCTION_CHECK(tryUpdateSFXLibrary) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, MusicDownloadManager> : ModifyBase<ModifyDerive<Der, MusicDownloadManager>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, MusicDownloadManager>>;
		using ModifyBase<ModifyDerive<Der, MusicDownloadManager>>::ModifyBase;
		using Base = MusicDownloadManager;
        using Derived = Der;
		void apply() override {

            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(MusicDownloadManager, customSFXPathDisplay, std::string const&)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(MusicDownloadManager, customSFXPathLeaf, std::string const&)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(MusicDownloadManager, decodeCustomSFXMappingEntries, std::string const&, std::map<std::pair<int, int>, std::string>&, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(MusicDownloadManager, encodeCustomSFXMappingEntries, std::map<std::pair<int, int>, std::string> const&)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(MusicDownloadManager, joinIDString, std::vector<int> const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x59e918, Default, MusicDownloadManager, linkRowString, GJLinkObject const&)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(MusicDownloadManager, linkTitleForType, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(MusicDownloadManager, linkTypeForURL, std::string const&)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(MusicDownloadManager, parseLinkRows, std::string const&, std::vector<GJLinkObject>&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x584e0c, Default, MusicDownloadManager, sharedState, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(MusicDownloadManager, splitIDString, std::string const&, std::vector<int>&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5a17c4, Default, MusicDownloadManager, urlEncode, std::string const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x586200, Default, MusicDownloadManager, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x586e88, Default, MusicDownloadManager, addDLToActive, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x58a198, Default, MusicDownloadManager, addDLToActive, char const*, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x586380, Default, MusicDownloadManager, addMusicDownloadDelegate, MusicDownloadDelegate*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4c6374, Default, MusicDownloadManager, addSongObjectFromString, std::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x589514, Default, MusicDownloadManager, clearSong, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(MusicDownloadManager, clearSortedMusicCache, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x589708, Default, MusicDownloadManager, clearUnusedSongs, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(MusicDownloadManager, createArtistsInfo, std::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(MusicDownloadManager, createCustomSFXFolder, std::string, int, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(MusicDownloadManager, createCustomSFXPlacement, int, int, std::string, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x588154, Default, MusicDownloadManager, createSongsInfo, std::string, std::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x591d84, Default, MusicDownloadManager, dataLoaded, DS_Dictionary*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(MusicDownloadManager, decodeCustomSFX, std::string const&)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(MusicDownloadManager, deleteCustomSFXObject, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x59a3fc, Default, MusicDownloadManager, deleteSFX, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5894b4, Default, MusicDownloadManager, deleteSong, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x589bf4, Default, MusicDownloadManager, downloadCustomSong, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x594228, Default, MusicDownloadManager, downloadMusicLibrary, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x59a748, Default, MusicDownloadManager, downloadNewsFeed, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x59c6a0, Default, MusicDownloadManager, downloadNewsImage, std::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x598410, Default, MusicDownloadManager, downloadSFX, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x598920, Default, MusicDownloadManager, downloadSFXFailed, int, GJSongError)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x593064, Default, MusicDownloadManager, downloadSFXFinished, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x598d50, Default, MusicDownloadManager, downloadSFXLibrary, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x589850, Default, MusicDownloadManager, downloadSong, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x58a298, Default, MusicDownloadManager, downloadSongFailed, int, GJSongError)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x58a30c, Default, MusicDownloadManager, downloadSongFinished, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5897d8, Default, MusicDownloadManager, downloadSongStarted, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(MusicDownloadManager, encodeCustomSFX, std::set<int> const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5915e4, Default, MusicDownloadManager, encodeDataTo, DS_Dictionary*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(MusicDownloadManager, exportCustomSFXToFile, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x598098, Default, MusicDownloadManager, filterMusicByArtistID, int, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5981f0, Default, MusicDownloadManager, filterMusicByTag, int, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x59157c, Default, MusicDownloadManager, firstSetup, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5938c0, Default, MusicDownloadManager, generateCustomContentURL, std::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5862d4, Default, MusicDownloadManager, generateResourceAssetList, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x597f8c, Default, MusicDownloadManager, getAllMusicArtists, OptionsObjectDelegate*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x597b7c, Default, MusicDownloadManager, getAllMusicObjects, GJSongType)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(MusicDownloadManager, getAllMusicObjectsSorted, GJSongType, AudioSortType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x597e38, Default, MusicDownloadManager, getAllMusicTags, OptionsObjectDelegate*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x59a354, Default, MusicDownloadManager, getAllSFXObjects, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x589330, Default, MusicDownloadManager, getAllSongs, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5935cc, Default, MusicDownloadManager, getAudioFilesize, std::string, std::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x592e78, Default, MusicDownloadManager, getCustomContentURL, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(MusicDownloadManager, getCustomSFXCount, std::set<int> const&)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(MusicDownloadManager, getCustomSFXFolderForID, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(MusicDownloadManager, getCustomSFXFolderPath, int, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(MusicDownloadManager, getCustomSFXLocationText, SFXInfoObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(MusicDownloadManager, getCustomSFXObject, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(MusicDownloadManager, getCustomSFXRawPath, SFXInfoObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(MusicDownloadManager, getCustomSFXRoot, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x586644, Default, MusicDownloadManager, getDLObject, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x58902c, Default, MusicDownloadManager, getDownloadedSongs, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x58a378, Default, MusicDownloadManager, getDownloadProgress, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x597b68, Default, MusicDownloadManager, getMusicArtistForID, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x58a460, Default, MusicDownloadManager, getMusicObject, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x59c66c, Default, MusicDownloadManager, getNewsImageDownloadKey, std::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x58a438, Default, MusicDownloadManager, getSFXDownloadKey, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x58a3d8, Default, MusicDownloadManager, getSFXDownloadProgress, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(MusicDownloadManager, getSFXFolderObjectForID, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(MusicDownloadManager, getSFXFolderPathForID, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x58ce1c, Default, MusicDownloadManager, getSFXObject, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5865c0, Default, MusicDownloadManager, getSongDownloadKey, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x586a14, Default, MusicDownloadManager, getSongInfo, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x586598, Default, MusicDownloadManager, getSongInfoKey, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5868d0, Default, MusicDownloadManager, getSongInfoObject, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x586a00, Default, MusicDownloadManager, getSongPriority, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x58538c, Default, MusicDownloadManager, handleIt, bool, std::string, std::string, GJHttpType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x58564c, Default, MusicDownloadManager, handleItDelayed, bool, std::string, std::string, GJHttpType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5857b8, Default, MusicDownloadManager, handleItND, cocos2d::CCNode*, void*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x59cf00, Default, MusicDownloadManager, hasUnreadNews, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(MusicDownloadManager, importCustomSFXFromFile, std::string&, int&, int&)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(MusicDownloadManager, importCustomSFXMappings, std::map<std::pair<int, int>, std::string> const&, std::string const&, int&, int&)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(MusicDownloadManager, importCustomSFXSetup, std::string const&, std::string const&, bool, int&, int&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x58689c, Default, MusicDownloadManager, incrementPriorityForSong, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(MusicDownloadManager, isCustomSFXFavorite, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(MusicDownloadManager, isCustomSFXInScope, SFXInfoObject*, std::set<int> const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x58657c, Default, MusicDownloadManager, isDLActive, char const*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(MusicDownloadManager, isMusicFavorite, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x596454, Default, MusicDownloadManager, isMusicLibraryLoaded, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(MusicDownloadManager, isNewsFeedLoaded, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(MusicDownloadManager, isNewsImageDownloaded, std::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x58a9a8, Default, MusicDownloadManager, isResourceSFX, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x58a474, Default, MusicDownloadManager, isResourceSong, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5864f4, Default, MusicDownloadManager, isRunningActionForSongID, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x58a73c, Default, MusicDownloadManager, isSFXDownloaded, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(MusicDownloadManager, isSFXFavorite, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x599fdc, Default, MusicDownloadManager, isSFXLibraryLoaded, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5890c4, Default, MusicDownloadManager, isSongDownloaded, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x589380, Default, MusicDownloadManager, limitDownloadedSongs, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x586eb8, Default, MusicDownloadManager, loadSongInfoFailed, int, GJSongError)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x586e1c, Default, MusicDownloadManager, loadSongInfoFinished, SongInfoObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(MusicDownloadManager, mintCustomSFXID, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(MusicDownloadManager, moveCustomSFXObject, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x592ff8, Default, MusicDownloadManager, musicActionFailed, GJMusicAction)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(MusicDownloadManager, musicActionFinished, GJMusicAction)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5982c4, Default, MusicDownloadManager, nameForTagID, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x59ce2c, Default, MusicDownloadManager, newsImageDownloaded, std::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x59cd58, Default, MusicDownloadManager, newsImageFailed, std::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(MusicDownloadManager, noteSFXUsed, int, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(MusicDownloadManager, noteSongUsed, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x594428, Default, MusicDownloadManager, onDownloadMusicLibraryCompleted, cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x59a90c, Default, MusicDownloadManager, onDownloadNewsFeedCompleted, cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x59c98c, Default, MusicDownloadManager, onDownloadNewsImageCompleted, cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5986e8, Default, MusicDownloadManager, onDownloadSFXCompleted, cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x598f2c, Default, MusicDownloadManager, onDownloadSFXLibraryCompleted, cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x589f20, Default, MusicDownloadManager, onDownloadSongCompleted, cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x585cb0, Default, MusicDownloadManager, onGetAudioFilesizeCompleted, std::string, std::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x585b6c, Default, MusicDownloadManager, onGetCustomContentURLCompleted, std::string, std::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5858dc, Default, MusicDownloadManager, onGetSongInfoCompleted, std::string, std::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x58507c, Default, MusicDownloadManager, onProcessHttpRequestCompleted, cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5940d8, Default, MusicDownloadManager, onTryUpdateMusicLibraryCompleted, cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x59a5f8, Default, MusicDownloadManager, onTryUpdateNewsFeedCompleted, cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x598c00, Default, MusicDownloadManager, onTryUpdateSFXLibraryCompleted, cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x594654, Default, MusicDownloadManager, parseMusicLibrary, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x59b008, Default, MusicDownloadManager, parseNewsFeed, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5990fc, Default, MusicDownloadManager, parseSFXLibrary, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x59c370, Default, MusicDownloadManager, pathForNewsFolder, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(MusicDownloadManager, pathForNewsImage, std::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x58aa8c, Default, MusicDownloadManager, pathForSFX, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x58ab70, Default, MusicDownloadManager, pathForSFXFolder, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x58961c, Default, MusicDownloadManager, pathForSong, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x58a558, Default, MusicDownloadManager, pathForSongFolder, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x58526c, Default, MusicDownloadManager, ProcessHttpGetRequest, std::string, std::string, cocos2d::extension::SEL_HttpResponse, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x584f3c, Default, MusicDownloadManager, ProcessHttpRequest, std::string, std::string, std::string, GJHttpType)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(MusicDownloadManager, rebuildCustomSFXMappings, std::vector<std::pair<int, int>> const&, std::map<std::pair<int, int>, std::string>&, std::set<int> const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x586748, Default, MusicDownloadManager, removeDLFromActive, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x586474, Default, MusicDownloadManager, removeMusicDownloadDelegate, MusicDownloadDelegate*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(MusicDownloadManager, renameCustomSFXObject, int, std::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(MusicDownloadManager, resolveSFXPlacement, int, int, std::string const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5871cc, Default, MusicDownloadManager, responseToDict, std::string, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x58ad54, Default, MusicDownloadManager, showTOS, FLAlertLayerProtocol*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x586840, Default, MusicDownloadManager, songStateChanged, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5865e8, Default, MusicDownloadManager, stopDownload, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(MusicDownloadManager, storeMusicObject, SongInfoObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x59a000, Default, MusicDownloadManager, storeSFXInfoObject, SFXInfoObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(MusicDownloadManager, sumLocalAudioSizeBytes, std::string, std::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(MusicDownloadManager, syncCustomSFXPlacements, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(MusicDownloadManager, toggleCustomSFXFavorite, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(MusicDownloadManager, toggleMusicFavorite, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(MusicDownloadManager, toggleSFXFavorite, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x59a0e4, Default, MusicDownloadManager, tryLoadLibraries, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x59a5d0, Default, MusicDownloadManager, tryLoadNewsFeed, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x593ed8, Default, MusicDownloadManager, tryUpdateMusicLibrary, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5930d0, Default, MusicDownloadManager, tryUpdateNewsFeed, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x598a00, Default, MusicDownloadManager, tryUpdateSFXLibrary, )
		}
	};
}
