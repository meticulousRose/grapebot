
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/GJMultiplayerManager.hpp>
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

auto GJMultiplayerManager::sharedState() -> decltype(sharedState()) {
	using FunctionType = decltype(sharedState())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x7381a0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto GJMultiplayerManager::init() -> decltype(init()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GJMultiplayerManager::init), this);
	using FunctionType = decltype(init())(*)(GJMultiplayerManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x739920, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GJMultiplayerManager::addComment(std::string str, int lobbyID) -> decltype(addComment(str, lobbyID)) {
	using FunctionType = decltype(addComment(str, lobbyID))(*)(GJMultiplayerManager*, std::string, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x73a550, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, str, lobbyID);
}

auto GJMultiplayerManager::createAndAddComment(std::string text, int lobbyID) -> decltype(createAndAddComment(text, lobbyID)) {
	using FunctionType = decltype(createAndAddComment(text, lobbyID))(*)(GJMultiplayerManager*, std::string, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x73b3d0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, text, lobbyID);
}

auto GJMultiplayerManager::dataLoaded(DS_Dictionary* dict) -> decltype(dataLoaded(dict)) {
	using FunctionType = decltype(dataLoaded(dict))(*)(GJMultiplayerManager*, DS_Dictionary*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x73b5a0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, dict);
}

auto GJMultiplayerManager::encodeDataTo(DS_Dictionary* dict) -> decltype(encodeDataTo(dict)) {
	using FunctionType = decltype(encodeDataTo(dict))(*)(GJMultiplayerManager*, DS_Dictionary*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x73b590, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, dict);
}

auto GJMultiplayerManager::exitLobby(int id) -> decltype(exitLobby(id)) {
	using FunctionType = decltype(exitLobby(id))(*)(GJMultiplayerManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x73a760, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto GJMultiplayerManager::firstSetup() -> decltype(firstSetup()) {
	using FunctionType = decltype(firstSetup())(*)(GJMultiplayerManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x73b580, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJMultiplayerManager::getBasePostString() -> decltype(getBasePostString()) {
	using FunctionType = decltype(getBasePostString())(*)(GJMultiplayerManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x73a010, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJMultiplayerManager::getLastCommentIDForGame(int id) -> decltype(getLastCommentIDForGame(id)) {
	using FunctionType = decltype(getLastCommentIDForGame(id))(*)(GJMultiplayerManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x73a100, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto GJMultiplayerManager::handleIt(bool success, std::string response, std::string tag, GJHttpType type) -> decltype(handleIt(success, response, tag, type)) {
	using FunctionType = decltype(handleIt(success, response, tag, type))(*)(GJMultiplayerManager*, bool, std::string, std::string, GJHttpType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x7386e0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, success, response, tag, type);
}

auto GJMultiplayerManager::handleItDelayed(bool success, std::string response, std::string tag, GJHttpType type) -> decltype(handleItDelayed(success, response, tag, type)) {
	using FunctionType = decltype(handleItDelayed(success, response, tag, type))(*)(GJMultiplayerManager*, bool, std::string, std::string, GJHttpType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x738b30, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, success, response, tag, type);
}

auto GJMultiplayerManager::handleItND(cocos2d::CCNode* node, void* data) -> decltype(handleItND(node, data)) {
	using FunctionType = decltype(handleItND(node, data))(*)(GJMultiplayerManager*, cocos2d::CCNode*, void*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x738c70, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, node, data);
}

auto GJMultiplayerManager::joinLobby(int id) -> decltype(joinLobby(id)) {
	using FunctionType = decltype(joinLobby(id))(*)(GJMultiplayerManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x739c90, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto GJMultiplayerManager::onExitLobbyCompleted(std::string response, std::string tag) -> decltype(onExitLobbyCompleted(response, tag)) {
	using FunctionType = decltype(onExitLobbyCompleted(response, tag))(*)(GJMultiplayerManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x7396c0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GJMultiplayerManager::onJoinLobbyCompleted(std::string response, std::string tag) -> decltype(onJoinLobbyCompleted(response, tag)) {
	using FunctionType = decltype(onJoinLobbyCompleted(response, tag))(*)(GJMultiplayerManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x738d90, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GJMultiplayerManager::onProcessHttpRequestCompleted(cocos2d::extension::CCHttpClient* client, cocos2d::extension::CCHttpResponse* response) -> decltype(onProcessHttpRequestCompleted(client, response)) {
	using FunctionType = decltype(onProcessHttpRequestCompleted(client, response))(*)(GJMultiplayerManager*, cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x738520, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, client, response);
}

auto GJMultiplayerManager::onUploadCommentCompleted(std::string response, std::string tag) -> decltype(onUploadCommentCompleted(response, tag)) {
	using FunctionType = decltype(onUploadCommentCompleted(response, tag))(*)(GJMultiplayerManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x7397a0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GJMultiplayerManager::ProcessHttpRequest(std::string url, std::string params, std::string tag, GJHttpType type) -> decltype(ProcessHttpRequest(url, params, tag, type)) {
	using FunctionType = decltype(ProcessHttpRequest(url, params, tag, type))(*)(GJMultiplayerManager*, std::string, std::string, std::string, GJHttpType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x738220, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, url, params, tag, type);
}

auto GJMultiplayerManager::removeDLFromActive(char const* tag) -> decltype(removeDLFromActive(tag)) {
	using FunctionType = decltype(removeDLFromActive(tag))(*)(GJMultiplayerManager*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x739bb0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, tag);
}

auto GJMultiplayerManager::uploadComment(std::string text, int lobbyID) -> decltype(uploadComment(text, lobbyID)) {
	using FunctionType = decltype(uploadComment(text, lobbyID))(*)(GJMultiplayerManager*, std::string, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x73aa40, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, text, lobbyID);
}
