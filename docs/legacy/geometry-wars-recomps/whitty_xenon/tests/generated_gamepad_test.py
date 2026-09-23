"""Execute GW1/GW2's generated controller accessors without SDL or Vulkan.

Usage: python3 tests/generated_gamepad_test.py <geometrywars|geometrywars2>
       <ppc-directory> <decoded-image.bin>
The generated functions and their shared tails are copied verbatim into a
temporary translation unit, then compiled with their original context header.
"""
from pathlib import Path
import re
import subprocess
import sys
import tempfile


def main():
    title, ppc_path, image_path = sys.argv[1:]
    entry = {'geometrywars': '820CC928', 'geometrywars2': '82037EA0'}[title]
    ppc = Path(ppc_path).resolve()
    functions = {}
    marker = re.compile(r'^__attribute__\(\(alias\("__imp__sub_([0-9A-F]+)"\)\)\)',
                        re.MULTILINE)
    for path in sorted(ppc.glob('ppc_recomp.*.cpp')):
        source = path.read_text()
        starts = list(marker.finditer(source))
        for i, match in enumerate(starts):
            end = starts[i + 1].start() if i + 1 < len(starts) else len(source)
            functions[match.group(1)] = source[match.start():end]
    selected = {}
    pending = [entry]
    while pending:
        address = pending.pop()
        if address in selected:
            continue
        selected[address] = functions[address]
        pending.extend(re.findall(r'\bsub_([0-9A-F]+)\(ctx, base\)',
                                  selected[address]))
    source = '#include "ppc_recomp_shared.h"\n'
    source += '\n'.join(selected.values())
    source += r'''
#include <sys/mman.h>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <initializer_list>

int main(int argc, char** argv) {
    auto* base = static_cast<uint8_t*>(mmap(nullptr, 1ull << 32,
        PROT_READ | PROT_WRITE, MAP_PRIVATE | MAP_ANONYMOUS | MAP_NORESERVE, -1, 0));
    if (base == MAP_FAILED) return 2;
    FILE* image = fopen(argv[1], "rb");
    if (!image) return 2;
    fseek(image, 0, SEEK_END);
    const size_t size = ftell(image);
    rewind(image);
    if (fread(base + PPC_IMAGE_BASE, 1, size, image) != size) return 2;
    fclose(image);
    constexpr uint32_t object = 0x10000;
    int failures = 0, checks = 0;
    auto check = [&](int index, uint16_t buttons, int axis, int16_t value,
                     int trigger, double expected) {
        memset(base + object, 0, 24);
        PPC_STORE_U16(object + 12, buttons);
        if (axis >= 0) PPC_STORE_U16(object + 16 + axis * 2, uint16_t(value));
        if (trigger >= 0) PPC_STORE_U8(object + 14 + trigger, 255);
        PPCContext ctx{};
        ctx.r1.u32 = 0x20000;
        ctx.r3.u32 = object;
        ctx.r4.u32 = index;
        // Detect an accessor returning a previous accessor's result.
        ctx.f1.f64 = 1234.0;
        ACCESSOR(ctx, base);
        ++checks;
        if (!std::isfinite(ctx.f1.f64) || fabs(ctx.f1.f64 - expected) > 0.0001) {
            printf("FAIL input %d buttons=%04x axis=%d value=%d: got %.6f expected %.6f\n",
                   index, buttons, axis, value, ctx.f1.f64, expected);
            ++failures;
        }
    };
    // Each stick direction must affect only its own axis. The game accessors
    // convert Xbox +Y-up to the game's +Y-down and subtract half a unit.
    for (int axis = 0; axis < 4; ++axis) {
        for (int value : {-16384, 0, 16384}) {
            for (int query = 0; query < 4; ++query) {
                double expected = ((axis == query ? value : 0) - 0.5) / 32767.5;
                if (query & 1) expected = -expected;
                check(query, 0, axis, value, -1, expected);
            }
        }
    }
    for (int query = 4; query <= 5; ++query) {
        check(query, 0, -1, 0, -1, 0);
        check(query, 1, -1, 0, -1, query == 5 ? -1 : 0);
        check(query, 2, -1, 0, -1, query == 5 ? 1 : 0);
        check(query, 4, -1, 0, -1, query == 4 ? -1 : 0);
        check(query, 8, -1, 0, -1, query == 4 ? 1 : 0);
    }
    constexpr uint16_t masks[] = {0x40, 0x80, 0, 0, 0x100, 0x200,
                                  0x1000, 0x2000, 0x4000, 0x8000, 0x10, 0x20};
    for (int query = 6; query < 18; ++query) {
        check(query, 0, -1, 0, -1, 0);
        if (query == 8 || query == 9) {
            check(query, 0, -1, 0, query - 8, 1);
            check(query, 0, -1, 0, 9 - query, 0);
        } else {
            check(query, masks[query - 6], -1, 0, -1, 1);
            check(query, uint16_t(0xFFFF & ~masks[query - 6]), -1, 0, -1, 0);
        }
    }
    printf("%d checks, %d failures (no SDL or Vulkan)\n", checks, failures);
    munmap(base, 1ull << 32);
    return failures ? 1 : 0;
}
'''.replace('ACCESSOR', 'sub_' + entry)
    with tempfile.TemporaryDirectory(prefix='whitty-gamepad-test-') as tmp:
        cpp, binary = Path(tmp) / 'test.cpp', Path(tmp) / 'test'
        cpp.write_text(source)
        subprocess.run(['clang++', '-std=c++20', '-O1', '-mavx', '-msse4.1',
                        '-include', str(ppc / 'ppc_simde_shim.h'), '-I', str(ppc),
                        str(cpp), '-o', str(binary)], check=True)
        return subprocess.run([str(binary), str(Path(image_path).resolve())]).returncode


if __name__ == '__main__':
    sys.exit(main())
