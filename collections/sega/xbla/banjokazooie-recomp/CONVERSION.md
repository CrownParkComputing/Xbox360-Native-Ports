# Banjo-Kazooie - conversion notes

Xbox 360 Live Arcade title 58410954, recompiled to run natively on ReXGlue 0.10.
13,492 PowerPC functions were translated ahead of time to native x86-64;
the console's graphics command stream and shaders run through a native
Vulkan renderer, and audio through a native mixer.

## Done in this conversion
- Native PowerPC recompilation; runs on desktop and on a Retroid handheld from this build.
- Presentation and page settings tuned so frames present cleanly.
- Ships without game data: you import your own copy of the title.

## State
- Plays: boots into Spiral Mountain and the game world renders.

## Known issues
- The experimental native GPU backend presents black; the launcher ships the Xenos renderer, which is correct.

## Still open
- No console OS calls answered natively yet (all go through the SDK).
