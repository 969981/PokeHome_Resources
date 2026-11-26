#!/usr/bin/env python3
"""Read-only original HOME 4.1.0 icon BNTX audit. No fabricated PNGs."""
from __future__ import annotations
import argparse
import csv
import hashlib
import json
import struct
from collections import Counter
from pathlib import Path
from home41_romfs_core import sarc_members
from home41_bntx_to_png import decode_bntx

NCA = "57b83ea8c0af21ef26e2519b9580b373_NCA"
SOURCES = {
    "pokemon_icons": ("pokemon/icon_pokemon/bin/icon_pokemon.arc", 52879496,
        "eca6074b6b4a8c6f487c515dee8080e147426b4db335dd8b5847b9a1efc7de06"),
    "items": ("appli/icon_item/bin/icon_item.arc", 106624,
        "b0a2810b30e7a8b7e3737f2fac24f7694f6a7662c507691554a9ac10708894ef"),
}
MAX_TEXTURES = 10000

def sha(data):
    return hashlib.sha256(data).hexdigest()

def metadata(raw):
    def read(fmt, pos):
        if pos < 0 or pos + struct.calcsize(fmt) > len(raw):
            raise ValueError(f"read outside member: {pos}")
        return struct.unpack_from(fmt, raw, pos)[0]
    if raw[:4] != b"BNTX" or raw[12:14] != b"\xff\xfe" or raw[32:36] != b"NX  ":
        raise ValueError("unsupported BNTX header")
    count, table = read("<I", 36), read("<Q", 40)
    if not 1 <= count <= MAX_TEXTURES or table + count * 8 > len(raw):
        raise ValueError("invalid BRTI pointer table")
    rows = []
    for i in range(count):
        p = read("<Q", table + 8*i)
        if raw[p:p+4] != b"BRTI" or p + 144 > len(raw):
            raise ValueError(f"invalid BRTI {i}")
        np = read("<Q", p+96)
        n = read("<H", np)
        if not 1 <= n <= 1024 or np+2+n > len(raw):
            raise ValueError(f"invalid name length {i}")
        name = raw[np+2:np+2+n].decode("utf-8", "strict")
        rows.append(dict(texture_index=i, raw_name=name, brti_offset=p,
            name_offset=np, format=f"0x{read('<I',p+28):04X}",
            width=read("<I",p+36), height=read("<I",p+40),
            depth=read("<I",p+44), array_count=read("<I",p+48),
            tile_mode=read("<H",p+18), png_status="not_attempted",
            reason="", png_path="", png_sha256=""))
    return rows

def audit(root, out, decode):
    out.mkdir(parents=True, exist_ok=True)
    summary = {}
    for category, (rel, expected_size, expected_sha) in SOURCES.items():
        source = root / NCA / "1/bin" / rel
        if source.stat().st_size > 128*1024*1024:
            raise ValueError("archive too large")
        arc = source.read_bytes()
        matches = [m for m in sarc_members(arc) if m["name"] == "timg/__Combined.bntx"]
        if len(matches) != 1:
            raise ValueError("archive member missing or ambiguous")
        m = matches[0]
        raw = arc[m["offset"]:m["offset"]+m["bytes"]]
        if len(raw) != expected_size or sha(raw) != expected_sha:
            raise ValueError("BNTX member baseline mismatch")
        rows = metadata(raw)
        folder = out / category
        folder.mkdir(exist_ok=True)
        if decode:
            try:
                for info, png in decode_bntx(raw, max_textures=MAX_TEXTURES):
                    i = info["texture_index"]
                    row = rows[i]
                    row["png_status"] = info["png_status"]
                    row["reason"] = info.get("reason","")
                    if png is not None:
                        if png[:8] != b"\x89PNG\r\n\x1a\n" or struct.unpack_from(">II",png,16) != (row["width"],row["height"]):
                            raise ValueError(f"invalid PNG {i}")
                        target = folder / f"texture_{i:05d}.png"
                        target.write_bytes(png)
                        row["png_path"] = target.relative_to(out).as_posix()
                        row["png_sha256"] = sha(png)
            except (ValueError, OSError, struct.error) as e:
                for row in rows:
                    if row["png_status"] == "not_attempted":
                        row["png_status"] = "not_decoded_after_error"
                        row["reason"] = str(e)
        with (folder/"brti_index.csv").open("w",encoding="utf-8",newline="") as f:
            w=csv.DictWriter(f,fieldnames=list(rows[0]))
            w.writeheader()
            w.writerows(rows)
        summary[category] = {"archive":rel,"archive_sha256":sha(arc),
            "member_sha256":sha(raw),"member_bytes":len(raw),
            "textures":len(rows),"unique_raw_names":len({r["raw_name"] for r in rows}),
            "formats":dict(Counter(r["format"] for r in rows)),
            "png_status":dict(Counter(r["png_status"] for r in rows))}
    (out/"summary.json").write_text(json.dumps(summary,indent=2)+"\n",encoding="utf-8")
    return summary

if __name__ == "__main__":
    p=argparse.ArgumentParser(description=__doc__)
    p.add_argument("--root",type=Path,default=Path("."))
    p.add_argument("--out",type=Path,required=True)
    p.add_argument("--decode",action="store_true")
    a=p.parse_args()
    print(json.dumps(audit(a.root,a.out,a.decode),indent=2))
