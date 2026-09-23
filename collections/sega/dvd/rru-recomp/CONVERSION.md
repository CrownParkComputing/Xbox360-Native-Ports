# Ridge Racer Unbounded - conversion notes

Converted from the USA disc (Bugbear/Namco 2012, title
4E4D083E) on ReXGlue 0.10. One of the first retail disc titles in the estate -
a raw XEX2 and loose disc files rather than an XBLA package.

## Done in this conversion

- **From a black screen to rendering.** setjmp/longjmp declared in the manifest
  (0x82B8F5C0 / 0x82B8F890); undeclared, the title never presented a frame.
- **Opcode gap fill in the SDK.** This title's code reached PowerPC vector and
  scalar instructions the recompiler did not yet emit; thirty VMX builders and a
  set of scalar ones were added with a hardware-verified test suite, and every
  port since benefits.
- **The red-orange flood fixed.** Three stacked causes: a runaway sun lens flare
  driven by occlusion queries (`query_occlusion_fake_sample_count = 0`), a
  colour-grade lookup texture sampled as its zero-blue plane (fixed in the SDK),
  and auto-exposure that only behaves on the fragment-shader-interlock render
  path (`render_target_path_vulkan = "fsi"`).
- **A shared-memory arena leak** that ended sessions with SIGBUS, fixed in the SDK.
- **Verified in a race**: full-colour racing, HUD, drift and power, collateral
  score. Around 35 frames per second on the reference machine at the time.
- **Presentation** pinned to strict vsync (FIFO) for VRR panels.
- Xbox Live is stripped: the title runs offline, as a console with no cable.

## Still open

- Performance measurement and tuning on the current runtime.
- Native replacements for the console OS calls (none yet - the runtime's
  console layer answers them all).
