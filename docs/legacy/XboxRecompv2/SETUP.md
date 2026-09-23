# XboxRecomp v2 setup

This guide takes an original, matching Xbox 360 XEX or STFS package to both
local products and installs the plugin into MANX. Nothing downloaded from this
repository is a game: you must supply your own copy.

## 1. Check out the three source projects

Keep the repositories beside one another so the defaults work:

```text
<workspace>/
  XboxRecompv2/
  RetroRecomp/
  MANX/
```

Required host tools are Git, Python 3.11 or newer, CMake, Ninja or Make, and a
C++20 compiler. Build RetroRecomp and MANX according to their own platform
guides before converting a title. Alternatively set `RETRORECOMP` and
`MANX_SDK_INCLUDE` to non-default checkout locations.

## 2. Identify without building

```sh
cd XboxRecompv2
./convert.sh --identify /path/to/default.xex
./convert.sh --list
```

Identification records only non-reversible fingerprints. Conversion proceeds
only when the title id and both executable fingerprints exactly match a
reviewed recipe. Another regional or patched executable is refused.

## 3. Build both products

The promoted v2 set is Geometry Wars 1, 2 and 3, Sonic the Hedgehog 4 Episode
I, SoulCalibur and Hydro Thunder Hurricane:

```sh
./convert.sh /path/to/default.xex
# or an XBLA package:
./convert.sh /path/to/584108FF/000D0000/<package-file>
```

The output is local and ignored by Git:

```text
build/<slug>/products/standalone/<slug>/
build/<slug>/products/manx/<slug>/
```

The standalone directory contains the Crown Park launcher, native core and a
pointer to the supplied game tree. The MANX directory contains the plugin ABI
adapter, the same native core, product metadata and the owned-data pointer.
Neither directory is redistributable because its native core was derived from
the supplied XEX.

## 4. Install into MANX

Build and install in one command:

```sh
./convert.sh /path/to/default.xex --install-manx
```

The default destination is:

- Linux: `${XDG_DATA_HOME:-$HOME/.local/share}/MANX/games/<slug>`
- Windows: `%LOCALAPPDATA%\MANX\games\<slug>`

Override it when testing another MANX data root:

```sh
./convert.sh /path/to/default.xex \
  --manx-games-dir /path/to/MANX/games
```

MANX scans that directory at startup. Every installed promoted title appears
on the **X360 Recomp** shelf; there is no hard-coded launcher list to update.

## 5. Enable MANX Online leaderboards

The original title calls `XSessionWriteStats`. RetroRecomp validates the view,
ranked property and direction against the signed SPA/XDBF embedded in the XEX.
The plugin drains only those validated events into MANX's stats extension, and
MANX writes the signed-in account's best value to Firestore.

GW1, GW2 and GW3 currently enable this route. Sonic 4 Episode I, SoulCalibur
and Hydro Thunder ship with it disabled until their multi-property catalogues
and per-view min/max/overwrite rules are represented exactly; they remain
fully usable as standalone and MANX products in the meantime.

Deploy the rules and seed the immutable title catalogues from the
`CrownParkComputing/MANXOnline` checkout:

```sh
cd ../MANXOnline
npm install
npm test
npm run rules

export MANX_FIREBASE_API_KEY=...
export MANX_FIREBASE_APP_ID=...
export MANX_FIREBASE_AUTH_EMAIL=...
export MANX_FIREBASE_AUTH_PASSWORD=...
npm run seed:leaderboards
```

The account used by the seed command is an ordinary MANX account;
the script uses no service-account key and stores no credentials. See that
repository's `DEPLOYMENT.md` for Firebase Auth, Firestore and Coolify setup.

Sign into MANX before playing. A completed score write is redirected through
the plugin stats ABI to MANX Online, and the website's **Online leaderboards**
page displays GW1, GW2, GW3 and RR6 boards. Results remain labelled unverified
until a trusted replay verifier exists.

## Verification and troubleshooting

```sh
python3 -m unittest discover -s tests -v
python3 tools/audit_repository.py
```

If a title is identified but has no `product.toml`, its recipe is preserved but
has not passed the v2 two-product gate. If a plugin does not appear, start MANX
from a terminal: it prints the rejected library and ABI reason. If scores remain
local, confirm MANX is signed in, the updated Firestore rules and catalogues are
deployed, and the title actually completed a run that calls
`XSessionWriteStats`.
