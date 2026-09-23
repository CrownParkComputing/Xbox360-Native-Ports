# Geometry Wars: Retro Evolved 2 - conversion notes

Xbox 360 Live Arcade title 584108FF, recompiled to run natively on ReXGlue 0.10.
6,029 PowerPC functions were translated ahead of time to native x86-64;
the console's graphics command stream and shaders run through a native
Vulkan renderer, and audio through a native mixer.

## Done in this conversion
- An early build came out too dark; a guest exp-bias fix restored correct brightness.
- Presentation and page settings tuned so frames present cleanly.
- Ships without game data: you import your own copy of the title.

## State
- Plays: confirmed correct in-game after an exposure fix.

## Known issues
- None outstanding on the shipping (Xenos) renderer.

## Still open
- No console OS calls answered natively yet (all go through the SDK).
