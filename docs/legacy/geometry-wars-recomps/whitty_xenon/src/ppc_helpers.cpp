#include "whitty_xenon/ppc_helpers.h"
#include <algorithm>

#include <cstdio>
#include <cstring>

namespace whitty_xenon {
namespace {

// Each helper opens with a fixed instruction sequence. The general-purpose and
// floating-point ones are identified by their first instruction; the VMX ones
// need two, because the `li r11, -0x120` that starts them is not distinctive on
// its own.
//
//   __restgprlr_14  ld    r14, -0x98(r1)
//   __savegprlr_14  std   r14, -0x98(r1)
//   __restfpr_14    lfd   f14, -0x90(r12)
//   __savefpr_14    stfd  f14, -0x90(r12)
//   __restvmx_14    li    r11, -0x120 ; lvx    v14, r11, r12
//   __savevmx_14    li    r11, -0x120 ; stvx   v14, r11, r12
//   __restvmx_64    li    r11, -0x400 ; lvx128 v64, r11, r12
//   __savevmx_64    li    r11, -0x400 ; stvx128 v64, r11, r12
struct helper_pattern {
    const uint8_t* bytes;
    std::size_t size;
    uint32_t ppc_helper_functions::*field;
};

constexpr uint8_t kRestGprLr14[] = {0xE9, 0xC1, 0xFF, 0x68};
constexpr uint8_t kSaveGprLr14[] = {0xF9, 0xC1, 0xFF, 0x68};
constexpr uint8_t kRestFpr14[] = {0xC9, 0xCC, 0xFF, 0x70};
constexpr uint8_t kSaveFpr14[] = {0xD9, 0xCC, 0xFF, 0x70};
constexpr uint8_t kRestVmx14[] = {0x39, 0x60, 0xFE, 0xE0, 0x7D, 0xCB, 0x60, 0xCE};
constexpr uint8_t kSaveVmx14[] = {0x39, 0x60, 0xFE, 0xE0, 0x7D, 0xCB, 0x61, 0xCE};
constexpr uint8_t kRestVmx64[] = {0x39, 0x60, 0xFC, 0x00, 0x10, 0x0B, 0x60, 0xCB};
constexpr uint8_t kSaveVmx64[] = {0x39, 0x60, 0xFC, 0x00, 0x10, 0x0B, 0x61, 0xCB};

const helper_pattern kPatterns[] = {
    {kRestGprLr14, sizeof(kRestGprLr14), &ppc_helper_functions::restgprlr_14},
    {kSaveGprLr14, sizeof(kSaveGprLr14), &ppc_helper_functions::savegprlr_14},
    {kRestFpr14, sizeof(kRestFpr14), &ppc_helper_functions::restfpr_14},
    {kSaveFpr14, sizeof(kSaveFpr14), &ppc_helper_functions::savefpr_14},
    {kRestVmx14, sizeof(kRestVmx14), &ppc_helper_functions::restvmx_14},
    {kSaveVmx14, sizeof(kSaveVmx14), &ppc_helper_functions::savevmx_14},
    {kRestVmx64, sizeof(kRestVmx64), &ppc_helper_functions::restvmx_64},
    {kSaveVmx64, sizeof(kSaveVmx64), &ppc_helper_functions::savevmx_64},
};

} // namespace

std::size_t ppc_helper_functions::found_count() const noexcept {
    std::size_t count = 0;
    for (const helper_pattern& pattern : kPatterns)
        if (this->*(pattern.field) != 0) ++count;
    return count;
}

bool find_ppc_helpers(const uint8_t* image, std::size_t image_size,
                      uint32_t image_base, const pe_info& info,
                      ppc_helper_functions& helpers, std::string& error) {
    helpers = ppc_helper_functions{};
    if (!image || image_size == 0) {
        error = "no image to scan";
        return false;
    }
    if (info.sections.empty()) {
        error = "image has no sections to scan";
        return false;
    }

    // Only executable sections are searched. The same byte sequence can occur
    // in data - a texture or a string table will happily contain anything -
    // and matching there would hand the recompiler a bogus address.
    bool scanned_any = false;
    for (const pe_section& section : info.sections) {
        if (!section.executable() || section.virtual_size == 0) continue;
        const std::size_t start = section.virtual_address;
        if (start >= image_size) continue;
        const std::size_t end =
            std::min<std::size_t>(start + section.virtual_size, image_size);
        scanned_any = true;

        // Instructions are 4-byte aligned, so only those offsets can begin a
        // function; stepping by one would risk matching a coincidental
        // alignment inside another instruction.
        for (std::size_t offset = start; offset + 4 <= end; offset += 4) {
            for (const helper_pattern& pattern : kPatterns) {
                uint32_t& slot = helpers.*(pattern.field);
                if (slot != 0) continue; // keep the first match
                if (offset + pattern.size > end) continue;
                if (std::memcmp(image + offset, pattern.bytes, pattern.size) != 0)
                    continue;
                slot = static_cast<uint32_t>(image_base + offset);
            }
        }
    }
    if (!scanned_any) {
        error = "image has no executable section to scan";
        return false;
    }
    return true;
}

std::string helpers_to_toml(const ppc_helper_functions& helpers) {
    std::string text;
    auto line = [&text](const char* name, uint32_t address) {
        if (address == 0) return; // absent helpers are simply omitted
        char buffer[64];
        std::snprintf(buffer, sizeof(buffer), "%s = 0x%08X\n", name, address);
        text += buffer;
    };
    line("restgprlr_14_address", helpers.restgprlr_14);
    line("savegprlr_14_address", helpers.savegprlr_14);
    line("restfpr_14_address", helpers.restfpr_14);
    line("savefpr_14_address", helpers.savefpr_14);
    line("restvmx_14_address", helpers.restvmx_14);
    line("savevmx_14_address", helpers.savevmx_14);
    line("restvmx_64_address", helpers.restvmx_64);
    line("savevmx_64_address", helpers.savevmx_64);
    return text;
}

} // namespace whitty_xenon
