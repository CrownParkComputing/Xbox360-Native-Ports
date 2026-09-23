// lzx.h - LZX decompression, for XEX images that use it.
//
// Most XBLA titles ship their image LZX-compressed rather than with the simple
// run-length "basic" scheme, so without this the loader cannot get at their
// code at all. The XEX carries the compressed stream in blocks of
// length-prefixed chunks; concatenating those chunks gives one LZX stream that
// expands to the whole image in a single pass, which is what this does.
//
// Written against the format rather than taken from a library on purpose. The
// obvious dependency, libmspack, is LGPL-2.1, and this runtime is meant to
// stay linkable into a project that does not want that obligation - the same
// reason AES-128 is hand-rolled here.
//
// The format, briefly, so the implementation reads as something other than
// magic: LZX is LZ77 with Huffman-coded literals and matches. Bits are read
// most-significant-first out of 16-bit little-endian words. The stream is a
// series of blocks; each says how many bytes it expands to and which of three
// codings it uses (verbatim, aligned-offset, or stored). Match offsets are
// coded as a "position slot" plus extra bits, and the three most recent
// offsets are kept in an LRU so a repeat costs almost nothing.
#pragma once

#include <cstddef>
#include <cstdint>
#include <string>

namespace whitty_xenon {

// Expands `input` into exactly `output_size` bytes at `output`. `window_size`
// is the LZX window from the XEX header and must be a power of two between
// 32 KiB and 32 MiB. Returns false and sets `error` on a malformed stream -
// including one that runs out of input early, which is how a wrong window size
// or a mis-assembled chunk list shows up.
bool lzx_decompress(const uint8_t* input, std::size_t input_size,
                    uint8_t* output, std::size_t output_size,
                    uint32_t window_size, std::string& error);

} // namespace whitty_xenon
