# MCLA launcher performance work

The launcher uses one headless game process and displays its exported GPU images.
Closing the launcher now stops that process group. Orphaned games must be cleared
before comparing frame times.

The direct stream uses separate ready and release semaphores, submitted-frame
notifications, external image ownership transfers, and unsignaled initial fences.
Shared-memory readback pauses while the direct consumer is connected. The
launcher redraws at a bounded rate and displays the rate of new received frames.

`src/timing_hooks.cpp` implements the Xenia Canary Complete Edition timing patch
by illusion/boma as two strong overrides; generated originals remain available.
Set `MCLA_60FPS=0` to use the originals. With timing hooks enabled,
`tools/embedded_play.sh` defaults to elapsed-time gameplay without the hidden
compositor's extra presentation waits. `MCLA_UNPACED=0` restores those waits.

The shared runtime's hot-page cache now records actual draw demand separately
from speculative uploads. Unused prefetched pages expire and are invalidated
before returning to watched uploads. This prevents old streaming pools from
being recopied indefinitely.

When a hot streaming pool changes, its invalidation no longer forces unrelated
static vertex streams through the deferred upload path. The Vulkan renderer
checks that exact range is still resident and retains it on the GPU when it is.

Texture descriptor sets are now cached for the full frame as immutable material
bindings. Repeated non-adjacent materials reuse their prior Vulkan descriptor
set rather than issuing another descriptor update; the cache is cleared before
the next frame and descriptors remain valid until GPU completion.

For lightweight FPS logging, launch with `REXMENU_FPS_LOG=1`. For detailed CPU/GPU
frame statistics, set `REX_GPU_FRAME_STATS` to a CSV path; this enables per-draw
timers and is for diagnosis, not normal play. Do not compile during measurements.

A 60 FPS target is enabled, but sustained 60 FPS in heavy city scenes has not
been demonstrated. Compare the same scene and use frame-time tails, not only
average FPS. The live counter counts newly received frames, not launcher redraws.
