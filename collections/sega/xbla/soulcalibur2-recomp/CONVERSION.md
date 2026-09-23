# SoulCalibur II HD Online - conversion notes

Xbox 360 Live Arcade title 58411411, recompiled to run natively on ReXGlue 0.10.
13,083 PowerPC functions were translated ahead of time to native x86-64;
the console's graphics command stream and shaders run through a native
Vulkan renderer, and audio through a native mixer.

## Done in this conversion
- A full-detail in-game frame needed clear_memory_page_state; with it the fighters and stage render correctly.
- Presentation and page settings tuned so frames present cleanly.
- Ships without game data: you import your own copy of the title.

## State
- Plays: reaches an in-game match after two configuration fixes.

## Known issues
- None outstanding on the shipping (Xenos) renderer.

## Still open
- No console OS calls answered natively yet (all go through the SDK).
