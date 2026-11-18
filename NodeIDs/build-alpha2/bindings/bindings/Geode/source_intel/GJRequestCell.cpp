#include <Geode/cocos/cocoa/CCObject.h>

#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/GJRequestCell.hpp>
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

GJRequestCell::GJRequestCell(char const* identifier, float width, float height) : GJRequestCell(geode::CutoffConstructor, sizeof(GJRequestCell)) {
	// here we construct it as normal as we can, then destruct it
	// using the generated functions. this ensures no memory gets leaked
	// no crashes :pray:
	geode::DestructorLock::addLock(this);
	GJRequestCell::~GJRequestCell();

	using FunctionType = void(*)(GJRequestCell*, char const*, float, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x242180, tulip::hook::TulipConvention::Default);
	reinterpret_cast<FunctionType>(func)(this, identifier, width, height);
}

auto GJRequestCell::init() -> decltype(init()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GJRequestCell::init), this);
	using FunctionType = decltype(init())(*)(GJRequestCell*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x240680, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GJRequestCell::draw() -> decltype(draw()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GJRequestCell::draw), this);
	using FunctionType = decltype(draw())(*)(GJRequestCell*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2408c0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GJRequestCell::loadFromScore(GJUserScore* score) -> decltype(loadFromScore(score)) {
	using FunctionType = decltype(loadFromScore(score))(*)(GJRequestCell*, GJUserScore*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x231d80, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, score);
}

auto GJRequestCell::markAsRead() -> decltype(markAsRead()) {
	using FunctionType = decltype(markAsRead())(*)(GJRequestCell*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x240820, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJRequestCell::onViewProfile(cocos2d::CCObject* sender) -> decltype(onViewProfile(sender)) {
	using FunctionType = decltype(onViewProfile(sender))(*)(GJRequestCell*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x23efd0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto GJRequestCell::updateToggle() -> decltype(updateToggle()) {
	using FunctionType = decltype(updateToggle())(*)(GJRequestCell*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x236440, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}
