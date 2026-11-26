#!/usr/bin/env python3
"""Read-only research model for HOME 4.1.0 image request producer 0x105D60.

Input is a decoded native core record returned by 0x50E7F8, not a raw PKM
or HOME storage blob. Exceptional/default-object branch intentionally rejected.
Ball dispatch is modeled for present side records; absent-side default globals remain unknown. No claim of raw PKM or native runtime parity.
"""
from __future__ import annotations
from dataclasses import dataclass
import struct
import unittest

@dataclass(frozen=True)
class Request:
    species: int
    form: int
    gender: int
    shiny: bool
    special_0d: bool
    unknown_10: int
    variant: int
    decoration: int

def u16(b, p):
    return struct.unpack_from("<H", b, p)[0]

def u32(b, p):
    return struct.unpack_from("<I", b, p)[0]

def shiny_pair(a, b):
    x = (a ^ b) & 0xffffffff
    return ((x & 0xfff0) ^ (x >> 16)) < 16

def from_native_core(core: bytes) -> Request:
    if len(core) < 0x98:
        raise ValueError("decoded native core snapshot too short")
    if core[0xc]:
        raise ValueError("exceptional/default object branch not modeled")
    species = u16(core, 0xd)
    form = 0 if species == 0x19e else u16(core, 0x22)
    variant = 0  # 0x51AE24 returns zero; 0x5319D4 either returns zero or calls it
    if species == 0x37a and form == 1:
        form, variant = 0, 2
    return Request(species, form, core[0x21],
                   shiny_pair(u32(core, 0xf), u32(core, 0x1a)),
                   bool(core[0x66]), u32(core, 8), variant,
                   u32(core, 0x94) & 0xff if species == 0x365 else -1)

def cross_game_ball_number(getter_result: int) -> int:
    """0x5312F0 zero-result substitution after 0x522F84; not PKM Ball mapping."""
    return getter_result if getter_result else 0x1b

def ball_display_number(converted: int, current_group: int, target_group: int,
                        special_predicate: bool, raw_native_ball: int) -> int:
    """Observed caller branch, after same/cross-game selection."""
    if current_group == target_group == 2 and special_predicate and raw_native_ball == 0x1b:
        return 4
    return converted

GAME_GROUP = bytes.fromhex("00010102020404030505070202")

def game_group(game: int) -> int:
    return GAME_GROUP[game] if 0 <= game < len(GAME_GROUP) else 0

def same_group_ball_number(ball: int, target_game: int) -> int:
    """0x6B220: original ARM64 branches, unsigned comparisons."""
    ball &= 0xffffffff
    target_game &= 0xffffffff
    if not ball:
        return 0
    if target_game in (1, 2):
        return ball if ball <= 16 and ((0x1101e >> ball) & 1) else 27
    if target_game == 7:
        return ball if 28 <= ball <= 37 else 27
    if 3 <= target_game <= 10:
        return min(ball, 27)
    return ball

def side_payloads(record: bytes) -> dict[int, bytes]:
    """0x50EC80 TLV container; safe bounds checking for malformed input."""
    if len(record) < 0xd8:
        raise ValueError("short side container")
    pos=0xd8
    end=pos+u16(record,0xd6)
    if end>len(record):
        raise ValueError("side container size exceeds record")
    seen={}
    while pos<end:
        if end-pos<3:
            raise ValueError("truncated TLV header")
        size=u16(record,pos+1)
        if pos+3+size>end:
            raise ValueError("truncated TLV payload")
        seen.setdefault(record[pos],record[pos+3:pos+3+size])
        pos+=3+size
    return seen


ORIGIN_SIDES = (1,1,2,2,0,3,4,4,5,5,7,6)
BALL_OFFSETS = {1:0x36,2:0x3f,3:0x27,4:0x26,5:0x1b,7:0x37}

def side_presence_from_record(record: bytes) -> set[int]:
    return set(side_payloads(record))

def side_ball(payloads: dict[int, bytes], side: int) -> int:
    """0x518760, present TLV only; side 6 returns zero without loading data."""
    if side==6 or side not in BALL_OFFSETS:
        return 0
    if side not in payloads:
        raise ValueError("absent-side default global not modeled")
    p=payloads[side]
    i=BALL_OFFSETS[side]
    if i>=len(p):
        raise ValueError("truncated side ball field")
    return p[i]

def cross_game_ball_from_record(record: bytes) -> int:
    """Ordinary decoded owner+8 record; Core is record+0x12 (0x50E7F8)."""
    core=record[0x12:]
    if len(core)<0x98 or core[0xc]:
        raise ValueError("exceptional or truncated decoded Core")
    origin=core[0x91]
    preferred=ORIGIN_SIDES[origin-42] if 42<=origin<=53 else 0
    payloads=side_payloads(record)
    for side in (preferred,1,2):
        if side and side in payloads:
            return cross_game_ball_number(side_ball(payloads,side))
    return 27

def resolve_native_record(record: bytes, rows, item_data: bytes, view: int=0):
    """Partial unified offline entry: ordinary decoded record -> portrait stem and cross-game ball key.
    Same-group UI context and final PNG path lookup remain separate.
    """
    from home41_image_selector_model import resolve, item_key
    q=from_native_core(record[0x12:])
    stem,trace=resolve(rows,q.species,q.form,q.shiny,view,q.gender,q.variant,q.decoration,q.special_0d)
    ball=cross_game_ball_from_record(record)
    return {"resource_stem":stem,"selector_trace":trace,"cross_game_ball":item_key(item_data,ball)}

class Tests(unittest.TestCase):
    def core(self, species=25, form=0, gender=0, shiny_xor=0, egg=0, decoration=0):
        b=bytearray(0x98)
        struct.pack_into("<H", b, 0xd, species)
        struct.pack_into("<I", b, 0xf, 0)
        struct.pack_into("<I", b, 0x1a, shiny_xor)
        b[0x21]=gender
        struct.pack_into("<H", b, 0x22, form)
        b[0x66]=egg
        struct.pack_into("<I", b, 0x94, decoration)
        return b
    def test_ordinary(self):
        q=from_native_core(self.core())
        self.assertEqual((q.species,q.form,q.gender,q.shiny,q.variant,q.decoration),(25,0,0,True,0,-1))
    def test_shiny_boundary(self):
        self.assertTrue(shiny_pair(0,15))
        self.assertFalse(shiny_pair(0,16))
    def test_form_414(self):
        self.assertEqual(from_native_core(self.core(414,1)).form,0)
    def test_form_890(self):
        q=from_native_core(self.core(890,1))
        self.assertEqual((q.form,q.variant),(0,2))
    def test_decoration(self):
        self.assertEqual(from_native_core(self.core(869,0,1,16,0,6)).decoration,6)
    def test_egg(self):
        self.assertTrue(from_native_core(self.core(490,egg=1)).special_0d)
    def test_default_unmodeled(self):
        b=self.core()
        b[0xc]=1
        with self.assertRaises(ValueError):
            from_native_core(b)
    def test_game_filter(self):
        self.assertEqual([n for n in range(1,38) if same_group_ball_number(n,1)==n and n!=27],[1,2,3,4,12,16])
        self.assertEqual(same_group_ball_number(37,7),37)
        self.assertEqual(same_group_ball_number(4,7),27)
        self.assertEqual(same_group_ball_number(37,3),27)
        self.assertEqual(same_group_ball_number(37,11),37)
        self.assertEqual(game_group(7),3)
    def test_side_presence(self):
        b=bytearray(0xd8)
        data=bytes([1,2,0,9,8,7,1,0,0])
        struct.pack_into("<H",b,0xd6,len(data))
        b.extend(data)
        self.assertEqual(side_presence_from_record(b),{1,7})
    def test_cross_game_side_ball(self):
        def record(origin, entries):
            b=bytearray(0xd8)
            b[0x12:0x12+0x98]=self.core()
            b[0x12+0x91]=origin
            data=bytearray()
            for side, ball in entries:
                p=bytearray(0x40)
                p[BALL_OFFSETS.get(side,0)]=ball
                data.extend(bytes([side])+struct.pack("<H",len(p))+p)
            struct.pack_into("<H",b,0xd6,len(data))
            b.extend(data)
            return b
        self.assertEqual(cross_game_ball_from_record(record(52,[(1,4),(7,37)])),37)
        self.assertEqual(cross_game_ball_from_record(record(52,[(1,4)])),4)
        self.assertEqual(cross_game_ball_from_record(record(53,[(6,4),(1,4)])),27)
        self.assertEqual(cross_game_ball_from_record(record(42,[])),27)
        self.assertEqual(cross_game_ball_from_record(record(42,[(1,0),(2,4)])),27)
    def test_ball(self):
        self.assertEqual(cross_game_ball_number(0),27)
        self.assertEqual(cross_game_ball_number(16),16)
        self.assertEqual(ball_display_number(27,2,2,True,27),4)
        self.assertEqual(ball_display_number(27,1,2,True,27),27)

if __name__ == "__main__":
    unittest.main()
