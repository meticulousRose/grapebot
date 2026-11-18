
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/WorldSelectLayer.hpp>
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

auto WorldSelectLayer::create(int page) -> decltype(create(page)) {
	using FunctionType = decltype(create(page))(*)(int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x332494, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(page);
}

auto WorldSelectLayer::scene(int page) -> decltype(scene(page)) {
	using FunctionType = decltype(scene(page))(*)(int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3323b0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(page);
}

auto WorldSelectLayer::onExit() -> decltype(onExit()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&WorldSelectLayer::onExit), this);
	using FunctionType = decltype(onExit())(*)(WorldSelectLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x334264, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto WorldSelectLayer::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&WorldSelectLayer::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(WorldSelectLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x334194, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto WorldSelectLayer::scrollLayerWillScrollToPage(BoomScrollLayer* layer, int page) -> decltype(scrollLayerWillScrollToPage(layer, page)) {
	auto self = addresser::thunkAdjust(Resolve<BoomScrollLayer*, int>::func(&WorldSelectLayer::scrollLayerWillScrollToPage), this);
	using FunctionType = decltype(scrollLayerWillScrollToPage(layer, page))(*)(WorldSelectLayer*, BoomScrollLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x33404c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, layer, page);
}

auto WorldSelectLayer::scrollLayerScrolledToPage(BoomScrollLayer* layer, int page) -> decltype(scrollLayerScrolledToPage(layer, page)) {
	auto self = addresser::thunkAdjust(Resolve<BoomScrollLayer*, int>::func(&WorldSelectLayer::scrollLayerScrolledToPage), this);
	using FunctionType = decltype(scrollLayerScrolledToPage(layer, page))(*)(WorldSelectLayer*, BoomScrollLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x333f04, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, layer, page);
}

auto WorldSelectLayer::scrollLayerMoved(cocos2d::CCPoint position) -> decltype(scrollLayerMoved(position)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCPoint>::func(&WorldSelectLayer::scrollLayerMoved), this);
	using FunctionType = decltype(scrollLayerMoved(position))(*)(WorldSelectLayer*, cocos2d::CCPoint);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3342b8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, position);
}

auto WorldSelectLayer::animateInActiveIsland() -> decltype(animateInActiveIsland()) {
	using FunctionType = decltype(animateInActiveIsland())(*)(WorldSelectLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x333258, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto WorldSelectLayer::colorForPage(int page) -> decltype(colorForPage(page)) {
	using FunctionType = decltype(colorForPage(page))(*)(WorldSelectLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x33454c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, page);
}

auto WorldSelectLayer::getColorValue(int page1, int page2, float progress) -> decltype(getColorValue(page1, page2, progress)) {
	using FunctionType = decltype(getColorValue(page1, page2, progress))(*)(WorldSelectLayer*, int, int, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x334458, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, page1, page2, progress);
}

auto WorldSelectLayer::goToPage(int page, bool instant) -> decltype(goToPage(page, instant)) {
	using FunctionType = decltype(goToPage(page, instant))(*)(WorldSelectLayer*, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x33331c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, page, instant);
}

auto WorldSelectLayer::init(int page) -> decltype(init(page)) {
	using FunctionType = decltype(init(page))(*)(WorldSelectLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x332558, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, page);
}

auto WorldSelectLayer::onBack(cocos2d::CCObject* sender) -> decltype(onBack(sender)) {
	using FunctionType = decltype(onBack(sender))(*)(WorldSelectLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x332db4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto WorldSelectLayer::onFreeLevels(cocos2d::CCObject* sender) -> decltype(onFreeLevels(sender)) {
	using FunctionType = decltype(onFreeLevels(sender))(*)(WorldSelectLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x333ea0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto WorldSelectLayer::onGarage(cocos2d::CCObject* sender) -> decltype(onGarage(sender)) {
	using FunctionType = decltype(onGarage(sender))(*)(WorldSelectLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x332d28, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto WorldSelectLayer::onNext(cocos2d::CCObject* sender) -> decltype(onNext(sender)) {
	using FunctionType = decltype(onNext(sender))(*)(WorldSelectLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x332d94, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto WorldSelectLayer::onPrev(cocos2d::CCObject* sender) -> decltype(onPrev(sender)) {
	using FunctionType = decltype(onPrev(sender))(*)(WorldSelectLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x332d74, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto WorldSelectLayer::setupWorlds() -> decltype(setupWorlds()) {
	using FunctionType = decltype(setupWorlds())(*)(WorldSelectLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x332e18, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto WorldSelectLayer::showCompleteDialog() -> decltype(showCompleteDialog()) {
	using FunctionType = decltype(showCompleteDialog())(*)(WorldSelectLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x333400, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto WorldSelectLayer::tryShowAd() -> decltype(tryShowAd()) {
	using FunctionType = decltype(tryShowAd())(*)(WorldSelectLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x333da8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto WorldSelectLayer::unblockButtons() -> decltype(unblockButtons()) {
	using FunctionType = decltype(unblockButtons())(*)(WorldSelectLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x333d90, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto WorldSelectLayer::updateArrows() -> decltype(updateArrows()) {
	using FunctionType = decltype(updateArrows())(*)(WorldSelectLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3331b4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}
