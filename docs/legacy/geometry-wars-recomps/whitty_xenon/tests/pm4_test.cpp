// Unit tests for the PM4 command-stream decoder.
//
// The decoder's one job it must never get wrong is staying in sync: each
// packet's word count has to be exact, because the next packet is read from
// wherever this one ends. So the tests build streams of mixed packet types and
// check not only that each packet decodes correctly but that the walk lands the
// following packet on its real header. Packet layouts are constructed by hand
// from the documented bit fields, which is the independent check - the encoder
// here and the decoder under test share no code.
#include "whitty_xenon/gpu/pm4.h"

#include <cassert>
#include <cstdint>
#include <cstdio>
#include <string>
#include <vector>

using namespace whitty_xenon::gpu;

namespace {

// Appends a dword to the stream in big-endian order, as guest memory holds it.
void put(std::vector<uint8_t>& s, uint32_t v) {
    s.push_back(static_cast<uint8_t>(v >> 24));
    s.push_back(static_cast<uint8_t>(v >> 16));
    s.push_back(static_cast<uint8_t>(v >> 8));
    s.push_back(static_cast<uint8_t>(v));
}

// Header builders from the documented bit layouts.
uint32_t type0_header(uint32_t base, uint32_t count, bool write_one) {
    return ((count - 1) << 16) | (write_one ? (1u << 15) : 0) | (base & 0x7FFF);
}
uint32_t type3_header(uint32_t opcode, uint32_t count, bool predicated) {
    return 0xC0000000u | ((count - 1) << 16) | ((opcode & 0x7F) << 8) |
           (predicated ? 1u : 0u);
}
uint32_t type1_header(uint32_t reg1, uint32_t reg2) {
    return 0x40000000u | ((reg2 & 0x7FF) << 11) | (reg1 & 0x7FF);
}
uint32_t type2_header() { return 0x80000000u; }

std::vector<pm4_packet> parse(const std::vector<uint8_t>& s) {
    std::vector<pm4_packet> packets;
    std::string error;
    const bool ok = parse_pm4(s.data(), s.size(), packets, error);
    assert(ok && error.empty());
    return packets;
}

void test_type0_consecutive_registers() {
    std::vector<uint8_t> s;
    put(s, type0_header(0x2000, 3, false));
    put(s, 0x11111111);
    put(s, 0x22222222);
    put(s, 0x33333333);
    const auto packets = parse(s);
    assert(packets.size() == 1);
    assert(packets[0].type == packet_type::type0);
    assert(packets[0].word_count == 4);
    assert(packets[0].register_writes.size() == 3);
    assert(packets[0].register_writes[0].index == 0x2000);
    assert(packets[0].register_writes[0].value == 0x11111111);
    assert(packets[0].register_writes[2].index == 0x2002);
    assert(packets[0].register_writes[2].value == 0x33333333);
}

void test_type0_write_one_register_repeatedly() {
    std::vector<uint8_t> s;
    put(s, type0_header(0x1830, 2, true)); // write_one: same index each time
    put(s, 0xAAAAAAAA);
    put(s, 0xBBBBBBBB);
    const auto packets = parse(s);
    assert(packets[0].register_writes.size() == 2);
    assert(packets[0].register_writes[0].index == 0x1830);
    assert(packets[0].register_writes[1].index == 0x1830); // not incremented
    assert(packets[0].register_writes[1].value == 0xBBBBBBBB);
}

void test_type1_two_registers() {
    std::vector<uint8_t> s;
    put(s, type1_header(0x100, 0x200));
    put(s, 0xC0FFEE00);
    put(s, 0xDECAF000);
    const auto packets = parse(s);
    assert(packets[0].type == packet_type::type1);
    assert(packets[0].word_count == 3);
    assert(packets[0].register_writes.size() == 2);
    assert(packets[0].register_writes[0].index == 0x100);
    assert(packets[0].register_writes[0].value == 0xC0FFEE00);
    assert(packets[0].register_writes[1].index == 0x200);
    assert(packets[0].register_writes[1].value == 0xDECAF000);
}

void test_type2_filler_is_one_word() {
    std::vector<uint8_t> s;
    put(s, type2_header());
    const auto packets = parse(s);
    assert(packets.size() == 1);
    assert(packets[0].type == packet_type::type2);
    assert(packets[0].word_count == 1);
}

void test_draw_indx_auto() {
    std::vector<uint8_t> s;
    put(s, type3_header(pm4_op::draw_indx, 2, false));
    put(s, 0);                                    // dword0: viz query
    put(s, (6u << 16) | (2u << 6) | 0x04);        // count 6, src_sel 2, tri list
    const auto packets = parse(s);
    assert(packets[0].type == packet_type::type3);
    assert(packets[0].opcode == pm4_op::draw_indx);
    assert(packets[0].is_draw);
    assert(packets[0].draw.index_count == 6);
    assert(packets[0].draw.prim == primitive_type::triangle_list);
    assert(packets[0].draw.source == index_source::auto_generated);
}

void test_draw_indx_indexed() {
    std::vector<uint8_t> s;
    put(s, type3_header(pm4_op::draw_indx, 4, false));
    put(s, 0);                              // dword0
    put(s, (3u << 16) | (0u << 6) | 0x04);  // count 3, src_sel 0, tri list, 16-bit
    put(s, 0x1A000000);                     // index buffer guest address
    put(s, 3);                              // low 24 bits: index count
    const auto packets = parse(s);
    assert(packets[0].draw.source == index_source::indexed);
    assert(packets[0].draw.index_base == 0x1A000000);
    assert(!packets[0].draw.index_32bit);
    assert(packets[0].draw.index_size == 6); // 3 indices * 2 bytes
}

void test_draw_indx_2_inline() {
    std::vector<uint8_t> s;
    put(s, type3_header(pm4_op::draw_indx_2, 3, false));
    put(s, (4u << 16) | (2u << 6) | 0x06);  // count 4, tri strip, inline
    put(s, 0x00010002);                     // indices 0,1,2,3 packed 16-bit
    put(s, 0x00030000);
    const auto packets = parse(s);
    assert(packets[0].draw.source == index_source::inline_in_packet);
    assert(packets[0].draw.index_count == 4);
    assert(packets[0].draw.prim == primitive_type::triangle_strip);
    assert(packets[0].draw.inline_offset == 2); // header at 0, indices at word 2
}

void test_indirect_buffer() {
    std::vector<uint8_t> s;
    put(s, type3_header(pm4_op::indirect_buffer, 2, false));
    put(s, 0x20000000); // list address
    put(s, 0x40);       // list length in dwords
    const auto packets = parse(s);
    assert(packets[0].is_indirect_buffer);
    assert(packets[0].indirect.address == 0x20000000);
    assert(packets[0].indirect.length_dwords == 0x40);
}

// The load-bearing test: a stream of every packet type must decode all of them,
// each landing on its true header - proof the word counts are exact.
void test_mixed_stream_stays_in_sync() {
    std::vector<uint8_t> s;
    put(s, type2_header());                              // 1 word
    put(s, type0_header(0x2100, 2, false));              // 3 words
    put(s, 0xDEAD0001);
    put(s, 0xDEAD0002);
    put(s, type3_header(pm4_op::nop, 1, false));         // 2 words
    put(s, 0);
    put(s, type3_header(pm4_op::draw_indx, 2, false));   // 3 words
    put(s, 0);
    put(s, (3u << 16) | (2u << 6) | 0x04);
    put(s, type2_header());                              // 1 word

    const auto packets = parse(s);
    assert(packets.size() == 5);
    assert(packets[0].type == packet_type::type2 && packets[0].header_word == 0);
    assert(packets[1].type == packet_type::type0 && packets[1].header_word == 1);
    assert(packets[1].register_writes.size() == 2);
    assert(packets[2].type == packet_type::type3 &&
           packets[2].opcode == pm4_op::nop && packets[2].header_word == 4);
    assert(packets[3].is_draw && packets[3].header_word == 6);
    assert(packets[3].draw.index_count == 3);
    assert(packets[4].type == packet_type::type2 && packets[4].header_word == 9);
}

void test_predication_bit() {
    std::vector<uint8_t> s;
    put(s, type3_header(pm4_op::draw_indx, 2, true)); // predicated
    put(s, 0);
    put(s, (1u << 16) | (2u << 6) | 0x04);
    const auto packets = parse(s);
    assert(packets[0].predicated);
}

void test_desync_runs_past_end_is_rejected() {
    std::vector<uint8_t> s;
    // A type-0 claiming 8 registers, but only two dwords follow.
    put(s, type0_header(0x2000, 8, false));
    put(s, 0);
    put(s, 0);
    std::vector<pm4_packet> packets;
    std::string error;
    assert(!parse_pm4(s.data(), s.size(), packets, error));
    assert(!error.empty());
}

// The same short stream, walked as a live ring is: the caller asks for the
// remainder rather than for a verdict, and gets the whole packets plus a
// description of the one still arriving.
void test_partial_trailing_packet_is_reported_as_pending() {
    std::vector<uint8_t> s;
    // One complete type-3 NOP with a single payload dword...
    put(s, type3_header(pm4_op::nop, 1, false));
    put(s, 0);
    // ...then a type-0 claiming 8 registers with only two of them written.
    put(s, type0_header(0x2000, 8, false));
    put(s, 0x11111111);
    put(s, 0x22222222);

    std::vector<pm4_packet> packets;
    std::string error;
    pending_packet pending;
    assert(parse_pm4(s.data(), s.size(), packets, error, &pending));
    // The complete packet is decoded and the partial one is not, so nothing
    // half-read reaches the register file.
    assert(packets.size() == 1);
    assert(packets[0].type == packet_type::type3);
    assert(packets[0].opcode == pm4_op::nop);
    // Three of the five dwords belong to the packet still arriving, and its
    // header says it needs nine in all (one header plus eight registers).
    assert(pending.present_bytes == 3 * 4);
    assert(pending.required_bytes == 9 * 4);
    // Consuming size - present_bytes lands exactly on the partial header.
    assert(s.size() - pending.present_bytes == 2 * 4);
}

// A stream that ends on a packet boundary has nothing pending, which is how a
// caller tells "all done" from "come back with more".
void test_complete_stream_reports_nothing_pending() {
    std::vector<uint8_t> s;
    put(s, type3_header(pm4_op::nop, 1, false));
    put(s, 0);
    std::vector<pm4_packet> packets;
    std::string error;
    pending_packet pending{7, 7}; // must be cleared, not merely left alone
    assert(parse_pm4(s.data(), s.size(), packets, error, &pending));
    assert(packets.size() == 1);
    assert(pending.present_bytes == 0);
    assert(pending.required_bytes == 0);
}

void test_non_multiple_of_four_is_rejected() {
    std::vector<uint8_t> s = {0x00, 0x01, 0x02}; // 3 bytes
    std::vector<pm4_packet> packets;
    std::string error;
    assert(!parse_pm4(s.data(), s.size(), packets, error));
    assert(!error.empty());
}

void test_empty_stream() {
    std::vector<pm4_packet> packets;
    std::string error;
    assert(parse_pm4(nullptr, 0, packets, error));
    assert(packets.empty());
}

} // namespace

int main() {
    test_type0_consecutive_registers();
    test_type0_write_one_register_repeatedly();
    test_type1_two_registers();
    test_type2_filler_is_one_word();
    test_draw_indx_auto();
    test_draw_indx_indexed();
    test_draw_indx_2_inline();
    test_indirect_buffer();
    test_mixed_stream_stays_in_sync();
    test_predication_bit();
    test_desync_runs_past_end_is_rejected();
    test_partial_trailing_packet_is_reported_as_pending();
    test_complete_stream_reports_nothing_pending();
    test_non_multiple_of_four_is_rejected();
    test_empty_stream();
    std::printf("pm4_test: all checks passed\n");
    return 0;
}
