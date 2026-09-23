// Unit tests for XEX import-table parsing.
//
// The import table is what tells us which kernel entry points a title needs, so
// a silent mistake here would send the kernel work off implementing the wrong
// functions. Two specific hazards are pinned below: the string table is padded
// with extra nulls (so name indices are not terminator counts), and the record
// header is 0x28 bytes (so a wrong size desynchronises every later library).
#include "whitty_xenon/image.h"
#include "whitty_xenon/imports.h"
#include "whitty_xenon/memory.h"
#include "whitty_xenon/xex.h"

#include <cassert>
#include <cstdio>
#include <cstring>
#include <string>
#include <vector>

using namespace whitty_xenon;

namespace {

void put_be32(std::vector<uint8_t>& buffer, std::size_t offset, uint32_t value) {
    if (buffer.size() < offset + 4) buffer.resize(offset + 4, 0);
    buffer[offset + 0] = static_cast<uint8_t>(value >> 24);
    buffer[offset + 1] = static_cast<uint8_t>(value >> 16);
    buffer[offset + 2] = static_cast<uint8_t>(value >> 8);
    buffer[offset + 3] = static_cast<uint8_t>(value);
}

void put_be16(std::vector<uint8_t>& buffer, std::size_t offset, uint16_t value) {
    if (buffer.size() < offset + 2) buffer.resize(offset + 2, 0);
    buffer[offset + 0] = static_cast<uint8_t>(value >> 8);
    buffer[offset + 1] = static_cast<uint8_t>(value);
}

constexpr uint32_t kImportBlock = 0x200;
constexpr std::size_t kLibraryHeader = 0x28;

// Builds a container whose import table mirrors a real one: a padded string
// table, then one record per library.
std::vector<uint8_t> make_container_with_imports(
    const std::vector<std::string>& names, std::size_t string_table_size,
    const std::vector<std::vector<uint32_t>>& records_per_library) {
    std::vector<uint8_t> buffer(0x1000, 0);
    put_be32(buffer, 0x00, 0x58455832u); // 'XEX2'
    put_be32(buffer, 0x08, 0x900);       // image body offset
    put_be32(buffer, 0x10, 0x100);       // security info
    put_be32(buffer, 0x14, 2);
    put_be32(buffer, 0x18, 0x00010201u); // image base
    put_be32(buffer, 0x1C, 0x82000000u);
    put_be32(buffer, 0x20, 0x000103FFu); // import libraries
    put_be32(buffer, 0x24, kImportBlock);

    // Import block header.
    put_be32(buffer, kImportBlock + 4, static_cast<uint32_t>(string_table_size));
    put_be32(buffer, kImportBlock + 8,
             static_cast<uint32_t>(records_per_library.size()));

    // String table, laid out exactly as written including any padding.
    std::size_t offset = kImportBlock + 12;
    for (const std::string& name : names) {
        std::memcpy(&buffer[offset], name.data(), name.size());
        offset += name.size() + 1; // terminator
    }

    // Library records.
    std::size_t cursor = kImportBlock + 12 + string_table_size;
    for (std::size_t index = 0; index < records_per_library.size(); ++index) {
        const std::vector<uint32_t>& records = records_per_library[index];
        const uint32_t record_size =
            static_cast<uint32_t>(kLibraryHeader + records.size() * 4);
        put_be32(buffer, cursor + 0x00, record_size);
        put_be32(buffer, cursor + 0x1C, 0x20205400u); // version
        put_be32(buffer, cursor + 0x20, 0x20205400u); // min version
        put_be16(buffer, cursor + 0x24, static_cast<uint16_t>(index));
        put_be16(buffer, cursor + 0x26,
                 static_cast<uint16_t>(records.size()));
        for (std::size_t record = 0; record < records.size(); ++record)
            put_be32(buffer, cursor + kLibraryHeader + record * 4,
                     records[record]);
        cursor += record_size;
    }
    put_be32(buffer, kImportBlock,
             static_cast<uint32_t>(cursor - kImportBlock));
    return buffer;
}

void test_parses_libraries_and_records() {
    const std::vector<uint8_t> container = make_container_with_imports(
        {"xboxkrnl.exe", "xam.xex"}, 24,
        {{0x82000100u, 0x82000110u}, {0x82000200u}});

    xex_info info;
    std::string error;
    assert(parse_xex(container.data(), container.size(), info, error));

    std::vector<xex_import_library> libraries;
    assert(parse_xex_imports(container.data(), container.size(), info,
                             libraries, error));
    assert(libraries.size() == 2);
    assert(libraries[0].name == "xboxkrnl.exe");
    assert(libraries[0].version == 0x20205400u);
    assert(libraries[0].record_addresses.size() == 2);
    assert(libraries[0].record_addresses[0] == 0x82000100u);
    assert(libraries[1].name == "xam.xex");
    assert(libraries[1].record_addresses.size() == 1);
}

void test_padded_string_table_keeps_name_indices_aligned() {
    // Real tables pad to an alignment with extra nulls: "xboxkrnl.exe\0\0\0\0"
    // then "xam.xex\0". Counting terminators would make index 1 land on a pad
    // and every later name would be wrong - this is a regression test for that.
    std::vector<uint8_t> container = make_container_with_imports(
        {"xboxkrnl.exe"}, 24, {{0x82000100u}, {0x82000200u}});
    // Write the second name after the padding, as a real linker does.
    const std::string second = "xam.xex";
    std::memcpy(&container[kImportBlock + 12 + 16], second.data(),
                second.size());
    // Rebuild the second library record to reference name index 1.
    // (make_container_with_imports already emitted two records.)
    xex_info info;
    std::string error;
    assert(parse_xex(container.data(), container.size(), info, error));

    std::vector<xex_import_library> libraries;
    assert(parse_xex_imports(container.data(), container.size(), info,
                             libraries, error));
    assert(libraries.size() == 2);
    assert(libraries[0].name == "xboxkrnl.exe");
    assert(libraries[1].name == "xam.xex");
}

void test_record_words_decode_to_ordinals() {
    const std::vector<uint8_t> container = make_container_with_imports(
        {"xboxkrnl.exe"}, 16, {{0x82000100u, 0x82000110u, 0x82000120u}});
    xex_info info;
    std::string error;
    assert(parse_xex(container.data(), container.size(), info, error));

    std::vector<xex_import_library> libraries;
    assert(parse_xex_imports(container.data(), container.size(), info,
                             libraries, error));

    guest_memory memory;
    assert(memory.initialize(error));
    assert(memory.commit(0x82000000u, 0x1000, error));
    // Two function thunks and one data import; only the thunks are kernel
    // entry points the runtime has to service.
    memory.write_u32(0x82000100u, 0x01000126u); // type 1, library 0, ordinal 294
    memory.write_u32(0x82000110u, 0x01000053u); // type 1, ordinal 83
    memory.write_u32(0x82000120u, 0x00000042u); // type 0, data import

    decode_imports(memory, libraries);
    assert(libraries[0].imports.size() == 2);
    assert(libraries[0].imports[0].ordinal == 294);
    assert(libraries[0].imports[0].record_type == 1);
    assert(libraries[0].imports[1].ordinal == 83);
    assert(total_function_imports(libraries) == 2);
}

void test_uncommitted_records_are_skipped() {
    // A record pointing outside the loaded image must be ignored rather than
    // faulting or inventing an ordinal.
    const std::vector<uint8_t> container = make_container_with_imports(
        {"xboxkrnl.exe"}, 16, {{0x82000100u, 0x90000000u}});
    xex_info info;
    std::string error;
    assert(parse_xex(container.data(), container.size(), info, error));
    std::vector<xex_import_library> libraries;
    assert(parse_xex_imports(container.data(), container.size(), info,
                             libraries, error));

    guest_memory memory;
    assert(memory.initialize(error));
    assert(memory.commit(0x82000000u, 0x1000, error));
    memory.write_u32(0x82000100u, 0x01000126u);

    decode_imports(memory, libraries);
    assert(libraries[0].imports.size() == 1);
    assert(libraries[0].imports[0].ordinal == 294);
}

void test_missing_import_header_is_not_an_error() {
    // A title with no imports parses to an empty list.
    std::vector<uint8_t> buffer(0x100, 0);
    put_be32(buffer, 0x00, 0x58455832u);
    put_be32(buffer, 0x14, 0);

    xex_info info;
    std::string error;
    assert(parse_xex(buffer.data(), buffer.size(), info, error));
    std::vector<xex_import_library> libraries;
    assert(parse_xex_imports(buffer.data(), buffer.size(), info, libraries,
                             error));
    assert(libraries.empty());
}

void test_rejects_corrupt_tables() {
    std::vector<uint8_t> container = make_container_with_imports(
        {"xboxkrnl.exe"}, 16, {{0x82000100u}});
    xex_info info;
    std::string error;
    assert(parse_xex(container.data(), container.size(), info, error));

    // A record count that would read past the end of the file.
    std::vector<uint8_t> broken = container;
    put_be16(broken, kImportBlock + 12 + 16 + 0x26, 0xFFFF);
    std::vector<xex_import_library> libraries;
    error.clear();
    assert(!parse_xex_imports(broken.data(), broken.size(), info, libraries,
                              error));
    assert(!error.empty());

    // An implausible library count.
    broken = container;
    put_be32(broken, kImportBlock + 8, 0x10000u);
    error.clear();
    assert(!parse_xex_imports(broken.data(), broken.size(), info, libraries,
                              error));
    assert(!error.empty());
}

} // namespace

int main() {
    test_parses_libraries_and_records();
    test_padded_string_table_keeps_name_indices_aligned();
    test_record_words_decode_to_ordinals();
    test_uncommitted_records_are_skipped();
    test_missing_import_header_is_not_an_error();
    test_rejects_corrupt_tables();
    std::printf("imports_test: all checks passed\n");
    return 0;
}
