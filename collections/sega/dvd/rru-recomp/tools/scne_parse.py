#!/usr/bin/env python3
"""Parser for Bugbear .scne scene/geometry files (Ridge Racer Unbounded, X360).

Container: 'scne' magic + u32 version (6), then a flat big-endian tagged
stream.  Chunks carry NO size field: every chunk is
    tag(4cc) + u32 version + u32 count
followed by `count` records whose layout is fixed per (tag, version).
Chunks nest logically (a model record *contains* pmsh/mesh/... chunks
inline), so the file can only be read with full knowledge of each record
layout.  See docs/SCNE_FORMAT.md.

Usage:
  scne_parse.py --info file.scne          dump chunk tree + mesh table
  scne_parse.py --obj out.obj file.scne   export meshes to Wavefront OBJ
"""
import argparse
import math
import os
import struct
import sys


class R:
    """Big-endian cursor reader."""

    def __init__(self, data):
        self.d = data
        self.o = 0

    def u32(self):
        v = struct.unpack_from('>I', self.d, self.o)[0]
        self.o += 4
        return v

    def i32(self):
        v = struct.unpack_from('>i', self.d, self.o)[0]
        self.o += 4
        return v

    def f32(self):
        v = struct.unpack_from('>f', self.d, self.o)[0]
        self.o += 4
        return v

    def f32s(self, n):
        v = struct.unpack_from('>%df' % n, self.d, self.o)
        self.o += 4 * n
        return v

    def tag(self):
        v = self.d[self.o:self.o + 4]
        self.o += 4
        return v

    def pstr(self):
        n = self.u32()
        if n > 4096:
            raise ParseError('implausible string length 0x%x at 0x%x' % (n, self.o - 4))
        s = self.d[self.o:self.o + n]
        self.o += n
        return s.decode('latin-1')

    def bytes(self, n):
        v = self.d[self.o:self.o + n]
        self.o += n
        return v

    def skip(self, n):
        self.o += n

    def eof(self):
        return self.o >= len(self.d)


class ParseError(Exception):
    pass


class Chunk:
    def __init__(self, tag, ver, count, offset):
        self.tag = tag
        self.ver = ver
        self.count = count
        self.offset = offset
        self.children = []   # nested Chunk objects (flattened per record)
        self.info = {}       # decoded payload summary

    def dump(self, depth=0, out=sys.stdout):
        extra = ''
        if self.info:
            keys = ('name', 'path', 'slot', 'scale', 'bbox_min', 'bbox_max',
                    'stride', 'type')
            bits = []
            for k in keys:
                if k in self.info:
                    bits.append('%s=%s' % (k, self.info[k]))
            if bits:
                extra = '  ' + ' '.join(bits)
        out.write('%s%s v%d n=%d @0x%x%s\n' %
                  ('  ' * depth, self.tag, self.ver, self.count, self.offset, extra))
        for c in self.children:
            c.dump(depth + 1, out)


class Mesh:
    def __init__(self, model_name, mesh_name):
        self.model = model_name
        self.name = mesh_name
        self.matrix = None       # 4x4 row-major (rows = basis vectors + translation)
        self.batches = []        # list of Batch


class Batch:
    def __init__(self):
        self.scale = 1.0
        self.bbox_min = (0, 0, 0)
        self.bbox_max = (0, 0, 0)
        self.material = None
        self.textures = []       # (slot, path)
        self.verts = []          # (x, y, z) floats, batch scale applied
        self.normals = []        # (nx, ny, nz)
        self.uvs = []            # (u, v)
        self.tris = []           # (a, b, c) 0-based


class Scne:
    def __init__(self):
        self.version = None
        self.root = []           # top-level Chunk list
        self.meshes = []         # Mesh list
        self.dummies = []        # (name, matrix)
        self.xrefs = []          # (name, path, matrix) sub-scene instances


def expect(cond, msg, r):
    if not cond:
        raise ParseError('%s at 0x%x' % (msg, r.o))


def read_chunk_header(r, want=None):
    off = r.o
    tag = r.tag()
    try:
        stag = tag.decode('ascii')
    except UnicodeDecodeError:
        raise ParseError('bad chunk tag %r at 0x%x' % (tag, off))
    if want is not None and stag != want:
        raise ParseError('expected chunk %r, got %r at 0x%x' % (want, stag, off))
    ver = r.u32()
    count = r.u32()
    return Chunk(stag, ver, count, off)


# ---------------------------------------------------------------- leaf chunks

def parse_txtr(r, batch):
    ck = read_chunk_header(r, 'txtr')
    expect(ck.ver == 0, 'txtr version %d' % ck.ver, r)
    for _ in range(ck.count):
        slot = r.u32()
        sub = r.tag().decode('latin-1')      # asset class tag, e.g. 'bmap'
        path = r.pstr()
        sc = Chunk('txtr.rec', 0, 0, r.o)
        sc.info = {'slot': slot, 'type': sub, 'path': path}
        ck.children.append(sc)
        if batch is not None:
            batch.textures.append((slot, path))
    return ck


def parse_mtrl(r, batch):
    ck = read_chunk_header(r, 'mtrl')
    expect(ck.ver == 4, 'mtrl version %d' % ck.ver, r)
    for _ in range(ck.count):
        name = r.pstr()
        flags = r.u32()
        params = r.bytes(20)             # 5 dwords of material params
        sc = Chunk('mtrl.rec', 0, 0, r.o)
        sc.info = {'name': name, 'type': '0x%x' % flags}
        ck.children.append(sc)
        if batch is not None and batch.material is None:
            batch.material = name
        sc.children.append(parse_txtr(r, batch))
    return ck


def parse_vert(r, batch):
    ck = read_chunk_header(r, 'vert')
    expect(ck.ver == 3, 'vert version %d' % ck.ver, r)
    scale = batch.scale if batch is not None else 1.0
    if batch is not None:
        cx = (batch.bbox_min[0] + batch.bbox_max[0]) * 0.5
        cy = (batch.bbox_min[1] + batch.bbox_max[1]) * 0.5
        cz = (batch.bbox_min[2] + batch.bbox_max[2]) * 0.5
    else:
        cx = cy = cz = 0.0
    n = ck.count
    if n:
        raw = struct.unpack_from('>' + '4hI2h' * n, r.d, r.o)
        r.skip(16 * n)
        tau = 2.0 * math.pi
        for i in range(n):
            b = raw[i * 7:(i + 1) * 7]
            x, y, z, _pad = b[0], b[1], b[2], b[3]
            tbn = b[4]
            u, v = b[5], b[6]
            if batch is not None:
                batch.verts.append((cx + x * scale, cy + y * scale,
                                    cz + z * scale))
                # packed TBN: yaw[0:11] (1/2048 rev), pitch[11:22] (signed,
                # stored doubled, so unit = pi/2048), roll[22:32] (tangent).
                yaw = (tbn & 0x7FF) * tau / 2048.0
                sp = (tbn >> 11) & 0x7FF
                if sp >= 1024:
                    sp -= 2048
                pitch = sp * math.pi / 2048.0
                cp = math.cos(pitch)
                batch.normals.append((cp * math.cos(yaw), math.sin(pitch),
                                      -cp * math.sin(yaw)))
                batch.uvs.append((u / 1024.0, v / 1024.0))
    ck.info = {'stride': 16}
    return ck


def parse_tria(r, batch):
    ck = read_chunk_header(r, 'tria')
    expect(ck.ver == 0, 'tria version %d' % ck.ver, r)
    n = ck.count
    if n:
        idx = struct.unpack_from('>%dH' % (3 * n), r.d, r.o)
        r.skip(6 * n)
        if batch is not None:
            for i in range(n):
                batch.tris.append((idx[3 * i], idx[3 * i + 1], idx[3 * i + 2]))
    return ck


def parse_btch(r, mesh):
    ck = read_chunk_header(r, 'btch')
    expect(ck.ver == 2, 'btch version %d' % ck.ver, r)
    for _ in range(ck.count):
        batch = Batch()
        a, b, c = r.u32(), r.u32(), r.u32()
        batch.scale = r.f32()
        batch.bbox_min = r.f32s(3)
        batch.bbox_max = r.f32s(3)
        sc = Chunk('btch.rec', 0, 0, r.o)
        sc.info = {'scale': '%g' % batch.scale,
                   'bbox_min': '(%.2f,%.2f,%.2f)' % batch.bbox_min,
                   'bbox_max': '(%.2f,%.2f,%.2f)' % batch.bbox_max}
        ck.children.append(sc)
        sc.children.append(parse_mtrl(r, batch))
        sc.children.append(parse_vert(r, batch))
        sc.children.append(parse_tria(r, batch))
        sc.children.append(parse_edgm(r))
        if mesh is not None:
            mesh.batches.append(batch)
    return ck


def parse_edgm(r):
    ck = read_chunk_header(r, 'edgm')
    expect(ck.ver == 0, 'edgm version %d' % ck.ver, r)
    expect(ck.count == 0, 'edgm count %d unsupported' % ck.count, r)
    return ck


def parse_mesh(r, scn, model_name):
    ck = read_chunk_header(r, 'mesh')
    expect(ck.ver == 0, 'mesh version %d' % ck.ver, r)
    for _ in range(ck.count):
        name = r.pstr()
        mesh = Mesh(model_name, name)
        sc = Chunk('mesh.rec', 0, 0, r.o)
        sc.info = {'name': name}
        ck.children.append(sc)
        sc.children.append(parse_btch(r, mesh))
        scn.meshes.append(mesh)
    return ck


def parse_pmsh(r):
    ck = read_chunk_header(r, 'pmsh')
    expect(ck.ver == 0, 'pmsh version %d' % ck.ver, r)
    for _ in range(ck.count):
        a, b, c = r.u32(), r.u32(), r.u32()
        ext = r.f32s(3)
        sc = Chunk('pmsh.rec', 0, 0, r.o)
        sc.info = {'bbox_max': '(%.2f,%.2f,%.2f)' % ext}
        ck.children.append(sc)
    return ck


def parse_shpe(r):
    ck = read_chunk_header(r, 'shpe')
    expect(ck.ver == 0, 'shpe version %d' % ck.ver, r)
    for _ in range(ck.count):
        kind = r.u32()
        size = r.u32()
        r.bytes(size)                     # collision shape blob, self-sized
        sc = Chunk('shpe.rec', 0, 0, r.o)
        sc.info = {'type': 'kind=%d size=0x%x' % (kind, size)}
        ck.children.append(sc)
    return ck


def parse_kfra(r):
    ck = read_chunk_header(r, 'kfra')
    expect(ck.ver == 0, 'kfra version %d' % ck.ver, r)
    r.bytes(32 * ck.count)                # 8 dwords per keyframe
    return ck


def parse_dmmy(r, scn):
    ck = read_chunk_header(r, 'dmmy')
    expect(ck.ver == 0, 'dmmy version %d' % ck.ver, r)
    for _ in range(ck.count):
        mtx = r.f32s(16)
        name = r.pstr()
        sc = Chunk('dmmy.rec', 0, 0, r.o)
        sc.info = {'name': name}
        ck.children.append(sc)
        if scn is not None:
            scn.dummies.append((name, mtx))
    return ck


def parse_anim(r, scn):
    ck = read_chunk_header(r, 'anim')
    expect(ck.ver == 0, 'anim version %d' % ck.ver, r)
    for _ in range(ck.count):
        ck.children.append(parse_kfra(r))
        ck.children.append(parse_dmmy(r, scn))
        r.bytes(12)                       # -1, hash?, 0
    return ck


def parse_modl(r, scn):
    ck = read_chunk_header(r, 'modl')
    expect(ck.ver == 0, 'modl version %d' % ck.ver, r)
    for _ in range(ck.count):
        name = r.pstr()
        props = r.pstr()                  # e.g. 'static' or '#'-separated tags
        mtx = r.f32s(16)
        bmin = r.f32s(3)
        bmax = r.f32s(3)
        sc = Chunk('modl.rec', 0, 0, r.o)
        sc.info = {'name': name, 'type': props,
                   'bbox_min': '(%.2f,%.2f,%.2f)' % bmin,
                   'bbox_max': '(%.2f,%.2f,%.2f)' % bmax}
        ck.children.append(sc)
        nmesh0 = len(scn.meshes)
        while True:
            peek = r.d[r.o:r.o + 4].decode('latin-1')
            if peek == 'pmsh':
                sc.children.append(parse_pmsh(r))
            elif peek == 'mesh':
                sc.children.append(parse_mesh(r, scn, name))
            elif peek == 'shpe':
                sc.children.append(parse_shpe(r))
            elif peek == 'anim':
                sc.children.append(parse_anim(r, scn))
                break
            else:
                raise ParseError('unknown chunk %r in modl record at 0x%x'
                                 % (peek, r.o))
        for m in scn.meshes[nmesh0:]:
            m.matrix = mtx
    return ck


def parse_ltpd(r):
    ck = read_chunk_header(r, 'ltpd')
    expect(ck.ver == 1, 'ltpd version %d' % ck.ver, r)
    for _ in range(ck.count):
        r.f32s(16)                        # matrix
        r.bytes(44)                       # color rgb, intensity, ranges, flags
    return ck


def parse_ssce(r, scn):
    """Sub-scene cross-references: instances of other .scne files."""
    ck = read_chunk_header(r, 'ssce')
    expect(ck.ver == 2, 'ssce version %d' % ck.ver, r)
    for _ in range(ck.count):
        mtx = r.f32s(16)
        a, b = r.u32(), r.u32()
        name = r.pstr()
        sub = r.tag().decode('latin-1')   # asset class, 'scne'
        path = r.pstr()
        sc = Chunk('ssce.rec', 0, 0, r.o)
        sc.info = {'name': name, 'type': sub, 'path': path}
        ck.children.append(sc)
        if scn is not None:
            scn.xrefs.append((name, path, mtx))
    return ck


def parse_aprl(r):
    """Approach/portal volumes: 8-corner boxes."""
    ck = read_chunk_header(r, 'aprl')
    expect(ck.ver == 0, 'aprl version %d' % ck.ver, r)
    for _ in range(ck.count):
        kind = r.u32()
        r.f32s(24)                        # 8 corner points (xyz)
    return ck


def parse_airt(r):
    """AI routes: list of sections (aisc), each a road cross-slice."""
    ck = read_chunk_header(r, 'airt')
    expect(ck.ver == 0, 'airt version %d' % ck.ver, r)
    for _ in range(ck.count):
        sub = read_chunk_header(r, 'aisc')
        expect(sub.ver == 1, 'aisc version %d' % sub.ver, r)
        r.f32s(10 * sub.count)            # left pt, right pt, 4 params
        a, b = r.u32(), r.u32()
        name = r.pstr()                   # condition, e.g. 'IfRouteDriven_0'
        sc = Chunk('airt.rec', 0, sub.count, r.o)
        if name:
            sc.info = {'name': name}
        ck.children.append(sc)
    return ck


def parse_fixed(r, tag, vers, recsize):
    ck = read_chunk_header(r, tag)
    expect(ck.ver in vers, '%s version %d' % (tag, ck.ver), r)
    r.bytes(recsize * ck.count)           # trsp: 4x4 matrix; trcp: 3 points
    return ck


def parse_tvlm(r):
    """Track volumes: oriented box volumes bounded by 'tvpl' planes."""
    ck = read_chunk_header(r, 'tvlm')
    expect(ck.ver == 1, 'tvlm version %d' % ck.ver, r)
    for _ in range(ck.count):
        r.f32s(16)                        # matrix
        r.f32s(6)                         # bounds / params
        name = r.pstr()                   # e.g. 'building#volume'
        sub = read_chunk_header(r, 'tvpl')
        expect(sub.ver == 0, 'tvpl version %d' % sub.ver, r)
        r.f32s(4 * sub.count)             # plane equations nx,ny,nz,d
        sc = Chunk('tvlm.rec', 0, sub.count, r.o)
        sc.info = {'name': name}
        ck.children.append(sc)
    return ck


def parse_generic_empty(r, tag, vers):
    ck = read_chunk_header(r, tag)
    expect(ck.ver in vers, '%s version %d' % (tag, ck.ver), r)
    expect(ck.count == 0, '%s count %d unsupported' % (tag, ck.count), r)
    return ck




def parse_named_float_records(r, tag_name):
    """vhcl physics chunks (vsph/vbox/vect/...): count records of
    {u32 name_len, name, K floats}. K varies per tag and is auto-detected by
    locating the next record's plausible length-prefixed name."""
    ck = read_chunk_header(r, tag_name)
    recs = []
    def looks_like_name(off):
        if off + 4 > len(r.d):
            return True  # EOF counts as a boundary
        import struct as _s
        (ln,) = _s.unpack('>I', r.d[off:off+4])
        if not (1 <= ln <= 64) or off + 4 + ln > len(r.d):
            return False
        chunk = r.d[off+4:off+4+ln]
        return all(32 <= b < 127 for b in chunk)
    for i in range(ck.count):
        name = r.pstr()
        start = r.o
        off = start
        while off < len(r.d) and not looks_like_name(off) and not r.d[off:off+4].isalpha():
            off += 4
        nfloats = (off - start) // 4
        import struct as _s
        vals = list(_s.unpack('>%df' % nfloats, r.d[start:start+nfloats*4]))
        r.o = start + nfloats * 4
        recs.append((name, vals))
    c = Chunk(tag_name, ck.ver, ck.count, ck.offset)
    c.info["records"] = [n for n,_ in recs]
    c.records = recs
    return c


VHCL_TAGS = (b'vsph', b'vbox', b'vect', b'line', b'tetr')

def parse_vhcl_chunk(r, tag_name):
    """Vehicle physics chunks. vsph/vbox carry length-prefixed record names
    (collision spheres/boxes); vect/line/tetr are raw arrays (the deformation
    lattice: vertices, edges, tetrahedra). Record sizes vary per chunk and are
    measured by scanning to the next known tag (or EOF)."""
    ck = read_chunk_header(r, tag_name)
    c = Chunk(tag_name, ck.ver, ck.count, ck.offset)
    if tag_name in ('vsph', 'vbox'):
        recs = []
        for _ in range(ck.count):
            name = r.pstr()
            start = r.o
            off = start
            while off + 4 <= len(r.d):
                import struct as _s
                (ln,) = _s.unpack('>I', r.d[off:off+4])
                if 1 <= ln <= 64 and off + 4 + ln <= len(r.d) and                    all(32 <= b < 127 for b in r.d[off+4:off+4+ln]):
                    break
                if r.d[off:off+4] in VHCL_TAGS or r.d[off:off+4] == b'dmmy':
                    break
                off += 4
            nf = (off - start) // 4
            import struct as _s
            recs.append((name, list(_s.unpack('>%df' % nf, r.d[start:start+nf*4]))))
            r.o = start + nf * 4
        c.records = recs
        c.info['names'] = [n for n, _ in recs]
    else:
        start = r.o
        end = len(r.d)
        pos = start
        while pos + 4 <= len(r.d):
            if r.d[pos:pos+4] in VHCL_TAGS or r.d[pos:pos+4] == b'dmmy':
                end = pos
                break
            pos += 1
        total = end - start
        rec = total // ck.count if ck.count else 0
        c.info['record_bytes'] = rec
        if ck.count and total % ck.count:
            c.info['tail_slack'] = total % ck.count
        c.raw = r.d[start:end]
        # Consume the whole measured span - stride estimates can floor-divide
        # short and must not desynchronize the stream.
        r.o = end
    return c

TOP_LEVEL = {
    'modl': lambda r, s: parse_modl(r, s),
    'ltpd': lambda r, s: parse_ltpd(r),
    'ssce': lambda r, s: parse_ssce(r, s),
    'aprl': lambda r, s: parse_aprl(r),
    'airt': lambda r, s: parse_airt(r),
    'trsp': lambda r, s: parse_fixed(r, 'trsp', (0,), 64),
    'trcp': lambda r, s: parse_fixed(r, 'trcp', (0,), 36),
    'tvlm': lambda r, s: parse_tvlm(r),
    # vhcl containers hoist these to top level, plus vehicle physics chunks.
    'dmmy': lambda r, s: parse_dmmy(r, s),
    'vsph': lambda r, s: parse_vhcl_chunk(r, 'vsph'),
    'vbox': lambda r, s: parse_vhcl_chunk(r, 'vbox'),
    'vect': lambda r, s: parse_vhcl_chunk(r, 'vect'),
    'line': lambda r, s: parse_vhcl_chunk(r, 'line'),
    'tetr': lambda r, s: parse_vhcl_chunk(r, 'tetr'),
}


def parse_scne(data):
    r = R(data)
    magic = r.tag()
    # .vhcl (vehicles) shares the chunk grammar under a different container
    # magic and version; its stream opens directly with 'modl'.
    if magic not in (b'scne', b'vhcl'):
        raise ParseError('not a scne/vhcl file')
    scn = Scne()
    scn.version = r.u32()
    if (magic == b'scne' and scn.version != 6) or (magic == b'vhcl' and scn.version != 2):
        raise ParseError('unsupported %s version %d' % (magic.decode(), scn.version))
    while not r.eof():
        peek = r.d[r.o:r.o + 4].decode('latin-1')
        fn = TOP_LEVEL.get(peek)
        if fn is None:
            raise ParseError('unknown top-level chunk %r at 0x%x' % (peek, r.o))
        scn.root.append(fn(r, scn))
    return scn


# ------------------------------------------------------------------- outputs

def cmd_info(scn, path):
    print('== %s (scne v%d) ==' % (path, scn.version))
    for ck in scn.root:
        ck.dump()
    print('-- meshes --')
    for m in scn.meshes:
        nv = sum(len(b.verts) for b in m.batches)
        nt = sum(len(b.tris) for b in m.batches)
        print('  %-40s %2d batch  %6d verts  %6d tris' %
              (m.model + '/' + m.name, len(m.batches), nv, nt))


def transform(mtx, v):
    x, y, z = v
    return (mtx[0] * x + mtx[4] * y + mtx[8] * z + mtx[12],
            mtx[1] * x + mtx[5] * y + mtx[9] * z + mtx[13],
            mtx[2] * x + mtx[6] * y + mtx[10] * z + mtx[14])


def cmd_obj(scn, out_path, apply_matrix=True):
    lines = []
    base = 1
    for m in scn.meshes:
        for bi, b in enumerate(m.batches):
            lines.append('o %s.%s.%d' % (m.model, m.name, bi))
            if b.material:
                lines.append('usemtl %s' % b.material)
            for v in b.verts:
                if apply_matrix and m.matrix:
                    v = transform(m.matrix, v)
                lines.append('v %.6f %.6f %.6f' % v)
            for u, vv in b.uvs:
                lines.append('vt %.6f %.6f' % (u, 1.0 - vv))
            for n in b.normals:
                lines.append('vn %.4f %.4f %.4f' % n)
            for a, bb, c in b.tris:
                lines.append('f %d/%d/%d %d/%d/%d %d/%d/%d' % (
                    base + a, base + a, base + a,
                    base + bb, base + bb, base + bb,
                    base + c, base + c, base + c))
            base += len(b.verts)
    with open(out_path, 'w') as f:
        f.write('\n'.join(lines) + '\n')
    nv = base - 1
    nt = sum(len(b.tris) for m in scn.meshes for b in m.batches)
    print('wrote %s: %d meshes, %d verts, %d tris' %
          (out_path, len(scn.meshes), nv, nt))


def main():
    ap = argparse.ArgumentParser(description=__doc__)
    ap.add_argument('files', nargs='+')
    ap.add_argument('--info', action='store_true', help='dump chunk tree')
    ap.add_argument('--obj', metavar='OUT', help='export to Wavefront OBJ')
    ap.add_argument('--local', action='store_true',
                    help='OBJ export: keep mesh-local coordinates')
    args = ap.parse_args()
    rc = 0
    for path in args.files:
        data = open(path, 'rb').read()
        try:
            scn = parse_scne(data)
        except ParseError as e:
            print('%s: PARSE ERROR: %s' % (path, e), file=sys.stderr)
            rc = 1
            continue
        if args.obj:
            cmd_obj(scn, args.obj, apply_matrix=not args.local)
        else:
            cmd_info(scn, path)
    return rc


if __name__ == '__main__':
    sys.exit(main())
