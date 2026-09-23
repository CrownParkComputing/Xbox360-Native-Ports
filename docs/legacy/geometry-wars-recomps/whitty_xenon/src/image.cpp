#include "whitty_xenon/image.h"

#include "whitty_xenon/lzx.h"

#include <cstdio>
#include <cstdlib>

#include "whitty_xenon/aes.h"

#include <cstring>

namespace whitty_xenon {
namespace {

// A loaded image is a PE, so it starts with the DOS 'MZ' signature. This is the
// cheapest honest check that the key and the block walk were both right.
bool starts_with_pe_header(const std::vector<uint8_t>& image) noexcept {
    return image.size() >= 2 && image[0] == 'M' && image[1] == 'Z';
}

// Decrypts `size` bytes of the body in place, continuing the CBC chain in `iv`.
// AES works on whole blocks; a trailing partial block is copied through, which
// matches how the container stores a final short run.
bool decrypt_run(const uint8_t* session_key, uint8_t iv[kAesBlockSize],
                 uint8_t* data, std::size_t size) noexcept {
    const std::size_t whole = size & ~(kAesBlockSize - 1);
    if (whole && !aes128_cbc_decrypt(session_key, iv, data, data, whole))
        return false;
    return true;
}

} // namespace

void unwrap_session_key(const uint8_t wrapped[16], xex_key_kind kind,
                        uint8_t session_key[16]) noexcept {
    // The stored key is one AES block encrypted under the console key, so a
    // single-block decrypt recovers it.
    const uint8_t* console_key =
        kind == xex_key_kind::devkit ? kXexDevkitKey : kXexRetailKey;
    aes128_decrypt_block(console_key, wrapped, session_key);
}

bool decrypt_image_body(const uint8_t* body, std::size_t body_size,
                        const xex_info& info, xex_key_kind kind,
                        std::vector<uint8_t>& plaintext, std::string& error) {
    plaintext.assign(body, body + body_size);
    if (info.encryption != xex_encryption::normal) return true;
    if (info.wrapped_session_key.size() != kAesKeySize) {
        error = "encrypted image has no session key";
        return false;
    }
    uint8_t session_key[kAesKeySize] = {0};
    unwrap_session_key(info.wrapped_session_key.data(), kind, session_key);
    uint8_t iv[kAesBlockSize] = {0};
    if (!decrypt_run(session_key, iv, plaintext.data(), plaintext.size())) {
        error = "could not decrypt the image body";
        return false;
    }
    return true;
}

bool collect_lzx_chunks(const uint8_t* body, std::size_t body_size,
                        uint32_t first_block_size,
                        std::vector<xex_lzx_chunk>& chunks,
                        std::string& error) {
    chunks.clear();
    if (!body || body_size == 0) {
        error = "no image body to walk";
        return false;
    }
    // Each block opens with the next block's size and a 20-byte hash.
    constexpr uint32_t kBlockHeaderSize = 24;

    std::size_t block_offset = 0;
    uint32_t block_size = first_block_size;
    while (block_size != 0) {
        if (block_size < kBlockHeaderSize ||
            block_offset + block_size > body_size) {
            error = "compression block runs past the end of the image";
            return false;
        }
        const std::size_t block_end = block_offset + block_size;
        const uint8_t* block = body + block_offset;

        const uint32_t next_block_size =
            (static_cast<uint32_t>(block[0]) << 24) |
            (static_cast<uint32_t>(block[1]) << 16) |
            (static_cast<uint32_t>(block[2]) << 8) |
            static_cast<uint32_t>(block[3]);

        std::size_t cursor = block_offset + kBlockHeaderSize;
        while (true) {
            if (cursor + 2 > block_end) {
                error = "chunk length runs past the end of its block";
                return false;
            }
            const uint32_t chunk_size =
                (static_cast<uint32_t>(body[cursor]) << 8) |
                static_cast<uint32_t>(body[cursor + 1]);
            cursor += 2;
            if (chunk_size == 0) break; // end of this block's chunks
            if (cursor + chunk_size > block_end) {
                error = "chunk runs past the end of its block";
                return false;
            }
            chunks.push_back(
                xex_lzx_chunk{static_cast<uint32_t>(cursor), chunk_size});
            cursor += chunk_size;
        }

        block_offset = block_end;
        block_size = next_block_size;
    }
    if (chunks.empty()) {
        error = "image has no compressed chunks";
        return false;
    }
    return true;
}

bool decode_xex_image(const uint8_t* file_data, std::size_t file_size,
                      const xex_info& info, std::vector<uint8_t>& image,
                      xex_key_kind& key_used, std::string& error) {
    image.clear();
    if (!file_data || file_size == 0) {
        error = "no XEX data to decode";
        return false;
    }
    if (info.pe_offset >= file_size) {
        error = "image body starts past the end of the file";
        return false;
    }
    if (info.compression == xex_compression::delta) {
        error = "delta-patched images are not supported";
        return false;
    }
    if (info.encryption == xex_encryption::normal &&
        info.wrapped_session_key.size() != kAesKeySize) {
        error = "encrypted image has no session key";
        return false;
    }

    const uint8_t* body = file_data + info.pe_offset;
    const std::size_t body_size = file_size - info.pe_offset;

    // Retail titles are the common case; a devkit build wraps with a zero key.
    // Both are tried and the one that yields a PE header wins, which avoids
    // guessing from flags that titles do not set consistently.
    const xex_key_kind candidates[] = {xex_key_kind::retail,
                                       xex_key_kind::devkit};
    const std::size_t attempts =
        info.encryption == xex_encryption::normal ? 2u : 1u;

    for (std::size_t attempt = 0; attempt < attempts; ++attempt) {
        const xex_key_kind kind = candidates[attempt];
        uint8_t session_key[kAesKeySize] = {0};
        if (info.encryption == xex_encryption::normal)
            unwrap_session_key(info.wrapped_session_key.data(), kind,
                               session_key);

        uint8_t iv[kAesBlockSize] = {0};
        std::vector<uint8_t> decoded;

        if (info.compression == xex_compression::normal) {
            // The compressed stream is encrypted as one run, so it has to be
            // decrypted before the block structure is even readable. The
            // blocks are framing only: concatenating every chunk they hold
            // gives a single LZX stream covering the whole image.
            std::vector<uint8_t> compressed(body, body + body_size);
            if (info.encryption == xex_encryption::normal &&
                !decrypt_run(session_key, iv, compressed.data(),
                             compressed.size())) {
                error = "could not decrypt the image body";
                return false;
            }
            if (const char* dump = std::getenv("WHITTY_BODY_DUMP")) {
                std::FILE* f = std::fopen(dump, "wb");
                if (f) { std::fwrite(compressed.data(), 1, compressed.size(), f); std::fclose(f); }
            }
            std::vector<xex_lzx_chunk> chunks;
            std::string chunk_error;
            if (!collect_lzx_chunks(compressed.data(), compressed.size(),
                                    info.lzx_first_block_size, chunks,
                                    chunk_error)) {
                // A wrong key turns the block table into noise, so on the
                // first attempt this is a signal to try the other key rather
                // than a failure.
                if (attempt + 1 < attempts) continue;
                error = chunk_error;
                return false;
            }
            std::vector<uint8_t> stream;
            for (const xex_lzx_chunk& chunk : chunks)
                stream.insert(stream.end(), compressed.data() + chunk.offset,
                              compressed.data() + chunk.offset + chunk.size);

            if (const char* dump = std::getenv("WHITTY_LZX_DUMP")) {
                std::FILE* f = std::fopen(dump, "wb");
                if (f) { std::fwrite(stream.data(), 1, stream.size(), f); std::fclose(f); }
            }
            decoded.assign(info.image_size, 0);
            if (!lzx_decompress(stream.data(), stream.size(), decoded.data(),
                                decoded.size(), info.lzx_window_size,
                                chunk_error)) {
                if (attempt + 1 < attempts) continue;
                error = chunk_error;
                return false;
            }
        } else if (info.compression == xex_compression::none) {
            decoded.assign(body, body + body_size);
            if (info.encryption == xex_encryption::normal &&
                !decrypt_run(session_key, iv, decoded.data(), decoded.size())) {
                error = "could not decrypt the image body";
                return false;
            }
        } else {
            // Basic compression: walk the run table, copying data and emitting
            // zero fill. The AES chain runs across the data runs only.
            if (info.basic_blocks.empty()) {
                error = "basic-compressed image has no block table";
                return false;
            }
            std::size_t offset = 0;
            for (const xex_basic_block& run : info.basic_blocks) {
                if (offset + run.data_size > body_size) {
                    error = "basic compression run reads past the end of the "
                            "file";
                    return false;
                }
                const std::size_t start = decoded.size();
                decoded.insert(decoded.end(), body + offset,
                               body + offset + run.data_size);
                if (info.encryption == xex_encryption::normal &&
                    !decrypt_run(session_key, iv, decoded.data() + start,
                                 run.data_size)) {
                    error = "could not decrypt an image run";
                    return false;
                }
                decoded.resize(decoded.size() + run.zero_size, 0);
                offset += run.data_size;
            }
        }

        if (info.encryption != xex_encryption::normal ||
            starts_with_pe_header(decoded)) {
            key_used = kind;
            image = std::move(decoded);
            return true;
        }
    }

    error = "image did not decrypt to a PE header with the retail or devkit key";
    return false;
}

bool load_xex_image(const uint8_t* file_data, std::size_t file_size,
                    const xex_info& info, guest_memory& memory,
                    xex_image_load_result& result, std::string& error) {
    result = xex_image_load_result{};
    if (!memory.initialized()) {
        error = "guest memory is not initialized";
        return false;
    }
    if (info.image_base == 0) {
        error = "container does not say where to map the image";
        return false;
    }

    std::vector<uint8_t> image;
    xex_key_kind key_used = xex_key_kind::retail;
    if (!decode_xex_image(file_data, file_size, info, image, key_used, error))
        return false;
    if (image.empty()) {
        error = "decoded image is empty";
        return false;
    }

    // The security info's image size covers the mapped region, which can be
    // larger than the decoded bytes (trailing pages are zero). Commit the
    // larger of the two so the guest sees the whole image.
    const uint64_t mapped =
        info.image_size > image.size() ? info.image_size : image.size();
    if (static_cast<uint64_t>(info.image_base) + mapped > kAddressSpaceSize) {
        error = "image does not fit in the guest address space";
        return false;
    }
    if (!memory.commit(info.image_base, static_cast<uint32_t>(mapped), error))
        return false;
    if (!memory.zero_block(info.image_base, static_cast<uint32_t>(mapped))) {
        error = "could not clear the image region";
        return false;
    }
    if (!memory.write_block(info.image_base, image.data(),
                            static_cast<uint32_t>(image.size()))) {
        error = "could not write the image into guest memory";
        return false;
    }

    result.image_base = info.image_base;
    result.image_size = static_cast<uint32_t>(image.size());
    result.entry_point = info.entry_point;
    result.key_used = key_used;
    result.has_pe_header = starts_with_pe_header(image);
    return true;
}

} // namespace whitty_xenon
