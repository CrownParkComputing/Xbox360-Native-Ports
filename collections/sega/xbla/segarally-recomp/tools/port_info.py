#!/usr/bin/env python3
"""What this port is, in the terms someone running it would ask.

  port_info.py <port-dir> [--plain]

Three questions, and they are the ones people actually ask about a recompiled
title:

  * How much of it is NATIVE?   Every kernel call the title makes is either the
    port's own code or ReXGlue standing in for the console. That ratio is the
    honest answer to "is this a port or an emulator", and it is measured from
    the XEX's own import table rather than claimed.
  * How big is the recompile?   Functions and translation units of guest
    PowerPC turned into C++.
  * What is SPECIAL about it?   Every setting this title needs that the shared
    profile does not, each of which exists because the title misbehaved without
    it. Shipping those silently is how a port becomes unmaintainable, so they
    are listed with the comment that justifies them.
"""
import argparse
import pathlib
import re
import subprocess
import sys

SDK = pathlib.Path(__file__).resolve().parent


def _read(p):
    try:
        return p.read_text(errors="ignore")
    except OSError:
        return ""


def _toml_pairs(text):
    """key -> (value, comment-block above it). Deliberately not a TOML parser:
    we want the comments, which every parser throws away, and the files are
    flat key = value by construction."""
    out, comment = {}, []
    for line in text.splitlines():
        s = line.strip()
        if s.startswith("#"):
            comment.append(s.lstrip("# ").rstrip())
            continue
        m = re.match(r"^([A-Za-z_][A-Za-z0-9_]*)\s*=\s*(.+?)\s*$", s)
        if m:
            out[m.group(1)] = (m.group(2), " ".join(comment).strip())
            comment = []
        elif not s:
            comment = []
    return out


def native_coverage(port):
    """Ask native_report.py rather than re-deriving it, so one definition of
    'native' exists in the estate."""
    script = SDK / "native_report.py"
    if not script.is_file():
        return None
    try:
        r = subprocess.run([sys.executable, str(script), str(port)],
                           capture_output=True, text=True, timeout=180)
    except (OSError, subprocess.SubprocessError):
        return None
    m = re.search(r"(\d+) of (\d+) imports.*?are native \((\d+)%\)", r.stdout)
    groups = []
    for g in re.finditer(r"^\| ([^|]+?) \| +(\d+) \| +(\d+) \|$", r.stdout, re.M):
        name = g.group(1).strip()
        if name != "group":
            groups.append((name, int(g.group(2)), int(g.group(3))))
    if not m:
        return None
    return {"native": int(m.group(1)), "total": int(m.group(2)),
            "percent": int(m.group(3)), "groups": groups}


def recompile_size(port):
    gen = port / "generated" / "default"
    cpp = sorted(gen.glob("*_recomp.*.cpp")) if gen.is_dir() else []
    funcs = 0
    for f in cpp:
        funcs += _read(f).count("DEFINE_REX_FUNC(")
    return {"functions": funcs, "files": len(cpp)}


def special_changes(port, slug):
    """Config keys this title sets that the shared profile does not, plus the
    manifest decisions that change generated code."""
    profile = _toml_pairs(_read(SDK / "port_profile.toml"))
    mine = _toml_pairs(_read(port / "config" / f"{slug}.toml"))
    out = []
    for k, (v, c) in mine.items():
        if k in ("window_title",):
            continue
        base = profile.get(k)
        if base is None:
            out.append((k, v, c, "not in the shared profile"))
        elif base[0] != v:
            out.append((k, v, c, f"profile default {base[0]}"))

    man = None
    for cand in port.glob("*_manifest.toml"):
        man = _toml_pairs(_read(cand))
        break
    if man:
        nv = man.get("non_volatile_as_local")
        if nv and nv[0] == "false":
            out.append(("non_volatile_as_local", "false", "",
                        "codegen: non-volatiles stay in the guest context"))
        if "longjmp_address" in man:
            out.append(("setjmp/longjmp", man["longjmp_address"][0], "",
                        "declared, so longjmp unwinds instead of returning"))
    return out


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("port")
    ap.add_argument("--plain", action="store_true", help="no markdown pipes")
    args = ap.parse_args()
    port = pathlib.Path(args.port).resolve()
    slug = port.name[:-7] if port.name.endswith("-recomp") else port.name

    print(f"{slug}")
    print("=" * len(slug))
    print()

    size = recompile_size(port)
    if size["functions"]:
        print(f"Recompiled PowerPC : {size['functions']:,} functions "
              f"in {size['files']} translation units")

    cov = native_coverage(port)
    if cov:
        print(f"Native kernel      : {cov['percent']}%  "
              f"({cov['native']} of {cov['total']} imports)")
        print(f"Handled by ReXGlue : {cov['total'] - cov['native']} imports")
        if cov["groups"]:
            print()
            print("  By subsystem                  native   ReXGlue")
            for name, nat, rem in cov["groups"]:
                print(f"  {name:<30}{nat:>6}{rem:>10}")
    else:
        print("Native kernel      : not measured")

    print()
    changes = special_changes(port, slug)
    if changes:
        print(f"Special to this title ({len(changes)}):")
        for k, v, why, note in changes:
            print(f"  - {k} = {v}   [{note}]")
            if why:
                print(f"      {why[:160]}")
    else:
        print("Special to this title: nothing - it runs on the shared profile.")


if __name__ == "__main__":
    main()
