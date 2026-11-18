
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
	static auto func = wrapFunction<FunctionType>(base::get() + 0x9d5a0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto GJAccountManager::init() -> decltype(init()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GJAccountManager::init), this);
	using FunctionType = decltype(init())(*)(GJAccountManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xa01b0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GJAccountManager::backupAccount(std::string url) -> decltype(backupAccount(url)) {
	using FunctionType = decltype(backupAccount(url))(*)(GJAccountManager*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xa1800, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, url);
}

auto GJAccountManager::dataLoaded(DS_Dictionary* dict) -> decltype(dataLoaded(dict)) {
	using FunctionType = decltype(dataLoaded(dict))(*)(GJAccountManager*, DS_Dictionary*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xa2c10, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, dict);
}

auto GJAccountManager::encodeDataTo(DS_Dictionary* dict) -> decltype(encodeDataTo(dict)) {
	using FunctionType = decltype(encodeDataTo(dict))(*)(GJAccountManager*, DS_Dictionary*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xa2bb0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, dict);
}

auto GJAccountManager::firstSetup() -> decltype(firstSetup()) {
	using FunctionType = decltype(firstSetup())(*)(GJAccountManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xa2ba0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJAccountManager::getShaPassword(std::string password) -> decltype(getShaPassword(password)) {
	using FunctionType = decltype(getShaPassword(password))(*)(GJAccountManager*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xa2dd0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, password);
}

auto GJAccountManager::handleIt(bool success, std::string response, std::string tag, GJHttpType type) -> decltype(handleIt(success, response, tag, type)) {
	using FunctionType = decltype(handleIt(success, response, tag, type))(*)(GJAccountManager*, bool, std::string, std::string, GJHttpType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x9d9d0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, success, response, tag, type);
}

auto GJAccountManager::handleItDelayed(bool success, std::string response, std::string tag, GJHttpType type) -> decltype(handleItDelayed(success, response, tag, type)) {
	using FunctionType = decltype(handleItDelayed(success, response, tag, type))(*)(GJAccountManager*, bool, std::string, std::string, GJHttpType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x9e320, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, success, response, tag, type);
}

auto GJAccountManager::handleItND(cocos2d::CCNode* node, void* data) -> decltype(handleItND(node, data)) {
	using FunctionType = decltype(handleItND(node, data))(*)(GJAccountManager*, cocos2d::CCNode*, void*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x9e460, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, node, data);
}

auto GJAccountManager::loginAccount(std::string username, std::string gjp2) -> decltype(loginAccount(username, gjp2)) {
	using FunctionType = decltype(loginAccount(username, gjp2))(*)(GJAccountManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xa0c90, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, username, gjp2);
}

auto GJAccountManager::onBackupAccountCompleted(std::string response, std::string tag) -> decltype(onBackupAccountCompleted(response, tag)) {
	using FunctionType = decltype(onBackupAccountCompleted(response, tag))(*)(GJAccountManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x9ea10, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GJAccountManager::onGetAccountBackupURLCompleted(std::string response, std::string tag) -> decltype(onGetAccountBackupURLCompleted(response, tag)) {
	using FunctionType = decltype(onGetAccountBackupURLCompleted(response, tag))(*)(GJAccountManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x9fca0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GJAccountManager::onGetAccountSyncURLCompleted(std::string response, std::string tag) -> decltype(onGetAccountSyncURLCompleted(response, tag)) {
	using FunctionType = decltype(onGetAccountSyncURLCompleted(response, tag))(*)(GJAccountManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x9feb0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GJAccountManager::onLoginAccountCompleted(std::string response, std::string tag) -> decltype(onLoginAccountCompleted(response, tag)) {
	using FunctionType = decltype(onLoginAccountCompleted(response, tag))(*)(GJAccountManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x9e670, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GJAccountManager::onProcessHttpRequestCompleted(cocos2d::extension::CCHttpClient* client, cocos2d::extension::CCHttpResponse* response) -> decltype(onProcessHttpRequestCompleted(client, response)) {
	using FunctionType = decltype(onProcessHttpRequestCompleted(client, response))(*)(GJAccountManager*, cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x9d810, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, client, response);
}

auto GJAccountManager::onRegisterAccountCompleted(std::string response, std::string tag) -> decltype(onRegisterAccountCompleted(response, tag)) {
	using FunctionType = decltype(onRegisterAccountCompleted(response, tag))(*)(GJAccountManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x9e580, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GJAccountManager::onSyncAccountCompleted(std::string response, std::string tag) -> decltype(onSyncAccountCompleted(response, tag)) {
	using FunctionType = decltype(onSyncAccountCompleted(response, tag))(*)(GJAccountManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x9ece0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GJAccountManager::onUpdateAccountSettingsCompleted(std::string response, std::string tag) -> decltype(onUpdateAccountSettingsCompleted(response, tag)) {
	using FunctionType = decltype(onUpdateAccountSettingsCompleted(response, tag))(*)(GJAccountManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x9fc00, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GJAccountManager::ProcessHttpRequest(std::string url, std::string params, std::string tag, GJHttpType type) -> decltype(ProcessHttpRequest(url, params, tag, type)) {
	using FunctionType = decltype(ProcessHttpRequest(url, params, tag, type))(*)(GJAccountManager*, std::string, std::string, std::string, GJHttpType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x9d670, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, url, params, tag, type);
}

auto GJAccountManager::registerAccount(std::string response, std::string tag, std::string data) -> decltype(registerAccount(response, tag, data)) {
	using FunctionType = decltype(registerAccount(response, tag, data))(*)(GJAccountManager*, std::string, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xa04f0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, response, tag, data);
}

auto GJAccountManager::removeDLFromActive(char const* tag) -> decltype(removeDLFromActive(tag)) {
	using FunctionType = decltype(removeDLFromActive(tag))(*)(GJAccountManager*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xa0410, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, tag);
}

auto GJAccountManager::syncAccount(std::string url) -> decltype(syncAccount(url)) {
	using FunctionType = decltype(syncAccount(url))(*)(GJAccountManager*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xa20a0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, url);
}

auto GJAccountManager::unlinkFromAccount() -> decltype(unlinkFromAccount()) {
	using FunctionType = decltype(unlinkFromAccount())(*)(GJAccountManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xa25b0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJAccountManager::updateAccountSettings(int p0, int p1, int p2, int p3, int p4, std::string p5, std::string p6, std::string p7, std::string p8, std::string p9, std::string p10, std::string p11) -> decltype(updateAccountSettings(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11)) {
	using FunctionType = decltype(updateAccountSettings(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11))(*)(GJAccountManager*, int, int, int, int, int, std::string, std::string, std::string, std::string, std::string, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xa2670, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11);
}
