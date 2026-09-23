#include "whitty_xenon/gpu/pm4.h"

namespace whitty_xenon::gpu {
namespace {

// The command stream is big-endian; read one dword at a byte pointer.
uint32_t read_be32(const uint8_t* p) noexcept {
    return (static_cast<uint32_t>(p[0]) << 24) |
           (static_cast<uint32_t>(p[1]) << 16) |
           (static_cast<uint32_t>(p[2]) << 8) | static_cast<uint32_t>(p[3]);
}

// Decodes a type-3 draw packet's payload into a draw_command. `payload` points
// at the first payload dword (past the header); `payload_words` is how many
// payload dwords the packet declared, so a short packet is never read past;
// `header_word` locates the packet so an inline-index offset can be recorded as
// a stream position.
draw_command decode_draw(uint32_t opcode, const uint8_t* payload,
                         uint32_t payload_words, uint32_t header_word) {
    draw_command draw;
    if (opcode == pm4_op::draw_indx) {
        // dword0 is viz-query info; dword1 carries the draw parameters.
        if (payload_words < 2) return draw;
        const uint32_t dword1 = read_be32(payload + 4);
        draw.index_count = dword1 >> 16;
        draw.prim = static_cast<primitive_type>(dword1 & 0x3F);
        draw.index_32bit = (dword1 >> 11) & 0x1;
        const uint32_t src_sel = (dword1 >> 6) & 0x3;
        if (src_sel == 0x0 && payload_words >= 4) {
            draw.source = index_source::indexed;
            draw.index_base = read_be32(payload + 8);
            // The top two bits of the size word are the index endianness; the
            // low 24 are the index count, scaled to bytes by the index width.
            const uint32_t size_word = read_be32(payload + 12);
            draw.index_endian = static_cast<endian>(size_word >> 30);
            draw.index_size =
                (size_word & 0x00FFFFFF) * (draw.index_32bit ? 4 : 2);
        } else {
            // src_sel 0x2 is auto-generated indices; anything else is treated
            // the same rather than guessed at.
            draw.source = index_source::auto_generated;
        }
    } else { // draw_indx_2: indices are inline in the packet
        if (payload_words < 1) return draw;
        const uint32_t dword0 = read_be32(payload + 0);
        draw.index_count = dword0 >> 16;
        draw.prim = static_cast<primitive_type>(dword0 & 0x3F);
        draw.index_32bit = (dword0 >> 11) & 0x1;
        draw.source = index_source::inline_in_packet;
        // Inline indices begin at the packet's second payload dword.
        draw.inline_offset = header_word + 2;
    }
    return draw;
}

} // namespace

bool constant_bank_base(uint32_t type, uint32_t& base) noexcept {
    switch (type) {
        case 0: base = constant_bank::alu; return true;
        case 1: base = constant_bank::fetch; return true;
        case 2: base = constant_bank::boolean; return true;
        case 3: base = constant_bank::loop; return true;
        case 4: base = constant_bank::registers; return true;
        default: return false;
    }
}

bool parse_pm4(const uint8_t* data, std::size_t size_bytes,
               std::vector<pm4_packet>& packets, std::string& error,
               pending_packet* pending) {
    packets.clear();
    if (pending != nullptr) *pending = pending_packet{};
    if ((size_bytes & 0x3) != 0) {
        error = "command buffer size is not a multiple of four";
        return false;
    }
    const uint32_t total_words = static_cast<uint32_t>(size_bytes / 4);

    uint32_t word = 0;
    while (word < total_words) {
        const uint8_t* header_ptr = data + word * 4;
        const uint32_t header = read_be32(header_ptr);
        const uint32_t type = header >> 30;

        pm4_packet packet;
        packet.type = static_cast<packet_type>(type);
        packet.header_word = word;

        uint32_t word_count = 0;
        switch (type) {
            case 0: { // register write(s)
                const uint32_t count = ((header >> 16) & 0x3FFF) + 1;
                const uint32_t base = header & 0x7FFF;
                const bool write_one = (header >> 15) & 0x1;
                word_count = 1 + count;
                if (word + word_count > total_words) break; // caught below
                packet.register_writes.reserve(count);
                for (uint32_t m = 0; m < count; ++m) {
                    const uint16_t index = static_cast<uint16_t>(
                        write_one ? base : base + m);
                    packet.register_writes.push_back(
                        register_write{index, read_be32(header_ptr + 4 + m * 4)});
                }
                break;
            }
            case 1: { // two register writes named in the header
                word_count = 1 + 2;
                if (word + word_count > total_words) break;
                packet.register_writes.push_back(register_write{
                    static_cast<uint16_t>(header & 0x7FF),
                    read_be32(header_ptr + 4)});
                packet.register_writes.push_back(register_write{
                    static_cast<uint16_t>((header >> 11) & 0x7FF),
                    read_be32(header_ptr + 8)});
                break;
            }
            case 2: // filler word, no payload
                word_count = 1;
                break;
            case 3: { // command
                const uint32_t count = ((header >> 16) & 0x3FFF) + 1;
                packet.opcode = (header >> 8) & 0x7F;
                packet.predicated = header & 0x1;
                word_count = 1 + count;
                if (word + word_count > total_words) break;
                if (packet.opcode == pm4_op::draw_indx ||
                    packet.opcode == pm4_op::draw_indx_2) {
                    packet.is_draw = true;
                    packet.draw = decode_draw(packet.opcode, header_ptr + 4,
                                              count, word);
                } else if ((packet.opcode == pm4_op::indirect_buffer ||
                            packet.opcode == pm4_op::indirect_buffer_pfd) &&
                           count >= 2) {
                    packet.is_indirect_buffer = true;
                    packet.indirect.address = read_be32(header_ptr + 4);
                    packet.indirect.length_dwords = read_be32(header_ptr + 8);
                } else {
                    // Everything else keeps its raw payload. The packets that
                    // make the GPU write back into guest memory - the fences
                    // and interrupts a title waits on - are all just a handful
                    // of dwords, so carrying them decoded costs little and
                    // saves a bespoke decoder each.
                    packet.payload.reserve(count);
                    for (uint32_t i = 0; i < count; ++i)
                        packet.payload.push_back(read_be32(header_ptr + 4 + i * 4));
                }
                break;
            }
            default: break; // unreachable: type is two bits
        }

        if (word + word_count > total_words) {
            // The packet is not all here. Whether that is a broken stream or
            // simply a stream still being written is the caller's to say.
            if (pending == nullptr) {
                error = "packet runs past the end of the command buffer";
                return false;
            }
            pending->present_bytes = (total_words - word) * 4;
            pending->required_bytes = word_count * 4;
            return true;
        }
        packet.word_count = word_count;
        word += word_count;
        packets.push_back(std::move(packet));
    }
    return true;
}

} // namespace whitty_xenon::gpu
