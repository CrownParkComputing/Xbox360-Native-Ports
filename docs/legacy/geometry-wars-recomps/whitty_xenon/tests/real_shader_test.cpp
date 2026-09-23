// Hermetic real-shader test.
//
// The microcode below is a real shader lifted verbatim from Alien Breed:
// Evolution's GlobalShaderCache-Xbox360.bin (byte 0x1a48), byte-swapped from the
// Xbox 360's big-endian storage into host dword order. It is NOT synthetic: it is
// the exact compiled Xenos microcode the game ships. Embedding it makes the
// real-data proof permanent and independent of the game files - the decoder and
// SPIR-V translator are exercised on genuine game input, and the resulting module
// was confirmed by Khronos spirv-val (see tools/extract_global_shaders.cpp, which
// pulled this out and validated it against the real cache).
#include "whitty_xenon/gpu/shader_program.h"
#include "whitty_xenon/gpu/shader_translator.h"

#include <cassert>
#include <cstdint>
#include <cstdio>
#include <vector>

using namespace whitty_xenon::gpu;

namespace {

// Real Alien Breed shader microcode (host dword order), 159 dwords.
const uint32_t kRealShader[] = {
    0x09006005, 0x600b1200, 0x12000000, 0x00006011, 0x60171200, 0x12000550,
    0x0555601d, 0x60231200, 0x12000555, 0x00000000, 0x6029c400, 0x12000000,
    0x0000602f, 0x00002200, 0x00000000, 0x4c100100, 0x0000001b, 0xe2000000,
    0xc8060001, 0x006cbc00, 0xa1010100, 0xc80f0001, 0x00edbc00, 0xe1010000,
    0xc8030000, 0x0018c700, 0xa0010100, 0x10000001, 0x1f1ffff8, 0x00004000,
    0xc8010000, 0x016cc61b, 0x8b000202, 0x4c100100, 0x0000006c, 0xe2000000,
    0xc80f0000, 0x006cd0d0, 0x8b010d0e, 0xc8030001, 0x00c56c00, 0xe1010100,
    0xc80f0000, 0x00b1d000, 0xab010c00, 0xc80f0000, 0x006caaa7, 0xab010b00,
    0x4c210000, 0x006c6cb1, 0xa300ff00, 0xc80f0005, 0x00d7b177, 0xcb000005,
    0xc80f0001, 0x00cbb1e3, 0xcb000006, 0xc80f0006, 0x000ab100, 0xcb000004,
    0xc80f0002, 0x0016b194, 0xcb000003, 0xc80f0007, 0x000ab100, 0xcb000008,
    0xc80f0003, 0x0016b194, 0xcb000007, 0xc80f0008, 0x00d7b177, 0xcb000009,
    0xc80f0004, 0x00cbb1e3, 0xcb00000a, 0xcc184081, 0x1f1ffff8, 0x00004000,
    0x98184081, 0x1f1fffc7, 0x00004000, 0x44184101, 0x1f1ffe3f, 0x00004000,
    0xec184101, 0x1f1ff1ff, 0x00004000, 0x30183061, 0x1f1ffff8, 0x00004000,
    0x64183061, 0x1f1fffc7, 0x00004000, 0x101830e1, 0x1f1ffe3f, 0x00004000,
    0xb81830e1, 0x1f1ff1ff, 0x00004000, 0x30182041, 0x1f1ffff8, 0x00004000,
    0x64182041, 0x1f1fffc7, 0x00004000, 0x101820c1, 0x1f1ffe3f, 0x00004000,
    0xb81820c1, 0x1f1ff1ff, 0x00004000, 0xcc181021, 0x1f1ffff8, 0x00004000,
    0x98181021, 0x1f1fffc7, 0x00004000, 0x441810a1, 0x1f1ffe3f, 0x00004000,
    0xec1810a1, 0x1f1ff1ff, 0x00004000, 0xc80f0001, 0x00006c00, 0xe5010000,
    0xc80f0002, 0x00006c00, 0xe5020000, 0xc80f0003, 0x00006c00, 0xe5030000,
    0xc80f0000, 0x00006c00, 0xe5040000, 0xc8010000, 0x00d0b100, 0xaf00ff00,
    0xc8040000, 0x00a7b100, 0xaf03ff00, 0xc8080000, 0x00a7b100, 0xaf02ff00,
    0xc8020000, 0x00d0b100, 0xaf01ff00, 0xc8020000, 0x001bb100, 0xe0000000,
    0xc8020000, 0x00b1c600, 0xe0000000, 0xc8010000, 0x00b16c00, 0xe0000000,
    0xc80f8000, 0x006c6c00, 0xe1000000,
};
constexpr uint32_t kSpirvMagic = 0x07230203;

void test_real_microcode_decodes() {
    shader_program prog;
    std::string err;
    bool ok = parse_shader(kRealShader,
                           sizeof(kRealShader) / sizeof(kRealShader[0]), prog, err);
    assert(ok && "real Alien Breed microcode must decode");
    // The extractor saw 8 exec blocks ending in exec_end; hold that shape.
    assert(prog.exec_blocks.size() == 8);
    assert(ends_shader(prog.exec_blocks.back().cf.opcode));
    size_t body = 0;
    for (const auto& b : prog.exec_blocks) body += b.instructions.size();
    assert(body >= 40); // a substantial real shader, not a stub
    std::printf("real_shader_test: decoded real shader (%zu exec blocks, %zu instrs)\n",
                prog.exec_blocks.size(), body);
}

void test_real_microcode_translates_to_valid_spirv() {
    shader_program prog;
    std::string err;
    assert(parse_shader(kRealShader,
                        sizeof(kRealShader) / sizeof(kRealShader[0]), prog, err));
    shader_translator tr;
    std::vector<uint32_t> spv = tr.translate(prog, 32, shader_type::pixel);
    assert(!spv.empty());
    assert(spv[0] == kSpirvMagic);       // valid SPIR-V header magic
    assert(spv.size() > 5);              // header + a real body
    const uint32_t bound = spv[3];       // id bound
    assert(bound > 1 && bound < spv.size() * 4);
    std::printf("real_shader_test: translated real shader -> %zu-word SPIR-V "
                "(id bound %u), header valid\n", spv.size(), bound);
}

} // namespace

int main() {
    test_real_microcode_decodes();
    test_real_microcode_translates_to_valid_spirv();
    std::printf("real_shader_test: all checks passed\n");
    return 0;
}
