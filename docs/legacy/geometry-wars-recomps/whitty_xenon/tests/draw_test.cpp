// Unit tests for draw resolution - index buffers and vertex fetch constants.
//
// The endianness handling is the part that fails silently and far from its
// cause, so it is pinned on known bytes: the swaps against literal values, and
// a full round trip where an index buffer is written to guest memory in console
// (big-endian) order with the matching swap code and read back as the original
// indices. The vertex fetch decode is checked against a hand-built constant
// whose address and size fields are packed exactly as the hardware packs them.
#include "whitty_xenon/gpu/draw.h"
#include "whitty_xenon/gpu/pm4.h"
#include "whitty_xenon/gpu/register_file.h"
#include "whitty_xenon/memory.h"

#include <cassert>
#include <cstdint>
#include <cstdio>
#include <string>
#include <vector>

using namespace whitty_xenon;
using namespace whitty_xenon::gpu;

namespace {

void test_gpu_swap16() {
    assert(gpu_swap16(0x1234, endian::none) == 0x1234);
    assert(gpu_swap16(0x1234, endian::swap_8in16) == 0x3412);
}

void test_gpu_swap32() {
    assert(gpu_swap32(0x12345678, endian::none) == 0x12345678);
    assert(gpu_swap32(0x12345678, endian::swap_8in16) == 0x34127856);
    assert(gpu_swap32(0x12345678, endian::swap_8in32) == 0x78563412);
    assert(gpu_swap32(0x12345678, endian::swap_16in32) == 0x56781234);
}

void test_decode_vertex_fetch() {
    register_file regs;
    // Address 0x1F000000 (>> 2 in the field), type 3; size 0x100 words, endian
    // 8in32. Packed exactly as the fetch constant stores them.
    regs.set(reg::shader_constant_fetch_00_0 + 0, (0x1F000000u) | 0x3);
    regs.set(reg::shader_constant_fetch_00_0 + 1, (0x100u << 2) | 0x2);

    const vertex_binding binding = decode_vertex_fetch(regs, 0);
    assert(binding.valid);
    assert(binding.base_address == 0x1F000000); // type bits stripped
    assert(binding.size_bytes == 0x100 * 4);     // words -> bytes
    assert(binding.swap == endian::swap_8in32);
}

void test_decode_vertex_fetch_second_slot_and_empty() {
    register_file regs;
    // Slot 1 lives two dwords after slot 0.
    regs.set(reg::shader_constant_fetch_00_0 + 2, 0x2A000000u | 0x3);
    regs.set(reg::shader_constant_fetch_00_0 + 3, (0x40u << 2) | 0x0);
    const vertex_binding b1 = decode_vertex_fetch(regs, 1);
    assert(b1.valid && b1.base_address == 0x2A000000);
    assert(b1.swap == endian::none);

    // An untouched slot is empty.
    const vertex_binding empty = decode_vertex_fetch(regs, 5);
    assert(!empty.valid && empty.base_address == 0);

    // An out-of-range slot is empty, not an overread.
    assert(!decode_vertex_fetch(regs, 1000).valid);
}

void test_resolve_auto_indices() {
    guest_memory mem;
    std::string error;
    assert(mem.initialize(error));

    draw_command draw;
    draw.source = index_source::auto_generated;
    draw.index_count = 5;
    const auto indices = resolve_indices(draw, mem);
    assert(indices.size() == 5);
    for (uint32_t i = 0; i < 5; ++i) assert(indices[i] == i);
}

void test_resolve_indexed_16bit() {
    guest_memory mem;
    std::string error;
    assert(mem.initialize(error));
    // VGT_DMA_BASE is a GPU PHYSICAL address, so the buffer is committed - and
    // written - through the physical alias, and the draw carries the bare
    // number. Reading the bare number instead finds nothing committed and
    // every index comes back zero, which is a draw of one vertex repeated and
    // renders as nothing at all.
    const uint32_t physical = 0x30000000;
    const uint32_t base = kPhysicalBase + physical;
    assert(mem.commit(base, 0x1000, error));

    // A 16-bit index buffer stored in console (big-endian) order; write_u16
    // lays the bytes down big-endian, which the matching 8in16 swap reads back.
    const uint16_t source[] = {0, 1, 2, 3, 65535};
    for (uint32_t i = 0; i < 5; ++i) mem.write_u16(base + i * 2, source[i]);

    draw_command draw;
    draw.source = index_source::indexed;
    draw.index_count = 5;
    draw.index_32bit = false;
    draw.index_endian = endian::swap_8in16;
    draw.index_base = physical;

    const auto indices = resolve_indices(draw, mem);
    assert(indices.size() == 5);
    assert(indices[0] == 0);
    assert(indices[1] == 1);
    assert(indices[2] == 2);
    assert(indices[3] == 3);
    assert(indices[4] == 65535);
}

void test_resolve_indexed_32bit_masks_to_24_bits() {
    guest_memory mem;
    std::string error;
    assert(mem.initialize(error));
    const uint32_t physical = 0x30000000;
    const uint32_t base = kPhysicalBase + physical;
    assert(mem.commit(base, 0x1000, error));

    // 32-bit indices, big-endian, 8in32 swap. The high byte must be masked off.
    mem.write_u32(base + 0, 0x00123456);
    mem.write_u32(base + 4, 0xAB000007); // high byte 0xAB must not survive

    draw_command draw;
    draw.source = index_source::indexed;
    draw.index_count = 2;
    draw.index_32bit = true;
    draw.index_endian = endian::swap_8in32;
    draw.index_base = physical;

    const auto indices = resolve_indices(draw, mem);
    assert(indices[0] == 0x123456);
    assert(indices[1] == 0x000007); // 0xAB masked away
}

void test_resolve_indexed_base_is_a_physical_address() {
    guest_memory mem;
    std::string error;
    assert(mem.initialize(error));
    // The same bytes exist at both the bare number and the physical alias, and
    // they differ - so which one is read is visible in the result rather than
    // being a matter of one of them happening to be committed.
    const uint32_t physical = 0x00030000;
    assert(mem.commit(physical, 0x1000, error));
    assert(mem.commit(kPhysicalBase + physical, 0x1000, error));
    const uint16_t decoy[] = {7, 7, 7};
    const uint16_t real[] = {1, 2, 3};
    for (uint32_t i = 0; i < 3; ++i) {
        mem.write_u16(physical + i * 2, decoy[i]);
        mem.write_u16(kPhysicalBase + physical + i * 2, real[i]);
    }

    draw_command draw;
    draw.source = index_source::indexed;
    draw.index_count = 3;
    draw.index_32bit = false;
    draw.index_endian = endian::swap_8in16;
    draw.index_base = physical;
    const auto indices = resolve_indices(draw, mem);
    assert(indices.size() == 3);
    assert(indices[0] == 1 && indices[1] == 2 && indices[2] == 3);

    // A base a title already wrote through the alias is left alone, not
    // translated a second time.
    draw.index_base = kPhysicalBase + physical;
    const auto again = resolve_indices(draw, mem);
    assert(again[0] == 1 && again[1] == 2 && again[2] == 3);
}

void test_resolve_indexed_uncommitted_is_safe() {
    guest_memory mem;
    std::string error;
    assert(mem.initialize(error));

    draw_command draw;
    draw.source = index_source::indexed;
    draw.index_count = 3;
    draw.index_base = 0x50000000; // never committed
    const auto indices = resolve_indices(draw, mem);
    // Uncommitted memory reads as zero rather than faulting.
    assert(indices.size() == 3);
    for (uint32_t index : indices) assert(index == 0);
}

} // namespace

int main() {
    test_gpu_swap16();
    test_gpu_swap32();
    test_decode_vertex_fetch();
    test_decode_vertex_fetch_second_slot_and_empty();
    test_resolve_auto_indices();
    test_resolve_indexed_16bit();
    test_resolve_indexed_32bit_masks_to_24_bits();
    test_resolve_indexed_base_is_a_physical_address();
    test_resolve_indexed_uncommitted_is_safe();
    std::printf("draw_test: all checks passed\n");
    return 0;
}
