# Re-applies the GameObjectPhysics copy shim over the generated bindings.
# Idempotent: safe to run after every codegen regeneration.
file(GLOB GRAPE_PHYSICS_HEADERS "${BINDINGS_DIR}/binding*/GameObjectPhysics.hpp")
foreach(header ${GRAPE_PHYSICS_HEADERS})
    file(READ "${header}" contents)
    if (NOT contents MATCHES "GRAPE_PHYSICS_COPY_SHIM_V2")
        string(REPLACE "#pragma once" "#pragma once\n#include <cstring>" contents "${contents}")
        string(REPLACE "class GameObjectPhysics {\npublic:" "class GameObjectPhysics {\npublic:\n    // GRAPE_PHYSICS_COPY_SHIM_V2: see the root CMakeLists.txt\n    GameObjectPhysics(GameObjectPhysics const& other) { std::memcpy(this, &other, sizeof(*this)); }\n    GameObjectPhysics& operator=(GameObjectPhysics const& other) { std::memcpy(this, &other, sizeof(*this)); return *this; }" contents "${contents}")
        file(WRITE "${header}" "${contents}")
    endif()
endforeach()

# MSVC odr-uses &Base::Function in the GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_*
# helpers even though they only feed a static_assert, and the Windows bindings
# do not define the functions that have no address there, which turns every
# such helper into an unresolved symbol at link time. The static_asserts are
# compile-time diagnostics only, so the invocations can be dropped.
file(GLOB GRAPE_MODIFY_HEADERS "${BINDINGS_DIR}/modify*/*.hpp")
foreach(header ${GRAPE_MODIFY_HEADERS})
    file(READ "${header}" contents)
    if (NOT contents MATCHES "GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_(DEFINED|INLINE)\\(")
        continue()
    endif()
    string(REGEX REPLACE "GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED\\([^\n]*\\)" "" contents "${contents}")
    string(REGEX REPLACE "GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE\\([^\n]*\\)" "" contents "${contents}")
    file(WRITE "${header}" "${contents}")
endforeach()
