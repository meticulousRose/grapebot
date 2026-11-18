
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/mapping/ZipUtils.hpp>
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

auto cocos2d::ZipUtils::base64DecodeEnc(std::string const& p0, std::string p1) -> decltype(base64DecodeEnc(p0, p1)) {
	using FunctionType = decltype(base64DecodeEnc(p0, p1))(*)(std::string const&, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x19b234, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1);
}

auto cocos2d::ZipUtils::base64EncodeEnc(std::string const& p0, std::string p1) -> decltype(base64EncodeEnc(p0, p1)) {
	using FunctionType = decltype(base64EncodeEnc(p0, p1))(*)(std::string const&, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x19b4a8, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1);
}

auto cocos2d::ZipUtils::ccDeflateMemory(unsigned char* data, unsigned int size, unsigned char** out, int level) -> decltype(ccDeflateMemory(data, size, out, level)) {
	using FunctionType = decltype(ccDeflateMemory(data, size, out, level))(*)(unsigned char*, unsigned int, unsigned char**, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x19ab48, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(data, size, out, level);
}

auto cocos2d::ZipUtils::compressString(std::string const& data, bool encrypt, int encryptionKey, int level) -> decltype(compressString(data, encrypt, encryptionKey, level)) {
	using FunctionType = decltype(compressString(data, encrypt, encryptionKey, level))(*)(std::string const&, bool, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x19a884, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(data, encrypt, encryptionKey, level);
}

auto cocos2d::ZipUtils::decompressString(std::string const& data, bool encrypt, int encryptionKey) -> decltype(decompressString(data, encrypt, encryptionKey)) {
	using FunctionType = decltype(decompressString(data, encrypt, encryptionKey))(*)(std::string const&, bool, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x19afac, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(data, encrypt, encryptionKey);
}

auto cocos2d::ZipUtils::decompressString2(unsigned char* data, bool encrypt, int size, int encryptionKey) -> decltype(decompressString2(data, encrypt, size, encryptionKey)) {
	using FunctionType = decltype(decompressString2(data, encrypt, size, encryptionKey))(*)(unsigned char*, bool, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x19ac8c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(data, encrypt, size, encryptionKey);
}

auto cocos2d::ZipUtils::hexToChar(std::string const& p0) -> decltype(hexToChar(p0)) {
	using FunctionType = decltype(hexToChar(p0))(*)(std::string const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x19bc9c, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0);
}

auto cocos2d::ZipUtils::urlDecode(std::string const& p0) -> decltype(urlDecode(p0)) {
	using FunctionType = decltype(urlDecode(p0))(*)(std::string const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x19b930, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0);
}
