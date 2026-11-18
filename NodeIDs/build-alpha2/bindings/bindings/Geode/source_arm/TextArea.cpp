#include <Geode/cocos/cocoa/CCObject.h>

#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/TextArea.hpp>
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

TextArea::~TextArea() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(TextArea*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x29fbb8, tulip::hook::TulipConvention::Default);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) TextArea(geode::CutoffConstructor, sizeof(TextArea));
		geode::DestructorLock::addLock(this);
	}
}

auto TextArea::create(std::string str, char const* font, float scale, float width, cocos2d::CCPoint anchor, float lineHeight, bool disableColor, int maxEmoji) -> decltype(create(str, font, scale, width, anchor, lineHeight, disableColor, maxEmoji)) {
	using FunctionType = decltype(create(str, font, scale, width, anchor, lineHeight, disableColor, maxEmoji))(*)(std::string, char const*, float, float, cocos2d::CCPoint, float, bool, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x29fc98, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(str, font, scale, width, anchor, lineHeight, disableColor, maxEmoji);
}

auto TextArea::update(float dt) -> decltype(update(dt)) {
	auto self = addresser::thunkAdjust(Resolve<float>::func(&TextArea::update), this);
	using FunctionType = decltype(update(dt))(*)(TextArea*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2a0c34, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, dt);
}

auto TextArea::draw() -> decltype(draw()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&TextArea::draw), this);
	using FunctionType = decltype(draw())(*)(TextArea*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2a0c30, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto TextArea::setOpacity(unsigned char opacity) -> decltype(setOpacity(opacity)) {
	auto self = addresser::thunkAdjust(Resolve<unsigned char>::func(&TextArea::setOpacity), this);
	using FunctionType = decltype(setOpacity(opacity))(*)(TextArea*, unsigned char);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2a0a8c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, opacity);
}

auto TextArea::colorAllCharactersTo(cocos2d::ccColor3B color) -> decltype(colorAllCharactersTo(color)) {
	using FunctionType = decltype(colorAllCharactersTo(color))(*)(TextArea*, cocos2d::ccColor3B);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2a0af8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, color);
}

auto TextArea::colorAllLabels(cocos2d::ccColor3B color) -> decltype(colorAllLabels(color)) {
	using FunctionType = decltype(colorAllLabels(color))(*)(TextArea*, cocos2d::ccColor3B);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2a0bbc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, color);
}

auto TextArea::fadeIn(float duration, bool unused) -> decltype(fadeIn(duration, unused)) {
	using FunctionType = decltype(fadeIn(duration, unused))(*)(TextArea*, float, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2a07bc, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, duration, unused);
}

auto TextArea::fadeInCharacters(float duration, float charDuration, bool fadeOut, TextFadeInStyle style) -> decltype(fadeInCharacters(duration, charDuration, fadeOut, style)) {
	using FunctionType = decltype(fadeInCharacters(duration, charDuration, fadeOut, style))(*)(TextArea*, float, float, bool, TextFadeInStyle);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2a0d74, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, duration, charDuration, fadeOut, style);
}

auto TextArea::fadeOut(float duration) -> decltype(fadeOut(duration)) {
	using FunctionType = decltype(fadeOut(duration))(*)(TextArea*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2a098c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, duration);
}

auto TextArea::fadeOutAndRemove() -> decltype(fadeOutAndRemove()) {
	using FunctionType = decltype(fadeOutAndRemove())(*)(TextArea*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2a091c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto TextArea::finishFade() -> decltype(finishFade()) {
	using FunctionType = decltype(finishFade())(*)(TextArea*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2a08f8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto TextArea::hideAll() -> decltype(hideAll()) {
	using FunctionType = decltype(hideAll())(*)(TextArea*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2a0244, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto TextArea::setIgnoreColorCode(bool ignore) -> decltype(setIgnoreColorCode(ignore)) {
	using FunctionType = decltype(setIgnoreColorCode(ignore))(*)(TextArea*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2a0220, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, ignore);
}

auto TextArea::setString(std::string text) -> decltype(setString(text)) {
	using FunctionType = decltype(setString(text))(*)(TextArea*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x29ff64, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, text);
}

auto TextArea::showAll() -> decltype(showAll()) {
	using FunctionType = decltype(showAll())(*)(TextArea*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2a06e0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto TextArea::stopAllCharacterActions() -> decltype(stopAllCharacterActions()) {
	using FunctionType = decltype(stopAllCharacterActions())(*)(TextArea*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2a0620, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}
