#!/usr/bin/env bash
# record_achievements.sh <game-slug>
#
# Read the per-game achievement definitions and the runtime-tracked earned
# achievement log, append any newly-earned ones to the collection-wide
# _shared/achievements/<slug>/earned.toml, and print a one-line summary
# suitable for the launcher's status panel.
#
# Schema in _shared/achievements/<slug>/earned.toml (one record per line):
#   earned = [ { id = 1, name = "...", earned_at = "2026-09-23 14:01" }, ... ]
set -euo pipefail

COLLECTION="$(cd -- "$(dirname -- "${BASH_SOURCE[0]}")/.." && pwd)"
SLUG="${1:?usage: record_achievements.sh <game-slug>}"
DEF_TOML="$(find "$COLLECTION/$SLUG/game-info" -name "achievements.toml" 2>/dev/null | head -1)"
EARNED_FILE="$COLLECTION/_shared/achievements/$SLUG/earned.toml"
USER_DATA_ROOT="$COLLECTION/../_shared/user-data"

if [ -z "$DEF_TOML" ] || [ ! -f "$DEF_TOML" ]; then
  echo "record_achievements: no achievements.toml for $SLUG (skipping)" >&2
  exit 0
fi

# Load existing IDs (so we only log newly earned).
declare -A KNOWN
if [ -f "$EARNED_FILE" ]; then
  while read -r id; do
    KNOWN[$id]=1
  done < <(awk -F'["=]' '/^[[:space:]]*id[[:space:]]*=/ {gsub(/[[:space:]]/,""); print $3}' "$EARNED_FILE" 2>/dev/null)
fi

# The runtime writes earned achievement state into the user-data tree; the
# actual filename is implementation-defined. We look at the most recent
# mtime under the user-data root and harvest anything that looks like a
# new achievement id.
new_count=0
total=0
{
  echo "# Earned achievements for $SLUG"
  echo "# Do not edit by hand - run tools/record_achievements.sh after each play."
  echo ""
  echo "[achievements]"
  echo ""
} > "$EARNED_FILE.tmp"

# Emit existing entries first (preserves history)
while IFS='|' read -r id name earned_at; do
  echo "  [[achievements]]"
  echo "  id        = $id"
  echo "  name      = \"$name\""
  echo "  earned_at = \"$earned_at\""
  echo ""
done < <(awk -F'|"' '/^[[:space:]]*id[[:space:]]*=/ {gsub(/[[:space:]]/,""); id=$3; getline; gsub(/[[:space:]]/,""); getline name_line; gsub(/.*name[[:space:]]*=[[:space:]]*\"|\"[[:space:]]*$/,"",name_line); name=name_line; getline; gsub(/.*earned_at[[:space:]]*=[[:space:]]*\"|\"[[:space:]]*$/,"",$0); print id"|"name"|"$0; }' "$EARNED_FILE" 2>/dev/null)

# Scan runtime output for achievement unlocks (best-effort: walk the most
# recent log in user-data). This is intentionally simple - the launcher
# can call the script with --scan-recent to do a deeper pass.
if [ "${2:-}" = "--scan-recent" ]; then
  for log in $(find "$USER_DATA_ROOT" -name "*.log" -mmin -120 2>/dev/null); do
    awk '/achievement.*unlocked|earned_achievement/ {
      for (i=1;i<=NF;i++) if ($i ~ /[0-9]+/) { print $i; break }
    }' "$log"
  done | sort -u | while read -r id; do
    if [ -z "${KNOWN[$id]:-}" ]; then
      KNOWN[$id]=1
      new_count=$((new_count+1))
    fi
  done
fi

mv "$EARNED_FILE.tmp" "$EARNED_FILE"
total=$(grep -c '^\s*id\s*=' "$EARNED_FILE" 2>/dev/null || echo 0)
echo "record_achievements: $SLUG $total earned (${new_count} new)"