
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/GJChallengeItem.hpp>
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

auto GJChallengeItem::create() -> decltype(create()) {
	using FunctionType = decltype(create())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4fe8c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto GJChallengeItem::create(GJChallengeType challengeType, int goal, int reward, int timeLeft, std::string questName) -> decltype(create(challengeType, goal, reward, timeLeft, questName)) {
	using FunctionType = decltype(create(challengeType, goal, reward, timeLeft, questName))(*)(GJChallengeType, int, int, int, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4fd3c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(challengeType, goal, reward, timeLeft, questName);
}

auto GJChallengeItem::createFromString(std::string string) -> decltype(createFromString(string)) {
	using FunctionType = decltype(createFromString(string))(*)(std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4fb3c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(string);
}

auto GJChallengeItem::createWithCoder(DS_Dictionary* dict) -> decltype(createWithCoder(dict)) {
	using FunctionType = decltype(createWithCoder(dict))(*)(DS_Dictionary*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4ff50, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(dict);
}

auto GJChallengeItem::encodeWithCoder(DS_Dictionary* dict) -> decltype(encodeWithCoder(dict)) {
	auto self = addresser::thunkAdjust(Resolve<DS_Dictionary*>::func(&GJChallengeItem::encodeWithCoder), this);
	using FunctionType = decltype(encodeWithCoder(dict))(*)(GJChallengeItem*, DS_Dictionary*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x500f8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, dict);
}

auto GJChallengeItem::canEncode() -> decltype(canEncode()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GJChallengeItem::canEncode), this);
	using FunctionType = decltype(canEncode())(*)(GJChallengeItem*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x501d4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GJChallengeItem::dataLoaded(DS_Dictionary* dict) -> decltype(dataLoaded(dict)) {
	using FunctionType = decltype(dataLoaded(dict))(*)(GJChallengeItem*, DS_Dictionary*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4ffa4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, dict);
}

auto GJChallengeItem::incrementCount(int add) -> decltype(incrementCount(add)) {
	using FunctionType = decltype(incrementCount(add))(*)(GJChallengeItem*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x33004, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, add);
}

auto GJChallengeItem::init(GJChallengeType challengeType, int goal, int reward, int timeLeft, std::string questName) -> decltype(init(challengeType, goal, reward, timeLeft, questName)) {
	using FunctionType = decltype(init(challengeType, goal, reward, timeLeft, questName))(*)(GJChallengeItem*, GJChallengeType, int, int, int, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4fec4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, challengeType, goal, reward, timeLeft, questName);
}
