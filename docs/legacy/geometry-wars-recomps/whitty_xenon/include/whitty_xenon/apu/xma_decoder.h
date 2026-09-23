// xma_decoder.h - decoding the console's compressed audio.
//
// Nearly all of a title's sound is XMA: a hardware-decoded Microsoft codec, a
// variant of WMA Pro. A runtime without a decoder gets the title's own PCM mix
// and nothing else, which for Geometry Wars means UI blips and silence where
// the music and effects should be.
//
// This wraps a host decoder rather than implementing the codec. Two findings
// made that practical, and both are worth recording because the obvious route
// is a dead end:
//
//   - Xenia decodes with AV_CODEC_ID_XMAFRAMES, which does NOT exist upstream;
//     it comes from Xenia's own patched FFmpeg. Following its lead means
//     maintaining a fork.
//   - Stock FFmpeg's `xma2` decoder reads the console's packets directly, with
//     no reframing, once they are described by a RIFF-style format block:
//     format tag 0x0166 and 34 bytes of XMA2WAVEFORMATEX extra data. Verified
//     against packets captured out of the running title.
//
// NOTE ON LICENSING: FFmpeg is LGPL. This is behind a build flag so the runtime
// still builds and runs without it, and so the dependency is a deliberate
// choice rather than something that arrives by accident.
#pragma once

#include <cstdint>
#include <string>
#include <vector>

namespace whitty_xenon::apu {

// One decoding stream. A title runs several contexts at once - music and
// effects are separate - and each keeps its own decoder state, because a codec
// frame depends on the ones before it.
class xma_decoder {
public:
    xma_decoder() = default;
    ~xma_decoder();

    xma_decoder(const xma_decoder&) = delete;
    xma_decoder& operator=(const xma_decoder&) = delete;

    // Whether a decoder was compiled in at all.
    static bool available() noexcept;

    // Prepares the stream. `sample_rate` and `channels` come from the context
    // the title set up, not from the packets.
    bool open(uint32_t sample_rate, uint32_t channels, std::string& error);
    bool is_open() const noexcept { return m_opened; }

    // Decodes `size` bytes of packets, appending interleaved 16-bit samples to
    // `out`. Returns false only on a decoder error; a packet that yields no
    // samples yet is normal, since a frame can span packets.
    bool decode(const uint8_t* packets, uint32_t size,
                std::vector<int16_t>& out, std::string& error);

    uint32_t sample_rate() const noexcept { return m_sample_rate; }
    uint32_t channels() const noexcept { return m_channels; }

private:
    void close();

    // Opaque so this header pulls in no FFmpeg types; the .cpp casts them back.
    void* m_context{nullptr};
    void* m_packet{nullptr};
    void* m_frame{nullptr};
    uint32_t m_sample_rate{0};
    uint32_t m_channels{0};
    bool m_opened{false};
};

} // namespace whitty_xenon::apu
