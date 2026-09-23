#!/usr/bin/env python3
"""Dump the recovered PPC asm of band functions: w1a_dump.py VA [VA...] -> stdout"""
import sys, os
sys.path.insert(0, os.path.dirname(__file__))
from w1a_lib import *
F = load(); C = callers_map(F)
for v in sys.argv[1:]:
    v = v.upper().replace('0X','')
    f = F[v]
    print('===== %s ninsn=%d callers=%d %s arity=%s imports=%s' % (v, f['ninsn'], len(C.get(v,[])), sorted(set(C.get(v,[])))[:8], f['arity'], f['imports']))
    for i, a in enumerate(f['asm']): print('%4d %s' % (i, a))
    print()
