#!/usr/bin/env bash
set -euo pipefail
FAMILY="$(cd -- "$(dirname -- "${BASH_SOURCE[0]}")/.." && pwd)"
TITLE="${1:?usage: headless.sh <splitsecond|burnoutrevenge|mcla> [seconds] [input script]}"
shift
case "$TITLE" in
  splitsecond) exec "$FAMILY/ss-recomp/tools/headless_play.sh" "$@" ;;
  burnoutrevenge) exec "$FAMILY/burnoutrevenge-recomp/tools/headless_play.sh" "$@" ;;
  mcla) exec "$FAMILY/1.mcla-recomp/tools/headless_play.sh" "$@" ;;
  *) echo "unknown title: $TITLE" >&2; exit 2 ;;
esac
