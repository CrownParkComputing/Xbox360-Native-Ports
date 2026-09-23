#!/usr/bin/env bash
set -euo pipefail
ROOT="$(cd -- "$(dirname -- "${BASH_SOURCE[0]}")/.." && pwd)"
exec python3 /home/jon/recomp-ports/recomp-family/_shared/import_dlc.py "$ROOT" "${1:-}"
