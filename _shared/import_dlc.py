#!/usr/bin/env python3
"""Install only DLC belonging to the selected port, without replacing packages."""
import pathlib, struct, sys, shutil

def install(root, package):
    xex = (root / "assets/default.xex").read_bytes()
    if xex[:4] != b"XEX2": raise ValueError("Install this game's files first")
    count = struct.unpack_from(">I", xex, 20)[0]
    title = None
    for i in range(count):
        key, offset = struct.unpack_from(">II", xex, 24 + i * 8)
        if key == 0x40006:
            title = struct.unpack_from(">I", xex, offset + 12)[0]
    if title is None: raise ValueError("Cannot identify this game's title ID")
    with package.open("rb") as stream: header = stream.read(0x380)
    if len(header) < 0x368 or header[:4] not in (b"LIVE", b"PIRS", b"CON "):
        raise ValueError("Choose a LIVE, PIRS or CON DLC package")
    content_type = struct.unpack_from(">I", header, 0x344)[0]
    package_title = struct.unpack_from(">I", header, 0x360)[0]
    if package_title != title:
        raise ValueError(f"Package belongs to {package_title:08X}, selected game is {title:08X}")
    if content_type != 2: raise ValueError("This package is not downloadable content")
    shared = pathlib.Path(__file__).resolve().parent / "user-data"
    dest = shared / "0000000000000000" / f"{title:08X}" / "00000002" / package.name
    dest.parent.mkdir(parents=True, exist_ok=True)
    if dest.exists(): raise ValueError("This DLC package is already installed")
    try:
        with package.open("rb") as src, dest.open("xb") as out: shutil.copyfileobj(src, out)
    except Exception:
        if dest.exists(): dest.unlink()
        raise
    print(f"Installed {package.name} for {title:08X}")

if __name__ == "__main__":
    try: install(pathlib.Path(sys.argv[1]), pathlib.Path(sys.argv[2]))
    except (OSError, ValueError, IndexError, struct.error) as error:
        print(f"DLC import failed: {error}", file=sys.stderr)
        sys.exit(1)
