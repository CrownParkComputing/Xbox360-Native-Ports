// Integration test for the shared library WhittyArcade loads.
//
// This dlopens the built .so and drives it exactly as the host does: resolve
// the entry point, check the ABI version, create a runtime, push an input
// packet, capture frames, read audio. If this passes, the plumbing between the
// emulator and the guest works - which is worth knowing before there is any
// emulation to blame it on.
#include "xbox360_runtime_api.h"

#include <cassert>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <dlfcn.h>
#include <string>
#include <vector>

namespace {

bool frame_is_blank(const whitty_xbox360_frame& frame) {
    // Every pixel identical means nothing was drawn.
    const uint8_t* pixels = frame.rgba;
    const uint8_t first_r = pixels[0];
    const uint8_t first_g = pixels[1];
    const uint8_t first_b = pixels[2];
    const std::size_t count =
        static_cast<std::size_t>(frame.width) * frame.height;
    for (std::size_t index = 1; index < count; ++index) {
        if (pixels[index * 4 + 0] != first_r ||
            pixels[index * 4 + 1] != first_g ||
            pixels[index * 4 + 2] != first_b)
            return false;
    }
    return true;
}

bool frames_differ(const std::vector<uint8_t>& a,
                   const std::vector<uint8_t>& b) {
    return a.size() == b.size() && std::memcmp(a.data(), b.data(), a.size()) != 0;
}

std::vector<uint8_t> copy_frame(const whitty_xbox360_frame& frame) {
    const std::size_t bytes =
        static_cast<std::size_t>(frame.stride) * frame.height;
    return std::vector<uint8_t>(frame.rgba, frame.rgba + bytes);
}

} // namespace

int main(int argc, char** argv) {
    assert(argc > 1);
    const char* library_path = argv[1];

    // 1. The host dlopens the module and resolves one symbol.
    void* handle = dlopen(library_path, RTLD_NOW | RTLD_LOCAL);
    if (!handle) {
        std::printf("runtime_abi_test: dlopen failed: %s\n", dlerror());
        return 1;
    }
    auto get_api = reinterpret_cast<whitty_xbox360_get_api_fn>(
        dlsym(handle, "whitty_xbox360_get_api"));
    assert(get_api && "whitty_xbox360_get_api must be exported");

    // 2. Version negotiation. A mismatched pair must not exchange pointers.
    assert(get_api(0xDEADBEEFu) == nullptr);
    const whitty_xbox360_api* api = get_api(WHITTY_XBOX360_RUNTIME_ABI);
    assert(api);
    assert(api->abi_version == WHITTY_XBOX360_RUNTIME_ABI);
    assert(api->struct_size == sizeof(whitty_xbox360_api));

    // 3. The five functions the host requires must all be present.
    assert(api->create && api->destroy && api->set_input &&
           api->capture_frame && api->read_audio);

    // 4. Create, pointed at whatever title is available. A missing title is
    //    reported on screen rather than refused, so creation still succeeds.
    const char* game_root = std::getenv("WHITTY_XEX_ALIENBREED");
    whitty_xbox360_config config{};
    config.struct_size = sizeof(config);
    config.game_root = game_root && *game_root ? game_root : "/nonexistent";
    config.user_root = "/tmp";
    config.cache_root = "/tmp";
    char error[256] = {0};
    whitty_xbox360_runtime* runtime =
        api->create(&config, error, sizeof(error));
    assert(runtime && "create must succeed even when the title is missing");

    // 5. Video: a frame must arrive, be the expected shape, and contain
    //    something. A uniform frame means nothing was drawn.
    whitty_xbox360_frame frame{};
    assert(api->capture_frame(runtime, &frame) != 0);
    assert(frame.rgba != nullptr);
    assert(frame.width == 1280 && frame.height == 720);
    assert(frame.stride == frame.width * 4);
    assert(!frame_is_blank(frame));
    const std::vector<uint8_t> first = copy_frame(frame);

    // 6. The sequence must advance and the picture must change, otherwise the
    //    host would be presenting a still image believing it were live.
    const uint64_t first_sequence = frame.sequence;
    for (int index = 0; index < 4; ++index)
        assert(api->capture_frame(runtime, &frame) != 0);
    assert(frame.sequence > first_sequence);
    assert(frames_differ(first, copy_frame(frame)));

    // 7. Input: pressing a button must change what is drawn. This is the half
    //    of the boundary a log cannot verify.
    whitty_xbox360_input input{};
    input.struct_size = sizeof(input);
    input.packet_number = 1;
    api->set_input(runtime, &input);
    api->capture_frame(runtime, &frame);
    const std::vector<uint8_t> released = copy_frame(frame);

    input.packet_number = 2;
    input.buttons = WHITTY_X360_A | WHITTY_X360_START;
    input.left_x = 20000;
    api->set_input(runtime, &input);
    api->capture_frame(runtime, &frame);
    assert(frames_differ(released, copy_frame(frame)));

    // 8. Audio: silent with nothing held, and a real signal while A is down.
    std::vector<int16_t> audio(512 * 2, 0x7FFF);
    input.buttons = 0;
    api->set_input(runtime, &input);
    std::size_t produced = api->read_audio(runtime, audio.data(), 512);
    assert(produced == 512);
    bool any_nonzero = false;
    for (int16_t sample : audio) any_nonzero = any_nonzero || sample != 0;
    assert(!any_nonzero && "no button held should be silence");

    input.buttons = WHITTY_X360_A;
    api->set_input(runtime, &input);
    produced = api->read_audio(runtime, audio.data(), 512);
    assert(produced == 512);
    int16_t peak = 0;
    for (int16_t sample : audio)
        peak = sample > peak ? sample : peak;
    assert(peak > 1000 && "holding A should produce an audible tone");

    // 9. Pause must stop the picture advancing, and resume must restart it.
    if (api->set_paused) {
        api->set_paused(runtime, 1);
        api->capture_frame(runtime, &frame);
        const std::vector<uint8_t> paused_frame = copy_frame(frame);
        api->capture_frame(runtime, &frame);
        assert(!frames_differ(paused_frame, copy_frame(frame)));
        api->set_paused(runtime, 0);
        api->capture_frame(runtime, &frame);
        assert(frames_differ(paused_frame, copy_frame(frame)));
    }
    if (api->is_running) assert(api->is_running(runtime) != 0);

    api->destroy(runtime);
    dlclose(handle);
    std::printf("runtime_abi_test: video, audio and input all verified\n");
    return 0;
}
