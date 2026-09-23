// ppc_helpers.h - locating the register save/restore helpers in an image.
//
// Xbox 360 binaries share a set of prologue/epilogue helpers that save and
// restore the non-volatile registers, entered part-way through like a switch
// fallthrough. A static recompiler has to know where they start to translate
// callers correctly, and XenonRecomp expects those addresses in its config -
// noting that they "could likely be auto-detected, but there is currently no
// mechanism for it".
//
// This is that mechanism. Each helper begins with a distinctive instruction
// sequence, so they can be found by scanning the code section instead of being
// looked up by hand for every title.
#pragma once

#include "whitty_xenon/pe.h"

#include <cstddef>
#include <cstdint>
#include <string>
#include <vector>

namespace whitty_xenon {

// Guest addresses of the helpers. Zero means not found, which is legitimate:
// a title that never touches VMX registers has no VMX helpers.
struct ppc_helper_functions {
    uint32_t restgprlr_14{};
    uint32_t savegprlr_14{};
    uint32_t restfpr_14{};
    uint32_t savefpr_14{};
    uint32_t restvmx_14{};
    uint32_t savevmx_14{};
    uint32_t restvmx_64{};
    uint32_t savevmx_64{};

    // The general-purpose and floating-point helpers are used by essentially
    // every title; without them a recompile is not going to be correct.
    bool has_core_helpers() const noexcept {
        return restgprlr_14 && savegprlr_14 && restfpr_14 && savefpr_14;
    }
    bool has_vmx_helpers() const noexcept {
        return restvmx_14 && savevmx_14 && restvmx_64 && savevmx_64;
    }
    std::size_t found_count() const noexcept;
};

// Scans the executable sections of a decoded image. `image_base` is where the
// image maps, so the results are guest addresses.
bool find_ppc_helpers(const uint8_t* image, std::size_t image_size,
                      uint32_t image_base, const pe_info& info,
                      ppc_helper_functions& helpers, std::string& error);

// Emits the [main] block of a XenonRecomp config for these helpers, so the
// addresses go into the recompiler without being transcribed by hand.
std::string helpers_to_toml(const ppc_helper_functions& helpers);

} // namespace whitty_xenon
