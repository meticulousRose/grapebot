
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/AccountBanPopup.hpp>
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

auto AccountBanPopup::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&AccountBanPopup::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(AccountBanPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x86e7a0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto AccountBanPopup::pageChanged() -> decltype(pageChanged()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&AccountBanPopup::pageChanged), this);
	using FunctionType = decltype(pageChanged())(*)(AccountBanPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x86acc4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto AccountBanPopup::onClose(cocos2d::CCObject* p0) -> decltype(onClose(p0)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCObject*>::func(&AccountBanPopup::onClose), this);
	using FunctionType = decltype(onClose(p0))(*)(AccountBanPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x86e74c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto AccountBanPopup::adminCommentBanFinished() -> decltype(adminCommentBanFinished()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&AccountBanPopup::adminCommentBanFinished), this);
	using FunctionType = decltype(adminCommentBanFinished())(*)(AccountBanPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x86c118, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto AccountBanPopup::adminCommentBanFailed() -> decltype(adminCommentBanFailed()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&AccountBanPopup::adminCommentBanFailed), this);
	using FunctionType = decltype(adminCommentBanFailed())(*)(AccountBanPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x86c28c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto AccountBanPopup::adminCommentUnbanFinished() -> decltype(adminCommentUnbanFinished()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&AccountBanPopup::adminCommentUnbanFinished), this);
	using FunctionType = decltype(adminCommentUnbanFinished())(*)(AccountBanPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x86c3d4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto AccountBanPopup::adminCommentUnbanFailed() -> decltype(adminCommentUnbanFailed()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&AccountBanPopup::adminCommentUnbanFailed), this);
	using FunctionType = decltype(adminCommentUnbanFailed())(*)(AccountBanPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x86c540, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto AccountBanPopup::adminUploadBanFinished() -> decltype(adminUploadBanFinished()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&AccountBanPopup::adminUploadBanFinished), this);
	using FunctionType = decltype(adminUploadBanFinished())(*)(AccountBanPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x86c688, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto AccountBanPopup::adminUploadBanFailed() -> decltype(adminUploadBanFailed()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&AccountBanPopup::adminUploadBanFailed), this);
	using FunctionType = decltype(adminUploadBanFailed())(*)(AccountBanPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x86c7f4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto AccountBanPopup::adminUploadUnbanFinished() -> decltype(adminUploadUnbanFinished()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&AccountBanPopup::adminUploadUnbanFinished), this);
	using FunctionType = decltype(adminUploadUnbanFinished())(*)(AccountBanPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x86c93c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto AccountBanPopup::adminUploadUnbanFailed() -> decltype(adminUploadUnbanFailed()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&AccountBanPopup::adminUploadUnbanFailed), this);
	using FunctionType = decltype(adminUploadUnbanFailed())(*)(AccountBanPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x86caa0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto AccountBanPopup::adminMessageBanFinished() -> decltype(adminMessageBanFinished()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&AccountBanPopup::adminMessageBanFinished), this);
	using FunctionType = decltype(adminMessageBanFinished())(*)(AccountBanPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x86cbe8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto AccountBanPopup::adminMessageBanFailed() -> decltype(adminMessageBanFailed()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&AccountBanPopup::adminMessageBanFailed), this);
	using FunctionType = decltype(adminMessageBanFailed())(*)(AccountBanPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x86cd5c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto AccountBanPopup::adminMessageUnbanFinished() -> decltype(adminMessageUnbanFinished()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&AccountBanPopup::adminMessageUnbanFinished), this);
	using FunctionType = decltype(adminMessageUnbanFinished())(*)(AccountBanPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x86cea4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto AccountBanPopup::adminMessageUnbanFailed() -> decltype(adminMessageUnbanFailed()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&AccountBanPopup::adminMessageUnbanFailed), this);
	using FunctionType = decltype(adminMessageUnbanFailed())(*)(AccountBanPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x86d010, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto AccountBanPopup::adminFreezeFinished() -> decltype(adminFreezeFinished()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&AccountBanPopup::adminFreezeFinished), this);
	using FunctionType = decltype(adminFreezeFinished())(*)(AccountBanPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x86d158, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto AccountBanPopup::adminFreezeFailed() -> decltype(adminFreezeFailed()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&AccountBanPopup::adminFreezeFailed), this);
	using FunctionType = decltype(adminFreezeFailed())(*)(AccountBanPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x86d2c8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto AccountBanPopup::adminUnfreezeFinished() -> decltype(adminUnfreezeFinished()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&AccountBanPopup::adminUnfreezeFinished), this);
	using FunctionType = decltype(adminUnfreezeFinished())(*)(AccountBanPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x86d410, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto AccountBanPopup::adminUnfreezeFailed() -> decltype(adminUnfreezeFailed()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&AccountBanPopup::adminUnfreezeFailed), this);
	using FunctionType = decltype(adminUnfreezeFailed())(*)(AccountBanPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x86d574, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto AccountBanPopup::adminTrendingBanFinished() -> decltype(adminTrendingBanFinished()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&AccountBanPopup::adminTrendingBanFinished), this);
	using FunctionType = decltype(adminTrendingBanFinished())(*)(AccountBanPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x86d6bc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto AccountBanPopup::adminTrendingBanFailed() -> decltype(adminTrendingBanFailed()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&AccountBanPopup::adminTrendingBanFailed), this);
	using FunctionType = decltype(adminTrendingBanFailed())(*)(AccountBanPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x86d838, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto AccountBanPopup::adminTrendingUnbanFinished() -> decltype(adminTrendingUnbanFinished()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&AccountBanPopup::adminTrendingUnbanFinished), this);
	using FunctionType = decltype(adminTrendingUnbanFinished())(*)(AccountBanPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x86d980, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto AccountBanPopup::adminTrendingUnbanFailed() -> decltype(adminTrendingUnbanFailed()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&AccountBanPopup::adminTrendingUnbanFailed), this);
	using FunctionType = decltype(adminTrendingUnbanFailed())(*)(AccountBanPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x86dae4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto AccountBanPopup::adminNameLockFinished() -> decltype(adminNameLockFinished()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&AccountBanPopup::adminNameLockFinished), this);
	using FunctionType = decltype(adminNameLockFinished())(*)(AccountBanPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x86dc2c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto AccountBanPopup::adminNameLockFailed() -> decltype(adminNameLockFailed()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&AccountBanPopup::adminNameLockFailed), this);
	using FunctionType = decltype(adminNameLockFailed())(*)(AccountBanPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x86dd88, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto AccountBanPopup::adminNameUnlockFinished() -> decltype(adminNameUnlockFinished()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&AccountBanPopup::adminNameUnlockFinished), this);
	using FunctionType = decltype(adminNameUnlockFinished())(*)(AccountBanPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x86ded0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto AccountBanPopup::adminNameUnlockFailed() -> decltype(adminNameUnlockFailed()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&AccountBanPopup::adminNameUnlockFailed), this);
	using FunctionType = decltype(adminNameUnlockFailed())(*)(AccountBanPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x86e034, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto AccountBanPopup::adminQueueMuteFinished() -> decltype(adminQueueMuteFinished()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&AccountBanPopup::adminQueueMuteFinished), this);
	using FunctionType = decltype(adminQueueMuteFinished())(*)(AccountBanPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x86e17c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto AccountBanPopup::adminQueueMuteFailed() -> decltype(adminQueueMuteFailed()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&AccountBanPopup::adminQueueMuteFailed), this);
	using FunctionType = decltype(adminQueueMuteFailed())(*)(AccountBanPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x86e308, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto AccountBanPopup::adminQueueUnmuteFinished() -> decltype(adminQueueUnmuteFinished()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&AccountBanPopup::adminQueueUnmuteFinished), this);
	using FunctionType = decltype(adminQueueUnmuteFinished())(*)(AccountBanPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x86e450, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto AccountBanPopup::adminQueueUnmuteFailed() -> decltype(adminQueueUnmuteFailed()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&AccountBanPopup::adminQueueUnmuteFailed), this);
	using FunctionType = decltype(adminQueueUnmuteFailed())(*)(AccountBanPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x86e57c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto AccountBanPopup::onClosePopup(UploadActionPopup* p0) -> decltype(onClosePopup(p0)) {
	auto self = addresser::thunkAdjust(Resolve<UploadActionPopup*>::func(&AccountBanPopup::onClosePopup), this);
	using FunctionType = decltype(onClosePopup(p0))(*)(AccountBanPopup*, UploadActionPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x86e6c4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}
