#!/usr/bin/env python3
"""W1-c: parse every extracted PC .fxc (CXF) and .shaders (RDHS) into
docs/d3d/pc_fxc.json and docs/d3d/pc_shaders_layers.json.
Usage: w1c_pc_parse_all.py EXTRACT_DIR NAMES_JSON(optional hash->name) OUT_DIR"""
import sys, os, json, glob, collections, hashlib
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import w1c_pcfmt as P, w1c_sm3 as S

def layer_of(name):
    # "TyreBlurSpecAndNormalMap_0_normalFadeout" -> ("TyreBlurSpecAndNormalMap", 0, "normalFadeout")
    parts = name.split('_')
    for i in range(1, len(parts) - 1):
        if parts[i].isdigit():
            return '_'.join(parts[:i]), int(parts[i]), '_'.join(parts[i + 1:])
    return None

def main():
    xdir, names_path, outdir = sys.argv[1], sys.argv[2], sys.argv[3]
    names = json.load(open(names_path)) if os.path.exists(names_path) else {}
    fxc = {}; shd = {}; errs = []; arks_by_hash = {}
    files = sorted(glob.glob(os.path.join(xdir, '*')))
    for f in files:
        base = os.path.basename(f); stem, ext = base.rsplit('.', 1)
        ark, idx, hsh = stem.rsplit('_', 2)
        key = hsh
        arks_by_hash.setdefault(hsh, []).append(ark)
        d = open(f, 'rb').read()
        try:
            if ext == 'fxc':
                r = P.parse_cxf(d)
                combos = []
                for c in r['combos']:
                    vs = S.parse(c['vs_blob']); ps = S.parse(c['ps_blob'])
                    combos.append(dict(
                        name=c['name'], vs_params=c['vs_params'], ps_params=c['ps_params'],
                        vs=dict(version=vs['version'], size=len(c['vs_blob']), md5=hashlib.md5(c['vs_blob']).hexdigest(), ninstr=vs['ninstr'], texld=vs['texld'],
                                inputs=vs['inputs'], outputs=vs['outputs'], samplers=vs['samplers'], consts=vs['consts'], literals=vs['literals'], int_consts=vs['int_consts'],
                                bool_consts=vs['bool_consts'], rel_addr=vs['rel_addr'], flow=vs['flow'], out_regs=vs['out_regs'], ctab=vs['ctab']),
                        ps=dict(version=ps['version'], size=len(c['ps_blob']), md5=hashlib.md5(c['ps_blob']).hexdigest(), ninstr=ps['ninstr'], texld=ps['texld'],
                                inputs=ps['inputs'], samplers=ps['samplers'], consts=ps['consts'], literals=ps['literals'], int_consts=ps['int_consts'], bool_consts=ps['bool_consts'],
                                rel_addr=ps['rel_addr'], kill=ps['kill'], flow=ps['flow'], color_out=ps['color_out'], depth_out=ps['depth_out'], ctab=ps['ctab'])))
                fxc[key] = dict(hash=hsh, ark=ark, index=int(idx), name=names.get(hsh), size=len(d), ncombo=r['ncombo'], field8=r['field8'], combos=combos)
            else:
                r = P.parse_rdhs(d)
                combos = []
                for c in r['combos']:
                    layers = collections.OrderedDict()
                    consts = []
                    for gi, g in enumerate(c['groups']):
                        for e in g['entries']:
                            consts.append(dict(reg=e['reg'], count=e['count'], name=e['name'], stage=g['kind']))
                            lo = layer_of(e['name'])
                            if lo: layers.setdefault((lo[0], lo[1]), dict(layer=lo[0], index=lo[1], constants=[], samplers=[]))['constants'].append(lo[2])
                    samplers = []
                    for sl in c['sampler_lists']:
                        for smp in sl['entries']:
                            samplers.append(dict(reg=smp['reg'], name=smp['name'], stage=sl['kind']))
                            lo = layer_of(smp['name'])
                            if lo: layers.setdefault((lo[0], lo[1]), dict(layer=lo[0], index=lo[1], constants=[], samplers=[]))['samplers'].append(lo[2])
                    combos.append(dict(name=c['name'], constants=consts, group_sizes=[(g['kind'], g['n'], g['total']) for g in c['groups']],
                                       samplers=samplers, vertex=c['vertex'],
                                       layers=list(layers.values()), srds_sizes=[len(x) for x in c['srds']],
                                       srds_nonempty=[x.hex() for x in c['srds'] if x != b'\0\0\0\0']))
                shd[key] = dict(hash=hsh, ark=ark, index=int(idx), name=names.get(hsh), size=len(d), version=r['version'], ncombo=r['ncombo'], combos=combos)
        except Exception as e:
            errs.append((base, repr(e)))
    for dct in (fxc, shd):
        for h, x in dct.items(): x['arks'] = sorted(set(arks_by_hash[h]))
    json.dump(fxc, open(os.path.join(outdir, 'pc_fxc.json'), 'w'), indent=0, sort_keys=True)
    json.dump(shd, open(os.path.join(outdir, 'pc_shaders_layers.json'), 'w'), indent=0, sort_keys=True)
    print('fxc files', len(fxc), 'shaders files', len(shd), 'errors', len(errs))
    for e in errs[:20]: print('ERR', e)
    ncomb = sum(x['ncombo'] for x in fxc.values()); print('total fxc combos', ncomb, 'total shaders combos', sum(x['ncombo'] for x in shd.values()))
    # pairing: same hash-string set?
    print('fxc/shaders pairs by combo-name set match:', sum(1 for h, x in fxc.items() if any(set(c['name'] for c in x['combos']) == set(c['name'] for c in y['combos']) for y in shd.values() if y['ark'] == x['ark'] and abs(y['index'] - x['index']) < 4000)))
    # unique bytecode
    vsmd = collections.Counter(c['vs']['md5'] for x in fxc.values() for c in x['combos']); psmd = collections.Counter(c['ps']['md5'] for x in fxc.values() for c in x['combos'])
    print('unique vs blobs', len(vsmd), 'unique ps blobs', len(psmd))
    print('combo name prefix hist', collections.Counter(c['name'][:2] for x in fxc.values() for c in x['combos']).most_common())
    same_vs = same_ps = pairs = 0
    for x in fxc.values():
        by = {c['name']: c for c in x['combos']}
        for n, c in by.items():
            if n.startswith('0x') and ('2x' + n[2:]) in by:
                pairs += 1; o = by['2x' + n[2:]]
                same_vs += c['vs']['md5'] == o['vs']['md5']; same_ps += c['ps']['md5'] == o['ps']['md5']
    import statistics
    for pref in ('0x', '1x', '2x', '3x', '4x'):
        cs = [c for x in fxc.values() for c in x['combos'] if c['name'].startswith(pref)]
        print('variant', pref, 'n', len(cs), 'ps ninstr mean %.1f' % statistics.mean(c['ps']['ninstr'] for c in cs), 'vs ninstr mean %.1f' % statistics.mean(c['vs']['ninstr'] for c in cs),
              'ps color_out hist', collections.Counter(tuple(c['ps']['color_out']) for c in cs).most_common(4), 'depth_out', sum(1 for c in cs if c['ps']['depth_out']),
              'ps samplers mean %.2f' % statistics.mean(len(c['ps']['samplers']) for c in cs), 'vs texld', sum(1 for c in cs if c['vs']['texld']), 'ps kill', sum(1 for c in cs if c['ps']['kill']),
              'vs outputs mean %.2f' % statistics.mean(len(c['vs']['outputs']) for c in cs))
    print('0x/2x pairs', pairs, 'same vs', same_vs, 'same ps', same_ps)
    print('srds nonempty count', sum(1 for x in shd.values() for c in x['combos'] if c['srds_nonempty']))
    print('vs input semantic sets', collections.Counter(tuple((i['usage'], i['index']) for i in c['vs']['inputs']) for x in fxc.values() for c in x['combos']).most_common(20))
    print('field8 vs size relation sample', [(x['field8'], x['size'], x['ncombo']) for x in list(fxc.values())[:8]])
    print('layer names', collections.Counter(l['layer'] for x in shd.values() for c in x['combos'] for l in c['layers']).most_common(60))
    print('vertex decl hist', collections.Counter(tuple((v['name'], v['type'], v['usage'], v['index']) for v in c['vertex']) for x in shd.values() for c in x['combos']).most_common(25))

if __name__ == '__main__':
    main()
