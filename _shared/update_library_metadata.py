#!/usr/bin/env python3
"""Refresh derived title IDs and code/runtime descriptions for launcher ports."""
from pathlib import Path
import re
import struct
import subprocess

FAMILY = Path(__file__).resolve().parent.parent


def title_id(xex: bytes):
    if xex[:4] != b"XEX2":
        return None
    for index in range(struct.unpack_from(">I", xex, 20)[0]):
        key, offset = struct.unpack_from(">II", xex, 24 + index * 8)
        if key == 0x40006:
            return struct.unpack_from(">I", xex, offset + 12)[0]
    return None


def main():
    for manifest in FAMILY.glob("*-recomp/*_manifest.toml"):
        port = manifest.parent
        text = manifest.read_text(errors="ignore")
        match = re.search(r'^name\s*=\s*"([^"]+)"', text, re.M)
        if not match:
            continue
        slug = match.group(1)
        info = port / "game-info"
        info.mkdir(exist_ok=True)
        xex_path = port / "assets/default.xex"
        if xex_path.is_file():
            identifier = title_id(xex_path.read_bytes())
            if identifier is not None:
                (info / "title-id.txt").write_text(f"{identifier:08X}\n")

        imports = set()
        for init in (port / "generated/default").glob("*_init.cpp"):
            imports.update(name for name in re.findall(
                r"__imp__([A-Za-z][A-Za-z0-9_]*)", init.read_text(errors="ignore"))
                if not name.startswith("sub_"))
        binary = port / "out/build/linux" / slug
        symbols = ""
        if binary.is_file():
            symbols = subprocess.run(["nm", "--defined-only", str(binary)],
                                     capture_output=True, text=True).stdout
        native = {name for kind, name in re.findall(
            r'^\S+\s+(T)\s+__imp__([A-Za-z][A-Za-z0-9_]*)$', symbols, re.M)} & imports
        functions = sum(source.read_text(errors="ignore").count("DEFINE_REX_FUNC(")
                        for source in (port / "generated/default").glob("*_recomp.*.cpp"))
        total = len(imports)
        if total:
            coverage = (f"OS import coverage: title-native {100*len(native)/total:.1f}% "
                        f"({len(native)}/{total}); ReXGlue {100*(total-len(native))/total:.1f}% "
                        f"({total-len(native)}/{total}). ")
        else:
            coverage = "OS import coverage: unavailable. "
        coverage += (f"Game code: {functions:,} PowerPC functions recompiled to native host code. "
                     "Xenon is the original CPU; Xenos is translated through Vulkan. "
                     "These describe components, not percentages of frame time.\n")
        (info / "runtime-stats.txt").write_text(coverage)
        print(port.name)


if __name__ == "__main__":
    main()
