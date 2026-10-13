#!/usr/bin/env python3
"""Byte-accurate HOME 4.1.0 Native Item8 member Getter projection.

Every getter address is verified from the same original main.elf and the
data-pointer wrapper x0->[x0] established at main+0x4FD098. Labels match
pkNX Item8 where cross-validated; unknown code flags remain raw values.
"""
from __future__ import annotations
import struct
from home41_native_item_getter import NativeItemRecord


def native_field_readouts(item: NativeItemRecord) -> dict:
    b=item.record_bytes
    if len(b)!=0x30:
        raise ValueError("native Item8 record must have 48 bytes")
    u32=lambda o:struct.unpack_from("<I",b,o)[0]
    u16=lambda o:struct.unpack_from("<H",b,o)[0]
    i16=lambda o:struct.unpack_from("<h",b,o)[0]
    packed=u16(0x10)
    return {
       "native_price_u32":u32(0x00),           # main+0x4FD108
       "native_price_watts_u32":u32(0x04),     # main+0x4FD114
       "native_price_alternate_u32":u32(0x08), # main+0x4FD120
       "native_item_sprite_i16":i16(0x1A),    # main+0x4FD12C
       "native_pouch_low4":b[0x11]&0x0f,     # main+0x4FD1B4
       "native_effect_field_u8":b[0x13],      # main+0x4FD1C4
       "native_can_use_u8":b[0x15],           # main+0x4FD1DC
       "native_group_type_u8":b[0x1C],       # main+0x4FD220
       "native_group_index_u8":b[0x1D],      # main+0x4FD22C
       "native_packed16_low5":packed&31,      # main+0x4FD184
       "native_packed16_bit5":(packed>>5)&1,  # main+0x4FD194
       "native_packed16_bit6":(packed>>6)&1,  # main+0x4FD1A4
       "native_packed16_bit7":(packed>>7)&1,  # main+0x4FD238
       "native_packed16_bit12":(packed>>12)&1,# main+0x4FD15C
       "native_packed16_bit13":(packed>>13)&1,# main+0x4FD248
       "native_u8_offset_0c":b[0x0C],       # main+0x4FD138
       "native_u8_offset_0d":b[0x0D],       # main+0x4FD144
       "native_u8_offset_0e":b[0x0E],       # main+0x4FD150
       "native_u8_offset_12":b[0x12],       # main+0x4FD16C
       "native_u8_offset_14":b[0x14],       # main+0x4FD1D0
       "native_u8_offset_16":b[0x16],       # main+0x4FD1E8
       "native_u8_offset_18":b[0x18],       # main+0x4FD214
       "native_u8_offset_1e":b[0x1E],       # main+0x4FD100 (conditional)
    }


# Exactly-checked native fields. Semantic labels additionally cross-checked
# against pkNX.Item8, but their deeper battle/usage effects remain unproven.
FIELD_NATIVE_GETTERS={
    "native_price_u32":"0x4FD108",
    "native_price_watts_u32":"0x4FD114",
    "native_price_alternate_u32":"0x4FD120",
    "native_item_sprite_i16":"0x4FD12C",
    "native_pouch_low4":"0x4FD1B4",
    "native_effect_field_u8":"0x4FD1C4",
    "native_can_use_u8":"0x4FD1DC",
    "native_group_type_u8":"0x4FD220",
    "native_group_index_u8":"0x4FD22C",
    "native_packed16_low5":"0x4FD184",
    "native_packed16_bit5":"0x4FD194",
    "native_packed16_bit6":"0x4FD1A4",
    "native_packed16_bit7":"0x4FD238",
    "native_packed16_bit12":"0x4FD15C",
    "native_packed16_bit13":"0x4FD248",
    "native_u8_offset_0c":"0x4FD138",
    "native_u8_offset_0d":"0x4FD144",
    "native_u8_offset_0e":"0x4FD150",
    "native_u8_offset_12":"0x4FD16C",
    "native_u8_offset_14":"0x4FD1D0",
    "native_u8_offset_16":"0x4FD1E8",
    "native_u8_offset_18":"0x4FD214",
    "native_u8_offset_1e":"0x4FD100",
}
