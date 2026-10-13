#!/usr/bin/env python3
"""Pokémon HOME 4.1.0 BNTX/SARC -> genuine PNG (read only; stdlib).

Supported: RGBA8, BC1, BC3, BC4-UNORM, BC5-UNORM.
ASTC/BC7/BC6 and unknown formats are *not* renamed to PNG.
BC4/BC5 use documented visualization mappings (grey / RG with blue=0).
Accepts *.bntx, *.bntx.gz and *.arc SARC archives.
"""
from __future__ import annotations
import argparse
import csv
import gzip
import hashlib
import os
import re
import struct
import zlib
from pathlib import Path
from home41_romfs_core import sarc_members

MAX_INPUT = 128 * 1024 * 1024
MAX_EXPANDED = 96 * 1024 * 1024
MAX_PIXELS = 32 * 1024 * 1024
BLOCK_FORMATS = {0x1A: 8, 0x1C: 16, 0x1D: 8, 0x1E: 16}
ALLOWED = {0x0B, 0x1A, 0x1C, 0x1D, 0x1E}

def u16(b, p):
    if p < 0 or p + 2 > len(b):
        raise ValueError("u16 outside input")
    return struct.unpack_from("<H", b, p)[0]

def u32(b, p):
    if p < 0 or p + 4 > len(b):
        raise ValueError("u32 outside input")
    return struct.unpack_from("<I", b, p)[0]

def u64(b, p):
    if p < 0 or p + 8 > len(b):
        raise ValueError("u64 outside input")
    return struct.unpack_from("<Q", b, p)[0]

def rgb565(v):
    return ((v >> 11 & 31) * 255 // 31,
            (v >> 5 & 63) * 255 // 63,
            (v & 31) * 255 // 31)

def bc4(block):
    a0, a1 = block[:2]
    if a0 > a1:
        palette = [a0, a1] + [((8 - j) * a0 + (j - 1) * a1) // 7 for j in range(2, 8)]
    else:
        palette = [a0, a1] + [((6 - j) * a0 + (j - 1) * a1) // 5 for j in range(2, 6)] + [0, 255]
    indices = int.from_bytes(block[2:8], "little")
    return [palette[(indices >> (j * 3)) & 7] for j in range(16)]

def bc1(block, force_four=False):
    a, b = struct.unpack_from("<HH", block)
    ca, cb = rgb565(a), rgb565(b)
    if a > b or force_four:
        colors = [(*ca, 255), (*cb, 255),
                  (*( (2 * ca[i] + cb[i]) // 3 for i in range(3)), 255),
                  (*( (ca[i] + 2 * cb[i]) // 3 for i in range(3)), 255)]
    else:
        colors = [(*ca, 255), (*cb, 255),
                  (*( (ca[i] + cb[i]) // 2 for i in range(3)), 255),
                  (0, 0, 0, 0)]
    value = struct.unpack_from("<I", block, 4)[0]
    return [colors[(value >> (2 * j)) & 3] for j in range(16)]

def unpack_block(block, fmt):
    if fmt == 0x0B:
        return [tuple(block[k:k + 4]) for k in range(0, len(block), 4)]
    if fmt == 0x1A:
        return bc1(block)
    if fmt == 0x1C:
        rgb = bc1(block[8:16], True)
        alpha = bc4(block[:8])
        return [(r, g, b, alpha[i]) for i, (r, g, b, _) in enumerate(rgb)]
    if fmt == 0x1D:
        red = bc4(block[:8])
        return [(v, v, v, 255) for v in red]
    if fmt == 0x1E:
        red, green = bc4(block[:8]), bc4(block[8:16])
        return [(red[i], green[i], 0, 255) for i in range(16)]
    raise ValueError(f"unsupported pixel format 0x{fmt:X}")

def block_linear_offset(x, y, block_width, bytes_per_block, tile_mode, block_height):
    xb = x * bytes_per_block
    if tile_mode == 1:
        return y * ((block_width * bytes_per_block + 31) // 32 * 32) + xb
    if tile_mode != 0:
        raise ValueError("unsupported tile mode")
    gobs = (block_width * bytes_per_block + 63) // 64
    gob = (y // (8 * block_height) * 512 * block_height * gobs
           + xb // 64 * 512 * block_height
           + (y % (8 * block_height)) // 8 * 512)
    return (gob + (xb % 64) // 32 * 256 + (y % 8) // 2 * 64
            + (xb % 32) // 16 * 32 + y % 2 * 16 + xb % 16)

def png_rgba(width, height, rgba):
    if len(rgba) != width * height * 4:
        raise ValueError("incomplete image")
    def chunk(kind, data):
        return (struct.pack(">I", len(data)) + kind + data
                + struct.pack(">I", zlib.crc32(kind + data) & 0xFFFFFFFF))
    scan = b"".join(b"\x00" + bytes(rgba[y * width * 4:(y + 1) * width * 4])
                    for y in range(height))
    return (b"\x89PNG\r\n\x1a\n"
            + chunk(b"IHDR", struct.pack(">IIBBBBB", width, height, 8, 6, 0, 0, 0))
            + chunk(b"IDAT", zlib.compress(scan, 9))
            + chunk(b"IEND", b""))

def decode_bntx(source):
    if not source.startswith(b"BNTX") or source[12:14] != b"\xff\xfe":
        raise ValueError("not a supported little endian Switch BNTX")
    if source[32:36] != b"NX  ":
        raise ValueError("unsupported BNTX target")
    count, table = u32(source, 36), u64(source, 40)
    if not 1 <= count <= 1000 or table + 8 * count > len(source):
        raise ValueError("invalid BNTX texture pointer table")
    for index in range(count):
        b = u64(source, table + index * 8)
        if source[b:b + 4] != b"BRTI" or b + 144 > len(source):
            raise ValueError(f"invalid BRTI at texture {index}")
        fmt = u32(source, b + 28)
        pixel_fmt, value_type = fmt >> 8, fmt & 255
        width, height = u32(source, b + 36), u32(source, b + 40)
        dims, arrays = u32(source, b + 44), u32(source, b + 48)
        layout = u32(source, b + 52)
        tiled = u16(source, b + 18)
        name_ptr = u64(source, b + 96)
        name_length = u16(source, name_ptr) if name_ptr + 2 <= len(source) else 0
        name = source[name_ptr + 2:name_ptr + 2 + min(name_length, 256)].split(b"\0", 1)[0].decode("utf-8", "replace")
        name = re.sub(r"[^a-zA-Z0-9_.-]", "_", name).strip("_.") or f"texture_{index:03d}"
        info = {"texture_index": index, "name": name, "format": f"0x{fmt:04X}",
                "width": width, "height": height, "tile_mode": tiled,
                "type": value_type, "png_status": "unsupported"}
        if not width or not height or width * height > MAX_PIXELS or dims != 1 or arrays != 1:
            info["reason"] = "invalid dimensions/depth/array"; yield info, None; continue
        if pixel_fmt not in ALLOWED or value_type not in (1, 6):
            info["reason"] = "pixel decoder not implemented"; yield info, None; continue
        if tiled not in (0, 1):
            info["reason"] = "tile mode not implemented"; yield info, None; continue
        if pixel_fmt in (0x1D, 0x1E) and value_type != 1:
            info["reason"] = "signed BC4/BC5 unsupported"; yield info, None; continue
        bw = 1 if pixel_fmt == 0x0B else 4
        bh = bw
        block_bytes = 4 if pixel_fmt == 0x0B else BLOCK_FORMATS[pixel_fmt]
        width_blocks, height_blocks = (width + bw - 1) // bw, (height + bh - 1) // bh
        data_ptr = u64(source, b + 112)
        mip0 = u64(source, data_ptr)
        blockheight = 1 << (layout & 7)
        if blockheight > 32:
            raise ValueError("blockheight too high")
        pixels = bytearray(width * height * 4)
        for block_y in range(height_blocks):
            for block_x in range(width_blocks):
                addr = mip0 + block_linear_offset(block_x, block_y, width_blocks,
                                                  block_bytes, tiled, blockheight)
                if addr + block_bytes > len(source):
                    raise ValueError(f"BNTX tex {index} block outside source")
                block = source[addr:addr + block_bytes]
                decoded = unpack_block(block, pixel_fmt)
                for oy in range(bh):
                    for ox in range(bw):
                        x, y = block_x * bw + ox, block_y * bh + oy
                        if x < width and y < height:
                            dst = (y * width + x) * 4
                            src = decoded[oy * bw + ox]
                            pixels[dst:dst + 4] = bytes(src)
        info["png_status"] = "decoded"
        info["color_interpretation"] = ("BC4 grey" if pixel_fmt == 0x1D else
                                       "BC5 R/G visualization, B=0" if pixel_fmt == 0x1E else "RGBA")
        yield info, png_rgba(width, height, pixels)

def read_source(path):
    if path.stat().st_size > MAX_INPUT:
        raise ValueError("oversized input")
    if path.name.lower().endswith(".gz"):
        with gzip.open(path, "rb") as f:
            binary = f.read(MAX_EXPANDED + 1)
            if len(binary) > MAX_EXPANDED:
                raise ValueError("excessive compressed texture expansion")
            return binary
    return path.read_bytes()

def main():
    ap = argparse.ArgumentParser(description=__doc__)
    ap.add_argument("--root", required=True, type=Path)
    ap.add_argument("--out", required=True, type=Path)
    ap.add_argument("--archives", action="store_true", help="scan *.arc SARC archives for embedded BNTX")
    a = ap.parse_args()
    root, out = a.root.resolve(), a.out.resolve()
    if not root.is_dir() or root == out or root in out.parents:
        ap.error("--root must be an existing folder and --out outside that folder")
    out.mkdir(parents=True, exist_ok=True)
    report = []
    for file in sorted(root.rglob("*")):
        if not file.is_file() or file.is_symlink() or ".git" in file.parts:
            continue
        rel = file.relative_to(root)
        name = file.name.lower()
        if not (name.endswith(".bntx") or name.endswith(".bntx.gz")
                or a.archives and name.endswith(".arc")):
            continue
        try:
            data = read_source(file)
            if data[:4] == b"SARC":
                entries = sarc_members(data)
                members = [(row["name"], data[row["offset"]:row["offset"] + row["bytes"]])
                           for row in entries if row["name"].lower().endswith(".bntx")]
            else:
                members = [(file.stem, data)]
            for member_name, raw in members:
                if not raw.startswith(b"BNTX"):
                    continue
                for info, png in decode_bntx(raw):
                    prefix = out / rel / member_name
                    if png is not None:
                        target = Path(str(prefix) + f".tex{info['texture_index']:03d}.png")
                        target.parent.mkdir(parents=True, exist_ok=True)
                        target.write_bytes(png)
                        info["output"] = str(target.relative_to(out))
                        info["png_sha256"] = hashlib.sha256(png).hexdigest()
                    report.append({"source": rel.as_posix(), "member": member_name, **info})
        except (OSError, ValueError, struct.error, EOFError) as exc:
            report.append({"source": rel.as_posix(), "png_status": "error", "reason": str(exc)})
    cols = ["source","member","texture_index","name","format","width","height",
            "tile_mode","type","png_status","color_interpretation","reason","output","png_sha256"]
    with (out / "texture_index.csv").open("w", newline="", encoding="utf-8-sig") as f:
        wr = csv.DictWriter(f, fieldnames=cols, extrasaction="ignore")
        wr.writeheader()
        wr.writerows(report)
    import json
    (out / "summary.json").write_text(json.dumps({
        "total_textures": len(report),
        "png_count": sum(r.get("png_status") == "decoded" for r in report),
        "unsupported": sum(r.get("png_status") == "unsupported" for r in report),
        "errors": sum(r.get("png_status") == "error" for r in report),
        "note": "BC5 RGB output is a channel visualization, not a shader-accurate rendered UI icon"
    }, ensure_ascii=False, indent=2) + "\n", encoding="utf-8")
    print((out / "summary.json").read_text(encoding="utf-8"))

if __name__ == "__main__":
    main()
