
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/CommentCell.hpp>
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

auto CommentCell::init() -> decltype(init()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&CommentCell::init), this);
	using FunctionType = decltype(init())(*)(CommentCell*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x23dda0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto CommentCell::draw() -> decltype(draw()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&CommentCell::draw), this);
	using FunctionType = decltype(draw())(*)(CommentCell*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x23e2e0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto CommentCell::likedItem(LikeItemType type, int id, bool liked) -> decltype(likedItem(type, id, liked)) {
	auto self = addresser::thunkAdjust(Resolve<LikeItemType, int, bool>::func(&CommentCell::likedItem), this);
	using FunctionType = decltype(likedItem(type, id, liked))(*)(CommentCell*, LikeItemType, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x23e3b0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, type, id, liked);
}

auto CommentCell::FLAlert_Clicked(FLAlertLayer* layer, bool btn2) -> decltype(FLAlert_Clicked(layer, btn2)) {
	auto self = addresser::thunkAdjust(Resolve<FLAlertLayer*, bool>::func(&CommentCell::FLAlert_Clicked), this);
	using FunctionType = decltype(FLAlert_Clicked(layer, btn2))(*)(CommentCell*, FLAlertLayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x23e7a0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, layer, btn2);
}

auto CommentCell::incrementDislikes() -> decltype(incrementDislikes()) {
	using FunctionType = decltype(incrementDislikes())(*)(CommentCell*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x23e550, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto CommentCell::incrementLikes() -> decltype(incrementLikes()) {
	using FunctionType = decltype(incrementLikes())(*)(CommentCell*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x23e4a0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto CommentCell::loadFromComment(GJComment* comment) -> decltype(loadFromComment(comment)) {
	using FunctionType = decltype(loadFromComment(comment))(*)(CommentCell*, GJComment*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x22d440, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, comment);
}

auto CommentCell::onConfirmDelete(cocos2d::CCObject* sender) -> decltype(onConfirmDelete(sender)) {
	using FunctionType = decltype(onConfirmDelete(sender))(*)(CommentCell*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x23e0d0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CommentCell::onUndelete() -> decltype(onUndelete()) {
	using FunctionType = decltype(onUndelete())(*)(CommentCell*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x23e780, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto CommentCell::onUnhide(cocos2d::CCObject* sender) -> decltype(onUnhide(sender)) {
	using FunctionType = decltype(onUnhide(sender))(*)(CommentCell*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x23df50, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CommentCell::onViewProfile(cocos2d::CCObject* sender) -> decltype(onViewProfile(sender)) {
	using FunctionType = decltype(onViewProfile(sender))(*)(CommentCell*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x23ddd0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CommentCell::updateBGColor(int index) -> decltype(updateBGColor(index)) {
	using FunctionType = decltype(updateBGColor(index))(*)(CommentCell*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x22f7a0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, index);
}

auto CommentCell::updateLabelValues() -> decltype(updateLabelValues()) {
	using FunctionType = decltype(updateLabelValues())(*)(CommentCell*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x23e620, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}
