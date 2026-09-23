#!/usr/bin/env bash
# Pack the game content into one zip, and restore it.
#
#   tools/content_zip.sh pack      assets/ -> content/<title>-content.zip
#   tools/content_zip.sh restore [zip]   <zip> -> assets/  (default content/*.zip)
#   tools/content_zip.sh verify    check assets/ against the recorded checksums
#
# One archive, not a tree of loose disc files: it imports in a single step when
# rebuilding, and it never enters Git. content/content.sha256 (which IS in Git)
# records the archive's checksum and the file list, so a restored tree can be
# proven to be the right content without shipping the content itself.
#
# Stored, not deflated: disc data is already compressed, so deflate costs
# minutes of CPU to save a few per cent.
set -euo pipefail
ROOT="$(cd -- "$(dirname -- "${BASH_SOURCE[0]}")/.." && pwd)"
TITLE="$(basename "$ROOT" | sed 's/-recomp$//')"
ZIP="$ROOT/content/${TITLE}-content.zip"
SUMS="$ROOT/content/content.sha256"
ACTION="${1:-}"
# restore may be pointed at an archive anywhere - the copy kept beside the
# project is only the default.
[ "${2:-}" ] && ZIP="$2"

case "$ACTION" in
  pack)
    [ -d "$ROOT/assets" ] || { echo "no assets/ to pack" >&2; exit 1; }
    mkdir -p "$ROOT/content"
    rm -f "$ZIP"
    (cd "$ROOT/assets" && zip -0 -r -q "$ZIP" . -x '.recomp-content-verified')
    {
      echo "# $TITLE game content - $(date -u +%Y-%m-%dT%H:%M:%SZ)"
      echo "# archive"
      (cd "$ROOT/content" && sha256sum "$(basename "$ZIP")")
      echo "# files"
      (cd "$ROOT/assets" && find . -type f ! -name '.recomp-content-verified' \
        -exec sha256sum {} + | sort -k2)
    } > "$SUMS"
    echo "packed $(du -h "$ZIP" | cut -f1) -> $ZIP"
    echo "checksums -> $SUMS"
    ;;
  restore)
    [ -f "$ZIP" ] || { echo "no archive at $ZIP" >&2; exit 1; }
    if [ -f "$SUMS" ]; then
      # By hash, not by name: the archive may live anywhere, so the recorded
      # filename means nothing - only the digest does.
      echo "verifying archive"
      want="$(grep -A1 '^# archive$' "$SUMS" | tail -1 | cut -d' ' -f1)"
      got="$(sha256sum "$ZIP" | cut -d' ' -f1)"
      [ "$want" = "$got" ] || {
        echo "archive checksum does not match content.sha256" >&2; exit 1; }
    fi
    mkdir -p "$ROOT/assets"
    unzip -q -o "$ZIP" -d "$ROOT/assets"
    echo "restored into $ROOT/assets"
    "$0" verify
    ;;
  verify)
    # No checksum file is not the same as no content. content.sha256 is a
    # PROOF that assets/ is the right tree; a project packed later, or one
    # scaffolded with --no-pack, has the game in place and nothing to check it
    # against. Treating that as "content missing" sends run.sh asking for an
    # archive that is not needed.
    if [ ! -f "$SUMS" ]; then
      if [ -n "$(find "$ROOT/assets" -maxdepth 1 -iname '*.xex' -print -quit 2>/dev/null)" ]; then
        echo "game content present, unverified - run tools/content_zip.sh pack to record checksums"
        exit 0
      fi
      echo "no $SUMS to verify against" >&2
      exit 1
    fi
    (cd "$ROOT/assets" && sed -n '/^# files$/,$p' "$SUMS" | tail -n +2 | sha256sum -c --quiet -) \
      && echo "game content verified"
    ;;
  *)
    echo "usage: $(basename "$0") pack|restore [zip]|verify" >&2
    exit 2
    ;;
esac
