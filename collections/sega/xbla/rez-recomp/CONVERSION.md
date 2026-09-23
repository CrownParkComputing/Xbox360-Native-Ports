# Rez HD - conversion notes

Xbox 360 Live Arcade title 584108B3, recompiled to run natively on ReXGlue 0.10.
20,014 PowerPC functions were translated ahead of time to native x86-64;
the console's graphics command stream and shaders run through a native
Vulkan renderer, and audio through a native mixer.

## Done in this conversion
- Finished; correct under the Xenos renderer on the first build.
- Presentation and page settings tuned so frames present cleanly.
- Ships without game data: you import your own copy of the title.

## State
- Plays: levels render in Rez's wireframe style; correct on desktop and on device.

## Known issues
- None outstanding on the shipping (Xenos) renderer.

## Still open
- No console OS calls answered natively yet (all go through the SDK).
