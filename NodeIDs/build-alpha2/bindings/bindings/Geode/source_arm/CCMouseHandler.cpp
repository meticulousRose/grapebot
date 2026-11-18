
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/mapping/CCMouseHandler.hpp>
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

auto cocos2d::CCMouseHandler::handlerWithDelegate(cocos2d::CCMouseDelegate* p0) -> decltype(handlerWithDelegate(p0)) {
	using FunctionType = decltype(handlerWithDelegate(p0))(*)(cocos2d::CCMouseDelegate*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x218258, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0);
}

auto cocos2d::CCMouseHandler::initWithDelegate(cocos2d::CCMouseDelegate* p0) -> decltype(initWithDelegate(p0)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCMouseDelegate*>::func(&cocos2d::CCMouseHandler::initWithDelegate), this);
	using FunctionType = decltype(initWithDelegate(p0))(*)(cocos2d::CCMouseHandler*, cocos2d::CCMouseDelegate*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x218204, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}
