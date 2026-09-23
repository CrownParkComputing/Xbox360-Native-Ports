// Unit tests for the SPIR-V builder's encoding and dedup.
//
// The output is verified two ways. Here, the mechanical invariants are checked
// at the word level - an instruction word packs its length and opcode, a string
// is packed and NUL-padded, the header carries the right magic and id bound, and
// the type/constant helpers hand back the same id for the same type rather than
// declaring it twice (which would make the module invalid). Separately (outside
// ctest) a full module the builder produces is run through the Khronos spirv-val.
#include "whitty_xenon/gpu/spirv_builder.h"

#include <cassert>
#include <cstdio>
#include <vector>

using namespace whitty_xenon::gpu;

namespace {

void test_ids_start_at_one() {
    spirv_builder b;
    assert(b.bound() == 1);
    assert(b.allocate_id() == 1);
    assert(b.allocate_id() == 2);
    assert(b.bound() == 3);
}

void test_instruction_encoding() {
    spirv_builder b;
    b.emit(spirv_section::capabilities, spv::OpCapability, {spv::CapabilityShader});
    const auto& w = b.section_words(spirv_section::capabilities);
    assert(w.size() == 2);
    assert(w[0] == ((2u << 16) | spv::OpCapability)); // length 2, opcode 17
    assert(w[1] == spv::CapabilityShader);
}

void test_no_operand_instruction() {
    spirv_builder b;
    b.emit(spirv_section::functions, spv::OpReturn, {});
    const auto& w = b.section_words(spirv_section::functions);
    assert(w.size() == 1);
    assert(w[0] == ((1u << 16) | spv::OpReturn));
}

void test_string_packing() {
    // Exact multiple of four gets a trailing NUL word.
    auto w = spirv_builder::string_words("main");
    assert(w.size() == 2 && w[0] == 0x6E69616D && w[1] == 0);
    // Partial word carries the terminator in the high byte.
    w = spirv_builder::string_words("abc");
    assert(w.size() == 1 && w[0] == 0x00636261);
    // Empty string is just a terminator.
    w = spirv_builder::string_words("");
    assert(w.size() == 1 && w[0] == 0);
}

void test_sections_assemble_in_order() {
    spirv_builder b;
    // Emit into two sections out of order; assemble must order them.
    b.emit(spirv_section::functions, spv::OpReturn, {});
    b.emit(spirv_section::capabilities, spv::OpCapability, {spv::CapabilityShader});
    const auto module = b.assemble();
    assert(module[0] == spv::kMagic);
    assert(module[1] == spv::kVersion_1_3);
    assert(module[4] == 0); // schema
    // Capabilities come before functions regardless of emission order.
    assert(module[5] == ((2u << 16) | spv::OpCapability));
    assert(module[7] == ((1u << 16) | spv::OpReturn));
}

void test_type_dedup() {
    spirv_builder b;
    const uint32_t f1 = b.type_float();
    const uint32_t f2 = b.type_float(); // same request -> same id
    assert(f1 == f2);
    // The declaration appears exactly once in the types section.
    const auto& types = b.section_words(spirv_section::types);
    uint32_t float_decls = 0;
    for (std::size_t i = 0; i < types.size();) {
        const uint32_t opcode = types[i] & 0xFFFF;
        const uint32_t len = types[i] >> 16;
        if (opcode == spv::OpTypeFloat) ++float_decls;
        i += len;
    }
    assert(float_decls == 1);

    // A vector of that float is a distinct type, but stable across requests.
    const uint32_t v1 = b.type_vector(f1, 4);
    const uint32_t v2 = b.type_vector(f1, 4);
    assert(v1 == v2 && v1 != f1);
    // A different width is a different type.
    assert(b.type_vector(f1, 3) != v1);
}

void test_constant_dedup_and_composite() {
    spirv_builder b;
    const uint32_t c1 = b.constant_float(1.0f);
    const uint32_t c2 = b.constant_float(1.0f);
    assert(c1 == c2);
    assert(b.constant_float(2.0f) != c1); // different value, different constant

    const uint32_t f = b.type_float();
    const uint32_t vec4 = b.type_vector(f, 4);
    const uint32_t zero = b.constant_float(0.0f);
    const uint32_t one = b.constant_float(1.0f);
    const uint32_t color = b.constant_composite(vec4, {zero, zero, zero, one});
    // Same components -> same composite.
    assert(b.constant_composite(vec4, {zero, zero, zero, one}) == color);
    assert(one == c1); // the 1.0 from earlier is reused
}

} // namespace

int main() {
    test_ids_start_at_one();
    test_instruction_encoding();
    test_no_operand_instruction();
    test_string_packing();
    test_sections_assemble_in_order();
    test_type_dedup();
    test_constant_dedup_and_composite();
    std::printf("spirv_builder_test: all checks passed\n");
    return 0;
}
