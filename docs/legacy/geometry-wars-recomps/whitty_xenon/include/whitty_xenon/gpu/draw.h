// draw.h - turning a decoded draw into concrete geometry.
//
// A draw packet on its own says only "draw N indices as triangles". The rest -
// which vertices, from where in memory, in what byte order - lives in the
// register file (the vertex fetch constants) and in guest memory (the index
// buffer). This layer resolves those: it reads the index buffer out of guest
// memory into a flat host-order list, and decodes a vertex fetch constant into
// a concrete buffer binding. It is the step where the register file, which the
// decoder only wrote, starts being read.
//
// Endianness is the whole difficulty here. The console is big-endian and its
// buffers carry a swap code; getting it wrong yields indices that point at the
// wrong vertices, which shows up as scrambled geometry a long way downstream.
// So the swap is done exactly as the hardware does it (Xenia's GpuSwap), and
// pinned by tests on known bytes.
#pragma once

#include "whitty_xenon/gpu/pm4.h"
#include "whitty_xenon/gpu/register_file.h"
#include "whitty_xenon/memory.h"

#include <cstdint>
#include <vector>

namespace whitty_xenon::gpu {

// The GPU's byte-swap, applied as a value is fetched. Matches the console's
// (and Xenia's) GpuSwap exactly.
uint16_t gpu_swap16(uint16_t value, endian swap) noexcept;
uint32_t gpu_swap32(uint32_t value, endian swap) noexcept;

// A vertex buffer binding decoded from a vertex fetch constant.
struct vertex_binding {
    uint32_t base_address{0}; // guest byte address of the vertex data
    uint32_t size_bytes{0};   // size of the bound range in bytes
    endian swap{endian::none};
    bool valid{false}; // false when the fetch slot is empty
};

// There are 96 vertex fetch constants, two dwords each, packed into the fetch-
// constant register bank that begins at reg::shader_constant_fetch_00_0.
inline constexpr uint32_t kVertexFetchConstantCount = 96;

// Decodes vertex fetch constant `slot` (0..95) from the register file. The
// constant stores the address in dwords and the size in words, which are scaled
// to bytes here.
vertex_binding decode_vertex_fetch(const register_file& regs,
                                   uint32_t slot) noexcept;

// Resolves a draw's vertex indices into a flat, host-order, 24-bit-masked list.
// An auto draw yields 0..count-1; an indexed draw reads its index buffer out of
// guest memory and swaps it. Inline-index draws are resolved by the command
// processor, which holds the command stream, not here.
std::vector<uint32_t> resolve_indices(const draw_command& draw,
                                      const guest_memory& memory);

} // namespace whitty_xenon::gpu
