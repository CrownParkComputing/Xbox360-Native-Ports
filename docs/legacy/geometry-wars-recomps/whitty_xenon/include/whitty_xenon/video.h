// video.h - the title's view of the graphics hardware.
//
// The Vd* kernel calls are the bridge between the recompiled title and the GPU.
// The title allocates a ring buffer in physical memory, hands it to
// VdInitializeRingBuffer, writes PM4 packets into it, and calls VdSwap to
// present. Everything the title tells the hardware is recorded here so the GPU
// layer can pick it up: where the ring buffer is, where to write the read
// pointer back, which guest routine to call on a graphics interrupt, and what
// was last presented.
//
// Behaviour follows Xenia (BSD 3-Clause), the behavioural oracle for this
// runtime.
#pragma once

#include <cstdint>
#include <functional>

namespace whitty_xenon {

// The display mode reported to the title. A 1280x720 widescreen HD mode at 60Hz
// is what Xenia reports and what titles handle most predictably.
namespace x_video {
inline constexpr uint32_t display_width = 1280;
inline constexpr uint32_t display_height = 720;
inline constexpr float refresh_rate = 60.0f;
inline constexpr uint32_t video_standard_ntsc = 1;
// Two fields whose meaning is not known but whose values titles expect.
inline constexpr uint32_t unknown_0x8a = 0x4A;
inline constexpr uint32_t unknown_0x01 = 0x01;
// X_VIDEO_MODE is 48 bytes of big-endian words.
inline constexpr uint32_t video_mode_size = 48;
// VdQueryVideoFlags bits, derived from the mode.
inline constexpr uint32_t flag_widescreen = 1;
inline constexpr uint32_t flag_1024_wide = 2;
inline constexpr uint32_t flag_1920_wide = 4;
} // namespace x_video

// What the title has told the graphics hardware to do. Owned by kernel_state.
struct video_state {
    // --- ring buffer (VdInitializeRingBuffer) ---------------------------
    // Physical address of the PM4 command ring, and its size as a power of two.
    uint32_t ring_buffer_address{0};
    uint32_t ring_buffer_size_log2{0};
    bool ring_buffer_initialized{false};
    uint32_t ring_buffer_size() const noexcept {
        return ring_buffer_initialized ? (1u << ring_buffer_size_log2) : 0u;
    }

    // --- read-pointer write-back (VdEnableRingBufferRPtrWriteBack) ------
    // Where the GPU reports how far it has consumed the ring.
    uint32_t read_pointer_writeback_address{0};
    uint32_t read_pointer_writeback_block_log2{0};
    bool read_pointer_writeback_enabled{false};

    // --- graphics interrupt (VdSetGraphicsInterruptCallback) ------------
    // Guest routine called on vblank/interrupt, and its user argument.
    uint32_t interrupt_callback{0};
    uint32_t interrupt_callback_data{0};

    // --- system command buffer ------------------------------------------
    uint32_t system_command_buffer_identifier{0};

    // --- engines / display ------------------------------------------------
    bool engines_initialized{false};
    uint32_t display_mode_flags{0};
    bool clock_gating_enabled{false};

    // --- presentation (VdSwap) -------------------------------------------
    // Each swap is one presented frame; the front buffer is what to show.
    uint64_t swap_count{0};
    uint32_t front_buffer_address{0};
    uint32_t front_buffer_width{0};
    uint32_t front_buffer_height{0};
    uint32_t front_buffer_format{0};
    // Where the picture IS, taken from the texture fetch constant VdSwap is
    // handed rather than from the pointer beside it: the fetch names the
    // surface the console's scaler reads, in the same physical byte address
    // RB_COPY_DEST_BASE uses, so it can be matched against the resolve a pass
    // performed. `front_buffer_address` above is the argument as the title
    // wrote it, which is not in those units and is not what the hardware
    // displays from.
    //
    // Without this the renderer has to GUESS which of a frame's passes is the
    // picture, and a title that renders two dozen of them - Alien Breed
    // renders 28 - gives that guess nothing to go on.
    uint32_t front_buffer_fetch_base{0};
    // The fetch constant itself, as the title wrote it. Kept because the base
    // address alone cannot be checked against anything: a wrong field position
    // reads as a plausible address, and only the six words together say whether
    // this is a texture fetch at all.
    uint32_t front_buffer_fetch[6]{};

    // Called at the end of every swap, on the guest thread that presented.
    // This is the frame boundary: everything the title queued since the last
    // one is a complete frame, and nothing before it is still needed. The
    // kernel cannot render, so the host installs what to do here.
    std::function<void()> swap_handler;
};

} // namespace whitty_xenon
