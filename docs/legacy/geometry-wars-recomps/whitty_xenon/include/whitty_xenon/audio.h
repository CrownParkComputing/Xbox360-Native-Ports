// audio.h - how a title's sound reaches a speaker.
//
// The console does not push audio at a title; it asks for it. A title
// registers a callback with XAudioRegisterRenderDriverClient, and the audio
// hardware calls that callback at a fixed rate; the title responds by calling
// XAudioSubmitRenderDriverFrame with a buffer of samples. Nothing arrives
// until something asks.
//
// That is worth stating plainly because the failure mode is silent in both
// senses: a runtime that accepts the registration and never calls the callback
// gets no audio at all, and it looks exactly like a title that has no sound
// rather than like a missing piece of the runtime.
#pragma once

#include <cstdint>
#include <functional>
#include <vector>

namespace whitty_xenon {

// The frame the console's audio driver deals in, from Xenia's AudioDriver.
// A title always submits exactly this shape.
inline constexpr uint32_t kAudioFrequency = 48000;
inline constexpr uint32_t kAudioChannels = 6;          // 5.1
inline constexpr uint32_t kAudioSamplesPerChannel = 256;
inline constexpr uint32_t kAudioSamplesPerFrame =
    kAudioChannels * kAudioSamplesPerChannel;
inline constexpr uint32_t kAudioFrameBytes =
    kAudioSamplesPerFrame * sizeof(float);
// 48000 / 256 = 187.5 callbacks a second.
inline constexpr double kAudioFramesPerSecond =
    double(kAudioFrequency) / double(kAudioSamplesPerChannel);

// The channels of a 5.1 frame, in the order XAudio2 lays them out and the
// order SDL and every WAVEFORMATEXTENSIBLE stream use. Named because the
// difference between the surrounds and the LFE is three indices and no
// diagnostic at all: fold the wrong one into the front pair and a title gains
// bass it never had, or loses a surround it did.
enum audio_channel : uint32_t {
    audio_front_left = 0,
    audio_front_right = 1,
    audio_front_centre = 2,
    audio_lfe = 3,
    audio_surround_left = 4,
    audio_surround_right = 5,
};

// One 5.1 frame folded down to a stereo pair.
//
// This exists because letting the host's audio library do it is wrong for the
// titles that need it most. SDL's 5.1-to-stereo matrix is normalised for the
// case where all six channels carry signal - measured against SDL 3.4's own
// converter, a frame with only the front pair populated comes out at 0.2945 of
// the level it went in at, which is -10.62 dB, while a frame using all six
// comes out at unity.
//
// A title that mixes in stereo and leaves the other four channels at zero is
// therefore made a third as loud for no reason. Space Giraffe is exactly that:
// its centre, LFE and both surrounds are zero in every frame it submits, and it
// authors its shooting sound around 15 dB below its own mix, so 10.6 dB off the
// top is the difference between an effect being quiet and being inaudible. Its
// music survives; its effects do not, which is why the title presents as having
// no sound effects at all.
//
// The coefficients are the ones a consumer downmixer uses (ITU-R BS.775): the
// front pair at UNITY, the centre and each surround at -3 dB into the side it
// belongs to, and the LFE dropped, since the mains already carry that band and
// including it is what makes a downmix clip.
//
// TRIED FOLDING THE LFE IN TOO (2026-09-18) AND REVERTED THE SAME SESSION:
// Geometry Wars puts something in channel 3 that is NOT bass content sharing
// the mix - folding it in surfaced an unrelated, continuously-looping speech
// sample on the title screen, confirmed by ear on the device. Whatever that
// channel is being used for here, ITU's "drop it" default was correct for
// this title after all; the quiet front pair is the real mix, not a mix this
// runtime broke. If a future title genuinely needs its LFE content folded in,
// that has to be a per-title decision, not a change to this shared default.
//
// The front pair at unity is the property that matters, and the one a test
// should hold this to: a stereo mix must pass through completely unchanged. No
// gain is applied to anything, nothing is invented, and the only samples that
// move at all are ones the title put in a channel the sink cannot reproduce.
//
// `samples` is `frames * kAudioChannels` floats; `out` receives `frames * 2`.
inline void fold_5_1_to_stereo(const float* samples, uint32_t count,
                               std::vector<float>& out) {
    constexpr float kSide = 0.7071067811865476f; // -3 dB
    const uint32_t frames = count / kAudioChannels;
    out.resize(static_cast<std::size_t>(frames) * 2);
    const auto clamp = [](float value) {
        return value < -1.0f ? -1.0f : (value > 1.0f ? 1.0f : value);
    };
    for (uint32_t f = 0; f < frames; ++f) {
        const float* in =
            samples + static_cast<std::size_t>(f) * kAudioChannels;
        const float centre = kSide * in[audio_front_centre];
        // Clamped rather than scaled to fit. Scaling is what SDL does, and it
        // is what quietens a stereo title by two thirds; a title with all six
        // channels hot at once may clip here instead, which is what the
        // hardware a stereo downmix feeds would also do.
        out[f * 2 + 0] = clamp(in[audio_front_left] + centre +
                               kSide * in[audio_surround_left]);
        out[f * 2 + 1] = clamp(in[audio_front_right] + centre +
                               kSide * in[audio_surround_right]);
    }
}

// The driver handle a title is given. The top half is fixed ('AU'), the bottom
// half is the client index - Xenia asserts on exactly this, and a title passes
// the handle straight back to identify itself when submitting.
inline constexpr uint32_t kAudioDriverHandleBase = 0x41550000;

// One registered client: the guest routine to call when audio is wanted, and
// the argument to call it with.
//
// The argument is passed BY REFERENCE, not by value. The registration block
// holds {routine, argument}; the callback is invoked with r3 pointing at a
// dword that CONTAINS the argument, so the title's own thunk starts with
// `lwz r3,0(r3)` to unwrap it before tail-calling the real routine. Xenia does
// exactly this in AudioSystem::RegisterClient - it allocates four bytes,
// stores callback_arg into them, and passes that address as the callback's
// only argument (`wrapped_callback_arg`).
//
// Passing the argument directly instead is a one-level-too-far dereference the
// title performs on our behalf, and it is silent about being wrong: the
// registration succeeds, the callback runs, and the routine simply operates on
// whatever the argument happened to point at. For a title whose argument is a
// pointer to its mixer, the thunk hands the real routine the mixer's first
// field - so the crash lands deep inside the title's audio code with no
// visible connection to the calling convention that caused it.
struct audio_client {
    uint32_t callback{0};
    // The argument as the title registered it, for reporting and tests.
    uint32_t callback_arg{0};
    // Guest address of the dword holding callback_arg: what the callback is
    // actually called with. Zero if no cell could be allocated.
    uint32_t wrapped_callback_arg{0};
    bool registered{false};
};

// Where submitted samples go. `samples` points at kAudioSamplesPerFrame floats
// already converted out of the console's byte order, interleaved by channel.
using audio_frame_sink =
    std::function<void(const float* samples, uint32_t count)>;

// A host output device for the finished mix, for a build that has no SDL.
//
// The runtime's own audio path is device-independent - src/apu decodes and
// mixes and knows nothing about a speaker - and the actual output has always
// been SDL3 code inside the bring-up harness. A phone has no SDL here, so the
// device is named through this instead. One call, taken on the guest's own
// audio thread at 187.5 Hz, which therefore must not block: an output that
// waits for a buffer to drain stalls the title's mixer.
//
// `count` is a whole number of kAudioChannels-wide frames. A stereo device
// folds with fold_5_1_to_stereo above rather than letting its own library do
// it - see that function for why the difference is 10.6 dB on the titles that
// can least afford it.
class audio_device {
public:
    virtual ~audio_device() = default;
    virtual void submit(const float* samples, uint32_t count) = 0;
};

// The device this process sends the mix to, or null.
//
// Set before main() by a host that owns one; the Android entry point does.
// Null is not a failure - a headless capture run has nowhere to play - and it
// is deliberately not something the harness invents a device for, because a
// device nobody asked for is the one thing that turns "no sound" from a
// question into a wrong answer.
inline audio_device*& host_audio_device() noexcept {
    static audio_device* device = nullptr;
    return device;
}

} // namespace whitty_xenon
