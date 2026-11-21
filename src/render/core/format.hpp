#pragma once

#include <array>
#include <cstddef>
#include <cstdint>

#include "../gl.hpp"

extern "C" {
#include <libavutil/pixfmt.h>
}

namespace grape::render {

#ifdef GEODE_IS_MACOS
// GD's macOS GL context is legacy 2.1 (GLSL 120): no #version directive,
// attribute/varying, gl_FragColor, texture2D.
#define GRAPE_GLSL ""
#define GRAPE_VERT_IN "attribute"
#define GRAPE_VERT_OUT "varying"
#define GRAPE_FRAG_IN "varying"
#define GRAPE_FRAG_PRELUDE ""
#define GRAPE_TEX_SAMPLE "texture2D(u_texture, v_texCoord)"
#define GRAPE_FRAG_WRITE(value) "gl_FragColor = (" value ");"
#else
#define GRAPE_GLSL "#version 130\n"
#define GRAPE_VERT_IN "in"
#define GRAPE_VERT_OUT "out"
#define GRAPE_FRAG_IN "in"
#define GRAPE_FRAG_PRELUDE ""
#define GRAPE_TEX_SAMPLE "texture2D(u_texture, v_texCoord)"
#define GRAPE_FRAG_WRITE(value) "gl_FragData[0] = (" value ");"
#endif

inline constexpr char const* PLANE_VERTEX_SHADER = GRAPE_GLSL R"(
)" GRAPE_VERT_IN R"( vec4 a_position;
)" GRAPE_VERT_IN R"( vec2 a_texCoord;
)" GRAPE_VERT_OUT R"( vec2 v_texCoord;
void main() {
    gl_Position = vec4(a_position.xy, 0.0, 1.0);
    v_texCoord = vec2(a_texCoord.x, 1.0 - a_texCoord.y);
}
)";

inline constexpr char const* FADE_FRAGMENT_SHADER =
    GRAPE_GLSL GRAPE_FRAG_PRELUDE R"(
uniform vec4 u_color;
void main() {
    )" GRAPE_FRAG_WRITE(R"(u_color)") R"(
}
)";

inline constexpr char const* SHADER_Y =
    GRAPE_GLSL GRAPE_FRAG_PRELUDE R"(
)" GRAPE_FRAG_IN R"( vec2 v_texCoord;
uniform sampler2D u_texture;
const vec3 coeffY = vec3(0.2126, 0.7152, 0.0722);
void main() {
    vec3 rgb = )" GRAPE_TEX_SAMPLE R"(.rgb;
    float y = dot(rgb, coeffY) * 219.0 / 255.0 + 16.0 / 255.0;
    )" GRAPE_FRAG_WRITE(R"(vec4(y, 0.0, 0.0, 1.0))") R"(
}
)";

inline constexpr char const* SHADER_UV =
    GRAPE_GLSL GRAPE_FRAG_PRELUDE R"(
)" GRAPE_FRAG_IN R"( vec2 v_texCoord;
uniform sampler2D u_texture;
const vec3 coeffU = vec3(-0.11457, -0.38543, 0.5);
const vec3 coeffV = vec3(0.5, -0.45415, -0.04585);
void main() {
    vec3 rgb = )" GRAPE_TEX_SAMPLE R"(.rgb;
    float u = (dot(rgb, coeffU) + 0.5) * 224.0 / 255.0 + 16.0 / 255.0;
    float v = (dot(rgb, coeffV) + 0.5) * 224.0 / 255.0 + 16.0 / 255.0;
    )" GRAPE_FRAG_WRITE(R"(vec4(u, v, 0.0, 1.0))") R"(
}
)";

inline constexpr char const* SHADER_U =
    GRAPE_GLSL GRAPE_FRAG_PRELUDE R"(
)" GRAPE_FRAG_IN R"( vec2 v_texCoord;
uniform sampler2D u_texture;
const vec3 coeffU = vec3(-0.11457, -0.38543, 0.5);
void main() {
    vec3 rgb = )" GRAPE_TEX_SAMPLE R"(.rgb;
    float u = (dot(rgb, coeffU) + 0.5) * 224.0 / 255.0 + 16.0 / 255.0;
    )" GRAPE_FRAG_WRITE(R"(vec4(u, 0.0, 0.0, 1.0))") R"(
}
)";

inline constexpr char const* SHADER_V =
    GRAPE_GLSL GRAPE_FRAG_PRELUDE R"(
)" GRAPE_FRAG_IN R"( vec2 v_texCoord;
uniform sampler2D u_texture;
const vec3 coeffV = vec3(0.5, -0.45415, -0.04585);
void main() {
    vec3 rgb = )" GRAPE_TEX_SAMPLE R"(.rgb;
    float v = (dot(rgb, coeffV) + 0.5) * 224.0 / 255.0 + 16.0 / 255.0;
    )" GRAPE_FRAG_WRITE(R"(vec4(v, 0.0, 0.0, 1.0))") R"(
}
)";

struct PlaneSpec {
    uint32_t m_widthShift = 0;
    uint32_t m_heightShift = 0;
    uint32_t m_bytesPerPixel = 1;
    GLenum m_readFormat = GL_RED;
    char const* m_fragmentShader = nullptr;
};

struct FormatSpec {
    AVPixelFormat m_pixelFormat = AV_PIX_FMT_YUV420P;
    uint32_t m_planeCount = 0;
    PlaneSpec m_planes[3]{};

    uint32_t planeWidth(uint32_t index, uint32_t alignedWidth) const {
        return alignedWidth >> m_planes[index].m_widthShift;
    }

    uint32_t planeHeight(uint32_t index, uint32_t alignedHeight) const {
        return alignedHeight >> m_planes[index].m_heightShift;
    }

    size_t planeSize(uint32_t index, uint32_t alignedWidth,
                     uint32_t alignedHeight) const {
        return static_cast<size_t>(planeWidth(index, alignedWidth)) *
               planeHeight(index, alignedHeight) *
               m_planes[index].m_bytesPerPixel;
    }

    size_t planeOffset(uint32_t index, uint32_t alignedWidth,
                       uint32_t alignedHeight) const {
        size_t offset = 0;
        for (uint32_t i = 0; i < index; ++i)
            offset += planeSize(i, alignedWidth, alignedHeight);
        return offset;
    }

    size_t bufferSize(uint32_t alignedWidth, uint32_t alignedHeight) const {
        return planeOffset(m_planeCount, alignedWidth, alignedHeight);
    }
};

inline constexpr FormatSpec FORMAT_NV12{
    .m_pixelFormat = AV_PIX_FMT_NV12,
    .m_planeCount = 2,
    .m_planes = {
        PlaneSpec{0, 0, 1, GL_RED, SHADER_Y},
        PlaneSpec{1, 1, 2, GL_RG, SHADER_UV},
    },
};

inline constexpr FormatSpec FORMAT_YUV420P{
    .m_pixelFormat = AV_PIX_FMT_YUV420P,
    .m_planeCount = 3,
    .m_planes = {
        PlaneSpec{0, 0, 1, GL_RED, SHADER_Y},
        PlaneSpec{1, 1, 1, GL_RED, SHADER_U},
        PlaneSpec{1, 1, 1, GL_RED, SHADER_V},
    },
};

inline constexpr FormatSpec FORMAT_RGB0{
    .m_pixelFormat = AV_PIX_FMT_RGB0,
    .m_planeCount = 1,
    .m_planes = {PlaneSpec{0, 0, 4, GL_RGBA, nullptr}},
};

inline constexpr FormatSpec FORMAT_RGB24{
    .m_pixelFormat = AV_PIX_FMT_RGB24,
    .m_planeCount = 1,
    .m_planes = {PlaneSpec{0, 0, 3, GL_RGB, nullptr}},
};

inline constexpr std::array<FormatSpec const*, 4> SUPPORTED_FORMATS{
    &FORMAT_YUV420P, &FORMAT_NV12, &FORMAT_RGB0, &FORMAT_RGB24};

inline FormatSpec const* formatFor(AVPixelFormat pixelFormat) {
    for (FormatSpec const* spec : SUPPORTED_FORMATS)
        if (spec->m_pixelFormat == pixelFormat) return spec;
    return nullptr;
}

}
