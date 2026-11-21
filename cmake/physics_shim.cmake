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
