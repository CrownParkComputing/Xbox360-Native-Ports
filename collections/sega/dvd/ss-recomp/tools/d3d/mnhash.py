#!/usr/bin/env python3
"""Mnemonic-sequence hashes for recompiled PPC functions.

Supports rexglue output (DEFINE_REX_FUNC(sub_X) { ... }) and RetroRecomp output
(PPC_FUNC_IMPL(__imp__sub_X) { ... }). The original PPC asm is in
"\t// mnemonic operands" comments; only the mnemonic is hashed (operands dropped),
so relocated copies of the same library function in different titles match.

Usage:
  mnhash.py <src_dir_or_glob> [<src_dir_or_glob>...] -o out.json
  mnhash.py --match mnhash_ss.json mnhash_hydro.json [more.json] -o mnhash_matches.json [--min 12]
"""
import sys, re, json, glob, os, hashlib, argparse, collections

FUNC_RE = re.compile(r'^(?:DEFINE_REX_FUNC|PPC_FUNC_IMPL)\((?:__imp__)?sub_([0-9A-Fa-f]{8})\)\s*\{')
ASM_RE = re.compile(r'^\t// ([a-z][a-z0-9_.+-]*)(?:\s+(.*))?$')
CALLEE_RE = re.compile(r'\bsub_([0-9A-Fa-f]{8})\(ctx, base\)')
IMPORT_RE = re.compile(r'\b__imp__(?!sub_)(\w+)\(ctx, base\)')

def parse_file(path, out):
    cur = None; mn = []; callees = []; imports = []
    with open(path, 'r', errors='replace') as f:
        for line in f:
            if cur is None:
                m = FUNC_RE.match(line)
                if m:
                    cur = int(m.group(1), 16); mn = []; callees = []; imports = []
                continue
            if line.startswith('}'):
                h = hashlib.sha1(' '.join(mn).encode()).hexdigest()[:16]
                out['%08X' % cur] = {'hash': h, 'ninstr': len(mn),
                                     'callees': sorted(set(callees)), 'imports': sorted(set(imports))}
                cur = None
                continue
            m = ASM_RE.match(line)
            if m:
                mn.append(m.group(1)); continue
            for c in CALLEE_RE.findall(line):
                v = int(c, 16)
                if v != cur: callees.append('%08X' % v)
            for i in IMPORT_RE.findall(line):
                imports.append(i)

def expand(spec):
    if os.path.isdir(spec):
        files = glob.glob(os.path.join(spec, '*recomp.*.cpp')) + glob.glob(os.path.join(spec, 'ppc_recomp.*.cpp'))
    else:
        files = glob.glob(spec)
    return sorted(set(files))

def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('inputs', nargs='+')
    ap.add_argument('-o', '--out', required=True)
    ap.add_argument('--match', action='store_true', help='inputs are mnhash JSONs: first is SS, rest are other titles')
    ap.add_argument('--min', type=int, default=12)
    a = ap.parse_args()
    if a.match:
        ss = json.load(open(a.inputs[0]))
        matches = {}
        stats = collections.OrderedDict()
        for other_path in a.inputs[1:]:
            title = os.path.basename(other_path).replace('mnhash_', '').replace('.json', '')
            other = json.load(open(other_path))
            by_hash = collections.defaultdict(list)
            for va, e in other.items():
                if e['ninstr'] >= a.min: by_hash[e['hash']].append(va)
            n = nu = 0
            for va, e in ss.items():
                if e['ninstr'] < a.min: continue
                c = by_hash.get(e['hash'])
                if not c: continue
                n += 1
                if len(c) == 1: nu += 1
                # keep the first title that matched; record all candidates
                if va not in matches:
                    matches[va] = {'title': title, 'va': c[0], 'ninstr': e['ninstr'],
                                   'unique': len(c) == 1, 'candidates': c}
            stats[title] = {'matched': n, 'unique': nu, 'ss_eligible': sum(1 for e in ss.values() if e['ninstr'] >= a.min)}
        json.dump(matches, open(a.out, 'w'), indent=1, sort_keys=True)
        print(json.dumps(stats, indent=1))
        return
    out = {}
    files = [f for s in a.inputs for f in expand(s)]
    for f in files: parse_file(f, out)
    json.dump(out, open(a.out, 'w'), indent=1, sort_keys=True)
    print('%s: %d functions from %d files' % (a.out, len(out), len(files)))

if __name__ == '__main__': main()
