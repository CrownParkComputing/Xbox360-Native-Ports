// imports.h - the kernel functions a title actually calls.
//
// A XEX lists the libraries it imports (xboxkrnl.exe, xam.xex, ...) and, for
// each, the addresses in its image where the loader must patch in a thunk. The
// word already sitting at each of those addresses encodes the ordinal being
// imported, so reading them tells us precisely which kernel entry points a
// title needs.
//
// That list is the specification for the kernel layer: rather than guessing at
// a plausible subset of XBOXKRNL, we implement what the title asks for.
#pragma once

#include "whitty_xenon/memory.h"
#include "whitty_xenon/xex.h"

#include <cstddef>
#include <cstdint>
#include <string>
#include <vector>

namespace whitty_xenon {

// One import record, after decoding the word stored at its address.
struct xex_import {
    uint32_t address{};       // where in the guest image the record lives
    uint16_t ordinal{};       // ordinal within the library
    uint8_t record_type{};    // 0 = data/variable, 1 = function thunk
    uint8_t library_index{};
};

struct xex_import_library {
    std::string name;
    uint32_t version{};
    uint32_t min_version{};
    // Every record address the loader is told about, in file order.
    std::vector<uint32_t> record_addresses;
    // The subset that are function thunks, with ordinals decoded from the
    // loaded image. Populated by decode_imports().
    std::vector<xex_import> imports;
};

// Parses the import-libraries optional header. Needs the whole file, since the
// table lives outside the fixed header prefix.
bool parse_xex_imports(const uint8_t* file_data, std::size_t file_size,
                       const xex_info& info,
                       std::vector<xex_import_library>& libraries,
                       std::string& error);

// Reads the record word out of the loaded image to recover each ordinal. Call
// after load_xex_image(); records outside committed memory are skipped.
void decode_imports(const guest_memory& memory,
                    std::vector<xex_import_library>& libraries) noexcept;

// Convenience: total function imports across all libraries.
std::size_t total_function_imports(
    const std::vector<xex_import_library>& libraries) noexcept;

} // namespace whitty_xenon
