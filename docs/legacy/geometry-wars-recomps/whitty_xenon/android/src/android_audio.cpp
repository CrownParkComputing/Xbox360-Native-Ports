// android_audio.cpp - where the finished mix goes on a phone.
//
// The runtime's audio path is device-independent: src/apu decodes and mixes and
// knows nothing about a speaker, and the actual output has always been ~200
// lines of SDL3 inside the bring-up harness. There is no SDL here, so the
// device is named through audio.h's `audio_device` instead.
//
// AAudio rather than Oboe, and the reason is not taste. Oboe is a wrapper over
// exactly these calls that adds a workaround table for pre-Android-8 devices
// and a resampler this does not need - and it is a source dependency that would
// have to be fetched and built. AAudio is in the NDK already, needs no
// download, and the whole of what this needs from it is four calls. On the
// four devices this was written for (Android 15 and 16) there is no OpenSL ES
// fallback to want.
//
// Two properties are the contract:
//
//   * submit() is called on the guest's own audio thread, 187.5 times a second,
//     and must not block. A write that waited for the buffer to drain would
//     stall the title's mixer, which shows up as the whole title running slow -
//     an emulation bug that is not one. So the write timeout is zero and a
//     stream that cannot take the frame drops it and counts it.
//   * the 5.1 fold is done HERE, with fold_5_1_to_stereo, not by AAudio's own
//     channel conversion. See audio.h: a stereo-mixed title folded by a matrix
//     normalised for six live channels comes out 10.6 dB down, which is the
//     difference between a quiet effect and an inaudible one.
#include "whitty_xenon/audio.h"

#include "whitty_android.h"

#include <aaudio/AAudio.h>
#include <android/log.h>

#include <cstdlib>
#include <vector>

namespace {

constexpr const char* kTag = "whitty_xenon";

class aaudio_output final : public whitty_xenon::audio_device {
public:
    bool start() {
        AAudioStreamBuilder* builder = nullptr;
        if (AAudio_createStreamBuilder(&builder) != AAUDIO_OK) {
            __android_log_print(ANDROID_LOG_WARN, kTag,
                                "audio: no AAudio stream builder");
            return false;
        }
        AAudioStreamBuilder_setDirection(builder, AAUDIO_DIRECTION_OUTPUT);
        AAudioStreamBuilder_setFormat(builder, AAUDIO_FORMAT_PCM_FLOAT);
        AAudioStreamBuilder_setChannelCount(builder, 2);
        AAudioStreamBuilder_setSampleRate(
            builder, static_cast<int32_t>(whitty_xenon::kAudioFrequency));
        // Shared, not exclusive. Exclusive mode takes the device away from
        // everything else on the phone and is refused whenever anything else
        // holds it, and none of this needs the couple of milliseconds it buys.
        AAudioStreamBuilder_setSharingMode(builder, AAUDIO_SHARING_MODE_SHARED);
        AAudioStreamBuilder_setPerformanceMode(builder,
                                               AAUDIO_PERFORMANCE_MODE_NONE);
        // THE CAPACITY IS DELIBERATELY NOT REQUESTED, and that is a measured
        // decision rather than an omission.
        //
        // Asking for one looks like the obvious way to buy headroom, and on
        // this device it backfires: requesting a 200 ms capacity made AAudio
        // hand back 4800-frame BURSTS - it serves a large capacity by making
        // its granularity coarse, so audio arrives in 100 ms lumps and the
        // smallest buffer that can exist is 100 ms of latency. Left alone the
        // same device gives 962-frame bursts, 20 ms, which is what a game
        // wants. The cushion below is then built out of those.
        const aaudio_result_t opened =
            AAudioStreamBuilder_openStream(builder, &m_stream);
        AAudioStreamBuilder_delete(builder);
        if (opened != AAUDIO_OK || m_stream == nullptr) {
            __android_log_print(ANDROID_LOG_WARN, kTag,
                                "audio: AAudio open failed: %s",
                                AAudio_convertResultToText(opened));
            m_stream = nullptr;
            return false;
        }
        // The cushion, sized off the DEVICE rather than off the guest.
        //
        // This used to be four of the title's own 256-sample frames - 1024
        // frames, 21 ms - and that is what the crackle was. submit() cannot
        // block (see the contract at the top), so every millisecond the mixer
        // is late by beyond the cushion is not delayed audio, it is DELETED
        // audio, and deleted audio is a click. Twenty-one milliseconds is less
        // than two of this device's frames at 60 Hz and far less than one at
        // thirty.
        //
        // AAudio hands out and reclaims audio a burst at a time and rounds a
        // buffer size to a multiple of that burst, so a size expressed in the
        // guest's frames is a size the device may quietly make smaller. Ask the
        // stream instead, and take whichever is larger of six bursts and 60 ms.
        m_burst = AAudioStream_getFramesPerBurst(m_stream);
        if (m_burst <= 0)
            m_burst = static_cast<int32_t>(whitty_xenon::kAudioSamplesPerChannel);
        m_capacity = AAudioStream_getBufferCapacityInFrames(m_stream);
        const int32_t sixty_ms =
            static_cast<int32_t>(whitty_xenon::kAudioFrequency) * 60 / 1000;
        int32_t wanted = m_burst * 6;
        if (wanted < sixty_ms) wanted = sixty_ms;
        if (m_capacity > 0 && wanted > m_capacity) wanted = m_capacity;
        const int32_t sized = AAudioStream_setBufferSizeInFrames(m_stream, wanted);
        if (sized > 0) m_size = sized;
        if (AAudioStream_requestStart(m_stream) != AAUDIO_OK) {
            __android_log_print(ANDROID_LOG_WARN, kTag,
                                "audio: AAudio would not start");
            AAudioStream_close(m_stream);
            m_stream = nullptr;
            return false;
        }
        __android_log_print(
            ANDROID_LOG_INFO, kTag,
            "audio: AAudio %d Hz, %d channel(s), %d-frame buffer (%d ms) of "
            "%d capacity, %d-frame bursts",
            AAudioStream_getSampleRate(m_stream),
            AAudioStream_getChannelCount(m_stream),
            AAudioStream_getBufferSizeInFrames(m_stream),
            AAudioStream_getBufferSizeInFrames(m_stream) * 1000 /
                static_cast<int32_t>(whitty_xenon::kAudioFrequency),
            m_capacity, m_burst);
        return true;
    }

    void stop() {
        if (m_stream == nullptr) return;
        AAudioStream_requestStop(m_stream);
        AAudioStream_close(m_stream);
        m_stream = nullptr;
        // Dropped frames and underruns are the crackle, stated as numbers.
        // "A bit crackly" is not something anybody can act on; "3,412 dropped
        // of 1,209,600 over 14 underruns" is.
        __android_log_print(
            ANDROID_LOG_INFO, kTag,
            "audio: %llu frame(s) played, %llu dropped, %d underrun(s), "
            "buffer settled at %d frames",
            static_cast<unsigned long long>(m_played),
            static_cast<unsigned long long>(m_dropped), m_xruns, m_size);
    }

    void submit(const float* samples, uint32_t count) override {
        if (m_stream == nullptr) return;
        // Thread-local: the title may have more than one audio worker, and a
        // shared scratch buffer resized from two threads at once is a
        // use-after-free where the counters around it are only racy.
        static thread_local std::vector<float> folded;
        whitty_xenon::fold_5_1_to_stereo(samples, count, folded);
        const int32_t frames =
            static_cast<int32_t>(count / whitty_xenon::kAudioChannels);
        if (frames <= 0) return;
        const int32_t written =
            AAudioStream_write(m_stream, folded.data(), frames, 0);
        if (written == frames) {
            m_played += static_cast<uint64_t>(written);
        } else if (written >= 0) {
            m_played += static_cast<uint64_t>(written);
            m_dropped += static_cast<uint64_t>(frames - written);
        } else {
            m_dropped += static_cast<uint64_t>(frames);
        }
        grow_if_it_underran();
    }

private:
    // AAudio's own glitch recovery, and the one thing a fixed buffer cannot do.
    //
    // The device counts every time it went to the buffer and found nothing
    // there. When that count rises, the cushion was too small for what the
    // machine was actually doing - a title that has just started a level, a
    // shader compiling, another app waking up - and the answer is a larger one.
    // Growing by a burst at a time keeps the added latency to a few
    // milliseconds a step, and the capacity is the ceiling, so this settles
    // rather than climbing forever.
    //
    // Only upward. A buffer that shrank again on a quiet passage would spend
    // the run oscillating around the size at which the device glitches, which
    // is the worst of both.
    void grow_if_it_underran() {
        const int32_t xruns = AAudioStream_getXRunCount(m_stream);
        if (xruns <= m_xruns) return;
        m_xruns = xruns;
        if (m_capacity > 0 && m_size >= m_capacity) return;
        int32_t wanted = m_size + m_burst;
        if (m_capacity > 0 && wanted > m_capacity) wanted = m_capacity;
        const int32_t sized = AAudioStream_setBufferSizeInFrames(m_stream, wanted);
        if (sized > 0) m_size = sized;
    }

    AAudioStream* m_stream{nullptr};
    uint64_t m_played{0};
    uint64_t m_dropped{0};
    int32_t m_burst{0};
    int32_t m_size{0};
    int32_t m_capacity{0};
    int32_t m_xruns{0};
};

aaudio_output g_output;
bool g_started = false;

} // namespace

void whitty_android_audio_start() {
    if (g_started) return;
    // Off unless asked for. A frame capture wants the title running as fast as
    // the machine allows and has nothing to listen to; opening a device it
    // never uses would only add a thread and a buffer.
    const char* want = std::getenv("WHITTY_ANDROID_AUDIO");
    if (want == nullptr || want[0] != '1') return;
    if (!g_output.start()) return;
    whitty_xenon::host_audio_device() = &g_output;
    g_started = true;
}

// Started from a constructor as well as by hand, so the `adb shell` build -
// whose main() is the harness's own and has no Android code in it - still gets
// a device when the environment asks for one. The environment is already set by
// the shell in that case; in the Activity's case it is not yet, so this does
// nothing and the explicit call later does the work.
__attribute__((constructor)) static void whitty_android_audio_autostart(void) {
    whitty_android_audio_start();
}

void whitty_android_audio_stop() {
    if (!g_started) return;
    whitty_xenon::host_audio_device() = nullptr;
    g_output.stop();
    g_started = false;
}
