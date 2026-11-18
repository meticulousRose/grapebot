#include <Geode/cocos/cocoa/CCObject.h>

#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/GJMessageCell.hpp>
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

GJMessageCell::GJMessageCell(char const* identifier, float width, float height) : GJMessageCell(geode::CutoffConstructor, sizeof(GJMessageCell)) {
	// here we construct it as normal as we can, then destruct it
	// using the generated functions. this ensures no memory gets leaked
	// no crashes :pray:
	geode::DestructorLock::addLock(this);
	GJMessageCell::~GJMessageCell();

	using FunctionType = void(*)(GJMessageCell*, char const*, float, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x242180, tulip::hook::TulipConvention::Default);
	reinterpret_cast<FunctionType>(func)(this, identifier, width, height);
}

auto GJMessageCell::init() -> decltype(init()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GJMessageCell::init), this);
	using FunctionType = decltype(init())(*)(GJMessageCell*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x242230, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GJMessageCell::draw() -> decltype(draw()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GJMessageCell::draw), this);
	using FunctionType = decltype(draw())(*)(GJMessageCell*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x242540, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GJMessageCell::FLAlert_Clicked(FLAlertLayer* layer, bool btn2) -> decltype(FLAlert_Clicked(layer, btn2)) {
	auto self = addresser::thunkAdjust(Resolve<FLAlertLayer*, bool>::func(&GJMessageCell::FLAlert_Clicked), this);
	using FunctionType = decltype(FLAlert_Clicked(layer, btn2))(*)(GJMessageCell*, FLAlertLayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x242610, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, layer, btn2);
}

auto GJMessageCell::uploadActionFinished(int id, int response) -> decltype(uploadActionFinished(id, response)) {
	auto self = addresser::thunkAdjust(Resolve<int, int>::func(&GJMessageCell::uploadActionFinished), this);
	using FunctionType = decltype(uploadActionFinished(id, response))(*)(GJMessageCell*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2427a0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, id, response);
}

auto GJMessageCell::uploadActionFailed(int id, int response) -> decltype(uploadActionFailed(id, response)) {
	auto self = addresser::thunkAdjust(Resolve<int, int>::func(&GJMessageCell::uploadActionFailed), this);
	using FunctionType = decltype(uploadActionFailed(id, response))(*)(GJMessageCell*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x242980, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, id, response);
}

auto GJMessageCell::onClosePopup(UploadActionPopup* popup) -> decltype(onClosePopup(popup)) {
	auto self = addresser::thunkAdjust(Resolve<UploadActionPopup*>::func(&GJMessageCell::onClosePopup), this);
	using FunctionType = decltype(onClosePopup(popup))(*)(GJMessageCell*, UploadActionPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x242af0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, popup);
}

auto GJMessageCell::loadFromMessage(GJUserMessage* message) -> decltype(loadFromMessage(message)) {
	using FunctionType = decltype(loadFromMessage(message))(*)(GJMessageCell*, GJUserMessage*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2320e0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, message);
}

auto GJMessageCell::markAsRead() -> decltype(markAsRead()) {
	using FunctionType = decltype(markAsRead())(*)(GJMessageCell*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2424b0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJMessageCell::onDeleteMessage(cocos2d::CCObject* sender) -> decltype(onDeleteMessage(sender)) {
	using FunctionType = decltype(onDeleteMessage(sender))(*)(GJMessageCell*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x242330, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto GJMessageCell::onViewMessage(cocos2d::CCObject* sender) -> decltype(onViewMessage(sender)) {
	using FunctionType = decltype(onViewMessage(sender))(*)(GJMessageCell*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x242250, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto GJMessageCell::onViewProfile(cocos2d::CCObject* sender) -> decltype(onViewProfile(sender)) {
	using FunctionType = decltype(onViewProfile(sender))(*)(GJMessageCell*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x242450, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto GJMessageCell::updateToggle() -> decltype(updateToggle()) {
	using FunctionType = decltype(updateToggle())(*)(GJMessageCell*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x236440, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}
