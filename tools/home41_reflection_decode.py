#!/usr/bin/env python3
"""Decode FlatBuffers records only when a real BFBS reflection schema is supplied.

Currently used by HOME 4.1.0 PokedexBlackListMainArray. Unlike generic
FlatBuffers inspection, field names and scalar types come from the actual
accompanying .bfbs file. Rejects unsupported schema types.
"""
from __future__ import annotations

import struct


def _check(data: bytes, pos: int, n: int):
    if pos < 0 or n < 0 or pos + n > len(data):
        raise ValueError("FlatBuffers data boundary exceeded")


def _u16(data: bytes, p: int) -> int:
    _check(data, p, 2)
    return struct.unpack_from("<H", data, p)[0]


def _u32(data: bytes, p: int) -> int:
    _check(data, p, 4)
    return struct.unpack_from("<I", data, p)[0]


def _slot(data: bytes, pos: int, field_id: int, width: int):
    """Find an optional field, supporting FlatBuffers shared/forward vtables."""
    _check(data, pos, 4)
    vt = pos - struct.unpack_from("<i", data, pos)[0]
    _check(data, vt, 4)
    vsize, objsize = struct.unpack_from("<HH", data, vt)
    if vsize < 4 or vsize % 2 or objsize < 4 or vsize > 4096:
        raise ValueError("invalid FlatBuffers vtable")
    _check(data, vt, vsize)
    _check(data, pos, objsize)
    entry = vt + 4 + field_id * 2
    if entry + 2 > vt + vsize:
        return None
    offset = _u16(data, entry)
    if not offset:
        return None
    if offset < 4 or offset + width > objsize:
        raise ValueError("FlatBuffers field beyond table object")
    return pos + offset


def decode_reflected_scalar_vector_tables(data: bytes, schema: dict) -> dict:
    """Read one root table with a vector of child tables of integer scalars.

    Supports scalar codes Short/UShort/Int/UInt. Fields absent from a table
    retain the defaults explicitly recorded in the BFBS schema.
    """
    objects = schema["objects"]
    root_type = schema["root_table"]
    root = next((o for o in objects if o["name"] == root_type), None)
    if root is None or len(root["fields"]) != 1:
        raise ValueError("expected one reflected root vector")
    field = root["fields"][0]
    vtype = field["type"]
    if vtype["base_type"] != 14 or vtype["element"] != 15:
        raise ValueError("reflected root field is not a vector of objects")
    index = vtype["index"]
    if not isinstance(index, int) or index < 0 or index >= len(objects):
        raise ValueError("invalid BFBS element type index")
    element = objects[index]
    if element["is_struct"]:
        raise ValueError("only reflected table vectors are implemented")
    supported = {5: ("<h", 2), 6: ("<H", 2), 7: ("<i", 4), 8: ("<I", 4)}
    for attr in element["fields"]:
        if attr["type"]["base_type"] not in supported:
            raise ValueError("unsupported BFBS scalar element type")
    _check(data, 0, 4)
    root_addr = _u32(data, 0)
    _check(data, root_addr, 4)
    p = _slot(data, root_addr, field["id"], 4)
    rows = []
    if p is not None:
        vector = p + _u32(data, p)
        count = _u32(data, vector)
        if count > 100000:
            raise ValueError("unbounded FlatBuffers vector")
        _check(data, vector + 4, count * 4)
        for i in range(count):
            ptr = vector + 4 + 4 * i
            obj = ptr + _u32(data, ptr)
            row = {"row": i}
            for attr in element["fields"]:
                fmt, width = supported[attr["type"]["base_type"]]
                field_pos = _slot(data, obj, attr["id"], width)
                row[attr["name"]] = (
                    struct.unpack_from(fmt, data, field_pos)[0] if field_pos is not None
                    else attr["default_integer"])
            rows.append(row)
    return {
        "format": "FlatBuffers decoded using supplied binary reflection schema",
        "root_table": root_type,
        "item_type": element["name"],
        "field_types": {a["name"]: a["type"]["base_type"] for a in element["fields"]},
        "count": len(rows),
        "rows": rows,
        "certainty": "field names, widths and defaults come from original BFBS; no guessed names",
    }
