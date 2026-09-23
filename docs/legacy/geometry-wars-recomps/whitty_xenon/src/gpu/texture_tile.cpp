// The tiled address function is defined in the header: it is called once per
// texel of every texture a frame unpacks, and without link-time optimisation an
// out-of-line call there costs more than the arithmetic it performs. This file
// remains so the library keeps a translation unit for the component - and so
// that a build which drops the header definition still links.
#include "whitty_xenon/gpu/texture_tile.h"

namespace whitty_xenon::gpu {

// Nothing further: see texture_tile.h.

} // namespace whitty_xenon::gpu
