#!/usr/bin/env python3
"""Merge a capture run's hook output (D3DTRACE/D3DCOUNT lines on stdout.txt)
with the xenos per-draw trace ([DRAWTRACE] lines in the runtime log named by
<rundir>/logname) into docs/d3d/captures/<name>/{events.json,counts.json,frame.png}.

events.json: {"meta": {...}, "events": [ordered events]}
  {"t": "call", "seq": n, "frame": f, "lr": "888xxxxx", "fn": name, "args": [..], "dump": [..]}
  {"t": "draw", "seq": n, "swap": s, "draw": d, "prim":.., "count":.., "vs": "<16hex>", "ps": "<16hex>",
   "vte":.., "clip":.., "di":.., "idx_base":.., "vfetch": [{"slot":95,"type":3,"addr":..,"size":..,"endian":..,"peek":[..]}], "idx_peek": [...]}
  {"t": "trigger", ...}
Ordering: the hook-verbose frame and the traced swap are both started by the
trigger files touched at the same instant; the calls of the verbose frame are
emitted before the draws of the traced swap (the CP consumes the ring after the
CPU wrote it). Present/swap numbering differ (hook frame counter vs CP swap
counter); both are kept.

usage: tracecat.py <rundir> <name> [--log <logfile>] [--docs <docs/d3d/captures>]
"""
import sys, os, re, json, argparse, glob, subprocess

D3DTRACE_RE = re.compile(r'^D3DTRACE f=(\d+) lr=([0-9a-f]{8}) fn=(\S+)((?: r\d+=[0-9a-f]{8})*)(?: d=\[([0-9a-f ]*)\])?')
D3DCOUNT_RE = re.compile(r'^D3DCOUNT f=(\d+)((?: \S+=\d+)+)')
DRAW_RE = re.compile(r'\[DRAWTRACE\] swap=(\d+) draw=(\d+) prim=(\d+) count=(\d+) host_prim=(\d+) host_vtx=(\d+) ibtype=(\d+) idxfmt=(\d+) idxendian=(\d+) idxbase=0x([0-9A-F]{8}) vs=([0-9A-F]{16}) ps=([0-9A-F]{16}) VTE=0x([0-9A-F]{8}) CLIP=0x([0-9A-F]{8}) DI=0x([0-9A-F]{8}) min=(\d+) max=(\d+) off=(\d+) vs_type=(\d+)(.*)$')
VF_RE = re.compile(r'\| vf(\d+) type=(\d+) addr=0x([0-9A-F]{8}) size=(\d+) endian=(\d+) peek=\[([0-9A-F ]*)\]')
IDX_RE = re.compile(r'\| idx=\[([0-9A-F ]*)\]')
TRIG_RE = re.compile(r'\[DRAWTRACE\] triggered at swap (\d+)')

def parse_stdout(path):
    calls = []; counts = {}; trig = []
    for line in open(path, errors='replace'):
        m = D3DTRACE_RE.match(line)
        if m:
            args = [a.split('=')[1] for a in m.group(4).split()]
            ev = {'t': 'call', 'frame': int(m.group(1)), 'lr': m.group(2), 'fn': m.group(3), 'args': args}
            if m.group(5) is not None: ev['dump'] = m.group(5).split()
            calls.append(ev); continue
        m = D3DCOUNT_RE.match(line)
        if m:
            counts[int(m.group(1))] = {k: int(v) for k, v in (kv.split('=') for kv in m.group(2).split())}
            continue
        if line.startswith('D3DTRACE-GPUTRIGGER'):
            trig.append({'t': 'trigger', 'src': 'hook-gpu', 'frame': int(line.split('f=')[1])}); continue
        if line.startswith('D3DTRACE-TRIGGER'):
            kv = dict(x.split('=') for x in line.split()[1:])
            trig.append({'t': 'trigger', 'src': 'hook', 'frame': int(kv['f']), 'frames': int(kv['frames'])})
    return calls, counts, trig

def parse_log(path):
    draws = []; trig = []
    for line in open(path, errors='replace'):
        m = TRIG_RE.search(line)
        if m: trig.append({'t': 'trigger', 'src': 'gpu', 'swap': int(m.group(1))}); continue
        m = DRAW_RE.search(line)
        if not m: continue
        g = m.groups()
        ev = {'t': 'draw', 'swap': int(g[0]), 'draw': int(g[1]), 'prim': int(g[2]), 'count': int(g[3]),
              'host_prim': int(g[4]), 'host_vtx': int(g[5]), 'ibtype': int(g[6]), 'idxfmt': int(g[7]),
              'idxendian': int(g[8]), 'idx_base': g[9], 'vs': g[10], 'ps': g[11], 'vte': g[12], 'clip': g[13],
              'di': g[14], 'min': int(g[15]), 'max': int(g[16]), 'off': int(g[17]), 'vs_type': int(g[18]),
              'vfetch': []}
        rest = g[19]
        for vm in VF_RE.finditer(rest):
            ev['vfetch'].append({'slot': int(vm.group(1)), 'type': int(vm.group(2)), 'addr': vm.group(3),
                                 'size': int(vm.group(4)), 'endian': int(vm.group(5)), 'peek': vm.group(6).split()})
        im = IDX_RE.search(rest)
        if im: ev['idx_peek'] = im.group(1).split()
        draws.append(ev)
    return draws, trig

def pick_frame_image(rundir, swap, outpng):
    """frame_NNNN.ppm is written every 60 presented frames; pick the dump closest to the traced swap."""
    ppms = sorted(glob.glob(os.path.join(rundir, 'frame_*.ppm')))
    if not ppms or swap is None: return None
    idx = min(len(ppms) - 1, max(0, round(swap / 60)))
    src = ppms[idx]
    try:
        subprocess.run(['magick', src, outpng], check=True)
    except Exception:
        try: subprocess.run(['convert', src, outpng], check=True)
        except Exception:
            from PIL import Image; Image.open(src).save(outpng)
    return os.path.basename(src)

def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('rundir'); ap.add_argument('name')
    ap.add_argument('--log')
    ap.add_argument('--docs', default=os.path.join(os.path.dirname(os.path.abspath(__file__)), '..', '..', 'docs', 'd3d', 'captures'))
    a = ap.parse_args()
    log = a.log
    if not log:
        ln = open(os.path.join(a.rundir, 'logname')).read().strip()
        log = os.path.expanduser('~/ss-recomp/out/build/linux/logs/' + ln)
    calls, counts, htrig = parse_stdout(os.path.join(a.rundir, 'stdout.txt'))
    draws, gtrig = parse_log(log)
    events = []
    for e in htrig: events.append(e)
    events += calls
    for e in gtrig: events.append(e)
    events += draws
    for i, e in enumerate(events): e['seq'] = i
    traced_swap = gtrig[0]['swap'] if gtrig else None
    vt = [e for e in htrig if e['src'] == 'hook']
    verbose_frame = vt[0]['frame'] if vt else None
    outdir = os.path.join(a.docs, a.name); os.makedirs(outdir, exist_ok=True)
    frame_img = pick_frame_image(a.rundir, traced_swap, os.path.join(outdir, 'frame.png'))
    shaders_vs = sorted({d['vs'] for d in draws}); shaders_ps = sorted({d['ps'] for d in draws if int(d['ps'], 16)})
    meta = {'rundir': a.rundir, 'log': log, 'traced_swap': traced_swap, 'verbose_frame': verbose_frame,
            'swap_minus_frame': (traced_swap - verbose_frame) if (traced_swap is not None and verbose_frame is not None) else None,
            'aligned': (traced_swap == verbose_frame) if (traced_swap is not None and verbose_frame is not None) else None,
            'n_calls': len(calls), 'n_draws': len(draws), 'frames_counted': len(counts),
            'distinct_vs': len(shaders_vs), 'distinct_ps': len(shaders_ps), 'frame_image_source': frame_img}
    json.dump({'meta': meta, 'events': events}, open(os.path.join(outdir, 'events.json'), 'w'), indent=0)
    # counts.json: {frame: {fn: calls}} plus summary
    fns = sorted({k for c in counts.values() for k in c})
    summary = {fn: {'total': sum(c.get(fn, 0) for c in counts.values()),
                    'max_per_frame': max((c.get(fn, 0) for c in counts.values()), default=0),
                    'frames_with_calls': sum(1 for c in counts.values() if c.get(fn, 0))} for fn in fns}
    if verbose_frame is not None and verbose_frame in counts:
        summary['_verbose_frame'] = {'frame': verbose_frame, 'counts': counts[verbose_frame]}
    if traced_swap is not None and traced_swap in counts:
        summary['_traced_swap_frame'] = {'frame': traced_swap, 'counts': counts[traced_swap],
                                         'draws': sum(1 for d in draws if d['swap'] == traced_swap)}
    json.dump({'summary': summary, 'per_frame': {str(k): v for k, v in sorted(counts.items())}},
              open(os.path.join(outdir, 'counts.json'), 'w'), indent=1)
    json.dump({'vs': shaders_vs, 'ps': shaders_ps}, open(os.path.join(outdir, 'shaders_used.json'), 'w'), indent=1)
    print(json.dumps(meta, indent=1))

if __name__ == '__main__': main()
