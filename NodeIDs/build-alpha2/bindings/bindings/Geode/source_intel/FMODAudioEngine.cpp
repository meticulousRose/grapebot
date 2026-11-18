#include <Geode/cocos/cocoa/CCObject.h>

#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/FMODAudioEngine.hpp>
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

FMODAudioEngine::~FMODAudioEngine() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(FMODAudioEngine*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x3c95c0, tulip::hook::TulipConvention::Default);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) FMODAudioEngine(geode::CutoffConstructor, sizeof(FMODAudioEngine));
		geode::DestructorLock::addLock(this);
	}
}

auto FMODAudioEngine::pitchForIdx(int index) -> decltype(pitchForIdx(index)) {
	using FunctionType = decltype(pitchForIdx(index))(*)(int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d0aa0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(index);
}

auto FMODAudioEngine::reverbToString(FMODReverbPreset preset) -> decltype(reverbToString(preset)) {
	using FunctionType = decltype(reverbToString(preset))(*)(FMODReverbPreset);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3caac0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(preset);
}

auto FMODAudioEngine::sharedEngine() -> decltype(sharedEngine()) {
	using FunctionType = decltype(sharedEngine())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3c9a70, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto FMODAudioEngine::update(float dt) -> decltype(update(dt)) {
	auto self = addresser::thunkAdjust(Resolve<float>::func(&FMODAudioEngine::update), this);
	using FunctionType = decltype(update(dt))(*)(FMODAudioEngine*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3cbc20, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, dt);
}

auto FMODAudioEngine::activateQueuedMusic(int channel) -> decltype(activateQueuedMusic(channel)) {
	using FunctionType = decltype(activateQueuedMusic(channel))(*)(FMODAudioEngine*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d6880, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, channel);
}

auto FMODAudioEngine::channelForChannelID(int id) -> decltype(channelForChannelID(id)) {
	using FunctionType = decltype(channelForChannelID(id))(*)(FMODAudioEngine*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3cb1c0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto FMODAudioEngine::channelForUniqueID(int id) -> decltype(channelForUniqueID(id)) {
	using FunctionType = decltype(channelForUniqueID(id))(*)(FMODAudioEngine*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d2cc0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto FMODAudioEngine::channelLinkSound(int id, FMODSound* sound) -> decltype(channelLinkSound(id, sound)) {
	using FunctionType = decltype(channelLinkSound(id, sound))(*)(FMODAudioEngine*, int, FMODSound*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d2130, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id, sound);
}

auto FMODAudioEngine::channelStopped(FMOD::Channel* channel, bool remove) -> decltype(channelStopped(channel, remove)) {
	using FunctionType = decltype(channelStopped(channel, remove))(*)(FMODAudioEngine*, FMOD::Channel*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d28d0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, channel, remove);
}

auto FMODAudioEngine::channelUnlinkSound(int id) -> decltype(channelUnlinkSound(id)) {
	using FunctionType = decltype(channelUnlinkSound(id))(*)(FMODAudioEngine*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d2670, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto FMODAudioEngine::clearAllAudio() -> decltype(clearAllAudio()) {
	using FunctionType = decltype(clearAllAudio())(*)(FMODAudioEngine*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3cb420, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto FMODAudioEngine::countActiveEffects() -> decltype(countActiveEffects()) {
	using FunctionType = decltype(countActiveEffects())(*)(FMODAudioEngine*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d03b0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto FMODAudioEngine::countActiveMusic() -> decltype(countActiveMusic()) {
	using FunctionType = decltype(countActiveMusic())(*)(FMODAudioEngine*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d0490, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto FMODAudioEngine::createStream(std::string path) -> decltype(createStream(path)) {
	using FunctionType = decltype(createStream(path))(*)(FMODAudioEngine*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d7610, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, path);
}

auto FMODAudioEngine::disableMetering() -> decltype(disableMetering()) {
	using FunctionType = decltype(disableMetering())(*)(FMODAudioEngine*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d0a00, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto FMODAudioEngine::enableMetering() -> decltype(enableMetering()) {
	using FunctionType = decltype(enableMetering())(*)(FMODAudioEngine*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d09d0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto FMODAudioEngine::fadeInBackgroundMusic(float value) -> decltype(fadeInBackgroundMusic(value)) {
	using FunctionType = decltype(fadeInBackgroundMusic(value))(*)(FMODAudioEngine*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2eece0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, value);
}

auto FMODAudioEngine::fadeInMusic(float duration, int channel) -> decltype(fadeInMusic(duration, channel)) {
	using FunctionType = decltype(fadeInMusic(duration, channel))(*)(FMODAudioEngine*, float, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d4620, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, duration, channel);
}

auto FMODAudioEngine::fadeMusic(float duration, int channel, float startVolume, float endVolume) -> decltype(fadeMusic(duration, channel, startVolume, endVolume)) {
	using FunctionType = decltype(fadeMusic(duration, channel, startVolume, endVolume))(*)(FMODAudioEngine*, float, int, float, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d7530, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, duration, channel, startVolume, endVolume);
}

auto FMODAudioEngine::fadeOutMusic(float duration, int channel) -> decltype(fadeOutMusic(duration, channel)) {
	using FunctionType = decltype(fadeOutMusic(duration, channel))(*)(FMODAudioEngine*, float, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d7450, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, duration, channel);
}

auto FMODAudioEngine::getActiveMusic(int id) -> decltype(getActiveMusic(id)) {
	using FunctionType = decltype(getActiveMusic(id))(*)(FMODAudioEngine*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d41a0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto FMODAudioEngine::getActiveMusicChannel(int musicID) -> decltype(getActiveMusicChannel(musicID)) {
	using FunctionType = decltype(getActiveMusicChannel(musicID))(*)(FMODAudioEngine*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3cece0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, musicID);
}

auto FMODAudioEngine::getBackgroundMusicVolume() -> decltype(getBackgroundMusicVolume()) {
	using FunctionType = decltype(getBackgroundMusicVolume())(*)(FMODAudioEngine*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d3ed0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto FMODAudioEngine::getChannelGroup(int id, bool reverb) -> decltype(getChannelGroup(id, reverb)) {
	using FunctionType = decltype(getChannelGroup(id, reverb))(*)(FMODAudioEngine*, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d0c20, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id, reverb);
}

auto FMODAudioEngine::getFMODStatus(int unused) -> decltype(getFMODStatus(unused)) {
	using FunctionType = decltype(getFMODStatus(unused))(*)(FMODAudioEngine*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d78b0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, unused);
}

auto FMODAudioEngine::getMeteringValue() -> decltype(getMeteringValue()) {
	using FunctionType = decltype(getMeteringValue())(*)(FMODAudioEngine*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d0a10, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto FMODAudioEngine::getMusicLengthMS(int channel) -> decltype(getMusicLengthMS(channel)) {
	using FunctionType = decltype(getMusicLengthMS(channel))(*)(FMODAudioEngine*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d6e10, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, channel);
}

auto FMODAudioEngine::getMusicTime(int channel) -> decltype(getMusicTime(channel)) {
	using FunctionType = decltype(getMusicTime(channel))(*)(FMODAudioEngine*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d6d90, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, channel);
}

auto FMODAudioEngine::getMusicTimeMS(int channel) -> decltype(getMusicTimeMS(channel)) {
	using FunctionType = decltype(getMusicTimeMS(channel))(*)(FMODAudioEngine*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d6d20, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, channel);
}

auto FMODAudioEngine::getNextChannelID() -> decltype(getNextChannelID()) {
	using FunctionType = decltype(getNextChannelID())(*)(FMODAudioEngine*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d2190, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto FMODAudioEngine::getTweenContainer(AudioTargetType type) -> decltype(getTweenContainer(type)) {
	using FunctionType = decltype(getTweenContainer(type))(*)(FMODAudioEngine*, AudioTargetType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d0550, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, type);
}

auto FMODAudioEngine::isAnyPersistentPlaying() -> decltype(isAnyPersistentPlaying()) {
	using FunctionType = decltype(isAnyPersistentPlaying())(*)(FMODAudioEngine*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d5490, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto FMODAudioEngine::isEffectLoaded(std::string path) -> decltype(isEffectLoaded(path)) {
	using FunctionType = decltype(isEffectLoaded(path))(*)(FMODAudioEngine*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d1970, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, path);
}

auto FMODAudioEngine::isMusicPlaying(int musicID) -> decltype(isMusicPlaying(musicID)) {
	using FunctionType = decltype(isMusicPlaying(musicID))(*)(FMODAudioEngine*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d3f70, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, musicID);
}

auto FMODAudioEngine::isMusicPlaying(std::string path, int musicID) -> decltype(isMusicPlaying(path, musicID)) {
	using FunctionType = decltype(isMusicPlaying(path, musicID))(*)(FMODAudioEngine*, std::string, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d40a0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, path, musicID);
}

auto FMODAudioEngine::isPersistentMatchPlaying(std::string path, int musicID) -> decltype(isPersistentMatchPlaying(path, musicID)) {
	using FunctionType = decltype(isPersistentMatchPlaying(path, musicID))(*)(FMODAudioEngine*, std::string, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d4790, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, path, musicID);
}

auto FMODAudioEngine::isSoundReady(FMOD::Sound* sound) -> decltype(isSoundReady(sound)) {
	using FunctionType = decltype(isSoundReady(sound))(*)(FMODAudioEngine*, FMOD::Sound*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d54c0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sound);
}

auto FMODAudioEngine::lengthForSound(std::string path) -> decltype(lengthForSound(path)) {
	using FunctionType = decltype(lengthForSound(path))(*)(FMODAudioEngine*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d3be0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, path);
}

auto FMODAudioEngine::loadAndPlayMusic(std::string path, unsigned int time, int musicID) -> decltype(loadAndPlayMusic(path, time, musicID)) {
	using FunctionType = decltype(loadAndPlayMusic(path, time, musicID))(*)(FMODAudioEngine*, std::string, unsigned int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d4390, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, path, time, musicID);
}

auto FMODAudioEngine::loadAudioState(FMODAudioState& state) -> decltype(loadAudioState(state)) {
	using FunctionType = decltype(loadAudioState(state))(*)(FMODAudioEngine*, FMODAudioState&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3cd4f0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, state);
}

auto FMODAudioEngine::loadMusic(std::string path) -> decltype(loadMusic(path)) {
	using FunctionType = decltype(loadMusic(path))(*)(FMODAudioEngine*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d4700, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, path);
}

auto FMODAudioEngine::loadMusic(std::string path, float speed, float unknown, float volume, bool shouldLoop, int musicID, int channelID, bool dontReset) -> decltype(loadMusic(path, speed, unknown, volume, shouldLoop, musicID, channelID, dontReset)) {
	using FunctionType = decltype(loadMusic(path, speed, unknown, volume, shouldLoop, musicID, channelID, dontReset))(*)(FMODAudioEngine*, std::string, float, float, float, bool, int, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3ce510, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, path, speed, unknown, volume, shouldLoop, musicID, channelID, dontReset);
}

auto FMODAudioEngine::pauseAllAudio() -> decltype(pauseAllAudio()) {
	using FunctionType = decltype(pauseAllAudio())(*)(FMODAudioEngine*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3cb390, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto FMODAudioEngine::pauseAllMusic(bool force) -> decltype(pauseAllMusic(force)) {
	using FunctionType = decltype(pauseAllMusic(force))(*)(FMODAudioEngine*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d3fb0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, force);
}

auto FMODAudioEngine::pauseMusic(int musicChannel) -> decltype(pauseMusic(musicChannel)) {
	using FunctionType = decltype(pauseMusic(musicChannel))(*)(FMODAudioEngine*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d7430, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, musicChannel);
}

auto FMODAudioEngine::playEffect(std::string path) -> decltype(playEffect(path)) {
	using FunctionType = decltype(playEffect(path))(*)(FMODAudioEngine*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d1590, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, path);
}

auto FMODAudioEngine::playEffect(std::string path, float speed, float unknown, float volume) -> decltype(playEffect(path, speed, unknown, volume)) {
	using FunctionType = decltype(playEffect(path, speed, unknown, volume))(*)(FMODAudioEngine*, std::string, float, float, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d1620, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, path, speed, unknown, volume);
}

auto FMODAudioEngine::playEffectAdvanced(std::string path, float speed, float unknown, float volume, float pitch, bool fastFourierTransform, bool reverb, int startMillis, int endMillis, int fadeIn, int fadeOut, bool loopEnabled, int effectID, bool override, bool noPreload, int channelID, int uniqueID, float minInterval, int sfxGroup) -> decltype(playEffectAdvanced(path, speed, unknown, volume, pitch, fastFourierTransform, reverb, startMillis, endMillis, fadeIn, fadeOut, loopEnabled, effectID, override, noPreload, channelID, uniqueID, minInterval, sfxGroup)) {
	using FunctionType = decltype(playEffectAdvanced(path, speed, unknown, volume, pitch, fastFourierTransform, reverb, startMillis, endMillis, fadeIn, fadeOut, loopEnabled, effectID, override, noPreload, channelID, uniqueID, minInterval, sfxGroup))(*)(FMODAudioEngine*, std::string, float, float, float, float, bool, bool, int, int, int, int, bool, int, bool, bool, int, int, float, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3ceea0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, path, speed, unknown, volume, pitch, fastFourierTransform, reverb, startMillis, endMillis, fadeIn, fadeOut, loopEnabled, effectID, override, noPreload, channelID, uniqueID, minInterval, sfxGroup);
}

auto FMODAudioEngine::playEffectAsync(std::string path) -> decltype(playEffectAsync(path)) {
	using FunctionType = decltype(playEffectAsync(path))(*)(FMODAudioEngine*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d1710, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, path);
}

auto FMODAudioEngine::playMusic(std::string path, bool shouldLoop, float fadeInTime, int channel) -> decltype(playMusic(path, shouldLoop, fadeInTime, channel)) {
	using FunctionType = decltype(playMusic(path, shouldLoop, fadeInTime, channel))(*)(FMODAudioEngine*, std::string, bool, float, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d4460, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, path, shouldLoop, fadeInTime, channel);
}

auto FMODAudioEngine::preloadEffect(std::string path) -> decltype(preloadEffect(path)) {
	using FunctionType = decltype(preloadEffect(path))(*)(FMODAudioEngine*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3ca5a0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, path);
}

auto FMODAudioEngine::preloadEffectAsync(std::string path) -> decltype(preloadEffectAsync(path)) {
	using FunctionType = decltype(preloadEffectAsync(path))(*)(FMODAudioEngine*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d21b0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, path);
}

auto FMODAudioEngine::preloadMusic(std::string path, bool noRelease, int musicID) -> decltype(preloadMusic(path, noRelease, musicID)) {
	using FunctionType = decltype(preloadMusic(path, noRelease, musicID))(*)(FMODAudioEngine*, std::string, bool, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d48b0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, path, noRelease, musicID);
}

auto FMODAudioEngine::printResult(FMOD_RESULT result) -> decltype(printResult(result)) {
	using FunctionType = decltype(printResult(result))(*)(FMODAudioEngine*, FMOD_RESULT);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2456c0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, result);
}

auto FMODAudioEngine::queuedEffectFinishedLoading(std::string path) -> decltype(queuedEffectFinishedLoading(path)) {
	using FunctionType = decltype(queuedEffectFinishedLoading(path))(*)(FMODAudioEngine*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d5500, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, path);
}

auto FMODAudioEngine::queuePlayEffect(std::string audioFilename, float speed, float unknown, float volume, float pitch, bool fastFourierTransform, bool reverb, int start, int end, int fadeIn, int fadeOut, bool loop, int effectID, bool override, int uniqueID, float minInterval, int group) -> decltype(queuePlayEffect(audioFilename, speed, unknown, volume, pitch, fastFourierTransform, reverb, start, end, fadeIn, fadeOut, loop, effectID, override, uniqueID, minInterval, group)) {
	using FunctionType = decltype(queuePlayEffect(audioFilename, speed, unknown, volume, pitch, fastFourierTransform, reverb, start, end, fadeIn, fadeOut, loop, effectID, override, uniqueID, minInterval, group))(*)(FMODAudioEngine*, std::string, float, float, float, float, bool, bool, int, int, int, int, bool, int, bool, int, float, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d1990, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, audioFilename, speed, unknown, volume, pitch, fastFourierTransform, reverb, start, end, fadeIn, fadeOut, loop, effectID, override, uniqueID, minInterval, group);
}

auto FMODAudioEngine::queueStartMusic(std::string audioFilename, float pitch, float unknown, float volume, bool loop, int start, int end, int fadeIn, int fadeOut, int musicID, bool p10, int channelID, bool noPrepare, bool dontReset) -> decltype(queueStartMusic(audioFilename, pitch, unknown, volume, loop, start, end, fadeIn, fadeOut, musicID, p10, channelID, noPrepare, dontReset)) {
	using FunctionType = decltype(queueStartMusic(audioFilename, pitch, unknown, volume, loop, start, end, fadeIn, fadeOut, musicID, p10, channelID, noPrepare, dontReset))(*)(FMODAudioEngine*, std::string, float, float, float, bool, int, int, int, int, int, bool, int, bool, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d51b0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, audioFilename, pitch, unknown, volume, loop, start, end, fadeIn, fadeOut, musicID, p10, channelID, noPrepare, dontReset);
}

auto FMODAudioEngine::registerChannel(FMOD::Channel* channel, int channelID, int effectID) -> decltype(registerChannel(channel, channelID, effectID)) {
	using FunctionType = decltype(registerChannel(channel, channelID, effectID))(*)(FMODAudioEngine*, FMOD::Channel*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d1fa0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, channel, channelID, effectID);
}

auto FMODAudioEngine::releaseRemovedSounds() -> decltype(releaseRemovedSounds()) {
	using FunctionType = decltype(releaseRemovedSounds())(*)(FMODAudioEngine*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3cc560, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto FMODAudioEngine::resumeAllAudio() -> decltype(resumeAllAudio()) {
	using FunctionType = decltype(resumeAllAudio())(*)(FMODAudioEngine*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3cb3e0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto FMODAudioEngine::resumeAllMusic() -> decltype(resumeAllMusic()) {
	using FunctionType = decltype(resumeAllMusic())(*)(FMODAudioEngine*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d4040, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto FMODAudioEngine::resumeEffect(unsigned int effect) -> decltype(resumeEffect(effect)) {
	using FunctionType = decltype(resumeEffect(effect))(*)(FMODAudioEngine*, unsigned int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xc3e20, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, effect);
}

auto FMODAudioEngine::resumeMusic(int musicChannel) -> decltype(resumeMusic(musicChannel)) {
	using FunctionType = decltype(resumeMusic(musicChannel))(*)(FMODAudioEngine*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3cecc0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, musicChannel);
}

auto FMODAudioEngine::saveAudioState(FMODAudioState& state) -> decltype(saveAudioState(state)) {
	using FunctionType = decltype(saveAudioState(state))(*)(FMODAudioEngine*, FMODAudioState&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3ccec0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, state);
}

auto FMODAudioEngine::setBackgroundMusicVolume(float volume) -> decltype(setBackgroundMusicVolume(volume)) {
	using FunctionType = decltype(setBackgroundMusicVolume(volume))(*)(FMODAudioEngine*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d3ee0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, volume);
}

auto FMODAudioEngine::setChannelPitch(int id, AudioTargetType type, float pitch) -> decltype(setChannelPitch(id, type, pitch)) {
	using FunctionType = decltype(setChannelPitch(id, type, pitch))(*)(FMODAudioEngine*, int, AudioTargetType, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d08a0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id, type, pitch);
}

auto FMODAudioEngine::setEffectsVolume(float volume) -> decltype(setEffectsVolume(volume)) {
	using FunctionType = decltype(setEffectsVolume(volume))(*)(FMODAudioEngine*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d3f20, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, volume);
}

auto FMODAudioEngine::setMusicTimeMS(unsigned int time, bool dontWait, int musicID) -> decltype(setMusicTimeMS(time, dontWait, musicID)) {
	using FunctionType = decltype(setMusicTimeMS(time, dontWait, musicID))(*)(FMODAudioEngine*, unsigned int, bool, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3cfbf0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, time, dontWait, musicID);
}

auto FMODAudioEngine::setup() -> decltype(setup()) {
	using FunctionType = decltype(setup())(*)(FMODAudioEngine*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3c9e30, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto FMODAudioEngine::setupAudioEngine() -> decltype(setupAudioEngine()) {
	using FunctionType = decltype(setupAudioEngine())(*)(FMODAudioEngine*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3ca280, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto FMODAudioEngine::startMusic(int start, int end, int fadeIn, int fadeOut, bool loop, int musicID, bool noResume, bool dontReset) -> decltype(startMusic(start, end, fadeIn, fadeOut, loop, musicID, noResume, dontReset)) {
	using FunctionType = decltype(startMusic(start, end, fadeIn, fadeOut, loop, musicID, noResume, dontReset))(*)(FMODAudioEngine*, int, int, int, int, bool, int, bool, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d4c00, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, start, end, fadeIn, fadeOut, loop, musicID, noResume, dontReset);
}

auto FMODAudioEngine::stop() -> decltype(stop()) {
	using FunctionType = decltype(stop())(*)(FMODAudioEngine*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3cb390, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto FMODAudioEngine::stopAllEffects() -> decltype(stopAllEffects()) {
	using FunctionType = decltype(stopAllEffects())(*)(FMODAudioEngine*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3cb500, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto FMODAudioEngine::stopAllMusic(bool clear) -> decltype(stopAllMusic(clear)) {
	using FunctionType = decltype(stopAllMusic(clear))(*)(FMODAudioEngine*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3cb930, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, clear);
}

auto FMODAudioEngine::stopAndGetFade(FMOD::Channel* channel) -> decltype(stopAndGetFade(channel)) {
	using FunctionType = decltype(stopAndGetFade(channel))(*)(FMODAudioEngine*, FMOD::Channel*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d3470, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, channel);
}

auto FMODAudioEngine::stopAndRemoveMusic(int id) -> decltype(stopAndRemoveMusic(id)) {
	using FunctionType = decltype(stopAndRemoveMusic(id))(*)(FMODAudioEngine*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d70d0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto FMODAudioEngine::stopChannel(int id) -> decltype(stopChannel(id)) {
	using FunctionType = decltype(stopChannel(id))(*)(FMODAudioEngine*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d1f20, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto FMODAudioEngine::stopChannel(FMOD::Channel* channel, bool loop, float delay) -> decltype(stopChannel(channel, loop, delay)) {
	using FunctionType = decltype(stopChannel(channel, loop, delay))(*)(FMODAudioEngine*, FMOD::Channel*, bool, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d32b0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, channel, loop, delay);
}

auto FMODAudioEngine::stopChannel(int id, AudioTargetType type, bool loop, float delay) -> decltype(stopChannel(id, type, loop, delay)) {
	using FunctionType = decltype(stopChannel(id, type, loop, delay))(*)(FMODAudioEngine*, int, AudioTargetType, bool, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d2ce0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id, type, loop, delay);
}

auto FMODAudioEngine::stopChannelTween(int id, AudioTargetType target, AudioModType mod) -> decltype(stopChannelTween(id, target, mod)) {
	using FunctionType = decltype(stopChannelTween(id, target, mod))(*)(FMODAudioEngine*, int, AudioTargetType, AudioModType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d0580, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id, target, mod);
}

auto FMODAudioEngine::stopChannelTweens(int id, AudioTargetType target) -> decltype(stopChannelTweens(id, target)) {
	using FunctionType = decltype(stopChannelTweens(id, target))(*)(FMODAudioEngine*, int, AudioTargetType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d0670, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id, target);
}

auto FMODAudioEngine::stopMusic(int id) -> decltype(stopMusic(id)) {
	using FunctionType = decltype(stopMusic(id))(*)(FMODAudioEngine*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d5900, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto FMODAudioEngine::stopMusicNotInSet(std::unordered_set<int>& musicIDs) -> decltype(stopMusicNotInSet(musicIDs)) {
	using FunctionType = decltype(stopMusicNotInSet(musicIDs))(*)(FMODAudioEngine*, std::unordered_set<int>&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d6ea0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, musicIDs);
}

auto FMODAudioEngine::storeEffect(FMOD::Sound* sound, std::string path) -> decltype(storeEffect(sound, path)) {
	using FunctionType = decltype(storeEffect(sound, path))(*)(FMODAudioEngine*, FMOD::Sound*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d3aa0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sound, path);
}

auto FMODAudioEngine::swapMusicIndex(int musicID, int channelID) -> decltype(swapMusicIndex(musicID, channelID)) {
	using FunctionType = decltype(swapMusicIndex(musicID, channelID))(*)(FMODAudioEngine*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d5910, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, musicID, channelID);
}

auto FMODAudioEngine::testFunction(int unknown) -> decltype(testFunction(unknown)) {
	using FunctionType = decltype(testFunction(unknown))(*)(FMODAudioEngine*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x368ef0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, unknown);
}

auto FMODAudioEngine::triggerQueuedMusic(FMODQueuedMusic music) -> decltype(triggerQueuedMusic(music)) {
	using FunctionType = decltype(triggerQueuedMusic(music))(*)(FMODAudioEngine*, FMODQueuedMusic);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3cfd10, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, music);
}

auto FMODAudioEngine::unloadAllEffects() -> decltype(unloadAllEffects()) {
	using FunctionType = decltype(unloadAllEffects())(*)(FMODAudioEngine*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d3c50, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto FMODAudioEngine::unloadEffect(std::string path) -> decltype(unloadEffect(path)) {
	using FunctionType = decltype(unloadEffect(path))(*)(FMODAudioEngine*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d3c40, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, path);
}

auto FMODAudioEngine::unregisterChannel(int id) -> decltype(unregisterChannel(id)) {
	using FunctionType = decltype(unregisterChannel(id))(*)(FMODAudioEngine*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d2450, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto FMODAudioEngine::updateBackgroundFade() -> decltype(updateBackgroundFade()) {
	using FunctionType = decltype(updateBackgroundFade())(*)(FMODAudioEngine*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3ccaa0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto FMODAudioEngine::updateChannel(int channel, AudioTargetType target, AudioModType mod, float duration, float value) -> decltype(updateChannel(channel, target, mod, duration, value)) {
	using FunctionType = decltype(updateChannel(channel, target, mod, duration, value))(*)(FMODAudioEngine*, int, AudioTargetType, AudioModType, float, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d35c0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, channel, target, mod, duration, value);
}

auto FMODAudioEngine::updateChannelTweens(float dt) -> decltype(updateChannelTweens(dt)) {
	using FunctionType = decltype(updateChannelTweens(dt))(*)(FMODAudioEngine*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3cccb0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, dt);
}

auto FMODAudioEngine::updateMetering() -> decltype(updateMetering()) {
	using FunctionType = decltype(updateMetering())(*)(FMODAudioEngine*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3ccb50, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto FMODAudioEngine::updateQueuedEffects() -> decltype(updateQueuedEffects()) {
	using FunctionType = decltype(updateQueuedEffects())(*)(FMODAudioEngine*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3cc110, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto FMODAudioEngine::updateQueuedMusic() -> decltype(updateQueuedMusic()) {
	using FunctionType = decltype(updateQueuedMusic())(*)(FMODAudioEngine*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3cc640, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto FMODAudioEngine::updateReverb(FMODReverbPreset preset, bool force) -> decltype(updateReverb(preset, force)) {
	using FunctionType = decltype(updateReverb(preset, force))(*)(FMODAudioEngine*, FMODReverbPreset, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3ca870, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, preset, force);
}

auto FMODAudioEngine::updateTemporaryEffects() -> decltype(updateTemporaryEffects()) {
	using FunctionType = decltype(updateTemporaryEffects())(*)(FMODAudioEngine*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3cc2f0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto FMODAudioEngine::waitUntilSoundReady(FMOD::Sound* sound) -> decltype(waitUntilSoundReady(sound)) {
	using FunctionType = decltype(waitUntilSoundReady(sound))(*)(FMODAudioEngine*, FMOD::Sound*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d6c80, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this, sound);
}
