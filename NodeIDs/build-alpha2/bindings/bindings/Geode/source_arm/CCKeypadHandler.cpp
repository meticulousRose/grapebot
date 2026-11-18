
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/mapping/CCKeypadHandler.hpp>
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

auto cocos2d::CCKeypadHandler::handlerWithDelegate(cocos2d::CCKeypadDelegate* p0) -> decltype(handlerWithDelegate(p0)) {
	using FunctionType = decltype(handlerWithDelegate(p0))(*)(cocos2d::CCKeypadDelegate*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3322ec, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0);
}

auto cocos2d::CCKeypadHandler::initWithDelegate(cocos2d::CCKeypadDelegate* p0) -> decltype(initWithDelegate(p0)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCKeypadDelegate*>::func(&cocos2d::CCKeypadHandler::initWithDelegate), this);
	using FunctionType = decltype(initWithDelegate(p0))(*)(cocos2d::CCKeypadHandler*, cocos2d::CCKeypadDelegate*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x332298, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}
