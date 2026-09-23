#include "whitty_xenon/gpu/spectrum.h"

#include <cmath>
#include <cstring>
#include <utility>

namespace whitty_xenon::gpu {
namespace {

// The fold coefficients, repeated here rather than pulled in from audio.h so
// this file depends on nothing: -3 dB for the centre and each surround, the
// front pair at unity, the LFE dropped. See fold_5_1_to_stereo for why those
// and not SDL's normalised matrix.
constexpr float kSide = 0.7071067811865476f;

// The Hann window, and the sum of its coefficients.
//
// Without a window, a tone that does not sit exactly on a bin centre smears
// across every band and the display reads as broadband noise whatever the title
// is playing - which looks plausible and is wrong.
//
// The sum is what a magnitude has to be normalised by for a full-scale sine to
// read as 1.0. For a Hann window of N points that is N/2 in the limit; it is
// computed rather than assumed because the discrete version is not exactly that
// and a display calibrated to the wrong constant is a display nobody can read a
// number off.
//
// Built once. It is 2048 cosines and it never changes, so computing it on every
// analysis would be most of the cost of the analysis.
struct hann_window {
    float coefficient[kSpectrumWindow];
    float sum{0.0f};

    hann_window() {
        for (uint32_t i = 0; i < kSpectrumWindow; ++i) {
            const float phase = 6.283185307179586f * float(i) /
                                float(kSpectrumWindow - 1);
            coefficient[i] = 0.5f * (1.0f - std::cos(phase));
            sum += coefficient[i];
        }
    }
};

const hann_window& hann() {
    // Function-local, so its initialisation is thread-safe and happens on the
    // first analysis rather than before main().
    static const hann_window built;
    return built;
}

// An in-place iterative radix-2 FFT. `count` must be a power of two.
//
// Two stages: the bit-reversal permutation, then log2(N) rounds of butterflies.
// Nothing clever - this runs once per presented frame on 512 points and is
// twenty microseconds, so the clever version would buy nothing measurable and
// cost the ability to read it.
void fft(float* real, float* imaginary, uint32_t count) {
    for (uint32_t i = 1, j = 0; i < count; ++i) {
        uint32_t bit = count >> 1;
        for (; (j & bit) != 0; bit >>= 1) j ^= bit;
        j ^= bit;
        if (i < j) {
            std::swap(real[i], real[j]);
            std::swap(imaginary[i], imaginary[j]);
        }
    }
    for (uint32_t length = 2; length <= count; length <<= 1) {
        const float angle = -6.283185307179586f / float(length);
        const float step_real = std::cos(angle);
        const float step_imaginary = std::sin(angle);
        for (uint32_t start = 0; start < count; start += length) {
            float wr = 1.0f;
            float wi = 0.0f;
            for (uint32_t k = 0; k < length / 2; ++k) {
                const uint32_t a = start + k;
                const uint32_t b = a + length / 2;
                const float tr = real[b] * wr - imaginary[b] * wi;
                const float ti = real[b] * wi + imaginary[b] * wr;
                real[b] = real[a] - tr;
                imaginary[b] = imaginary[a] - ti;
                real[a] += tr;
                imaginary[a] += ti;
                const float next_wr = wr * step_real - wi * step_imaginary;
                wi = wr * step_imaginary + wi * step_real;
                wr = next_wr;
            }
        }
    }
}

} // namespace

void spectrum_band_edges(uint32_t band, uint32_t bands, float& low,
                         float& high) {
    if (bands == 0) {
        low = kSpectrumLowHz;
        high = kSpectrumHighHz;
        return;
    }
    // Logarithmic, so each band spans the same musical interval: over sixteen
    // bands from 40 Hz to 16 kHz that is a little under nine semitones each.
    const float span = std::log(kSpectrumHighHz / kSpectrumLowHz);
    const float at = float(band) / float(bands);
    const float next = float(band + 1) / float(bands);
    low = kSpectrumLowHz * std::exp(span * at);
    high = kSpectrumLowHz * std::exp(span * next);
}

void spectrum_analyse(const float* window, uint32_t rate, float* out,
                      uint32_t bands) {
    for (uint32_t band = 0; band < bands; ++band) out[band] = 0.0f;
    if (window == nullptr || out == nullptr || bands == 0 || rate == 0) return;

    static thread_local float real[kSpectrumWindow];
    static thread_local float imaginary[kSpectrumWindow];
    const hann_window& shape = hann();
    for (uint32_t i = 0; i < kSpectrumWindow; ++i) {
        real[i] = window[i] * shape.coefficient[i];
        imaginary[i] = 0.0f;
    }
    fft(real, imaginary, kSpectrumWindow);

    // Amplitude per bin, scaled so a full-scale sine reads 1.0: twice the
    // magnitude (the energy is split between the positive and negative
    // frequency) over the window's sum.
    const float normalise = 2.0f / shape.sum;
    const float hz_per_bin = float(rate) / float(kSpectrumWindow);
    const uint32_t last_bin = kSpectrumWindow / 2;

    uint32_t previous_high = 0;
    for (uint32_t band = 0; band < bands; ++band) {
        float low_hz = 0.0f;
        float high_hz = 0.0f;
        spectrum_band_edges(band, bands, low_hz, high_hz);
        uint32_t low_bin = uint32_t(low_hz / hz_per_bin);
        uint32_t high_bin = uint32_t(high_hz / hz_per_bin);
        // Every band gets at least one bin of its own. The bottom bands are
        // narrower than a bin at this window length, and letting them collapse
        // to nothing would leave the left of the display permanently dead -
        // which reads as a title with no bass rather than as a window too
        // short to resolve one.
        if (low_bin < 1) low_bin = 1;
        if (low_bin <= previous_high) low_bin = previous_high + 1;
        if (high_bin < low_bin) high_bin = low_bin;
        if (high_bin >= last_bin) high_bin = last_bin - 1;
        if (low_bin > high_bin) {
            out[band] = 0.0f;
            continue;
        }
        previous_high = high_bin;

        // Root-sum-square over the band's bins: the amplitude a single tone of
        // the same energy would have had, so a band holding one loud partial
        // and a band holding several quiet ones compare sensibly.
        float energy = 0.0f;
        for (uint32_t bin = low_bin; bin <= high_bin; ++bin) {
            const float magnitude =
                std::sqrt(real[bin] * real[bin] +
                          imaginary[bin] * imaginary[bin]) *
                normalise;
            energy += magnitude * magnitude;
        }
        const float amplitude = std::sqrt(energy);
        // Decibels, because a linear bar spends its whole height on the loudest
        // moment of the loudest band and leaves everything else flat on the
        // floor. -66 dB is empty and 0 dBFS is full.
        const float db = 20.0f * std::log10(amplitude + 1e-9f);
        float level = (db - kSpectrumFloorDb) / -kSpectrumFloorDb;
        if (level < 0.0f) level = 0.0f;
        if (level > 1.0f) level = 1.0f;
        out[band] = level;
    }
}

void audio_spectrum::submit(const float* samples, uint32_t count,
                            uint32_t channels) {
    if (samples == nullptr || channels == 0 || count < channels) return;
    const uint32_t frames = count / channels;
    uint64_t written = m_written.load(std::memory_order_relaxed);
    for (uint32_t f = 0; f < frames; ++f) {
        const float* in = samples + std::size_t(f) * channels;
        float mono = 0.0f;
        if (channels == 6) {
            const float centre = kSide * in[2];
            const float left = in[0] + centre + kSide * in[4];
            const float right = in[1] + centre + kSide * in[5];
            mono = 0.5f * (left + right);
        } else {
            for (uint32_t c = 0; c < channels; ++c) mono += in[c];
            mono /= float(channels);
        }
        m_ring[(written + f) % kSpectrumRing] = mono;
    }
    // Released after the samples, so a reader that sees this cursor sees the
    // samples it counts.
    m_written.store(written + frames, std::memory_order_release);
}

bool audio_spectrum::sample(float* levels, float* peaks, uint32_t bands) {
    if (bands > kSpectrumBands) bands = kSpectrumBands;
    static thread_local float window[kSpectrumWindow];
    bool have_window = false;
    // Twice, at most: a torn copy is retried once and then given up on, because
    // a reader that spun here would be a display holding up the thread that
    // presents.
    for (int attempt = 0; attempt < 2 && !have_window; ++attempt) {
        const uint64_t before = m_written.load(std::memory_order_acquire);
        if (before < kSpectrumWindow) break;
        const uint64_t start = before - kSpectrumWindow;
        for (uint32_t i = 0; i < kSpectrumWindow; ++i)
            window[i] = m_ring[(start + i) % kSpectrumRing];
        const uint64_t after = m_written.load(std::memory_order_acquire);
        // The writer overwrote part of what was copied only if it advanced far
        // enough to wrap into it.
        if (after - before <= kSpectrumRing - kSpectrumWindow)
            have_window = true;
    }

    float fresh[kSpectrumBands] = {};
    if (have_window) spectrum_analyse(window, 48000, fresh, bands);

    // Instant attack, slow release. The numbers are per presented frame, so at
    // 60 Hz a bar falls from full to the floor in about a fifth of a second and
    // the peak marker in about a second and a half.
    constexpr float kFall = 0.80f;
    constexpr float kPeakFall = 0.012f;
    for (uint32_t band = 0; band < bands; ++band) {
        const float decayed = m_level[band] * kFall;
        m_level[band] = fresh[band] > decayed ? fresh[band] : decayed;
        const float peak_decayed = m_peak[band] - kPeakFall;
        m_peak[band] = m_level[band] > peak_decayed ? m_level[band]
                                                    : (peak_decayed > 0.0f
                                                           ? peak_decayed
                                                           : 0.0f);
        if (levels != nullptr) levels[band] = m_level[band];
        if (peaks != nullptr) peaks[band] = m_peak[band];
    }
    return have_window;
}

} // namespace whitty_xenon::gpu
