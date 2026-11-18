
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/MusicSearchResult.hpp>
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

auto MusicSearchResult::create(GJSongType songType) -> decltype(create(songType)) {
	using FunctionType = decltype(create(songType))(*)(GJSongType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x666fa0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(songType);
}

auto MusicSearchResult::updateObjects(AudioSortType type) -> decltype(updateObjects(type)) {
	auto self = addresser::thunkAdjust(Resolve<AudioSortType>::func(&MusicSearchResult::updateObjects), this);
	using FunctionType = decltype(updateObjects(type))(*)(MusicSearchResult*, AudioSortType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x668480, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, type);
}

auto MusicSearchResult::stateChanged(OptionsObject* object) -> decltype(stateChanged(object)) {
	auto self = addresser::thunkAdjust(Resolve<OptionsObject*>::func(&MusicSearchResult::stateChanged), this);
	using FunctionType = decltype(stateChanged(object))(*)(MusicSearchResult*, OptionsObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x668420, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, object);
}

auto MusicSearchResult::getFilesMatchingSearch(cocos2d::CCArray* objects, std::string query) -> decltype(getFilesMatchingSearch(objects, query)) {
	using FunctionType = decltype(getFilesMatchingSearch(objects, query))(*)(MusicSearchResult*, cocos2d::CCArray*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x668680, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, objects, query);
}

auto MusicSearchResult::init(GJSongType songType) -> decltype(init(songType)) {
	using FunctionType = decltype(init(songType))(*)(MusicSearchResult*, GJSongType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x667030, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, songType);
}
