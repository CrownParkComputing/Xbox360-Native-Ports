// runtime_abi.cpp - the shared library WhittyArcade loads.
//
// This implements the host's 12-function C ABI on top of the loader built in
// this project. There is no CPU, kernel or GPU yet, so it does not run a game.
// What it does is prove the whole integration boundary end to end - a frame
// reaches the screen, audio reaches the speakers, the pad reaches the guest -
// and report what the loader actually made of the title on disk.
//
// That ordering is deliberate. Standing this up before the emulation means the
// day a recompiled function first runs, the surrounding plumbing is already
// known good, and anything that breaks is the new thing rather than the wiring.
#include "whitty_xenon/heap.h"
#include "whitty_xenon/image.h"
#include "whitty_xenon/imports.h"
#include "whitty_xenon/kernel.h"
#include "whitty_xenon/memory.h"
#include "whitty_xenon/pe.h"
#include "whitty_xenon/ppc_runtime.h"
#include "whitty_xenon/xex.h"

#include "xbox360_runtime_api.h"

#include <cmath>
#include <cstdio>
#include <cstring>
#include <fstream>
#include <iterator>
#include <string>
#include <vector>

namespace {

using namespace whitty_xenon;

constexpr uint32_t kFrameWidth = 1280;
constexpr uint32_t kFrameHeight = 720;
constexpr uint32_t kAudioRate = 48000;

struct glyph {
    uint16_t code;
    uint16_t bits;
};
constexpr glyph kFont[] = {
#include "font3x5.inc"
};
constexpr std::size_t kGlyphCount = sizeof(kFont) / sizeof(kFont[0]);

uint16_t glyph_bits(char character) noexcept {
    if (character >= 'a' && character <= 'z') character -= 32;
    for (std::size_t index = 0; index < kGlyphCount; ++index)
        if (kFont[index].code == static_cast<uint16_t>(character))
            return kFont[index].bits;
    return 0;
}

struct colour {
    uint8_t r, g, b;
};

constexpr colour kInk{0xE6, 0xEC, 0xF1};
constexpr colour kAccent{0x37, 0xCF, 0xD3};
constexpr colour kWarn{0xE6, 0xA8, 0x48};
constexpr colour kGood{0x7A, 0xE0, 0x8A};
constexpr colour kDim{0x7D, 0x89, 0x96};

class canvas {
public:
    canvas() : m_pixels(static_cast<std::size_t>(kFrameWidth) * kFrameHeight * 4,
                        0) {}

    void clear(colour background) noexcept {
        for (std::size_t index = 0; index < m_pixels.size(); index += 4) {
            m_pixels[index + 0] = background.r;
            m_pixels[index + 1] = background.g;
            m_pixels[index + 2] = background.b;
            m_pixels[index + 3] = 0xFF;
        }
    }

    void plot(int x, int y, colour value) noexcept {
        if (x < 0 || y < 0 || x >= static_cast<int>(kFrameWidth) ||
            y >= static_cast<int>(kFrameHeight))
            return;
        const std::size_t index =
            (static_cast<std::size_t>(y) * kFrameWidth + x) * 4;
        m_pixels[index + 0] = value.r;
        m_pixels[index + 1] = value.g;
        m_pixels[index + 2] = value.b;
        m_pixels[index + 3] = 0xFF;
    }

    void rect(int x, int y, int width, int height, colour value) noexcept {
        for (int row = 0; row < height; ++row)
            for (int column = 0; column < width; ++column)
                plot(x + column, y + row, value);
    }

    // Draws text at `scale` pixels per font pixel.
    void text(int x, int y, const std::string& value, colour ink,
              int scale = 3) noexcept {
        int cursor = x;
        for (char character : value) {
            const uint16_t bits = glyph_bits(character);
            for (int row = 0; row < 5; ++row) {
                const uint16_t line = (bits >> (row * 3)) & 0x7u;
                for (int column = 0; column < 3; ++column) {
                    if ((line >> (2 - column)) & 1u)
                        rect(cursor + column * scale, y + row * scale, scale,
                             scale, ink);
                }
            }
            cursor += 4 * scale;
        }
    }

    const uint8_t* pixels() const noexcept { return m_pixels.data(); }

private:
    std::vector<uint8_t> m_pixels;
};

std::string hex32(uint32_t value) {
    char buffer[16];
    std::snprintf(buffer, sizeof(buffer), "%08X", value);
    return buffer;
}

std::string decimal(long long value) {
    char buffer[32];
    std::snprintf(buffer, sizeof(buffer), "%lld", value);
    return buffer;
}

bool read_file(const std::string& path, std::vector<uint8_t>& data) {
    std::ifstream input(path, std::ios::binary);
    if (!input) return false;
    data.assign(std::istreambuf_iterator<char>(input),
                std::istreambuf_iterator<char>());
    return !data.empty();
}

// Everything the loader managed to work out about the title on disk. Each line
// is shown on the frame, so a failure is visible rather than buried in a log.
struct title_report {
    bool loaded{false};
    std::string source;
    std::string failure;
    uint32_t title_id{};
    uint32_t image_base{};
    uint32_t entry_point{};
    std::size_t image_bytes{};
    std::size_t sections{};
    std::size_t kernel_imports{};
    std::string library_a;
    std::string library_b;
    uint32_t code_base{};
    uint32_t code_size{};
    double table_mib{};
    bool entry_in_code{false};
    bool key_retail{false};
};

title_report inspect_title(const std::string& game_root) {
    title_report report;
    // The container may be given as a directory or as the file itself.
    std::string path = game_root;
    std::vector<uint8_t> file;
    if (!read_file(path, file)) {
        path = game_root + "/default.xex";
        if (!read_file(path, file)) {
            report.failure = "NO DEFAULT.XEX AT " + game_root;
            return report;
        }
    }
    report.source = path;

    xex_info info;
    std::string error;
    if (!parse_xex(file.data(), file.size(), info, error)) {
        report.failure = "XEX: " + error;
        return report;
    }
    report.title_id = info.title_id;
    report.image_base = info.image_base;
    report.entry_point = info.entry_point;

    static guest_memory memory;
    if (!memory.initialized() && !memory.initialize(error)) {
        report.failure = "MEMORY: " + error;
        return report;
    }

    xex_image_load_result loaded;
    if (!load_xex_image(file.data(), file.size(), info, memory, loaded, error)) {
        report.failure = "IMAGE: " + error;
        return report;
    }
    report.key_retail = loaded.key_used == xex_key_kind::retail;

    std::vector<uint8_t> image;
    xex_key_kind key_used = xex_key_kind::retail;
    decode_xex_image(file.data(), file.size(), info, image, key_used, error);
    report.image_bytes = image.size();

    pe_info pe;
    if (parse_pe(image.data(), image.size(), pe, error)) {
        report.sections = pe.sections.size();
        ppc_image_layout layout;
        if (make_image_layout(pe, info.image_base, info.image_size, layout, error)) {
            report.code_base = layout.code_base;
            report.code_size = layout.code_size;
            report.table_mib =
                static_cast<double>(layout.table_bytes()) / (1024.0 * 1024.0);
            report.entry_in_code = layout.contains_code(info.entry_point);
        }
    }

    std::vector<xex_import_library> libraries;
    if (parse_xex_imports(file.data(), file.size(), info, libraries, error)) {
        decode_imports(memory, libraries);
        kernel_registry registry;
        report.kernel_imports = registry.resolve(libraries).total();
        if (libraries.size() > 0)
            report.library_a = libraries[0].name + " " +
                               decimal(static_cast<long long>(
                                   libraries[0].imports.size()));
        if (libraries.size() > 1)
            report.library_b = libraries[1].name + " " +
                               decimal(static_cast<long long>(
                                   libraries[1].imports.size()));
    }

    report.loaded = true;
    return report;
}

} // namespace

// The runtime handle the host holds. Deliberately a plain struct: the ABI keeps
// it opaque, and nothing about this project's types crosses the boundary.
struct whitty_xbox360_runtime {
    title_report report;
    canvas frame;
    whitty_xbox360_input input{};
    uint64_t sequence{0};
    uint64_t frames{0};
    double audio_phase{0.0};
    bool paused{false};

    void render() {
        frame.clear(colour{0x0B, 0x0E, 0x13});

        // A moving bar, so a frozen frame is obvious at a glance rather than
        // looking like a still image that happens to be correct.
        const int sweep = static_cast<int>((frames * 6) % (kFrameWidth + 200));
        frame.rect(sweep - 200, 0, 200, 4, kAccent);

        int y = 40;
        frame.text(48, y, "WHITTY XENON RUNTIME", kAccent, 5);
        y += 46;
        frame.text(48, y, "NO CPU YET - THIS PROVES VIDEO AUDIO AND INPUT",
                   kDim, 2);
        y += 34;

        if (!report.loaded) {
            frame.text(48, y, "TITLE NOT LOADED", kWarn, 4);
            y += 40;
            frame.text(48, y, report.failure, kWarn, 2);
        } else {
            frame.text(48, y, "TITLE  " + hex32(report.title_id), kInk, 4);
            y += 34;
            frame.text(48, y, "ENTRY  " + hex32(report.entry_point) +
                                  "   BASE " + hex32(report.image_base),
                       kInk, 3);
            y += 28;
            frame.text(48, y,
                       "IMAGE  " + decimal(static_cast<long long>(
                                       report.image_bytes)) +
                           " BYTES   " +
                           decimal(static_cast<long long>(report.sections)) +
                           " SECTIONS",
                       kInk, 3);
            y += 28;
            frame.text(48, y,
                       "CODE   " + hex32(report.code_base) + " + " +
                           hex32(report.code_size),
                       kInk, 3);
            y += 28;
            frame.text(48, y,
                       "KERNEL " +
                           decimal(static_cast<long long>(
                               report.kernel_imports)) +
                           " IMPORTS TO IMPLEMENT",
                       kInk, 3);
            y += 28;
            if (!report.library_a.empty())
                frame.text(48, y, "       " + report.library_a, kDim, 3);
            y += 24;
            if (!report.library_b.empty())
                frame.text(48, y, "       " + report.library_b, kDim, 3);
            y += 32;
            frame.text(48, y,
                       std::string("RETAIL KEY ") +
                           (report.key_retail ? "OK" : "NO") +
                           "   ENTRY IN CODE " +
                           (report.entry_in_code ? "OK" : "NO"),
                       report.key_retail && report.entry_in_code ? kGood : kWarn,
                       3);
        }

        // Live input. Pressing a button must light its box immediately - this
        // is the half of the boundary a log cannot check.
        const int pad_y = 470;
        frame.text(48, pad_y - 30, "INPUT", kAccent, 3);
        struct button_light {
            const char* label;
            uint16_t mask;
        };
        static const button_light kLights[] = {
            {"A", WHITTY_X360_A},         {"B", WHITTY_X360_B},
            {"X", WHITTY_X360_X},         {"Y", WHITTY_X360_Y},
            {"UP", WHITTY_X360_DPAD_UP},  {"DN", WHITTY_X360_DPAD_DOWN},
            {"LT", WHITTY_X360_DPAD_LEFT},{"RT", WHITTY_X360_DPAD_RIGHT},
            {"ST", WHITTY_X360_START},    {"BK", WHITTY_X360_BACK},
            {"LB", WHITTY_X360_LEFT_SHOULDER},
            {"RB", WHITTY_X360_RIGHT_SHOULDER},
        };
        int x = 48;
        for (const button_light& light : kLights) {
            const bool down = (input.buttons & light.mask) != 0;
            frame.rect(x, pad_y, 56, 40, down ? kAccent : colour{0x1A, 0x20, 0x2A});
            frame.text(x + 10, pad_y + 12, light.label,
                       down ? colour{0x0B, 0x0E, 0x13} : kDim, 3);
            x += 64;
        }

        // Sticks and triggers as bars, so an axis that is stuck or inverted is
        // visible rather than merely numeric.
        const int bar_y = pad_y + 70;
        auto axis_bar = [&](int index, const char* label, int value,
                            int range) {
            const int width = 240;
            const int base_x = 48 + index * 300;
            frame.text(base_x, bar_y - 22, label, kDim, 2);
            frame.rect(base_x, bar_y, width, 18, colour{0x1A, 0x20, 0x2A});
            const double normalised =
                static_cast<double>(value) / static_cast<double>(range);
            const int centre = base_x + width / 2;
            const int extent = static_cast<int>(normalised * (width / 2));
            if (extent >= 0)
                frame.rect(centre, bar_y, extent + 1, 18, kAccent);
            else
                frame.rect(centre + extent, bar_y, -extent, 18, kAccent);
            frame.rect(centre, bar_y - 4, 2, 26, kInk);
        };
        axis_bar(0, "LEFT X", input.left_x, 32767);
        axis_bar(1, "LEFT Y", input.left_y, 32767);
        axis_bar(2, "TRIGGERS",
                 static_cast<int>(input.right_trigger) -
                     static_cast<int>(input.left_trigger),
                 255);

        frame.text(48, 660,
                   "FRAME " + decimal(static_cast<long long>(frames)) +
                       "   HOLD A FOR TONE   " +
                       (paused ? "PAUSED" : "RUNNING"),
                   kDim, 3);
        ++sequence;
    }
};

namespace {

whitty_xbox360_runtime* runtime_create(const whitty_xbox360_config* config,
                                       char* error, size_t error_capacity) {
    if (!config || !config->game_root) {
        if (error && error_capacity) {
            std::snprintf(error, error_capacity, "no game root given");
        }
        return nullptr;
    }
    auto* runtime = new whitty_xbox360_runtime();
    runtime->report = inspect_title(config->game_root);
    // A title that fails to load is still shown rather than refused, so the
    // reason appears on screen instead of only in the host's error path.
    return runtime;
}

void runtime_destroy(whitty_xbox360_runtime* runtime) { delete runtime; }

void runtime_set_input(whitty_xbox360_runtime* runtime,
                       const whitty_xbox360_input* input) {
    if (!runtime || !input) return;
    runtime->input = *input;
}

int runtime_capture_frame(whitty_xbox360_runtime* runtime,
                          whitty_xbox360_frame* frame) {
    if (!runtime || !frame) return 0;
    if (!runtime->paused) {
        ++runtime->frames;
        runtime->render();
    }
    frame->struct_size = sizeof(*frame);
    frame->rgba = runtime->frame.pixels();
    frame->width = kFrameWidth;
    frame->height = kFrameHeight;
    frame->stride = kFrameWidth * 4;
    frame->sequence = runtime->sequence;
    return 1;
}

size_t runtime_read_audio(whitty_xbox360_runtime* runtime,
                          int16_t* interleaved_stereo, size_t frame_capacity) {
    if (!runtime || !interleaved_stereo || frame_capacity == 0) return 0;
    // Silence unless A is held, so the speakers are not a constant tone; the
    // left stick bends the pitch, which shows the axis is live as well.
    const bool tone = (runtime->input.buttons & WHITTY_X360_A) != 0;
    if (!tone || runtime->paused) {
        std::memset(interleaved_stereo, 0,
                    frame_capacity * 2 * sizeof(int16_t));
        return frame_capacity;
    }
    const double bend =
        1.0 + static_cast<double>(runtime->input.left_x) / 32767.0 * 0.5;
    const double step = 440.0 * bend * 2.0 * 3.14159265358979 / kAudioRate;
    for (size_t index = 0; index < frame_capacity; ++index) {
        const double sample = std::sin(runtime->audio_phase) * 0.20;
        runtime->audio_phase += step;
        if (runtime->audio_phase > 2.0 * 3.14159265358979)
            runtime->audio_phase -= 2.0 * 3.14159265358979;
        const int16_t value = static_cast<int16_t>(sample * 32767.0);
        interleaved_stereo[index * 2 + 0] = value;
        interleaved_stereo[index * 2 + 1] = value;
    }
    return frame_capacity;
}

void runtime_set_paused(whitty_xbox360_runtime* runtime, int paused) {
    if (runtime) runtime->paused = paused != 0;
}

int runtime_is_running(whitty_xbox360_runtime* runtime) {
    return runtime != nullptr;
}

size_t runtime_achievement_count(whitty_xbox360_runtime*) { return 0; }

int runtime_achievement_at(whitty_xbox360_runtime*, size_t,
                           whitty_xbox360_achievement*) {
    return 0;
}

int runtime_take_unlocked_achievement(whitty_xbox360_runtime*,
                                      whitty_xbox360_achievement*) {
    return 0;
}

constexpr whitty_xbox360_api kApi = {
    sizeof(whitty_xbox360_api),
    WHITTY_XBOX360_RUNTIME_ABI,
    runtime_create,
    runtime_destroy,
    runtime_set_input,
    runtime_capture_frame,
    runtime_read_audio,
    runtime_set_paused,
    runtime_is_running,
    runtime_achievement_count,
    runtime_achievement_at,
    runtime_take_unlocked_achievement,
};

} // namespace

extern "C" WHITTY_XBOX360_EXPORT const whitty_xbox360_api*
whitty_xbox360_get_api(uint32_t requested_abi) {
    // The host checks the version too, but refusing here keeps a mismatched
    // pair from ever exchanging pointers.
    if (requested_abi != WHITTY_XBOX360_RUNTIME_ABI) return nullptr;
    return &kApi;
}
