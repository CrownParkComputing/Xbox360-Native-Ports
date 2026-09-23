#!/usr/bin/env python3
"""Regenerate include/whitty_xenon/kernel_exports.inc.

Ordinal numbering is a fixed property of the Xbox 360: a title importing
xboxkrnl.exe ordinal 294 wants RtlFillMemoryUlong on every console. The names
turn an opaque list of numbers into a readable worklist.

Source tables come from Xenia (github.com/xenia-project/xenia), BSD 3-Clause,
Copyright 2021 Ben Vanik. Only the ordinal/name/kind facts are reproduced.
"""
import argparse
import re
from pathlib import Path

PATTERN = re.compile(
    r'^XE_EXPORT\(\s*(\w+)\s*,\s*(0x[0-9A-Fa-f]+)\s*,\s*([A-Za-z0-9_]+)\s*,\s*(\w+)\s*\)')

HEADER = '''// kernel_exports.inc - Xbox 360 kernel ordinal -> name table.
//
// Ordinal numbering is a fixed property of the platform: a title imports
// xboxkrnl.exe ordinal 294, and that is RtlFillMemoryUlong on every console.
// Having the names turns an opaque list of numbers into a readable worklist,
// and turns an unimplemented call into a message that says which function was
// missing.
//
// Generated from the export tables in the Xenia project
// (github.com/xenia-project/xenia), which are released under the BSD 3-Clause
// licence - Copyright 2021 Ben Vanik. Only the ordinal/name/kind facts are
// reproduced here.
//
// Regenerate with tools/generate_kernel_exports.py.
//
// clang-format off
'''


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--xenia', type=Path, required=True,
                        help='path to a xenia checkout')
    parser.add_argument('--out', type=Path,
                        default=Path(__file__).resolve().parents[1] /
                        'include/whitty_xenon/kernel_exports.inc')
    args = parser.parse_args()

    tables = {
        'xboxkrnl': args.xenia / 'src/xenia/kernel/xboxkrnl/xboxkrnl_table.inc',
        'xam': args.xenia / 'src/xenia/kernel/xam/xam_table.inc',
    }
    lines = []
    for library, path in tables.items():
        count = 0
        for line in path.read_text().splitlines():
            match = PATTERN.match(line.strip())
            if not match:
                continue
            _, ordinal, name, kind = match.groups()
            is_function = 'true' if kind == 'kFunction' else 'false'
            lines.append(f'WHITTY_KERNEL_EXPORT({library}, {int(ordinal, 16)}, '
                         f'"{name}", {is_function})')
            count += 1
        print(f'{library}: {count} exports')
    args.out.write_text(HEADER + '\n'.join(lines) + '\n')
    print(f'wrote {args.out} ({len(lines)} entries)')
    return 0


if __name__ == '__main__':
    raise SystemExit(main())
