
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/LevelPickerPopup.hpp>
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

auto LevelPickerPopup::requestPage(int page) -> decltype(requestPage(page)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&LevelPickerPopup::requestPage), this);
	using FunctionType = decltype(requestPage(page))(*)(LevelPickerPopup*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x93f930, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, page);
}

auto LevelPickerPopup::cellPerformedAction(TableViewCell* p0, int p1, CellAction p2, cocos2d::CCNode* p3) -> decltype(cellPerformedAction(p0, p1, p2, p3)) {
	auto self = addresser::thunkAdjust(Resolve<TableViewCell*, int, CellAction, cocos2d::CCNode*>::func(&LevelPickerPopup::cellPerformedAction), this);
	using FunctionType = decltype(cellPerformedAction(p0, p1, p2, p3))(*)(LevelPickerPopup*, TableViewCell*, int, CellAction, cocos2d::CCNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x9413e0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1, p2, p3);
}

auto LevelPickerPopup::loadLevelsFinished(cocos2d::CCArray* p0, char const* p1, int p2) -> decltype(loadLevelsFinished(p0, p1, p2)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCArray*, char const*, int>::func(&LevelPickerPopup::loadLevelsFinished), this);
	using FunctionType = decltype(loadLevelsFinished(p0, p1, p2))(*)(LevelPickerPopup*, cocos2d::CCArray*, char const*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x93ff30, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1, p2);
}

auto LevelPickerPopup::loadLevelsFailed(char const* p0, int p1) -> decltype(loadLevelsFailed(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<char const*, int>::func(&LevelPickerPopup::loadLevelsFailed), this);
	using FunctionType = decltype(loadLevelsFailed(p0, p1))(*)(LevelPickerPopup*, char const*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x9401c0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto LevelPickerPopup::setupPageInfo(std::string p0, char const* p1) -> decltype(setupPageInfo(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<std::string, char const*>::func(&LevelPickerPopup::setupPageInfo), this);
	using FunctionType = decltype(setupPageInfo(p0, p1))(*)(LevelPickerPopup*, std::string, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x93fd70, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto LevelPickerPopup::textChanged(CCTextInputNode* p0) -> decltype(textChanged(p0)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&LevelPickerPopup::textChanged), this);
	using FunctionType = decltype(textChanged(p0))(*)(LevelPickerPopup*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x9402a0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}
