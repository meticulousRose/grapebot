
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/SelectFontLayer2.hpp>
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

auto SelectFontLayer2::registerWithTouchDispatcher() -> decltype(registerWithTouchDispatcher()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&SelectFontLayer2::registerWithTouchDispatcher), this);
	using FunctionType = decltype(registerWithTouchDispatcher())(*)(SelectFontLayer2*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x84c120, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto SelectFontLayer2::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&SelectFontLayer2::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(SelectFontLayer2*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x84c8e0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto SelectFontLayer2::cellPerformedAction(TableViewCell* p0, int p1, CellAction p2, cocos2d::CCNode* p3) -> decltype(cellPerformedAction(p0, p1, p2, p3)) {
	auto self = addresser::thunkAdjust(Resolve<TableViewCell*, int, CellAction, cocos2d::CCNode*>::func(&SelectFontLayer2::cellPerformedAction), this);
	using FunctionType = decltype(cellPerformedAction(p0, p1, p2, p3))(*)(SelectFontLayer2*, TableViewCell*, int, CellAction, cocos2d::CCNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x84c804, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1, p2, p3);
}

auto SelectFontLayer2::getSelectedCellIdx() -> decltype(getSelectedCellIdx()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&SelectFontLayer2::getSelectedCellIdx), this);
	using FunctionType = decltype(getSelectedCellIdx())(*)(SelectFontLayer2*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x84c8d0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}
