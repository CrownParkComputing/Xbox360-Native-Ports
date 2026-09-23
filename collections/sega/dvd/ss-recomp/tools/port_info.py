#!/usr/bin/env python3
"""What this port is, in the terms someone running it would ask.

  port_info.py <port-dir>            developer report (config deltas, groups)
  port_info.py <port-dir> --player   the page the distributable GUI shows

Three questions, and they are the ones people actually ask about a recompiled
title:

  * How much of it is NATIVE?   Every kernel call the title makes is either the
    port's own code or ReXGlue standing in for the console. That ratio is the
    honest answer to "is this a port or an emulator". It is measured against
    the calls the title actually makes (a runtime trace), falling back to the
    XEX import table only when no trace exists - which overstates the work.
  * What was DONE to it?        content/SOURCE.txt names the release the port
    was made from; CONVERSION.md is the converter's own account; git is the
    log that cannot drift from the code.
  * What is SPECIAL about it?   Every setting this title needs that the shared
    profile does not, each of which exists because the title misbehaved
    without it, listed with the comment that justifies it.
"""
import argparse
import pathlib
import re
import subprocess
import sys
import textwrap

SDK = pathlib.Path(__file__).resolve().parent


def _read(p):
    try:
        return p.read_text(errors="ignore")
    except OSError:
        return ""


def _slug(port):
    return port.name[:-7] if port.name.endswith("-recomp") else port.name


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


def display_name(port):
    slug = _slug(port)
    cfg = _toml_pairs(_read(port / "config" / f"{slug}.toml"))
    name = cfg.get("window_title", ("", ""))[0].strip('"')
    return name or bundle_facts(port).get("name") or slug


def native_coverage(port):
    """Ask native_report.py rather than re-deriving it, so one definition of
    'native' exists in the estate. With a trace and the linked binary it
    measures what the title calls and what the image really carries."""
    script = SDK / "native_report.py"
    if not script.is_file():
        return coverage_from_report(port)
    cmd = [sys.executable, str(script), str(port)]
    trace = port / "out" / "native" / "used.txt"
    exe = port / "out" / "build" / "linux" / _slug(port)
    if trace.is_file():
        cmd += ["--trace", str(trace)]
    if exe.is_file():
        cmd += ["--binary", str(exe)]
    try:
        r = subprocess.run(cmd, capture_output=True, text=True, timeout=180)
    except (OSError, subprocess.SubprocessError):
        return None
    m = re.search(r"(\d+) of (\d+) imports.*?are native \((\d+)%\)", r.stdout)
    if not m:
        return None
    groups = []
    for g in re.finditer(r"^\| ([^|]+?) \| +(\d+) \| +(\d+) \|$", r.stdout, re.M):
        if g.group(1).strip() != "group":
            groups.append((g.group(1).strip(), int(g.group(2)), int(g.group(3))))
    imported = re.search(r"(\d+) imported in total", r.stdout)
    return {"native": int(m.group(1)), "total": int(m.group(2)), "percent": int(m.group(3)),
            "groups": groups, "basis": "called" if trace.is_file() else "imported",
            "imported": int(imported.group(1)) if imported else None}


def coverage_from_report(port):
    """A launcher bundle carries NATIVE_COVERAGE.md (written by native_report.py
    --write at bundle time) instead of the tool and the trace."""
    text = _read(port / "NATIVE_COVERAGE.md")
    m = re.search(r"(\d+) of (\d+) imports (called at runtime )?are native \((\d+)%\)", text)
    if not m:
        return None
    groups = []
    for g in re.finditer(r"^\| ([^|]+?) \| +(\d+) \| +(\d+) \|$", text, re.M):
        if g.group(1).strip() != "group":
            groups.append((g.group(1).strip(), int(g.group(2)), int(g.group(3))))
    imported = re.search(r"(\d+) imported in total", text)
    return {"native": int(m.group(1)), "total": int(m.group(2)), "percent": int(m.group(4)),
            "groups": groups, "basis": "called" if m.group(3) else "imported",
            "imported": int(imported.group(1)) if imported else None}


def bundle_facts(port):
    out = {}
    for line in _read(port / "bundle.txt").splitlines():
        k, _, v = line.partition("=")
        if k:
            out[k.strip()] = v.strip()
    return out


def recompile_size(port):
    gen = port / "generated" / "default"
    cpp = sorted(gen.glob("*_recomp.*.cpp")) if gen.is_dir() else []
    if cpp:
        return {"functions": sum(_read(f).count("DEFINE_REX_FUNC(") for f in cpp), "files": len(cpp)}
    facts = bundle_facts(port)
    try:
        return {"functions": int(facts.get("functions", 0)), "files": int(facts.get("files", 0))}
    except ValueError:
        return {"functions": 0, "files": 0}


def special_changes(port):
    """Config keys this title sets that the shared profile does not, plus the
    manifest decisions that change generated code."""
    slug = _slug(port)
    profile = _toml_pairs(_read(SDK / "port_profile.toml"))
    mine = _toml_pairs(_read(port / "config" / f"{slug}.toml"))
    out = []
    for k, (v, c) in mine.items():
        if k == "window_title":
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


def source_record(port):
    lines = _read(port / "content" / "SOURCE.txt").strip().splitlines()
    return (lines[0].strip(), " ".join(l.strip() for l in lines[1:])) if lines else ("", "")


def content_installed(port):
    return (port / "assets" / "default.xex").is_file()


def conversion_notes(port):
    """(done, open) bullet lists from CONVERSION.md, markdown stripped."""
    notes = _read(port / "CONVERSION.md")

    def bullets(section):
        if section not in notes:
            return []
        body = notes.split(section, 1)[1]
        body = body.split("\n## ", 1)[0]
        out = []
        for l in body.strip().splitlines():
            if l.startswith("- "):
                out.append(l[2:].strip())
            elif l.startswith("  ") and out:
                out[-1] += " " + l.strip()
        return [re.sub(r"[*`]", "", b) for b in out]

    return bullets("## Done in this conversion"), bullets("## Still open")


def git_history(port):
    try:
        r = subprocess.run(["git", "-C", str(port), "log", "--reverse", "--format=%ad  %s",
                            "--date=short"], capture_output=True, text=True, timeout=20)
        return [c for c in r.stdout.splitlines() if c.strip()]
    except (OSError, subprocess.SubprocessError):
        return []


# ------------------------------------------------------------- renderers ----

WIDTH = 78
LABEL = 16


def _section(title, lines):
    """A labelled block: the label in the left column, wrapped text on the right."""
    out = []
    first = True
    for line in lines:
        if line is None:
            out.append("")
            continue
        for i, w in enumerate(textwrap.wrap(line, WIDTH - LABEL) or [""]):
            out.append(f"{title if first and i == 0 else '':<{LABEL}}{w}")
            first = False
    return out


def render_player(port):
    """The distributable GUI's page. No pipeline vocabulary: what the person
    playing it needs to know and nothing they cannot act on."""
    name = display_name(port)
    out = [name, "=" * len(name), ""]

    release, about = source_record(port)
    if content_installed(port):
        status = "installed" + (f" ({release})" if release else "")
    else:
        status = "not imported yet - use 'Import game files'"
    files = [status]
    if release:
        files += [None, f"Recommended source: {release}"]
        if about:
            files.append(about)
    out += _section("Game files", files) + [""]

    # Every layer of the port is ours; the console-OS-call layer is the one
    # still being moved out of the shared runtime into the port, so it is the
    # one with a percentage.
    size = recompile_size(port)
    cov = native_coverage(port)
    layers = []
    if size["functions"]:
        layers.append(("CPU", f"{size['functions']:,} PowerPC functions recompiled to native code - "
                              "no interpreter, no JIT."))
    layers.append(("Graphics", "Native Vulkan renderer: the console's command stream and shaders "
                               "run as Vulkan."))
    layers.append(("Audio", "Native mixer; XMA effects and the WMA soundtrack are decoded natively."))
    if cov:
        bar = "#" * (cov["percent"] * 30 // 100)
        if cov["basis"] == "called":
            what = (f"{cov['total']} console OS calls are used. {cov['native']} are this port's own "
                    f"code; {cov['total'] - cov['native']} are answered by the runtime's console layer.")
        else:
            what = (f"{cov['total']} console OS calls are imported. {cov['native']} are this port's own "
                    f"code (not yet measured at runtime).")
        layers.append(("Console OS", what))
        layers.append(("", f"[{bar:<30}] {cov['percent']}% moved into the port"))
        done = [g for g, n, r in cov["groups"] if n]
        left = [g for g, n, r in cov["groups"] if r]
        if done:
            layers.append(("", "In the port: " + ", ".join(done)))
        if left:
            layers.append(("", "Runtime layer: " + ", ".join(left)))
    else:
        layers.append(("Console OS", "not measured yet"))
    lines = []
    for label, text in layers:
        wrapped = textwrap.wrap(text, WIDTH - LABEL - 12) or [""]
        lines.append(f"{label:<11} {wrapped[0]}")
        lines += [f"{'':<11} {w}" for w in wrapped[1:]]
    out += _section("Under the hood", lines) + [""]

    done, still = conversion_notes(port)
    if done:
        out += _section("What was done", [f"* {d}" for d in done]) + [""]
    if still:
        out += _section("Still open", [f"* {s}" for s in still]) + [""]

    out += _section("Notes", [
        "This port contains no game data. You supply your own copy; nothing is downloaded "
        "and nothing leaves this machine.",
    ])
    return "\n".join(out)


def render_developer(port):
    slug = _slug(port)
    out = [slug, "=" * len(slug), ""]
    release, about = source_record(port)
    if release:
        out += [f"Recommended source : {release}"]
        if about:
            out += [f"                     {about}"]
        out.append("")
    size = recompile_size(port)
    if size["functions"]:
        out.append(f"Recompiled PowerPC : {size['functions']:,} functions in {size['files']} translation units")
    cov = native_coverage(port)
    if cov:
        basis = ("kernel calls it actually makes" if cov["basis"] == "called"
                 else "imports listed in the XEX (no runtime trace - overstates the work)")
        out.append(f"Native kernel      : {cov['percent']}%  ({cov['native']} of {cov['total']} {basis})")
        extra = f"; {cov['imported']} imported in total" if cov.get("imported") else ""
        out.append(f"Handled by ReXGlue : {cov['total'] - cov['native']} of those{extra}")
        if cov["groups"]:
            out += ["", "  By subsystem                  native   ReXGlue"]
            for name, nat, rem in cov["groups"]:
                out.append(f"  {name:<30}{nat:>6}{rem:>10}")
    else:
        out.append("Native kernel      : not measured")
    out.append("")
    changes = special_changes(port)
    if changes:
        out.append(f"Special to this title ({len(changes)}):")
        for k, v, why, note in changes:
            out.append(f"  - {k} = {v}   [{note}]")
            if why:
                out.append(f"      {why[:160]}")
    else:
        out.append("Special to this title: nothing - it runs on the shared profile.")
    done, still = conversion_notes(port)
    if done:
        out += ["", "Done in this conversion:"] + [f"  * {d}" for d in done]
    if still:
        out += ["Still open:"] + [f"  * {s}" for s in still]
    commits = git_history(port)
    if commits:
        out += ["", f"Port history ({len(commits)} commits):"] + [f"  {c}" for c in commits[-12:]]
    return "\n".join(out)


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("port")
    ap.add_argument("--player", action="store_true", help="the page the distributable GUI shows")
    ap.add_argument("--plain", action="store_true", help=argparse.SUPPRESS)
    args = ap.parse_args()
    port = pathlib.Path(args.port).resolve()
    print(render_player(port) if args.player else render_developer(port))


if __name__ == "__main__":
    main()
