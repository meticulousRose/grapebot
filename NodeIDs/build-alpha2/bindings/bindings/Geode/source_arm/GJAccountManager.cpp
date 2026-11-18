
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/GJAccountManager.hpp>
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

auto GJAccountManager::sharedState() -> decltype(sharedState()) {
	using FunctionType = decltype(sharedState())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8d410, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto GJAccountManager::init() -> decltype(init()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GJAccountManager::init), this);
	using FunctionType = decltype(init())(*)(GJAccountManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8fb24, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GJAccountManager::backupAccount(std::string url) -> decltype(backupAccount(url)) {
	using FunctionType = decltype(backupAccount(url))(*)(GJAccountManager*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x9116c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, url);
}

auto GJAccountManager::dataLoaded(DS_Dictionary* dict) -> decltype(dataLoaded(dict)) {
	using FunctionType = decltype(dataLoaded(dict))(*)(GJAccountManager*, DS_Dictionary*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x923a4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, dict);
}

auto GJAccountManager::encodeDataTo(DS_Dictionary* dict) -> decltype(encodeDataTo(dict)) {
	using FunctionType = decltype(encodeDataTo(dict))(*)(GJAccountManager*, DS_Dictionary*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x9234c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, dict);
}

auto GJAccountManager::firstSetup() -> decltype(firstSetup()) {
	using FunctionType = decltype(firstSetup())(*)(GJAccountManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x92348, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJAccountManager::getShaPassword(std::string password) -> decltype(getShaPassword(password)) {
	using FunctionType = decltype(getShaPassword(password))(*)(GJAccountManager*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x92578, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, password);
}

auto GJAccountManager::handleIt(bool success, std::string response, std::string tag, GJHttpType type) -> decltype(handleIt(success, response, tag, type)) {
	using FunctionType = decltype(handleIt(success, response, tag, type))(*)(GJAccountManager*, bool, std::string, std::string, GJHttpType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8d800, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, success, response, tag, type);
}

auto GJAccountManager::handleItDelayed(bool success, std::string response, std::string tag, GJHttpType type) -> decltype(handleItDelayed(success, response, tag, type)) {
	using FunctionType = decltype(handleItDelayed(success, response, tag, type))(*)(GJAccountManager*, bool, std::string, std::string, GJHttpType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8df64, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, success, response, tag, type);
}

auto GJAccountManager::handleItND(cocos2d::CCNode* node, void* data) -> decltype(handleItND(node, data)) {
	using FunctionType = decltype(handleItND(node, data))(*)(GJAccountManager*, cocos2d::CCNode*, void*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8e0d0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, node, data);
}

auto GJAccountManager::linkToAccount(std::string username, std::string gjp2, int accountID, int userID) -> decltype(linkToAccount(username, gjp2, accountID, userID)) {
	using FunctionType = decltype(linkToAccount(username, gjp2, accountID, userID))(*)(GJAccountManager*, std::string, std::string, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x7ff8c0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, username, gjp2, accountID, userID);
}

auto GJAccountManager::loginAccount(std::string username, std::string gjp2) -> decltype(loginAccount(username, gjp2)) {
	using FunctionType = decltype(loginAccount(username, gjp2))(*)(GJAccountManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x905d0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, username, gjp2);
}

auto GJAccountManager::onBackupAccountCompleted(std::string response, std::string tag) -> decltype(onBackupAccountCompleted(response, tag)) {
	using FunctionType = decltype(onBackupAccountCompleted(response, tag))(*)(GJAccountManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8e654, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GJAccountManager::onGetAccountBackupURLCompleted(std::string response, std::string tag) -> decltype(onGetAccountBackupURLCompleted(response, tag)) {
	using FunctionType = decltype(onGetAccountBackupURLCompleted(response, tag))(*)(GJAccountManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8f60c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GJAccountManager::onGetAccountSyncURLCompleted(std::string response, std::string tag) -> decltype(onGetAccountSyncURLCompleted(response, tag)) {
	using FunctionType = decltype(onGetAccountSyncURLCompleted(response, tag))(*)(GJAccountManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8f834, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GJAccountManager::onLoginAccountCompleted(std::string response, std::string tag) -> decltype(onLoginAccountCompleted(response, tag)) {
	using FunctionType = decltype(onLoginAccountCompleted(response, tag))(*)(GJAccountManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8e2f8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GJAccountManager::onProcessHttpRequestCompleted(cocos2d::extension::CCHttpClient* client, cocos2d::extension::CCHttpResponse* response) -> decltype(onProcessHttpRequestCompleted(client, response)) {
	using FunctionType = decltype(onProcessHttpRequestCompleted(client, response))(*)(GJAccountManager*, cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8d610, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, client, response);
}

auto GJAccountManager::onRegisterAccountCompleted(std::string response, std::string tag) -> decltype(onRegisterAccountCompleted(response, tag)) {
	using FunctionType = decltype(onRegisterAccountCompleted(response, tag))(*)(GJAccountManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8e1f4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GJAccountManager::onSyncAccountCompleted(std::string response, std::string tag) -> decltype(onSyncAccountCompleted(response, tag)) {
	using FunctionType = decltype(onSyncAccountCompleted(response, tag))(*)(GJAccountManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8e900, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GJAccountManager::onUpdateAccountSettingsCompleted(std::string response, std::string tag) -> decltype(onUpdateAccountSettingsCompleted(response, tag)) {
	using FunctionType = decltype(onUpdateAccountSettingsCompleted(response, tag))(*)(GJAccountManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8f540, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GJAccountManager::ProcessHttpRequest(std::string url, std::string params, std::string tag, GJHttpType type) -> decltype(ProcessHttpRequest(url, params, tag, type)) {
	using FunctionType = decltype(ProcessHttpRequest(url, params, tag, type))(*)(GJAccountManager*, std::string, std::string, std::string, GJHttpType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8d4bc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, url, params, tag, type);
}

auto GJAccountManager::syncAccount(std::string url) -> decltype(syncAccount(url)) {
	using FunctionType = decltype(syncAccount(url))(*)(GJAccountManager*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x91948, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, url);
}

auto GJAccountManager::unlinkFromAccount() -> decltype(unlinkFromAccount()) {
	using FunctionType = decltype(unlinkFromAccount())(*)(GJAccountManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x91e3c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}
