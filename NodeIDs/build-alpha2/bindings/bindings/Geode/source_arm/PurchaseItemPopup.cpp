
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/PurchaseItemPopup.hpp>
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

auto PurchaseItemPopup::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&PurchaseItemPopup::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(PurchaseItemPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2a6344, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto PurchaseItemPopup::init(GJStoreItem* item) -> decltype(init(item)) {
	using FunctionType = decltype(init(item))(*)(PurchaseItemPopup*, GJStoreItem*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2a5834, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, item);
}

auto PurchaseItemPopup::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	using FunctionType = decltype(onClose(sender))(*)(PurchaseItemPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2a6294, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto PurchaseItemPopup::onPurchase(cocos2d::CCObject* sender) -> decltype(onPurchase(sender)) {
	using FunctionType = decltype(onPurchase(sender))(*)(PurchaseItemPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2a62d0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}
