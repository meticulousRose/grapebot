
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/SongInfoObject.hpp>
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

auto SongInfoObject::create(int songID) -> decltype(create(songID)) {
	using FunctionType = decltype(create(songID))(*)(int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x59d1c8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(songID);
}

auto SongInfoObject::create(int songID, std::string songName, std::string artistName, int artistID, float fileSize, std::string songUrl, int nongType, std::string extraArtistIDs, bool isNew, int libraryOrder, int priority) -> decltype(create(songID, songName, artistName, artistID, fileSize, songUrl, nongType, extraArtistIDs, isNew, libraryOrder, priority)) {
	using FunctionType = decltype(create(songID, songName, artistName, artistID, fileSize, songUrl, nongType, extraArtistIDs, isNew, libraryOrder, priority))(*)(int, std::string, std::string, int, float, std::string, int, std::string, bool, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x7bdfb4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(songID, songName, artistName, artistID, fileSize, songUrl, nongType, extraArtistIDs, isNew, libraryOrder, priority);
}

auto SongInfoObject::createWithCoder(DS_Dictionary* dict) -> decltype(createWithCoder(dict)) {
	using FunctionType = decltype(createWithCoder(dict))(*)(DS_Dictionary*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x59d7b0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(dict);
}

auto SongInfoObject::encodeWithCoder(DS_Dictionary* dict) -> decltype(encodeWithCoder(dict)) {
	auto self = addresser::thunkAdjust(Resolve<DS_Dictionary*>::func(&SongInfoObject::encodeWithCoder), this);
	using FunctionType = decltype(encodeWithCoder(dict))(*)(SongInfoObject*, DS_Dictionary*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x59e1bc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, dict);
}

auto SongInfoObject::canEncode() -> decltype(canEncode()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&SongInfoObject::canEncode), this);
	using FunctionType = decltype(canEncode())(*)(SongInfoObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x59e338, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto SongInfoObject::addTags(std::string tags) -> decltype(addTags(tags)) {
	using FunctionType = decltype(addTags(tags))(*)(SongInfoObject*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5974cc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, tags);
}

auto SongInfoObject::containsTag(int tag) -> decltype(containsTag(tag)) {
	using FunctionType = decltype(containsTag(tag))(*)(SongInfoObject*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3a9cd0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, tag);
}

auto SongInfoObject::getArtistNames(int unused) -> decltype(getArtistNames(unused)) {
	using FunctionType = decltype(getArtistNames(unused))(*)(SongInfoObject*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x59e340, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, unused);
}

auto SongInfoObject::getExtraArtistCount() -> decltype(getExtraArtistCount()) {
	using FunctionType = decltype(getExtraArtistCount())(*)(SongInfoObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x59e80c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SongInfoObject::getTagsString(bool shortTags) -> decltype(getTagsString(shortTags)) {
	using FunctionType = decltype(getTagsString(shortTags))(*)(SongInfoObject*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x59eee8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, shortTags);
}

auto SongInfoObject::init(int songID, std::string songName, std::string artistName, int artistID, float fileSize, std::string songUrl, int nongType, std::string extraArtistIDs, bool isNew, int libraryOrder, int priority) -> decltype(init(songID, songName, artistName, artistID, fileSize, songUrl, nongType, extraArtistIDs, isNew, libraryOrder, priority)) {
	using FunctionType = decltype(init(songID, songName, artistName, artistID, fileSize, songUrl, nongType, extraArtistIDs, isNew, libraryOrder, priority))(*)(SongInfoObject*, int, std::string, std::string, int, float, std::string, int, std::string, bool, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1ad718, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, songID, songName, artistName, artistID, fileSize, songUrl, nongType, extraArtistIDs, isNew, libraryOrder, priority);
}
