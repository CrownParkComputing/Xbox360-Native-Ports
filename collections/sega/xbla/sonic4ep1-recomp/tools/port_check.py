#!/usr/bin/env python3
"""Check a port's generated code before spending minutes compiling or hours playing.

Every problem this finds cost real time on a previous conversion, and every one
of them is visible in the generated sources the moment codegen finishes:

  unresolved call   a recompiled function calls an address codegen never
                    emitted. It builds fine and then kills the title the first
                    time that path runs. One title had exactly one, on its
                    physics-model error path, and it ended every race start with
                    a black screen.
  undeclared label  the scanner split a function and the halves branch into each
                    other, so the emitted C++ does not compile. Hydro Thunder
                    failed this way on a fresh port, after a four minute build.
  switch fall-through trap
                    a bctr past the end of a recovered jump table emitted
                    __builtin_trap instead of branching. Fixed in codegen, but
                    an older generated/ tree still carries them.

For the first two it prints the [entrypoint.functions] lines to paste into the
manifest, which is the supported fix - never a hand edit to generated/.

  tools/port_check.py <project-dir>
"""
import os
import re
import sys
from collections import defaultdict

FUNC = re.compile(r"^DEFINE_REX_FUNC\((\w+)\)")
LABEL_DEF = re.compile(r"^(loc_[0-9A-Fa-f]+):")
LABEL_USE = re.compile(r"goto (loc_[0-9A-Fa-f]+);")
UNRESOLVED = re.compile(r'Unresolved call from 0x([0-9A-Fa-f]+) to 0x([0-9A-Fa-f]+)')
TRAP = re.compile(r"__builtin_trap\(\); // Switch case out of range")


def scan(generated_dir):
    unresolved = []        # (caller, target)
    traps = 0
    bad_labels = []        # (function, label)
    functions = []         # (address, name)

    for name in sorted(os.listdir(generated_dir)):
        if not name.endswith(".cpp"):
            continue
        path = os.path.join(generated_dir, name)
        current = None
        defined = set()
        used = []
        with open(path, errors="ignore") as handle:
            for line in handle:
                match = FUNC.match(line)
                if match:
                    # Close out the previous function before starting the next.
                    for label, _ in used:
                        if label not in defined:
                            bad_labels.append((current, label))
                    current = match.group(1)
                    address = re.fullmatch(r"sub_([0-9A-F]{8})", current)
                    if address:
                        functions.append((int(address.group(1), 16), current))
                    defined, used = set(), []
                    continue
                stripped = line.strip()
                match = LABEL_DEF.match(stripped)
                if match:
                    defined.add(match.group(1))
                for label in LABEL_USE.findall(stripped):
                    used.append((label, current))
                match = UNRESOLVED.search(line)
                if match:
                    unresolved.append((int(match.group(1), 16), int(match.group(2), 16)))
                if TRAP.search(line):
                    traps += 1
            for label, _ in used:
                if label not in defined:
                    bad_labels.append((current, label))
    return unresolved, traps, bad_labels, sorted(functions)


def main():
    if len(sys.argv) != 2:
        print(__doc__)
        return 2
    project = os.path.abspath(sys.argv[1])
    generated = os.path.join(project, "generated", "default")
    if not os.path.isdir(generated):
        print(f"no generated/default in {project} - run codegen first", file=sys.stderr)
        return 2

    unresolved, traps, bad_labels, functions = scan(generated)
    hints = []
    problems = 0

    print(f"{os.path.basename(project)}: {len(functions)} functions in "
          f"{len([f for f in os.listdir(generated) if f.endswith('.cpp')])} files")

    if unresolved:
        problems += 1
        print(f"\nUNRESOLVED CALLS ({len(unresolved)}) - these build, then kill the title "
              f"the first time the path runs:")
        for caller, target in sorted(set(unresolved)):
            print(f"  0x{caller:08X} calls 0x{target:08X}, which was never emitted")
            hints.append(f"0x{target:08X} = {{}}")

    if bad_labels:
        problems += 1
        # A function branching to a label it does not contain means the scanner
        # split it; claiming the whole span is what fixes it.
        by_function = defaultdict(list)
        for function, label in bad_labels:
            by_function[function].append(label)
        print(f"\nUNDECLARED LABELS ({len(bad_labels)} in {len(by_function)} functions) - "
              f"this WILL NOT COMPILE:")
        starts = [address for address, _ in functions]
        for function, labels in sorted(by_function.items()):
            match = re.fullmatch(r"sub_([0-9A-F]{8})", function or "")
            print(f"  {function} branches to {', '.join(sorted(set(labels))[:4])}"
                  f"{' ...' if len(set(labels)) > 4 else ''}")
            if not match:
                continue
            address = int(match.group(1), 16)
            # Claim through to the next discovered function: the split halves
            # live in between.
            following = [s for s in starts if s > address]
            targets = [int(l[4:], 16) for l in labels]
            end = min([s for s in following if s > max(targets)] or following or [0])
            if end:
                hints.append(f"0x{address:08X} = {{ name = \"{function}\", "
                             f"size = {end - address} }}")

    if traps:
        problems += 1
        print(f"\nSWITCH FALL-THROUGH TRAPS ({traps}) - a bctr past its jump table aborts "
              f"instead of branching. Regenerate with a current SDK.")

    if hints:
        print("\nAdd to the manifest and re-run codegen:\n")
        print("[entrypoint.functions]")
        for hint in dict.fromkeys(hints):
            print(hint)

    if not problems:
        print("\nno problems found")
    return 1 if problems else 0


if __name__ == "__main__":
    sys.exit(main())
