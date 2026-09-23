#include "whitty_xenon/imports.h"

#include <cstring>

namespace whitty_xenon {
namespace {

constexpr uint32_t kImportLibrariesKey = 0x000103FFu;

// Layout of the import-libraries block:
//   u32 size            total bytes of the block
//   u32 string_size     bytes of the name string table
//   u32 library_count
//   char strings[string_size]   null-terminated library names
//   then library_count records of:
//     +0x00 u32 size          total bytes of this record
//     +0x04 u8  digest[20]
//     +0x18 u32 import id
//     +0x1C u32 version
//     +0x20 u32 min version
//     +0x24 u16 name index    index into the string table, not a byte offset
//     +0x26 u16 record count
//     +0x28 u32 records[record_count]
//
// The 0x28 header size is corroborated by the records themselves: a real
// xboxkrnl.exe entry declares size 0x4A0, which is exactly 0x28 + 286 * 4.
constexpr std::size_t kLibraryHeaderSize = 0x28;
constexpr std::size_t kLibraryRecordCountOffset = 0x26;
constexpr std::size_t kLibraryNameIndexOffset = 0x24;
constexpr std::size_t kLibraryVersionOffset = 0x1C;
constexpr std::size_t kLibraryMinVersionOffset = 0x20;

bool read_be32(const uint8_t* data, std::size_t size, std::size_t offset,
               uint32_t& value) noexcept {
    if (offset + 4 > size) return false;
    uint32_t raw = 0;
    std::memcpy(&raw, data + offset, sizeof(raw));
    value = __builtin_bswap32(raw);
    return true;
}

bool read_be16(const uint8_t* data, std::size_t size, std::size_t offset,
               uint16_t& value) noexcept {
    if (offset + 2 > size) return false;
    uint16_t raw = 0;
    std::memcpy(&raw, data + offset, sizeof(raw));
    value = __builtin_bswap16(raw);
    return true;
}

// Finds the import-libraries optional header without re-parsing the container.
bool find_import_header(const uint8_t* data, std::size_t size,
                        const xex_info& info, uint32_t& offset) noexcept {
    for (uint32_t index = 0; index < info.header_count; ++index) {
        const std::size_t entry = 0x18 + index * 8u;
        uint32_t key = 0;
        uint32_t value = 0;
        if (!read_be32(data, size, entry, key) ||
            !read_be32(data, size, entry + 4, value))
            return false;
        if (key == kImportLibrariesKey) {
            offset = value;
            return true;
        }
    }
    return false;
}

// Splits the name string table. Entries are null-terminated and the table is
// padded to an alignment with extra nulls, so empty runs are skipped rather
// than counted - otherwise the index of every name after the first padded one
// would be wrong.
std::vector<std::string> split_names(const uint8_t* strings,
                                     std::size_t strings_size) {
    std::vector<std::string> names;
    std::size_t offset = 0;
    while (offset < strings_size) {
        std::size_t end = offset;
        while (end < strings_size && strings[end] != '\0') ++end;
        if (end > offset)
            names.emplace_back(reinterpret_cast<const char*>(strings + offset),
                               end - offset);
        offset = end + 1;
    }
    return names;
}

} // namespace

bool parse_xex_imports(const uint8_t* file_data, std::size_t file_size,
                       const xex_info& info,
                       std::vector<xex_import_library>& libraries,
                       std::string& error) {
    libraries.clear();
    if (!file_data || file_size == 0) {
        error = "no XEX data";
        return false;
    }

    uint32_t block = 0;
    if (!find_import_header(file_data, file_size, info, block)) {
        // A title with no imports is unusual but not an error.
        return true;
    }

    uint32_t block_size = 0;
    uint32_t strings_size = 0;
    uint32_t library_count = 0;
    if (!read_be32(file_data, file_size, block, block_size) ||
        !read_be32(file_data, file_size, block + 4, strings_size) ||
        !read_be32(file_data, file_size, block + 8, library_count)) {
        error = "import library header is truncated";
        return false;
    }
    // Guard against a corrupt count driving a huge loop.
    if (library_count > 0x100u) {
        error = "implausible import library count";
        return false;
    }
    const std::size_t strings_offset = static_cast<std::size_t>(block) + 12;
    if (strings_offset + strings_size > file_size) {
        error = "import library string table runs past the end of the file";
        return false;
    }
    const std::vector<std::string> names =
        split_names(file_data + strings_offset, strings_size);

    std::size_t cursor = strings_offset + strings_size;
    for (uint32_t index = 0; index < library_count; ++index) {
        uint32_t record_size = 0;
        uint16_t name_index = 0;
        uint16_t record_count = 0;
        if (!read_be32(file_data, file_size, cursor, record_size) ||
            !read_be16(file_data, file_size, cursor + kLibraryNameIndexOffset,
                       name_index) ||
            !read_be16(file_data, file_size,
                       cursor + kLibraryRecordCountOffset, record_count)) {
            error = "import library record is truncated";
            return false;
        }

        xex_import_library library;
        if (name_index < names.size()) library.name = names[name_index];
        read_be32(file_data, file_size, cursor + kLibraryVersionOffset,
                  library.version);
        read_be32(file_data, file_size, cursor + kLibraryMinVersionOffset,
                  library.min_version);

        const std::size_t records = cursor + kLibraryHeaderSize;
        if (records + static_cast<std::size_t>(record_count) * 4 > file_size) {
            error = "import record table runs past the end of the file";
            return false;
        }
        library.record_addresses.reserve(record_count);
        for (uint16_t record = 0; record < record_count; ++record) {
            uint32_t address = 0;
            read_be32(file_data, file_size, records + record * 4u, address);
            library.record_addresses.push_back(address);
        }
        libraries.push_back(std::move(library));

        // record_size covers this whole entry; fall back to the computed size
        // when it is obviously wrong so one bad field cannot desynchronise the
        // rest of the walk.
        const std::size_t computed =
            kLibraryHeaderSize + static_cast<std::size_t>(record_count) * 4;
        cursor += (record_size >= kLibraryHeaderSize) ? record_size : computed;
        if (cursor > file_size) {
            error = "import library walk ran past the end of the file";
            return false;
        }
    }
    return true;
}

void decode_imports(const guest_memory& memory,
                    std::vector<xex_import_library>& libraries) noexcept {
    for (std::size_t index = 0; index < libraries.size(); ++index) {
        xex_import_library& library = libraries[index];
        library.imports.clear();
        for (uint32_t address : library.record_addresses) {
            if (!memory.committed(address, 4)) continue;
            // The word at the record encodes the import being requested:
            //   bits 31..24 record type, 23..16 library index, 15..0 ordinal.
            const uint32_t value = memory.read_u32(address);
            xex_import entry;
            entry.address = address;
            entry.record_type = static_cast<uint8_t>((value >> 24) & 0xFFu);
            entry.library_index = static_cast<uint8_t>((value >> 16) & 0xFFu);
            entry.ordinal = static_cast<uint16_t>(value & 0xFFFFu);
            // Type 1 records are the function thunks the kernel must service;
            // type 0 records are data imports patched with an address.
            if (entry.record_type == 1) library.imports.push_back(entry);
        }
    }
}

std::size_t total_function_imports(
    const std::vector<xex_import_library>& libraries) noexcept {
    std::size_t total = 0;
    for (const xex_import_library& library : libraries)
        total += library.imports.size();
    return total;
}

} // namespace whitty_xenon
