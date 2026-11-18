
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/GJOptionsLayer.hpp>
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

auto GJOptionsLayer::setupOptions() -> decltype(setupOptions()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GJOptionsLayer::setupOptions), this);
	using FunctionType = decltype(setupOptions())(*)(GJOptionsLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x22be24, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GJOptionsLayer::addGVToggle(char const* title, char const* variable, char const* description) -> decltype(addGVToggle(title, variable, description)) {
	using FunctionType = decltype(addGVToggle(title, variable, description))(*)(GJOptionsLayer*, char const*, char const*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x331580, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, title, variable, description);
}

auto GJOptionsLayer::addToggle(char const* title, int id, bool initial, char const* description) -> decltype(addToggle(title, id, initial, description)) {
	using FunctionType = decltype(addToggle(title, id, initial, description))(*)(GJOptionsLayer*, char const*, int, bool, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x22c4f8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, title, id, initial, description);
}

auto GJOptionsLayer::nextPosition(int page) -> decltype(nextPosition(page)) {
	using FunctionType = decltype(nextPosition(page))(*)(GJOptionsLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x22c4fc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, page);
}

auto GJOptionsLayer::objectKey(int page) -> decltype(objectKey(page)) {
	using FunctionType = decltype(objectKey(page))(*)(GJOptionsLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x77b374, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, page);
}

auto GJOptionsLayer::offsetToNextPage() -> decltype(offsetToNextPage()) {
	using FunctionType = decltype(offsetToNextPage())(*)(GJOptionsLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x22be00, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJOptionsLayer::onToggle(cocos2d::CCObject* sender) -> decltype(onToggle(sender)) {
	using FunctionType = decltype(onToggle(sender))(*)(GJOptionsLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x22c7d4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto GJOptionsLayer::pageKey(int page) -> decltype(pageKey(page)) {
	using FunctionType = decltype(pageKey(page))(*)(GJOptionsLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x77b34c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, page);
}
