#include <Geode/cocos/cocoa/CCObject.h>

#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/MapPackCell.hpp>
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

MapPackCell::MapPackCell(char const* identifier, float width, float height) : MapPackCell(geode::CutoffConstructor, sizeof(MapPackCell)) {
	// here we construct it as normal as we can, then destruct it
	// using the generated functions. this ensures no memory gets leaked
	// no crashes :pray:
	geode::DestructorLock::addLock(this);
	MapPackCell::~MapPackCell();

	using FunctionType = void(*)(MapPackCell*, char const*, float, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x23b2c0, tulip::hook::TulipConvention::Default);
	reinterpret_cast<FunctionType>(func)(this, identifier, width, height);
}

auto MapPackCell::init() -> decltype(init()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&MapPackCell::init), this);
	using FunctionType = decltype(init())(*)(MapPackCell*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x23b380, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto MapPackCell::draw() -> decltype(draw()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&MapPackCell::draw), this);
	using FunctionType = decltype(draw())(*)(MapPackCell*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x23b830, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto MapPackCell::loadFromMapPack(GJMapPack* pack) -> decltype(loadFromMapPack(pack)) {
	using FunctionType = decltype(loadFromMapPack(pack))(*)(MapPackCell*, GJMapPack*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x22a5e0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, pack);
}

auto MapPackCell::onClaimReward(cocos2d::CCObject* sender) -> decltype(onClaimReward(sender)) {
	using FunctionType = decltype(onClaimReward(sender))(*)(MapPackCell*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1dfa30, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto MapPackCell::onClick(cocos2d::CCObject* sender) -> decltype(onClick(sender)) {
	using FunctionType = decltype(onClick(sender))(*)(MapPackCell*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x23b3d0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto MapPackCell::playCompleteEffect() -> decltype(playCompleteEffect()) {
	using FunctionType = decltype(playCompleteEffect())(*)(MapPackCell*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x23b600, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto MapPackCell::reloadCell() -> decltype(reloadCell()) {
	using FunctionType = decltype(reloadCell())(*)(MapPackCell*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x236260, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto MapPackCell::updateBGColor(int index) -> decltype(updateBGColor(index)) {
	using FunctionType = decltype(updateBGColor(index))(*)(MapPackCell*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x22b140, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, index);
}
