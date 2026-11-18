
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/OptionsScrollLayer.hpp>
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

auto OptionsScrollLayer::create(cocos2d::CCArray* p0, bool p1, std::string p2, MusicSearchResult* p3) -> decltype(create(p0, p1, p2, p3)) {
	using FunctionType = decltype(create(p0, p1, p2, p3))(*)(cocos2d::CCArray*, bool, std::string, MusicSearchResult*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5fe33c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1, p2, p3);
}

auto OptionsScrollLayer::registerWithTouchDispatcher() -> decltype(registerWithTouchDispatcher()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&OptionsScrollLayer::registerWithTouchDispatcher), this);
	using FunctionType = decltype(registerWithTouchDispatcher())(*)(OptionsScrollLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5ffbac, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto OptionsScrollLayer::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&OptionsScrollLayer::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(OptionsScrollLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5ffa50, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto OptionsScrollLayer::cellPerformedAction(TableViewCell* cell, int listType, CellAction action, cocos2d::CCNode* parent) -> decltype(cellPerformedAction(cell, listType, action, parent)) {
	auto self = addresser::thunkAdjust(Resolve<TableViewCell*, int, CellAction, cocos2d::CCNode*>::func(&OptionsScrollLayer::cellPerformedAction), this);
	using FunctionType = decltype(cellPerformedAction(cell, listType, action, parent))(*)(OptionsScrollLayer*, TableViewCell*, int, CellAction, cocos2d::CCNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5ffbe4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, cell, listType, action, parent);
}

auto OptionsScrollLayer::textChanged(CCTextInputNode* p0) -> decltype(textChanged(p0)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&OptionsScrollLayer::textChanged), this);
	using FunctionType = decltype(textChanged(p0))(*)(OptionsScrollLayer*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5ff624, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto OptionsScrollLayer::init(cocos2d::CCArray* p0, bool p1, std::string p2, MusicSearchResult* p3) -> decltype(init(p0, p1, p2, p3)) {
	using FunctionType = decltype(init(p0, p1, p2, p3))(*)(OptionsScrollLayer*, cocos2d::CCArray*, bool, std::string, MusicSearchResult*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5feae0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1, p2, p3);
}

auto OptionsScrollLayer::setupList(cocos2d::CCArray* objects) -> decltype(setupList(objects)) {
	using FunctionType = decltype(setupList(objects))(*)(OptionsScrollLayer*, cocos2d::CCArray*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5ff474, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, objects);
}
