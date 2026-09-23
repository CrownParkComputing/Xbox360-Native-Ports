#!/usr/bin/env python3
"""The stages a port goes through, and where each one actually stands.

  pipeline.py <port-dir> status        what is done, what is next
  pipeline.py <port-dir> run <stage>   run one stage
  pipeline.py <port-dir> next          run the first stage that is not done

A first conversion is meant to be quick - boot it, see it draw. That is stage
three of six, not the finish. The stages after it are where a port stops being
a demo:

  content   the game files are present and match the checksums
  codegen   guest PowerPC turned into C++, port_check clean
  build     it links
  verify    it was DRIVEN INTO GAMEPLAY headlessly and every frame reported.
            Menus render fine on ports whose levels are broken, so a port that
            has not reached a level has not been verified.
  trace     REX_TRACE_IMPORTS records the kernel imports it ACTUALLY calls.
            The XEX table overstates it - Geometry Wars calls 90 of its 142 -
            and the called set is the real work list.
  native    imports replaced by the port's own REX_NATIVE_HOOK definitions.
            This is the goal and it is a long tail, so it is a stage with a
            percentage rather than a box that gets ticked.

Status is derived from artifacts on disk, never from a stored "done" flag, so
it cannot claim a stage that was undone by a later change.
"""
import argparse
import json
import os
import pathlib
import re
import subprocess
import sys

def _find_sdk_tools():
    """This script is COPIED into each port's tools/, so its own parent is the
    port, not the SDK. Resolve the SDK explicitly or native_report.py cannot be
    found and the native stage silently reports 'not measured'."""
    env = os.environ.get("REXSDK_DIR")
    cands = []
    if env:
        cands.append(pathlib.Path(env) / "tools")
    here = pathlib.Path(__file__).resolve().parent
    cands += [here, pathlib.Path("/home/jon/recomp-ports/recomp-family/_library/rexglue-vmx/tools")]
    for c in cands:
        if (c / "native_report.py").is_file():
            return c
    return here


SDK = _find_sdk_tools()
STAGES = ["content", "codegen", "build", "verify", "trace", "native"]


def sh(cmd, cwd=None, timeout=None, env=None):
    e = dict(os.environ)
    if env:
        e.update(env)
    try:
        return subprocess.run(cmd, cwd=cwd, capture_output=True, text=True,
                              timeout=timeout, env=e)
    except (OSError, subprocess.SubprocessError) as exc:
        class R:
            returncode, stdout, stderr = 1, "", str(exc)
        return R()


def slug_of(port):
    return port.name[:-7] if port.name.endswith("-recomp") else port.name


# ----------------------------------------------------------------- status ----
def stage_content(port, slug):
    r = sh([str(port / "tools" / "content_zip.sh"), "verify"], cwd=str(port), timeout=600)
    if r.returncode == 0:
        return True, "installed and verified"
    if (port / "assets" / "default.xex").is_file():
        return False, "present but does not match content.sha256"
    return False, "not installed - import the game files"


def stage_codegen(port, slug):
    gen = port / "generated" / "default"
    cpp = sorted(gen.glob("*_recomp.*.cpp")) if gen.is_dir() else []
    if not cpp:
        return False, "not generated"
    funcs = sum(f.read_text(errors="ignore").count("DEFINE_REX_FUNC(") for f in cpp)
    chk = sh([sys.executable, str(port / "tools" / "port_check.py"), str(port)], timeout=900)
    ok = "no problems found" in (chk.stdout or "")
    return ok, f"{funcs:,} functions in {len(cpp)} files" + ("" if ok else " - port_check REPORTS PROBLEMS")


def stage_build(port, slug):
    exe = port / "out" / "build" / "linux" / slug
    if not exe.is_file():
        return False, "not built"
    mb = exe.stat().st_size / (1024 * 1024)
    newer = []
    gen = port / "generated" / "default"
    if gen.is_dir():
        t = exe.stat().st_mtime
        newer = [f.name for f in gen.glob("*.cpp") if f.stat().st_mtime > t]
    if newer:
        return False, f"{mb:.0f} MB but {len(newer)} generated files are NEWER - rebuild"
    return True, f"{mb:.0f} MB"


def stage_verify(port, slug):
    """Verified means: it was driven, it reached gameplay, and the frames were
    reported. 'Reached gameplay' is approximated by the draw count climbing well
    above what a menu issues - a menu is tens of draws, a level is hundreds."""
    out = port / "out" / "verify"
    csv = out / "frames.csv"
    if not csv.is_file():
        return False, "never verified - run it"
    import csv as _csv
    rows = list(_csv.DictReader(open(csv)))
    if not rows:
        return False, "no frames recorded"
    draws = []
    for r in rows:
        try:
            draws.append(float(r.get("draws") or 0))
        except ValueError:
            pass
    peak = max(draws) if draws else 0
    shots = sorted((out / "shots").glob("*.png")) if (out / "shots").is_dir() else []
    flat = 0
    try:
        from PIL import Image
        import numpy as np
        for s in shots:
            a = np.asarray(Image.open(s).convert("RGB")).astype(float)[::4, ::4]
            if float(a.mean(2).std()) < 4.0:
                flat += 1
    except Exception:
        pass
    log = out / "run.log"
    errs = unreg = 0
    if log.is_file():
        t = log.read_text(errors="ignore")
        errs, unreg = t.count("[error]") + t.count("[critical]"), t.count("[UNREGFN]")
    reached = peak >= 150
    note = (f"peak {peak:.0f} draws/frame, {len(shots)} frames, {flat} solid-colour, "
            f"{errs} errors, {unreg} unregistered")
    if not reached:
        return False, note + " - PEAK TOO LOW, probably never left the menus"
    if flat == len(shots) and shots:
        return False, note + " - every frame solid colour"
    return True, note


def stage_trace(port, slug):
    t = port / "out" / "native" / "used.txt"
    if not t.is_file():
        return False, "no import trace - run it to learn what it actually calls"
    n = len([l for l in t.read_text(errors="ignore").splitlines() if l.strip()])
    return n > 0, f"{n} kernel imports actually called"


def stage_native(port, slug):
    """Percentage, not a tick: this is the goal and it is a long tail."""
    trace = port / "out" / "native" / "used.txt"
    exe = port / "out" / "build" / "linux" / slug
    cmd = [sys.executable, str(SDK / "native_report.py"), str(port)]
    if trace.is_file():
        cmd += ["--trace", str(trace)]
    if exe.is_file():
        cmd += ["--binary", str(exe)]
    r = sh(cmd, timeout=600)
    m = re.search(r"(\d+) of (\d+) imports.*?are native \((\d+)%\)", r.stdout or "")
    if not m:
        return False, "not measured"
    nat, tot, pct = int(m.group(1)), int(m.group(2)), int(m.group(3))
    basis = "called" if trace.is_file() else "imported (no trace - overstates the work)"
    return pct >= 100, f"{pct}% native - {nat} of {tot} {basis}"


CHECKS = {
    "content": stage_content, "codegen": stage_codegen, "build": stage_build,
    "verify": stage_verify, "trace": stage_trace, "native": stage_native,
}


# -------------------------------------------------------------------- run ----
def run_content(port, slug):
    return sh([str(port / "tools" / "import_content.sh")], cwd=str(port), timeout=3600)


def run_codegen(port, slug):
    man = next(port.glob("*_manifest.toml"), None)
    rex = SDK.parent / "out" / "install" / "linux-amd64" / "bin" / "rexglue"
    return sh([str(rex), "codegen", man.name], cwd=str(port), timeout=3600)


def run_build(port, slug):
    b = port / "out" / "build" / "linux"
    if not (b / "build.ninja").is_file():
        sh(["cmake", "-S", str(port), "-B", str(b), "-G", "Ninja",
            "-DCMAKE_BUILD_TYPE=Release", "-DCMAKE_C_COMPILER=/usr/bin/clang",
            "-DCMAKE_CXX_COMPILER=/usr/bin/clang++"], timeout=900)
    return sh(["cmake", "--build", str(b), "-j", str(os.cpu_count() or 8)], timeout=7200)


def _refresh_headless_script(port, slug):
    """A port scaffolded before the lib-sync rule keeps running whatever
    librexruntime.so sits beside its executable - Shift 2 ran a stale runtime
    through five 'verification' runs this way, one of which was read as
    refuting a fix it never contained. Regenerate the script from the SDK
    template so every driven run syncs the libraries first."""
    tmpl = SDK / "headless_play.sh.in"
    dst = port / "tools" / "headless_play.sh"
    if not tmpl.is_file():
        return
    text = tmpl.read_text(errors="ignore")
    text = text.replace("@TITLE@", slug).replace(
        "@SDK_LIB@", str(SDK.parent / "out" / "install" / "linux-amd64" / "lib"))
    if not dst.is_file() or dst.read_text(errors="ignore") != text:
        dst.write_text(text)
        dst.chmod(0o755)


def run_verify(port, slug):
    _refresh_headless_script(port, slug)
    script = "20:Return 26:Return 32:Return " + " ".join(
        f"{t}:space" for t in range(36, 212, 4))
    return sh([str(port / "tools" / "verify_port.sh"), "220", script],
              cwd=str(port), timeout=3600)


def run_trace(port, slug):
    """The trace is what makes 'native %' mean anything: it is the set the title
    really reaches, not the set the XEX advertises."""
    _refresh_headless_script(port, slug)
    out = port / "out" / "native"
    out.mkdir(parents=True, exist_ok=True)
    script = "20:Return 26:Return 32:Return " + " ".join(
        f"{t}:space" for t in range(36, 212, 4))
    return sh([str(port / "tools" / "verify_port.sh"), "220", script], cwd=str(port),
              timeout=3600, env={"REX_TRACE_IMPORTS": str(out / "used.txt")})


def run_native(port, slug):
    out = port / "out" / "native"
    out.mkdir(parents=True, exist_ok=True)
    trace, exe = out / "used.txt", port / "out" / "build" / "linux" / slug
    cmd = [sys.executable, str(SDK / "native_report.py"), str(port), "--write"]
    if trace.is_file():
        cmd += ["--trace", str(trace)]
    if exe.is_file():
        cmd += ["--binary", str(exe)]
    return sh(cmd, timeout=900)


RUNNERS = {
    "content": run_content, "codegen": run_codegen, "build": run_build,
    "verify": run_verify, "trace": run_trace, "native": run_native,
}


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("port")
    ap.add_argument("action", choices=["status", "run", "next", "json", "fast", "all"])
    ap.add_argument("stage", nargs="?")
    args = ap.parse_args()
    port = pathlib.Path(args.port).resolve()
    slug = slug_of(port)

    if args.action == "fast":
        # Cheap proxies only. The real checks re-hash the whole disc tree and
        # re-scan the generated sources; a dashboard over twenty ports cannot
        # pay that, and for a table "is there a binary" is the useful answer.
        gen = port / "generated" / "default"
        cpp = list(gen.glob("*_recomp.*.cpp")) if gen.is_dir() else []
        exe = port / "out" / "build" / "linux" / slug
        vcsv = port / "out" / "verify" / "frames.csv"
        peak = 0
        if vcsv.is_file():
            import csv as _c
            for r in _c.DictReader(open(vcsv)):
                try:
                    peak = max(peak, float(r.get("draws") or 0))
                except ValueError:
                    pass
        trace = port / "out" / "native" / "used.txt"
        ncalled = 0
        if trace.is_file():
            ncalled = len([l for l in trace.read_text(errors="ignore").splitlines() if l.strip()])
        cov = port / "NATIVE_COVERAGE.md"
        pct = ""
        if cov.is_file():
            m = re.search(r"are native \((\d+)%\)", cov.read_text(errors="ignore"))
            if m:
                pct = m.group(1) + "%"
        print("|".join([
            slug,
            "y" if (port / "assets" / "default.xex").is_file() else "-",
            str(len(cpp)) if cpp else "-",
            f"{exe.stat().st_size // (1024*1024)}MB" if exe.is_file() else "-",
            (f"{peak:.0f}" if peak else "-"),
            (str(ncalled) if ncalled else "-"),
            (pct or "-"),
        ]))
        return

    if args.action in ("status", "json"):
        rows = []
        for st in STAGES:
            ok, note = CHECKS[st](port, slug)
            rows.append({"stage": st, "ok": ok, "note": note})
        if args.action == "json":
            print(json.dumps({"port": slug, "stages": rows}, indent=2))
            return
        print(f"{slug}: conversion pipeline")
        print()
        for r in rows:
            mark = "[done]" if r["ok"] else "[    ]"
            print(f"  {mark} {r['stage']:<9} {r['note']}")
        nxt = next((r["stage"] for r in rows if not r["ok"]), None)
        print()
        print(f"  next: {nxt}" if nxt else
              "  every stage complete - including 100% native.")
        return

    if args.action == "all":
        # Every mechanical stage, in order, without being asked. The stages
        # after "build" are not optional extras - a port that has not been
        # driven into gameplay and had its imports traced is not converted, it
        # is merely compiled. Only a genuine failure stops the run.
        #
        # "native" is measured, never failed on: it is a long tail and 0% is a
        # legitimate starting point, not a broken stage.
        failed = None
        for st in STAGES:
            ok, note = CHECKS[st](port, slug)
            if ok:
                print(f"  [skip] {st:<9} already done - {note}")
                continue
            print(f"  [run ] {st:<9} {note}")
            r = RUNNERS[st](port, slug)
            ok, note = CHECKS[st](port, slug)
            if ok:
                print(f"  [done] {st:<9} {note}")
                continue
            if st == "native":
                print(f"  [note] {st:<9} {note}  (the goal; not a failure)")
                continue
            print(f"  [FAIL] {st:<9} {note}")
            tail = (r.stdout or "").strip().splitlines()[-8:]
            if tail:
                print("         " + "\n         ".join(tail))
            failed = st
            break
        print()
        if failed:
            print(f"stopped at: {failed} - this is where a person is worth calling")
            sys.exit(1)
        print("every mechanical stage complete. What remains is judgement:")
        print("  - replace called imports with REX_NATIVE_HOOK (see NATIVE_COVERAGE.md)")
        print("  - eyeball the verify frames; the numbers cannot tell art from a fault")
        sys.exit(0)

    stage = args.stage
    if args.action == "next":
        stage = None
        for st in STAGES:
            ok, _ = CHECKS[st](port, slug)
            if not ok:
                stage = st
                break
        if stage is None:
            print("nothing to do")
            return
    if stage not in RUNNERS:
        print(f"unknown stage: {stage}", file=sys.stderr)
        sys.exit(2)
    print(f"== {slug}: running {stage}")
    r = RUNNERS[stage](port, slug)
    tail = (r.stdout or "").strip().splitlines()[-12:]
    print("\n".join(tail))
    if r.returncode != 0 and (r.stderr or "").strip():
        print((r.stderr or "").strip().splitlines()[-6:])
    ok, note = CHECKS[stage](port, slug)
    print(f"== {stage}: {'done' if ok else 'NOT DONE'} - {note}")
    sys.exit(0 if ok else 1)


if __name__ == "__main__":
    main()
