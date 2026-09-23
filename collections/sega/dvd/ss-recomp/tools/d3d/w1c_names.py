#!/usr/bin/env python3
"""W1-c: best-effort ARK filename recovery for the .fxc/.shaders hashes by hashing candidate names
(hash = hash*31 + lowercase(signed byte), per splitsecond-native FORMAT.md)."""
import json, sys, re, itertools
def arkhash(name):
    h = 0
    for b in name.encode('latin1'):
        v = b - 256 if b >= 128 else b
        if 65 <= v <= 90: v += 32
        h = (h * 31 + v) & 0xffffffff
    return h
hits = json.load(open(sys.argv[1])); exe = sys.argv[2]; vc = sys.argv[3]; out = sys.argv[4]
want = {}
for x in hits: want.setdefault(x['hash'], set()).add(x['ark'])
cands = set()
def add(base):
    for ext in ('.fxc', '.shaders'):
        cands.add(base + ext)
strs = set()
for m in re.finditer(rb'[\x20-\x7e]{4,}', open(exe, 'rb').read()):
    s = m.group().decode('latin1')
    if '/' in s or '.fxc' in s or '.shaders' in s: strs.add(s)
for s in strs:
    s2 = s.split('|', 1)[1] if '|' in s else s
    for base in (s2, s2.rsplit('.', 1)[0]):
        add(base); add(base + '/materials'); cands.add(base)
vehicles = sorted(set(re.findall(r'/Vehicles/ColorPalettes/([A-Za-z0-9_]+)', open(vc, 'rb').read().decode('latin1'))))
D1 = ['Frontend', 'Race', 'InGame', 'Ingame', 'Game', 'Track', 'Damage', 'Low', 'High', 'Lod', 'Rear', 'Front', 'Generic', 'Common', 'Shared', 'Wreck', 'Ghost', 'Drone', 'Nemesis']
D2 = ['Bodies', 'Wheels', 'Interiors', 'Drivers', 'Tyres', 'Glass', 'Damage', 'Body', 'Parts', 'Chassis', 'Materials', 'Shadows', 'Lights', 'Cockpits', 'Wrecks', 'Engines', 'Undercarriage']
for v in vehicles:
    add(f'Vehicles/{v}/{v}'); add(f'Vehicles/{v}/materials')
    for d2 in D2:
        add(f'Vehicles/{d2}/{v}/{v}'); add(f'Vehicles/{d2}/{v}/materials'); add(f'Vehicles/{d2}/{v}')
        for d1 in D1:
            add(f'Vehicles/{d1}/{d2}/{v}/{v}'); add(f'Vehicles/{d1}/{d2}/{v}/materials'); add(f'Vehicles/{d1}/{d2}/{v}')
levels = ['Airport_Test_03', 'Docks', 'Downtown', 'End_Sequence', 'Graveyard', 'Nem_Downtown', 'Nem_Graveyard', 'Nem_Quarry', 'Nem_Storm', 'Nem_Training', 'Nem_Warehouse', 'Powerplant', 'Quarry', 'Frontend', 'Seclusion', 'Global', 'Common', 'Shared']
LX = ['day', 'night', 'dusk', 'dawn', 'default', 'lightrig', 'lightrig01', 'lightrig_01', 'sunny', 'overcast', 'storm', 'rain', 'morning', 'evening', 'afternoon', 'noon', 'sunset', 'sunrise', 'lr01', 'lr1', '01', '02', '1', '2', 'a', 'b', 'main', 'materials', 'shared', 'common', 'global', 'track', 'sectors', 'powerplays', 'props', 'environment', 'env', 'terrain', 'road', 'buildings', 'vegetation', 'water', 'sky']
for L in levels:
    for pre in ('Environments/Levels/%s' % L, 'Environments/%s' % L, 'Levels/%s' % L, L):
        add(pre + '/' + L); add(pre + '/materials'); add(pre); add(pre + '/Sectors/materials'); add(pre + '/Sectors/' + L)
        add(pre + '/' + L.lower())
        for x in LX:
            add(f'{pre}/{L}_{x}'); add(f'{pre}/{x}'); add(f'{pre}/{x}/materials'); add(f'{pre}/{L}_{x}/materials'); add(f'{pre}/Sectors/{x}/materials'); add(f'{pre}/Sectors/{L}_{x}/materials'); add(f'{pre}/{x}_{L}')
for g in ('global_shader_combos', 'global_light_shader_combos', 'global_particle_shader_combos', 'global_ui_shader_combos', 'global_post_shader_combos', 'global_water_shader_combos', 'global_shadow_shader_combos', 'global_debug_shader_combos', 'global_frontend_shader_combos', 'global_hud_shader_combos', 'global_sky_shader_combos', 'global_deferred_shader_combos', 'global_vehicle_shader_combos', 'global_env_shader_combos', 'global_effects_shader_combos', 'global_fx_shader_combos'):
    add('global_shader_combos/' + g); add(g + '/' + g); add(g)
names = {}
for c in cands:
    h = '%08x' % arkhash(c)
    if h in want: names[h] = c
json.dump(names, open(out, 'w'), indent=1, sort_keys=True)
print('candidates', len(cands), 'hashes wanted', len(want), 'named', len(names))
for h, n in sorted(names.items(), key=lambda kv: kv[1])[:60]: print(h, n, sorted(want[h]))
