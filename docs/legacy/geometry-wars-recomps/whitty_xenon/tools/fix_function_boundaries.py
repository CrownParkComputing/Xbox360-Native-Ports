#!/usr/bin/env python3
"""fix_function_boundaries.py - repair the function splits XenonRecomp got wrong.

XenonAnalyse decides where functions begin and end by walking instructions.
Where a compiler shared one tail between several tiny functions, or put a
switch's case bodies after the `bctr` that dispatches them, that walk splits one
real function into several - and a branch that then leaves its own function is
emitted as:

    // ERROR 8203BBA0            (an ordinary branch or call)
    // ERROR: 0x8203BB8C         (a switch case)
    return;

with no diagnostic at run time. The computation is simply dropped. On Geometry
Wars 1 that silently broke eleven of twelve controller accessors.

The fix is to declare the right boundaries in the recompiler's config, which is
what this generates. Two shapes, decided by which ERROR it is:

  * a switch case (`// ERROR: 0x...`) can only be a `goto` inside the same
    function - XenonRecomp has no other way to emit it - so the function is
    re-declared long enough to contain every one of its case bodies.
  * an ordinary branch (`// ERROR ...`) can be a tail call, so the target is
    declared a function in its own right. That is the shape a shared tail
    takes, and it is also what a target sitting inside an earlier function
    needs, where extending is not an option.

Every declared range has to stop at the next function boundary, or the ranges
overlap and the recompiler will not honour them. The boundaries come from
XenonRecomp's own ppc_func_mapping.cpp, which lists every function it emitted.

Run it, append the output to the config's [[main.functions]] entries, re-run
XenonRecomp, and repeat: extending a function can hide a boundary some other
call site needed, so the count has to be driven to zero rather than assumed.

Usage: fix_function_boundaries.py <ppc-dir> [existing-recomp.toml]
"""
import bisect
import concurrent.futures
import concurrent.futures.process
import glob
import os
import re
import sys
import tomllib

FUNC = re.compile(r'^PPC_FUNC_IMPL\(__imp__sub_([0-9A-F]+)\)')
LABEL = re.compile(r'^loc_([0-9A-F]+):')
COMMENT = re.compile(r'^\s*//\s*(\S+)\s*(.*)$')
MAPPING = re.compile(r'sub_([0-9A-F]+)')
# The two ERROR spellings, and the config entries already present.
BRANCH_ERROR = re.compile(r'^\s*//\s*ERROR\s+([0-9A-F]+)\s*$')
SWITCH_ERROR = re.compile(r'^\s*//\s*ERROR:\s*0x([0-9A-F]+)\s*$')
# re.MULTILINE matters: without it `^` only matches at the start of the whole
# file, so this found nothing and the "already in the config" set was ALWAYS
# empty. Every round then re-proposed addresses that were already declared, the
# driver appended them again, and XenonRecomp honours the FIRST of two duplicate
# declarations - so a corrected, larger size could never take effect and
# --converge could oscillate forever. See --apply below, which is the real fix.
EXISTING = re.compile(r'^\s*address\s*=\s*0x([0-9A-Fa-f]+)', re.MULTILINE)
BLOCK_HEADER = '[[main.functions]]'
ADDRESS_LINE = re.compile(r'^address\s*=\s*0x([0-9A-Fa-f]+)\s*$')
SIZE_LINE = re.compile(r'^size\s*=\s*0x([0-9A-Fa-f]+)\s*$')
GENERATED_COMMENT = re.compile(r'^#\s*(Appended by recompile_title\.sh|'
                               r'dispatches XenonRecomp did not emit)')


def emitted_starts(ppc_dir):
    """Every function XenonRecomp emitted, from its own dispatch table."""
    path = os.path.join(ppc_dir, 'ppc_func_mapping.cpp')
    return sorted({int(m, 16) for m in MAPPING.findall(open(path).read())})


# Scanning is nearly all of this tool's cost - every ppc_recomp.*.cpp is read
# line by line, and choplifter's are 230 MB across 305 files - so the files are
# spread over a worker process each and the per-file results merged afterwards.
#
# THE MERGE MUST NOT DEPEND ON COMPLETION ORDER. Two files can name the same
# function base, and the single loop this replaced resolved that by walking
# `sorted(glob(...))`: the last file to emit an instruction for a base set its
# last-instruction address, and every file's ERROR targets accumulated. Results
# are therefore merged in sorted filename order, which `Executor.map` gives by
# yielding in submission order rather than as workers finish.
#
# Parallelism must never be why this tool fails, only why it is quick: too few
# files to pay for a pool, WHITTY_JOBS=1, or a pool that cannot be created all
# fall back to running the same worker inline, for identical output.
MIN_PARALLEL_FILES = 8


def generated_files(ppc_dir):
    """Every generated translation unit, in the order the scan merges them."""
    return sorted(glob.glob(os.path.join(ppc_dir, 'ppc_recomp.*.cpp')))


def scan_jobs():
    """How many workers to scan with. WHITTY_JOBS=1 means fully sequential.

    Several titles are often converged at once, and each of them running one
    process per core is how a 16-core machine ends up with 64 of them, so the
    caller needs a way to throttle this.
    """
    try:
        jobs = int(os.environ.get('WHITTY_JOBS') or os.cpu_count() or 1)
    except ValueError:
        jobs = os.cpu_count() or 1
    return max(1, jobs)


def scan_files(paths, worker):
    """`worker(path)` for every path, results in the order `paths` were given."""
    jobs = min(scan_jobs(), len(paths))
    if jobs < 2 or len(paths) < MIN_PARALLEL_FILES:
        return [worker(path) for path in paths]
    try:
        with concurrent.futures.ProcessPoolExecutor(max_workers=jobs) as pool:
            return list(pool.map(worker, paths))
    except (OSError, concurrent.futures.process.BrokenProcessPool):
        # No pool - out of file descriptors, no fork, a worker killed. Slower is
        # a fine answer to that; not scanning at all is not.
        return [worker(path) for path in paths]


def scan_one_file(path):
    """One file's {base: [last instruction or None, {branch}, {switch}]}.

    `None` where the file declared the function but emitted no instruction for
    it. The merge then leaves whatever an earlier file recorded, which is what
    the single loop did by assigning the address only on an instruction line.
    """
    functions = {}
    base = None
    address = None
    for line in open(path, encoding='utf-8', errors='ignore'):
        m = FUNC.match(line)
        if m:
            base = address = int(m.group(1), 16)
            functions.setdefault(base, [None, set(), set()])
            continue
        if base is None:
            continue
        m = LABEL.match(line)
        if m:
            address = int(m.group(1), 16)
            continue
        m = BRANCH_ERROR.match(line)
        if m:
            functions[base][1].add(int(m.group(1), 16))
            continue
        m = SWITCH_ERROR.match(line)
        if m:
            functions[base][2].add(int(m.group(1), 16))
            continue
        m = COMMENT.match(line)
        if m:
            functions[base][0] = address
            address += 4
    return functions


def scan_errors(ppc_dir):
    """{function base: [last instruction, {branch target}, {switch target}]}."""
    functions = {}
    # Merged in filename order, never completion order - see above.
    for file_functions in scan_files(generated_files(ppc_dir), scan_one_file):
        for base, (last, branches, cases) in file_functions.items():
            entry = functions.setdefault(base, [base, set(), set()])
            if last is not None:
                entry[0] = last
            entry[1] |= branches
            entry[2] |= cases
    return functions


def split_config(text):
    """(everything that is not a function declaration, {address: size}).

    Declarations are lifted out rather than left in place so --apply can write
    one canonical, deduplicated block back. Comments the driver generated are
    dropped with them; comments a human wrote are prose and are kept.
    """
    # ReXGlue exports an inline functions array, whereas older configs use
    # [[main.functions]]. Read both: leaving the inline array in place and
    # appending table declarations produces invalid TOML and loses repairs.
    entries = {}
    inline = re.search(r'^functions[ \t]*=[ \t]*\[.*?\]', text,
                       re.MULTILINE | re.DOTALL)
    if inline:
        for function in tomllib.loads(inline.group(0))['functions']:
            address, size = function['address'], function['size']
            entries[address] = max(entries.get(address, 0), size)
        text = text[:inline.start()] + text[inline.end():]
    lines = text.split('\n')
    prose = []
    i = 0
    while i < len(lines):
        if lines[i].strip() == BLOCK_HEADER:
            address = size = None
            i += 1
            while i < len(lines):
                stripped = lines[i].strip()
                match = ADDRESS_LINE.match(stripped)
                if match:
                    address = int(match.group(1), 16)
                    i += 1
                    continue
                match = SIZE_LINE.match(stripped)
                if match:
                    size = int(match.group(1), 16)
                    i += 1
                    continue
                break
            if address is not None and size is not None:
                # Keep the largest, which is the deduplication rule: a later
                # round only ever proposes a range at least as long as the one
                # before, and the longest is the one that contains all the code.
                entries[address] = max(entries.get(address, 0), size)
            continue
        if GENERATED_COMMENT.match(lines[i].strip()):
            i += 1
            continue
        prose.append(lines[i])
        i += 1
    return '\n'.join(prose).rstrip() + '\n', entries


def apply_to_config(path, proposals):
    """Rewrite the config with one declaration per address. Returns what moved."""
    with open(path, encoding='utf-8') as source:
        prose, existing = split_config(source.read())
    merged = dict(existing)
    added = enlarged = 0
    for base, size in proposals:
        if base not in merged:
            merged[base] = size
            added += 1
        elif size > merged[base]:
            merged[base] = size
            enlarged += 1
    body = ''.join('\n%s\naddress = 0x%08X\nsize = 0x%X\n' % (BLOCK_HEADER, b, s)
                   for b, s in sorted(merged.items()))
    with open(path, 'w', encoding='utf-8') as out:
        out.write(prose + body)
    return added, enlarged, len(merged)


def main():
    if len(sys.argv) < 2:
        sys.exit(__doc__)
    apply_mode = '--apply' in sys.argv[1:]
    argv = [a for a in sys.argv if a != '--apply']
    sys.argv = argv
    ppc_dir = sys.argv[1]
    starts = emitted_starts(ppc_dir)
    already = set()
    if len(sys.argv) > 2:
        _, existing = split_config(open(sys.argv[2]).read())
        already = set(existing)

    def next_boundary(address):
        """The first function start strictly after `address`."""
        i = bisect.bisect_right(starts, address)
        return starts[i] if i < len(starts) else None

    functions = scan_errors(ppc_dir)
    extend, declare = {}, {}
    unfixable = []
    for base, (last, branches, cases) in sorted(functions.items()):
        if not branches and not cases:
            continue
        end = last + 4
        # A switch case below the function's own base cannot be reached by
        # extending it, and XenonRecomp will not emit it as a call - so it is
        # worth reporting rather than pretending it is fixed.
        for t in cases:
            if t < base:
                unfixable.append((base, t))
        above = [t for t in cases if t >= end]
        if above:
            boundary = next_boundary(max(above))
            if boundary is None:
                unfixable.append((base, max(above)))
            else:
                extend[base] = boundary - base
        for t in branches:
            boundary = next_boundary(t)
            if boundary is None:
                unfixable.append((base, t))
            else:
                declare[t] = boundary - t

    # A branch target that an extension now contains needs nothing: the branch
    # becomes an ordinary `goto` within the longer function. Declaring it as
    # well would emit the same instructions twice.
    for base, size in extend.items():
        for t in [t for t in declare if base <= t < base + size]:
            del declare[t]

    # A newly declared range must also stop at the next newly declared one -
    # they are boundaries too, and two of them overlapping is the case the
    # recompiler will not honour.
    boundaries = sorted(set(declare) | set(extend))
    for t in list(declare):
        i = bisect.bisect_right(boundaries, t)
        if i < len(boundaries):
            declare[t] = min(declare[t], boundaries[i] - t)

    # Where an extension still runs over another declared range, both are
    # emitted and the overlapping instructions appear in each - harmless, since
    # every register lives in the context either way. It is still reported,
    # because it is a sign the boundary picked for the extension is a split
    # that a later round will move.
    ordered = sorted({**declare, **extend}.items())
    clashes = []
    for i, (base, size) in enumerate(ordered):
        if i + 1 < len(ordered) and base + size > ordered[i + 1][0]:
            clashes.append((base, size, ordered[i + 1][0]))

    fresh = [(b, s) for b, s in ordered if b not in already]
    print('# %d functions carrying dropped code: %d re-declared longer, '
          '%d branch targets split out' % (
              len([f for f in functions.values() if f[1] or f[2]]),
              len(extend), len(declare)))
    if already:
        print('# %d of %d already in the config' %
              (len(ordered) - len(fresh), len(ordered)))
    if apply_mode:
        if len(sys.argv) < 3:
            sys.exit('--apply needs the config to rewrite')
        added, enlarged, total = apply_to_config(sys.argv[2], ordered)
        # Replace, never append: a second declaration of the same address is
        # not a correction, because XenonRecomp honours the first one it reads.
        print('# applied: %d added, %d enlarged, %d declarations total' %
              (added, enlarged, total))
    else:
        for base, size in fresh:
            print('\n[[main.functions]]\naddress = 0x%08X\nsize = 0x%X' %
                  (base, size))
    for base, size, nxt in clashes:
        print('# CLASH: 0x%08X+0x%X runs into 0x%08X' % (base, size, nxt),
              file=sys.stderr)
    for base, target in unfixable:
        print('# UNPLACED: sub_%08X drops 0x%08X' % (base, target),
              file=sys.stderr)


if __name__ == '__main__':
    main()
