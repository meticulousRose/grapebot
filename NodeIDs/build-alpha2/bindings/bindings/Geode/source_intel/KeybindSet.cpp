
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/KeybindSet.hpp>
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

auto KeybindSet::chordsForAction(int action) -> decltype(chordsForAction(action)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&KeybindSet::chordsForAction), this);
	using FunctionType = decltype(chordsForAction(action))(*)(KeybindSet*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x9250b0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, action);
}

auto KeybindSet::actionsForChord(int chord) -> decltype(actionsForChord(chord)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&KeybindSet::actionsForChord), this);
	using FunctionType = decltype(actionsForChord(chord))(*)(KeybindSet*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x925190, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, chord);
}

auto KeybindSet::bindChord(int chord, int action) -> decltype(bindChord(chord, action)) {
	auto self = addresser::thunkAdjust(Resolve<int, int>::func(&KeybindSet::bindChord), this);
	using FunctionType = decltype(bindChord(chord, action))(*)(KeybindSet*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x9253a0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, chord, action);
}

auto KeybindSet::unbindChord(int chord, int action) -> decltype(unbindChord(chord, action)) {
	auto self = addresser::thunkAdjust(Resolve<int, int>::func(&KeybindSet::unbindChord), this);
	using FunctionType = decltype(unbindChord(chord, action))(*)(KeybindSet*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x9254e0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, chord, action);
}
