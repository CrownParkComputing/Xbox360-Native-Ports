import json, os, collections
ROOT = os.path.expanduser('~/ss-recomp')
def load():
    return json.load(open(os.path.join(ROOT, 'docs/d3d/w1a_funcs.json')))
def callers_map(F):
    C = collections.defaultdict(list)
    for va, f in F.items():
        for c in f['calls'] + f['tail_calls']:
            C[c].append(va)
    return C
def in_band(va, lo, hi):
    v = int(va, 16); return lo <= v < hi
