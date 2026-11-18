
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/LevelLeaderboard.hpp>
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

auto LevelLeaderboard::registerWithTouchDispatcher() -> decltype(registerWithTouchDispatcher()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&LevelLeaderboard::registerWithTouchDispatcher), this);
	using FunctionType = decltype(registerWithTouchDispatcher())(*)(LevelLeaderboard*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x34d0ec, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto LevelLeaderboard::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&LevelLeaderboard::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(LevelLeaderboard*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x34d070, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto LevelLeaderboard::show() -> decltype(show()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&LevelLeaderboard::show), this);
	using FunctionType = decltype(show())(*)(LevelLeaderboard*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x34d5c4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto LevelLeaderboard::loadLeaderboardFinished(cocos2d::CCArray* scores, char const* key) -> decltype(loadLeaderboardFinished(scores, key)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCArray*, char const*>::func(&LevelLeaderboard::loadLeaderboardFinished), this);
	using FunctionType = decltype(loadLeaderboardFinished(scores, key))(*)(LevelLeaderboard*, cocos2d::CCArray*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x34d2f4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, scores, key);
}

auto LevelLeaderboard::loadLeaderboardFailed(char const* key) -> decltype(loadLeaderboardFailed(key)) {
	auto self = addresser::thunkAdjust(Resolve<char const*>::func(&LevelLeaderboard::loadLeaderboardFailed), this);
	using FunctionType = decltype(loadLeaderboardFailed(key))(*)(LevelLeaderboard*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x34d440, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, key);
}

auto LevelLeaderboard::FLAlert_Clicked(FLAlertLayer* layer, bool btn2) -> decltype(FLAlert_Clicked(layer, btn2)) {
	auto self = addresser::thunkAdjust(Resolve<FLAlertLayer*, bool>::func(&LevelLeaderboard::FLAlert_Clicked), this);
	using FunctionType = decltype(FLAlert_Clicked(layer, btn2))(*)(LevelLeaderboard*, FLAlertLayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x34cce8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, layer, btn2);
}

auto LevelLeaderboard::updateUserScoreFinished() -> decltype(updateUserScoreFinished()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&LevelLeaderboard::updateUserScoreFinished), this);
	using FunctionType = decltype(updateUserScoreFinished())(*)(LevelLeaderboard*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x34cee0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto LevelLeaderboard::updateUserScoreFailed() -> decltype(updateUserScoreFailed()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&LevelLeaderboard::updateUserScoreFailed), this);
	using FunctionType = decltype(updateUserScoreFailed())(*)(LevelLeaderboard*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x34ceec, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto LevelLeaderboard::deleteLocalScores() -> decltype(deleteLocalScores()) {
	using FunctionType = decltype(deleteLocalScores())(*)(LevelLeaderboard*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x34cb58, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto LevelLeaderboard::getLocalScores() -> decltype(getLocalScores()) {
	using FunctionType = decltype(getLocalScores())(*)(LevelLeaderboard*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x34cd80, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto LevelLeaderboard::getSpriteButton(std::string frame, cocos2d::SEL_MenuHandler selector, cocos2d::CCMenu* menu, float scale, cocos2d::CCPoint position, int button) -> decltype(getSpriteButton(frame, selector, menu, scale, position, button)) {
	using FunctionType = decltype(getSpriteButton(frame, selector, menu, scale, position, button))(*)(LevelLeaderboard*, std::string, cocos2d::SEL_MenuHandler, cocos2d::CCMenu*, float, cocos2d::CCPoint, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x34c33c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, frame, selector, menu, scale, position, button);
}

auto LevelLeaderboard::init(GJGameLevel* level, LevelLeaderboardType type, LevelLeaderboardMode mode) -> decltype(init(level, type, mode)) {
	using FunctionType = decltype(init(level, type, mode))(*)(LevelLeaderboard*, GJGameLevel*, LevelLeaderboardType, LevelLeaderboardMode);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x34b424, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, level, type, mode);
}

auto LevelLeaderboard::isCorrect(char const* key) -> decltype(isCorrect(key)) {
	using FunctionType = decltype(isCorrect(key))(*)(LevelLeaderboard*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x34d124, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, key);
}

auto LevelLeaderboard::loadScores() -> decltype(loadScores()) {
	using FunctionType = decltype(loadScores())(*)(LevelLeaderboard*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x34c7bc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto LevelLeaderboard::onChangeMode(cocos2d::CCObject* sender) -> decltype(onChangeMode(sender)) {
	using FunctionType = decltype(onChangeMode(sender))(*)(LevelLeaderboard*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x34c514, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto LevelLeaderboard::onChangeType(cocos2d::CCObject* sender) -> decltype(onChangeType(sender)) {
	using FunctionType = decltype(onChangeType(sender))(*)(LevelLeaderboard*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x34c748, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto LevelLeaderboard::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	using FunctionType = decltype(onClose(sender))(*)(LevelLeaderboard*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x34c63c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto LevelLeaderboard::onDeleteLocalScores(cocos2d::CCObject* sender) -> decltype(onDeleteLocalScores(sender)) {
	using FunctionType = decltype(onDeleteLocalScores(sender))(*)(LevelLeaderboard*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x34c564, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto LevelLeaderboard::onUpdate(cocos2d::CCObject* sender) -> decltype(onUpdate(sender)) {
	using FunctionType = decltype(onUpdate(sender))(*)(LevelLeaderboard*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x34c678, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto LevelLeaderboard::reloadLeaderboard(LevelLeaderboardType type, LevelLeaderboardMode mode) -> decltype(reloadLeaderboard(type, mode)) {
	using FunctionType = decltype(reloadLeaderboard(type, mode))(*)(LevelLeaderboard*, LevelLeaderboardType, LevelLeaderboardMode);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x34cf94, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, type, mode);
}

auto LevelLeaderboard::setupLeaderboard(cocos2d::CCArray* scores) -> decltype(setupLeaderboard(scores)) {
	using FunctionType = decltype(setupLeaderboard(scores))(*)(LevelLeaderboard*, cocos2d::CCArray*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x34c9c4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, scores);
}
