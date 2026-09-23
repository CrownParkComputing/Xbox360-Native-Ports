// Unit tests for XEX image decoding.
//
// These build containers whose decoded output is known exactly, so a mistake in
// the run walk or the AES chaining shows up here rather than as a title that
// crashes thousands of instructions into recompiled code.
#include "whitty_xenon/aes.h"
#include "whitty_xenon/image.h"
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

constexpr uint32_t kSecurityOffset = 0x100;
constexpr uint32_t kFileFormatOffset = 0x400;
constexpr uint32_t kBodyOffset = 0x800;

// Builds a container around `body` with the requested encoding. When `runs` is
// empty the image is stored uncompressed.
std::vector<uint8_t> make_container(const std::vector<uint8_t>& body,
                                    const std::vector<xex_basic_block>& runs,
                                    bool encrypted,
                                    const uint8_t wrapped_key[16],
                                    uint32_t image_size) {
    std::vector<uint8_t> buffer(kBodyOffset, 0);
    put_be32(buffer, 0x00, 0x58455832u); // 'XEX2'
    put_be32(buffer, 0x04, 1);
    put_be32(buffer, 0x08, kBodyOffset);
    put_be32(buffer, 0x10, kSecurityOffset);
    put_be32(buffer, 0x14, 2); // entry point + file format info

    put_be32(buffer, 0x18, 0x00010201u);          // image base
    put_be32(buffer, 0x1C, 0x82000000u);
    put_be32(buffer, 0x20, 0x000003FFu);          // file format info
    put_be32(buffer, 0x24, kFileFormatOffset);

    put_be32(buffer, kSecurityOffset + 0x04, image_size);
    if (wrapped_key)
        std::memcpy(&buffer[kSecurityOffset + 0x150], wrapped_key, 16);

    const uint32_t info_size =
        static_cast<uint32_t>(8 + runs.size() * 8);
    put_be32(buffer, kFileFormatOffset + 0x00, info_size);
    put_be16(buffer, kFileFormatOffset + 0x04, encrypted ? 1 : 0);
    put_be16(buffer, kFileFormatOffset + 0x06, runs.empty() ? 0 : 1);
    for (std::size_t index = 0; index < runs.size(); ++index) {
        put_be32(buffer, kFileFormatOffset + 8 + index * 8,
                 runs[index].data_size);
        put_be32(buffer, kFileFormatOffset + 8 + index * 8 + 4,
                 runs[index].zero_size);
    }

    buffer.resize(kBodyOffset);
    buffer.insert(buffer.end(), body.begin(), body.end());
    return buffer;
}

void test_uncompressed_plaintext_image() {
    const std::vector<uint8_t> body{'M', 'Z', 0x03, 0x04, 0x05, 0x06};
    const std::vector<uint8_t> container =
        make_container(body, {}, false, nullptr, 6);

    xex_info info;
    std::string error;
    assert(parse_xex(container.data(), container.size(), info, error));
    assert(info.compression == xex_compression::none);

    std::vector<uint8_t> image;
    xex_key_kind key = xex_key_kind::devkit;
    assert(decode_xex_image(container.data(), container.size(), info, image,
                            key, error));
    assert(image == body);
}

void test_basic_compression_expands_zero_runs() {
    // Two runs: 4 data bytes then 4 zeros, then 2 data bytes and no fill.
    const std::vector<xex_basic_block> runs{{4, 4}, {2, 0}};
    const std::vector<uint8_t> body{'M', 'Z', 0x03, 0x04, 0x05, 0x06};
    const std::vector<uint8_t> container =
        make_container(body, runs, false, nullptr, 10);

    xex_info info;
    std::string error;
    assert(parse_xex(container.data(), container.size(), info, error));
    assert(info.compression == xex_compression::basic);
    assert(info.basic_blocks.size() == 2);
    assert(info.basic_blocks[0].data_size == 4);
    assert(info.basic_blocks[0].zero_size == 4);

    std::vector<uint8_t> image;
    xex_key_kind key = xex_key_kind::devkit;
    assert(decode_xex_image(container.data(), container.size(), info, image,
                            key, error));

    const std::vector<uint8_t> expected{'M', 'Z', 0x03, 0x04, 0x00, 0x00,
                                        0x00, 0x00, 0x05, 0x06};
    assert(image == expected);
}

void test_session_key_unwrap_is_a_single_block_decrypt() {
    // Wrapping is one AES block under the console key, so encrypting a chosen
    // session key must round-trip through unwrap_session_key.
    const uint8_t session[16] = {0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17,
                                 0x18, 0x19, 0x1a, 0x1b, 0x1c, 0x1d, 0x1e, 0x1f};
    uint8_t wrapped[16];
    aes128_encrypt_block(kXexRetailKey, session, wrapped);

    uint8_t recovered[16];
    unwrap_session_key(wrapped, xex_key_kind::retail, recovered);
    assert(std::memcmp(recovered, session, 16) == 0);

    // The devkit key is different, so it must not recover the same value.
    unwrap_session_key(wrapped, xex_key_kind::devkit, recovered);
    assert(std::memcmp(recovered, session, 16) != 0);
}

void test_encrypted_image_round_trip() {
    // Build a body that decrypts to a PE header: encrypt the plaintext with the
    // session key, and store that session key wrapped under the retail key.
    const uint8_t session[16] = {0x21, 0x22, 0x23, 0x24, 0x25, 0x26, 0x27, 0x28,
                                 0x29, 0x2a, 0x2b, 0x2c, 0x2d, 0x2e, 0x2f, 0x30};
    uint8_t wrapped[16];
    aes128_encrypt_block(kXexRetailKey, session, wrapped);

    std::vector<uint8_t> plain(32, 0);
    plain[0] = 'M';
    plain[1] = 'Z';
    for (std::size_t index = 2; index < plain.size(); ++index)
        plain[index] = static_cast<uint8_t>(index);

    // CBC-encrypt with a zero IV, which is what the container assumes.
    std::vector<uint8_t> cipher(plain.size());
    uint8_t previous[16] = {0};
    for (std::size_t offset = 0; offset < plain.size(); offset += 16) {
        uint8_t block[16];
        for (std::size_t index = 0; index < 16; ++index)
            block[index] = static_cast<uint8_t>(plain[offset + index] ^
                                                previous[index]);
        aes128_encrypt_block(session, block, cipher.data() + offset);
        std::memcpy(previous, cipher.data() + offset, 16);
    }

    const std::vector<uint8_t> container =
        make_container(cipher, {}, true, wrapped, 32);
    xex_info info;
    std::string error;
    assert(parse_xex(container.data(), container.size(), info, error));
    assert(info.encryption == xex_encryption::normal);

    std::vector<uint8_t> image;
    xex_key_kind key = xex_key_kind::devkit;
    assert(decode_xex_image(container.data(), container.size(), info, image,
                            key, error));
    assert(key == xex_key_kind::retail);
    assert(image == plain);
}

void test_wrong_key_is_reported_not_ignored() {
    // A body that decrypts to noise under both console keys must fail loudly:
    // silently loading garbage is the expensive failure mode.
    std::vector<uint8_t> cipher(32, 0xAB);
    uint8_t wrapped[16];
    std::memset(wrapped, 0x5A, sizeof(wrapped));
    const std::vector<uint8_t> container =
        make_container(cipher, {}, true, wrapped, 32);

    xex_info info;
    std::string error;
    assert(parse_xex(container.data(), container.size(), info, error));

    std::vector<uint8_t> image;
    xex_key_kind key = xex_key_kind::retail;
    error.clear();
    assert(!decode_xex_image(container.data(), container.size(), info, image,
                             key, error));
    assert(!error.empty());
}

void test_unsupported_encodings_are_reported() {
    xex_info info;
    info.pe_offset = 0;
    info.image_base = 0x82000000u;
    const uint8_t body[16] = {0};

    std::vector<uint8_t> image;
    xex_key_kind key = xex_key_kind::retail;
    std::string error;

    // LZX is decoded now, but a body this short cannot hold a valid block
    // table, so it still has to fail rather than produce a partial image.
    info.compression = xex_compression::normal;
    info.lzx_window_size = 0x8000;
    info.lzx_first_block_size = 0x1000;
    info.image_size = 0x1000;
    assert(!decode_xex_image(body, sizeof(body), info, image, key, error));
    assert(!error.empty());

    info.compression = xex_compression::delta;
    error.clear();
    assert(!decode_xex_image(body, sizeof(body), info, image, key, error));
    assert(!error.empty());
}

void test_runs_cannot_read_past_the_file() {
    // The run table comes from the file, so a hostile or corrupt one must be
    // rejected rather than read out of bounds.
    const std::vector<xex_basic_block> runs{{0x1000, 0}};
    const std::vector<uint8_t> body{'M', 'Z'};
    const std::vector<uint8_t> container =
        make_container(body, runs, false, nullptr, 0x1000);

    xex_info info;
    std::string error;
    assert(parse_xex(container.data(), container.size(), info, error));

    std::vector<uint8_t> image;
    xex_key_kind key = xex_key_kind::retail;
    error.clear();
    assert(!decode_xex_image(container.data(), container.size(), info, image,
                             key, error));
    assert(!error.empty());
}

void test_loads_into_guest_memory_at_the_image_base() {
    const std::vector<xex_basic_block> runs{{4, 12}};
    const std::vector<uint8_t> body{'M', 'Z', 0x03, 0x04};
    const std::vector<uint8_t> container =
        make_container(body, runs, false, nullptr, 16);

    xex_info info;
    std::string error;
    assert(parse_xex(container.data(), container.size(), info, error));

    guest_memory memory;
    assert(memory.initialize(error));
    xex_image_load_result result;
    assert(load_xex_image(container.data(), container.size(), info, memory,
                          result, error));

    assert(result.image_base == 0x82000000u);
    assert(result.has_pe_header);
    // The image is visible to the guest at its base, in guest byte order.
    assert(memory.committed(0x82000000u, 16));
    assert(memory.read_u8(0x82000000u) == 'M');
    assert(memory.read_u8(0x82000001u) == 'Z');
    assert(memory.read_u16(0x82000002u) == 0x0304u);
    // The zero run really is zero in guest memory.
    assert(memory.read_u32(0x82000004u) == 0);
}

} // namespace

int main() {
    test_uncompressed_plaintext_image();
    test_basic_compression_expands_zero_runs();
    test_session_key_unwrap_is_a_single_block_decrypt();
    test_encrypted_image_round_trip();
    test_wrong_key_is_reported_not_ignored();
    test_unsupported_encodings_are_reported();
    test_runs_cannot_read_past_the_file();
    test_loads_into_guest_memory_at_the_image_base();
    std::printf("image_test: all checks passed\n");
    return 0;
}
