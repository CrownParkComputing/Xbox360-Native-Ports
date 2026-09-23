#include "whitty_xenon/gpu/register_file.h"

#include <cstring>

namespace whitty_xenon::gpu {

float register_file::get_float(uint32_t index) const noexcept {
    const uint32_t bits = get(index);
    float value;
    std::memcpy(&value, &bits, sizeof(value)); // bit reinterpret, no UB
    return value;
}

vertex_fetch_constant decode_vertex_fetch_constant(const register_file& regs,
                                                   uint32_t slot) noexcept {
    const uint32_t base = reg::shader_constant_fetch_00_0 + slot * 2;
    const uint32_t dword0 = regs.get(base);
    const uint32_t dword1 = regs.get(base + 1);
    vertex_fetch_constant fetch;
    fetch.type = dword0 & 0x3;
    // The address is counted in dwords, the size in dwords; both become bytes.
    fetch.base_address = (dword0 >> 2) * 4;
    fetch.swap = static_cast<endian>(dword1 & 0x3);
    fetch.size_bytes = ((dword1 >> 2) & 0x00FFFFFF) * 4;
    return fetch;
}

texture_fetch_constant decode_texture_fetch_constant(const register_file& regs,
                                                     uint32_t slot) noexcept {
    // Six dwords per texture slot, unlike the two a vertex fetch uses.
    const uint32_t base = reg::shader_constant_fetch_00_0 + slot * 6;
    const uint32_t dword0 = regs.get(base);
    const uint32_t dword1 = regs.get(base + 1);
    const uint32_t dword2 = regs.get(base + 2);
    const uint32_t dword3 = regs.get(base + 3);
    const uint32_t dword4 = regs.get(base + 4);
    const uint32_t dword5 = regs.get(base + 5);
    texture_fetch_constant fetch;
    fetch.type = dword0 & 0x3;
    fetch.pitch_pixels = ((dword0 >> 22) & 0x1FF) << 5;
    fetch.tiled = ((dword0 >> 31) & 0x1) != 0;
    fetch.format = dword1 & 0x3F;
    fetch.endianness = static_cast<endian>((dword1 >> 6) & 0x3);
    // Four three-bit component selectors, starting one bit into dword 3.
    fetch.swizzle = (dword3 >> 1) & 0xFFF;
    // The address is stored shifted down by twelve, so a texture always starts
    // on a 4 KiB boundary.
    fetch.base_address = ((dword1 >> 12) & 0xFFFFF) << 12;
    // A 2D size is stored as extent-1 in two 13-bit fields.
    fetch.width = (dword2 & 0x1FFF) + 1;
    fetch.height = ((dword2 >> 13) & 0x1FFF) + 1;
    fetch.packed_mips = ((dword5 >> 11) & 0x1) != 0;

    // How the title asked for this texture to be sampled. Positions from
    // Xenia's xe_gpu_texture_fetch_t (src/xenia/gpu/xenos.h): addressing sits
    // in dword 0 above the per-component signs, filtering in dword 3 above the
    // swizzle and the exponent adjust, and the mip level range in dword 4.
    fetch.clamp_x = static_cast<texture_clamp_mode>((dword0 >> 10) & 0x7);
    fetch.clamp_y = static_cast<texture_clamp_mode>((dword0 >> 13) & 0x7);
    fetch.clamp_z = static_cast<texture_clamp_mode>((dword0 >> 16) & 0x7);
    fetch.mag_filter = static_cast<texture_filter>((dword3 >> 19) & 0x3);
    fetch.min_filter = static_cast<texture_filter>((dword3 >> 21) & 0x3);
    fetch.mip_filter = static_cast<texture_filter>((dword3 >> 23) & 0x3);
    fetch.aniso_filter =
        static_cast<texture_aniso_filter>((dword3 >> 25) & 0x7);
    fetch.mip_min_level = (dword4 >> 2) & 0xF;
    fetch.mip_max_level = (dword4 >> 6) & 0xF;
    fetch.border_color = static_cast<texture_border_color>(dword5 & 0x3);
    fetch.dimension = static_cast<fetch_dimension>((dword5 >> 9) & 0x3);
    fetch.mip_address = ((dword5 >> 12) & 0xFFFFF) << 12;
    return fetch;
}

namespace {

// One field's worth of the reconciliation: the instruction unless it deferred.
texture_filter chosen(texture_filter shader, texture_filter constant) noexcept {
    return shader == texture_filter::use_fetch_constant ? constant : shader;
}

} // namespace

sampler_state resolve_sampler_state(const texture_fetch_constant& fetch,
                                    const sampler_override& shader) noexcept {
    sampler_state state;
    const texture_filter mag = chosen(shader.mag_filter, fetch.mag_filter);
    const texture_filter min = chosen(shader.min_filter, fetch.min_filter);
    const texture_filter mip = chosen(shader.mip_filter, fetch.mip_filter);
    state.mag_linear = mag == texture_filter::linear;
    state.min_linear = min == texture_filter::linear;
    state.mip_linear = mip == texture_filter::linear;
    state.mip_base_map = mip == texture_filter::base_map;
    state.aniso =
        shader.aniso_filter == texture_aniso_filter::use_fetch_constant
            ? fetch.aniso_filter
            : shader.aniso_filter;
    // The console's own value for "defer" can reach here from the constant
    // itself, which has nothing left to defer to. Off is the safe reading: it
    // is what no anisotropy means, and it is what a constant that was never
    // written says.
    if (state.aniso == texture_aniso_filter::use_fetch_constant ||
        static_cast<uint8_t>(state.aniso) >
            static_cast<uint8_t>(texture_aniso_filter::max_16_1))
        state.aniso = texture_aniso_filter::disabled;

    // Only the axes the texture actually has are addressed by their own mode;
    // the rest clamp. A 2D texture's clamp_z field is not addressing anything,
    // and letting a stale repeat out of it changes nothing on a 2D sampler but
    // does split the cache key for no reason.
    state.clamp_x = fetch.clamp_x;
    state.clamp_y = fetch.dimension == fetch_dimension::d1
                        ? texture_clamp_mode::clamp_to_edge
                        : fetch.clamp_y;
    state.clamp_z = fetch.dimension == fetch_dimension::d3_or_stacked
                        ? fetch.clamp_z
                        : texture_clamp_mode::clamp_to_edge;
    // A cube map is sampled across its faces and takes no addressing at all.
    if (fetch.dimension == fetch_dimension::cube) {
        state.clamp_x = texture_clamp_mode::clamp_to_edge;
        state.clamp_y = texture_clamp_mode::clamp_to_edge;
        state.clamp_z = texture_clamp_mode::clamp_to_edge;
    }
    // The border colour only exists where something reads it.
    const auto uses_border = [](texture_clamp_mode mode) {
        return mode == texture_clamp_mode::clamp_to_border ||
               mode == texture_clamp_mode::mirror_clamp_to_border;
    };
    state.border = (uses_border(state.clamp_x) || uses_border(state.clamp_y) ||
                    uses_border(state.clamp_z))
                       ? fetch.border_color
                       : texture_border_color::abgr_black;

    // With no mip chain there is no level to select, and the fields that would
    // select one hold whatever was last there. Xenia reads them only when the
    // mip PAGE is set - the low 17 bits of the stored page number, the console's
    // physical range - and so does this.
    const uint32_t mip_page = (fetch.mip_address >> 12) & 0x1FFFF;
    state.mip_min_level = mip_page != 0 ? fetch.mip_min_level : 0;
    return state;
}

} // namespace whitty_xenon::gpu
