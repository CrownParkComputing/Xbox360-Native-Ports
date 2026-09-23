#!/usr/bin/env python3
"""Name the D3D9 band entry points from static evidence (+ runtime counts if present).

Inputs : docs/d3d/w1a_features.json      (entry points)
         docs/d3d/w1a_features_all.json  (whole band, for callee/caller context)
         docs/d3d/mnhash_matches.json    (cross-title identity, optional)
         docs/d3d/captures/*/counts.json (runtime call counts, optional)
Output : docs/d3d/entrypoints.json, docs/d3d/entrypoints_disputed.md
"""
import json, os, sys, collections

D = os.path.expanduser('~/ss-recomp/docs/d3d')


def load(name, default=None):
    p = os.path.join(D, name)
    if not os.path.exists(p):
        return default
    with open(p) as f:
        return json.load(f)


eps = load('w1a_features.json') or {}
allf = load('w1a_features_all.json') or {}
matches = load('mnhash_matches.json') or {}

# Runtime counts from every capture that has them: {capture: {fnname: count}}
runtime = {}
capdir = os.path.join(D, 'captures')
if os.path.isdir(capdir):
    for cap in sorted(os.listdir(capdir)):
        c = load(os.path.join('captures', cap, 'counts.json'))
        if c:
            runtime[cap] = c


def dev_offsets(d):
    """Offsets written on the object in r3 (the device for state setters)."""
    out = []
    for s in d.get('stores', []):
        if s.startswith('r3+'):
            try:
                out.append(int(s[3:]))
            except ValueError:
                pass
    return sorted(out)


def classify(va, d):
    """Return (name, tier, klass, evidence[])."""
    ev = []
    pm4 = d.get('pm4') or []
    regs = d.get('reg_imm') or []
    imports = d.get('imports') or []
    n = d.get('ninsn') or 0
    gpr = d.get('arity', {}).get('gpr') or []
    nargs = (max(gpr) - 3 + 1) if gpr else 0
    offs = dev_offsets(d)

    def has(*names):
        return any(any(x.startswith(nm) for nm in names) for x in pm4)

    # --- kernel-import seeds -------------------------------------------------
    vd = [i for i in imports if i.startswith('__imp__Vd')]
    if vd:
        ev.append('calls ' + ','.join(sorted(vd)[:3]))
        if any('VdSwap' in v for v in vd):
            return 'D3DDevice_Present', 'A', 'present', ev
        if any('InitializeRingBuffer' in v for v in vd):
            return 'D3DDevice_InitializeRingBuffer', 'A', 'init', ev
        if any('InitializeEngines' in v or 'SetGraphicsInterruptCallback' in v for v in vd):
            return 'Direct3D_CreateDevice', 'A', 'init', ev
        if any('ShutdownEngines' in v for v in vd):
            return 'D3DDevice_Shutdown', 'A', 'init', ev
        if any('RetrainEDRAM' in v for v in vd):
            return 'D3DDevice_RetrainEDRAM', 'A', 'edram', ev
        if any('QueryVideoMode' in v or 'SetDisplayMode' in v or 'DisplayGamma' in v for v in vd):
            return 'D3DDevice_DisplayMode', 'A', 'display', ev
        return 'D3D_Vd_' + va, 'B', 'init', ev

    # --- draw family ---------------------------------------------------------
    if has('DRAW_INDX'):
        ev.append('emits ' + ','.join(x for x in pm4 if x.startswith('DRAW')))
        ev.append('writes VGT_DRAW_INITIATOR' if any('0x2205' in r for r in regs) else '')
        # DRAW_INDX[2] = auto-index (no index buffer); DRAW_INDX[4] = indexed
        indexed = has('DRAW_INDX[4]')
        up = nargs >= 6  # user-pointer variants take extra ptr/stride args
        name = ('D3DDevice_DrawIndexedVertices' if indexed else 'D3DDevice_DrawVertices') + ('UP' if up else '')
        return name, 'A', 'draw', [e for e in ev if e]

    # --- refcount ------------------------------------------------------------
    if d.get('atomic'):
        ev.append('lwarx/stwcx refcount')
        if n > 12:
            return 'D3DResource_Release', 'A', 'lifetime', ev
        return 'D3DResource_AddRef', 'B', 'lifetime', ev

    # --- PM4-flavoured services ---------------------------------------------
    if has('SET_BIN_MASK', 'SET_BIN_SELECT'):
        ev.append('emits ' + ','.join(x for x in pm4 if 'BIN' in x))
        return 'D3DDevice_Tiling', 'B', 'tiling', ev
    if has('WAIT_REG_MEM'):
        ev.append('emits WAIT_REG_MEM')
        return 'D3DDevice_BlockUntilIdle', 'B', 'sync', ev
    if has('EVENT_WRITE'):
        ev.append('emits ' + ','.join(x for x in pm4 if x.startswith('EVENT')))
        return 'D3DDevice_InsertFence', 'B', 'sync', ev
    if has('IM_LOAD_IMMEDIATE'):
        ev.append('emits IM_LOAD_IMMEDIATE (shader upload)')
        return 'D3DDevice_SetShader', 'B', 'shader', ev
    if has('INVALIDATE_STATE'):
        ev.append('emits INVALIDATE_STATE')
        return 'D3DDevice_ResetState', 'B', 'state', ev
    if has('SET_CONSTANT'):
        ev.append('emits SET_CONSTANT')
        return 'D3DDevice_SetConstant', 'B', 'constants', ev

    # --- register writers ----------------------------------------------------
    if regs:
        ev.append('writes ' + ','.join(regs[:4]))
        if any('SHADER_CONSTANT' in r for r in regs):
            return 'D3DDevice_SetShaderConstantF', 'B', 'constants', ev
        return 'D3DDevice_SetRegister', 'C', 'state', ev

    # --- device state setters (dirty mask) -----------------------------------
    if d.get('dirty'):
        ev.append('ORs dirty bit (%s) and writes %s' %
                  (';'.join(d['dirty'][:2]), ','.join('device+%d' % o for o in offs[:3]) or 'device'))
        if offs:
            return 'D3DDevice_SetState_off%d' % offs[0], 'B', 'state', ev
        return 'D3DDevice_SetState', 'C', 'state', ev

    # --- vtable dispatchers --------------------------------------------------
    if d.get('indirect'):
        ev.append('indirect dispatch (bctr)')
        return 'D3D_Dispatch_' + va, 'C', 'dispatch', ev

    # --- structural fallbacks ------------------------------------------------
    if n <= 6 and nargs <= 2 and not d.get('stores'):
        ev.append('tiny accessor, %d instr, %d arg(s), no stores' % (n, nargs))
        return 'D3D_Get_' + va, 'C', 'accessor', ev
    if offs:
        ev.append('writes %s without dirty bit' % ','.join('r3+%d' % o for o in offs[:3]))
        return 'D3D_Set_' + va, 'C', 'setter', ev
    ev.append('%d instr, %d arg(s)' % (n, nargs))
    return 'D3D_' + va, 'C', 'unknown', ev


rows = []
for va, d in sorted(eps.items()):
    name, tier, klass, ev = classify(va, d)
    m = matches.get(va) or matches.get('0x' + va)
    if m:
        ev.append('body identical to %s' % (m if isinstance(m, str) else str(m)[:60]))
        if tier == 'C':
            tier = 'B'
    rt = {}
    for cap, counts in runtime.items():
        key = 'ep_' + va if va != '888EB588' else 'Present'
        s = counts.get('summary', counts) if isinstance(counts, dict) else {}
        v = s.get(key)
        if isinstance(v, dict):
            rt[cap] = {'total': v.get('total'), 'max_per_frame': v.get('max_per_frame'),
                       'frames': v.get('frames_with_calls')}
        elif v is not None:
            rt[cap] = {'total': v}
    if rt:
        ev.append('runtime: ' + ', '.join(
            '%s total=%s max/frame=%s frames=%s' % (c, r.get('total'), r.get('max_per_frame'), r.get('frames'))
            for c, r in rt.items()))
        # cadence classifies the call: per-draw, per-frame, or load-time only
        mx = max((r.get('max_per_frame') or 0) for r in rt.values())
        fr = max((r.get('frames') or 0) for r in rt.values())
        cadence = ('per-draw' if mx >= 100 else
                   'per-pass' if mx >= 5 else
                   'per-frame' if fr > 500 else 'load-time')
        ev.append('cadence: ' + cadence)
        if cadence == 'load-time' and klass in ('unknown', 'accessor', 'setter'):
            klass = 'load-time'
        if tier == 'C' and any((r.get('total') or 0) > 0 for r in rt.values()):
            tier = 'B'
    rows.append({
        'va': '0x' + va,
        'name': name,
        'tier': tier,
        'class': klass,
        'arity': (max(d.get('arity', {}).get('gpr') or [2]) - 3 + 1),
        'ninsn': d.get('ninsn'),
        'callers_count': d.get('callers_out'),
        'callers_sample': d.get('callers_sample', [])[:6],
        'runtime': rt,
        'evidence': [e for e in ev if e],
    })

rows.sort(key=lambda r: -(r['callers_count'] or 0))
with open(os.path.join(D, 'entrypoints.json'), 'w') as f:
    json.dump(rows, f, indent=1)

tiers = collections.Counter(r['tier'] for r in rows)
klass = collections.Counter(r['class'] for r in rows)
with open(os.path.join(D, 'entrypoints_disputed.md'), 'w') as f:
    f.write('# Entry points still unnamed (tier C)\n\n')
    f.write('Tiers: %s\nClasses: %s\n\n' % (dict(tiers), dict(klass)))
    f.write('| va | callers | instr | args | why unknown | runtime evidence needed |\n')
    f.write('|---|---|---|---|---|---|\n')
    for r in rows:
        if r['tier'] != 'C':
            continue
        need = ('argument capture + next-draw register delta'
                if r['class'] in ('state', 'setter', 'unknown') else
                'call-count profile (per-draw / per-frame / load-time) + arg capture')
        f.write('| %s | %s | %s | %s | %s | %s |\n' %
                (r['va'], r['callers_count'], r['ninsn'], r['arity'],
                 '; '.join(r['evidence'])[:90], need))

print('entry points:', len(rows))
print('tiers:', dict(tiers))
print('classes:', dict(klass))
print('runtime captures merged:', list(runtime) or 'none')
