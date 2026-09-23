// Unit tests for XEX2 container parsing.
//
// These build headers by hand so the expected values are unambiguous, and they
// push malformed input through the parser: the offsets in a XEX come from the
// file itself, so every one of them is a chance to read out of bounds.
#include "whitty_xenon/xex.h"

#include <cassert>
#include <cstdio>
#include <cstring>
#include <string>
#include <vector>

using namespace whitty_xenon;

namespace {

void put_be32(std::vector<uint8_t>& buffer, std::size_t offset,
              uint32_t value) {
    if (buffer.size() < offset + 4) buffer.resize(offset + 4, 0);
    buffer[offset + 0] = static_cast<uint8_t>(value >> 24);
    buffer[offset + 1] = static_cast<uint8_t>(value >> 16);
    buffer[offset + 2] = static_cast<uint8_t>(value >> 8);
    buffer[offset + 3] = static_cast<uint8_t>(value);
}

void put_be16(std::vector<uint8_t>& buffer, std::size_t offset,
              uint16_t value) {
    if (buffer.size() < offset + 2) buffer.resize(offset + 2, 0);
    buffer[offset + 0] = static_cast<uint8_t>(value >> 8);
    buffer[offset + 1] = static_cast<uint8_t>(value);
}

// A minimal but realistic container: two inline headers plus the two blocks the
// loader actually needs (execution info and file format info).
std::vector<uint8_t> make_xex() {
    constexpr uint32_t kSecurityOffset = 0x100;
    constexpr uint32_t kExecutionOffset = 0x400;
    constexpr uint32_t kFileFormatOffset = 0x500;
    constexpr uint32_t kHeaderCount = 5;

    std::vector<uint8_t> buffer(0x1000, 0);
    put_be32(buffer, 0x00, 0x58455832u); // 'XEX2'
    put_be32(buffer, 0x04, 0x00000001u); // module flags
    put_be32(buffer, 0x08, 0x00003000u); // image body offset
    put_be32(buffer, 0x0C, 0);
    put_be32(buffer, 0x10, kSecurityOffset);
    put_be32(buffer, 0x14, kHeaderCount);

    std::size_t entry = 0x18;
    put_be32(buffer, entry, 0x00010100u);      // entry point, inline
    put_be32(buffer, entry + 4, 0x827F2030u);
    entry += 8;
    put_be32(buffer, entry, 0x00010201u);      // image base, inline
    put_be32(buffer, entry + 4, 0x82000000u);
    entry += 8;
    put_be32(buffer, entry, 0x00010001u);      // original PE base, inline
    put_be32(buffer, entry + 4, 0x00400000u);
    entry += 8;
    put_be32(buffer, entry, 0x00040006u);      // execution info, by offset
    put_be32(buffer, entry + 4, kExecutionOffset);
    entry += 8;
    put_be32(buffer, entry, 0x000003FFu);      // file format info, by offset
    put_be32(buffer, entry + 4, kFileFormatOffset);

    // Security info: image size, then the wrapped AES key at 0x150.
    put_be32(buffer, kSecurityOffset + 0x04, 0x00760000u);
    for (std::size_t index = 0; index < 16; ++index)
        buffer[kSecurityOffset + 0x150 + index] = static_cast<uint8_t>(index);

    // Execution info.
    put_be32(buffer, kExecutionOffset + 0x00, 0x4004D622u); // media id
    put_be32(buffer, kExecutionOffset + 0x04, 0x00000001u); // version
    put_be32(buffer, kExecutionOffset + 0x08, 0x00000002u); // base version
    put_be32(buffer, kExecutionOffset + 0x0C, 0x58410964u); // title id
    buffer[kExecutionOffset + 0x10] = 0x02;                 // platform
    buffer[kExecutionOffset + 0x11] = 0x03;                 // executable table
    buffer[kExecutionOffset + 0x12] = 0x01;                 // disc number
    buffer[kExecutionOffset + 0x13] = 0x01;                 // disc count

    // File format info: size, encryption, compression.
    put_be32(buffer, kFileFormatOffset + 0x00, 0x00000008u);
    put_be16(buffer, kFileFormatOffset + 0x04, 1); // encrypted
    put_be16(buffer, kFileFormatOffset + 0x06, 2); // LZX
    return buffer;
}

void test_magic_detection() {
    const std::vector<uint8_t> xex = make_xex();
    assert(is_xex(xex.data(), xex.size()));

    const uint8_t not_xex[] = {'L', 'I', 'V', 'E', 0, 0, 0, 0};
    assert(!is_xex(not_xex, sizeof(not_xex)));
    // A buffer too short to hold the magic must not read past its end.
    const uint8_t truncated[] = {'X', 'E'};
    assert(!is_xex(truncated, sizeof(truncated)));
    assert(!is_xex(nullptr, 0));
}

void test_parses_a_well_formed_container() {
    const std::vector<uint8_t> xex = make_xex();
    xex_info info;
    std::string error;
    assert(parse_xex(xex.data(), xex.size(), info, error));
    assert(error.empty());

    assert(info.module_flags == 0x00000001u);
    assert(info.pe_offset == 0x00003000u);
    assert(info.security_offset == 0x100u);
    assert(info.header_count == 5);

    assert(info.entry_point == 0x827F2030u);
    assert(info.image_base == 0x82000000u);
    assert(info.original_base == 0x00400000u);
    assert(info.image_size == 0x00760000u);

    assert(info.has_execution_info);
    assert(info.media_id == 0x4004D622u);
    assert(info.version == 1);
    assert(info.base_version == 2);
    assert(info.title_id == 0x58410964u);
    assert(info.platform == 0x02);
    assert(info.executable_table == 0x03);
    assert(info.disc_number == 1);
    assert(info.disc_count == 1);

    assert(info.has_file_format_info);
    assert(info.encryption == xex_encryption::normal);
    assert(info.compression == xex_compression::normal);

    // The session key is stored wrapped; the loader unwraps it later.
    assert(info.wrapped_session_key.size() == 16);
    assert(info.wrapped_session_key[0] == 0);
    assert(info.wrapped_session_key[15] == 15);
}

void test_rejects_non_xex_and_truncated_input() {
    xex_info info;
    std::string error;

    assert(!parse_xex(nullptr, 0, info, error));
    assert(!error.empty());

    const uint8_t live[] = {'L', 'I', 'V', 'E', 0, 0, 0, 0,
                            0, 0, 0, 0, 0, 0, 0, 0,
                            0, 0, 0, 0, 0, 0, 0, 0};
    error.clear();
    assert(!parse_xex(live, sizeof(live), info, error));
    assert(error == "missing XEX2 magic");

    // Valid magic but the file stops before the header table.
    std::vector<uint8_t> stub(8, 0);
    put_be32(stub, 0, 0x58455832u);
    error.clear();
    assert(!parse_xex(stub.data(), stub.size(), info, error));
    assert(!error.empty());
}

void test_rejects_out_of_range_offsets() {
    xex_info info;
    std::string error;

    // A header count that would run the table past the end of the file.
    {
        std::vector<uint8_t> xex = make_xex();
        put_be32(xex, 0x14, 0x0000FFFFu);
        error.clear();
        assert(!parse_xex(xex.data(), xex.size(), info, error));
        assert(!error.empty());
    }
    // Execution info pointing outside the buffer.
    {
        std::vector<uint8_t> xex = make_xex();
        put_be32(xex, 0x18 + 3 * 8 + 4, 0x00FFFFFFu);
        error.clear();
        assert(!parse_xex(xex.data(), xex.size(), info, error));
        assert(!error.empty());
    }
    // File format info pointing outside the buffer.
    {
        std::vector<uint8_t> xex = make_xex();
        put_be32(xex, 0x18 + 4 * 8 + 4, 0x00FFFFFFu);
        error.clear();
        assert(!parse_xex(xex.data(), xex.size(), info, error));
        assert(!error.empty());
    }
    // NOTE: an image-body offset beyond the buffer is deliberately NOT an
    // error - see test_header_only_prefix_parses().
}

void test_unknown_headers_are_ignored() {
    // Titles carry ratings, logos and cache sizes the loader does not read;
    // encountering them must not fail the parse.
    std::vector<uint8_t> xex = make_xex();
    put_be32(xex, 0x14, 6);
    put_be32(xex, 0x18 + 5 * 8, 0x00040310u); // game ratings
    put_be32(xex, 0x18 + 5 * 8 + 4, 0x00000600u);

    xex_info info;
    std::string error;
    assert(parse_xex(xex.data(), xex.size(), info, error));
    assert(info.title_id == 0x58410964u);
}

void test_header_only_prefix_parses() {
    // Identifying a title must not require the image body. make_xex() is a
    // 4 KiB buffer whose pe_offset points at 0x3000 past its own end, which is
    // exactly the shape of a header prefix read from a large file.
    const std::vector<uint8_t> xex = make_xex();
    assert(xex.size() < 0x3000u);
    xex_info info;
    std::string error;
    assert(parse_xex(xex.data(), xex.size(), info, error));
    assert(info.pe_offset == 0x00003000u);
    assert(info.title_id == 0x58410964u);
}

void test_uncompressed_plaintext_container() {
    // Not every image is LZX+AES; a devkit build can be plain.
    std::vector<uint8_t> xex = make_xex();
    put_be16(xex, 0x500 + 0x04, 0); // no encryption
    put_be16(xex, 0x500 + 0x06, 0); // no compression

    xex_info info;
    std::string error;
    assert(parse_xex(xex.data(), xex.size(), info, error));
    assert(info.encryption == xex_encryption::none);
    assert(info.compression == xex_compression::none);
}

// The resource table: named blobs inside the mapped image, which is what
// XexGetModuleSection resolves. Three details are easy to get wrong and all
// three are pinned here: the leading size counts itself (so the entry count is
// (size - 4) / 16, not size / 16), the name is a fixed 8 bytes with no
// terminator when it is exactly 8 characters long, and address and size are
// big-endian like everything else.
void test_resource_table() {
    constexpr uint32_t kResourceOffset = 0x600;
    std::vector<uint8_t> xex = make_xex();
    put_be32(xex, 0x14, 6);
    put_be32(xex, 0x18 + 5 * 8, 0x000002FFu); // resource info, by offset
    put_be32(xex, 0x18 + 5 * 8 + 4, kResourceOffset);

    // Two entries: one with an 8-character name that fills the field with no
    // room for a terminator, one shorter and therefore null-padded.
    put_be32(xex, kResourceOffset, 4 + 2 * 16);
    std::memcpy(&xex[kResourceOffset + 4], "Eng_UTF8", 8);
    put_be32(xex, kResourceOffset + 4 + 8, 0x82433E00u);
    put_be32(xex, kResourceOffset + 4 + 12, 0x000009FBu);
    std::memcpy(&xex[kResourceOffset + 20], "STR\0\0\0\0\0", 8);
    put_be32(xex, kResourceOffset + 20 + 8, 0x82422400u);
    put_be32(xex, kResourceOffset + 20 + 12, 0x0000BBC4u);

    xex_info info;
    std::string error;
    assert(parse_xex(xex.data(), xex.size(), info, error));
    assert(info.resources.size() == 2);
    assert(info.resources[0].name == "Eng_UTF8");
    assert(info.resources[0].address == 0x82433E00u);
    assert(info.resources[0].size == 0x000009FBu);
    assert(info.resources[1].name == "STR");
    assert(info.resources[1].address == 0x82422400u);
    assert(info.resources[1].size == 0x0000BBC4u);

    // A block whose declared size runs past the end of the file must be
    // rejected rather than read - the offset and the size both come from the
    // file itself.
    put_be32(xex, kResourceOffset, 4 + 0x1000 * 16);
    xex_info overrun;
    error.clear();
    assert(!parse_xex(xex.data(), xex.size(), overrun, error));
    assert(!error.empty());

    // A size that cannot even hold its own field is malformed.
    put_be32(xex, kResourceOffset, 2);
    xex_info tiny;
    error.clear();
    assert(!parse_xex(xex.data(), xex.size(), tiny, error));
}

} // namespace

int main() {
    test_magic_detection();
    test_parses_a_well_formed_container();
    test_rejects_non_xex_and_truncated_input();
    test_rejects_out_of_range_offsets();
    test_unknown_headers_are_ignored();
    test_header_only_prefix_parses();
    test_uncompressed_plaintext_container();
    test_resource_table();
    std::printf("xex_test: all checks passed\n");
    return 0;
}
