
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/GJThreadCell.hpp>
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

auto GJThreadCell::init() -> decltype(init()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GJThreadCell::init), this);
	using FunctionType = decltype(init())(*)(GJThreadCell*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1ebb70, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GJThreadCell::draw() -> decltype(draw()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GJThreadCell::draw), this);
	using FunctionType = decltype(draw())(*)(GJThreadCell*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1ebf60, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GJThreadCell::loadFromThread(GJMessageThread* p0) -> decltype(loadFromThread(p0)) {
	using FunctionType = decltype(loadFromThread(p0))(*)(GJThreadCell*, GJMessageThread*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1df140, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto GJThreadCell::onViewThread(cocos2d::CCObject* sender) -> decltype(onViewThread(sender)) {
	using FunctionType = decltype(onViewThread(sender))(*)(GJThreadCell*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1ebf38, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}
