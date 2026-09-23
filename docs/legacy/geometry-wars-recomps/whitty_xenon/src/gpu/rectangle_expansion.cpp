#include "whitty_xenon/gpu/rectangle_expansion.h"

#include <cstring>

namespace whitty_xenon::gpu {
namespace {

// Export indices. 62 is the position; 0-15 are interpolators; 63 is point size,
// which a rectangle list has no use for and whose presence is grounds to
// refuse, because it is a value this expansion does not carry.
constexpr uint32_t kExportPosition = 62;
constexpr uint32_t kExportPointSize = 63;

// Where a temporary register's value came from.
struct register_origin {
    bool from_fetch{false};
    uint32_t fetch_index{0};
};

// Is this ALU source a plain, unmodified read of a whole register?
//
// The swizzle is required to be the identity. Any permutation would still be
// affine - and would still commute with building the fourth vertex - but the
// console picks the rectangle's diagonal by comparing the x and y of the
// TRANSFORMED position, and a swizzle moves which fetched components those are.
// Allowing it would mean tracking the permutation through to the edge test for
// no gain: no shader seen here uses one on a rectangle-list pass.
bool is_plain_read(const alu_source& source) noexcept {
    return source.is_temp && source.swizzle == 0 && !source.negate &&
           !source.temp_relative() && !source.temp_absolute();
}

} // namespace

namespace {

rectangle_passthrough refuse(const char* why) {
    rectangle_passthrough out;
    out.reason = why;
    return out;
}

} // namespace

rectangle_passthrough analyse_rectangle_passthrough(
    const shader_program& program) {
    rectangle_passthrough out;
    // 64 temporaries is the register file the source field can address.
    register_origin origin[64]{};
    uint32_t next_fetch = 0;
    bool position_seen = false;

    for (const shader_exec_block& block : program.exec_blocks) {
        // A conditional exec block runs only sometimes, so what it leaves in a
        // register is not a property of the vertex alone. Refuse rather than
        // reason about it.
        if (block.cf.opcode == cf_opcode::cond_exec_pred ||
            block.cf.opcode == cf_opcode::cond_exec_pred_end)
            return refuse("a predicated exec block");
        for (const shader_instruction& instruction : block.instructions) {
            switch (instruction.kind) {
                case instruction_kind::vertex_fetch: {
                    const vertex_fetch_instruction& vf = instruction.vertex;
                    // A predicated fetch may or may not have run.
                    if (vf.is_predicated) return refuse("a predicated fetch");
                    if (vf.dst_reg >= 64)
                        return refuse("a fetch into a register past the file");
                    origin[vf.dst_reg].from_fetch = true;
                    origin[vf.dst_reg].fetch_index = next_fetch;
                    ++next_fetch;
                    break;
                }
                case instruction_kind::texture_fetch:
                    // A vertex shader sampling a texture is reading something
                    // that is not in the vertex buffer, so the result is not a
                    // function of the record and the commuting argument fails.
                    return refuse("a texture fetch in the vertex shader");
                case instruction_kind::alu: {
                    const alu_instruction& alu = instruction.alu;
                    if (!alu.is_export) {
                        // Arithmetic into a temporary is allowed, but whatever
                        // it produced is no longer known to be the buffer's
                        // value. Geometry Wars' own rectangle shader has
                        // exactly one of these - a constant-buffer read whose
                        // result nothing uses - and refusing the shader for it
                        // would refuse the case this exists to serve.
                        if (alu.vector_dest < 64)
                            origin[alu.vector_dest] = register_origin{};
                        if (alu.scalar_dest < 64)
                            origin[alu.scalar_dest] = register_origin{};
                        break;
                    }
                    if (alu.is_predicated) return refuse("a predicated export");
                    if (alu.vector_clamp) return refuse("a clamped export");
                    // Point size is a per-vertex value the strip would have to
                    // carry and this does not.
                    if (alu.vector_dest == kExportPointSize)
                        return refuse("a point-size export");
                    const bool is_position = alu.vector_dest == kExportPosition;
                    if (!is_position && alu.vector_dest >= 16)
                        return refuse("an export that is not a known output");
                    // The whole vector, not a masked part of it: a masked
                    // export leaves the other components holding whatever a
                    // previous export wrote, which is state this does not model.
                    if (alu.vector_write_mask != 0xF)
                        return refuse("a masked export");
                    // The Xenos has no `mov`. The compiler writes one as
                    // `max dst, src, src` - the maximum of a value with itself
                    // - and that is the only vector operation accepted between
                    // a fetch and an export, because it is the only one whose
                    // output is provably its input.
                    if (alu.vector_opcode != alu_vector_opcode::max)
                        return refuse("an export that is not a mov idiom");
                    const alu_source& a = alu.sources[0];
                    const alu_source& b = alu.sources[1];
                    if (!is_plain_read(a) || !is_plain_read(b))
                        return refuse("an export source that is modified");
                    if (a.temp_reg() != b.temp_reg())
                        return refuse("a max of two different registers");
                    const register_origin& from = origin[a.temp_reg()];
                    if (!from.from_fetch)
                        return refuse("an export of a computed register");
                    if (is_position) {
                        if (position_seen)
                            return refuse("two position exports");
                        position_seen = true;
                        out.position_input = from.fetch_index;
                    }
                    break;
                }
            }
        }
    }
    if (!position_seen) return refuse("no position export");
    out.ok = true;
    out.reason = "affine pass-through";
    return out;
}

namespace {

// One IEEE float out of a staged record, host byte order.
float read_float(const uint8_t* record, uint32_t offset) noexcept {
    float value = 0.0f;
    std::memcpy(&value, record + offset, sizeof(value));
    return value;
}

void write_float(uint8_t* record, uint32_t offset, float value) noexcept {
    std::memcpy(record + offset, &value, sizeof(value));
}

} // namespace

expanded_rectangles expand_rectangle_list(
    const std::vector<rectangle_binding>& bindings,
    const std::vector<rectangle_field>& fields,
    const rectangle_field& position, const float edge_scale[2],
    const std::vector<uint32_t>& indices, uint32_t index_count,
    uint32_t first_vertex) {
    expanded_rectangles out;
    if (bindings.empty()) return out;
    if (position.binding >= bindings.size() || position.components < 2)
        return out;
    for (const rectangle_binding& binding : bindings)
        if (binding.data == nullptr || binding.stride == 0) return out;
    for (const rectangle_field& field : fields)
        if (field.binding >= bindings.size() || field.components == 0 ||
            field.components > 4)
            return out;

    const uint32_t supplied =
        indices.empty() ? index_count : static_cast<uint32_t>(indices.size());
    const uint32_t rectangles = supplied / 3;
    if (rectangles == 0) return out;

    out.buffers.resize(bindings.size());
    for (std::size_t b = 0; b < bindings.size(); ++b)
        out.buffers[b].assign(std::size_t(rectangles) * 4 * bindings[b].stride,
                              0);
    out.indices.reserve(std::size_t(rectangles) * 6);

    const auto source_index = [&](uint32_t i) {
        return (indices.empty() ? i : indices[i]) + first_vertex;
    };

    for (uint32_t r = 0; r < rectangles; ++r) {
        uint32_t source[3] = {source_index(r * 3 + 0), source_index(r * 3 + 1),
                              source_index(r * 3 + 2)};
        // Every record has to be inside every buffer, or the expansion would
        // be reading past one. Bailing out entirely rather than skipping this
        // rectangle: a partially expanded draw is a picture that is wrong in a
        // way nothing counts.
        for (std::size_t b = 0; b < bindings.size(); ++b) {
            for (uint32_t v = 0; v < 3; ++v) {
                const std::size_t at =
                    std::size_t(source[v]) * bindings[b].stride;
                if (at + bindings[b].stride > bindings[b].size) return {};
            }
        }

        const rectangle_binding& pos_binding = bindings[position.binding];
        const auto position_xy = [&](uint32_t v, float& x, float& y) {
            const uint8_t* record =
                pos_binding.data + std::size_t(source[v]) * pos_binding.stride;
            x = read_float(record, position.offset_bytes) * edge_scale[0];
            y = read_float(record, position.offset_bytes + 4) * edge_scale[1];
        };
        float x[3], y[3];
        for (uint32_t v = 0; v < 3; ++v) position_xy(v, x[v], y[v]);
        const auto edge = [&](uint32_t from, uint32_t to) {
            const float dx = x[to] - x[from];
            const float dy = y[to] - y[from];
            return dx * dx + dy * dy;
        };
        // The same rule as build_rectangle_geometry_shader, in the same order:
        // if edge 1-2 is the longest the strip starts at vertex 0, otherwise if
        // 2-0 beats 0-1 it starts at 1, and if not, at 2. The strict `>` and
        // the order of the two tests are copied deliberately - a tie broken the
        // other way builds the parallelogram on a different corner.
        const float e12 = edge(1, 2);
        const float e20 = edge(2, 0);
        const float e01 = edge(0, 1);
        const uint32_t rotation = (e12 > e20 && e12 > e01) ? 0
                                  : (e20 > e01)            ? 1
                                                           : 2;
        const uint32_t order[3] = {(rotation + 0) % 3, (rotation + 1) % 3,
                                   (rotation + 2) % 3};

        for (std::size_t b = 0; b < bindings.size(); ++b) {
            const rectangle_binding& binding = bindings[b];
            uint8_t* destination =
                out.buffers[b].data() +
                std::size_t(r) * 4 * binding.stride;
            for (uint32_t v = 0; v < 3; ++v) {
                std::memcpy(destination + std::size_t(v) * binding.stride,
                            binding.data +
                                std::size_t(source[order[v]]) * binding.stride,
                            binding.stride);
            }
            // The fourth starts as a copy of the third, so anything the shader
            // does not read carries something valid rather than zeroes.
            std::memcpy(destination + std::size_t(3) * binding.stride,
                        destination + std::size_t(2) * binding.stride,
                        binding.stride);
        }
        // The fourth vertex, per named float: (second - first) + third, exactly
        // the geometry stage's own expression, applied to every attribute so
        // the interpolators arrive at the rasteriser the same way the position
        // does.
        for (const rectangle_field& field : fields) {
            const rectangle_binding& binding = bindings[field.binding];
            uint8_t* base = out.buffers[field.binding].data() +
                            std::size_t(r) * 4 * binding.stride;
            uint8_t* fourth = base + std::size_t(3) * binding.stride;
            if (field.offset_bytes + field.components * 4u > binding.stride)
                return {};
            for (uint32_t c = 0; c < field.components; ++c) {
                const uint32_t at = field.offset_bytes + c * 4;
                const float v0 = read_float(base + 0 * binding.stride, at);
                const float v1 = read_float(base + 1 * binding.stride, at);
                const float v2 = read_float(base + 2 * binding.stride, at);
                write_float(fourth, at, (v1 - v0) + v2);
            }
        }

        const uint32_t base = r * 4;
        // A four-vertex triangle strip is (v0,v1,v2) then (v2,v1,v3) - the
        // second triangle's first two vertices swapped, which is what keeps the
        // winding consistent. Spelled out as a list so the draw needs no strip
        // topology and no primitive restart.
        out.indices.push_back(base + 0);
        out.indices.push_back(base + 1);
        out.indices.push_back(base + 2);
        out.indices.push_back(base + 2);
        out.indices.push_back(base + 1);
        out.indices.push_back(base + 3);
    }

    out.vertex_count = rectangles * 4;
    out.ok = true;
    return out;
}

} // namespace whitty_xenon::gpu
