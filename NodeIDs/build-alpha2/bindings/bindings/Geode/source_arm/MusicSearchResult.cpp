
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

auto MusicSearchResult::updateObjects(AudioSortType type) -> decltype(updateObjects(type)) {
	auto self = addresser::thunkAdjust(Resolve<AudioSortType>::func(&MusicSearchResult::updateObjects), this);
	using FunctionType = decltype(updateObjects(type))(*)(MusicSearchResult*, AudioSortType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5a0b08, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, type);
}

auto MusicSearchResult::stateChanged(OptionsObject* object) -> decltype(stateChanged(object)) {
	auto self = addresser::thunkAdjust(Resolve<OptionsObject*>::func(&MusicSearchResult::stateChanged), this);
	using FunctionType = decltype(stateChanged(object))(*)(MusicSearchResult*, OptionsObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5a0ad8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, object);
}

auto MusicSearchResult::init(GJSongType songType) -> decltype(init(songType)) {
	using FunctionType = decltype(init(songType))(*)(MusicSearchResult*, GJSongType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1a05cc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, songType);
}

auto MusicSearchResult::updateFutureCount(cocos2d::CCArray* p0, cocos2d::CCArray* p1, cocos2d::CCArray* p2) -> decltype(updateFutureCount(p0, p1, p2)) {
	using FunctionType = decltype(updateFutureCount(p0, p1, p2))(*)(MusicSearchResult*, cocos2d::CCArray*, cocos2d::CCArray*, cocos2d::CCArray*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x863168, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1, p2);
}

auto MusicSearchResult::updateObjects() -> decltype(updateObjects()) {
	using FunctionType = decltype(updateObjects())(*)(MusicSearchResult*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5a0af8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}
