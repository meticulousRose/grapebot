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
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1ecdbc, tulip::hook::TulipConvention::Default);
	reinterpret_cast<FunctionType>(func)(this, identifier, width, height);
}

auto GJMessageCell::init() -> decltype(init()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GJMessageCell::init), this);
	using FunctionType = decltype(init())(*)(GJMessageCell*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1ece20, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GJMessageCell::draw() -> decltype(draw()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GJMessageCell::draw), this);
	using FunctionType = decltype(draw())(*)(GJMessageCell*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1ed10c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GJMessageCell::FLAlert_Clicked(FLAlertLayer* layer, bool btn2) -> decltype(FLAlert_Clicked(layer, btn2)) {
	auto self = addresser::thunkAdjust(Resolve<FLAlertLayer*, bool>::func(&GJMessageCell::FLAlert_Clicked), this);
	using FunctionType = decltype(FLAlert_Clicked(layer, btn2))(*)(GJMessageCell*, FLAlertLayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1ed1b8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, layer, btn2);
}

auto GJMessageCell::uploadActionFinished(int id, int response) -> decltype(uploadActionFinished(id, response)) {
	auto self = addresser::thunkAdjust(Resolve<int, int>::func(&GJMessageCell::uploadActionFinished), this);
	using FunctionType = decltype(uploadActionFinished(id, response))(*)(GJMessageCell*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1ed31c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, id, response);
}

auto GJMessageCell::uploadActionFailed(int id, int response) -> decltype(uploadActionFailed(id, response)) {
	auto self = addresser::thunkAdjust(Resolve<int, int>::func(&GJMessageCell::uploadActionFailed), this);
	using FunctionType = decltype(uploadActionFailed(id, response))(*)(GJMessageCell*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1ed504, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, id, response);
}

auto GJMessageCell::onClosePopup(UploadActionPopup* popup) -> decltype(onClosePopup(popup)) {
	auto self = addresser::thunkAdjust(Resolve<UploadActionPopup*>::func(&GJMessageCell::onClosePopup), this);
	using FunctionType = decltype(onClosePopup(popup))(*)(GJMessageCell*, UploadActionPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1ed66c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, popup);
}

auto GJMessageCell::loadFromMessage(GJUserMessage* message) -> decltype(loadFromMessage(message)) {
	using FunctionType = decltype(loadFromMessage(message))(*)(GJMessageCell*, GJUserMessage*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1de768, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, message);
}

auto GJMessageCell::markAsRead() -> decltype(markAsRead()) {
	using FunctionType = decltype(markAsRead())(*)(GJMessageCell*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1ed080, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJMessageCell::onDeleteMessage(cocos2d::CCObject* sender) -> decltype(onDeleteMessage(sender)) {
	using FunctionType = decltype(onDeleteMessage(sender))(*)(GJMessageCell*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1ecf08, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto GJMessageCell::onToggle(cocos2d::CCObject* sender) -> decltype(onToggle(sender)) {
	using FunctionType = decltype(onToggle(sender))(*)(GJMessageCell*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1ed04c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto GJMessageCell::onViewMessage(cocos2d::CCObject* sender) -> decltype(onViewMessage(sender)) {
	using FunctionType = decltype(onViewMessage(sender))(*)(GJMessageCell*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1ece34, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto GJMessageCell::onViewProfile(cocos2d::CCObject* sender) -> decltype(onViewProfile(sender)) {
	using FunctionType = decltype(onViewProfile(sender))(*)(GJMessageCell*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1ed014, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto GJMessageCell::updateBGColor(int index) -> decltype(updateBGColor(index)) {
	using FunctionType = decltype(updateBGColor(index))(*)(GJMessageCell*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1e129c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, index);
}

auto GJMessageCell::updateToggle() -> decltype(updateToggle()) {
	using FunctionType = decltype(updateToggle())(*)(GJMessageCell*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1e259c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}
