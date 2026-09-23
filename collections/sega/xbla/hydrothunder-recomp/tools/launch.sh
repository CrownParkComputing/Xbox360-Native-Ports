#!/usr/bin/env bash
# Standalone Hydro Thunder launcher; no shared menu or family discovery.
set -euo pipefail
ROOT="$(cd -- "$(dirname -- "${BASH_SOURCE[0]}")/.." && pwd)"
exec "$ROOT/tools/rexmenu.sh" "$@"
