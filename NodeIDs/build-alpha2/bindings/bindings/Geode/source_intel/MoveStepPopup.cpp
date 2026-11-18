
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/MoveStepPopup.hpp>
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

auto MoveStepPopup::textChanged(CCTextInputNode* p0) -> decltype(textChanged(p0)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&MoveStepPopup::textChanged), this);
	using FunctionType = decltype(textChanged(p0))(*)(MoveStepPopup*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x98dd40, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto MoveStepPopup::valueDidChange(int p0, float p1) -> decltype(valueDidChange(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<int, float>::func(&MoveStepPopup::valueDidChange), this);
	using FunctionType = decltype(valueDidChange(p0, p1))(*)(MoveStepPopup*, int, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x98dcf0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto MoveStepPopup::getValue(int p0) -> decltype(getValue(p0)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&MoveStepPopup::getValue), this);
	using FunctionType = decltype(getValue(p0))(*)(MoveStepPopup*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x98dcc0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto MoveStepPopup::onBuildWindowContent() -> decltype(onBuildWindowContent()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&MoveStepPopup::onBuildWindowContent), this);
	using FunctionType = decltype(onBuildWindowContent())(*)(MoveStepPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x98d880, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}
