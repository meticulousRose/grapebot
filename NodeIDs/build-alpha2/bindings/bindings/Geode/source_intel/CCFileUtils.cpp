#include <Geode/cocos/cocoa/CCObject.h>

#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/mapping/CCFileUtils.hpp>
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

cocos2d::CCFileUtils::CCFileUtils() : cocos2d::CCFileUtils(geode::CutoffConstructor, sizeof(cocos2d::CCFileUtils)) {
	// here we construct it as normal as we can, then destruct it
	// using the generated functions. this ensures no memory gets leaked
	// no crashes :pray:
	geode::DestructorLock::addLock(this);
	cocos2d::CCFileUtils::~CCFileUtils();

	using FunctionType = void(*)(cocos2d::CCFileUtils*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x428590, tulip::hook::TulipConvention::Default);
	reinterpret_cast<FunctionType>(func)(this);
}

cocos2d::CCFileUtils::~CCFileUtils() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(cocos2d::CCFileUtils*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x1e5ad0, tulip::hook::TulipConvention::Default);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) cocos2d::CCFileUtils(geode::CutoffConstructor, sizeof(cocos2d::CCFileUtils));
		geode::DestructorLock::addLock(this);
	}
}

auto cocos2d::CCFileUtils::purgeFileUtils() -> decltype(purgeFileUtils()) {
	using FunctionType = decltype(purgeFileUtils())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x428560, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto cocos2d::CCFileUtils::sharedFileUtils() -> decltype(sharedFileUtils()) {
	using FunctionType = decltype(sharedFileUtils())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x6e50b0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto cocos2d::CCFileUtils::purgeCachedEntries() -> decltype(purgeCachedEntries()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&cocos2d::CCFileUtils::purgeCachedEntries), this);
	using FunctionType = decltype(purgeCachedEntries())(*)(cocos2d::CCFileUtils*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4287d0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto cocos2d::CCFileUtils::getFileData(char const* pszFileName, char const* pszMode, unsigned long* pSize) -> decltype(getFileData(pszFileName, pszMode, pSize)) {
	auto self = addresser::thunkAdjust(Resolve<char const*, char const*, unsigned long*>::func(&cocos2d::CCFileUtils::getFileData), this);
	using FunctionType = decltype(getFileData(pszFileName, pszMode, pSize))(*)(cocos2d::CCFileUtils*, char const*, char const*, unsigned long*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x428800, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, pszFileName, pszMode, pSize);
}

auto cocos2d::CCFileUtils::getFileDataFromZip(char const* pszZipFilePath, char const* pszFileName, unsigned long* pSize) -> decltype(getFileDataFromZip(pszZipFilePath, pszFileName, pSize)) {
	auto self = addresser::thunkAdjust(Resolve<char const*, char const*, unsigned long*>::func(&cocos2d::CCFileUtils::getFileDataFromZip), this);
	using FunctionType = decltype(getFileDataFromZip(pszZipFilePath, pszFileName, pSize))(*)(cocos2d::CCFileUtils*, char const*, char const*, unsigned long*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x428940, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, pszZipFilePath, pszFileName, pSize);
}

auto cocos2d::CCFileUtils::fullPathForFilename(char const* pszFileName, bool skipSuffix) -> decltype(fullPathForFilename(pszFileName, skipSuffix)) {
	auto self = addresser::thunkAdjust(Resolve<char const*, bool>::func(&cocos2d::CCFileUtils::fullPathForFilename), this);
	using FunctionType = decltype(fullPathForFilename(pszFileName, skipSuffix))(*)(cocos2d::CCFileUtils*, char const*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4292b0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, pszFileName, skipSuffix);
}

auto cocos2d::CCFileUtils::removeFullPath(char const* path) -> decltype(removeFullPath(path)) {
	auto self = addresser::thunkAdjust(Resolve<char const*>::func(&cocos2d::CCFileUtils::removeFullPath), this);
	using FunctionType = decltype(removeFullPath(path))(*)(cocos2d::CCFileUtils*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x42a0c0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, path);
}

auto cocos2d::CCFileUtils::loadFilenameLookupDictionaryFromFile(char const* filename) -> decltype(loadFilenameLookupDictionaryFromFile(filename)) {
	auto self = addresser::thunkAdjust(Resolve<char const*>::func(&cocos2d::CCFileUtils::loadFilenameLookupDictionaryFromFile), this);
	using FunctionType = decltype(loadFilenameLookupDictionaryFromFile(filename))(*)(cocos2d::CCFileUtils*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x42b3d0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, filename);
}

auto cocos2d::CCFileUtils::setFilenameLookupDictionary(cocos2d::CCDictionary* pFilenameLookupDict) -> decltype(setFilenameLookupDictionary(pFilenameLookupDict)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCDictionary*>::func(&cocos2d::CCFileUtils::setFilenameLookupDictionary), this);
	using FunctionType = decltype(setFilenameLookupDictionary(pFilenameLookupDict))(*)(cocos2d::CCFileUtils*, cocos2d::CCDictionary*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x42b360, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, pFilenameLookupDict);
}

auto cocos2d::CCFileUtils::fullPathFromRelativeFile(char const* pszFilename, char const* pszRelativeFile) -> decltype(fullPathFromRelativeFile(pszFilename, pszRelativeFile)) {
	auto self = addresser::thunkAdjust(Resolve<char const*, char const*>::func(&cocos2d::CCFileUtils::fullPathFromRelativeFile), this);
	using FunctionType = decltype(fullPathFromRelativeFile(pszFilename, pszRelativeFile))(*)(cocos2d::CCFileUtils*, char const*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x42a220, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, pszFilename, pszRelativeFile);
}

auto cocos2d::CCFileUtils::setSearchResolutionsOrder(std::vector<std::string> const& searchResolutionsOrder) -> decltype(setSearchResolutionsOrder(searchResolutionsOrder)) {
	auto self = addresser::thunkAdjust(Resolve<std::vector<std::string> const&>::func(&cocos2d::CCFileUtils::setSearchResolutionsOrder), this);
	using FunctionType = decltype(setSearchResolutionsOrder(searchResolutionsOrder))(*)(cocos2d::CCFileUtils*, std::vector<std::string> const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x42a480, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, searchResolutionsOrder);
}

auto cocos2d::CCFileUtils::addSearchResolutionsOrder(char const* order) -> decltype(addSearchResolutionsOrder(order)) {
	auto self = addresser::thunkAdjust(Resolve<char const*>::func(&cocos2d::CCFileUtils::addSearchResolutionsOrder), this);
	using FunctionType = decltype(addSearchResolutionsOrder(order))(*)(cocos2d::CCFileUtils*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x42a6c0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, order);
}

auto cocos2d::CCFileUtils::getSearchResolutionsOrder() -> decltype(getSearchResolutionsOrder()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&cocos2d::CCFileUtils::getSearchResolutionsOrder), this);
	using FunctionType = decltype(getSearchResolutionsOrder())(*)(cocos2d::CCFileUtils*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x42a7a0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto cocos2d::CCFileUtils::setSearchPaths(std::vector<std::string> const& searchPaths) -> decltype(setSearchPaths(searchPaths)) {
	auto self = addresser::thunkAdjust(Resolve<std::vector<std::string> const&>::func(&cocos2d::CCFileUtils::setSearchPaths), this);
	using FunctionType = decltype(setSearchPaths(searchPaths))(*)(cocos2d::CCFileUtils*, std::vector<std::string> const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x42a7c0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, searchPaths);
}

auto cocos2d::CCFileUtils::addSearchPath(char const* path) -> decltype(addSearchPath(path)) {
	auto self = addresser::thunkAdjust(Resolve<char const*>::func(&cocos2d::CCFileUtils::addSearchPath), this);
	using FunctionType = decltype(addSearchPath(path))(*)(cocos2d::CCFileUtils*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x42ac60, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, path);
}

auto cocos2d::CCFileUtils::removeSearchPath(char const* path) -> decltype(removeSearchPath(path)) {
	auto self = addresser::thunkAdjust(Resolve<char const*>::func(&cocos2d::CCFileUtils::removeSearchPath), this);
	using FunctionType = decltype(removeSearchPath(path))(*)(cocos2d::CCFileUtils*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x42af70, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, path);
}

auto cocos2d::CCFileUtils::getSearchPaths() -> decltype(getSearchPaths()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&cocos2d::CCFileUtils::getSearchPaths), this);
	using FunctionType = decltype(getSearchPaths())(*)(cocos2d::CCFileUtils*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x42a7b0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto cocos2d::CCFileUtils::getWritablePath2() -> decltype(getWritablePath2()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&cocos2d::CCFileUtils::getWritablePath2), this);
	using FunctionType = decltype(getWritablePath2())(*)(cocos2d::CCFileUtils*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x42b770, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto cocos2d::CCFileUtils::isAbsolutePath(std::string const& strPath) -> decltype(isAbsolutePath(strPath)) {
	auto self = addresser::thunkAdjust(Resolve<std::string const&>::func(&cocos2d::CCFileUtils::isAbsolutePath), this);
	using FunctionType = decltype(isAbsolutePath(strPath))(*)(cocos2d::CCFileUtils*, std::string const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x42b6b0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, strPath);
}

auto cocos2d::CCFileUtils::setPopupNotify(bool bNotify) -> decltype(setPopupNotify(bNotify)) {
	auto self = addresser::thunkAdjust(Resolve<bool>::func(&cocos2d::CCFileUtils::setPopupNotify), this);
	using FunctionType = decltype(setPopupNotify(bNotify))(*)(cocos2d::CCFileUtils*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x42b6d0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, bNotify);
}

auto cocos2d::CCFileUtils::isPopupNotify() -> decltype(isPopupNotify()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&cocos2d::CCFileUtils::isPopupNotify), this);
	using FunctionType = decltype(isPopupNotify())(*)(cocos2d::CCFileUtils*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x42b6e0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto cocos2d::CCFileUtils::init() -> decltype(init()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&cocos2d::CCFileUtils::init), this);
	using FunctionType = decltype(init())(*)(cocos2d::CCFileUtils*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x428700, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto cocos2d::CCFileUtils::getNewFilename(char const* pszFileName) -> decltype(getNewFilename(pszFileName)) {
	auto self = addresser::thunkAdjust(Resolve<char const*>::func(&cocos2d::CCFileUtils::getNewFilename), this);
	using FunctionType = decltype(getNewFilename(pszFileName))(*)(cocos2d::CCFileUtils*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x428a70, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, pszFileName);
}

auto cocos2d::CCFileUtils::shouldUseHD() -> decltype(shouldUseHD()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&cocos2d::CCFileUtils::shouldUseHD), this);
	using FunctionType = decltype(shouldUseHD())(*)(cocos2d::CCFileUtils*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x428bf0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto cocos2d::CCFileUtils::addSuffix(std::string p0, std::string p1) -> decltype(addSuffix(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<std::string, std::string>::func(&cocos2d::CCFileUtils::addSuffix), this);
	using FunctionType = decltype(addSuffix(p0, p1))(*)(cocos2d::CCFileUtils*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x428c20, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto cocos2d::CCFileUtils::getPathForFilename(std::string const& filename, std::string const& resolutionDirectory, std::string const& searchPath) -> decltype(getPathForFilename(filename, resolutionDirectory, searchPath)) {
	auto self = addresser::thunkAdjust(Resolve<std::string const&, std::string const&, std::string const&>::func(&cocos2d::CCFileUtils::getPathForFilename), this);
	using FunctionType = decltype(getPathForFilename(filename, resolutionDirectory, searchPath))(*)(cocos2d::CCFileUtils*, std::string const&, std::string const&, std::string const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x428e60, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, filename, resolutionDirectory, searchPath);
}

auto cocos2d::CCFileUtils::getFullPathForDirectoryAndFilename(std::string const& strDirectory, std::string const& strFilename) -> decltype(getFullPathForDirectoryAndFilename(strDirectory, strFilename)) {
	auto self = addresser::thunkAdjust(Resolve<std::string const&, std::string const&>::func(&cocos2d::CCFileUtils::getFullPathForDirectoryAndFilename), this);
	using FunctionType = decltype(getFullPathForDirectoryAndFilename(strDirectory, strFilename))(*)(cocos2d::CCFileUtils*, std::string const&, std::string const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x42b540, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, strDirectory, strFilename);
}

auto cocos2d::CCFileUtils::createCCDictionaryWithContentsOfFile(std::string const& filename) -> decltype(createCCDictionaryWithContentsOfFile(filename)) {
	auto self = addresser::thunkAdjust(Resolve<std::string const&>::func(&cocos2d::CCFileUtils::createCCDictionaryWithContentsOfFile), this);
	using FunctionType = decltype(createCCDictionaryWithContentsOfFile(filename))(*)(cocos2d::CCFileUtils*, std::string const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x428530, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, filename);
}

auto cocos2d::CCFileUtils::writeToFile(cocos2d::CCDictionary* dict, std::string const& fullPath) -> decltype(writeToFile(dict, fullPath)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCDictionary*, std::string const&>::func(&cocos2d::CCFileUtils::writeToFile), this);
	using FunctionType = decltype(writeToFile(dict, fullPath))(*)(cocos2d::CCFileUtils*, cocos2d::CCDictionary*, std::string const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x428540, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, dict, fullPath);
}

auto cocos2d::CCFileUtils::createCCArrayWithContentsOfFile(std::string const& filename) -> decltype(createCCArrayWithContentsOfFile(filename)) {
	auto self = addresser::thunkAdjust(Resolve<std::string const&>::func(&cocos2d::CCFileUtils::createCCArrayWithContentsOfFile), this);
	using FunctionType = decltype(createCCArrayWithContentsOfFile(filename))(*)(cocos2d::CCFileUtils*, std::string const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x428550, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(self, filename);
}

auto cocos2d::CCFileUtils::removeAllPaths() -> decltype(removeAllPaths()) {
	using FunctionType = decltype(removeAllPaths())(*)(cocos2d::CCFileUtils*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x42b310, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(this);
}
