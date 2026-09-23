// texture_read.h - a title's texture, as a host image.
//
// A texture fetch constant names an address, a format and a size; the pixels
// behind it are laid out the way the console's memory controller wants, not the
// way a host GPU does. Three conversions stand between them, and every one is
// silent when wrong - a mis-swizzled texture still uploads and still draws,
// just with its pixels or its channels somewhere else:
//
//   - TILING. Most textures are stored tiled, so a block's address is a
//     swizzle of its coordinates rather than row-major. texture_tile.h has the
//     address function; this walks it.
//   - BYTE ORDER. A texel is a word stored in the console's byte order, and
//     which order that is comes from the fetch constant's own endianness field
//     rather than from the format. Undoing it is what puts the components in
//     the bit positions the format describes.
//   - CHANNEL ORDER. Within that word the FIRST component sits in the LOW bits,
//     whichever way round the format's name reads, and the fetch constant's
//     swizzle then says which of those components each sampled channel takes.
//     The two together are how a title's ARGB surface samples as RGBA: for
//     Geometry Wars' 8:8:8:8 textures the swap is 8in32 and the swizzle is
//     bgra, which resolves to memory holding A, R, G, B in that order.
//
// Both of those last two are read from the fetch constant rather than assumed,
// because a format alone does not determine them.
//
// Block-compressed formats (DXT1, DXT2/3, DXT4/5, DXN, DXT3A, DXT5A) are
// DECODED HERE to RGBA8 like everything else, not handed to the host still
// compressed. There is nowhere to hand them: `host_texture` below has one
// payload field and it is RGBA8, so a compressed handover is not a switch to
// flip but a second representation to carry. The reasoning is at the head of
// the block-compressed section in texture_read.cpp, and the cost is measured -
// on Hydro Thunder 48 of 51 textures in a frame are block-compressed, which is
// 67.38 MB as RGBA8 against 16.58 MB native, and 1.66 ms/frame of decoding that
// the decode cache absorbs almost entirely.
//
// (This comment used to say the opposite. It was wrong from the day the decoder
// landed, and a header stating the reverse of the code it describes is the
// project's own recurring bug class wearing a different hat: something
// plausible reporting the state of something nobody re-read.)
#pragma once

#include "whitty_xenon/gpu/register_file.h"
#include "whitty_xenon/memory.h"

#include <cstdint>
#include <vector>

namespace whitty_xenon::gpu {

// A texture converted for upload.
struct host_texture {
    uint32_t width{0};
    uint32_t height{0};
    std::vector<uint8_t> rgba; // tightly packed, width*height*4
    bool valid{false};
    // The guest bytes these pixels were decoded FROM: the whole span the reads
    // touched, at the virtual address they were read at. Reported rather than
    // left implicit because a caller that wants to skip decoding this texture
    // again has to know whether the source still holds the same bytes, and the
    // span is worked out here from the pitch, the packed-mip offset and the
    // block size - reconstructing it outside would be the same arithmetic in
    // two places, where the copy that drifted would serve stale pixels.
    uint32_t source_address{0};
    uint32_t source_bytes{0};
};

// Reads the texture a fetch constant describes out of guest memory and converts
// it to RGBA8. Returns an invalid texture for anything not understood rather
// than guessing - a wrong guess here is a wrong picture with no error.
host_texture read_texture(guest_memory& memory,
                          const texture_fetch_constant& fetch);

} // namespace whitty_xenon::gpu
