// Unit tests for LZX decompression.
//
// The Huffman and match coding are covered end-to-end by the real-image test
// (Geometry Wars), which is the only honest way to exercise them: hand-writing
// a compressed stream means hand-writing an encoder, and a bug shared between
// the two would prove nothing. What is worth pinning here are the parts that
// can be built by hand exactly - the bit reader's packing, the stream header,
// stored blocks - and the failures, which must be refusals rather than partial
// images.
#include "whitty_xenon/lzx.h"

#include <cassert>
#include <cstdint>
#include <cstdio>
#include <cstring>
#include <string>
#include <vector>

using namespace whitty_xenon;

namespace {

// Builds an LZX bitstream the way the format packs it: bits are written
// most-significant-first into 16-bit little-endian words.
class bit_writer {
public:
    void write(uint32_t value, uint32_t count) {
        while (count-- > 0) {
            m_word = static_cast<uint16_t>((m_word << 1) |
                                           ((value >> count) & 1u));
            if (++m_bits == 16) flush();
        }
    }
    void align() {
        while (m_bits != 0) write(0, 1);
    }
    // Raw bytes, which a stored block carries after the bit stream is dropped.
    void bytes(const uint8_t* data, std::size_t size) {
        assert(m_bits == 0 && "raw bytes must start on a word boundary");
        m_data.insert(m_data.end(), data, data + size);
    }
    std::vector<uint8_t> take() {
        align();
        return m_data;
    }

private:
    void flush() {
        m_data.push_back(static_cast<uint8_t>(m_word & 0xFF));
        m_data.push_back(static_cast<uint8_t>(m_word >> 8));
        m_word = 0;
        m_bits = 0;
    }
    std::vector<uint8_t> m_data;
    uint16_t m_word{0};
    uint32_t m_bits{0};
};

void put_le32(bit_writer& out, uint32_t value) {
    const uint8_t bytes[4] = {
        static_cast<uint8_t>(value), static_cast<uint8_t>(value >> 8),
        static_cast<uint8_t>(value >> 16), static_cast<uint8_t>(value >> 24)};
    out.bytes(bytes, 4);
}

// One stored block carrying `payload` verbatim.
std::vector<uint8_t> stored_block_stream(const std::vector<uint8_t>& payload) {
    bit_writer out;
    out.write(0, 1); // no x86 call translation
    out.write(3, 3); // block type: stored
    out.write(static_cast<uint32_t>(payload.size() >> 8), 16);
    out.write(static_cast<uint32_t>(payload.size() & 0xFF), 8);
    out.align();     // stored blocks resume on a word boundary
    put_le32(out, 1); // R0
    put_le32(out, 1); // R1
    put_le32(out, 1); // R2
    out.bytes(payload.data(), payload.size());
    if ((payload.size() & 1) != 0) {
        const uint8_t pad = 0;
        out.bytes(&pad, 1); // stored blocks are padded to an even length
    }
    return out.take();
}

void test_stored_block_round_trip() {
    std::vector<uint8_t> payload(300);
    for (std::size_t i = 0; i < payload.size(); ++i)
        payload[i] = static_cast<uint8_t>(i * 7 + 3);

    const std::vector<uint8_t> stream = stored_block_stream(payload);
    std::vector<uint8_t> out(payload.size());
    std::string error;
    assert(lzx_decompress(stream.data(), stream.size(), out.data(), out.size(),
                          0x8000, error));
    assert(error.empty());
    assert(out == payload);
}

void test_odd_length_stored_block_is_padded() {
    // An odd-length stored block carries one padding byte the decoder has to
    // step over; getting that wrong leaves the next block a byte out.
    std::vector<uint8_t> payload(101, 0xAB);
    payload[100] = 0x5C;
    const std::vector<uint8_t> stream = stored_block_stream(payload);
    std::vector<uint8_t> out(payload.size());
    std::string error;
    assert(lzx_decompress(stream.data(), stream.size(), out.data(), out.size(),
                          0x8000, error));
    assert(out == payload);
}

void test_window_size_must_be_a_power_of_two_in_range() {
    std::vector<uint8_t> payload(16, 0);
    const std::vector<uint8_t> stream = stored_block_stream(payload);
    std::vector<uint8_t> out(payload.size());
    std::string error;

    // Not a power of two.
    assert(!lzx_decompress(stream.data(), stream.size(), out.data(), out.size(),
                           0x9000, error));
    assert(!error.empty());
    // Below the smallest window LZX defines (32 KiB).
    error.clear();
    assert(!lzx_decompress(stream.data(), stream.size(), out.data(), out.size(),
                           0x4000, error));
    assert(!error.empty());
    // Above the largest.
    error.clear();
    assert(!lzx_decompress(stream.data(), stream.size(), out.data(), out.size(),
                           0x08000000, error));
    assert(!error.empty());
    // And a valid one still works, so the check is not simply refusing
    // everything.
    error.clear();
    assert(lzx_decompress(stream.data(), stream.size(), out.data(), out.size(),
                          0x8000, error));
}

void test_truncated_stream_is_refused() {
    std::vector<uint8_t> payload(200, 0x11);
    const std::vector<uint8_t> full = stored_block_stream(payload);
    std::vector<uint8_t> out(payload.size());

    // Cut the stream in half. Running out of input has to be an error: a
    // decoder that treats it as a run of zero bits produces a plausible-looking
    // image that is quietly wrong, which is far worse than a refusal.
    for (std::size_t cut : {std::size_t{1}, full.size() / 2, full.size() - 1}) {
        std::string error;
        std::vector<uint8_t> partial(full.begin(), full.begin() + cut);
        assert(!lzx_decompress(partial.data(), partial.size(), out.data(),
                               out.size(), 0x8000, error));
        assert(!error.empty());
    }
}

void test_x86_translation_is_refused_by_name() {
    // The header bit asking for x86 call translation is meaningless for a
    // PowerPC title, so it is refused rather than silently ignored - ignoring
    // it would corrupt every 0xE8 byte in the image.
    bit_writer out;
    out.write(1, 1);  // x86 translation flag
    out.write(0, 16); // file size, high
    out.write(0, 16); // file size, low
    const std::vector<uint8_t> stream = out.take();

    std::vector<uint8_t> image(16, 0);
    std::string error;
    assert(!lzx_decompress(stream.data(), stream.size(), image.data(),
                           image.size(), 0x8000, error));
    assert(error.find("E8") != std::string::npos);
}

void test_null_arguments_are_refused() {
    std::vector<uint8_t> out(16);
    std::string error;
    assert(!lzx_decompress(nullptr, 0, out.data(), out.size(), 0x8000, error));
    error.clear();
    const uint8_t input[4] = {0};
    assert(!lzx_decompress(input, sizeof(input), nullptr, 16, 0x8000, error));
}

} // namespace

int main() {
    test_stored_block_round_trip();
    test_odd_length_stored_block_is_padded();
    test_window_size_must_be_a_power_of_two_in_range();
    test_truncated_stream_is_refused();
    test_x86_translation_is_refused_by_name();
    test_null_arguments_are_refused();
    std::printf("lzx_test: all tests passed\n");
    return 0;
}
