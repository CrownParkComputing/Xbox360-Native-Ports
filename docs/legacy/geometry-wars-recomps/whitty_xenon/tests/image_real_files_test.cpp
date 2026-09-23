// Integration test: decrypt and decompress real retail XEX images.
//
// This is the end-to-end check on the whole load path - container parsing, the
// AES-128 implementation, the retail key, session-key unwrapping and the
// compression walk all have to be right simultaneously for a real title to
// produce a valid PE header. A wrong key or a mis-walked run table yields
// noise, so 'MZ' at offset 0 is a strong signal rather than a weak one.
//
// Titles whose files are absent are skipped, not failed.
#include "whitty_xenon/image.h"
#include "whitty_xenon/imports.h"
#include "whitty_xenon/kernel.h"
#include "whitty_xenon/pe.h"
#include "whitty_xenon/ppc_helpers.h"
#include "whitty_xenon/ppc_runtime.h"
#include "whitty_xenon/memory.h"
#include "whitty_xenon/xex.h"

#include <cassert>
#include <cstdio>
#include <cstdlib>
#include <fstream>
#include <iterator>
#include <string>
#include <vector>

using namespace whitty_xenon;

namespace {

bool read_file(const std::string& path, std::vector<uint8_t>& data) {
    std::ifstream input(path, std::ios::binary);
    if (!input) return false;
    data.assign(std::istreambuf_iterator<char>(input),
                std::istreambuf_iterator<char>());
    return !data.empty();
}

// Alien Breed: Evolution stores its image with "basic" compression, so it
// exercises the run walk and the AES chain together.
bool test_alien_breed(int& checked) {
    const char* path = std::getenv("WHITTY_XEX_ALIENBREED");
    std::vector<uint8_t> file;
    if (!path || !*path || !read_file(path, file)) {
        std::printf("  skip Alien Breed (WHITTY_XEX_ALIENBREED not set)\n");
        return true;
    }

    xex_info info;
    std::string error;
    if (!parse_xex(file.data(), file.size(), info, error)) {
        std::printf("  FAIL Alien Breed parse: %s\n", error.c_str());
        return false;
    }
    assert(info.title_id == 0x58410964u);
    assert(info.compression == xex_compression::basic);
    assert(info.encryption == xex_encryption::normal);
    assert(!info.basic_blocks.empty());

    std::vector<uint8_t> image;
    xex_key_kind key = xex_key_kind::devkit;
    if (!decode_xex_image(file.data(), file.size(), info, image, key, error)) {
        std::printf("  FAIL Alien Breed decode: %s\n", error.c_str());
        return false;
    }

    // A retail title must decrypt under the retail key and land on a PE image.
    assert(key == xex_key_kind::retail);
    assert(image.size() > 1);
    assert(image[0] == 'M' && image[1] == 'Z');
    // The DOS header's next fields are fixed for a PE produced by the Xbox 360
    // toolchain; checking them rules out a chance 'MZ' in random bytes.
    assert(image[2] == 0x90 && image[3] == 0x00);
    // Decompression expands the container, and the result covers the mapped size.
    assert(image.size() > file.size());
    assert(image.size() >= info.image_size);

    // The entry point must land inside the mapped image.
    assert(info.entry_point >= info.image_base);
    assert(info.entry_point - info.image_base < image.size());

    // Loading into guest memory puts those bytes where the guest expects them.
    guest_memory memory;
    if (!memory.initialize(error)) {
        std::printf("  FAIL Alien Breed guest memory: %s\n", error.c_str());
        return false;
    }
    xex_image_load_result result;
    if (!load_xex_image(file.data(), file.size(), info, memory, result, error)) {
        std::printf("  FAIL Alien Breed load: %s\n", error.c_str());
        return false;
    }
    assert(result.has_pe_header);
    assert(result.image_base == 0x82000000u);
    assert(memory.read_u8(result.image_base) == 'M');
    assert(memory.read_u8(result.image_base + 1) == 'Z');
    // The instruction at the entry point must be readable.
    assert(memory.committed(info.entry_point, 4));

    // The import table names the kernel entry points this title needs, which
    // is the specification for the kernel layer. Both libraries must resolve:
    // an empty name means the padded string table was mis-walked.
    std::vector<xex_import_library> libraries;
    if (!parse_xex_imports(file.data(), file.size(), info, libraries, error)) {
        std::printf("  FAIL Alien Breed imports: %s\n", error.c_str());
        return false;
    }
    assert(libraries.size() == 2);
    assert(libraries[0].name == "xboxkrnl.exe");
    assert(libraries[1].name == "xam.xex");
    decode_imports(memory, libraries);
    // Every function import must decode to a plausible ordinal.
    for (const xex_import_library& library : libraries) {
        assert(!library.imports.empty());
        for (const xex_import& entry : library.imports) {
            assert(entry.record_type == 1);
            assert(entry.ordinal != 0);
        }
    }
    const std::size_t functions = total_function_imports(libraries);
    assert(functions > 100);

    std::printf("  ok   Alien Breed: Evolution   %zu bytes decoded, retail key,"
                " PE header at %08X\n",
                image.size(), result.image_base);
    std::printf("       imports: %s=%zu %s=%zu (%zu kernel entry points)\n",
                libraries[0].name.c_str(), libraries[0].imports.size(),
                libraries[1].name.c_str(), libraries[1].imports.size(),
                functions);

    // Every ordinal this title imports must resolve to a name. An uncatalogued
    // one is not fatal, but it means the bring-up worklist would carry a bare
    // number instead of something actionable, so it is worth knowing about.
    kernel_registry registry;
    const kernel_requirements needs = registry.resolve(libraries);
    assert(needs.total() == functions);
    assert(needs.missing_count() == functions); // nothing implemented yet
    std::size_t unnamed = 0;
    for (const kernel_requirement& entry : needs.requirements)
        if (entry.name.empty()) ++unnamed;
    assert(unnamed == 0);
    // The worklist is named and ordered.
    const std::vector<std::string> worklist = needs.missing_names();
    assert(worklist.size() == functions);
    assert(worklist.front().find("xboxkrnl.exe!") == 0);
    std::printf("       kernel: %s, all ordinals named\n",
                needs.summary().c_str());

    // The decoded image is a PE, and its section table says where the code
    // really is. The entry point is the cross-check: the container states it
    // outright, and the PE optional header states it as an RVA. Two
    // independently parsed sources agreeing is strong evidence both are right.
    pe_info pe;
    if (!parse_pe(image.data(), image.size(), pe, error)) {
        std::printf("  FAIL Alien Breed PE: %s\n", error.c_str());
        return false;
    }
    assert(pe.machine == kMachinePowerPCBE);
    assert(info.image_base + pe.entry_point_rva == info.entry_point);
    assert(pe.sections.size() > 1);
    const pe_section* text = pe.code_section();
    assert(text && text->name == ".text");

    ppc_image_layout layout;
    if (!make_image_layout(pe, info.image_base, info.image_size, layout, error)) {
        std::printf("  FAIL Alien Breed layout: %s\n", error.c_str());
        return false;
    }
    // The entry point must be inside the code span, or the dispatch table
    // could never hold a slot for it.
    assert(layout.contains_code(info.entry_point));
    assert(layout.code_base > layout.image_base);
    assert(layout.code_size % 4 == 0);

    // These are the values XenonRecomp emitted into ppc_config.h when it
    // recompiled this title, so agreeing with them means generated code and
    // this loader will look for the dispatch table in the same place.
    assert(layout.image_base == 0x82000000u);
    assert(layout.code_base == 0x821F0000u);
    assert(layout.code_size == 0x00B54314u);
    assert(layout.image_size == 0x01060000u);
    assert(layout.table_base() == 0x83060000u);

    // The register save/restore helpers must all be found, since the
    // recompiler needs their addresses to translate callers correctly.
    ppc_helper_functions helpers;
    if (!find_ppc_helpers(image.data(), image.size(), info.image_base, pe,
                          helpers, error)) {
        std::printf("  FAIL Alien Breed helpers: %s\n", error.c_str());
        return false;
    }
    assert(helpers.found_count() == 8);
    assert(helpers.has_core_helpers() && helpers.has_vmx_helpers());
    for (uint32_t address : {helpers.restgprlr_14, helpers.savegprlr_14,
                             helpers.restfpr_14, helpers.savefpr_14,
                             helpers.restvmx_14, helpers.savevmx_14,
                             helpers.restvmx_64, helpers.savevmx_64})
        assert(layout.contains_code(address));

    // These helpers are emitted by the toolchain, so their sizes - and hence
    // the gap between each save/restore pair - are the same in every title.
    // The documented values for an entirely different game give the expected
    // deltas, which is an independent check that the right sequences were
    // matched rather than coincidental bytes.
    assert(helpers.restgprlr_14 - helpers.savegprlr_14 == 0x50);
    assert(helpers.restfpr_14 - helpers.savefpr_14 == 0x4C);
    assert(helpers.restvmx_14 - helpers.savevmx_14 == 0x298);
    assert(helpers.restvmx_64 - helpers.savevmx_64 == 0x298);

    // And the dispatch table for that layout can actually be built and used.
    ppc_function_table table;
    if (!table.initialize(memory, layout, error)) {
        std::printf("  FAIL Alien Breed function table: %s\n", error.c_str());
        return false;
    }
    assert(table.get(info.entry_point) == nullptr); // nothing recompiled yet
    std::printf("       layout: code %08X+%08X, %u sections, entry inside code,"
                " dispatch table %.1f MiB\n",
                layout.code_base, layout.code_size,
                static_cast<unsigned>(pe.sections.size()),
                static_cast<double>(layout.table_bytes()) / (1024.0 * 1024.0));
    std::printf("       helpers: %zu/8 found, save/restore deltas match a "
                "different title\n", helpers.found_count());
    ++checked;
    return true;
}

// Geometry Wars is LZX-compressed, which is how most XBLA titles ship. This is
// the end-to-end check on that path: the image has to come out as real
// PowerPC, not merely as something the right length. The window-realignment
// rule at each 32 KiB frame boundary is invisible for the first frame and
// silently corrupts everything after it, so a length-only check would pass a
// decoder that is wrong for 97% of the image.
bool test_lzx_image_decodes(int& checked) {
    const char* path = std::getenv("WHITTY_XEX_GEOMETRYWARS");
    std::vector<uint8_t> file;
    if (!path || !*path || !read_file(path, file)) {
        std::printf("  skip Geometry Wars (WHITTY_XEX_GEOMETRYWARS not set)\n");
        return true;
    }

    xex_info info;
    std::string error;
    if (!parse_xex(file.data(), file.size(), info, error)) {
        std::printf("  FAIL Geometry Wars parse: %s\n", error.c_str());
        return false;
    }
    assert(info.compression == xex_compression::normal);
    assert(info.lzx_window_size == 0x8000);

    std::vector<uint8_t> image;
    xex_key_kind key = xex_key_kind::retail;
    error.clear();
    if (!decode_xex_image(file.data(), file.size(), info, image, key, error)) {
        std::printf("  FAIL Geometry Wars decode: %s\n", error.c_str());
        return false;
    }
    assert(key == xex_key_kind::retail);
    assert(image.size() == info.image_size);
    assert(image[0] == 'M' && image[1] == 'Z');

    // The entry point must be a real function prologue. Every PowerPC function
    // the compiler emits for this title opens by saving the link register, so
    // `mflr r12` there is a much stronger statement than any size check.
    const uint32_t entry_offset = info.entry_point - info.image_base;
    assert(entry_offset + 4 <= image.size());
    const uint32_t first_instruction =
        (static_cast<uint32_t>(image[entry_offset]) << 24) |
        (static_cast<uint32_t>(image[entry_offset + 1]) << 16) |
        (static_cast<uint32_t>(image[entry_offset + 2]) << 8) |
        static_cast<uint32_t>(image[entry_offset + 3]);
    assert(first_instruction == 0x7D8802A6u); // mflr r12

    // And that must be true far past the first frame, not just at the start.
    std::size_t prologues = 0;
    for (std::size_t i = 0x1000; i + 4 <= image.size(); i += 4) {
        if (image[i] == 0x7D && image[i + 1] == 0x88 && image[i + 2] == 0x02 &&
            image[i + 3] == 0xA6)
            ++prologues;
    }
    assert(prologues > 1000);

    std::printf("  ok   Geometry Wars           %zu bytes LZX-decoded, "
                "%zu function prologues, entry %08X\n",
                image.size(), prologues, info.entry_point);
    ++checked;
    return true;
}

} // namespace

int main() {
    std::printf("image_real_files_test:\n");
    int checked = 0;
    bool ok = true;
    ok = test_alien_breed(checked) && ok;
    ok = test_lzx_image_decodes(checked) && ok;
    if (!ok) {
        std::printf("image_real_files_test: FAILED\n");
        return 1;
    }
    std::printf("image_real_files_test: %d real image(s) verified\n", checked);
    return 0;
}
