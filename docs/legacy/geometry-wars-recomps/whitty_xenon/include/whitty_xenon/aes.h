// aes.h - AES-128 decryption, enough for XEX image loading.
//
// A XEX stores its image encrypted with AES-128-CBC under a per-title session
// key, and that session key is itself wrapped with a fixed console key. Both
// steps need plain AES-128; nothing here needs to be fast, so this is the
// straightforward reference implementation rather than an AES-NI one, and it
// keeps the project free of a crypto dependency.
//
// Correctness is checked against the FIPS-197 known-answer vectors.
#pragma once

#include <cstddef>
#include <cstdint>

namespace whitty_xenon {

inline constexpr std::size_t kAesBlockSize = 16;
inline constexpr std::size_t kAesKeySize = 16;

// The retail key every commercially released title is wrapped with. It is a
// fixed constant of the platform, not a per-console secret.
extern const uint8_t kXexRetailKey[kAesKeySize];
// Devkit builds wrap with an all-zero key.
extern const uint8_t kXexDevkitKey[kAesKeySize];

// Single-block primitives. `input` and `output` may alias.
void aes128_encrypt_block(const uint8_t key[kAesKeySize],
                          const uint8_t input[kAesBlockSize],
                          uint8_t output[kAesBlockSize]) noexcept;
void aes128_decrypt_block(const uint8_t key[kAesKeySize],
                          const uint8_t input[kAesBlockSize],
                          uint8_t output[kAesBlockSize]) noexcept;

// CBC decryption over whole blocks. `iv` is updated in place so a stream can be
// decrypted across several calls - the XEX image is decrypted in pieces as its
// compression blocks are walked, and the chain continues between them.
// Returns false when `size` is not a multiple of the block size.
bool aes128_cbc_decrypt(const uint8_t key[kAesKeySize],
                        uint8_t iv[kAesBlockSize], const uint8_t* input,
                        uint8_t* output, std::size_t size) noexcept;

} // namespace whitty_xenon
