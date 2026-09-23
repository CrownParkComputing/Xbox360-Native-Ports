// extract_global_shaders - pull real Xenos microcode out of a UE3
// GlobalShaderCache-Xbox360.bin and validate it against our own decoder.
//
// This is a host analysis tool, not part of the runtime. The cooked cache stores
// each global shader as a compiled Xbox 360 D3D shader (vs_3_0/ps_3_0, XDK
// compiler) whose body is native Xenos microcode. Rather than reverse the XDK
// container byte-for-byte, we use our own parse_shader as an oracle: at every
// dword-aligned offset we byte-swap a window big-endian -> host and try to decode
// it as a shader. A real microcode entry decodes into a clean control-flow
// program that terminates in an exec-end with in-range instruction blocks; noise
// does not. The offsets that parse cleanly are the real shaders.
#include "whitty_xenon/gpu/shader_program.h"
#include "whitty_xenon/gpu/shader_translator.h"

#include <cstdint>
#include <cstdio>
#include <cstring>
#include <string>
#include <vector>

using namespace whitty_xenon::gpu;

namespace {

std::vector<uint8_t> read_file(const char* path) {
    std::vector<uint8_t> data;
    std::FILE* f = std::fopen(path, "rb");
    if (!f) return data;
    std::fseek(f, 0, SEEK_END);
    long n = std::ftell(f);
    std::fseek(f, 0, SEEK_SET);
    if (n > 0) {
        data.resize(static_cast<size_t>(n));
        if (std::fread(data.data(), 1, data.size(), f) != data.size()) data.clear();
    }
    std::fclose(f);
    return data;
}

uint32_t swap32(uint32_t v) {
    return (v >> 24) | ((v >> 8) & 0x0000FF00u) | ((v << 8) & 0x00FF0000u) | (v << 24);
}

// A shader is credible if it decodes, runs at least one exec block, terminates
// in an end opcode, stays within sane instruction counts, and declares an export
// allocation. Every real vertex/pixel shader has an `alloc` (position/export);
// ASCII text and noise almost never decode into a clean alloc + exec_end + body.
bool credible(const shader_program& p) {
    if (p.exec_blocks.empty()) return false;
    bool ended = false;
    size_t total = 0;
    for (const auto& b : p.exec_blocks) {
        if (b.cf.exec_count > 256) return false;
        total += b.instructions.size();
        if (ends_shader(b.cf.opcode)) ended = true;
    }
    bool has_alloc = false;
    for (const auto& cf : p.control_flow.instructions)
        if (cf.opcode == cf_opcode::alloc) has_alloc = true;
    return ended && has_alloc && total >= 3;
}

} // namespace

int main(int argc, char** argv) {
    const char* path = argc > 1 ? argv[1]
                                : "GlobalShaderCache-Xbox360.bin";
    std::vector<uint8_t> file = read_file(path);
    if (file.empty()) {
        std::fprintf(stderr, "could not read %s\n", path);
        return 1;
    }
    const size_t dwords = file.size() / 4;
    std::vector<uint32_t> host(dwords);
    for (size_t i = 0; i < dwords; ++i) {
        uint32_t be;
        std::memcpy(&be, file.data() + i * 4, 4);
        host[i] = swap32(be); // BE (Xbox 360) -> host
    }

    int found = 0;
    // Skip the name + hash tables; the compiled microcode blocks begin after.
    size_t i = argc > 2 ? static_cast<size_t>(std::strtoul(argv[2], nullptr, 0)) / 4
                        : 0x1580 / 4;
    // Cap the window so parse_shader validates exec addresses against a bound.
    const size_t kWindow = 4096;
    while (i < dwords) {
        shader_program prog;
        std::string err;
        size_t avail = dwords - i;
        size_t window = avail < kWindow ? avail : kWindow;
        if (parse_shader(&host[i], window, prog, err) && credible(prog)) {
            size_t body = 0;
            for (const auto& b : prog.exec_blocks) body += b.instructions.size();
            std::printf("shader @ dword %-7zu (byte 0x%05zx): %2zu CF, %2zu exec blocks, %3zu instrs\n",
                        i, i * 4, prog.control_flow.instructions.size(),
                        prog.exec_blocks.size(), body);
            if (found == 0) {
                std::printf("  first exec-block opcodes:");
                for (const auto& b : prog.exec_blocks)
                    std::printf(" %d", static_cast<int>(b.cf.opcode));
                std::printf("\n  microcode start dword = %zu (for a hermetic test blob)\n", i);
                // Translate this real shader to SPIR-V and write it out for
                // spirv-val - the independent proof the whole path handles real
                // game microcode, not just synthetic tests.
                shader_translator tr;
                auto spv = tr.translate(prog, 32, shader_type::pixel);
                std::FILE* o = std::fopen("real_shader.spv", "wb");
                if (o) {
                    std::fwrite(spv.data(), 4, spv.size(), o);
                    std::fclose(o);
                    std::printf("  translated -> real_shader.spv (%zu words)\n", spv.size());
                }
                // Also emit the raw microcode dwords so a hermetic unit test can
                // embed this exact real shader.
                std::FILE* r = std::fopen("real_shader_ucode.txt", "wb");
                if (r) {
                    size_t span = prog.control_flow.instruction_block_start * 3;
                    for (const auto& b : prog.exec_blocks) {
                        size_t end = (b.cf.exec_address + b.cf.exec_count) * 3;
                        if (end > span) span = end;
                    }
                    for (size_t k = 0; k < span && i + k < dwords; ++k)
                        std::fprintf(r, "0x%08x,%s", host[i + k],
                                     (k % 6 == 5) ? "\n" : " ");
                    std::fclose(r);
                    std::printf("  raw microcode span = %zu dwords -> real_shader_ucode.txt\n", span);
                }
            }
            ++found;
            // Skip past this shader's decoded body to avoid re-reporting overlaps.
            i += prog.control_flow.instruction_block_start * 3;
            if (prog.control_flow.instruction_block_start == 0) i += 1;
            continue;
        }
        ++i;
    }
    std::printf("total real shaders decoded: %d\n", found);
    return found > 0 ? 0 : 2;
}
