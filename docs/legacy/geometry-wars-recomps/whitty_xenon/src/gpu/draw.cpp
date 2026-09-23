#include "whitty_xenon/gpu/draw.h"

namespace whitty_xenon::gpu {
namespace {

// The low 24 bits of an index are all the GPU uses.
constexpr uint32_t kIndexMask = 0x00FFFFFF;

// The GPU addresses memory through the physical alias; a title's own pointer is
// already there. The same rule as command_processor::physical_to_virtual, kept
// here so this layer does not have to know about the command processor.
uint32_t physical_to_virtual(uint32_t physical) noexcept {
    return physical >= kPhysicalBase ? physical : kPhysicalBase + physical;
}

// Reads `count` bytes of guest memory as a little-endian value, i.e. in memory
// order - the raw bytes the GPU sees before it applies its own swap. Returns 0
// if the range is not committed.
uint32_t read_raw_le(const guest_memory& memory, uint32_t address,
                     uint32_t count) noexcept {
    const auto* bytes = static_cast<const uint8_t*>(memory.host(address, count));
    if (!bytes) return 0;
    uint32_t value = 0;
    for (uint32_t i = 0; i < count; ++i)
        value |= static_cast<uint32_t>(bytes[i]) << (8 * i);
    return value;
}

} // namespace

uint16_t gpu_swap16(uint16_t value, endian swap) noexcept {
    switch (swap) {
        case endian::swap_8in16:
            return static_cast<uint16_t>((value << 8) | (value >> 8));
        case endian::none:
        default:
            return value;
    }
}

uint32_t gpu_swap32(uint32_t value, endian swap) noexcept {
    switch (swap) {
        case endian::swap_8in16:
            return ((value << 8) & 0xFF00FF00u) | ((value >> 8) & 0x00FF00FFu);
        case endian::swap_8in32:
            return (value << 24) | ((value << 8) & 0x00FF0000u) |
                   ((value >> 8) & 0x0000FF00u) | (value >> 24);
        case endian::swap_16in32:
            return (value >> 16) | (value << 16);
        case endian::none:
        default:
            return value;
    }
}

vertex_binding decode_vertex_fetch(const register_file& regs,
                                   uint32_t slot) noexcept {
    vertex_binding binding;
    if (slot >= kVertexFetchConstantCount) return binding;
    const uint32_t base = reg::shader_constant_fetch_00_0 + slot * 2;
    const uint32_t dword0 = regs.get(base + 0);
    const uint32_t dword1 = regs.get(base + 1);

    // dword0: type[1:0], address[31:2] in dwords -> byte address.
    binding.base_address = dword0 & 0xFFFFFFFCu;
    // dword1: endian[1:0], size[25:2] in words -> byte size.
    binding.swap = static_cast<endian>(dword1 & 0x3);
    binding.size_bytes = ((dword1 >> 2) & 0x00FFFFFFu) * 4;
    binding.valid = binding.base_address != 0;
    return binding;
}

std::vector<uint32_t> resolve_indices(const draw_command& draw,
                                      const guest_memory& memory) {
    std::vector<uint32_t> indices;
    indices.reserve(draw.index_count);

    if (draw.source == index_source::auto_generated) {
        for (uint32_t i = 0; i < draw.index_count; ++i) indices.push_back(i);
        return indices;
    }
    if (draw.source != index_source::indexed) {
        // Inline indices need the command stream, which this layer does not
        // hold; the command processor resolves those.
        return indices;
    }

    const uint32_t width = draw.index_32bit ? 4 : 2;
    // VGT_DMA_BASE is a GPU PHYSICAL address, like every other address the
    // command stream carries - the vertex fetch constants, the resolve
    // destination, the front buffer. Xenia dereferences it through
    // TranslatePhysical (primitive_processor.cc), and so must this: read at the
    // bare address and the range is not committed at all, so every index comes
    // back as zero. A draw whose indices are all zero is not obviously broken -
    // it is a well-formed draw of one vertex repeated - and it renders as
    // nothing at all, because every primitive it makes is degenerate.
    const uint32_t base = physical_to_virtual(draw.index_base);
    for (uint32_t i = 0; i < draw.index_count; ++i) {
        const uint32_t address = base + i * width;
        const uint32_t raw = read_raw_le(memory, address, width);
        const uint32_t swapped =
            draw.index_32bit
                ? gpu_swap32(raw, draw.index_endian)
                : gpu_swap16(static_cast<uint16_t>(raw), draw.index_endian);
        indices.push_back(swapped & kIndexMask);
    }
    return indices;
}

} // namespace whitty_xenon::gpu
