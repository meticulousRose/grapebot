
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

auto SongInfoObject::create(cocos2d::CCDictionary* dict) -> decltype(create(dict)) {
	using FunctionType = decltype(create(dict))(*)(cocos2d::CCDictionary*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x64c600, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(dict);
}

auto SongInfoObject::create(int songID) -> decltype(create(songID)) {
	using FunctionType = decltype(create(songID))(*)(int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x664460, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(songID);
}

auto SongInfoObject::createWithCoder(DS_Dictionary* dict) -> decltype(createWithCoder(dict)) {
	using FunctionType = decltype(createWithCoder(dict))(*)(DS_Dictionary*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x664a50, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(dict);
}

auto SongInfoObject::encodeWithCoder(DS_Dictionary* dict) -> decltype(encodeWithCoder(dict)) {
	auto self = addresser::thunkAdjust(Resolve<DS_Dictionary*>::func(&SongInfoObject::encodeWithCoder), this);
	using FunctionType = decltype(encodeWithCoder(dict))(*)(SongInfoObject*, DS_Dictionary*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x665630, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, dict);
}

auto SongInfoObject::canEncode() -> decltype(canEncode()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&SongInfoObject::canEncode), this);
	using FunctionType = decltype(canEncode())(*)(SongInfoObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x6657f0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto SongInfoObject::addTags(std::string tags) -> decltype(addTags(tags)) {
	using FunctionType = decltype(addTags(tags))(*)(SongInfoObject*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x65db90, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, tags);
}

auto SongInfoObject::containsTag(int tag) -> decltype(containsTag(tag)) {
	using FunctionType = decltype(containsTag(tag))(*)(SongInfoObject*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4333e0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, tag);
}

auto SongInfoObject::copyValues(SongInfoObject* object) -> decltype(copyValues(object)) {
	using FunctionType = decltype(copyValues(object))(*)(SongInfoObject*, SongInfoObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8da790, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto SongInfoObject::getArtistLinks() -> decltype(getArtistLinks()) {
	using FunctionType = decltype(getArtistLinks())(*)(SongInfoObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x666320, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SongInfoObject::getArtistNames(int unused) -> decltype(getArtistNames(unused)) {
	using FunctionType = decltype(getArtistNames(unused))(*)(SongInfoObject*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x665800, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, unused);
}

auto SongInfoObject::getExtraArtistCount() -> decltype(getExtraArtistCount()) {
	using FunctionType = decltype(getExtraArtistCount())(*)(SongInfoObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x665e40, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SongInfoObject::getSongLinks() -> decltype(getSongLinks()) {
	using FunctionType = decltype(getSongLinks())(*)(SongInfoObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x666130, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SongInfoObject::getTagsString(bool shortTags) -> decltype(getTagsString(shortTags)) {
	using FunctionType = decltype(getTagsString(shortTags))(*)(SongInfoObject*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x666570, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, shortTags);
}

auto SongInfoObject::updateArtists(std::string artists) -> decltype(updateArtists(artists)) {
	using FunctionType = decltype(updateArtists(artists))(*)(SongInfoObject*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x664870, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, artists);
}
