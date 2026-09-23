# Hydro Thunder Hurricane - conversion notes

Xbox 360 Live Arcade title 5841096A, recompiled to run natively on ReXGlue 0.10.
19,710 PowerPC functions were translated ahead of time to native x86-64;
the console's graphics command stream and shaders run through a native
Vulkan renderer, and audio through a native mixer.

## Done in this conversion
- Recompiled racing title; the RetroRecomp-derived build plays well on desktop.
- Presentation and page settings tuned so frames present cleanly.
- Ships without game data: you import your own copy of the title.

## State
- Plays: races render and it is playable on desktop (played end to end, a few jitters).

## Known issues
- Boat buoyancy can compute the hull as submerged after the first waterfall.
- Water reads grey-green rather than the arcade's blue-teal.
- Occasional frame-pacing jitter.
- Desktop only: the Android build is not working yet.

## Still open
- No console OS calls answered natively yet (all go through the SDK).
