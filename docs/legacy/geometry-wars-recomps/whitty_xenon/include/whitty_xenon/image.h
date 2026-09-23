// image.h - decrypt and decompress a XEX image body into guest memory.
//
// The container tells us where the image belongs and how it is encoded; this
// turns the encoded body into the bytes the guest expects to find at its image
// base. A successfully loaded image begins with an 'MZ' PE header, which is a
// strong end-to-end check: a wrong key or a mis-walked block table produces
// noise, not a valid header.
#pragma once

#include "whitty_xenon/memory.h"
#include "whitty_xenon/xex.h"

#include <cstddef>
#include <cstdint>
#include <string>
#include <vector>

namespace whitty_xenon {

enum class xex_key_kind {
    retail,
    devkit,
};

struct xex_image_load_result {
    uint32_t image_base{};
    uint32_t image_size{};   // bytes actually written into guest memory
    uint32_t entry_point{};
    xex_key_kind key_used{xex_key_kind::retail};
    bool has_pe_header{false}; // the loaded image starts with 'MZ'
};

// Decodes the image body from `file_data` (the whole XEX file) and writes it
// into `memory` at the container's image base, committing pages as needed.
//
// Encryption and compression are both handled; `basic` and `none` compression
// are supported today, `normal` (LZX) is not yet and is reported as such rather
// than silently producing a corrupt image.
bool load_xex_image(const uint8_t* file_data, std::size_t file_size,
                    const xex_info& info, guest_memory& memory,
                    xex_image_load_result& result, std::string& error);

// Same, but decodes into a host buffer instead of guest memory. Useful for
// inspection and for tests that do not want a 4 GiB reservation.
bool decode_xex_image(const uint8_t* file_data, std::size_t file_size,
                      const xex_info& info, std::vector<uint8_t>& image,
                      xex_key_kind& key_used, std::string& error);

// A run of LZX-compressed bytes within the decrypted image body.
struct xex_lzx_chunk {
    uint32_t offset{}; // into the decrypted body
    uint32_t size{};
};

// Walks the block/chunk framing that wraps LZX data and returns the chunks in
// order. The body must already be decrypted, since the framing itself is
// encrypted along with everything else.
//
// The image is a chain of blocks: each block begins with the next block's size
// and hash, followed by chunks, each a big-endian 16-bit length and that many
// bytes. A zero length ends the block's chunks.
bool collect_lzx_chunks(const uint8_t* body, std::size_t body_size,
                        uint32_t first_block_size,
                        std::vector<xex_lzx_chunk>& chunks, std::string& error);

// Decrypts the whole image body in one pass. Used by the compressed paths,
// which have to read framing out of the plaintext before they can decompress.
bool decrypt_image_body(const uint8_t* body, std::size_t body_size,
                        const xex_info& info, xex_key_kind kind,
                        std::vector<uint8_t>& plaintext, std::string& error);

// Unwraps the per-title session key stored in the security info.
void unwrap_session_key(const uint8_t wrapped[16], xex_key_kind kind,
                        uint8_t session_key[16]) noexcept;

} // namespace whitty_xenon
