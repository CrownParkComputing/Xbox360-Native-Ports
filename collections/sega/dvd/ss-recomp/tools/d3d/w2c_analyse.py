#!/usr/bin/env python3
"""Analyse a W2-c capture: account for every PM4 draw the CP executed.

usage: w2c_analyse.py <capture_dir> <logname-or-path> [-o docs/d3d/cmdbufs.json]
"""
import sys, os, re, json, collections, argparse, glob

def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('capture')
    ap.add_argument('log')
    ap.add_argument('-o', '--out')
    ap.add_argument('--dumpdir', default=os.path.expanduser('~/ss-scratch/cmdbufs'))
    a = ap.parse_args()

    stdout = os.path.join(a.capture, 'stdout.txt')
    log = a.log if os.path.sep in a.log else os.path.expanduser(
        '~/ss-recomp/out/build/linux/logs/' + a.log)

    # --- CPU side -----------------------------------------------------------
    counts = {}
    ibs = []          # dicts per W2C-IB line
    trigger_frame = None
    for line in open(stdout, errors='replace'):
        line = line.rstrip('\n')
        if '[SS' in line:
            line = re.split(r'\[SS', line)[0]
        if line.startswith('W2C-TRIGGER'):
            trigger_frame = int(re.search(r'f=(\d+)', line).group(1))
        elif line.startswith('W2CCOUNT'):
            d = dict(kv.split('=') for kv in line.split()[1:] if '=' in kv)
            counts[int(d['f'])] = {k: int(v) for k, v in d.items() if k != 'f'}
        elif line.startswith('W2C-IB '):
            d = dict(kv.split('=') for kv in line.split()[1:] if '=' in kv)
            ibs.append({'frame': int(d['f']), 'seq': int(d['seq']), 'i': int(d['i']),
                        'lr': d['lr'], 'addr': d['addr'], 'dw': int(d['dw']),
                        'va': d['va'], 'draws': int(d['draws']), 'nested': int(d['nested'])})

    # --- GPU oracle ---------------------------------------------------------
    swap = None
    gpu_draws = 0
    for line in open(log, errors='replace'):
        if '[DRAWTRACE] swap=' in line:
            gpu_draws += 1
            if swap is None:
                swap = int(re.search(r'swap=(\d+)', line).group(1))

    fr = trigger_frame
    cpu = counts.get(fr, {})
    api = (cpu.get('DrawIndexedVertices', 0) + cpu.get('DrawVertices', 0) +
           cpu.get('DrawIndexedVerticesUP', 0) + cpu.get('DrawVerticesUP', 0))

    print('trigger frame   : %s   gpu swap traced: %s' % (fr, swap))
    print('GPU PM4 draws   : %d' % gpu_draws)
    print('D3D API draws   : %d  (DIV=%d DV=%d DIVUP=%d DVUP=%d)' %
          (api, cpu.get('DrawIndexedVertices', 0), cpu.get('DrawVertices', 0),
           cpu.get('DrawIndexedVerticesUP', 0), cpu.get('DrawVerticesUP', 0)))
    print('RunCommandBuffer: %d   TileVM: %d  RingWriteIB: %d' %
          (cpu.get('RunCommandBuffer', 0), cpu.get('TileVM_888E8428', 0),
           cpu.get('RingWriteIB', 0)))

    fibs = [x for x in ibs if x['frame'] == fr]
    print('IB submissions  : %d   total dwords %d   decoded draws %d' %
          (len(fibs), sum(x['dw'] for x in fibs), sum(x['draws'] for x in fibs)))

    # how many times is each distinct (addr,dw) submitted in the frame?
    rep = collections.Counter((x['addr'], x['dw']) for x in fibs)
    hist = collections.Counter(rep.values())
    print('distinct IBs    : %d' % len(rep))
    print('submissions per distinct IB: %s' % dict(sorted(hist.items())))
    once = sum(d for (a_, w), n in ((k, v) for k, v in rep.items()) for d in [0])  # noop
    per = {}
    for x in fibs:
        per.setdefault((x['addr'], x['dw']), x['draws'])
    single = sum(per[k] for k, n in rep.items() if n == 1)
    multi = {n: sum(per[k] for k, v in rep.items() if v == n) for n in hist if n > 1}
    print('draws in IBs submitted once      : %d' % single)
    for n in sorted(multi):
        print('draws in IBs submitted %2dx       : %d  (contributes %d)' % (n, multi[n], multi[n] * n))
    total = single + sum(multi[n] * n for n in multi)
    print('accounted PM4 draws              : %d   (oracle %d, delta %d)' %
          (total, gpu_draws, total - gpu_draws))

    if a.out:
        recs = []
        for (addr, dw), n in sorted(rep.items(), key=lambda kv: -kv[1]):
            sample = next(x for x in fibs if x['addr'] == addr and x['dw'] == dw)
            recs.append({'gpu_addr': '0x' + addr, 'dwords': dw, 'guest_va': '0x' + sample['va'],
                         'submissions_in_frame': n, 'draws_per_submission': sample['draws'],
                         'nested_ibs': sample['nested'],
                         'submitted_from_lr': sorted({x['lr'] for x in fibs
                                                      if x['addr'] == addr and x['dw'] == dw}),
                         'dump': 'ib_%05d_%s_%d.bin' % (sample['seq'], addr, dw)})
        json.dump({'capture': os.path.basename(a.capture), 'frame': fr, 'gpu_swap': swap,
                   'gpu_pm4_draws': gpu_draws, 'd3d_api_draws': api,
                   'per_frame_counts': cpu, 'accounted_pm4_draws': total,
                   'indirect_buffers': recs}, open(a.out, 'w'), indent=1)
        print('wrote %s' % a.out)

if __name__ == '__main__':
    main()
