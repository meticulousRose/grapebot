
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/mapping/CCAtlasNode.hpp>
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

auto cocos2d::CCAtlasNode::create(char const* p0, unsigned int p1, unsigned int p2, unsigned int p3) -> decltype(create(p0, p1, p2, p3)) {
	using FunctionType = decltype(create(p0, p1, p2, p3))(*)(char const*, unsigned int, unsigned int, unsigned int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2a8184, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1, p2, p3);
}

auto cocos2d::CCAtlasNode::getTextureAtlas() -> decltype(getTextureAtlas()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&cocos2d::CCAtlasNode::getTextureAtlas), this);
	using FunctionType = decltype(getTextureAtlas())(*)(cocos2d::CCAtlasNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2a8a9c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto cocos2d::CCAtlasNode::setTextureAtlas(cocos2d::CCTextureAtlas* p0) -> decltype(setTextureAtlas(p0)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTextureAtlas*>::func(&cocos2d::CCAtlasNode::setTextureAtlas), this);
	using FunctionType = decltype(setTextureAtlas(p0))(*)(cocos2d::CCAtlasNode*, cocos2d::CCTextureAtlas*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2a8a60, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto cocos2d::CCAtlasNode::getBlendFunc() -> decltype(getBlendFunc()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&cocos2d::CCAtlasNode::getBlendFunc), this);
	using FunctionType = decltype(getBlendFunc())(*)(cocos2d::CCAtlasNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2a8944, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto cocos2d::CCAtlasNode::setBlendFunc(cocos2d::ccBlendFunc p0) -> decltype(setBlendFunc(p0)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::ccBlendFunc>::func(&cocos2d::CCAtlasNode::setBlendFunc), this);
	using FunctionType = decltype(setBlendFunc(p0))(*)(cocos2d::CCAtlasNode*, cocos2d::ccBlendFunc);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2a8958, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto cocos2d::CCAtlasNode::getQuadsToDraw() -> decltype(getQuadsToDraw()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&cocos2d::CCAtlasNode::getQuadsToDraw), this);
	using FunctionType = decltype(getQuadsToDraw())(*)(cocos2d::CCAtlasNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2a8aa4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto cocos2d::CCAtlasNode::setQuadsToDraw(unsigned int p0) -> decltype(setQuadsToDraw(p0)) {
	auto self = addresser::thunkAdjust(Resolve<unsigned int>::func(&cocos2d::CCAtlasNode::setQuadsToDraw), this);
	using FunctionType = decltype(setQuadsToDraw(p0))(*)(cocos2d::CCAtlasNode*, unsigned int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2a8aac, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto cocos2d::CCAtlasNode::updateAtlasValues() -> decltype(updateAtlasValues()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&cocos2d::CCAtlasNode::updateAtlasValues), this);
	using FunctionType = decltype(updateAtlasValues())(*)(cocos2d::CCAtlasNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2a8574, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto cocos2d::CCAtlasNode::draw() -> decltype(draw()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&cocos2d::CCAtlasNode::draw), this);
	using FunctionType = decltype(draw())(*)(cocos2d::CCAtlasNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2a8578, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto cocos2d::CCAtlasNode::getTexture() -> decltype(getTexture()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&cocos2d::CCAtlasNode::getTexture), this);
	using FunctionType = decltype(getTexture())(*)(cocos2d::CCAtlasNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2a8a40, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto cocos2d::CCAtlasNode::setTexture(cocos2d::CCTexture2D* p0) -> decltype(setTexture(p0)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTexture2D*>::func(&cocos2d::CCAtlasNode::setTexture), this);
	using FunctionType = decltype(setTexture(p0))(*)(cocos2d::CCAtlasNode*, cocos2d::CCTexture2D*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2a896c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto cocos2d::CCAtlasNode::isOpacityModifyRGB() -> decltype(isOpacityModifyRGB()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&cocos2d::CCAtlasNode::isOpacityModifyRGB), this);
	using FunctionType = decltype(isOpacityModifyRGB())(*)(cocos2d::CCAtlasNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2a892c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto cocos2d::CCAtlasNode::setOpacityModifyRGB(bool p0) -> decltype(setOpacityModifyRGB(p0)) {
	auto self = addresser::thunkAdjust(Resolve<bool>::func(&cocos2d::CCAtlasNode::setOpacityModifyRGB), this);
	using FunctionType = decltype(setOpacityModifyRGB(p0))(*)(cocos2d::CCAtlasNode*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2a8864, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto cocos2d::CCAtlasNode::getColor() -> decltype(getColor()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&cocos2d::CCAtlasNode::getColor), this);
	using FunctionType = decltype(getColor())(*)(cocos2d::CCAtlasNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2a8684, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto cocos2d::CCAtlasNode::setColor(cocos2d::ccColor3B const& p0) -> decltype(setColor(p0)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::ccColor3B const&>::func(&cocos2d::CCAtlasNode::setColor), this);
	using FunctionType = decltype(setColor(p0))(*)(cocos2d::CCAtlasNode*, cocos2d::ccColor3B const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2a86b8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto cocos2d::CCAtlasNode::setOpacity(unsigned char p0) -> decltype(setOpacity(p0)) {
	auto self = addresser::thunkAdjust(Resolve<unsigned char>::func(&cocos2d::CCAtlasNode::setOpacity), this);
	using FunctionType = decltype(setOpacity(p0))(*)(cocos2d::CCAtlasNode*, unsigned char);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2a87cc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto cocos2d::CCAtlasNode::calculateMaxItems() -> decltype(calculateMaxItems()) {
	using FunctionType = decltype(calculateMaxItems())(*)(cocos2d::CCAtlasNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2a84ec, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto cocos2d::CCAtlasNode::initWithTexture(cocos2d::CCTexture2D* p0, unsigned int p1, unsigned int p2, unsigned int p3) -> decltype(initWithTexture(p0, p1, p2, p3)) {
	using FunctionType = decltype(initWithTexture(p0, p1, p2, p3))(*)(cocos2d::CCAtlasNode*, cocos2d::CCTexture2D*, unsigned int, unsigned int, unsigned int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2a82d8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1, p2, p3);
}

auto cocos2d::CCAtlasNode::initWithTileFile(char const* p0, unsigned int p1, unsigned int p2, unsigned int p3) -> decltype(initWithTileFile(p0, p1, p2, p3)) {
	using FunctionType = decltype(initWithTileFile(p0, p1, p2, p3))(*)(cocos2d::CCAtlasNode*, char const*, unsigned int, unsigned int, unsigned int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2a8278, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1, p2, p3);
}

auto cocos2d::CCAtlasNode::setIgnoreContentScaleFactor(bool p0) -> decltype(setIgnoreContentScaleFactor(p0)) {
	using FunctionType = decltype(setIgnoreContentScaleFactor(p0))(*)(cocos2d::CCAtlasNode*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2a893c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto cocos2d::CCAtlasNode::updateBlendFunc() -> decltype(updateBlendFunc()) {
	using FunctionType = decltype(updateBlendFunc())(*)(cocos2d::CCAtlasNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2a8474, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto cocos2d::CCAtlasNode::updateOpacityModifyRGB() -> decltype(updateOpacityModifyRGB()) {
	using FunctionType = decltype(updateOpacityModifyRGB())(*)(cocos2d::CCAtlasNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2a84b8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}
