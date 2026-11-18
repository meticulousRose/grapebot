
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/LevelListCell.hpp>
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

auto LevelListCell::create(float width, float height) -> decltype(create(width, height)) {
	using FunctionType = decltype(create(width, height))(*)(float, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x243080, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(width, height);
}

auto LevelListCell::init() -> decltype(init()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&LevelListCell::init), this);
	using FunctionType = decltype(init())(*)(LevelListCell*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2431d0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto LevelListCell::draw() -> decltype(draw()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&LevelListCell::draw), this);
	using FunctionType = decltype(draw())(*)(LevelListCell*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x243340, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto LevelListCell::loadFromList(GJLevelList* list) -> decltype(loadFromList(list)) {
	using FunctionType = decltype(loadFromList(list))(*)(LevelListCell*, GJLevelList*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x22b1a0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, list);
}

auto LevelListCell::onClick(cocos2d::CCObject* sender) -> decltype(onClick(sender)) {
	using FunctionType = decltype(onClick(sender))(*)(LevelListCell*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2431e0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto LevelListCell::onListInfo(cocos2d::CCObject* sender) -> decltype(onListInfo(sender)) {
	using FunctionType = decltype(onListInfo(sender))(*)(LevelListCell*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x243320, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto LevelListCell::onViewProfile(cocos2d::CCObject* sender) -> decltype(onViewProfile(sender)) {
	using FunctionType = decltype(onViewProfile(sender))(*)(LevelListCell*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2432f0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto LevelListCell::updateBGColor(int index) -> decltype(updateBGColor(index)) {
	using FunctionType = decltype(updateBGColor(index))(*)(LevelListCell*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x22a0d0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, index);
}
