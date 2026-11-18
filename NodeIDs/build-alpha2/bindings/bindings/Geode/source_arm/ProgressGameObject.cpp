
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/ProgressGameObject.hpp>
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

auto ProgressGameObject::init() -> decltype(init()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&ProgressGameObject::init), this);
	using FunctionType = decltype(init())(*)(ProgressGameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x185d80, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto ProgressGameObject::customObjectSetup(std::vector<std::string>& p0, std::vector<void*>& p1) -> decltype(customObjectSetup(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<std::vector<std::string>&, std::vector<void*>&>::func(&ProgressGameObject::customObjectSetup), this);
	using FunctionType = decltype(customObjectSetup(p0, p1))(*)(ProgressGameObject*, std::vector<std::string>&, std::vector<void*>&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x186878, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto ProgressGameObject::getSaveString(GJBaseGameLayer* p0) -> decltype(getSaveString(p0)) {
	auto self = addresser::thunkAdjust(Resolve<GJBaseGameLayer*>::func(&ProgressGameObject::getSaveString), this);
	using FunctionType = decltype(getSaveString(p0))(*)(ProgressGameObject*, GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x185dd0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}
