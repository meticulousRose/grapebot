#include <Geode/cocos/cocoa/CCObject.h>

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

CreateParticlePopup::CreateParticlePopup() : CreateParticlePopup(geode::CutoffConstructor, sizeof(CreateParticlePopup)) {
	// here we construct it as normal as we can, then destruct it
	// using the generated functions. this ensures no memory gets leaked
	// no crashes :pray:
	geode::DestructorLock::addLock(this);
	CreateParticlePopup::~CreateParticlePopup();

	using FunctionType = void(*)(CreateParticlePopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x46c450, tulip::hook::TulipConvention::Default);
	reinterpret_cast<FunctionType>(func)(this);
}

auto CreateParticlePopup::create(std::string str) -> decltype(create(str)) {
	using FunctionType = decltype(create(str))(*)(std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x462a80, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(str);
}

auto CreateParticlePopup::create(ParticleGameObject* object, cocos2d::CCArray* objects) -> decltype(create(object, objects)) {
	using FunctionType = decltype(create(object, objects))(*)(ParticleGameObject*, cocos2d::CCArray*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x462990, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(object, objects);
}

auto CreateParticlePopup::create(ParticleGameObject* object, cocos2d::CCArray* objects, std::string str) -> decltype(create(object, objects, str)) {
	using FunctionType = decltype(create(object, objects, str))(*)(ParticleGameObject*, cocos2d::CCArray*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4629b0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(object, objects, str);
}

auto CreateParticlePopup::update(float dt) -> decltype(update(dt)) {
	auto self = addresser::thunkAdjust(Resolve<float>::func(&CreateParticlePopup::update), this);
	using FunctionType = decltype(update(dt))(*)(CreateParticlePopup*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x46ad40, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, dt);
}

auto CreateParticlePopup::ccTouchBegan(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) -> decltype(ccTouchBegan(touch, event)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&CreateParticlePopup::ccTouchBegan), this);
	using FunctionType = decltype(ccTouchBegan(touch, event))(*)(CreateParticlePopup*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x46b810, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, touch, event);
}

auto CreateParticlePopup::ccTouchMoved(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) -> decltype(ccTouchMoved(touch, event)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&CreateParticlePopup::ccTouchMoved), this);
	using FunctionType = decltype(ccTouchMoved(touch, event))(*)(CreateParticlePopup*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x46b920, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, touch, event);
}

auto CreateParticlePopup::ccTouchEnded(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) -> decltype(ccTouchEnded(touch, event)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&CreateParticlePopup::ccTouchEnded), this);
	using FunctionType = decltype(ccTouchEnded(touch, event))(*)(CreateParticlePopup*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x46bd00, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, touch, event);
}

auto CreateParticlePopup::ccTouchCancelled(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) -> decltype(ccTouchCancelled(touch, event)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&CreateParticlePopup::ccTouchCancelled), this);
	using FunctionType = decltype(ccTouchCancelled(touch, event))(*)(CreateParticlePopup*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x46bd50, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, touch, event);
}

auto CreateParticlePopup::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&CreateParticlePopup::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(CreateParticlePopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x46b7e0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto CreateParticlePopup::sliderBegan(Slider* slider) -> decltype(sliderBegan(slider)) {
	auto self = addresser::thunkAdjust(Resolve<Slider*>::func(&CreateParticlePopup::sliderBegan), this);
	using FunctionType = decltype(sliderBegan(slider))(*)(CreateParticlePopup*, Slider*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x46b6a0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, slider);
}

auto CreateParticlePopup::sliderEnded(Slider* slider) -> decltype(sliderEnded(slider)) {
	auto self = addresser::thunkAdjust(Resolve<Slider*>::func(&CreateParticlePopup::sliderEnded), this);
	using FunctionType = decltype(sliderEnded(slider))(*)(CreateParticlePopup*, Slider*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x46b780, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, slider);
}

auto CreateParticlePopup::colorSelectClosed(cocos2d::CCNode* popup) -> decltype(colorSelectClosed(popup)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCNode*>::func(&CreateParticlePopup::colorSelectClosed), this);
	using FunctionType = decltype(colorSelectClosed(popup))(*)(CreateParticlePopup*, cocos2d::CCNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x46a880, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, popup);
}

auto CreateParticlePopup::textInputClosed(CCTextInputNode* node) -> decltype(textInputClosed(node)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&CreateParticlePopup::textInputClosed), this);
	using FunctionType = decltype(textInputClosed(node))(*)(CreateParticlePopup*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x46af70, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, node);
}

auto CreateParticlePopup::textChanged(CCTextInputNode* node) -> decltype(textChanged(node)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&CreateParticlePopup::textChanged), this);
	using FunctionType = decltype(textChanged(node))(*)(CreateParticlePopup*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x46afb0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, node);
}

auto CreateParticlePopup::applyTexturePage() -> decltype(applyTexturePage()) {
	using FunctionType = decltype(applyTexturePage())(*)(CreateParticlePopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x46ab60, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto CreateParticlePopup::centerAlignParticle(cocos2d::CCObject* sender) -> decltype(centerAlignParticle(sender)) {
	using FunctionType = decltype(centerAlignParticle(sender))(*)(CreateParticlePopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x467a70, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CreateParticlePopup::createParticleSlider(gjParticleValue value, int page, bool centerLabel, cocos2d::CCPoint position, cocos2d::CCArray* displayNodes) -> decltype(createParticleSlider(value, page, centerLabel, position, displayNodes)) {
	using FunctionType = decltype(createParticleSlider(value, page, centerLabel, position, displayNodes))(*)(CreateParticlePopup*, gjParticleValue, int, bool, cocos2d::CCPoint, cocos2d::CCArray*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4681d0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, value, page, centerLabel, position, displayNodes);
}

auto CreateParticlePopup::getPage(int page) -> decltype(getPage(page)) {
	using FunctionType = decltype(getPage(page))(*)(CreateParticlePopup*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x467e50, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, page);
}

auto CreateParticlePopup::getPageButton(int page) -> decltype(getPageButton(page)) {
	using FunctionType = decltype(getPageButton(page))(*)(CreateParticlePopup*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4691e0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, page);
}

auto CreateParticlePopup::getPageContainer(int page) -> decltype(getPageContainer(page)) {
	using FunctionType = decltype(getPageContainer(page))(*)(CreateParticlePopup*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x467e70, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, page);
}

auto CreateParticlePopup::getPageInputNodes(int page) -> decltype(getPageInputNodes(page)) {
	using FunctionType = decltype(getPageInputNodes(page))(*)(CreateParticlePopup*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x468190, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, page);
}

auto CreateParticlePopup::getPageMenu(int page) -> decltype(getPageMenu(page)) {
	using FunctionType = decltype(getPageMenu(page))(*)(CreateParticlePopup*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x467e40, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, page);
}

auto CreateParticlePopup::getPageSliders(int page) -> decltype(getPageSliders(page)) {
	using FunctionType = decltype(getPageSliders(page))(*)(CreateParticlePopup*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4681b0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, page);
}

auto CreateParticlePopup::init(ParticleGameObject* object, cocos2d::CCArray* objects, std::string str) -> decltype(init(object, objects, str)) {
	using FunctionType = decltype(init(object, objects, str))(*)(CreateParticlePopup*, ParticleGameObject*, cocos2d::CCArray*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x462b00, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, object, objects, str);
}

auto CreateParticlePopup::maxSliderValueForType(gjParticleValue type) -> decltype(maxSliderValueForType(type)) {
	using FunctionType = decltype(maxSliderValueForType(type))(*)(CreateParticlePopup*, gjParticleValue);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x46b670, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, type);
}

auto CreateParticlePopup::minSliderValueForType(gjParticleValue type) -> decltype(minSliderValueForType(type)) {
	using FunctionType = decltype(minSliderValueForType(type))(*)(CreateParticlePopup*, gjParticleValue);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x46b650, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, type);
}

auto CreateParticlePopup::onCalcEmission(cocos2d::CCObject* sender) -> decltype(onCalcEmission(sender)) {
	using FunctionType = decltype(onCalcEmission(sender))(*)(CreateParticlePopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x469ac0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CreateParticlePopup::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	using FunctionType = decltype(onClose(sender))(*)(CreateParticlePopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x467600, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CreateParticlePopup::onCopySettings(cocos2d::CCObject* sender) -> decltype(onCopySettings(sender)) {
	using FunctionType = decltype(onCopySettings(sender))(*)(CreateParticlePopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4677d0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CreateParticlePopup::onDuplicateColor(cocos2d::CCObject* sender) -> decltype(onDuplicateColor(sender)) {
	using FunctionType = decltype(onDuplicateColor(sender))(*)(CreateParticlePopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x468060, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CreateParticlePopup::onDurationForever(cocos2d::CCObject* sender) -> decltype(onDurationForever(sender)) {
	using FunctionType = decltype(onDurationForever(sender))(*)(CreateParticlePopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x469a20, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CreateParticlePopup::onDynamicColor(cocos2d::CCObject* sender) -> decltype(onDynamicColor(sender)) {
	using FunctionType = decltype(onDynamicColor(sender))(*)(CreateParticlePopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x468df0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CreateParticlePopup::onDynamicRotation(cocos2d::CCObject* sender) -> decltype(onDynamicRotation(sender)) {
	using FunctionType = decltype(onDynamicRotation(sender))(*)(CreateParticlePopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x468c10, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CreateParticlePopup::onEmitterMode(cocos2d::CCObject* sender) -> decltype(onEmitterMode(sender)) {
	using FunctionType = decltype(onEmitterMode(sender))(*)(CreateParticlePopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x467e90, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CreateParticlePopup::onEndRGBVarSync(cocos2d::CCObject* sender) -> decltype(onEndRGBVarSync(sender)) {
	using FunctionType = decltype(onEndRGBVarSync(sender))(*)(CreateParticlePopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x469030, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CreateParticlePopup::onMaxEmission(cocos2d::CCObject* sender) -> decltype(onMaxEmission(sender)) {
	using FunctionType = decltype(onMaxEmission(sender))(*)(CreateParticlePopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x469a70, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CreateParticlePopup::onMode(cocos2d::CCObject* sender) -> decltype(onMode(sender)) {
	using FunctionType = decltype(onMode(sender))(*)(CreateParticlePopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4679b0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CreateParticlePopup::onOrderSensitive(cocos2d::CCObject* sender) -> decltype(onOrderSensitive(sender)) {
	using FunctionType = decltype(onOrderSensitive(sender))(*)(CreateParticlePopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x468fd0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CreateParticlePopup::onPage(cocos2d::CCObject* sender) -> decltype(onPage(sender)) {
	using FunctionType = decltype(onPage(sender))(*)(CreateParticlePopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x467ba0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CreateParticlePopup::onPasteSettings(cocos2d::CCObject* sender) -> decltype(onPasteSettings(sender)) {
	using FunctionType = decltype(onPasteSettings(sender))(*)(CreateParticlePopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4678f0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CreateParticlePopup::onPosType(cocos2d::CCObject* sender) -> decltype(onPosType(sender)) {
	using FunctionType = decltype(onPosType(sender))(*)(CreateParticlePopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x467dc0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CreateParticlePopup::onQuickStart(cocos2d::CCObject* sender) -> decltype(onQuickStart(sender)) {
	using FunctionType = decltype(onQuickStart(sender))(*)(CreateParticlePopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x468d60, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CreateParticlePopup::onSelectColor(cocos2d::CCObject* sender) -> decltype(onSelectColor(sender)) {
	using FunctionType = decltype(onSelectColor(sender))(*)(CreateParticlePopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x467ac0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CreateParticlePopup::onSelectParticleTexture(cocos2d::CCObject* sender) -> decltype(onSelectParticleTexture(sender)) {
	using FunctionType = decltype(onSelectParticleTexture(sender))(*)(CreateParticlePopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x469060, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CreateParticlePopup::onStartRGBVarSync(cocos2d::CCObject* sender) -> decltype(onStartRGBVarSync(sender)) {
	using FunctionType = decltype(onStartRGBVarSync(sender))(*)(CreateParticlePopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x469000, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CreateParticlePopup::onTexturePage(cocos2d::CCObject* sender) -> decltype(onTexturePage(sender)) {
	using FunctionType = decltype(onTexturePage(sender))(*)(CreateParticlePopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x469190, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CreateParticlePopup::onToggleBlending(cocos2d::CCObject* sender) -> decltype(onToggleBlending(sender)) {
	using FunctionType = decltype(onToggleBlending(sender))(*)(CreateParticlePopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x468b00, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CreateParticlePopup::onTogglePerfLog(cocos2d::CCObject* sender) -> decltype(onTogglePerfLog(sender)) {
	using FunctionType = decltype(onTogglePerfLog(sender))(*)(CreateParticlePopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x467f10, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CreateParticlePopup::onToggleStartRadiusEqualToEnd(cocos2d::CCObject* sender) -> decltype(onToggleStartRadiusEqualToEnd(sender)) {
	using FunctionType = decltype(onToggleStartRadiusEqualToEnd(sender))(*)(CreateParticlePopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x468ba0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CreateParticlePopup::onToggleStartRotationIsDir(cocos2d::CCObject* sender) -> decltype(onToggleStartRotationIsDir(sender)) {
	using FunctionType = decltype(onToggleStartRotationIsDir(sender))(*)(CreateParticlePopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x468bd0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CreateParticlePopup::onToggleStartSizeEqualToEnd(cocos2d::CCObject* sender) -> decltype(onToggleStartSizeEqualToEnd(sender)) {
	using FunctionType = decltype(onToggleStartSizeEqualToEnd(sender))(*)(CreateParticlePopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x468b40, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CreateParticlePopup::onToggleStartSpinEqualToEnd(cocos2d::CCObject* sender) -> decltype(onToggleStartSpinEqualToEnd(sender)) {
	using FunctionType = decltype(onToggleStartSpinEqualToEnd(sender))(*)(CreateParticlePopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x468b70, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CreateParticlePopup::onUniformColor(cocos2d::CCObject* sender) -> decltype(onUniformColor(sender)) {
	using FunctionType = decltype(onUniformColor(sender))(*)(CreateParticlePopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x468ef0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CreateParticlePopup::particleValueIsInt(gjParticleValue type) -> decltype(particleValueIsInt(type)) {
	using FunctionType = decltype(particleValueIsInt(type))(*)(CreateParticlePopup*, gjParticleValue);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x46b7c0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, type);
}

auto CreateParticlePopup::sliderChanged(cocos2d::CCObject* sender) -> decltype(sliderChanged(sender)) {
	using FunctionType = decltype(sliderChanged(sender))(*)(CreateParticlePopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x469860, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CreateParticlePopup::titleForParticleValue(gjParticleValue type) -> decltype(titleForParticleValue(type)) {
	using FunctionType = decltype(titleForParticleValue(type))(*)(CreateParticlePopup*, gjParticleValue);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x469640, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, type);
}

auto CreateParticlePopup::toggleGravityMode(bool gravityMode) -> decltype(toggleGravityMode(gravityMode)) {
	using FunctionType = decltype(toggleGravityMode(gravityMode))(*)(CreateParticlePopup*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x469200, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, gravityMode);
}

auto CreateParticlePopup::updateColorSprite(int tag) -> decltype(updateColorSprite(tag)) {
	using FunctionType = decltype(updateColorSprite(tag))(*)(CreateParticlePopup*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x467f70, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, tag);
}

auto CreateParticlePopup::updateInputNodeStringForType(gjParticleValue type) -> decltype(updateInputNodeStringForType(type)) {
	using FunctionType = decltype(updateInputNodeStringForType(type))(*)(CreateParticlePopup*, gjParticleValue);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x469680, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, type);
}

auto CreateParticlePopup::updateParticleValueForType(float value, gjParticleValue type, cocos2d::CCParticleSystemQuad* particle) -> decltype(updateParticleValueForType(value, type, particle)) {
	using FunctionType = decltype(updateParticleValueForType(value, type, particle))(*)(CreateParticlePopup*, float, gjParticleValue, cocos2d::CCParticleSystemQuad*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x469b70, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, value, type, particle);
}

auto CreateParticlePopup::updateSliderForType(gjParticleValue type) -> decltype(updateSliderForType(type)) {
	using FunctionType = decltype(updateSliderForType(type))(*)(CreateParticlePopup*, gjParticleValue);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x469950, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, type);
}

auto CreateParticlePopup::valueForParticleValue(gjParticleValue type) -> decltype(valueForParticleValue(type)) {
	using FunctionType = decltype(valueForParticleValue(type))(*)(CreateParticlePopup*, gjParticleValue);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x46b090, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, type);
}

auto CreateParticlePopup::willClose() -> decltype(willClose()) {
	using FunctionType = decltype(willClose())(*)(CreateParticlePopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x46a810, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}
