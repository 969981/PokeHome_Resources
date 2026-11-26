#!/usr/bin/env python3
"""Read-only research model for HOME 4.1.0 image request producer 0x105D60.

Input is a decoded native core record returned by 0x50E7F8, not a raw PKM
or HOME storage blob. Exceptional/default-object branch intentionally rejected.
Ball input is already obtained from the native game-side getter; its dispatch
tables are not yet reconstructed. No claim of raw PKM or native runtime parity.
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
    def test_ball(self):
        self.assertEqual(cross_game_ball_number(0),27)
        self.assertEqual(cross_game_ball_number(16),16)
        self.assertEqual(ball_display_number(27,2,2,True,27),4)
        self.assertEqual(ball_display_number(27,1,2,True,27),27)

if __name__ == "__main__":
    unittest.main()
