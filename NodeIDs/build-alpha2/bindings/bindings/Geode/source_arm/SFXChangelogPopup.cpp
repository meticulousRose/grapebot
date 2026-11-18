
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/SFXChangelogPopup.hpp>
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

auto SFXChangelogPopup::buildContent(cocos2d::CCNode* p0, float p1, float p2) -> decltype(buildContent(p0, p1, p2)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCNode*, float, float>::func(&SFXChangelogPopup::buildContent), this);
	using FunctionType = decltype(buildContent(p0, p1, p2))(*)(SFXChangelogPopup*, cocos2d::CCNode*, float, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x84cd30, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1, p2);
}
