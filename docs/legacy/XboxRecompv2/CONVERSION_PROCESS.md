# Original XEX to native build

`convert.sh` is the repository's single front door for known titles:

```sh
./convert.sh /path/to/default.xex
./convert.sh /path/to/signed-stfs-package
./convert.sh /path/to/extracted-game-directory
```

It identifies the title and exact executable revision, selects the matching
reviewed recipe, regenerates the port locally, recompiles PowerPC code to C++
until every mechanical diagnostic is zero, links the native runtime, and prints
the launch command. The user's retail files stay outside Git and are mounted by
the resulting executable at run time.

This is deliberately stricter than matching only a title ID. Two releases of
the same game can move code and data while retaining the same title ID. A
recipe for one revision can compile another revision cleanly and still produce
wrong branches. The image and XEX fingerprints must both match.

## The pipeline

1. **Identify** — decode the XEX header, entry point, image size, helpers, title
   ID, and non-reversible fingerprints.
2. **Select** — find an exact recipe match. Unknown revisions stop here instead
   of pretending to be supported.
3. **Scaffold** — create a clean local port against the current RetroRecomp
   runtime.
4. **Apply learned recipe data** — helper addresses, recovered jump tables, and
   reviewed indirect dispatches.
5. **Recompile to convergence** — no undecodable instructions, dropped
   branches, missing switch cases, or unresolved table disagreements.
6. **Build** — compile the generated translation units and link the native
   Linux runtime.
7. **Emit two products** — a branded standalone directory and a MANX plugin
   bundle. Both use the same recompiled core; the plugin runs it behind the
   device-free process bridge and drains validated title stat writes into the
   MANX leaderboard extension.
8. **Mount owned data** — use the supplied extracted directory directly, or
   extract the user's STFS package into the ignored local build directory.

Generated C++, decoded images, extracted assets, packages, XEX files, and
native binaries are never recipe artifacts and must never be committed.

## Small-to-large validation ladder

The toolkit is proven in increasing complexity rather than beginning with the
largest ports:

| level | titles | purpose |
|---|---|---|
| starter | Geometry Wars 1, Geometry Wars 2 | smallest images; prove identify, recipe matching, recompilation, linking, input, and basic rendering |
| small | Space Giraffe, Jetpac Refuelled | exercise more rendering paths, controller requirements, and asset probing |
| medium | Sonic 4 Episode I/II, Hydro Thunder Hurricane, Geometry Wars 3 | larger engines, audio middleware, extracted-tree behavior, and broader GPU coverage |
| advanced | After Burner Climax, OutRun, Daytona USA, Choplifter HD | difficult render paths, pacing, large images, and shared-engine recovery findings |
| full-system | PGR3, Ridge Racer 6 | disc-style trees, standalone Linux/Android targets, and host/plugin integration |

Image size is only a starting proxy for complexity. A small executable can
still depend on a large retail tree or difficult GPU behavior, so promotion to
the next level requires actual gate and play evidence.

A recipe becomes a v2 product only when `games/<slug>/product.toml` is added
after both outputs pass their gates. Until then it remains preserved and
discoverable, but `convert.sh` stops before an expensive rebuild rather than
claiming that incomplete packaging is a full two-product conversion.

## Dependencies

The default layout places this repository beside `RetroRecomp`. Otherwise set:

```sh
export RETRORECOMP=/path/to/RetroRecomp
```

RetroRecomp in turn locates current XenonRecomp/XenonAnalyse builds. Run
`./convert.sh --identify <input>` to test the reader without building, and
`./convert.sh --list` to show known recipes ordered by decoded image size.
