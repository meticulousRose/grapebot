#include <Geode/cocos/cocoa/CCObject.h>

#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/SongCell.hpp>
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

SongCell::SongCell(char const* identifier, float width, float height) : SongCell(geode::CutoffConstructor, sizeof(SongCell)) {
	// here we construct it as normal as we can, then destruct it
	// using the generated functions. this ensures no memory gets leaked
	// no crashes :pray:
	geode::DestructorLock::addLock(this);
	SongCell::~SongCell();

	using FunctionType = void(*)(SongCell*, char const*, float, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x23c7b0, tulip::hook::TulipConvention::Default);
	reinterpret_cast<FunctionType>(func)(this, identifier, width, height);
}

auto SongCell::init() -> decltype(init()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&SongCell::init), this);
	using FunctionType = decltype(init())(*)(SongCell*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x23c820, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto SongCell::draw() -> decltype(draw()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&SongCell::draw), this);
	using FunctionType = decltype(draw())(*)(SongCell*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x23c860, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto SongCell::loadFromObject(SongObject* object) -> decltype(loadFromObject(object)) {
	using FunctionType = decltype(loadFromObject(object))(*)(SongCell*, SongObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x22ca50, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto SongCell::onClick(cocos2d::CCObject* sender) -> decltype(onClick(sender)) {
	using FunctionType = decltype(onClick(sender))(*)(SongCell*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x23c840, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}
