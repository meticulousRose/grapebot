
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/SectionedContentNode.hpp>
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

auto SectionedContentNode::addChild(cocos2d::CCNode* p0, int p1, int p2) -> decltype(addChild(p0, p1, p2)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCNode*, int, int>::func(&SectionedContentNode::addChild), this);
	using FunctionType = decltype(addChild(p0, p1, p2))(*)(SectionedContentNode*, cocos2d::CCNode*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x84ac70, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1, p2);
}

auto SectionedContentNode::removeAllChildrenWithCleanup(bool p0) -> decltype(removeAllChildrenWithCleanup(p0)) {
	auto self = addresser::thunkAdjust(Resolve<bool>::func(&SectionedContentNode::removeAllChildrenWithCleanup), this);
	using FunctionType = decltype(removeAllChildrenWithCleanup(p0))(*)(SectionedContentNode*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x84ac88, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}
