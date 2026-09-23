// xex.h - XEX2 container parsing.
//
// A XEX wraps the title's PE image plus the metadata the loader needs: where to
// map it, where execution starts, and how the image body is encrypted and
// compressed. Everything in the file is big-endian.
//
// This header only describes the container. Decrypting and decompressing the
// image body is a separate step so that identification stays cheap: the ROM
// probe wants a title id, not a 7 MiB decompressed image.
#pragma once

#include <cstddef>
#include <cstdint>
#include <string>
#include <vector>

namespace whitty_xenon {

// Optional-header keys used by retail titles. The low byte encodes how the
// value is stored: 0x00/0x01 mean the value field *is* the data, anything else
// means the value field is a file offset to it.
enum class xex_header_key : uint32_t {
    resource_info = 0x000002FF,
    file_format_info = 0x000003FF,
    original_base_address = 0x00010001,
    entry_point = 0x00010100,
    image_base_address = 0x00010201,
    import_libraries = 0x000103FF,
    tls_info = 0x00020104,
    default_stack_size = 0x00020200,
    default_heap_size = 0x00020401,
    system_flags = 0x00030000,
    execution_info = 0x00040006,
};

enum class xex_encryption : uint16_t {
    none = 0,
    normal = 1, // AES-128-CBC under the retail (or devkit) key
};

enum class xex_compression : uint16_t {
    none = 0,
    basic = 1,  // run of (data size, zero size) pairs
    normal = 2, // LZX
    delta = 3,  // patch against a base image
};

// "Basic" compression is a run-length scheme over the image: emit `data_size`
// bytes from the stream, then `zero_size` zero bytes, repeatedly. It exists so
// a title's zero-initialised regions cost nothing in the container.
struct xex_basic_block {
    uint32_t data_size{};
    uint32_t zero_size{};
};

// One entry of the XEX resource table: a named blob living inside the mapped
// image. This is what XexGetModuleSection resolves, and it is *not* a PE
// section - a title embeds its localised text and similar data as resources,
// with names of its own choosing ("Eng_UTF8"), so looking the name up in the
// PE section table finds nothing however correct that lookup is.
struct xex_resource {
    std::string name;   // up to 8 characters, as stored, trailing nulls dropped
    uint32_t address{}; // guest address, already absolute
    uint32_t size{};
};

struct xex_info {
    // Container
    uint32_t module_flags{};
    uint32_t pe_offset{};       // start of the (possibly compressed) image body
    uint32_t security_offset{};
    uint32_t header_count{};

    // Placement and execution
    uint32_t image_base{};      // where the image is mapped, typically 0x82000000
    uint32_t entry_point{};
    uint32_t original_base{};   // pre-XEX PE base, usually 0x00400000
    uint32_t image_size{};      // from the security info
    uint32_t default_stack_size{};
    uint32_t default_heap_size{};
    // Bit N set means privilege N (an xe_xex2_system_flags bit, e.g. insecure
    // sockets) is granted. Read by XexCheckExecutablePrivilege.
    uint32_t system_flags{};

    // Identity, from the execution-info header
    uint32_t media_id{};
    uint32_t version{};
    uint32_t base_version{};
    uint32_t title_id{};
    uint8_t platform{};
    uint8_t executable_table{};
    uint8_t disc_number{};
    uint8_t disc_count{};

    // Image body encoding
    xex_encryption encryption{xex_encryption::none};
    xex_compression compression{xex_compression::none};
    // Populated when compression == basic. The image is the concatenation of
    // these runs, so the uncompressed size is the sum of every field.
    std::vector<xex_basic_block> basic_blocks;
    // Present when compression == normal (LZX).
    uint32_t lzx_window_size{};
    uint32_t lzx_first_block_size{};

    // The AES session key as stored in the security info. It is itself
    // encrypted with the console key, so it is kept raw here and unwrapped by
    // the image loader.
    std::vector<uint8_t> wrapped_session_key;

    // The resource table, empty when the title has none.
    std::vector<xex_resource> resources;

    // The TLS template, from the TLS-info header: the kernel gives every
    // thread its own data_size-byte block, copies raw_data_size bytes of the
    // template into it and zero-fills the rest, and the thread's KPCR points
    // at it ([r13+0] - which is how the CRT reaches its per-thread state, so
    // a title whose CRT reads it crashes on the first store when it is left
    // zero. Midnight Club LA's startup does exactly that).
    uint32_t tls_slot_count{};
    uint32_t tls_raw_data_address{}; // guest address of the template, in-image
    uint32_t tls_data_size{};        // per-thread block, raw + zero fill
    uint32_t tls_raw_data_size{};    // bytes copied from the template

    bool has_execution_info{false};
    bool has_file_format_info{false};
    bool has_tls_info{false};
};

// Parses the container headers. `error` is set and false returned when the data
// is not a XEX2 or a header runs past the end of the buffer.
bool parse_xex(const uint8_t* data, std::size_t size, xex_info& info,
               std::string& error);

// Convenience wrapper that reads the file first.
bool parse_xex_file(const std::string& path, xex_info& info, std::string& error);

// True when the buffer starts with the XEX2 magic. Cheap enough for probing a
// directory full of candidate files.
bool is_xex(const uint8_t* data, std::size_t size) noexcept;

} // namespace whitty_xenon
