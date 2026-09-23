// Tests for the compressed-audio decoder.
//
// Run against real packets captured out of the running title rather than
// synthesised ones: the question this layer has to answer is not "does it
// decode something" but "does it decode what this console actually produces".
// Point WHITTY_XMA_SAMPLE at a dump (WHITTY_XMA_DUMP writes one) to get that
// coverage; without it the test still checks that a stream opens, which
// catches a decoder that is present but refuses the console's configuration.
//
// Without any decoder compiled in the test reports that and passes - the
// runtime is expected to build and run without one.
#include "whitty_xenon/apu/xma_decoder.h"

#include <cassert>
#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <fstream>
#include <string>
#include <vector>

using namespace whitty_xenon::apu;

int main() {
    if (!xma_decoder::available()) {
        std::printf("xma_decoder_test: no decoder built in, skipped\n");
        return 0;
    }

    xma_decoder decoder;
    std::string error;
    assert(decoder.open(48000, 2, error) && "the decoder refused 48kHz stereo");
    assert(decoder.is_open());
    assert(decoder.sample_rate() == 48000 && decoder.channels() == 2);

    const char* path = std::getenv("WHITTY_XMA_SAMPLE");
    if (path == nullptr) {
        std::printf("xma_decoder_test: opened (set WHITTY_XMA_SAMPLE to decode"
                    " real packets)\n");
        return 0;
    }

    std::ifstream in(path, std::ios::binary | std::ios::ate);
    assert(in && "WHITTY_XMA_SAMPLE names a file that cannot be read");
    std::vector<uint8_t> packets(static_cast<std::size_t>(in.tellg()));
    in.seekg(0);
    in.read(reinterpret_cast<char*>(packets.data()),
            static_cast<std::streamsize>(packets.size()));

    // Fed as the hardware is fed: one 2 KiB packet at a time, not the whole
    // buffer at once. A decoder that only works on a whole file is no use
    // here, because a title streams.
    std::vector<int16_t> samples;
    for (std::size_t at = 0; at + 2048 <= packets.size(); at += 2048)
        assert(decoder.decode(packets.data() + at, 2048, samples, error));

    assert(!samples.empty() && "real packets decoded to nothing");
    // Decoded audio, not silence. A decoder that succeeds and produces
    // nothing audible is the failure worth guarding against, since it looks
    // identical to having no decoder at all.
    int32_t peak = 0;
    for (int16_t sample : samples) {
        const int32_t magnitude = sample < 0 ? -int32_t(sample) : sample;
        if (magnitude > peak) peak = magnitude;
    }
    assert(peak > 1000 && "decoded audio is silent");
    std::printf("xma_decoder_test: %zu samples, peak %d\n", samples.size(),
                peak);
    return 0;
}
