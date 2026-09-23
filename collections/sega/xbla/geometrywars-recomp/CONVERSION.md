# Geometry Wars: Retro Evolved - conversion notes

Xbox 360 Live Arcade title 584107ED, recompiled to run natively on ReXGlue 0.10.
3,402 PowerPC functions were translated ahead of time to native x86-64;
the console's graphics command stream and shaders run through a native
Vulkan renderer, and audio through a native mixer.

## Done in this conversion
- Twin-stick arcade; renders and plays correctly from the first build.
- Presentation and page settings tuned so frames present cleanly.
- Ships without game data: you import your own copy of the title.

## State
- Plays: the arena, your ship, enemies, particles and the score HUD all render and update.

## Known issues
- None outstanding on the shipping (Xenos) renderer.

## Still open
- No console OS calls answered natively yet (all go through the SDK).
