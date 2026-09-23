#include "whitty_xenon/lzx.h"

#include <algorithm>
#include <array>
#include <cstring>
#include <vector>

namespace whitty_xenon {
namespace {

constexpr uint32_t kMinMatch = 2;
constexpr uint32_t kNumChars = 256;         // literal symbols in the main tree
constexpr uint32_t kNumPrimaryLengths = 7;  // lengths coded in the main symbol
constexpr uint32_t kNumSecondaryLengths = 249; // symbols in the length tree
constexpr uint32_t kPretreeElements = 20;
constexpr uint32_t kAlignedElements = 8;
constexpr uint32_t kMaxCodeLength = 16;

// LZX cuts its output into frames of this size and realigns the input
// bitstream to a 16-bit boundary at the end of each one. That is invisible for
// the first 32 KiB and then silently desynchronises everything after it, so it
// is the single most important rule here that is not about coding at all.
constexpr std::size_t kFrameSize = 0x8000;

constexpr uint32_t kBlockVerbatim = 1;
constexpr uint32_t kBlockAligned = 2;
constexpr uint32_t kBlockUncompressed = 3;

// Position slots per window size, indexed by window_bits - 15. More window
// means more slots, because the largest representable offset grows with it.
constexpr uint32_t kPositionSlots[] = {30, 32,  34,  36,  38,  42,
                                       50, 66, 98, 162, 290};

// Reads bits most-significant-first out of 16-bit little-endian words, which
// is LZX's packing. Running out of input is a hard error rather than a stream
// of zeroes: a truncated stream would otherwise decode into plausible rubbish.
class bit_reader {
public:
    bit_reader(const uint8_t* data, std::size_t size) noexcept
        : m_data(data), m_size(size) {}

    bool read(uint32_t count, uint32_t& value) noexcept {
        value = 0;
        while (count-- > 0) {
            if (m_bits_left == 0 && !refill()) return false;
            --m_bits_left;
            value = (value << 1) | ((m_buffer >> m_bits_left) & 1u);
        }
        return true;
    }

    // Drops whatever is left in the bit buffer. LZX uses this before a stored
    // block, which is read as whole bytes; because the buffer is always filled
    // a 16-bit word at a time, discarding it lands exactly on a word boundary.
    void discard_bits() noexcept {
        m_bits_left = 0;
        m_buffer = 0;
    }

    // Realigns to the next 16-bit word, dropping any part-consumed one. This
    // is what happens at the end of every output frame - see the caller.
    void align_to_word() noexcept {
        if (m_bits_left > 0 && m_bits_left < 16) {
            m_bits_left = 0;
            m_buffer = 0;
        }
    }

    bool read_bytes(uint8_t* out, std::size_t count) noexcept {
        if (m_position + count > m_size) return false;
        if (out != nullptr) std::memcpy(out, m_data + m_position, count);
        m_position += count;
        return true;
    }

    bool exhausted() const noexcept {
        return m_bits_left == 0 && m_position >= m_size;
    }

private:
    bool refill() noexcept {
        if (m_position + 2 > m_size) return false;
        // Little-endian word, consumed most-significant bit first.
        m_buffer = static_cast<uint32_t>(m_data[m_position]) |
                   (static_cast<uint32_t>(m_data[m_position + 1]) << 8);
        m_position += 2;
        m_bits_left = 16;
        return true;
    }

    const uint8_t* m_data;
    std::size_t m_size;
    std::size_t m_position{0};
    uint32_t m_buffer{0};
    uint32_t m_bits_left{0};
};

// A canonical Huffman decoder built from code lengths alone, which is all LZX
// transmits. Decoding walks one bit at a time; the trees here are small and the
// whole image is expanded once at load, so a lookup table would buy nothing
// worth the extra surface to get wrong.
class huffman_table {
public:
    bool build(const uint8_t* lengths, uint32_t count) {
        m_symbols.clear();
        m_first_code.fill(0);
        m_first_index.fill(0);
        m_count.fill(0);

        for (uint32_t symbol = 0; symbol < count; ++symbol) {
            const uint8_t length = lengths[symbol];
            if (length > kMaxCodeLength) return false;
            if (length != 0) ++m_count[length];
        }

        uint32_t code = 0;
        uint32_t index = 0;
        for (uint32_t length = 1; length <= kMaxCodeLength; ++length) {
            m_first_code[length] = code;
            m_first_index[length] = index;
            code = (code + m_count[length]) << 1;
            index += m_count[length];
        }
        // A tree with a single used symbol is legal in LZX (a block that codes
        // only one value), and so is a completely empty one; neither is
        // over-subscribed, which is the case that must be rejected.
        m_symbols.resize(index);
        std::array<uint32_t, kMaxCodeLength + 1> next = m_first_index;
        for (uint32_t symbol = 0; symbol < count; ++symbol) {
            const uint8_t length = lengths[symbol];
            if (length != 0) m_symbols[next[length]++] = symbol;
        }
        return true;
    }

    bool decode(bit_reader& bits, uint32_t& symbol) const noexcept {
        uint32_t code = 0;
        for (uint32_t length = 1; length <= kMaxCodeLength; ++length) {
            uint32_t bit = 0;
            if (!bits.read(1, bit)) return false;
            code = (code << 1) | bit;
            const uint32_t first = m_first_code[length];
            if (m_count[length] != 0 && code - first < m_count[length]) {
                symbol = m_symbols[m_first_index[length] + (code - first)];
                return true;
            }
        }
        return false; // no code of any length matches: the stream is corrupt
    }

private:
    std::array<uint32_t, kMaxCodeLength + 1> m_first_code{};
    std::array<uint32_t, kMaxCodeLength + 1> m_first_index{};
    std::array<uint32_t, kMaxCodeLength + 1> m_count{};
    std::vector<uint32_t> m_symbols;
};

// The extra-bits and base tables for position slots, built the way the format
// defines them rather than pasted as literals: slots come in pairs, each pair
// carrying one more extra bit than the last (up to 17), and each slot's base is
// the running total of everything below it.
struct position_tables {
    std::array<uint32_t, 51> extra_bits{};
    std::array<uint32_t, 51> base{};

    position_tables() noexcept {
        uint32_t bits = 0;
        for (uint32_t i = 0; i < 51; i += 2) {
            extra_bits[i] = bits;
            if (i + 1 < 51) extra_bits[i + 1] = bits;
            if (i != 0 && bits < 17) ++bits;
        }
        uint32_t running = 0;
        for (uint32_t i = 0; i < 51; ++i) {
            base[i] = running;
            running += 1u << extra_bits[i];
        }
    }
};

const position_tables& tables() {
    static const position_tables instance;
    return instance;
}

// Code lengths are transmitted as deltas against the previous block's lengths,
// themselves Huffman-coded by a 20-symbol "pretree" whose lengths are four
// raw bits each. Codes 17/18/19 are runs, which is what keeps a mostly
// unchanged tree almost free to re-send.
bool read_lengths(bit_reader& bits, uint8_t* lengths, uint32_t first,
                  uint32_t last, uint32_t capacity) {
    uint8_t pretree_lengths[kPretreeElements] = {};
    for (uint32_t i = 0; i < kPretreeElements; ++i) {
        uint32_t value = 0;
        if (!bits.read(4, value)) return false;
        pretree_lengths[i] = static_cast<uint8_t>(value);
    }
    huffman_table pretree;
    if (!pretree.build(pretree_lengths, kPretreeElements)) return false;

    // A run started inside the range is written out in full even if it spills
    // past `last`. That is not sloppiness in the format: those spilled values
    // become the previous-lengths the NEXT range is decoded against, so
    // truncating them silently corrupts the following tree.
    uint32_t index = first;
    while (index < last) {
        uint32_t code = 0;
        if (!pretree.decode(bits, code)) return false;

        if (code == 17) { // a short run of zero-length (unused) symbols
            uint32_t extra = 0;
            if (!bits.read(4, extra)) return false;
            uint32_t run = extra + 4;
            while (run-- > 0 && index < capacity) lengths[index++] = 0;
        } else if (code == 18) { // a long run of unused symbols
            uint32_t extra = 0;
            if (!bits.read(5, extra)) return false;
            uint32_t run = extra + 20;
            while (run-- > 0 && index < capacity) lengths[index++] = 0;
        } else if (code == 19) { // a run of one repeated delta
            uint32_t extra = 0;
            if (!bits.read(1, extra)) return false;
            uint32_t run = extra + 4;
            if (!pretree.decode(bits, code)) return false;
            int32_t value = static_cast<int32_t>(lengths[index]) -
                            static_cast<int32_t>(code);
            if (value < 0) value += 17;
            while (run-- > 0 && index < capacity)
                lengths[index++] = static_cast<uint8_t>(value);
        } else { // a single delta against this symbol's previous length
            int32_t value = static_cast<int32_t>(lengths[index]) -
                            static_cast<int32_t>(code);
            if (value < 0) value += 17;
            lengths[index++] = static_cast<uint8_t>(value);
        }
    }
    return true;
}

uint32_t window_bits_for(uint32_t window_size) noexcept {
    uint32_t bits = 0;
    while (bits < 32 && (1u << bits) < window_size) ++bits;
    return bits;
}

} // namespace

bool lzx_decompress(const uint8_t* input, std::size_t input_size,
                    uint8_t* output, std::size_t output_size,
                    uint32_t window_size, std::string& error) {
    if (input == nullptr || output == nullptr) {
        error = "lzx: no data to decompress";
        return false;
    }
    const uint32_t window_bits = window_bits_for(window_size);
    if (window_bits < 15 || window_bits > 25 ||
        (1u << window_bits) != window_size) {
        error = "lzx: window size is not a power of two between 32 KiB and "
                "32 MiB";
        return false;
    }

    const uint32_t position_slots = kPositionSlots[window_bits - 15];
    const uint32_t main_symbols = kNumChars + (position_slots << 3);
    const position_tables& position = tables();

    // Lengths persist across blocks: each block sends deltas against these.
    std::vector<uint8_t> main_lengths(main_symbols, 0);
    std::vector<uint8_t> length_lengths(kNumSecondaryLengths + 1, 0);
    uint8_t aligned_lengths[kAlignedElements] = {};
    huffman_table main_tree, length_tree, aligned_tree;

    // The three most recent match offsets. LZX starts them at 1, so a stream
    // may use a repeat offset before ever coding one explicitly.
    uint32_t r0 = 1, r1 = 1, r2 = 1;

    bit_reader bits(input, input_size);

    // The stream opens with a flag for x86 call-target translation. No Xbox 360
    // title has any use for it - the code is PowerPC - so rather than carry an
    // untestable branch, a stream that asks for it is refused by name.
    uint32_t intel_flag = 0;
    if (!bits.read(1, intel_flag)) {
        error = "lzx: stream ended before its header";
        return false;
    }
    if (intel_flag != 0) {
        error = "lzx: stream uses x86 E8 call translation, which is not "
                "implemented";
        return false;
    }

    // The end of the frame currently being produced. Reaching it realigns the
    // input, which is why it has to be tracked across blocks rather than
    // handled where blocks are read.
    std::size_t next_frame_end = std::min(kFrameSize, output_size);
    auto reached_frame_end = [&](std::size_t position) {
        while (position >= next_frame_end && next_frame_end < output_size) {
            bits.align_to_word();
            next_frame_end = std::min(next_frame_end + kFrameSize, output_size);
        }
    };

    std::size_t out_pos = 0;
    while (out_pos < output_size) {
        uint32_t block_type = 0;
        uint32_t size_high = 0, size_low = 0;
        if (!bits.read(3, block_type) || !bits.read(16, size_high) ||
            !bits.read(8, size_low)) {
            error = "lzx: stream ended inside a block header";
            return false;
        }
        std::size_t block_size = (static_cast<std::size_t>(size_high) << 8) |
                                 size_low;
        if (block_size == 0) {
            error = "lzx: zero-length block";
            return false;
        }
        // A block claiming more than is left would run off the end of the
        // image; clamp so the copy below can never overrun, and let the
        // shortfall surface as a truncated stream instead.
        if (out_pos + block_size > output_size)
            block_size = output_size - out_pos;
        const std::size_t block_end = out_pos + block_size;

        if (block_type == kBlockUncompressed) {
            bits.discard_bits(); // stored blocks are read as whole bytes
            uint8_t repeats[12] = {};
            if (!bits.read_bytes(repeats, sizeof(repeats))) {
                error = "lzx: stream ended inside a stored block's header";
                return false;
            }
            auto le32 = [](const uint8_t* p) {
                return static_cast<uint32_t>(p[0]) |
                       (static_cast<uint32_t>(p[1]) << 8) |
                       (static_cast<uint32_t>(p[2]) << 16) |
                       (static_cast<uint32_t>(p[3]) << 24);
            };
            r0 = le32(repeats + 0);
            r1 = le32(repeats + 4);
            r2 = le32(repeats + 8);
            if (!bits.read_bytes(output + out_pos, block_size)) {
                error = "lzx: stream ended inside a stored block";
                return false;
            }
            out_pos = block_end;
            reached_frame_end(out_pos);
            // Stored blocks are padded to an even length.
            if ((block_size & 1) != 0 && !bits.read_bytes(nullptr, 1)) {
                error = "lzx: stream ended on a stored block's padding";
                return false;
            }
            continue;
        }

        if (block_type != kBlockVerbatim && block_type != kBlockAligned) {
            error = "lzx: unknown block type";
            return false;
        }

        if (block_type == kBlockAligned) {
            for (uint32_t i = 0; i < kAlignedElements; ++i) {
                uint32_t value = 0;
                if (!bits.read(3, value)) {
                    error = "lzx: stream ended inside the aligned tree";
                    return false;
                }
                aligned_lengths[i] = static_cast<uint8_t>(value);
            }
            if (!aligned_tree.build(aligned_lengths, kAlignedElements)) {
                error = "lzx: malformed aligned tree";
                return false;
            }
        }

        // The main tree arrives in two halves - literals, then match symbols -
        // because they change at different rates.
        if (!read_lengths(bits, main_lengths.data(), 0, kNumChars,
                          main_symbols) ||
            !read_lengths(bits, main_lengths.data(), kNumChars, main_symbols,
                          main_symbols) ||
            !read_lengths(bits, length_lengths.data(), 0, kNumSecondaryLengths,
                          static_cast<uint32_t>(length_lengths.size()))) {
            error = "lzx: stream ended inside a block's code lengths";
            return false;
        }
        if (!main_tree.build(main_lengths.data(), main_symbols) ||
            !length_tree.build(length_lengths.data(), kNumSecondaryLengths)) {
            error = "lzx: malformed block trees";
            return false;
        }

        while (out_pos < block_end) {
            uint32_t symbol = 0;
            if (!main_tree.decode(bits, symbol)) {
                error = "lzx: stream ended inside a block";
                return false;
            }
            if (symbol < kNumChars) {
                output[out_pos++] = static_cast<uint8_t>(symbol);
                reached_frame_end(out_pos);
                continue;
            }

            symbol -= kNumChars;
            uint32_t match_length = symbol & kNumPrimaryLengths;
            if (match_length == kNumPrimaryLengths) {
                uint32_t extra_length = 0;
                if (!length_tree.decode(bits, extra_length)) {
                    error = "lzx: stream ended inside a match length";
                    return false;
                }
                match_length += extra_length;
            }
            match_length += kMinMatch;

            const uint32_t slot = symbol >> 3;
            uint32_t match_offset = 0;
            if (slot > 2) {
                if (slot >= position_slots) {
                    error = "lzx: match offset slot is out of range";
                    return false;
                }
                const uint32_t extra = position.extra_bits[slot];
                uint32_t offset_bits = 0;
                if (block_type == kBlockAligned && extra >= 3) {
                    // The low three bits of the offset come from the aligned
                    // tree, which is the whole point of an aligned block.
                    uint32_t verbatim = 0;
                    if (extra > 3 && !bits.read(extra - 3, verbatim)) {
                        error = "lzx: stream ended inside a match offset";
                        return false;
                    }
                    uint32_t aligned = 0;
                    if (!aligned_tree.decode(bits, aligned)) {
                        error = "lzx: stream ended inside an aligned offset";
                        return false;
                    }
                    offset_bits = (verbatim << 3) | aligned;
                } else if (extra > 0 && !bits.read(extra, offset_bits)) {
                    error = "lzx: stream ended inside a match offset";
                    return false;
                }
                match_offset = position.base[slot] - 2 + offset_bits;
                r2 = r1;
                r1 = r0;
                r0 = match_offset;
            } else if (slot == 0) {
                match_offset = r0;
            } else if (slot == 1) {
                match_offset = r1;
                r1 = r0;
                r0 = match_offset;
            } else {
                match_offset = r2;
                r2 = r0;
                r0 = match_offset;
            }

            if (match_offset == 0 || match_offset > out_pos) {
                error = "lzx: match reaches back before the start of the image";
                return false;
            }
            if (out_pos + match_length > output_size) {
                error = "lzx: match runs past the end of the image";
                return false;
            }
            // Byte at a time on purpose: an LZX match is allowed to overlap
            // its own output, which is how runs are encoded.
            std::size_t source = out_pos - match_offset;
            for (uint32_t i = 0; i < match_length; ++i)
                output[out_pos++] = output[source++];
            reached_frame_end(out_pos);
        }
    }

    return true;
}

} // namespace whitty_xenon
