// pe.h - the PE image inside a XEX.
//
// Once the XEX body is decrypted and decompressed it is an ordinary PE, and its
// section table says where the code actually lives. That matters because the
// recompiler's indirect-call table is indexed from the code base: taking that
// value on faith rather than reading it means every indirect call is offset by
// a constant, which is not something the symptoms would tell you.
//
// Only what the loader needs is parsed - the section table and the entry point.
#pragma once

#include "whitty_xenon/ppc_runtime.h"

#include <cstddef>
#include <cstdint>
#include <string>
#include <vector>

namespace whitty_xenon {

struct pe_section {
    std::string name;
    uint32_t virtual_address{};  // relative to the image base
    uint32_t virtual_size{};
    uint32_t raw_size{};
    uint32_t characteristics{};

    bool executable() const noexcept;
    bool writable() const noexcept;
};

struct pe_info {
    uint32_t entry_point_rva{};
    uint32_t size_of_image{};
    uint32_t section_alignment{};
    uint16_t machine{};
    std::vector<pe_section> sections;

    // The first executable section (conventionally .text).
    const pe_section* code_section() const noexcept;
    // The span covering every executable section. A title can have more than
    // one - Alien Breed carries a second for its Bink video decoder - and a
    // recompiled function in the later one still needs a dispatch slot.
    bool executable_span(uint32_t& first_rva, uint32_t& end_rva) const noexcept;
};

// PowerPC big-endian, as used by the Xbox 360.
inline constexpr uint16_t kMachinePowerPCBE = 0x01F2;

// Parses the headers of a decoded image (the bytes that start with 'MZ').
bool parse_pe(const uint8_t* image, std::size_t size, pe_info& info,
              std::string& error);

// Derives the layout the recompiler's function table is indexed against.
//
// Both sizes come from the XEX container, not from the PE: the recompiler
// places its lookup table at image_base + image_size using the container's
// image size, and the PE's own SizeOfImage is larger. Taking the PE value would
// put our table at a different address to the one generated code reads from,
// so every indirect call would find a null slot. Verified against XenonRecomp's
// emitted PPC_IMAGE_SIZE for a real title.
bool make_image_layout(const pe_info& info, uint32_t image_base,
                       uint32_t image_size, ppc_image_layout& layout,
                       std::string& error);

} // namespace whitty_xenon
