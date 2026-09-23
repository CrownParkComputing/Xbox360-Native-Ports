#!/usr/bin/env python3
"""Consolidate recomp save/achievement files into the family profile.

Every source and replaced shared file is copied to save-migration-backup first.
Only recognised save, header and achievement files are removed from old roots.
"""
from pathlib import Path
import hashlib
import shutil
import time

PORTS = Path("/home/jon/recomp-ports")
FAMILY = PORTS / "recomp-family"
SHARED = FAMILY / "_shared/user-data"
BACKUP = FAMILY / "_shared/save-migration-backup" / time.strftime("%Y%m%d-%H%M%S")


def digest(path: Path) -> str:
    h = hashlib.sha256()
    with path.open("rb") as stream:
        for block in iter(lambda: stream.read(1024 * 1024), b""):
            h.update(block)
    return h.hexdigest()


def recognised(relative: Path) -> bool:
    parts = relative.parts
    if len(parts) == 2 and parts[0] == "achievements" and relative.suffix == ".toml":
        return True
    if len(parts) < 4 or len(parts[0]) != 16 or len(parts[1]) != 8:
        return False
    return parts[2] == "00000001" or (
        len(parts) >= 5 and parts[2] == "Headers" and parts[3] == "00000001"
    )


def source_roots():
    seen = set()
    candidates = [p / "user-data" for p in PORTS.glob("*-recomp")]
    candidates += [FAMILY / name / "user-data" for name in
                   ("1.mcla-recomp", "banjokazooie-recomp", "banjotooie-recomp")]
    candidates += [PORTS / "ss-recomp/content_root"]
    for root in candidates:
        if not root.is_dir():
            continue
        real = root.resolve()
        if real == SHARED.resolve() or real in seen:
            continue
        seen.add(real)
        yield root, root.parent.name + ("-content-root" if root.name == "content_root" else "")


def main():
    copied = removed = conflicts = 0
    for root, label in source_roots():
        for source in sorted(p for p in root.rglob("*") if p.is_file() and not p.is_symlink()):
            relative = source.relative_to(root)
            if not recognised(relative):
                continue
            backup = BACKUP / label / relative
            backup.parent.mkdir(parents=True, exist_ok=True)
            shutil.copy2(source, backup)
            if digest(source) != digest(backup):
                raise RuntimeError(f"backup verification failed: {source}")
            destination = SHARED / relative
            destination.parent.mkdir(parents=True, exist_ok=True)
            if destination.exists() and digest(destination) != digest(source):
                conflicts += 1
                old = BACKUP / "previous-shared" / relative
                old.parent.mkdir(parents=True, exist_ok=True)
                shutil.copy2(destination, old)
                # The most recently written save becomes the active one.
                if source.stat().st_mtime > destination.stat().st_mtime:
                    shutil.copy2(source, destination)
            elif not destination.exists():
                shutil.copy2(source, destination)
                copied += 1
            source.unlink()
            removed += 1
        # Remove only empty directories left underneath old save roots.
        for directory in sorted((p for p in root.rglob("*") if p.is_dir()),
                                key=lambda p: len(p.parts), reverse=True):
            try:
                directory.rmdir()
            except OSError:
                pass
    print(f"backup={BACKUP}")
    print(f"new_files={copied} old_files_cleaned={removed} conflicts={conflicts}")


if __name__ == "__main__":
    main()
