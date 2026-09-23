#!/usr/bin/env python3
"""Whole-process CPU attribution for a running recomp.

Two independent measurements, deliberately separated in time so the cheap one
stays undisturbed:

  phase A  per-thread CPU time from /proc/<pid>/task/*/stat only. No ptrace, no
           stop-the-world, so the numbers describe the game running normally.
  phase B  the same per-thread sampling plus periodic eu-stack backtraces of
           every thread. eu-stack stops the process briefly, so phase B frame
           times are NOT comparable with phase A; use it for "where in the code",
           never for "how fast".

Outputs in the output directory:
  threads_a.csv / threads_b.csv   per-thread utime/stime deltas per sample
  threads.json                    per-phase totals per thread name
  stacks.folded                   folded stacks (one line per sample per thread)
  summary.txt                     human-readable attribution

Requires only /proc and eu-stack (elfutils); no root, no perf.
"""
import argparse
import collections
import json
import os
from pathlib import Path
import re
import subprocess
import sys
import time

CLK_TCK = os.sysconf('SC_CLK_TCK')


def read_threads(pid):
    """Return {tid: (comm, utime_ticks, stime_ticks)} for every live thread."""
    out = {}
    task = Path(f'/proc/{pid}/task')
    try:
        tids = os.listdir(task)
    except OSError:
        return out
    for tid in tids:
        try:
            stat = (task / tid / 'stat').read_bytes()
        except OSError:
            continue
        # comm is parenthesised and may contain spaces; split on the last ')'.
        close = stat.rfind(b')')
        open_ = stat.find(b'(')
        if close < 0 or open_ < 0:
            continue
        comm = stat[open_ + 1:close].decode('utf-8', 'replace')
        fields = stat[close + 2:].split()
        # fields[0] is state; utime is field 14 of the whole line => index 11 here.
        try:
            utime = int(fields[11])
            stime = int(fields[12])
        except (IndexError, ValueError):
            continue
        out[int(tid)] = (comm, utime, stime)
    return out


def sample_stacks(pid):
    """Return [(tid, comm, [frames...])] via eu-stack, or [] if it fails."""
    try:
        proc = subprocess.run(['eu-stack', '-p', str(pid)], capture_output=True,
                              text=True, timeout=20)
    except (subprocess.TimeoutExpired, OSError):
        return []
    threads = []
    tid = None
    comm = ''
    frames = []
    head = re.compile(r'^TID (\d+):')
    frame = re.compile(r'^#\d+\s+0x[0-9a-f]+\s*(.*)$')
    for line in proc.stdout.splitlines():
        m = head.match(line)
        if m:
            if tid is not None:
                threads.append((tid, comm, frames))
            tid = int(m.group(1))
            comm = ''
            frames = []
            continue
        m = frame.match(line.strip())
        if m and tid is not None:
            name = m.group(1).strip()
            # "sub_887C5680 - /path/to/lib.so" -> keep symbol and module basename
            if ' - ' in name:
                sym, _, mod = name.rpartition(' - ')
                name = f'{sym.strip()}@{Path(mod.strip()).name}'
            frames.append(name or '??')
    if tid is not None:
        threads.append((tid, comm, frames))
    return threads


def phase(pid, seconds, interval, stacks, rows, folded, stack_names):
    """Sample for `seconds`; append per-thread deltas to rows."""
    prev = read_threads(pid)
    start = time.monotonic()
    next_tick = start
    while time.monotonic() - start < seconds:
        next_tick += interval
        time.sleep(max(0.0, next_tick - time.monotonic()))
        if not Path(f'/proc/{pid}').exists():
            break
        now = read_threads(pid)
        t = time.monotonic() - start
        for tid, (comm, utime, stime) in now.items():
            was = prev.get(tid)
            if not was:
                continue
            du = (utime - was[1]) / CLK_TCK
            ds = (stime - was[2]) / CLK_TCK
            if du or ds:
                rows.append((f'{t:.3f}', tid, comm, f'{du:.4f}', f'{ds:.4f}'))
        prev = now
        if stacks:
            for tid, _comm, frames in sample_stacks(pid):
                name = stack_names.get(tid) or (now.get(tid) or ('?',))[0]
                stack_names[tid] = name
                if not frames:
                    continue
                folded.append(f'{name};' + ';'.join(reversed(frames)))


def totals(rows):
    agg = collections.defaultdict(lambda: [0.0, 0.0])
    for _t, _tid, comm, du, ds in rows:
        agg[comm][0] += float(du)
        agg[comm][1] += float(ds)
    return agg


def write_csv(path, rows):
    with open(path, 'w') as handle:
        handle.write('t,tid,comm,utime_s,stime_s\n')
        for row in rows:
            handle.write(','.join(str(x) for x in row) + '\n')


def main():
    parser = argparse.ArgumentParser(description=__doc__,
                                     formatter_class=argparse.RawDescriptionHelpFormatter)
    parser.add_argument('output', type=Path)
    parser.add_argument('--pid', type=int, required=True)
    parser.add_argument('--clean-seconds', type=float, default=30.0,
                        help='phase A: /proc sampling only (default 30)')
    parser.add_argument('--stack-seconds', type=float, default=30.0,
                        help='phase B: /proc sampling plus eu-stack (default 30)')
    parser.add_argument('--interval', type=float, default=0.25)
    parser.add_argument('--stack-interval', type=float, default=0.25)
    args = parser.parse_args()

    if not Path(f'/proc/{args.pid}').exists():
        parser.error(f'no such pid {args.pid}')
    args.output.mkdir(parents=True, exist_ok=True)

    rows_a, rows_b, folded, names = [], [], [], {}
    phase(args.pid, args.clean_seconds, args.interval, False, rows_a, folded, names)
    phase(args.pid, args.stack_seconds, args.stack_interval, True, rows_b, folded, names)

    write_csv(args.output / 'threads_a.csv', rows_a)
    write_csv(args.output / 'threads_b.csv', rows_b)
    (args.output / 'stacks.folded').write_text('\n'.join(folded) + ('\n' if folded else ''))

    agg_a, agg_b = totals(rows_a), totals(rows_b)
    (args.output / 'threads.json').write_text(json.dumps(
        {'phase_a': {k: v for k, v in agg_a.items()},
         'phase_b': {k: v for k, v in agg_b.items()},
         'clean_seconds': args.clean_seconds,
         'stack_seconds': args.stack_seconds}, indent=2) + '\n')

    lines = []
    for label, agg, wall in (('A (undisturbed)', agg_a, args.clean_seconds),
                             ('B (eu-stack attached; times inflated)', agg_b, args.stack_seconds)):
        lines.append(f'== phase {label}: {wall:.0f} s wall ==')
        lines.append(f'{"thread":<24}{"user s":>9}{"sys s":>9}{"cores":>8}')
        for comm, (du, ds) in sorted(agg.items(), key=lambda kv: -sum(kv[1])):
            if du + ds < 0.05:
                continue
            lines.append(f'{comm:<24}{du:>9.2f}{ds:>9.2f}{(du + ds) / wall:>8.2f}')
        total = sum(du + ds for du, ds in agg.values())
        lines.append(f'{"TOTAL":<24}{"":>9}{"":>9}{total / wall:>8.2f}')
        lines.append('')
    if folded:
        counts = collections.Counter(folded)
        lines.append('== hottest sampled stacks (phase B, leaf-last) ==')
        for stack, n in counts.most_common(25):
            lines.append(f'{n:>5}  {stack}')
        lines.append('')
        leaves = collections.Counter()
        for stack in folded:
            parts = stack.split(';')
            leaves[(parts[0], parts[-1])] += 1
        lines.append('== hottest leaf frames per thread ==')
        for (thread, leaf), n in leaves.most_common(30):
            lines.append(f'{n:>5}  {thread:<22}{leaf}')
    text = '\n'.join(lines) + '\n'
    (args.output / 'summary.txt').write_text(text)
    sys.stdout.write(text)
    return 0


if __name__ == '__main__':
    sys.exit(main())
