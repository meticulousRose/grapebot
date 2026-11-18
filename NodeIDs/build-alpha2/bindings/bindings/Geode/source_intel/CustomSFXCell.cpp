
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/CustomSFXCell.hpp>
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

auto CustomSFXCell::init() -> decltype(init()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&CustomSFXCell::init), this);
	using FunctionType = decltype(init())(*)(CustomSFXCell*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x23ce40, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto CustomSFXCell::draw() -> decltype(draw()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&CustomSFXCell::draw), this);
	using FunctionType = decltype(draw())(*)(CustomSFXCell*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x23d240, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto CustomSFXCell::sfxObjectSelected(SFXInfoObject* object) -> decltype(sfxObjectSelected(object)) {
	auto self = addresser::thunkAdjust(Resolve<SFXInfoObject*>::func(&CustomSFXCell::sfxObjectSelected), this);
	using FunctionType = decltype(sfxObjectSelected(object))(*)(CustomSFXCell*, SFXInfoObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x23ce60, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, object);
}

auto CustomSFXCell::getActiveSFXID() -> decltype(getActiveSFXID()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&CustomSFXCell::getActiveSFXID), this);
	using FunctionType = decltype(getActiveSFXID())(*)(CustomSFXCell*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x23d180, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto CustomSFXCell::getActiveCustomSFXID() -> decltype(getActiveCustomSFXID()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&CustomSFXCell::getActiveCustomSFXID), this);
	using FunctionType = decltype(getActiveCustomSFXID())(*)(CustomSFXCell*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x23d1e0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto CustomSFXCell::sfxAddToFolder(SFXInfoObject* p0) -> decltype(sfxAddToFolder(p0)) {
	auto self = addresser::thunkAdjust(Resolve<SFXInfoObject*>::func(&CustomSFXCell::sfxAddToFolder), this);
	using FunctionType = decltype(sfxAddToFolder(p0))(*)(CustomSFXCell*, SFXInfoObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x23cee0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto CustomSFXCell::sfxEditCustomObject(SFXInfoObject* p0) -> decltype(sfxEditCustomObject(p0)) {
	auto self = addresser::thunkAdjust(Resolve<SFXInfoObject*>::func(&CustomSFXCell::sfxEditCustomObject), this);
	using FunctionType = decltype(sfxEditCustomObject(p0))(*)(CustomSFXCell*, SFXInfoObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x23cf60, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto CustomSFXCell::sfxToggleCustomSelect(SFXInfoObject* p0) -> decltype(sfxToggleCustomSelect(p0)) {
	auto self = addresser::thunkAdjust(Resolve<SFXInfoObject*>::func(&CustomSFXCell::sfxToggleCustomSelect), this);
	using FunctionType = decltype(sfxToggleCustomSelect(p0))(*)(CustomSFXCell*, SFXInfoObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x23cfe0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto CustomSFXCell::isCustomEntrySelected(int p0) -> decltype(isCustomEntrySelected(p0)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&CustomSFXCell::isCustomEntrySelected), this);
	using FunctionType = decltype(isCustomEntrySelected(p0))(*)(CustomSFXCell*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x23d060, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto CustomSFXCell::inCustomSFXTree() -> decltype(inCustomSFXTree()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&CustomSFXCell::inCustomSFXTree), this);
	using FunctionType = decltype(inCustomSFXTree())(*)(CustomSFXCell*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x23d0c0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto CustomSFXCell::showsSFXInfoButton() -> decltype(showsSFXInfoButton()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&CustomSFXCell::showsSFXInfoButton), this);
	using FunctionType = decltype(showsSFXInfoButton())(*)(CustomSFXCell*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x23d120, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto CustomSFXCell::loadFromObject(SFXInfoObject* object) -> decltype(loadFromObject(object)) {
	using FunctionType = decltype(loadFromObject(object))(*)(CustomSFXCell*, SFXInfoObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x22a130, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto CustomSFXCell::shouldReload() -> decltype(shouldReload()) {
	using FunctionType = decltype(shouldReload())(*)(CustomSFXCell*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2366e0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto CustomSFXCell::updateBGColor(int index) -> decltype(updateBGColor(index)) {
	using FunctionType = decltype(updateBGColor(index))(*)(CustomSFXCell*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x22a290, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, index);
}
