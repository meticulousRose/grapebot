#include <Geode/cocos/cocoa/CCObject.h>

#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/LevelCell.hpp>
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

LevelCell::~LevelCell() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(LevelCell*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x236880, tulip::hook::TulipConvention::Default);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) LevelCell(geode::CutoffConstructor, sizeof(LevelCell));
		geode::DestructorLock::addLock(this);
	}
}

auto LevelCell::create(float width, float height) -> decltype(create(width, height)) {
	using FunctionType = decltype(create(width, height))(*)(float, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x236900, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(width, height);
}

auto LevelCell::init() -> decltype(init()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&LevelCell::init), this);
	using FunctionType = decltype(init())(*)(LevelCell*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x236ad0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto LevelCell::draw() -> decltype(draw()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&LevelCell::draw), this);
	using FunctionType = decltype(draw())(*)(LevelCell*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x23aee0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto LevelCell::inRecallMode() -> decltype(inRecallMode()) {
	using FunctionType = decltype(inRecallMode())(*)(LevelCell*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x23a830, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto LevelCell::loadCustomLevelCell() -> decltype(loadCustomLevelCell()) {
	using FunctionType = decltype(loadCustomLevelCell())(*)(LevelCell*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2373e0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto LevelCell::loadFromLevel(GJGameLevel* level) -> decltype(loadFromLevel(level)) {
	using FunctionType = decltype(loadFromLevel(level))(*)(LevelCell*, GJGameLevel*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x22a390, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, level);
}

auto LevelCell::loadLocalLevelCell() -> decltype(loadLocalLevelCell()) {
	using FunctionType = decltype(loadLocalLevelCell())(*)(LevelCell*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x236b10, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto LevelCell::onClick(cocos2d::CCObject* sender) -> decltype(onClick(sender)) {
	using FunctionType = decltype(onClick(sender))(*)(LevelCell*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x23ac60, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto LevelCell::onToggle(cocos2d::CCObject* sender) -> decltype(onToggle(sender)) {
	using FunctionType = decltype(onToggle(sender))(*)(LevelCell*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x302d20, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto LevelCell::onViewProfile(cocos2d::CCObject* sender) -> decltype(onViewProfile(sender)) {
	using FunctionType = decltype(onViewProfile(sender))(*)(LevelCell*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x23aeb0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto LevelCell::recallChestReady() -> decltype(recallChestReady()) {
	using FunctionType = decltype(recallChestReady())(*)(LevelCell*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x23a920, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto LevelCell::recallLevel() -> decltype(recallLevel()) {
	using FunctionType = decltype(recallLevel())(*)(LevelCell*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x23a8b0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto LevelCell::recallSavedLevel() -> decltype(recallSavedLevel()) {
	using FunctionType = decltype(recallSavedLevel())(*)(LevelCell*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x23a850, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto LevelCell::updateBGColor(int index) -> decltype(updateBGColor(index)) {
	using FunctionType = decltype(updateBGColor(index))(*)(LevelCell*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x22a580, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, index);
}

auto LevelCell::updateCellMode(int mode) -> decltype(updateCellMode(mode)) {
	using FunctionType = decltype(updateCellMode(mode))(*)(LevelCell*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2364a0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, mode);
}

auto LevelCell::updateToggle() -> decltype(updateToggle()) {
	using FunctionType = decltype(updateToggle())(*)(LevelCell*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x236280, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}
