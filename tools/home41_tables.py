#!/usr/bin/env python3
"""Verified record extraction for HOME 4.1.0 grammar and two lookup tables.

No gameplay interpretations are invented: positional keys and matrix cells
remain explicitly raw identifiers. Input bytes are never modified.
"""
from __future__ import annotations

import struct


def decode_grammar(data: bytes) -> dict:
    """Decode [n:u8, width:u8, n*u16 offsets, n*width u8 cells, UTF-16LE terms].

    Terms use the absolute offsets from the original file. The matrix is
    decoded losslessly, but the semantic meaning of its columns is unknown.
    """
    if len(data) < 2:
        raise ValueError("truncated grammar header")
    count, width = data[0], data[1]
    end_header = 2 + 2 * count
    start_terms = end_header + count * width
    if len(data) < start_terms:
        raise ValueError("truncated grammar offset table or matrix")
    if not count:
        if width or len(data) != 2:
            raise ValueError("nonempty zero-term grammar")
        return {"format": "HOME grammar substitution table",
                "term_count": 0, "matrix_width": 0,
                "terms": [], "matrix": [], "resolved_selectors": [],
                "certainty": "complete byte layout; grammatical case semantics not inferred"}
    offsets = list(struct.unpack_from("<" + "H" * count, data, 2))
    if offsets[0] != start_terms or any(x % 2 for x in offsets):
        raise ValueError("grammar first term boundary / alignment invalid")
    if any(a >= b for a, b in zip(offsets, offsets[1:])):
        raise ValueError("grammar term offsets not increasing")
    if offsets[-1] >= len(data) or len(data) % 2:
        raise ValueError("grammar final term exceeds file")
    matrix = [list(data[end_header + row * width:end_header + (row + 1) * width])
              for row in range(count)]
    terms = []
    selectors = []
    for i, start in enumerate(offsets):
        end = offsets[i + 1] if i + 1 < count else len(data)
        segment = data[start:end]
        if len(segment) < 2 or len(segment) % 2 or not segment.endswith(b"\0\0"):
            raise ValueError("grammar row missing UTF-16 NUL terminator")
        variants = []
        position = 0
        while position < len(segment):
            next_end = None
            for j in range(position, len(segment), 2):
                if segment[j:j + 2] == b"\0\0":
                    next_end = j
                    break
            if next_end is None:
                raise ValueError("unterminated grammar variant")
            phrase = segment[position:next_end].decode("utf-16-le")
            variants.append({"relative_byte_offset": position, "text": phrase})
            position = next_end + 2
        positions = {x["relative_byte_offset"]: x["text"] for x in variants}
        for column, selector in enumerate(matrix[i]):
            if selector not in positions:
                raise ValueError("grammar matrix selector does not point to a string start")
            selectors.append({"term_index": i, "selector_column": column,
                              "selector_raw_u8": selector, "resolved_text": positions[selector]})
        terms.append({"index": i, "absolute_offset": start,
                      "utf16_bytes": len(segment), "text": variants[0]["text"],
                      "variants": variants})
    return {"format": "HOME grammar substitution table",
            "term_count": count, "matrix_width": width,
            "terms": terms, "matrix": matrix, "resolved_selectors": selectors,
            "certainty": "UTF-16LE string pool and per-cell byte offsets verified against original data; grammar condition meanings unknown"}


def grammar_csv_rows(doc: dict):
    """Lossless selector matrix resolved to actual language-dependent phrases."""
    return doc["resolved_selectors"]


def decode_item_hash_index(data: bytes) -> dict:
    """Read count:u32 + count * (hash:u64, candidate_index:u32, reserved:u32)."""
    if len(data) < 4:
        raise ValueError("item hash index header truncated")
    count = struct.unpack_from("<I", data, 0)[0]
    if count > 1_000_000 or len(data) != 4 + 16 * count:
        raise ValueError("item hash index record size/count mismatch")
    rows = []
    for i in range(count):
        digest, value, zero = struct.unpack_from("<QII", data, 4 + i * 16)
        if zero:
            raise ValueError("item hash index nonzero reserved word at " + str(i))
        rows.append({"row": i, "hash_u64_hex": f"{digest:016X}",
                     "index_candidate_u32": value, "reserved_u32": zero})
    return {"format": "HOME item hash-to-index 16-byte records",
            "count": count, "record_size": 16, "rows": rows,
            "certainty": "u64/u32/u32 records, record bounds and zero reserved fields verified; hash algorithm and index meaning not proved"}


def decode_form_storage_index(data: bytes) -> dict:
    """Read count:u16 + count * (packed_value:u32, ordinal:u16)."""
    if len(data) < 2:
        raise ValueError("form storage index header truncated")
    count = struct.unpack_from("<H", data, 0)[0]
    if len(data) != 2 + count * 6:
        raise ValueError("form storage index record count/size mismatch")
    rows = []
    for i in range(count):
        packed, ordinal = struct.unpack_from("<IH", data, 2 + 6 * i)
        if ordinal != i:
            raise ValueError("form storage index ordinal not sequential at " + str(i))
        rows.append({"row": i, "packed_value_u32": packed,
                     "packed_hex": f"{packed:08X}", "ordinal_u16": ordinal})
    return {"format": "HOME form storage 6-byte index",
            "count": count, "record_size": 6, "rows": rows,
            "certainty": "record structure and ordinal sequence verified; packed value meaning unknown"}
