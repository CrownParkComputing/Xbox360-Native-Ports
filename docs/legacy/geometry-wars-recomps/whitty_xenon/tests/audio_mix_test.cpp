// Tests for folding a 5.1 frame down to a stereo pair.
//
// This fold exists because the host audio library's own is wrong for a stereo
// title: SDL's 5.1-to-stereo matrix is normalised for all six channels being
// used, so a title that mixes in stereo and leaves four channels at zero is
// attenuated by 10.62 dB. That is inaudible as a fault and fatal to a quiet
// sound effect, so the property that matters most here is the dull one - that
// a stereo mix comes through COMPLETELY unchanged - and it is the first test
// below.
//
// The rest guard the two ways a downmix goes wrong without complaint: a channel
// folded into the wrong side (which turns a surround pan into a centred blur)
// and the LFE folded in at all (which adds bass a stereo mix never had and is
// the usual cause of a downmix clipping).
#include "whitty_xenon/audio.h"

#include <cassert>
#include <cmath>
#include <cstdio>
#include <vector>

using namespace whitty_xenon;

namespace {

constexpr float kSide = 0.7071067811865476f;

// One frame with a value per channel, as a title would submit it.
std::vector<float> frame(float fl, float fr, float fc, float lfe, float sl,
                         float sr) {
    return {fl, fr, fc, lfe, sl, sr};
}

bool close(float a, float b) { return std::fabs(a - b) < 1e-6f; }

// THE test. A title whose surrounds, centre and LFE are silent must come out at
// exactly the level it went in - not near it, not most of it. Anything less and
// a quiet effect disappears while the music still plays, which is precisely the
// symptom this fold was written to fix.
void test_a_stereo_mix_passes_through_untouched() {
    std::vector<float> out;
    // Across the range, including levels a scaling downmix would visibly move.
    for (float level : {0.0f, 0.01f, 0.1f, 0.3096f, 0.5f, 0.99f, 1.0f, -0.75f}) {
        const std::vector<float> in = frame(level, -level, 0, 0, 0, 0);
        fold_5_1_to_stereo(in.data(), static_cast<uint32_t>(in.size()), out);
        assert(out.size() == 2);
        if (!close(out[0], level) || !close(out[1], -level)) {
            std::printf("stereo passthrough moved %f to %f / %f\n", level,
                        out[0], out[1]);
            assert(false);
        }
    }
}

// The centre belongs to both sides equally, at -3 dB.
void test_the_centre_goes_to_both_sides() {
    std::vector<float> out;
    const std::vector<float> in = frame(0, 0, 0.5f, 0, 0, 0);
    fold_5_1_to_stereo(in.data(), static_cast<uint32_t>(in.size()), out);
    assert(close(out[0], 0.5f * kSide));
    assert(close(out[1], 0.5f * kSide));
}

// Each surround belongs to its OWN side. Folding both into both would collapse
// a title's rear panning into a centred wash - audible as a loss of width,
// with nothing to say what happened.
void test_each_surround_stays_on_its_own_side() {
    std::vector<float> out;
    const std::vector<float> left_only = frame(0, 0, 0, 0, 0.5f, 0);
    fold_5_1_to_stereo(left_only.data(),
                       static_cast<uint32_t>(left_only.size()), out);
    assert(close(out[0], 0.5f * kSide));
    assert(close(out[1], 0.0f));

    const std::vector<float> right_only = frame(0, 0, 0, 0, 0, 0.5f);
    fold_5_1_to_stereo(right_only.data(),
                       static_cast<uint32_t>(right_only.size()), out);
    assert(close(out[0], 0.0f));
    assert(close(out[1], 0.5f * kSide));
}

// The LFE is dropped. It is a band the mains already carry, and folding it in
// is what makes a downmix clip - Geometry Wars 2's loudest channel is its LFE,
// so including it would push exactly the title that currently sounds right into
// distortion.
void test_the_lfe_is_dropped() {
    std::vector<float> out;
    const std::vector<float> in = frame(0, 0, 0, 1.0f, 0, 0);
    fold_5_1_to_stereo(in.data(), static_cast<uint32_t>(in.size()), out);
    assert(close(out[0], 0.0f));
    assert(close(out[1], 0.0f));
}

// A frame with everything hot at once clamps rather than wrapping. Scaling to
// fit is what the host library does and what costs the stereo title its level;
// clipping is what the hardware a downmix feeds does.
void test_a_hot_frame_clamps() {
    std::vector<float> out;
    const std::vector<float> in = frame(1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    fold_5_1_to_stereo(in.data(), static_cast<uint32_t>(in.size()), out);
    assert(close(out[0], 1.0f));
    assert(close(out[1], 1.0f));

    const std::vector<float> negative =
        frame(-1.0f, -1.0f, -1.0f, -1.0f, -1.0f, -1.0f);
    fold_5_1_to_stereo(negative.data(),
                       static_cast<uint32_t>(negative.size()), out);
    assert(close(out[0], -1.0f));
    assert(close(out[1], -1.0f));
}

// A whole frame's worth, so the per-frame striding is exercised rather than
// only the single-frame case.
void test_a_full_frame_keeps_its_samples_in_order() {
    std::vector<float> in(kAudioSamplesPerFrame, 0.0f);
    for (uint32_t f = 0; f < kAudioSamplesPerChannel; ++f) {
        in[f * kAudioChannels + audio_front_left] = float(f) / 1000.0f;
        in[f * kAudioChannels + audio_front_right] = -float(f) / 1000.0f;
    }
    std::vector<float> out;
    fold_5_1_to_stereo(in.data(), static_cast<uint32_t>(in.size()), out);
    assert(out.size() == kAudioSamplesPerChannel * 2);
    for (uint32_t f = 0; f < kAudioSamplesPerChannel; ++f) {
        assert(close(out[f * 2 + 0], float(f) / 1000.0f));
        assert(close(out[f * 2 + 1], -float(f) / 1000.0f));
    }
}

} // namespace

int main() {
    test_a_stereo_mix_passes_through_untouched();
    test_the_centre_goes_to_both_sides();
    test_each_surround_stays_on_its_own_side();
    test_the_lfe_is_dropped();
    test_a_hot_frame_clamps();
    test_a_full_frame_keeps_its_samples_in_order();
    std::printf("audio_mix_test: all passed\n");
    return 0;
}
