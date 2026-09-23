# Geometry Wars 3: Dimensions - conversion notes

Xbox 360 Live Arcade title 58411453, recompiled to run natively on ReXGlue 0.10.
22,935 PowerPC functions were translated ahead of time to native x86-64;
the graphics command stream and shaders run through a native Vulkan renderer,
and audio through a native mixer.

## Done in this conversion
- Twin-stick arcade; renders and plays.
- Ships without game data: you import your own copy of the title.

## State
- Plays.

## Still open
- No console OS calls answered natively yet (all go through the SDK).
