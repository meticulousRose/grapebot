
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

auto MapPackCell::init() -> decltype(init()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&MapPackCell::init), this);
	using FunctionType = decltype(init())(*)(MapPackCell*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1e6fa4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto MapPackCell::draw() -> decltype(draw()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&MapPackCell::draw), this);
	using FunctionType = decltype(draw())(*)(MapPackCell*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1e7460, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto MapPackCell::loadFromMapPack(GJMapPack* pack) -> decltype(loadFromMapPack(pack)) {
	using FunctionType = decltype(loadFromMapPack(pack))(*)(MapPackCell*, GJMapPack*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1d6f48, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, pack);
}

auto MapPackCell::onClaimReward(cocos2d::CCObject* sender) -> decltype(onClaimReward(sender)) {
	using FunctionType = decltype(onClaimReward(sender))(*)(MapPackCell*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1e719c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto MapPackCell::onClick(cocos2d::CCObject* sender) -> decltype(onClick(sender)) {
	using FunctionType = decltype(onClick(sender))(*)(MapPackCell*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1e6fec, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto MapPackCell::playCompleteEffect() -> decltype(playCompleteEffect()) {
	using FunctionType = decltype(playCompleteEffect())(*)(MapPackCell*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1e7218, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto MapPackCell::reloadCell() -> decltype(reloadCell()) {
	using FunctionType = decltype(reloadCell())(*)(MapPackCell*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1e23f8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto MapPackCell::updateBGColor(int index) -> decltype(updateBGColor(index)) {
	using FunctionType = decltype(updateBGColor(index))(*)(MapPackCell*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1d7a34, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, index);
}
