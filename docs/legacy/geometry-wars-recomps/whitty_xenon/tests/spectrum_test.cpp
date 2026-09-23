// Unit tests for the audio spectrum behind the cabinet's equaliser.
//
// The thing worth pinning here is the one that would be invisible on screen: a
// display whose bands are wrong still MOVES, in time with the music, and looks
// completely convincing. Bars that respond to sound are not evidence that the
// analysis is right - so the transform is fed synthesised tones at known
// frequencies and asked which band they landed in, which is the only question
// a picture cannot answer.
#include "whitty_xenon/gpu/spectrum.h"

#include <cassert>
#include <cmath>
#include <cstdio>
#include <vector>

using namespace whitty_xenon::gpu;

namespace {

constexpr uint32_t kRate = 48000;

// A full-scale sine, one window long.
std::vector<float> tone(float hz, float amplitude = 1.0f) {
    std::vector<float> out(kSpectrumWindow);
    for (uint32_t i = 0; i < kSpectrumWindow; ++i)
        out[i] = amplitude * std::sin(6.283185307179586f * hz *
                                      float(i) / float(kRate));
    return out;
}

// Which band holds this frequency, by the same edges the analysis uses.
uint32_t band_of(float hz) {
    for (uint32_t band = 0; band < kSpectrumBands; ++band) {
        float low = 0.0f;
        float high = 0.0f;
        spectrum_band_edges(band, kSpectrumBands, low, high);
        if (hz >= low && hz < high) return band;
    }
    return kSpectrumBands;
}

uint32_t loudest(const float* levels) {
    uint32_t best = 0;
    for (uint32_t band = 1; band < kSpectrumBands; ++band)
        if (levels[band] > levels[best]) best = band;
    return best;
}

void bands_are_ordered_and_cover_the_range() {
    float first_low = 0.0f;
    float first_high = 0.0f;
    spectrum_band_edges(0, kSpectrumBands, first_low, first_high);
    assert(first_low == kSpectrumLowHz);
    float previous = first_high;
    for (uint32_t band = 1; band < kSpectrumBands; ++band) {
        float low = 0.0f;
        float high = 0.0f;
        spectrum_band_edges(band, kSpectrumBands, low, high);
        // Contiguous: each band starts where the last one ended, or the
        // spectrum has holes in it that nothing would ever show.
        assert(std::fabs(low - previous) < 0.01f);
        assert(high > low);
        previous = high;
    }
    assert(std::fabs(previous - kSpectrumHighHz) < 1.0f);
    std::printf("  bands: %g Hz to %g Hz over %u bands, contiguous\n",
                double(kSpectrumLowHz), double(kSpectrumHighHz),
                kSpectrumBands);
}

// The measurement that matters: a tone lands in ITS band and not a neighbour.
void a_tone_lands_in_its_own_band() {
    const float tested[] = {110.0f, 440.0f, 1000.0f, 4000.0f, 9000.0f};
    for (float hz : tested) {
        const std::vector<float> wave = tone(hz);
        float levels[kSpectrumBands] = {};
        spectrum_analyse(wave.data(), kRate, levels, kSpectrumBands);
        const uint32_t expected = band_of(hz);
        assert(expected < kSpectrumBands);
        const uint32_t got = loudest(levels);
        std::printf("  %6.0f Hz -> band %u (expected %u), level %.3f\n",
                    double(hz), got, expected, double(levels[got]));
        assert(got == expected);
        // And it is genuinely loud there rather than merely loudest: a
        // full-scale tone has to reach most of the display's height, or the
        // calibration is wrong and every real mix will sit on the floor.
        assert(levels[got] > 0.85f);
    }
}

// Silence reads as silence. Worth stating because the floor is a logarithm,
// and log(0) is where a spectrum display most often produces a bar of noise.
void silence_is_empty() {
    const std::vector<float> quiet(kSpectrumWindow, 0.0f);
    float levels[kSpectrumBands] = {};
    spectrum_analyse(quiet.data(), kRate, levels, kSpectrumBands);
    for (uint32_t band = 0; band < kSpectrumBands; ++band)
        assert(levels[band] == 0.0f);
    std::printf("  silence: every band at zero\n");
}

// A quiet tone reads as quieter than a loud one, in the band it belongs to.
// The scale is decibels, so this also checks the sign of the conversion - a
// display with the range inverted looks alive and is exactly backwards.
void level_follows_amplitude() {
    float loud[kSpectrumBands] = {};
    float quiet[kSpectrumBands] = {};
    const std::vector<float> a = tone(1000.0f, 1.0f);
    const std::vector<float> b = tone(1000.0f, 0.05f);
    spectrum_analyse(a.data(), kRate, loud, kSpectrumBands);
    spectrum_analyse(b.data(), kRate, quiet, kSpectrumBands);
    const uint32_t band = band_of(1000.0f);
    std::printf("  1 kHz at full scale %.3f, at -26 dB %.3f\n",
                double(loud[band]), double(quiet[band]));
    assert(loud[band] > quiet[band]);
    assert(quiet[band] > 0.0f);
}

// The live tap: submitted frames reach the analysis, and the six-channel fold
// is applied rather than the channels being summed flat.
void submitted_audio_reaches_the_bands() {
    audio_spectrum spectrum;
    float levels[kSpectrumBands] = {};
    float peaks[kSpectrumBands] = {};
    // Nothing submitted yet: reported as not live, so a meter can say so
    // rather than draw flat bars that look like a silent title.
    assert(!spectrum.live());
    assert(!spectrum.sample(levels, peaks, kSpectrumBands));

    // Two windows' worth of a 1 kHz tone in the front pair only, which is how
    // Space Giraffe mixes.
    const uint32_t frames = kSpectrumWindow * 2;
    std::vector<float> submission(static_cast<std::size_t>(frames) * 6, 0.0f);
    for (uint32_t f = 0; f < frames; ++f) {
        const float value = std::sin(6.283185307179586f * 1000.0f *
                                     float(f) / float(kRate));
        submission[std::size_t(f) * 6 + 0] = value;
        submission[std::size_t(f) * 6 + 1] = value;
    }
    spectrum.submit(submission.data(),
                    static_cast<uint32_t>(submission.size()), 6);
    assert(spectrum.live());
    assert(spectrum.sample(levels, peaks, kSpectrumBands));
    const uint32_t band = band_of(1000.0f);
    std::printf("  submitted 1 kHz: band %u at %.3f, peak %.3f\n", band,
                double(levels[band]), double(peaks[band]));
    assert(loudest(levels) == band);
    assert(levels[band] > 0.85f);
    // The peak never sits below the bar it is marking.
    for (uint32_t i = 0; i < kSpectrumBands; ++i) assert(peaks[i] >= levels[i]);

    // Now silence: the bar falls and the peak lags behind it, which is the
    // whole point of having two.
    std::vector<float> quiet(static_cast<std::size_t>(frames) * 6, 0.0f);
    spectrum.submit(quiet.data(), static_cast<uint32_t>(quiet.size()), 6);
    spectrum.sample(levels, peaks, kSpectrumBands);
    std::printf("  one frame of silence later: band %.3f, peak %.3f\n",
                double(levels[band]), double(peaks[band]));
    assert(levels[band] < 0.85f);
    assert(peaks[band] > levels[band]);
}

} // namespace

int main() {
    std::printf("spectrum\n");
    bands_are_ordered_and_cover_the_range();
    a_tone_lands_in_its_own_band();
    silence_is_empty();
    level_follows_amplitude();
    submitted_audio_reaches_the_bands();
    std::printf("spectrum: all checks passed\n");
    return 0;
}
