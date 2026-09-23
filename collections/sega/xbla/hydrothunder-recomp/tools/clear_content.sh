#!/usr/bin/env bash
set -euo pipefail
ROOT="$(cd -- "$(dirname -- "${BASH_SOURCE[0]}")/.." && pwd)"
if [ "${1:-}" != "--yes" ]; then
  echo "This removes imported Hydro game files from assets/."
  echo "Run again with --yes to confirm."
  exit 2
fi
find "$ROOT/assets" -mindepth 1 -maxdepth 1 ! -name '.gitkeep' -exec rm -rf -- {} +
rm -f "$ROOT/assets/.recomp-content-verified"
echo "Hydro content cleared. Use the launcher Import action to load an XEX, folder, archive, or ISO."
