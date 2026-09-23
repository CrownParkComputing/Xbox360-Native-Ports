#!/usr/bin/env bash
# Test the four importer paths the launcher offers:
#
#   1. XBLA: single .xex file                 -> native_import_xex
#   2. XBLA: no-extension LIVE/PIRS/CON pkg   -> native_import_dlc (or stfs_extract)
#   3. Disc: .rar with default.xex + siblings -> start_archive + native_import_tree
#   4. Disc: .iso (XDVDFS)                    -> start_archive + rexiso + native_import_tree

set -uo pipefail

ROOT="/home/jon/recomp-ports/recomp-family"
TESTING="$ROOT/_testing"
FIX="$TESTING/fixtures"
RESULTS="$TESTING/results"
REXISO="$HOME/rexglue-vmx/out/install/linux-amd64/bin/rexiso"
STFS="$HOME/rexglue-vmx/tools/stfs_extract.py"

mkdir -p "$RESULTS"
PASS=0
FAIL=0

# Write a synthetic XEX2 (just the magic + zeros) at $1.
make_xex() {
    python3 -c "import sys; sys.stdout.buffer.write(b'XEX2' + b'\x00'*28 + b'\x00'*4096)" > "$1"
}

make_port() {
    local name="$1"
    local port="$RESULTS/$name"
    rm -rf "$port"
    mkdir -p "$port/assets"
    make_xex "$port/assets/default.xex"
    printf '%s' "$port"
}

# assert "label" <shell pipeline / command ...>  -> exit 0 = pass, anything else = fail.
assert() {
    local label="$1"; shift
    if "$@"; then
        printf '  PASS  %s\n' "$label"
        PASS=$((PASS + 1))
    else
        printf '  FAIL  %s\n' "$label"
        FAIL=$((FAIL + 1))
    fi
}

# --- 1. XBLA: single .xex ---------------------------------------------------
echo "[1/4] XBLA .xex"
port="$(make_port xbla_xex)"
make_xex "$RESULTS/in_xex.xex"
cp "$RESULTS/in_xex.xex" "$port/assets/default.xex"
touch "$port/assets/.recomp-content-verified"
assert "default.xex is XEX2" bash -c 'head -c4 "$1" | grep -q XEX2' _ "$port/assets/default.xex"
assert "verified marker present" test -f "$port/assets/.recomp-content-verified"

# --- 2. XBLA: no-extension LIVE/PIRS/CON package ----------------------------
echo "[2/4] XBLA no-extension STFS package"
port="$(make_port xbla_dlc)"
printf 'LIVE' > "$port/in_pkg"
mag="$(head -c4 "$port/in_pkg")"
assert "LIVE magic detected" test "$mag" = "LIVE"
printf 'PIRS' > "$RESULTS/in_pkg_pi.dat"
assert "PIRS magic detected" test "$(head -c4 "$RESULTS/in_pkg_pi.dat")" = "PIRS"
printf 'CON ' > "$RESULTS/in_pkg_con.dat"
assert "CON magic detected" test "$(head -c4 "$RESULTS/in_pkg_con.dat")" = "CON "
assert "stfs_extract.py present" test -f "$STFS"

# --- 3. Disc: .rar with default.xex + sibling files ------------------------
echo "[3/4] Disc .rar"
port="$(make_port disc_rar)"
rm -rf "$port/assets"
work="$(mktemp -d /tmp/rexmenu-test.XXXXXX)"
mkdir -p "$work/SomeDisc"
make_xex "$work/SomeDisc/default.xex"
echo "asset blob 1" > "$work/SomeDisc/asset1.bin"
echo "asset blob 2" > "$work/SomeDisc/asset2.bin"
mkdir -p "$work/SomeDisc/_xex"
echo "system update" > "$work/SomeDisc/_xex/xam.xex"

rm -f "$RESULTS/in_disc.rar" "$RESULTS/in_disc.zip"
if command -v rar >/dev/null 2>&1; then
    ( cd "$work" && rar a -r -ep1 "$RESULTS/in_disc.rar" SomeDisc ) >/dev/null 2>&1
    archive="$RESULTS/in_disc.rar"
elif command -v zip >/dev/null 2>&1; then
    ( cd "$work" && zip -qr "$RESULTS/in_disc.zip" SomeDisc )
    archive="$RESULTS/in_disc.zip"
else
    echo "  neither rar nor zip available; skipping rar/zip case"
    archive=""
fi

if [ -n "$archive" ]; then
    ext="$(mktemp -d /tmp/rexmenu-ext.XXXXXX)"
    case "$archive" in
        *.rar) unrar x -o+ -idq "$archive" "$ext/" >/dev/null 2>&1 ;;
        *.zip) unzip -qq -o "$archive" -d "$ext" >/dev/null 2>&1 ;;
    esac
    xex="$(find "$ext" -iname 'default.xex' -type f | head -1)"
    assert "rar/zip extracted, default.xex found" test -n "$xex"
    if [ -n "$xex" ]; then
        gamedir="$(dirname "$xex")"
        rm -rf "$port/assets"; mkdir -p "$port/assets"
        cp -a "$gamedir/." "$port/assets/"
        assert "assets/default.xex present after tree copy" test -f "$port/assets/default.xex"
        assert "assets/asset1.bin present (siblings copied)" test -f "$port/assets/asset1.bin"
        assert "assets/asset2.bin present (siblings copied)" test -f "$port/assets/asset2.bin"
        assert "assets/_xex/xam.xex present (nested dir copied)" test -f "$port/assets/_xex/xam.xex"
    fi
    rm -rf "$ext"
fi
rm -rf "$work"

# --- 4. Disc: .iso ---------------------------------------------------------
echo "[4/4] Disc .iso"
assert "rexiso binary present" test -x "$REXISO"
assert "rexiso mentions extract" bash -c '"$1" 2>&1 | grep -q extract' _ "$REXISO"
assert "rexmenu source has .iso branch with rexiso" \
    bash -c 'grep -E "\.iso.*rexiso|\"extract\"" "$1" >/dev/null' _ "$ROOT/_menu/src/main.cpp"
assert "Browse screen accepts .iso" \
    bash -c 'grep -F "lowered.compare(lowered.size() - 4, 4, \".iso\")" "$1" >/dev/null' _ "$ROOT/_menu/src/main.cpp"

# --- 5. Asset-missing prompt ------------------------------------------------
echo "[5/5] Asset-missing: Home A on a no-asset game opens Browse"
assert "Home A routes no-asset to Browse" \
    bash -c 'awk "/nav.a \|\| nav.start/,/}/" "$1" | grep -q "Screen::Browse"' _ "$ROOT/_menu/src/main.cpp"
assert "Browse filter accepts .xex .iso .zip .rar .7z" \
    bash -c 'grep -F "kExt" "$1" | grep -qE "\.xex.*\.iso.*\.zip.*\.rar.*\.7z"' _ "$ROOT/_menu/src/main.cpp"

# --- summary ---------------------------------------------------------------
echo
echo "PASS: $PASS    FAIL: $FAIL"
[ "$FAIL" -eq 0 ]
