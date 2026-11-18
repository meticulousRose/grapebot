
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/CreateParticlePopup.hpp>
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

auto CreateParticlePopup::create(std::string str) -> decltype(create(str)) {
	using FunctionType = decltype(create(str))(*)(std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3cf350, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(str);
}

auto CreateParticlePopup::create(ParticleGameObject* object, cocos2d::CCArray* objects) -> decltype(create(object, objects)) {
	using FunctionType = decltype(create(object, objects))(*)(ParticleGameObject*, cocos2d::CCArray*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3cf224, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(object, objects);
}

auto CreateParticlePopup::update(float dt) -> decltype(update(dt)) {
	auto self = addresser::thunkAdjust(Resolve<float>::func(&CreateParticlePopup::update), this);
	using FunctionType = decltype(update(dt))(*)(CreateParticlePopup*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d6a10, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, dt);
}

auto CreateParticlePopup::ccTouchBegan(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) -> decltype(ccTouchBegan(touch, event)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&CreateParticlePopup::ccTouchBegan), this);
	using FunctionType = decltype(ccTouchBegan(touch, event))(*)(CreateParticlePopup*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d7404, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, touch, event);
}

auto CreateParticlePopup::ccTouchMoved(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) -> decltype(ccTouchMoved(touch, event)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&CreateParticlePopup::ccTouchMoved), this);
	using FunctionType = decltype(ccTouchMoved(touch, event))(*)(CreateParticlePopup*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d74f4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, touch, event);
}

auto CreateParticlePopup::ccTouchEnded(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) -> decltype(ccTouchEnded(touch, event)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&CreateParticlePopup::ccTouchEnded), this);
	using FunctionType = decltype(ccTouchEnded(touch, event))(*)(CreateParticlePopup*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d7888, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, touch, event);
}

auto CreateParticlePopup::ccTouchCancelled(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) -> decltype(ccTouchCancelled(touch, event)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&CreateParticlePopup::ccTouchCancelled), this);
	using FunctionType = decltype(ccTouchCancelled(touch, event))(*)(CreateParticlePopup*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d78c4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, touch, event);
}

auto CreateParticlePopup::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&CreateParticlePopup::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(CreateParticlePopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d73f8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto CreateParticlePopup::sliderBegan(Slider* slider) -> decltype(sliderBegan(slider)) {
	auto self = addresser::thunkAdjust(Resolve<Slider*>::func(&CreateParticlePopup::sliderBegan), this);
	using FunctionType = decltype(sliderBegan(slider))(*)(CreateParticlePopup*, Slider*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d72a8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, slider);
}

auto CreateParticlePopup::sliderEnded(Slider* slider) -> decltype(sliderEnded(slider)) {
	auto self = addresser::thunkAdjust(Resolve<Slider*>::func(&CreateParticlePopup::sliderEnded), this);
	using FunctionType = decltype(sliderEnded(slider))(*)(CreateParticlePopup*, Slider*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d73c0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, slider);
}

auto CreateParticlePopup::colorSelectClosed(cocos2d::CCNode* popup) -> decltype(colorSelectClosed(popup)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCNode*>::func(&CreateParticlePopup::colorSelectClosed), this);
	using FunctionType = decltype(colorSelectClosed(popup))(*)(CreateParticlePopup*, cocos2d::CCNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d6578, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, popup);
}

auto CreateParticlePopup::textInputClosed(CCTextInputNode* node) -> decltype(textInputClosed(node)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&CreateParticlePopup::textInputClosed), this);
	using FunctionType = decltype(textInputClosed(node))(*)(CreateParticlePopup*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d6c10, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, node);
}

auto CreateParticlePopup::textChanged(CCTextInputNode* node) -> decltype(textChanged(node)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&CreateParticlePopup::textChanged), this);
	using FunctionType = decltype(textChanged(node))(*)(CreateParticlePopup*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d6c2c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, node);
}

auto CreateParticlePopup::centerAlignParticle(cocos2d::CCObject* sender) -> decltype(centerAlignParticle(sender)) {
	using FunctionType = decltype(centerAlignParticle(sender))(*)(CreateParticlePopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d3bd8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CreateParticlePopup::createParticleSlider(gjParticleValue value, int page, bool centerLabel, cocos2d::CCPoint position, cocos2d::CCArray* displayNodes) -> decltype(createParticleSlider(value, page, centerLabel, position, displayNodes)) {
	using FunctionType = decltype(createParticleSlider(value, page, centerLabel, position, displayNodes))(*)(CreateParticlePopup*, gjParticleValue, int, bool, cocos2d::CCPoint, cocos2d::CCArray*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d434c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, value, page, centerLabel, position, displayNodes);
}

auto CreateParticlePopup::getPage(int page) -> decltype(getPage(page)) {
	using FunctionType = decltype(getPage(page))(*)(CreateParticlePopup*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d3fe0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, page);
}

auto CreateParticlePopup::getPageButton(int page) -> decltype(getPageButton(page)) {
	using FunctionType = decltype(getPageButton(page))(*)(CreateParticlePopup*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d52dc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, page);
}

auto CreateParticlePopup::getPageContainer(int page) -> decltype(getPageContainer(page)) {
	using FunctionType = decltype(getPageContainer(page))(*)(CreateParticlePopup*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d3fec, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, page);
}

auto CreateParticlePopup::getPageInputNodes(int page) -> decltype(getPageInputNodes(page)) {
	using FunctionType = decltype(getPageInputNodes(page))(*)(CreateParticlePopup*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d433c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, page);
}

auto CreateParticlePopup::getPageMenu(int page) -> decltype(getPageMenu(page)) {
	using FunctionType = decltype(getPageMenu(page))(*)(CreateParticlePopup*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d3fd8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, page);
}

auto CreateParticlePopup::getPageSliders(int page) -> decltype(getPageSliders(page)) {
	using FunctionType = decltype(getPageSliders(page))(*)(CreateParticlePopup*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d4344, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, page);
}

auto CreateParticlePopup::init(ParticleGameObject* object, cocos2d::CCArray* objects, std::string str) -> decltype(init(object, objects, str)) {
	using FunctionType = decltype(init(object, objects, str))(*)(CreateParticlePopup*, ParticleGameObject*, cocos2d::CCArray*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3cf3f0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, object, objects, str);
}

auto CreateParticlePopup::maxSliderValueForType(gjParticleValue type) -> decltype(maxSliderValueForType(type)) {
	using FunctionType = decltype(maxSliderValueForType(type))(*)(CreateParticlePopup*, gjParticleValue);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d7288, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, type);
}

auto CreateParticlePopup::minSliderValueForType(gjParticleValue type) -> decltype(minSliderValueForType(type)) {
	using FunctionType = decltype(minSliderValueForType(type))(*)(CreateParticlePopup*, gjParticleValue);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d7268, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, type);
}

auto CreateParticlePopup::onAnimateActiveOnly(cocos2d::CCObject* sender) -> decltype(onAnimateActiveOnly(sender)) {
	using FunctionType = decltype(onAnimateActiveOnly(sender))(*)(CreateParticlePopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d4e30, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CreateParticlePopup::onAnimateOnTrigger(cocos2d::CCObject* sender) -> decltype(onAnimateOnTrigger(sender)) {
	using FunctionType = decltype(onAnimateOnTrigger(sender))(*)(CreateParticlePopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2988b4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CreateParticlePopup::onCalcEmission(cocos2d::CCObject* sender) -> decltype(onCalcEmission(sender)) {
	using FunctionType = decltype(onCalcEmission(sender))(*)(CreateParticlePopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d5b48, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CreateParticlePopup::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	using FunctionType = decltype(onClose(sender))(*)(CreateParticlePopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d37cc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CreateParticlePopup::onCopySettings(cocos2d::CCObject* sender) -> decltype(onCopySettings(sender)) {
	using FunctionType = decltype(onCopySettings(sender))(*)(CreateParticlePopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d3960, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CreateParticlePopup::onDuplicateColor(cocos2d::CCObject* sender) -> decltype(onDuplicateColor(sender)) {
	using FunctionType = decltype(onDuplicateColor(sender))(*)(CreateParticlePopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d41f0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CreateParticlePopup::onDurationForever(cocos2d::CCObject* sender) -> decltype(onDurationForever(sender)) {
	using FunctionType = decltype(onDurationForever(sender))(*)(CreateParticlePopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d5ab8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CreateParticlePopup::onDynamicColor(cocos2d::CCObject* sender) -> decltype(onDynamicColor(sender)) {
	using FunctionType = decltype(onDynamicColor(sender))(*)(CreateParticlePopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d4f20, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CreateParticlePopup::onDynamicRotation(cocos2d::CCObject* sender) -> decltype(onDynamicRotation(sender)) {
	using FunctionType = decltype(onDynamicRotation(sender))(*)(CreateParticlePopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d4d98, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CreateParticlePopup::onEmitterMode(cocos2d::CCObject* sender) -> decltype(onEmitterMode(sender)) {
	using FunctionType = decltype(onEmitterMode(sender))(*)(CreateParticlePopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d3ff8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CreateParticlePopup::onEndRGBVarSync(cocos2d::CCObject* sender) -> decltype(onEndRGBVarSync(sender)) {
	using FunctionType = decltype(onEndRGBVarSync(sender))(*)(CreateParticlePopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d50f4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CreateParticlePopup::onMaxEmission(cocos2d::CCObject* sender) -> decltype(onMaxEmission(sender)) {
	using FunctionType = decltype(onMaxEmission(sender))(*)(CreateParticlePopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d5b00, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CreateParticlePopup::onMode(cocos2d::CCObject* sender) -> decltype(onMode(sender)) {
	using FunctionType = decltype(onMode(sender))(*)(CreateParticlePopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d3b20, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CreateParticlePopup::onOrderSensitive(cocos2d::CCObject* sender) -> decltype(onOrderSensitive(sender)) {
	using FunctionType = decltype(onOrderSensitive(sender))(*)(CreateParticlePopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d50b4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CreateParticlePopup::onPage(cocos2d::CCObject* sender) -> decltype(onPage(sender)) {
	using FunctionType = decltype(onPage(sender))(*)(CreateParticlePopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d3d38, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CreateParticlePopup::onPasteSettings(cocos2d::CCObject* sender) -> decltype(onPasteSettings(sender)) {
	using FunctionType = decltype(onPasteSettings(sender))(*)(CreateParticlePopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d3a78, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CreateParticlePopup::onPosType(cocos2d::CCObject* sender) -> decltype(onPosType(sender)) {
	using FunctionType = decltype(onPosType(sender))(*)(CreateParticlePopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d3f48, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CreateParticlePopup::onQuickStart(cocos2d::CCObject* sender) -> decltype(onQuickStart(sender)) {
	using FunctionType = decltype(onQuickStart(sender))(*)(CreateParticlePopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2989ac, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CreateParticlePopup::onSelectColor(cocos2d::CCObject* sender) -> decltype(onSelectColor(sender)) {
	using FunctionType = decltype(onSelectColor(sender))(*)(CreateParticlePopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d3c28, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CreateParticlePopup::onSelectParticleTexture(cocos2d::CCObject* sender) -> decltype(onSelectParticleTexture(sender)) {
	using FunctionType = decltype(onSelectParticleTexture(sender))(*)(CreateParticlePopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d5114, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CreateParticlePopup::onStartRGBVarSync(cocos2d::CCObject* sender) -> decltype(onStartRGBVarSync(sender)) {
	using FunctionType = decltype(onStartRGBVarSync(sender))(*)(CreateParticlePopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d50d4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CreateParticlePopup::onToggleBlending(cocos2d::CCObject* sender) -> decltype(onToggleBlending(sender)) {
	using FunctionType = decltype(onToggleBlending(sender))(*)(CreateParticlePopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d4cb8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CreateParticlePopup::onTogglePerfLog(cocos2d::CCObject* sender) -> decltype(onTogglePerfLog(sender)) {
	using FunctionType = decltype(onTogglePerfLog(sender))(*)(CreateParticlePopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d4078, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CreateParticlePopup::onToggleStartRadiusEqualToEnd(cocos2d::CCObject* sender) -> decltype(onToggleStartRadiusEqualToEnd(sender)) {
	using FunctionType = decltype(onToggleStartRadiusEqualToEnd(sender))(*)(CreateParticlePopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d4d38, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CreateParticlePopup::onToggleStartRotationIsDir(cocos2d::CCObject* sender) -> decltype(onToggleStartRotationIsDir(sender)) {
	using FunctionType = decltype(onToggleStartRotationIsDir(sender))(*)(CreateParticlePopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d4d58, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CreateParticlePopup::onToggleStartSizeEqualToEnd(cocos2d::CCObject* sender) -> decltype(onToggleStartSizeEqualToEnd(sender)) {
	using FunctionType = decltype(onToggleStartSizeEqualToEnd(sender))(*)(CreateParticlePopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d4cf8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CreateParticlePopup::onToggleStartSpinEqualToEnd(cocos2d::CCObject* sender) -> decltype(onToggleStartSpinEqualToEnd(sender)) {
	using FunctionType = decltype(onToggleStartSpinEqualToEnd(sender))(*)(CreateParticlePopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d4d18, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CreateParticlePopup::onUniformColor(cocos2d::CCObject* sender) -> decltype(onUniformColor(sender)) {
	using FunctionType = decltype(onUniformColor(sender))(*)(CreateParticlePopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d4ff8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CreateParticlePopup::particleValueIsInt(gjParticleValue type) -> decltype(particleValueIsInt(type)) {
	using FunctionType = decltype(particleValueIsInt(type))(*)(CreateParticlePopup*, gjParticleValue);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d73d8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, type);
}

auto CreateParticlePopup::sliderChanged(cocos2d::CCObject* sender) -> decltype(sliderChanged(sender)) {
	using FunctionType = decltype(sliderChanged(sender))(*)(CreateParticlePopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d5928, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CreateParticlePopup::titleForParticleValue(gjParticleValue type) -> decltype(titleForParticleValue(type)) {
	using FunctionType = decltype(titleForParticleValue(type))(*)(CreateParticlePopup*, gjParticleValue);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d56f8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, type);
}

auto CreateParticlePopup::toggleGravityMode(bool gravityMode) -> decltype(toggleGravityMode(gravityMode)) {
	using FunctionType = decltype(toggleGravityMode(gravityMode))(*)(CreateParticlePopup*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d52e8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, gravityMode);
}

auto CreateParticlePopup::updateColorSprite(int tag) -> decltype(updateColorSprite(tag)) {
	using FunctionType = decltype(updateColorSprite(tag))(*)(CreateParticlePopup*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d40d0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, tag);
}

auto CreateParticlePopup::updateInputNodeStringForType(gjParticleValue type) -> decltype(updateInputNodeStringForType(type)) {
	using FunctionType = decltype(updateInputNodeStringForType(type))(*)(CreateParticlePopup*, gjParticleValue);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d5724, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, type);
}

auto CreateParticlePopup::updateParticleValueForType(float value, gjParticleValue type, cocos2d::CCParticleSystemQuad* particle) -> decltype(updateParticleValueForType(value, type, particle)) {
	using FunctionType = decltype(updateParticleValueForType(value, type, particle))(*)(CreateParticlePopup*, float, gjParticleValue, cocos2d::CCParticleSystemQuad*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d5be4, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, value, type, particle);
}

auto CreateParticlePopup::updateSliderForType(gjParticleValue type) -> decltype(updateSliderForType(type)) {
	using FunctionType = decltype(updateSliderForType(type))(*)(CreateParticlePopup*, gjParticleValue);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d59f8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, type);
}

auto CreateParticlePopup::valueForParticleValue(gjParticleValue type) -> decltype(valueForParticleValue(type)) {
	using FunctionType = decltype(valueForParticleValue(type))(*)(CreateParticlePopup*, gjParticleValue);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d6d14, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, type);
}

auto CreateParticlePopup::willClose() -> decltype(willClose()) {
	using FunctionType = decltype(willClose())(*)(CreateParticlePopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d6510, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}
