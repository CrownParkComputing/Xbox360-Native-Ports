// Unit tests for Xenos primitive conversion.
//
// This is index arithmetic, and index arithmetic fails quietly: a wrong winding
// order or an off-by-one in a quad split produces a picture that is wrong in a
// way nothing downstream will assert on. So the expansions are checked against
// their indices written out by hand, for both auto-generated and supplied
// index lists, and the rectangle list's need for a geometry stage is pinned as
// a contract rather than left to be rediscovered - it is the one primitive the
// indices alone cannot finish, and a caller that ignores the request draws a
// diagonal half of every rectangle.
#include "whitty_xenon/gpu/primitive_conversion.h"

#include <cassert>
#include <cstdio>
#include <vector>

using namespace whitty_xenon::gpu;

namespace {

// Topologies the host draws directly need no new indices at all.
void test_native_topologies_pass_through() {
    const struct {
        primitive_type prim;
        host_topology topology;
    } cases[] = {
        {primitive_type::triangle_list, host_topology::triangle_list},
        {primitive_type::triangle_strip, host_topology::triangle_strip},
        {primitive_type::triangle_fan, host_topology::triangle_fan},
        {primitive_type::line_list, host_topology::line_list},
        {primitive_type::line_strip, host_topology::line_strip},
        {primitive_type::point_list, host_topology::point_list},
    };
    for (const auto& c : cases) {
        const converted_primitives out = convert_primitives(c.prim, {}, 6);
        assert(out.topology == c.topology);
        assert(out.indices.empty());
        assert(out.exact);
    }
}

// Two quads, auto-generated indices: each becomes two triangles across the
// 0-2 diagonal, and no vertex is invented.
void test_quad_list_expands_to_triangle_pairs() {
    const converted_primitives out =
        convert_primitives(primitive_type::quad_list, {}, 8);
    assert(out.topology == host_topology::triangle_list);
    assert(out.exact);
    const std::vector<uint32_t> expected = {0, 1, 2, 0, 2, 3,
                                            4, 5, 6, 4, 6, 7};
    assert(out.indices == expected);
}

// The same with a supplied index list: the expansion must go through the
// indices, not through their positions.
void test_quad_list_follows_supplied_indices() {
    const std::vector<uint32_t> indices = {10, 11, 12, 13};
    const converted_primitives out =
        convert_primitives(primitive_type::quad_list, indices, 4);
    const std::vector<uint32_t> expected = {10, 11, 12, 10, 12, 13};
    assert(out.indices == expected);
}

// A trailing partial quad is dropped rather than read past.
void test_quad_list_ignores_an_incomplete_quad() {
    const converted_primitives out =
        convert_primitives(primitive_type::quad_list, {}, 7);
    const std::vector<uint32_t> expected = {0, 1, 2, 0, 2, 3};
    assert(out.indices == expected);
}

// A quad strip shares its previous pair, and its quad is wound v0 v1 v3 v2.
void test_quad_strip_shares_the_previous_pair() {
    const converted_primitives out =
        convert_primitives(primitive_type::quad_strip, {}, 6);
    assert(out.topology == host_topology::triangle_list);
    const std::vector<uint32_t> expected = {0, 1, 3, 0, 3, 2,
                                            2, 3, 5, 2, 5, 4};
    assert(out.indices == expected);
}

// A rectangle list is three vertices with a fourth that only exists after
// transform, so the conversion emits the triangle that IS in the vertex buffer
// and asks for the geometry stage that completes it. The request is the
// contract: drawn without that stage, each rectangle is a diagonal half, and
// only the caller knows whether it can supply one.
void test_rectangle_list_asks_for_the_geometry_stage() {
    const converted_primitives out =
        convert_primitives(primitive_type::rectangle_list, {}, 6);
    assert(out.topology == host_topology::triangle_list);
    assert(out.geometry == geometry_stage::complete_rectangle);
    // Exact, because the indices plus that stage are what the console drew.
    assert(out.exact);
    const std::vector<uint32_t> expected = {0, 1, 2, 3, 4, 5};
    assert(out.indices == expected);
}

// No other primitive asks for a geometry stage: everything else is either a
// host topology or pure index arithmetic.
void test_only_a_rectangle_list_needs_a_geometry_stage() {
    const primitive_type others[] = {
        primitive_type::triangle_list,  primitive_type::triangle_strip,
        primitive_type::triangle_fan,   primitive_type::line_list,
        primitive_type::line_strip,     primitive_type::point_list,
        primitive_type::line_loop,      primitive_type::quad_list,
        primitive_type::quad_strip,     primitive_type::polygon,
    };
    for (primitive_type prim : others) {
        const converted_primitives out = convert_primitives(prim, {}, 8);
        assert(out.geometry == geometry_stage::none);
    }
}

// A line loop closes back onto its first vertex.
void test_line_loop_closes() {
    const converted_primitives out =
        convert_primitives(primitive_type::line_loop, {}, 4);
    assert(out.topology == host_topology::line_strip);
    const std::vector<uint32_t> expected = {0, 1, 2, 3, 0};
    assert(out.indices == expected);
    assert(out.exact);
}

void test_unknown_primitive_is_unsupported() {
    const converted_primitives out =
        convert_primitives(primitive_type::none, {}, 3);
    assert(out.topology == host_topology::unsupported);
}

} // namespace

int main() {
    test_native_topologies_pass_through();
    test_quad_list_expands_to_triangle_pairs();
    test_quad_list_follows_supplied_indices();
    test_quad_list_ignores_an_incomplete_quad();
    test_quad_strip_shares_the_previous_pair();
    test_rectangle_list_asks_for_the_geometry_stage();
    test_only_a_rectangle_list_needs_a_geometry_stage();
    test_line_loop_closes();
    test_unknown_primitive_is_unsupported();
    std::printf("primitive_conversion_test: all checks passed\n");
    return 0;
}
