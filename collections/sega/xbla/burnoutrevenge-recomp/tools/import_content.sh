#!/usr/bin/env bash
# Ask the user for their own copy of the game and import it into assets/.
#
#   tools/import_content.sh            GUI if a display is reachable, else TTY
#   tools/import_content.sh <path>     import that path, no prompting
#   tools/import_content.sh --check    exit 0 if the content is already good
#
# A port is distributable without the game: the binary and the checksums ship,
# the disc does not. This is the step that asks the person running it to point
# at the rip they already own, and it accepts the shapes a rip actually comes
# in rather than insisting on one:
#
#   - a .rar/.zip/.7z holding a DISC TREE          (default.xex + folders)
#   - a .rar/.zip/.7z holding an STFS PACKAGE      (XBLA; one big LIVE/CON/PIRS file)
#   - a .iso DISC IMAGE                            (XDVDFS, as ripped from the disc)
#   - an already-extracted folder of either shape
#   - the port's own <title>-content.zip from a previous import
#
# Both archive shapes are common in the wild for the same title, and the STFS
# one is not a disc tree at all until it is extracted - handing that folder
# straight to the runtime gives "no default.xex" and looks like a bad rip when
# it is merely a different container.
set -uo pipefail

ROOT="$(cd -- "$(dirname -- "${BASH_SOURCE[0]}")/.." && pwd)"
TITLE="$(basename "$ROOT" | sed 's/-recomp$//')"
SLUG="$TITLE"
# Dialogs carry the game's name, not the folder slug.
NAME="$(sed -n 's/^window_title = "\(.*\)"$/\1/p' "$ROOT/config/$SLUG.toml" 2>/dev/null | head -1)"
[ -n "$NAME" ] && TITLE="$NAME"
SDK="${REXSDK_DIR:-/home/jon/recomp-ports/recomp-family/_library/rexglue-vmx}"
STFS="$ROOT/tools/stfs_extract.py"; [ -f "$STFS" ] || STFS="$SDK/tools/stfs_extract.py"
# rexiso reads a disc image with the runtime's own XDVDFS reader; it ships next to the launcher.
REXISO="$ROOT/rexiso"; [ -x "$REXISO" ] || REXISO="$SDK/out/install/linux-amd64/bin/rexiso"

have_gui() { [ -n "${DISPLAY:-}${WAYLAND_DISPLAY:-}" ] && command -v zenity >/dev/null 2>&1; }
say()  { if have_gui; then zenity --info --no-wrap --title="$TITLE" --text="$1" 2>/dev/null; else echo "$1"; fi; }
fail() { if have_gui; then zenity --error --no-wrap --title="$TITLE" --text="$1" 2>/dev/null; else echo "$1" >&2; fi; exit 1; }

content_ok() { "$ROOT/tools/content_zip.sh" verify >/dev/null 2>&1; }

if [ "${1:-}" = "--check" ]; then content_ok && exit 0 || exit 1; fi
if content_ok; then echo "game content already installed"; exit 0; fi

SRC="${1:-}"

# ---------------------------------------------------------------- ask --------
if [ -z "$SRC" ]; then
  if have_gui; then
        RECOMMENDED=""
    if [ -s "$ROOT/content/SOURCE.txt" ]; then
      RECOMMENDED="Expected source: $(head -1 "$ROOT/content/SOURCE.txt")\n$(tail -n +2 "$ROOT/content/SOURCE.txt" | tr '\n' ' ')\n\n"
    fi
CHOICE=$(zenity --list --title="$TITLE - import your game" --width=560 --height=260 \
      --text="${RECOMMENDED}$TITLE needs your own copy of the game.\n\nNothing is downloaded and nothing leaves this machine - the files are copied into this folder so the port can run." \
      --radiolist --column="" --column="Where is it?" \
      TRUE "An archive or disc image  (.rar / .zip / .7z / .iso)" \
      FALSE "A folder    (already extracted)" 2>/dev/null) || exit 1
    case "$CHOICE" in
      An*) SRC=$(zenity --file-selection --title="Select the game archive" \
                 --file-filter="Game archives and disc images | *.rar *.RAR *.zip *.ZIP *.7z *.7Z *.iso *.ISO" \
                 --file-filter="All files | *" 2>/dev/null) || exit 1 ;;
      *)   SRC=$(zenity --file-selection --directory --title="Select the extracted game folder" 2>/dev/null) || exit 1 ;;
    esac
  else
    [ -s "$ROOT/content/SOURCE.txt" ] && { echo "Expected source: $(head -1 "$ROOT/content/SOURCE.txt")"; tail -n +2 "$ROOT/content/SOURCE.txt"; }
    echo "$TITLE needs your own copy of the game."
    echo "Give a folder, a .rar/.zip/.7z, or a .iso disc image - disc tree or XBLA package both work."
    read -r -p "Path: " SRC || exit 1
  fi
fi
SRC="${SRC/#\~/$HOME}"
[ -e "$SRC" ] || fail "Nothing at:\n$SRC"

WORK=""; cleanup() { [ -n "$WORK" ] && rm -rf "$WORK"; }; trap cleanup EXIT

progress() {  # keep the window alive while a long step runs
  if have_gui; then zenity --progress --pulsate --auto-close --no-cancel \
      --title="$TITLE" --text="$1" 2>/dev/null & echo $!; else echo "$1" >&2; echo ""; fi
}
stop_progress() { [ -n "${1:-}" ] && kill "$1" 2>/dev/null; return 0; }

# ------------------------------------------------------------- extract -------
TREE="$SRC"
if [ -f "$SRC" ]; then
  # Our own packed archive is the fast path: content_zip.sh checks it by digest
  # and unpacks it straight into assets/.
  case "$SRC" in
    *"$TITLE-content.zip")
      P=$(progress "Restoring $(basename "$SRC")...")
      "$ROOT/tools/content_zip.sh" restore "$SRC" >/dev/null 2>&1
      stop_progress "$P"
      content_ok && { say "$TITLE is ready to play."; exit 0; }
      fail "That archive did not match this port's checksums." ;;
  esac
  case "${SRC,,}" in *.iso) [ -x "$REXISO" ] || fail "rexiso is missing next to the launcher, so a .iso cannot be read.\nExtract the image yourself and import the folder instead." ;; esac
  WORK="$(mktemp -d "${TMPDIR:-/tmp}/rexglue-import.XXXXXX")"
  P=$(progress "Extracting $(basename "$SRC")...\nA disc rip can take a few minutes.")
  case "${SRC,,}" in
    *.rar) unrar x -o+ -idq "$SRC" "$WORK/" >/dev/null 2>&1 ;;
    *.zip) unzip -qq -o "$SRC" -d "$WORK" >/dev/null 2>&1 ;;
    *.7z)  7z x -y -bso0 -bsp0 -o"$WORK" "$SRC" >/dev/null 2>&1 ;;
    *.iso) "$REXISO" extract "$SRC" "$WORK" >/dev/null 2>&1 ;;
    *)     7z x -y -bso0 -bsp0 -o"$WORK" "$SRC" >/dev/null 2>&1 ;;
  esac
  stop_progress "$P"
  [ -n "$(ls -A "$WORK" 2>/dev/null)" ] || fail "Could not extract:\n$(basename "$SRC")"
  TREE="$WORK"
fi

# --------------------------------------------------- disc tree or package ----
# A disc tree has default.xex somewhere in it. An XBLA package does not: it is
# one big file whose first four bytes are LIVE, CON or PIRS.
XEX="$(find "$TREE" -iname 'default.xex' -type f 2>/dev/null | head -1)"
if [ -z "$XEX" ]; then
  PKG="$(find "$TREE" -type f -size +1M 2>/dev/null | while read -r f; do
           case "$(head -c4 "$f" 2>/dev/null)" in LIVE|CON\ |PIRS) echo "$f"; break;; esac; done)"
  [ -n "$PKG" ] || fail "That does not look like a game rip.\n\nExpected a disc tree with default.xex, or an XBLA package."
  [ -f "$STFS" ] || fail "stfs_extract.py not found - set REXSDK_DIR to the SDK."
  OUTDIR="$(mktemp -d "${TMPDIR:-/tmp}/rexglue-stfs.XXXXXX")"
  P=$(progress "Unpacking the XBLA package...")
  python3 "$STFS" extract "$PKG" "$OUTDIR" >/dev/null 2>&1
  stop_progress "$P"
  XEX="$(find "$OUTDIR" -iname 'default.xex' -type f 2>/dev/null | head -1)"
  [ -n "$XEX" ] || { rm -rf "$OUTDIR"; fail "The package unpacked but held no default.xex."; }
  [ -n "$WORK" ] && rm -rf "$WORK"
  WORK="$OUTDIR"
  TREE="$OUTDIR"
fi
GAMEDIR="$(dirname "$XEX")"

# ------------------------------------------------------------- install -------
P=$(progress "Copying the game files...")
mkdir -p "$ROOT/assets"
# Replace, do not merge: a half-imported tree from an earlier attempt would
# otherwise pass a file count and fail at runtime in a way nothing explains.
rm -rf "${ROOT:?}/assets"; mkdir -p "$ROOT/assets"
cp -a "$GAMEDIR/." "$ROOT/assets/" 2>/dev/null
stop_progress "$P"

if content_ok; then
  say "$TITLE is ready to play."
  exit 0
fi

# Checksums exist to prove a restored tree is the RIGHT content. A mismatch is
# worth saying plainly - a different region or revision usually still runs, so
# this is a warning and not a refusal.
if [ -f "$ROOT/content/content.sha256" ] && [ -f "$ROOT/assets/default.xex" ]; then
  if have_gui; then
    zenity --question --no-wrap --title="$TITLE" \
      --text="Imported, but the files do not match the checksums this port was built from.\n\nUsually a different region or revision. It will probably still run.\n\nKeep it and start anyway?" 2>/dev/null \
      && { touch "$ROOT/assets/.recomp-content-verified" 2>/dev/null; exit 0; }
    exit 1
  fi
  echo "warning: content does not match content.sha256 (different region or revision?)"
  touch "$ROOT/assets/.recomp-content-verified" 2>/dev/null
  exit 0
fi
fail "Import failed - no default.xex ended up in assets/."
