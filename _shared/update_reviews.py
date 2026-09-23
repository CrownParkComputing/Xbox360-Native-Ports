#!/usr/bin/env python3
"""Write curated launcher descriptions, next steps and Android assessments."""
from pathlib import Path

FAMILY = Path(__file__).resolve().parent.parent

REVIEWS = {
"banjokazooie-recomp": (
"Rare's XBLA remaster of the Nintendo 64 platformer. The recompiled build boots into Spiral Mountain and renders the game world correctly with the Xenos/Vulkan renderer; the experimental native GPU path remains black.",
"Run a full save/load and level-transition soak, then evaluate the complete Xenia 60 FPS timing patch set before offering 60 FPS. Keep Xenos as the supported renderer.",
"Device-proven foundation: an arm64 APK exists and the conversion notes record a Retroid handheld run. Re-test controls, suspend/resume, storage picker, audio latency and sustained thermals on the target device."),
"banjotooie-recomp": (
"Rare's larger XBLA adventure. It reaches the title, rendered game world and attract gameplay with no currently documented Xenos rendering defect.",
"Complete controller, save/load, world-transition and long-session tests. Review the full multi-part Xenia 60 FPS timing fixes before changing native game speed.",
"Android package exists, but this audit found no recorded device play-through. Install on arm64 hardware and verify memory pressure, suspend/resume and input before marking compatible."),
"1.mcla-recomp": (
"Rockstar San Diego's open-world racer, recompiled from the Complete Edition disc. Title, attract mode and free roam work; elapsed-time hooks and runtime upload fixes now keep recent desktop samples above 30 FPS.",
"Soak several districts and races, validate save/DLC paths, and profile remaining CPU-heavy scenes. Preserve the title-specific timing hooks when changing presentation pacing.",
"An arm64 native library builds, but there is no packaged APK and the workload is the heaviest in this library. Direct Vulkan presentation is feasible; performance, memory footprint and thermal throttling make device validation essential."),
"daytona-recomp": (
"SEGA's Daytona USA XBLA release. Boot, menus, circuit selection and a live race are verified with correct HUD and track rendering; the recorded desktop race median is about 58.6 FPS.",
"Finish a full race with a physical controller, verify results/save reload, then run a longer direct-GPU launcher soak and confirm no intermittent texture corruption.",
"The arm64 native library builds but no APK is packaged. This is a strong Android candidate because desktop performance is near 60 FPS; package it and test Vulkan features, audio and sustained race thermals."),
"outrun-recomp": (
"SEGA's OutRun Online Arcade XBLA release. It boots through the SEGA sequence, reaches the front end and enters a race under the Xenos/Vulkan renderer.",
"Perform a complete route play-through, save test, controller test and measured launcher FPS run. The available Xenia patch changes aspect ratio only, so do not invent a 60 FPS timing patch.",
"The arm64 native library builds but no APK exists. Likely a good Android candidate after packaging; validate GLES-free direct Vulkan presentation, audio streaming and heat over a full route."),
"afterburnerclimax-recomp": (
"SEGA's arcade flight game. Stage one renders fully lit with ocean, aircraft and effects. The unified launcher has now received thousands of frames through the desktop direct-GPU stream.",
"Fix the garbled target-marker sprite, complete a stage with real controls, and record delivered FPS plus a clean shutdown soak.",
"The arm64 native library builds without an APK. GPU complexity is moderate; package and test on Vulkan-capable arm64 hardware after the target-marker defect is understood."),
"alienbreed-recomp": (
"Team17's top-down science-fiction action title. The port has imported content and a desktop binary, but no conversion report or unified-launcher play result documents its current gameplay state.",
"Run doctor checks, boot through gameplay, capture representative frames, verify audio/input/save behavior, and write a conversion report before calling it supported.",
"No Android build configuration or artifact was found. Port the current ReXGlue Android CMake template first, then perform a basic arm64 compile and Vulkan feature audit."),
"burnoutrevenge-recomp": (
"Criterion's Xbox 360 racer. It boots and plays; setjmp/longjmp and register-local issues are handled, UI colour and EA Trax playback are fixed, and a headless drive reached a race without logged errors.",
"Validate full races, crash events, save reload and soundtrack transitions in the launcher. Profile the remaining non-native OS calls and confirm direct-GPU pacing under heavy traffic.",
"An arm64 native library builds but no APK is packaged. Expect a demanding workload; package only after desktop launcher validation, then measure RAM, shader compilation and thermal stability."),
"crazytaxi-recomp": (
"SEGA's Crazy Taxi XBLA port. Content and a desktop binary exist, but this tree has no conversion report establishing a verified gameplay state.",
"Boot into an arcade run, verify timer/game-speed coupling, audio, controls, save data and visual correctness, then document performance and known issues.",
"No Android build configuration or artifact was found. Add the shared Android template and prove arm64 compilation before device testing."),
"geometrywars-recomp": (
"Bizarre Creations' original twin-stick XBLA game. Arena, ship, enemies, particles and score HUD render and update correctly with no documented Xenos issue.",
"Run a high-particle score session, verify dual-stick controls, achievements and suspend/resume, and capture sustained frame pacing.",
"An arm64 APK exists. This is one of the best Android candidates; device-test touch/controller mapping, high-particle GPU load and lifecycle handling."),
"geometrywars2-recomp": (
"The expanded twin-stick sequel. A guest exposure-bias fix corrected the initially dark image, and gameplay is verified under the shipping renderer.",
"Soak all modes, stress dense particles, verify multiplayer controllers and achievements, and guard the exposure fix with visual captures.",
"An arm64 APK exists. Strong candidate, subject to device verification of the exposure fix, controller mapping, lifecycle and thermal frame pacing."),
"geometrywars3-recomp": (
"Lucid Games' 3D arena sequel. The title renders and plays through the shared Xenos/Vulkan runtime, with no native console-OS replacements yet.",
"Test campaign progression, 3D stages, dense effects, saves and controller behavior; measure a long gameplay sample and document renderer defects.",
"An arm64 APK exists. Device-test first-launch shader cost, memory use, effects-heavy stages and Android lifecycle behavior."),
"hydrothunder-recomp": (
"Vector Unit's arcade boat racer. Races are playable end-to-end on desktop, though there are occasional jitters, a waterfall buoyancy defect and water colour differs from the intended blue-teal look.",
"Fix or bound the buoyancy state error, compare water rendering against reference captures, then run a full championship and save/load soak.",
"An arm64 APK exists. Device testing is required; water rendering, physics consistency, Vulkan features and sustained thermal performance are the priority risks."),
"pgr4-recomp": (
"Bizarre Creations' disc-based street racer. Assets and a desktop binary exist, but no conversion report in this tree establishes launcher compatibility or a verified race.",
"Run doctor checks and a controlled boot-to-race capture, then document graphics, audio, input, saves and performance before enabling normal support claims.",
"No Android configuration or artifact was found. This is likely a high-load port; establish desktop correctness, then add the Android template and perform an arm64 memory/performance feasibility run."),
"rez-recomp": (
"Rez HD's synchronized wireframe shooter. Levels render in the intended style and conversion notes record correct play on desktop and a device.",
"Complete a full area, verify audio synchronization, controller vibration, saves and achievements, then record the exact proven device/build combination.",
"An arm64 APK exists and device play is recorded. Re-validate with the unified lifecycle, storage and controller layer; it is a leading Android candidate."),
"rru-recomp": (
"Ridge Racer Unbounded, recovered from black-screen and colour-flood failures through codegen, renderer and memory fixes. A full-colour race with HUD, drifting and destruction has been verified.",
"Run full events and save reloads, catalogue remaining visual issues, profile busy destruction scenes, and confirm the shared runner preserves its title-specific settings.",
"An arm64 native library builds without an APK. The workload and past renderer issues make it a later Android target after desktop launcher validation and Vulkan feature checks."),
"sc4-recomp": (
"SoulCalibur IV has assets and a desktop binary, but this tree lacks a conversion report proving menu-to-match behavior in the unified launcher.",
"Boot into a match, verify fighters/stages, controller latency, audio, saves and longjmp behavior, then document any render-path requirements.",
"No Android build configuration or artifact was found. Establish desktop correctness, add the shared Android template, and test an arm64 match before assessing performance."),
"segabass-recomp": (
"SEGA Bass Fishing's XBLA release has imported content and a desktop binary, but no detailed conversion report currently proves a full fishing session.",
"Test cast-to-catch gameplay, analog controls, timing, audio and saves; capture frames and write the missing compatibility report.",
"No Android build configuration or artifact was found. Add the shared Android project and verify input mapping carefully because the fishing controls are central."),
"segarally-recomp": (
"SEGA Rally Online Arcade has imported content and a desktop binary, with no detailed conversion report yet establishing a complete race in this launcher.",
"Boot through a race, validate handling, stage rendering, audio, saves and frame pacing, then document the exact supported configuration.",
"No Android build configuration or artifact was found. After desktop proof, add arm64 packaging and test Vulkan compatibility and sustained race performance."),
"soulcalibur2-recomp": (
"SoulCalibur II HD Online reaches an in-game match with full-detail fighters and stage after shared-memory validity and presentation fixes.",
"Complete arcade matches, test both players, saves and audio, and soak stage transitions while watching for stale textures.",
"An arm64 APK exists. Device-test a full match, controller latency, stage transitions, memory validity and lifecycle behavior before marking supported."),
"spacegiraffe-recomp": (
"Llamasoft's psychedelic XBLA arcade game renders and plays under Xenos/Vulkan. Its HDR image is currently over-bright.",
"Correct HDR/exposure against reference captures, then test a long level sequence, audio synchronization, controls, saves and achievements.",
"The arm64 native library builds but no APK exists. Package after the brightness issue is characterized; mobile display tone mapping is an additional risk."),
"ss-recomp": (
"Black Rock's Split/Second disc racer uses a multi-module recompile. It reaches races with streaming meshes and a warm pipeline cache, while retaining the game's native presentation interval of two.",
"Restore/import verified game content, keep native timing, test full events and power plays, and work through the remaining renderer defects and disabled DLC loader.",
"Android native libraries exist but no APK is packaged, and current game content is missing. Multi-module loading, memory use and effects make this a high-risk device target after desktop revalidation."),
}

for directory, fields in REVIEWS.items():
    target = FAMILY / directory / "game-info/launcher-review.txt"
    target.parent.mkdir(exist_ok=True)
    target.write_text("\n".join(fields) + "\n")
    print(directory)
