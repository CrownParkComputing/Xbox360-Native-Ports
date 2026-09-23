// Unit tests for vertex format decoding.
#include "whitty_xenon/gpu/vertex_format.h"

#include <cassert>
#include <cstdio>

using namespace whitty_xenon::gpu;

namespace {

void test_component_counts_and_sizes() {
    auto i = decode_vertex_format(vertex_format::k_8_8_8_8);
    assert(i.components == 4 && i.byte_size == 4 && !i.is_float);

    i = decode_vertex_format(vertex_format::k_32_32_32_float);
    assert(i.components == 3 && i.byte_size == 12 && i.is_float);

    i = decode_vertex_format(vertex_format::k_16_16_float);
    assert(i.components == 2 && i.byte_size == 4 && i.is_float);

    i = decode_vertex_format(vertex_format::k_32_32_32_32);
    assert(i.components == 4 && i.byte_size == 16 && !i.is_float);
}

void test_packed_floats() {
    // The 10/11-bit packed formats are three-component floats in four bytes.
    auto i = decode_vertex_format(vertex_format::k_10_11_11);
    assert(i.components == 3 && i.byte_size == 4 && i.is_float);
    i = decode_vertex_format(vertex_format::k_11_11_10);
    assert(i.components == 3 && i.byte_size == 4 && i.is_float);
}

void test_unknown_format_is_zeroed() {
    const auto i = decode_vertex_format(static_cast<vertex_format>(200));
    assert(i.components == 0 && i.byte_size == 0);
}

} // namespace

int main() {
    test_component_counts_and_sizes();
    test_packed_floats();
    test_unknown_format_is_zeroed();
    std::printf("vertex_format_test: all checks passed\n");
    return 0;
}
