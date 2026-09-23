// spectrum.h - what the music is actually doing, measured rather than drawn.
//
// The runtime sees the title's finished mix before anything else does: six
// channels of float at 48 kHz, handed over by XAudioSubmitRenderDriverFrame and
// recorded verbatim by WHITTY_AUDIO_WAV. So a level display over that is a
// MEASUREMENT of the title, not an animation beside it - the same samples that
// reach the speaker, analysed on the way past.
//
// Two halves, because they run on different threads and neither may wait for
// the other:
//
//  * submit() is called on the guest's own audio thread, 187.5 times a second,
//    and must not block - a mixer that waits for a display is a mixer that
//    stops mixing. It folds the frame to mono and writes it into a ring, and
//    that is all it does.
//  * sample() is called on whichever thread presents, once a frame. It takes
//    the most recent window out of the ring, transforms it, and returns one
//    level per band.
//
// The hand-off is a sequence lock rather than a mutex: the reader takes the
// write cursor, copies, and takes it again, and a cursor that moved far enough
// to have overwritten what was copied means the copy is torn and is retried.
// A mutex here would put the audio thread behind the display's schedule, which
// is exactly the thing that must not happen.
//
// NO DEPENDENCY. The transform is a radix-2 FFT written out below, because
// pulling a signal library in for one panel would be a poor trade - and because
// a hand-written FFT can be held to a test, which is what caught the window
// length being wrong (see kSpectrumWindow).
#pragma once

#include <atomic>
#include <cstdint>

namespace whitty_xenon::gpu {

// The analysis window, in samples at the rate the console submits at.
//
// 2048 samples is 42.7 ms and 23.4 Hz per bin. THE FIRST TRY WAS 512, AND IT
// WAS WRONG IN A WAY ONLY A TEST COULD HAVE SHOWN: at 93.75 Hz per bin the
// bottom four bands are each narrower than a single bin, so every one of them
// collapsed onto bin 1 and a bass note at 110 Hz lit the 40 Hz bar. The display
// still moved with the music and looked entirely convincing - which is this
// project's recurring failure exactly, something reporting a fact it does not
// have. The test that caught it feeds a tone at a known frequency and asks
// which band it landed in.
//
// The cost of the longer window is responsiveness, and it is affordable: 43 ms
// is still far quicker than any meter a person reads, and an FFT this size is
// about 11,000 butterflies once per presented frame.
inline constexpr uint32_t kSpectrumWindow = 2048;

// How many bands the display has. Sixteen because that is what fits legibly
// across a border pane and still separates a bass line from a hi-hat.
inline constexpr uint32_t kSpectrumBands = 16;

// The ring the audio thread writes into: 8192 mono samples, 170 ms. Four times
// the window, so a reader running at 60 Hz is never close to being lapped and
// the retry below is a safety net rather than a normal path.
inline constexpr uint32_t kSpectrumRing = 8192;

// The band this display covers, in Hz. The bottom is below a bass guitar's open
// E and the top is where a 48 kHz stream stops being interesting; the bands
// between are spaced logarithmically, because that is how pitch is spaced.
inline constexpr float kSpectrumLowHz = 40.0f;
inline constexpr float kSpectrumHighHz = 16000.0f;

// The dynamic range the bars cover: a band at 0 dBFS is full height and one at
// -66 dB or quieter is empty. Chosen against the mixes these titles actually
// submit - gameplay sits around -17 to -19 dBFS RMS overall, so an individual
// band lives well below that and a 40 dB window would peg the display to the
// floor.
inline constexpr float kSpectrumFloorDb = -66.0f;

// The edges of one band, in Hz. Exposed so a test can assert the spacing
// without reaching into the analysis.
void spectrum_band_edges(uint32_t band, uint32_t bands, float& low,
                         float& high);

// One window's band levels. `window` is `kSpectrumWindow` mono samples at
// `rate` Hz; `out` receives `bands` values in 0..1, where 1 is a full-scale
// sine sitting in that band.
//
// This is the whole measurement and it is deliberately a free function: it has
// no state, so a test can hand it a synthesised tone and assert exactly where
// the energy landed.
void spectrum_analyse(const float* window, uint32_t rate, float* out,
                      uint32_t bands);

// The live tap.
class audio_spectrum {
public:
    // One frame of the title's mix, exactly as it was submitted. `count` is
    // `frames * channels` floats interleaved by channel, which is the shape
    // audio_frame_sink delivers.
    //
    // Six channels are folded the way a stereo listener hears them - the
    // coefficients in fold_5_1_to_stereo - and then the pair is averaged,
    // because the display is of the mix rather than of a side of it. Any other
    // channel count is averaged flat.
    void submit(const float* samples, uint32_t count, uint32_t channels);

    // The current level and peak of each band, smoothed for a display.
    //
    // Rises instantly and falls slowly, which is what a level meter does and
    // what a bar that tracked the raw window would not: at 60 frames a second
    // against a 10 ms window, an untouched value flickers rather than reads.
    // The peak marker falls slower still, so a transient stays visible for
    // about a second after it happened.
    //
    // Returns false when no audio has been submitted yet - which is a title
    // that has not started its mixer, not a silent one, and the caller draws an
    // empty meter rather than a wrong one.
    bool sample(float* levels, float* peaks, uint32_t bands);

    // Whether the title has ever submitted a frame. A meter with nothing behind
    // it should say so rather than sit at zero looking like silence.
    bool live() const noexcept {
        return m_written.load(std::memory_order_acquire) != 0;
    }

private:
    // Total mono samples ever written. The ring position is this modulo the
    // ring's size, so the reader can tell how far the writer moved while it was
    // copying - which a wrapped index cannot.
    std::atomic<uint64_t> m_written{0};
    float m_ring[kSpectrumRing]{};
    float m_level[kSpectrumBands]{};
    float m_peak[kSpectrumBands]{};
};

} // namespace whitty_xenon::gpu
