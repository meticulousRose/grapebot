
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/LevelSearchLayer.hpp>
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

auto LevelSearchLayer::create(int type) -> decltype(create(type)) {
	using FunctionType = decltype(create(type))(*)(int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x396fb0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(type);
}

auto LevelSearchLayer::scene(int type) -> decltype(scene(type)) {
	using FunctionType = decltype(scene(type))(*)(int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x396ec4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(type);
}

auto LevelSearchLayer::keyDown(cocos2d::enumKeyCodes p0, double p1) -> decltype(keyDown(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::enumKeyCodes, double>::func(&LevelSearchLayer::keyDown), this);
	using FunctionType = decltype(keyDown(p0, p1))(*)(LevelSearchLayer*, cocos2d::enumKeyCodes, double);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x61a81c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto LevelSearchLayer::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&LevelSearchLayer::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(LevelSearchLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x61a76c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto LevelSearchLayer::textInputOpened(CCTextInputNode* node) -> decltype(textInputOpened(node)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&LevelSearchLayer::textInputOpened), this);
	using FunctionType = decltype(textInputOpened(node))(*)(LevelSearchLayer*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x619c8c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, node);
}

auto LevelSearchLayer::textInputClosed(CCTextInputNode* node) -> decltype(textInputClosed(node)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&LevelSearchLayer::textInputClosed), this);
	using FunctionType = decltype(textInputClosed(node))(*)(LevelSearchLayer*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x619d6c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, node);
}

auto LevelSearchLayer::textChanged(CCTextInputNode* node) -> decltype(textChanged(node)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&LevelSearchLayer::textChanged), this);
	using FunctionType = decltype(textChanged(node))(*)(LevelSearchLayer*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x619e7c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, node);
}

auto LevelSearchLayer::FLAlert_Clicked(FLAlertLayer* layer, bool btn2) -> decltype(FLAlert_Clicked(layer, btn2)) {
	auto self = addresser::thunkAdjust(Resolve<FLAlertLayer*, bool>::func(&LevelSearchLayer::FLAlert_Clicked), this);
	using FunctionType = decltype(FLAlert_Clicked(layer, btn2))(*)(LevelSearchLayer*, FLAlertLayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x619bf4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, layer, btn2);
}

auto LevelSearchLayer::demonFilterSelectClosed(int filter) -> decltype(demonFilterSelectClosed(filter)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&LevelSearchLayer::demonFilterSelectClosed), this);
	using FunctionType = decltype(demonFilterSelectClosed(filter))(*)(LevelSearchLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x619738, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, filter);
}

auto LevelSearchLayer::clearFilters() -> decltype(clearFilters()) {
	using FunctionType = decltype(clearFilters())(*)(LevelSearchLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x619064, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto LevelSearchLayer::confirmClearFilters(cocos2d::CCObject* sender) -> decltype(confirmClearFilters(sender)) {
	using FunctionType = decltype(confirmClearFilters(sender))(*)(LevelSearchLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x617d34, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto LevelSearchLayer::getDiffKey(int diff) -> decltype(getDiffKey(diff)) {
	using FunctionType = decltype(getDiffKey(diff))(*)(LevelSearchLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x61959c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, diff);
}

auto LevelSearchLayer::getLevelLenKey() -> decltype(getLevelLenKey()) {
	using FunctionType = decltype(getLevelLenKey())(*)(LevelSearchLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x61a3ec, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto LevelSearchLayer::getSearchDiffKey() -> decltype(getSearchDiffKey()) {
	using FunctionType = decltype(getSearchDiffKey())(*)(LevelSearchLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x61a2f4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto LevelSearchLayer::getSearchObject(SearchType type, std::string query) -> decltype(getSearchObject(type, query)) {
	using FunctionType = decltype(getSearchObject(type, query))(*)(LevelSearchLayer*, SearchType, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x619fa0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, type, query);
}

auto LevelSearchLayer::getTimeKey(int time) -> decltype(getTimeKey(time)) {
	using FunctionType = decltype(getTimeKey(time))(*)(LevelSearchLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x61a744, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, time);
}

auto LevelSearchLayer::init(int type) -> decltype(init(type)) {
	using FunctionType = decltype(init(type))(*)(LevelSearchLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x6154b8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, type);
}

auto LevelSearchLayer::onBack(cocos2d::CCObject* sender) -> decltype(onBack(sender)) {
	using FunctionType = decltype(onBack(sender))(*)(LevelSearchLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x619230, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto LevelSearchLayer::onClearFreeSearch(cocos2d::CCObject* sender) -> decltype(onClearFreeSearch(sender)) {
	using FunctionType = decltype(onClearFreeSearch(sender))(*)(LevelSearchLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x618468, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto LevelSearchLayer::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	using FunctionType = decltype(onClose(sender))(*)(LevelSearchLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x619f8c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto LevelSearchLayer::onFriends(cocos2d::CCObject* sender) -> decltype(onFriends(sender)) {
	using FunctionType = decltype(onFriends(sender))(*)(LevelSearchLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x6188bc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto LevelSearchLayer::onMoreOptions(cocos2d::CCObject* sender) -> decltype(onMoreOptions(sender)) {
	using FunctionType = decltype(onMoreOptions(sender))(*)(LevelSearchLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x617e14, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto LevelSearchLayer::onSearch(cocos2d::CCObject* sender) -> decltype(onSearch(sender)) {
	using FunctionType = decltype(onSearch(sender))(*)(LevelSearchLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x6181a8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto LevelSearchLayer::onSearchMode(cocos2d::CCObject* sender) -> decltype(onSearchMode(sender)) {
	using FunctionType = decltype(onSearchMode(sender))(*)(LevelSearchLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x617e30, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto LevelSearchLayer::onSearchUser(cocos2d::CCObject* sender) -> decltype(onSearchUser(sender)) {
	using FunctionType = decltype(onSearchUser(sender))(*)(LevelSearchLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x618330, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto LevelSearchLayer::onSpecialDemon(cocos2d::CCObject* sender) -> decltype(onSpecialDemon(sender)) {
	using FunctionType = decltype(onSpecialDemon(sender))(*)(LevelSearchLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x618e84, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto LevelSearchLayer::onStarAward(cocos2d::CCObject* sender) -> decltype(onStarAward(sender)) {
	using FunctionType = decltype(onStarAward(sender))(*)(LevelSearchLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x618928, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto LevelSearchLayer::toggleDifficulty(cocos2d::CCObject* sender) -> decltype(toggleDifficulty(sender)) {
	using FunctionType = decltype(toggleDifficulty(sender))(*)(LevelSearchLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x618994, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto LevelSearchLayer::toggleDifficultyNum(int diff, bool enabled) -> decltype(toggleDifficultyNum(diff, enabled)) {
	using FunctionType = decltype(toggleDifficultyNum(diff, enabled))(*)(LevelSearchLayer*, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x619288, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, diff, enabled);
}

auto LevelSearchLayer::toggleTime(cocos2d::CCObject* sender) -> decltype(toggleTime(sender)) {
	using FunctionType = decltype(toggleTime(sender))(*)(LevelSearchLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x618ec0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto LevelSearchLayer::toggleTimeNum(int time, bool enabled) -> decltype(toggleTimeNum(time, enabled)) {
	using FunctionType = decltype(toggleTimeNum(time, enabled))(*)(LevelSearchLayer*, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x61940c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, time, enabled);
}

auto LevelSearchLayer::updateSearchLabel(char const* label) -> decltype(updateSearchLabel(label)) {
	using FunctionType = decltype(updateSearchLabel(label))(*)(LevelSearchLayer*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x617e74, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, label);
}
