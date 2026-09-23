#include "whitty_xenon/xex.h"

#include <cstring>
#include <fstream>

namespace whitty_xenon {
namespace {

constexpr uint32_t kXex2Magic = 0x58455832u; // 'XEX2'

// Fixed offsets in the XEX2 file header.
constexpr std::size_t kOffsetMagic = 0x00;
constexpr std::size_t kOffsetModuleFlags = 0x04;
constexpr std::size_t kOffsetPeOffset = 0x08;
constexpr std::size_t kOffsetSecurityOffset = 0x10;
constexpr std::size_t kOffsetHeaderCount = 0x14;
constexpr std::size_t kOffsetOptionalHeaders = 0x18;

// Offsets within the security info block.
constexpr std::size_t kSecurityImageSize = 0x04;
constexpr std::size_t kSecurityAesKey = 0x150;
constexpr std::size_t kAesKeySize = 16;

// Offsets within the execution-info block.
constexpr std::size_t kExecutionMediaId = 0x00;
constexpr std::size_t kExecutionVersion = 0x04;
constexpr std::size_t kExecutionBaseVersion = 0x08;
constexpr std::size_t kExecutionTitleId = 0x0C;
constexpr std::size_t kExecutionPlatform = 0x10;
constexpr std::size_t kExecutionExecutableTable = 0x11;
constexpr std::size_t kExecutionDiscNumber = 0x12;
constexpr std::size_t kExecutionDiscCount = 0x13;
constexpr std::size_t kExecutionInfoSize = 0x18;

// Offsets within the resource-info block: a leading size, then fixed 16-byte
// entries of { char name[8]; u32 address; u32 size; }.
constexpr std::size_t kResourceNameSize = 8;
constexpr std::size_t kResourceEntrySize = 16;

// Every scalar in a XEX is big-endian; these readers are bounds-checked because
// the header offsets come from the file itself.
bool read_be32(const uint8_t* data, std::size_t size, std::size_t offset,
               uint32_t& value) noexcept {
    if (offset + sizeof(uint32_t) > size) return false;
    uint32_t raw = 0;
    std::memcpy(&raw, data + offset, sizeof(raw));
    value = __builtin_bswap32(raw);
    return true;
}

bool read_be16(const uint8_t* data, std::size_t size, std::size_t offset,
               uint16_t& value) noexcept {
    if (offset + sizeof(uint16_t) > size) return false;
    uint16_t raw = 0;
    std::memcpy(&raw, data + offset, sizeof(raw));
    value = __builtin_bswap16(raw);
    return true;
}

bool read_u8(const uint8_t* data, std::size_t size, std::size_t offset,
             uint8_t& value) noexcept {
    if (offset + 1 > size) return false;
    value = data[offset];
    return true;
}

// The low byte of an optional-header key says where the payload lives: 0x00 and
// 0x01 store it directly in the value slot, everything else makes the value a
// file offset.
bool value_is_inline(uint32_t key) noexcept {
    const uint32_t kind = key & 0xFFu;
    return kind == 0x00u || kind == 0x01u;
}

} // namespace

bool is_xex(const uint8_t* data, std::size_t size) noexcept {
    uint32_t magic = 0;
    if (!read_be32(data, size, kOffsetMagic, magic)) return false;
    return magic == kXex2Magic;
}

bool parse_xex(const uint8_t* data, std::size_t size, xex_info& info,
               std::string& error) {
    info = xex_info{};
    if (!data || size < kOffsetOptionalHeaders) {
        error = "file is too small to be a XEX2 container";
        return false;
    }
    if (!is_xex(data, size)) {
        error = "missing XEX2 magic";
        return false;
    }

    if (!read_be32(data, size, kOffsetModuleFlags, info.module_flags) ||
        !read_be32(data, size, kOffsetPeOffset, info.pe_offset) ||
        !read_be32(data, size, kOffsetSecurityOffset, info.security_offset) ||
        !read_be32(data, size, kOffsetHeaderCount, info.header_count)) {
        error = "truncated XEX2 file header";
        return false;
    }

    // A malformed count would otherwise drive a very long loop over garbage.
    const std::size_t headers_end =
        kOffsetOptionalHeaders +
        static_cast<std::size_t>(info.header_count) * 8u;
    if (info.header_count > 0x1000u || headers_end > size) {
        error = "optional header table runs past the end of the file";
        return false;
    }

    for (uint32_t index = 0; index < info.header_count; ++index) {
        const std::size_t entry = kOffsetOptionalHeaders + index * 8u;
        uint32_t key = 0;
        uint32_t value = 0;
        if (!read_be32(data, size, entry, key) ||
            !read_be32(data, size, entry + 4, value)) {
            error = "truncated optional header entry";
            return false;
        }

        switch (static_cast<xex_header_key>(key)) {
        case xex_header_key::entry_point:
            info.entry_point = value;
            break;
        case xex_header_key::image_base_address:
            info.image_base = value;
            break;
        case xex_header_key::original_base_address:
            info.original_base = value;
            break;
        case xex_header_key::default_stack_size:
            info.default_stack_size = value;
            break;
        case xex_header_key::default_heap_size:
            info.default_heap_size = value;
            break;
        case xex_header_key::tls_info: {
            // Offset to a 16-byte directory: slot count, guest address of the
            // raw template inside the mapped image, per-thread block size
            // (raw bytes plus zero fill), and how many of those bytes the
            // template supplies.
            if (value_is_inline(key)) break;
            if (static_cast<std::size_t>(value) + 16 > size) {
                error = "TLS info runs past the end of the file";
                return false;
            }
            read_be32(data, size, value + 0x0, info.tls_slot_count);
            read_be32(data, size, value + 0x4, info.tls_raw_data_address);
            read_be32(data, size, value + 0x8, info.tls_data_size);
            read_be32(data, size, value + 0xC, info.tls_raw_data_size);
            info.has_tls_info = true;
            break;
        }
        case xex_header_key::system_flags:
            info.system_flags = value;
            break;
        case xex_header_key::execution_info: {
            // Offset to a 24-byte block carrying the title identity.
            if (value_is_inline(key)) break;
            if (static_cast<std::size_t>(value) + kExecutionInfoSize > size) {
                error = "execution info runs past the end of the file";
                return false;
            }
            const std::size_t base = value;
            read_be32(data, size, base + kExecutionMediaId, info.media_id);
            read_be32(data, size, base + kExecutionVersion, info.version);
            read_be32(data, size, base + kExecutionBaseVersion,
                      info.base_version);
            read_be32(data, size, base + kExecutionTitleId, info.title_id);
            read_u8(data, size, base + kExecutionPlatform, info.platform);
            read_u8(data, size, base + kExecutionExecutableTable,
                    info.executable_table);
            read_u8(data, size, base + kExecutionDiscNumber, info.disc_number);
            read_u8(data, size, base + kExecutionDiscCount, info.disc_count);
            info.has_execution_info = true;
            break;
        }
        case xex_header_key::resource_info: {
            // Offset to { u32 size; { char name[8]; u32 address; u32 size; }[] }
            // where the leading size counts itself, so the entry count is
            // (size - 4) / 16. The name is a fixed 8 bytes and need not be
            // null-terminated, which is why it is read as a fixed field rather
            // than as a string.
            if (value_is_inline(key)) break;
            uint32_t block_size = 0;
            if (!read_be32(data, size, value, block_size)) {
                error = "resource info runs past the end of the file";
                return false;
            }
            if (block_size < 4) {
                error = "resource info block is too small";
                return false;
            }
            const uint32_t count = (block_size - 4) / kResourceEntrySize;
            const std::size_t first = static_cast<std::size_t>(value) + 4;
            if (first + static_cast<std::size_t>(count) * kResourceEntrySize >
                size) {
                error = "resource table runs past the end of the file";
                return false;
            }
            for (uint32_t entry_index = 0; entry_index < count; ++entry_index) {
                const std::size_t at =
                    first + static_cast<std::size_t>(entry_index) *
                                kResourceEntrySize;
                xex_resource resource;
                for (std::size_t c = 0; c < kResourceNameSize; ++c) {
                    const char character = static_cast<char>(data[at + c]);
                    if (character == '\0') break;
                    resource.name.push_back(character);
                }
                read_be32(data, size, at + kResourceNameSize, resource.address);
                read_be32(data, size, at + kResourceNameSize + 4,
                          resource.size);
                info.resources.push_back(std::move(resource));
            }
            break;
        }
        case xex_header_key::file_format_info: {
            // Offset to { size, encryption:u16, compression:u16, ... }.
            if (value_is_inline(key)) break;
            uint16_t encryption = 0;
            uint16_t compression = 0;
            if (!read_be16(data, size, static_cast<std::size_t>(value) + 4,
                           encryption) ||
                !read_be16(data, size, static_cast<std::size_t>(value) + 6,
                           compression)) {
                error = "file format info runs past the end of the file";
                return false;
            }
            info.encryption = static_cast<xex_encryption>(encryption);
            info.compression = static_cast<xex_compression>(compression);
            info.has_file_format_info = true;

            uint32_t info_size = 0;
            if (!read_be32(data, size, value, info_size)) {
                error = "file format info size runs past the end of the file";
                return false;
            }
            const std::size_t payload = static_cast<std::size_t>(value) + 8;
            if (info.compression == xex_compression::basic) {
                // The remainder of the block is an array of (data, zero) runs.
                if (info_size < 8) {
                    error = "basic compression info is too small";
                    return false;
                }
                const uint32_t count = (info_size - 8) / 8;
                for (uint32_t block = 0; block < count; ++block) {
                    xex_basic_block run;
                    if (!read_be32(data, size, payload + block * 8,
                                   run.data_size) ||
                        !read_be32(data, size, payload + block * 8 + 4,
                                   run.zero_size)) {
                        error = "basic compression block table is truncated";
                        return false;
                    }
                    info.basic_blocks.push_back(run);
                }
            } else if (info.compression == xex_compression::normal) {
                if (!read_be32(data, size, payload, info.lzx_window_size) ||
                    !read_be32(data, size, payload + 4,
                               info.lzx_first_block_size)) {
                    error = "LZX compression info is truncated";
                    return false;
                }
            }
            break;
        }
        default:
            // Unknown headers are normal: titles carry ratings, logos, cache
            // sizes and so on that the loader does not need.
            break;
        }
    }

    // The security info holds the mapped image size and the wrapped AES key.
    if (info.security_offset != 0) {
        const std::size_t base = info.security_offset;
        if (!read_be32(data, size, base + kSecurityImageSize, info.image_size)) {
            error = "security info runs past the end of the file";
            return false;
        }
        if (base + kSecurityAesKey + kAesKeySize <= size) {
            info.wrapped_session_key.assign(
                data + base + kSecurityAesKey,
                data + base + kSecurityAesKey + kAesKeySize);
        }
    }

    // Deliberately no check that pe_offset lies inside `size`: this function
    // parses the container headers only, and callers routinely hand it just a
    // prefix of the file (identifying a title should not read a 16 MiB image).
    // The image loader validates the body when it actually reads it.
    return true;
}

bool parse_xex_file(const std::string& path, xex_info& info,
                    std::string& error) {
    std::ifstream input(path, std::ios::binary);
    if (!input) {
        error = "could not open " + path;
        return false;
    }
    // The container headers live at the front; reading a prefix is enough and
    // avoids pulling a 16 MiB image into memory just to read a title id.
    constexpr std::size_t kHeaderPrefix = 64 * 1024;
    std::vector<uint8_t> buffer(kHeaderPrefix);
    input.read(reinterpret_cast<char*>(buffer.data()),
               static_cast<std::streamsize>(buffer.size()));
    const std::size_t read_bytes = static_cast<std::size_t>(input.gcount());
    if (read_bytes == 0) {
        error = "could not read " + path;
        return false;
    }
    buffer.resize(read_bytes);
    return parse_xex(buffer.data(), buffer.size(), info, error);
}

} // namespace whitty_xenon
