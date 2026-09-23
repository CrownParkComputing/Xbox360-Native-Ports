#!/usr/bin/env python3
"""find_jump_tables.py - recover switch jump tables XenonAnalyse misses.

A PowerPC switch compiles to a bounds check, a table read and an indirect
branch:

    cmplwi  crN,rIDX,LIMIT      # LIMIT = case count - 1
    bgt     crN,DEFAULT
    lis     rT,HI
    rlwinm  r0,rIDX,2,0,29      # index * 4
    addi    rT,rT,LO
    lwzx    r0,rT,r0            # target = [(HI<<16)+LO + index*4]
    mtctr   r0
    bctr

XenonRecomp only recognises this when it has an entry in the switch-table TOML;
otherwise it emits the `bctr` as an indirect call, never declares the case
targets as labels, and the jump lands on an empty function-table slot at run
time. XenonAnalyse is supposed to generate those entries but its matcher misses
forms like the one above (it also only warns when the instruction before the
`bctr` is one of two specific encodings, so most misses are silent).

This recovers them from XenonRecomp's own output, which is easier to parse than
the binary: every instruction is present as a `// mnemonic operands` comment in
order, so addresses can be tracked from each function's base and re-synced at
every `loc_XXXX:` label. The table contents are then read out of the mapped
image.

Coverage is decided from the generated code itself, not from the config: a
`bctr` that XenonRecomp already turned into a `switch` is covered, and anything
else is not. The config cannot answer this. XenonAnalyse keys its entries by the
first instruction of the dispatch sequence while this tool keys them by the
`bctr`, so comparing addresses between the two files matches nothing and reports
every table as missing; and an entry the recompiler declined to honour is in the
config but is not a switch, which is exactly the case worth finding.

Usage: find_jump_tables.py <ppc-dir> <image.bin> <image-base-hex> [--verify]
Prints TOML `[[switch]]` entries for every table not already emitted as a
switch. `--verify` instead cross-checks the two independent decoders against
each other - XenonAnalyse's tables as they came out of XenonRecomp, and this
one's - and reports every case where they disagree.
"""
import bisect
import concurrent.futures
import concurrent.futures.process
import glob
import os
import re
import struct
import sys

FUNC = re.compile(r'^PPC_FUNC_IMPL\(__imp__sub_([0-9A-F]+)\)')
LABEL = re.compile(r'^loc_([0-9A-F]+):')
COMMENT = re.compile(r'^\s*//\s*(\S+)\s*(.*)$')
# Comment lines XenonRecomp emits that are NOT instructions. Counting one as an
# instruction shifts every address after it by four, which silently corrupts
# the base address of every table found later in the same function.
NOT_AN_INSTRUCTION = ('ERROR',)


def parse_functions(lines):
    """Yields (address, mnemonic, operands) for every instruction in a file."""
    address = None
    for line in lines:
        m = FUNC.match(line)
        if m:
            address = int(m.group(1), 16)
            continue
        m = LABEL.match(line)
        if m:
            address = int(m.group(1), 16)
            continue
        if address is None:
            continue
        m = COMMENT.match(line)
        if m:
            if m.group(1) in NOT_AN_INSTRUCTION:
                continue
            yield address, m.group(1), m.group(2).strip()
            address += 4


# How far back a form's operands can sit from the bctr. The word and byte
# forms are compact; the half form is not, because the compiler interleaves
# unrelated work between the bounds check and the dispatch.
SHORT_WINDOW = 12
LONG_WINDOW = 28


def find_tables(instructions):
    """Finds every bctr whose preceding instructions form a jump table.

    One generated file's worth: the window never spans two files, so this is the
    unit of work a worker process gets. `scan_ppc_dir` concatenates the results
    in filename order, which is the order the single-threaded loop produced them.
    """
    found = []
    window = []
    for address, mnem, ops in instructions:
        window.append((address, mnem, ops))
        if len(window) > LONG_WINDOW:
            window.pop(0)
        if mnem != 'bctr':
            continue
        # Matched most-permissive-first on the short window, where a
        # previous switch's bounds check cannot reach. Only if that finds
        # nothing is the long window tried, and there the bounds check has
        # to test the very register the dispatch indexes with - otherwise
        # the extra reach would start pairing unrelated instructions.
        table = (decode_window(window[-SHORT_WINDOW:], strict=False) or
                 decode_window(window, strict=True) or
                 decode_half_window(window) or
                 decode_window(window[-SHORT_WINDOW:], strict=False,
                               unbounded=True) or
                 decode_half_window(window, unbounded=True))
        if table:
            found.append(table)
            # This `bctr` consumed the dispatch, so none of it should still
            # be in reach of the next one.
            window = []
    return found


def table_shaped(instructions):
    """Every `bctr` whose target was computed from a LITERAL address.

    The six forms above each recover a table; this recovers only the suspicion,
    and it exists because a form nobody has written a decoder for yet is
    otherwise invisible. A vtable or function-pointer call loads its target
    through an object pointer, so it never builds an address with lis/addi - and
    a dispatch always does, because the table is at a fixed address. So a `bctr`
    that is table-shaped but was not decoded is worth a human looking at, and a
    `bctr` that is not table-shaped is an ordinary indirect call.

    Geometry Wars 1 is why this is here: sub_820CC928 dispatches through a BYTE
    table with no bounds check - the byte form and the unbounded form, together,
    which none of the six decoders accept. XenonRecomp's own warning happens to
    catch that one (the instruction before its `bctr` is a `nop`, one of the two
    encodings it checks for), and nothing else would have.

    One generated file's worth, like `find_tables`; `scan_ppc_dir` merges them.
    """
    suspects = {}
    window = []
    for address, mnem, ops in instructions:
        window.append((address, mnem, ops))
        if len(window) > SHORT_WINDOW:
            window.pop(0)
        if mnem != 'bctr':
            continue
        literal = set()
        pair_hi, pair_lo = {}, {}
        derived = set()
        target = None
        struct_stride = False
        for _, m, o in window[:-1]:
            parts = [p.strip() for p in o.split(',')]
            if m == 'mulli' and len(parts) == 3 and int(parts[2]) not in (1, 2, 4):
                # An array of structures, indexed by element: the target is a
                # function pointer in a field, not a label in this function.
                # Space Giraffe has two (strides of 12 and 52 bytes).
                struct_stride = True
            elif m == 'lis' and len(parts) == 2:
                pair_hi[parts[0]] = int(parts[1])
                pair_lo.pop(parts[0], None)
            elif m == 'addi' and len(parts) == 3 and parts[0] == parts[1]:
                if parts[0] in pair_hi:
                    pair_lo[parts[0]] = int(parts[2])
                    literal.add(parts[0])
            elif m in ('lbzx', 'lhzx', 'lwzx') and len(parts) == 3:
                if parts[1] in literal or parts[2] in literal:
                    derived.add(parts[0])
            elif m == 'add' and len(parts) == 3:
                if parts[1] in literal or parts[2] in derived:
                    derived.add(parts[0])
            elif m == 'mtctr' and len(parts) == 1:
                target = parts[0]
        if (target is not None and not struct_stride and
                (target in derived or target in literal)):
            suspects[address] = [m for _, m, _ in window[-6:-1]]
    return suspects


REGISTER = re.compile(r'^r\d+$')
# Mnemonics whose FIRST register operand is a source rather than a destination:
# stores, compares, branches, the move-to-special-register family and the cache
# and synchronisation instructions. Every other instruction is assumed to write
# its first operand, which is the safe direction to be wrong in - assuming a
# write that did not happen only costs an alias that would have been found,
# while missing one would claim two registers hold the same value when they do
# not.
READS_FIRST = re.compile(
    r'^(st|cmp|mt|b|dcb|icbi|eieio|sync|isync|tw|td|nop|trap)')


def written_registers(mnem, ops):
    """The registers an instruction may write, erring towards too many."""
    parts = [p.strip() for p in ops.split(',')]
    written = set()
    if parts and REGISTER.match(parts[0]) and not READS_FIRST.match(mnem):
        written.add(parts[0])
    # Update forms (lwzu, stwux, ...) also write the base register, which is
    # inside the parentheses rather than in the first operand.
    if ((mnem.startswith('l') or mnem.startswith('st')) and
            mnem.rstrip('.').rstrip('x').endswith('u')):
        written |= set(re.findall(r'\br\d+\b', ops))
    return written


def same_value(window, a, a_pos, b, b_pos):
    """True when two register names provably hold the same value at the bctr.

    A dispatch's bounds check and its index are often not spelled with the same
    register: the compiler copies the value with `mr` between the two. Choplifter
    HD writes `mr r4,r3 / cmplwi cr6,r3,107 / rlwinm r0,r4,1,0,30`, and
    `mr r31,r4 / cmplwi cr6,r4,18 / rlwinm r0,r31,1,0,30`.

    Demanding the same NAME rejects both, and the miss is the expensive kind:
    the `bctr` is then emitted as an indirect call, which RETURNS instead of
    branching, so the caller's `r14`-`r31` are left holding the callee's values
    and something several frames away faults on a pointer it never computed.
    Choplifter's boot ended in exactly that, at `82B412E4`.

    The link is only claimed for an explicit `mr` that precedes both uses and is
    followed by no write to either register, so the reason the strict check
    exists - that a long window can reach a PREVIOUS switch's `cmplwi` - still
    holds: that check's register would have been rewritten in between.
    """
    if a is None or b is None:
        return False
    if a == b:
        return True
    linked = False
    for index, (_, mnem, ops) in enumerate(window[:-1]):
        parts = [p.strip() for p in ops.split(',')]
        if (mnem in ('mr', 'mr.') and len(parts) == 2 and
                {parts[0], parts[1]} == {a, b} and index < min(a_pos, b_pos)):
            linked = True
            continue
        if written_registers(mnem, ops) & {a, b}:
            linked = False
    return linked


def find_bounds(window):
    """Recovers a dispatch's bounds check: (limit, index register, default).

    Three spellings, all of which appear in this title:

        cmplwi crN,rIDX,LIMIT / bgt crN,DEFAULT       # skip over the dispatch
        cmplwi crN,rIDX,LIMIT / ble crN,DISPATCH / b DEFAULT   # jump into it
        cmplwi crN,rIDX,LIMIT / bgtlr crN             # out of range: return

    Missing any of them makes a whole dispatch look like an ordinary indirect
    call, which at run time is a jump through an empty function-table slot.

    The returned default is None for the third form, where out-of-range does
    not branch anywhere - it returns. That costs nothing: XenonRecomp's config
    reads only `base`, `r` and `labels`, and emits `__builtin_unreachable()`
    for the default itself, so the value is documentation either way.
    """
    limit = limit_reg = default = None
    limit_pos = -1
    pending_ble = False
    for index, (_, mnem, ops) in enumerate(window[:-1]):
        parts = [p.strip() for p in ops.split(',')]
        if mnem == 'cmplwi' and len(parts) == 3:
            limit, limit_reg, limit_pos = int(parts[2]), parts[1], index
            pending_ble = False
        elif mnem == 'bgt' and len(parts) == 2:
            default = int(parts[1], 16)
            pending_ble = False
        elif mnem == 'bgtlr':
            default = None
            pending_ble = False
        elif mnem == 'ble' and len(parts) == 2:
            pending_ble = True
        elif mnem == 'b' and pending_ble and len(parts) == 1:
            # The fall-through of the `ble` - i.e. out of range.
            default = int(parts[0], 16)
            pending_ble = False
        else:
            pending_ble = False
    # limit_pos is where the `cmplwi` sat in the window, which same_value needs
    # to tell a copy made BEFORE the check from one made after it.
    return limit, limit_reg, default, limit_pos


def decode_window(window, strict=False, unbounded=False):
    """Pulls a jump table out of the instructions preceding a bctr.

    `unbounded` accepts a dispatch with NO bounds check at all, which is what a
    compiler emits when it has already proved the index in range. There is then
    nothing in the instruction stream to say how many cases there are, so the
    entry is returned with `count = None` and the caller derives it from the
    table's own contents. This is tried only after every bounded form has
    failed, because a bounds check is most of the evidence that a `bctr` is a
    switch at all - what stands in for it here is that the table address is a
    LITERAL built by lis/addi. A vtable or function-pointer call loads its
    target through an object pointer, never from a literal address, so it cannot
    match. (Space Giraffe needs this: sub_820A0AD8 dispatches on r5 with no
    check, and its table sits inline in the four words right after the `bctr` -
    invisible to XenonAnalyse, to the bounded forms here, and to XenonRecomp's
    own warning, which only fires for two specific preceding encodings.)

    Two forms appear in practice:

    'word'  the classic one - the target is loaded straight out of a table of
            addresses:  lwzx rT,rTABLE,rINDEX*4

    'byte'  a two-level form - a byte table first compresses the input onto a
            smaller set of case slots, and the target is then computed rather
            than loaded:
                lbzx r0,rBYTETABLE,rINDEX
                rlwinm r0,r0,2,0,29      # optional, see below
                lis/addi rT,<base>
                add rT,rT,r0
            Several inputs therefore share one case body, and the byte value
            for "no case" points at the same address as the bounds-check
            default - which is a good self-check that the decode is right.

            The `rlwinm` is present only when the table holds case *numbers*,
            which have to be scaled to instruction offsets. When the case
            bodies all sit within 255 bytes of the base the compiler drops it
            and stores byte offsets directly, so the scale has to be read off
            the instruction stream rather than assumed.
    """
    bctr_addr = window[-1][0]
    # Track lis/addi pairs by destination register. A byte-form window builds
    # TWO of them and the compiler reuses the same register for both, so each
    # address must be snapshotted where it is USED (at the lbzx / lwzx / add)
    # rather than read back at the end - by then the register holds the second
    # pair's value.
    pair_hi, pair_lo = {}, {}
    index_reg = scaled_reg = None
    byte_table = byte_index_reg = byte_value_reg = None
    byte_scale = 1
    word_table = jump_base = None
    limit, limit_reg, default, limit_pos = find_bounds(window)

    def resolved(reg):
        if reg in pair_hi and reg in pair_lo:
            return ((pair_hi[reg] << 16) + pair_lo[reg]) & 0xFFFFFFFF
        return None

    target_reg = ctr_reg = None
    index_pos = byte_index_pos = -1
    for position, (_, mnem, ops) in enumerate(window[:-1]):
        parts = [p.strip() for p in ops.split(',')]
        if mnem == 'lis' and len(parts) == 2:
            pair_hi[parts[0]] = int(parts[1])
            pair_lo.pop(parts[0], None)
        elif mnem == 'addi' and len(parts) == 3 and parts[0] == parts[1]:
            if parts[0] in pair_hi:
                pair_lo[parts[0]] = int(parts[2])
        elif mnem == 'rlwinm' and len(parts) == 5 and parts[2] == '2':
            scaled_reg, index_reg, index_pos = parts[0], parts[1], position
            if parts[1] == byte_value_reg:
                byte_value_reg, byte_scale = parts[0], 4
        elif mnem == 'lbzx' and len(parts) == 3:
            byte_table = resolved(parts[1])
            byte_index_reg, byte_value_reg, byte_scale = parts[2], parts[0], 1
            byte_index_pos = position
        elif mnem == 'lwzx' and len(parts) == 3:
            word_table = resolved(parts[1] if parts[2] == scaled_reg else parts[2])
            target_reg = parts[0]
        elif mnem == 'add' and len(parts) == 3 and parts[2] in (scaled_reg,
                                                                byte_value_reg):
            jump_base = resolved(parts[1])
            target_reg = parts[0]
        elif mnem == 'mtctr' and len(parts) == 1:
            ctr_reg = parts[0]

    if limit is None and not unbounded:
        return None
    # The branch has to jump to the value this window computed. Without that
    # check a vtable call - `lwz r11,4(r11); mtctr r11; bctr` - matches whenever
    # a real dispatch happens to sit within the window ahead of it, and its
    # `bctr` is then emitted as that dispatch's switch. The recompiler makes the
    # switch's default `__builtin_unreachable()`, so at run time the call jumps
    # into whatever follows: Geometry Wars 2 crashed on exactly this, in a
    # function whose own dispatch three instructions earlier was correct.
    if ctr_reg is None or target_reg is None or ctr_reg != target_reg:
        return None
    # THE INDEX HAS TO STILL BE IN A REGISTER AT THE BCTR, for the two shapes
    # below that name the register the scaling `rlwinm` READ. XenonRecomp's
    # model is `switch (ctx.rN.u32)` with the case labels numbered 0, 1, 2...,
    # so rN must hold the RAW index at the branch. Where the compiler scales in
    # place - `rlwinm r10,r10,2,0,29` rather than into a scratch register - the
    # raw index is gone by then and no register can be named: r10 holds
    # index*4, so index 1 arrives as 4, matches no case, and falls into the
    # default, which the recompiler writes as `__builtin_unreachable()`.
    #
    # Ridge Racer 6 is where this was found (`sub_8217D288`, table 0x8236D1B0),
    # and the table there is not a switch at all - its entries are the addresses
    # of six separate functions, one of which is the enclosing function itself.
    # So the right answer is to decline: XenonRecomp then emits the `bctr` as
    # the indirect tail call it is, which reaches every one of them.
    #
    # This does NOT apply to the byte form below, and it cost a wrong reading to
    # notice: there the `rlwinm` scales the byte the table yielded, not the
    # index, so `rlwinm r0,r0,2,0,29` is the normal spelling and the switch is
    # indexed by `byte_index_reg` - a register the scaling never touched.
    # Geometry Wars 1's sub_820362B8 is one of 82 such dispatches across the six
    # working titles, and a guard applied before this point declined every one.
    index_destroyed = scaled_reg is not None and scaled_reg == index_reg
    if limit is None:
        # The unbounded form. Only the word shape is accepted: the byte and half
        # shapes compute their target by adding a table value to a second
        # literal base, which is a shape an unrelated pair of lis/addi
        # instructions in the window could imitate, and there would be no bounds
        # check left to rule that out.
        if word_table is None or index_reg is None or index_destroyed:
            return None
        return {
            'kind': 'word', 'bctr': bctr_addr, 'r': int(index_reg[1:]),
            'count': None, 'table': word_table, 'default': None,
        }
    # Without an explicit default the bounds check is the only evidence that
    # this really is a dispatch, so it has to test the register being indexed.
    if default is None:
        strict = True

    if byte_table is not None and jump_base is not None and byte_index_reg:
        if strict and not same_value(window, limit_reg, limit_pos,
                                     byte_index_reg, byte_index_pos):
            return None
        return {
            'kind': 'byte', 'bctr': bctr_addr,
            'r': int(byte_index_reg[1:]), 'count': limit + 1,
            'byte_table': byte_table, 'jump_base': jump_base,
            'byte_scale': byte_scale, 'default': default,
        }

    if word_table is not None and index_reg is not None:
        if index_destroyed:
            return None
        if strict and not same_value(window, limit_reg, limit_pos,
                                     index_reg, index_pos):
            return None
        return {
            'kind': 'word', 'bctr': bctr_addr,
            'r': int(index_reg[1:]), 'count': limit + 1,
            'table': word_table, 'default': default,
        }
    return None


def decode_half_window(window, unbounded=False):
    """Pulls a *halfword*-table jump out of the instructions before a bctr.

    The third form seen in this title. Like the byte form the target is
    computed rather than loaded, but the table holds 16-bit byte offsets used
    directly - no multiply - which lets one table cover a case body span of up
    to 64 KiB:

        cmplwi crN,rIDX,LIMIT
        bgt    crN,DEFAULT
        lis/addi rT,<HALFWORD TABLE>
        rlwinm r0,rIDX,1,0,30       # index * 2, i.e. halfword indexing
        lhzx   r0,rT,r0
        lis/addi rT,<JUMP BASE>
        add    rT,rT,r0
        mtctr  rT
        bctr

    Two things make this one harder to match than the others, and both are the
    reason it needs its own decoder. The compiler interleaves several unrelated
    instructions between the bounds check and the dispatch, so the window has
    to be much longer - which in turn makes it possible to pick up some other
    switch's `cmplwi`, so the bounds check is only accepted when it tests the
    same register the scaling `rlwinm` reads. And the same register (r12 here)
    holds both lis/addi pairs in turn, so each base has to be snapshotted where
    it is used rather than read back afterwards.
    """
    bctr_addr = window[-1][0]
    pair_hi, pair_lo = {}, {}
    index_reg = scaled_reg = None
    half_table = half_value_reg = jump_base = None
    limit, limit_reg, default, limit_pos = find_bounds(window)

    def resolved(reg):
        if reg in pair_hi and reg in pair_lo:
            return ((pair_hi[reg] << 16) + pair_lo[reg]) & 0xFFFFFFFF
        return None

    index_pos = -1
    for position, (_, mnem, ops) in enumerate(window[:-1]):
        parts = [p.strip() for p in ops.split(',')]
        if mnem == 'lis' and len(parts) == 2:
            pair_hi[parts[0]] = int(parts[1])
            pair_lo.pop(parts[0], None)
        elif mnem == 'addi' and len(parts) == 3 and parts[0] == parts[1]:
            if parts[0] in pair_hi:
                pair_lo[parts[0]] = int(parts[2])
        elif mnem == 'rlwinm' and len(parts) == 5 and parts[2] == '1':
            scaled_reg, index_reg, index_pos = parts[0], parts[1], position
        elif mnem == 'lhzx' and len(parts) == 3:
            if parts[2] == scaled_reg:
                half_table, half_value_reg = resolved(parts[1]), parts[0]
            elif parts[1] == scaled_reg:
                half_table, half_value_reg = resolved(parts[2]), parts[0]
        elif mnem == 'add' and len(parts) == 3 and parts[2] == half_value_reg:
            jump_base = resolved(parts[1])

    if half_table is None or jump_base is None or index_reg is None:
        return None
    # Same rule as the word form: scaling in place destroys the raw index, and
    # the switch XenonRecomp emits can only be indexed by the raw one.
    if scaled_reg == index_reg:
        return None
    # The bounds check has to be the one guarding *this* dispatch. Where there is
    # none, or where the one in reach tests some other register, `unbounded`
    # keeps the dispatch but throws the limit away: the count then comes from the
    # table's own contents instead, which is strictly less to trust and so is
    # tried only after every bounded form has failed. What still stands in for
    # the missing check is that BOTH the table address and the jump base are
    # literals built by lis/addi - a pointer chase cannot match that.
    if limit is None or not same_value(window, limit_reg, limit_pos,
                                       index_reg, index_pos):
        # `unbounded` keeps a dispatch with NO bounds check anywhere in the
        # window and derives the count from the table's contents instead. It
        # deliberately does NOT rescue one whose only check tests a different
        # register: a derived count is weaker than a real limit and can over-run
        # into whatever follows the table, and where a limit exists it is the
        # better answer even when this window cannot attribute it. Space Giraffe
        # measures the difference - sub_821CFF64's table derives 17 entries where
        # its check says 15, so accepting that would have contradicted a config
        # entry that was right.
        if not unbounded or limit is not None:
            return None
        default = None

    return {
        'kind': 'half', 'bctr': bctr_addr,
        'r': int(index_reg[1:]),
        'count': limit + 1 if limit is not None else None,
        'half_table': half_table, 'jump_base': jump_base, 'default': default,
    }


def emitted_starts(ppc_dir):
    """Every function XenonRecomp emitted, from its own dispatch table."""
    path = os.path.join(ppc_dir, 'ppc_func_mapping.cpp')
    return sorted({int(m, 16) for m in
                   re.findall(r'sub_([0-9A-F]+)', open(path).read())})


# The switch a `bctr` was turned into. `.u32` as well as `.u64` because
# build_recompiled_cpu.sh narrows the index to the low half - matching only
# `.u64` finds nothing at all in a tree that has already been built once, which
# reads as "no table is covered" rather than as a stale pattern.
SWITCH = re.compile(r'^\s*switch \(ctx\.(r\d+)\.u(?:64|32)\) \{')
CASE = re.compile(r'^\s*case (\d+):')
GOTO = re.compile(r'^\s*goto loc_([0-9A-F]+);')
# A case whose target XenonRecomp holds as a FUNCTION of its own, emitted as a
# tail call rather than a jump. It happens when the switch's case bodies are
# also listed as function entries in the image's own table, and the code is
# correct - the case reaches the same address by calling it and returning.
#
# Not matching this was a false alarm, and an expensive kind: the tool reported
# "emitted with 0 label(s)" for a switch that had every one of its cases, the
# gate refused the build, and the output was right the whole time. A checker
# that cries wolf is worse than no checker, because the next person learns to
# wave it through.
CASE_TAIL_CALL = re.compile(r'^\s*sub_([0-9A-F]+)\(ctx, base\);')
CASE_ERROR = re.compile(r'^\s*//\s*ERROR:?\s*0x?([0-9A-F]+)\s*$')


def emitted_switches(lines):
    """{bctr address: (index register, [case labels])} for every emitted switch.

    This is what XenonRecomp actually did, which is the only trustworthy
    statement of what is covered. A case whose body sits outside the function is
    emitted as `// ERROR: 0x...` rather than a `goto`, and is read here as the
    label it was meant to be - the table is covered, the boundary is what is
    wrong, and that is fix_function_boundaries.py's job rather than this one's.

    One generated file's worth: `scan_ppc_dir` merges them in filename
    order, so a `bctr` address two files both claim resolves the same way
    it did when one loop walked them all.
    """
    switches = {}
    address = None
    for i, line in enumerate(lines):
        m = FUNC.match(line) or LABEL.match(line)
        if m:
            address = int(m.group(1), 16)
            continue
        if address is None:
            continue
        m = COMMENT.match(line)
        if not m:
            continue
        if m.group(1) in NOT_AN_INSTRUCTION or m.group(1) == 'ERROR:':
            continue
        if m.group(1) == 'bctr':
            head = SWITCH.match(lines[i + 1]) if i + 1 < len(lines) else None
            if head:
                switches[address] = (head.group(1), read_cases(lines, i + 2))
        address += 4
    return switches


def read_cases(lines, start):
    """The bodies of a switch, in case order.

    Three forms, all of them a case reaching its target: `goto loc_X` where the
    target is inside this function, `sub_X(ctx, base)` where XenonRecomp holds
    the target as a function of its own, and `// ERROR: 0xX` where the target
    is outside the function and could not be emitted at all - that last one is
    read as the label it was meant to be, because the table IS covered and the
    boundary is what is wrong.
    """
    labels, case = {}, None
    for line in lines[start:]:
        m = CASE.match(line)
        if m:
            case = int(m.group(1))
            continue
        if case is not None:
            m = (GOTO.match(line) or CASE_TAIL_CALL.match(line)
                 or CASE_ERROR.match(line))
            if m:
                labels[case] = int(m.group(1), 16)
                case = None
                continue
        if 'default:' in line or line.strip() == '}':
            break
    return [labels[k] for k in sorted(labels)]


# Reading the generated code is the whole cost of this tool - three of the scans
# above walk EVERY ppc_recomp.*.cpp, and choplifter's are 230 MB across 305 of
# them - so each file is read ONCE, all three scans run on that one copy, and the
# files are spread over a worker process each.
#
# THE MERGE MUST NOT DEPEND ON COMPLETION ORDER. `emitted_switches` and
# `table_shaped` return dictionaries keyed by a `bctr` address, and the single
# loop these replaced let a LATER file's entry overwrite an earlier one's; the
# results are therefore merged in sorted filename order, which is exactly the
# order that loop walked them in. `Executor.map` yields in submission order, not
# completion order, which is what makes that free - nothing here may be merged as
# it arrives.
#
# Parallelism must never be why this tool fails, only why it is quick: too few
# files to pay for a pool, WHITTY_JOBS=1, or a pool that cannot be created all
# fall back to running the same worker inline, for identical output.
MIN_PARALLEL_FILES = 8


def generated_files(ppc_dir):
    """Every generated translation unit, in the order the scans merge them."""
    return sorted(glob.glob(os.path.join(ppc_dir, 'ppc_recomp.*.cpp')))


def scan_jobs():
    """How many workers to scan with. WHITTY_JOBS=1 means fully sequential.

    Several titles are often converged at once, and each of them running one
    process per core is how a 16-core machine ends up with 64 of them, so the
    caller needs a way to throttle this.
    """
    try:
        jobs = int(os.environ.get('WHITTY_JOBS') or os.cpu_count() or 1)
    except ValueError:
        jobs = os.cpu_count() or 1
    return max(1, jobs)


def scan_files(paths, worker):
    """`worker(path)` for every path, results in the order `paths` were given."""
    jobs = min(scan_jobs(), len(paths))
    if jobs < 2 or len(paths) < MIN_PARALLEL_FILES:
        return [worker(path) for path in paths]
    try:
        with concurrent.futures.ProcessPoolExecutor(max_workers=jobs) as pool:
            return list(pool.map(worker, paths))
    except (OSError, concurrent.futures.process.BrokenProcessPool):
        # No pool - out of file descriptors, no fork, a worker killed. Slower is
        # a fine answer to that; not scanning at all is not.
        return [worker(path) for path in paths]


def scan_one_file(path):
    """All three per-file scans of one generated file, from a single read.

    This is what a worker process runs. The instruction stream is decoded once
    and handed to both scans that want it: decoding costs more than the read
    does, and the parent never sees either, so no file's text and no file's
    instructions are ever held here - only the three small results.
    """
    lines = open(path, encoding='utf-8', errors='ignore').read().splitlines()
    instructions = list(parse_functions(lines))
    return (find_tables(instructions), emitted_switches(lines),
            table_shaped(instructions))


def scan_ppc_dir(ppc_dir):
    """(recovered entries, emitted switches, table-shaped suspects) for a dir."""
    entries, switches, suspects = [], {}, {}
    # Merged in filename order, never completion order - see above.
    for file_entries, file_switches, file_suspects in scan_files(
            generated_files(ppc_dir), scan_one_file):
        entries.extend(file_entries)
        switches.update(file_switches)
        suspects.update(file_suspects)
    return entries, switches, suspects


# A table with no bounds check cannot be longer than the function it dispatches
# within, and in practice is far shorter; the cap only stops a pathological scan.
MAX_UNBOUNDED_CASES = 1024


def derive_count(table, starts, image, image_base, bctr):
    """How many entries an unbounded dispatch's table has.

    The run of consecutive words from `table` that are 4-byte-aligned addresses
    inside the function containing `bctr`. Fewer than two such words is not a
    switch - one target would have been a plain branch - so that reports nothing
    rather than guessing.
    """
    index = bisect.bisect_right(starts, bctr) - 1
    if index < 0:
        return None
    start = starts[index]
    end = starts[index + 1] if index + 1 < len(starts) else None
    if end is None:
        return None
    count = 0
    while count < MAX_UNBOUNDED_CASES:
        offset = table - image_base + count * 4
        if offset < 0 or offset + 4 > len(image):
            break
        word = struct.unpack_from('>I', image, offset)[0]
        if word % 4 != 0 or not (start <= word < end):
            break
        count += 1
    return count if count >= 2 else None


# How far a switch's case bodies may sit from their own table. They are all in
# one function, so this only rules out a pathological run of address-shaped data.
MAX_INLINE_SPAN = 0x2000


def inline_count(table, image, image_base):
    """How many entries an INLINE unbounded table has, judged by its own shape.

    `derive_count` asks whether each word is an address inside the function
    containing the `bctr`, which is the right question and the strongest
    evidence there is - except for exactly this case, where it is CIRCULAR. A
    table sitting inline after the `bctr` is disassembled as instructions, so
    the analysis walk ends the function at the table: `end` IS `table`, no word
    can be below it, and the count comes out zero however good the table is.

    What replaces it is a self-check that is arguably stronger, because a table
    has to be exactly long enough to reach the code it dispatches to: the run of
    4-byte-aligned addresses above `table` must END EXACTLY where the lowest of
    them begins. A run of unrelated data would have to close on the smallest of
    its own members to pass. Both of Alien Breed's satisfy it exactly -
    0x826A7B2C + 13*4 == 0x826A7B60, and 0x82B30B90 + 7*4 == 0x82B30BAC.

    Longest run first, shortening on failure: the scan can over-run into the
    first case body when its opening instruction happens to look like an
    address, and a shorter prefix is then the one that closes.
    """
    words = []
    while len(words) < MAX_UNBOUNDED_CASES:
        offset = table - image_base + len(words) * 4
        if offset < 0 or offset + 4 > len(image):
            break
        word = struct.unpack_from('>I', image, offset)[0]
        if word % 4 != 0 or not (table < word < table + MAX_INLINE_SPAN):
            break
        words.append(word)
    while len(words) >= 2:
        if table + 4 * len(words) == min(words):
            return len(words)
        words.pop()
    return None


def offset_table_count(entry, starts, image, image_base):
    """How many entries an unbounded BYTE or HALFWORD table has.

    The same rule `derive_count` applies to a word table, applied to the target
    an offset computes rather than to the raw word: the run of entries whose
    target is 4-byte aligned and inside the function containing the `bctr`. The
    first entry that is not stops it, and for these tables it always is one -
    they sit in .rdata next to unrelated data, and an arbitrary halfword almost
    never lands on an aligned address inside one function.

    Three of Alien Breed: Evolution's dispatches need this. All three are
    halfword tables whose bounds check the window cannot use - two have none at
    all, and 0x827B4968's tests a different register than the dispatch indexes
    with, which rule 2 rejects for good reason. Their counts come out 17, 16 and
    19, and the last agrees exactly with the `cmplwi r4,0x12` the window would
    not accept, which is the evidence the rule is reading real tables.
    """
    index = bisect.bisect_right(starts, entry['bctr']) - 1
    if index < 0 or index + 1 >= len(starts):
        return None
    start, end = starts[index], starts[index + 1]
    count = 0
    while count < MAX_UNBOUNDED_CASES:
        target = offset_table_target(entry, count, image, image_base)
        if target is None or target % 4 != 0 or not (start <= target < end):
            break
        count += 1
    return count if count >= 2 else None


def offset_table_target(entry, i, image, image_base):
    """The i-th target of a byte or halfword table, or None if out of range."""
    if entry['kind'] == 'half':
        offset = entry['half_table'] - image_base + i * 2
        if offset < 0 or offset + 2 > len(image):
            return None
        delta = struct.unpack_from('>H', image, offset)[0]
    else:
        offset = entry['byte_table'] - image_base + i
        if offset < 0 or offset + 1 > len(image):
            return None
        delta = entry['byte_scale'] * image[offset]
    return (entry['jump_base'] + delta) & 0xFFFFFFFF


def table_labels(entry, starts, image, image_base):
    """The case targets an entry's table holds, or None if it is not a table."""
    if entry['count'] is None:
        # An unbounded dispatch: the instruction stream never said how many
        # cases there are, so the table's own contents have to. Every label
        # of a switch XenonRecomp can emit is a `goto` inside the same
        # function, so the run of leading words that are 4-byte-aligned
        # addresses inside the enclosing function IS the table - and the
        # first word that is not stops it, which for an inline table is the
        # instruction the first case begins with.
        if entry['kind'] == 'word':
            entry['count'] = derive_count(entry['table'], starts, image,
                                          image_base, entry['bctr'])
        # Only for a WORD table sitting inline after the `bctr`, and only when
        # the enclosing-function test above found nothing: that is precisely the
        # case where the test cannot work, because the table is what ended the
        # function. Restricted to 'word' because this reads the table's contents
        # as addresses - a byte or halfword table holds offsets and would be
        # judged against the wrong thing.
        if (entry['count'] is None and entry['kind'] == 'word' and
                entry['table'] == entry['bctr'] + 4):
            entry['count'] = inline_count(entry['table'], image, image_base)
        # A byte or halfword table holds OFFSETS, so the run has to be judged by
        # the targets they compute rather than by the stored values.
        if entry['count'] is None and entry['kind'] in ('half', 'byte'):
            entry['count'] = offset_table_count(entry, starts, image, image_base)
        if entry['count'] is None:
            return None
    if entry['kind'] == 'word':
        offset = entry['table'] - image_base
        if offset < 0 or offset + entry['count'] * 4 > len(image):
            return None
        labels = [struct.unpack_from('>I', image, offset + i * 4)[0]
                  for i in range(entry['count'])]
    elif entry['kind'] == 'half':
        offset = entry['half_table'] - image_base
        if offset < 0 or offset + entry['count'] * 2 > len(image):
            return None
        labels = [(entry['jump_base'] +
                   struct.unpack_from('>H', image, offset + i * 2)[0]) &
                  0xFFFFFFFF
                  for i in range(entry['count'])]
    else:
        offset = entry['byte_table'] - image_base
        if offset < 0 or offset + entry['count'] > len(image):
            return None
        labels = [(entry['jump_base'] +
                   entry['byte_scale'] * image[offset + i]) & 0xFFFFFFFF
                  for i in range(entry['count'])]
    # A real table holds code addresses inside the image; anything else
    # means the window matched something that is not a jump table.
    if not all(image_base <= l < image_base + len(image) for l in labels):
        return None
    return labels


def recovered_tables(entries, starts, image, image_base):
    """{bctr address: (entry, labels)} for every table this tool can decode.

    `entries` is what `scan_ppc_dir` collected, in filename order: the "first
    one wins" rule below is that order's rule, so it must not be handed a list
    assembled as workers finished.
    """
    tables = {}
    for entry in entries:
        # One entry per dispatch. A `bctr` can be reached twice by the scan
        # when a function's instruction stream is walked through a label that
        # rewinds the address, and XenonRecomp keys its switch tables by
        # address, so a repeat would silently replace the first.
        if entry['bctr'] in tables:
            continue
        labels = table_labels(entry, starts, image, image_base)
        if labels is not None:
            tables[entry['bctr']] = (entry, labels)
    return tables


def verify(emitted, recovered):
    """Cross-check the two independent decoders and report the differences."""
    print('switches XenonRecomp emitted: %d' % len(emitted))
    print('tables this tool recovered:   %d' % len(recovered))
    agree = disagree = 0
    for address in sorted(set(emitted) & set(recovered)):
        register, labels = emitted[address]
        entry, ours = recovered[address]
        if register == 'r%d' % entry['r'] and labels == ours:
            agree += 1
            continue
        disagree += 1
        print('DISAGREE at %08X (%s form): emitted %s with %d label(s), '
              'recovered r%d with %d label(s)' %
              (address, entry['kind'], register, len(labels), entry['r'],
               len(ours)))
        for i, (theirs, mine) in enumerate(zip(labels, ours)):
            if theirs != mine:
                print('    first difference at case %d: %08X vs %08X' %
                      (i, theirs, mine))
                break
    print('agree: %d, disagree: %d' % (agree, disagree))
    missing = sorted(set(recovered) - set(emitted))
    extra = sorted(set(emitted) - set(recovered))
    print('recovered but NOT emitted as a switch (%d): %s' %
          (len(missing), ' '.join('%08X' % a for a in missing)))
    print('emitted but not recovered here (%d): %s' %
          (len(extra), ' '.join('%08X' % a for a in extra)))
    return 1 if (disagree or missing) else 0


def main():
    arguments = [a for a in sys.argv[1:] if not a.startswith('--')]
    flags = {a for a in sys.argv[1:] if a.startswith('--')}
    if len(arguments) < 3:
        print(__doc__, file=sys.stderr)
        return 1
    ppc_dir, image_path, image_base = arguments[0], arguments[1], int(arguments[2], 16)
    if len(arguments) > 3:
        # This used to take the existing config as a fourth argument and skip
        # anything already in it. It does not any more, and saying so matters:
        # that comparison silently matched nothing (the two files key their
        # entries at different instructions), so it suppressed no duplicate and
        # hid no coverage. Coverage now comes from the emitted switches.
        print('# ignoring %r: coverage is read from the generated switches now'
              % arguments[3], file=sys.stderr)
    image = open(image_path, 'rb').read()
    starts = emitted_starts(ppc_dir)
    # One pass over the generated code answers all three questions below.
    entries, emitted, suspects = scan_ppc_dir(ppc_dir)
    recovered = recovered_tables(entries, starts, image, image_base)

    # Table-shaped dispatches that neither the recompiler nor the six decoders
    # accounted for. Reported rather than guessed at: a wrong table is worse
    # than a missing one, so this is where a human is needed.
    for address, mnemonics in sorted(suspects.items()):
        if address in emitted or address in recovered:
            continue
        print('# UNDECODED table-shaped dispatch at %08X (%s bctr)' %
              (address, ' '.join(mnemonics)), file=sys.stderr)

    if '--verify' in flags:
        return verify(emitted, recovered)

    count = 0
    for address in sorted(set(recovered) - set(emitted)):
        entry, labels = recovered[address]
        print(f"\n[[switch]]")
        print(f"base = 0x{address:08X}")
        print(f"r = {entry['r']}")
        if entry['default'] is not None:
            print(f"# default = 0x{entry['default']:08X}")
        print("labels = [")
        for label in labels:
            print(f"    0x{label:08X},")
        print("]")
        count += 1
    print(f"\n# {len(emitted)} dispatch(es) already emitted as switches; "
          f"{count} table(s) recovered that were not", file=sys.stderr)
    return 0


if __name__ == '__main__':
    raise SystemExit(main())
