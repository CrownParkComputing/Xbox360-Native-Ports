#!/usr/bin/env python3
"""fix_goto_labels.py - repair function splits that only the C++ compiler sees.

fix_function_boundaries.py finds dropped code by looking for the `// ERROR`
comments XenonRecomp leaves when a branch leaves its own function. There is a
third shape it cannot see, because XenonRecomp emits no comment for it.

For an *unconditional* branch out of the function XenonRecomp emits a tail call
or an `// ERROR`. For a **conditional** branch it has no such option - it cannot
express "call and maybe continue" - so it always emits

    if (<condition>) goto loc_XXXXXXXX;

whether or not the target is inside the function. When it is not, the label is
never emitted and the translation unit simply does not compile:

    error: use of undeclared label 'loc_8238F834'

The `bdzf`/`bdnzf`/`bdzt` forms are where this shows up in practice - a compiler
idiom for a small switch, `mtctr` the index then peel cases off with successive
decrement-and-branch - because the case bodies sit past the end of what
XenonAnalyse decided the function was.

Unlike a dropped `// ERROR` branch this one is loud: it is a compile error, not
silently wrong code. That makes it the *cheap* member of the family, and the
only reason it needs a tool is that a parallel build stops at the first failing
translation units, so each round reveals only some of them and the loop has to
be driven to zero the same way step 5 is.

The repair is identical to an extension in fix_function_boundaries.py: declare
the function long enough to contain every target, stopping at the next function
boundary, and the `goto` becomes an ordinary jump inside one function.

Usage:
    fix_goto_labels.py <ppc-dir> <build-log> [existing-recomp.toml]

Output is `[[main.functions]]` blocks on stdout, ready to append to the config,
in the same shape fix_function_boundaries.py emits - so the same loop consumes
both. Nothing is printed when the log holds no such error.
"""
import bisect
import os
import re
import sys

# clang and gcc both spell it this way; the column is present in clang only.
ERROR = re.compile(
    r"^(\S+\.cpp):(\d+):(?:\d+:)?\s*error:\s*use of undeclared label "
    r"'loc_([0-9A-Fa-f]+)'")
FUNC = re.compile(r'^PPC_FUNC_IMPL\(__imp__sub_([0-9A-F]+)\)')
MAPPING = re.compile(r'sub_([0-9A-F]+)')
EXISTING = re.compile(r'^\s*address\s*=\s*0x([0-9A-Fa-f]+)\s*\n\s*size\s*=\s*0x([0-9A-Fa-f]+)',
                      re.MULTILINE)


def emitted_starts(ppc_dir):
    """Every function XenonRecomp emitted, from its own dispatch table."""
    path = os.path.join(ppc_dir, 'ppc_func_mapping.cpp')
    return sorted({int(m, 16) for m in MAPPING.findall(open(path).read())})


def function_at(ppc_dir, filename, cache={}):
    """[(line, function base)] for one generated translation unit."""
    if filename not in cache:
        spans = []
        path = os.path.join(ppc_dir, filename)
        with open(path, encoding='utf-8', errors='ignore') as handle:
            for number, line in enumerate(handle, 1):
                m = FUNC.match(line)
                if m:
                    spans.append((number, int(m.group(1), 16)))
        cache[filename] = spans
    return cache[filename]


def main():
    if len(sys.argv) < 3:
        sys.exit(__doc__)
    ppc_dir, build_log = sys.argv[1], sys.argv[2]

    # address -> size already declared, so a size that is already big enough is
    # not proposed again. Note the MULTILINE flag: without it `^` anchors only
    # at the start of the whole file and this set is silently always empty.
    already = {}
    if len(sys.argv) > 3 and os.path.exists(sys.argv[3]):
        for address, size in EXISTING.findall(open(sys.argv[3]).read()):
            address, size = int(address, 16), int(size, 16)
            already[address] = max(already.get(address, 0), size)

    targets = {}
    for line in open(build_log, encoding='utf-8', errors='ignore'):
        m = ERROR.match(line.strip())
        if not m:
            continue
        filename, number, label = m.group(1), int(m.group(2)), int(m.group(3), 16)
        spans = function_at(ppc_dir, os.path.basename(filename))
        if not spans:
            continue
        lines = [span[0] for span in spans]
        index = bisect.bisect_right(lines, number) - 1
        if index < 0:
            continue
        targets.setdefault(spans[index][1], set()).add(label)

    if not targets:
        return

    starts = emitted_starts(ppc_dir)

    def next_boundary(address):
        index = bisect.bisect_right(starts, address)
        return starts[index] if index < len(starts) else None

    proposals, unplaced = {}, []
    for base, labels in sorted(targets.items()):
        below = [t for t in labels if t < base]
        if below:
            # Extending forwards cannot reach a target behind the base, and a
            # conditional branch cannot be a call - so this one needs a human.
            unplaced.append((base, min(below)))
            continue
        boundary = next_boundary(max(labels))
        if boundary is None:
            unplaced.append((base, max(labels)))
            continue
        size = boundary - base
        if already.get(base, 0) >= size:
            # Already declared this long and still failing: extending further
            # is not the answer, so say so rather than emit a no-op.
            unplaced.append((base, max(labels)))
            continue
        proposals[base] = size

    print('# %d function(s) branch conditionally past their own end' % len(targets))
    for base, size in sorted(proposals.items()):
        print('\n[[main.functions]]\naddress = 0x%08X\nsize = 0x%X' % (base, size))
    for base, target in unplaced:
        print('# UNPLACED: sub_%08X jumps to 0x%08X' % (base, target),
              file=sys.stderr)


if __name__ == '__main__':
    main()
