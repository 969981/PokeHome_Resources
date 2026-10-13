#!/usr/bin/env python3
"""Exact HOME 4.1.0 Native Item8 blob-to-record pointer calculation.

Direct ELF proof (sha256 bdb558...):
- main+0x4FD764  [item owner +0x58] -> raw asset +0x190
- main+0x4FD774  cache raw blob at owner+0x160
- main+0x4FD784  Native item lookup and raw 0x30-byte pointer getter
- main+0x4FD794  u16 header+2 is *capacity*, NOT u16 header+0 count
- main+0x4FD7A8  u16 indexed at 0x44 + 2*item_id
- main+0x4FD7B4  u32 record offset at header+0x40
- main+0x4FD7C0  UMADDL(index, 0x30, base+offset)

For scalar C-like 16-bit arguments, the Native compares w1 UXTH. The code
accepts padded slots 1829..1831 (each maps to record index zero); it does
not make them real item IDs with logical names.
"""
from __future__ import annotations
from dataclasses import dataclass
import struct

RECORD_BYTES = 0x30
EXPECTED_SHA_ELF = "bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a"


class NativeLookupFailure(ValueError):
    """Native failure branch main+0x4FD7CC; not an ordinary record."""


@dataclass(frozen=True)
class NativeItemRecord:
    argument_raw_u32: int
    indexed_id_u16: int
    logical_item_count_u16: int
    indexed_capacity_u16: int
    record_count_u16: int
    record_index_u16: int
    record_start_u32: int
    data_offset: int
    padded_slot: bool
    record_bytes: bytes


def native_item_record(data: bytes, item_id: int) -> NativeItemRecord:
    """Model the Native main+0x4FD784 getter, data pointer = file offset zero.

    For clarity, reject integers outside uint32. Native truncates with UXTH:
    e.g. 0x10002 addresses the same slot as 2.
    """
    if len(data) < 0x44 or not 0 <= item_id < (1 << 32):
        raise NativeLookupFailure("invalid raw blob or unsigned 32-bit argument")
    logical_item_count = struct.unpack_from("<H", data, 0)[0]
    indexed_capacity = struct.unpack_from("<H", data, 2)[0]
    record_count = struct.unpack_from("<H", data, 4)[0]
    indexed_id = item_id & 0xFFFF
    if indexed_id >= indexed_capacity:
        raise NativeLookupFailure("indexed ID outside native u16 capacity")
    slot_offset = 0x44 + indexed_id * 2
    if slot_offset + 2 > len(data):
        raise NativeLookupFailure("indexed item slot not backed by source")
    record_index = struct.unpack_from("<H", data, slot_offset)[0]
    if record_index >= record_count:
        raise NativeLookupFailure("indexed data record outside native record count")
    record_start = struct.unpack_from("<I", data, 0x40)[0]
    record_offset = record_start + record_index * RECORD_BYTES
    if record_offset + RECORD_BYTES > len(data):
        raise NativeLookupFailure("record pointer outside original raw resource")
    return NativeItemRecord(
        argument_raw_u32=item_id,
        indexed_id_u16=indexed_id,
        logical_item_count_u16=logical_item_count,
        indexed_capacity_u16=indexed_capacity,
        record_count_u16=record_count,
        record_index_u16=record_index,
        record_start_u32=record_start,
        data_offset=record_offset,
        padded_slot=indexed_id >= logical_item_count,
        record_bytes=data[record_offset:record_offset + RECORD_BYTES],
    )
