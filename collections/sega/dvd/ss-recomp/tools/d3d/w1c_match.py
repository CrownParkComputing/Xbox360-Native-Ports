#!/usr/bin/env python3
"""W1-c: match 360 cached shaders (docs/d3d/shaders.json) to PC combos (docs/d3d/pc_fxc.json +
pc_shaders_layers.json) by structural signature. Register allocation is shared between the two builds
(PS samplers s10.. / consts c52..c63, c100..; VS TransViewProj c33..36), PC VS sampler sN <-> 360 vertex
tfetch slot 16+N; 360 literal constants live at the top of the register file (c255 downward) while the
PC compiler uses def'd c0..c3, so both literal sets are excluded from the constant signature."""
import json, sys, os, collections

D = sys.argv[1] if len(sys.argv) > 1 else '/home/jon/ss-recomp/docs/d3d'
sh = json.load(open(os.path.join(D, 'shaders.json')))
fxc = json.load(open(os.path.join(D, 'pc_fxc.json')))
shd = json.load(open(os.path.join(D, 'pc_shaders_layers.json')))
LIT360 = 224  # 360 registers >= this are treated as compiler literal block

def jacc(a, b):
    a, b = set(a), set(b)
    if not a and not b: return 1.0
    return len(a & b) / len(a | b)

# index .shaders combos by (fxc hash string) -> combo name -> layer/vertex info (same hash key as fxc)
shd_by = {}
for h, x in shd.items():
    for c in x['combos']:
        shd_by[(h, c['name'])] = c

# unique PC blobs
pcvs = {}; pcps = {}
for h, x in fxc.items():
    for c in x['combos']:
        for st, table in (('vs', pcvs), ('ps', pcps)):
            b = c[st]; e = table.setdefault(b['md5'], dict(md5=b['md5'], feat=None, combos=[]))
            if e['feat'] is None:
                if st == 'vs':
                    e['feat'] = dict(consts=sorted(b['consts']), ninputs=len(b['inputs']), inputs=[(i['usage'], i['index']) for i in b['inputs']],
                                     samplers=sorted(s['reg'] for s in b['samplers']), noutputs=len(b['outputs']), ninstr=b['ninstr'], size=b['size'],
                                     ctab=[(k['name'], k['reg'], k['count']) for k in (b['ctab'] or {}).get('consts', [])])
                else:
                    e['feat'] = dict(consts=sorted(b['consts']), samplers=sorted(s['reg'] for s in b['samplers']), color_out=b['color_out'], depth_out=b['depth_out'],
                                     kill=b['kill'], ninstr=b['ninstr'], size=b['size'], ctab=[(k['name'], k['reg'], k['count']) for k in (b['ctab'] or {}).get('consts', [])])
            lay = shd_by.get((h, c['name']))
            e['combos'].append(dict(fxc=h, fxc_name=x.get('name'), arks=x.get('arks'), combo=c['name'],
                                    layers=[l['layer'] + '_' + str(l['index']) for l in lay['layers']] if lay else None,
                                    vertex=[(v['name'], v['usage'], v['index']) for v in lay['vertex']] if lay else None))

def closeness(a, b, scale):
    return max(0.0, 1.0 - abs(a - b) / scale)

def score_vs(s, f):
    c360 = [c for r in s['float_const_ranges'] for c in range(r[0], r[1] + 1) if c < LIT360]
    sc = 0.45 * jacc(c360, f['consts'])
    sc += 0.20 * jacc([t + 16 for t in f['samplers']], s['tfetch_slots'])
    nv = len(s['vfetch'])
    sc += 0.20 * closeness(nv, f['ninputs'], 4)
    sc += 0.15 * closeness(len(s['interpolators']) + 1, f['noutputs'], 4)
    return sc

def score_ps(s, f):
    c360 = [c for r in s['float_const_ranges'] for c in range(r[0], r[1] + 1) if c < LIT360]
    sc = 0.40 * jacc(f['samplers'], s['tfetch_slots'])
    sc += 0.35 * jacc(c360, f['consts'])
    sc += 0.12 * (1.0 if len(f['color_out']) == len(s['color_targets']) else 0.0)
    sc += 0.05 * (1.0 if f['depth_out'] == s['export_depth'] else 0.0)
    sc += 0.04 * (1.0 if f['kill'] == ('kill' in s['notes']) else 0.0)
    sc += 0.04 * closeness(s['ninstr'], f['ninstr'] * 1.3, max(20, s['ninstr']))
    return sc

def pick(s, table, scorer, threshold):
    scored = sorted(((scorer(s, e['feat']), md5) for md5, e in table.items()), reverse=True)
    best_sc, best = scored[0]
    # blobs whose feature signature equals the best's are ties (different codegen of the same material family)
    fb = table[best]['feat']
    key = lambda f: (tuple(f['consts']), tuple(f['samplers']), f.get('ninputs'), f.get('noutputs'), tuple(f.get('color_out', [])), f.get('depth_out'), f.get('kill'))
    ties = [md5 for sc, md5 in scored if sc == best_sc and key(table[md5]['feat']) == key(fb)]
    alts = [(sc, md5) for sc, md5 in scored[:8] if md5 not in ties]
    status = 'matched' if best_sc >= threshold else 'unmatched'
    if status == 'matched' and alts and best_sc - alts[0][0] < 0.03: status = 'ambiguous'
    return best_sc, best, ties, alts, status

out = {}; stats = collections.Counter(); reasons = collections.Counter()
for h, s in sh.items():
    if s['type'] == 'vs':
        best_sc, best, ties, alts, status = pick(s, pcvs, score_vs, 0.62); table = pcvs
    else:
        best_sc, best, ties, alts, status = pick(s, pcps, score_ps, 0.62); table = pcps
    reason = None
    if s['memexport']:
        status = 'unmatched'; reason = 'memexport shader; PC build has no memexport equivalent (deferred tiled lighting / GPU copy done differently on PC)'
    elif status == 'unmatched':
        c360 = [c for r in s['float_const_ranges'] for c in range(r[0], r[1] + 1) if c < LIT360]
        if s['type'] == 'ps' and not any(set(e['feat']['samplers']) == set(s['tfetch_slots']) for e in pcps.values()):
            reason = 'no PC pixel shader uses sampler set %s' % s['tfetch_slots']
        elif s['type'] == 'vs' and not any(set(t + 16 for t in e['feat']['samplers']) == set(s['tfetch_slots']) for e in pcvs.values()):
            reason = 'no PC vertex shader uses vertex-texture set %s' % s['tfetch_slots']
        elif not c360:
            reason = 'shader reads no non-literal constants (pass-through / debug / clear-type shader)'
        else:
            reason = 'low structural similarity (best %.2f): constants %s' % (best_sc, s['float_const_ranges'])
    e = table[best]
    def combos_of(md5, n=6):
        cs = table[md5]['combos']
        return dict(n_combos=len(cs), examples=cs[:n], layers=sorted(set(l for c in cs if c['layers'] for l in c['layers']))[:12],
                    materials=sorted(set((c['fxc_name'] or c['fxc']) for c in cs))[:8])
    out[h] = dict(type=s['type'], status=status, reason=reason, score=round(best_sc, 3),
                  best=dict(md5=best, pc_features=e['feat'], **combos_of(best)),
                  ties=[dict(md5=t, **combos_of(t, 2)) for t in ties if t != best][:6], n_ties=len(ties),
                  alternatives=[dict(md5=md5, score=round(sc, 3), pc_features=table[md5]['feat'], **combos_of(md5, 2)) for sc, md5 in alts[:3]],
                  features_360=dict(consts=s['float_const_ranges'], tfetch_slots=s['tfetch_slots'], nvfetch=len(s['vfetch']), interpolators=s['interpolators'],
                                    color_targets=s.get('color_targets'), export_depth=s.get('export_depth'), notes=s['notes'], ninstr=s['ninstr'],
                                    vertex_layout=s.get('vertex_layout')))
    stats[(s['type'], status)] += 1
    if reason: reasons[reason.split('(')[0].split('%')[0][:60]] += 1
json.dump(out, open(os.path.join(D, 'shader_pc_match.json'), 'w'), indent=1, sort_keys=True)
n = len(out)
print('360 shaders', n, 'PC unique vs', len(pcvs), 'ps', len(pcps))
for k, v in sorted(stats.items()): print(k, v)
m = sum(v for k, v in stats.items() if k[1] == 'matched'); a = sum(v for k, v in stats.items() if k[1] == 'ambiguous')
print('match rate: matched %d/%d = %.1f%%, ambiguous %d, unmatched %d' % (m, n, 100.0 * m / n, a, n - m - a))
print('unmatched reasons', reasons.most_common())
print('score hist', sorted(collections.Counter(round(x['score'], 1) for x in out.values()).items()))
print('PC max const reg vs', max(c for e in pcvs.values() for c in e['feat']['consts'] + [0]), 'ps', max(c for e in pcps.values() for c in e['feat']['consts'] + [0]))
print('PC literal regs sample', sorted(set(k for x in fxc.values() for c in x['combos'][:2] for k in c['ps']['literals']))[:12])
for h, x in list(out.items())[:6]:
    print(h, x['type'], x['status'], x['score'], x['best']['layers'][:5], x['best']['materials'][:3], 'ties', x['n_ties'])
