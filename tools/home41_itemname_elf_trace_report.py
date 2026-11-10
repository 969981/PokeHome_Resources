#!/usr/bin/env python3
"""Original HOME 4.1.0 ELF source-backed itemname XREF, message and PML report.

Python 3.10+, capstone. Read-only. Does NOT assert a native UI runtime hit.
"""
from __future__ import annotations
import argparse
import hashlib
import json
from pathlib import Path
from home41_itemname_elf_xrefs import audit, load_segments
from home41_romfs_core import ahtb_labels, dat_lines

NCA = "57b83ea8c0af21ef26e2519b9580b373_NCA"
LOCALES = ("Simp_Chinese", "Trad_Chinese", "English", "JPN", "JPN_KANJI",
           "Korean", "German", "French", "Italian", "Spanish", "LATAM")


def disasm_window(raw, segs, address):
    from capstone import Cs, CS_ARCH_ARM64, CS_MODE_ARM
    s = next((x for x in segs if x["executable"] and
              x["va"] <= address < x["va"] + x["size"]), None)
    if s is None:
        raise ValueError(f"XREF outside executable LOAD segment: {address:X}")
    first = max(s["va"], (address - 0x60) & ~3)
    last = min(s["va"] + s["size"], (address + 0x100) & ~3)
    at = s["offset"] + first - s["va"]
    md = Cs(CS_ARCH_ARM64, CS_MODE_ARM)
    return [{"pc": f"0x{i.address:X}", "opcode": i.bytes.hex(),
             "mnemonic": i.mnemonic, "operands": i.op_str}
            for i in md.disasm(raw[at:at + last - first], first)]


def raw_text_proof(root):
    result = {}
    for locale in LOCALES:
        stem = root / NCA / "1/bin/message" / locale / "megaturtle/itemname"
        dat = stem.with_suffix(".dat").read_bytes()
        tbl = stem.with_suffix(".tbl").read_bytes()
        labels, texts = ahtb_labels(tbl), dat_lines(dat)
        if len(labels) != 2685 or len(texts) != 2685:
            raise ValueError(f"{locale}: expected exactly 2685 DAT+TBL pairs")
        for i, ((label, h), row) in enumerate(zip(labels, texts)):
            if label != f"ITEMNAME_{i:03d}" or not isinstance(row["text"], str):
                raise ValueError(f"{locale} mismatch at id {i}")
        result[locale] = {
            "rows": 2685,
            "dat_sha256": hashlib.sha256(dat).hexdigest(),
            "tbl_sha256": hashlib.sha256(tbl).hexdigest(),
            "samples": [{
                "item_id": i,
                "label": labels[i][0],
                "hash": f"{labels[i][1]:016X}",
                "text": texts[i]["text"],
            } for i in (1, 2)],
        }
    if len({x["samples"][0]["hash"] for x in result.values()}) != 1:
        raise ValueError("ITEMNAME_001 hashes differ across language files")
    return result


def kind(s):
    if "itemname" in s.lower():
        return "MESSAGE"
    if "pml/item" in s or "item.dat" in s:
        return "PML"
    if "item_%04d" in s or "item_dummy" in s:
        return "SPRITE"
    return "OTHER"


def main():
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument("--root", type=Path, default=Path("."))
    p.add_argument("--out-json", type=Path,
                   default=Path("derived/4.1.0/native_itemname_xrefs/itemname_elf_xrefs.json"))
    p.add_argument("--out-md", type=Path,
                   default=Path("docs/obsidian/HOME41_itemname_原版ELF静态XREF自动证据.md"))
    a = p.parse_args()
    root = a.root.resolve()
    elf_path = root / NCA / "0/main.elf"
    original = audit(elf_path)
    elf = elf_path.read_bytes()
    segments = load_segments(elf)
    locales = raw_text_proof(root)
    rows = []
    for x in original["xrefs"]:
        row = dict(x)
        row["category"] = kind(x["resource_text"])
        row["arm64_window"] = disasm_window(elf, segments, int(x["xref_rva"], 16))
        rows.append(row)
    totals = {k: sum(x["category"] == k for x in rows)
              for k in ("MESSAGE", "PML", "SPRITE", "OTHER")}
    states = {
        "original_11_language_DAT_TBL_verified": True,
        "elf_message_address_reference_found": totals["MESSAGE"] > 0,
        "message_manager_owner_verified": False,
        "native_ItemID_to_text_getter_verified": False,
        "native_UI_text_consumer_verified": False,
        "real_display_observed": False,
        "full_chain_closed": False,
    }
    result = {
        "elf_sha256": original["original_elf_sha256"],
        "elf_source": str(elf_path.relative_to(root)),
        "resource_strings": original["strings"],
        "references": rows,
        "counts": totals,
        "language_proof": locales,
        "verification": states,
        "boundary": ("ELF RVA/opcodes and source DAT/TBL are verified. A nearby BL "
                     "is not proof of a message getter, UI sink or live display."),
    }
    a.out_json.parent.mkdir(parents=True, exist_ok=True)
    a.out_json.write_text(json.dumps(result, ensure_ascii=False, indent=2)+"\n", encoding="utf-8")
    note = [
        "---",
        'title: "HOME 4.1.0：itemname DAT/TBL 原版 ELF 静态 XREF 实测证据"',
        "tags: [pokemon-home, 4.1.0, itemname, elf, obsidian]",
        "evidence: RESOURCE_XREF_ONLY",
        "---", "",
        "# HOME 4.1.0：itemname 与 PML 资源 ELF 静态证据", "",
        "> [!warning] **静态 XREF 不等于完整调用链闭合**。",
        "> 报告来自原始 ELF 同 SHA 的指令窗口；未观察原生消息管理器、ItemID 名称查询或实际 UI 显示。", "",
        f"- ELF SHA256: §{result['elf_sha256']}§",
        "- 原始语言资源：11 套 DAT/TBL，每套 2685 项，标签逐项核对",
        f"- message XREF: {totals['MESSAGE']}；PML: {totals['PML']}；Sprite: {totals['SPRITE']}", "",
        "| 类别 | RVA | 字符串 | XREF 类型 |",
        "|---|---|---|---|",
    ]
    for x in rows:
        note.append(f"| {x['category']} | §{x['xref_rva']}§ | "
                    f"§{x['resource_text'].replace('|','/')}§ | {x['kind']} |")
    for x in rows:
        note.extend(["", f"## {x['category']}  {x['xref_rva']}  {x['resource_text']}", "",
                     "下列指令是原版 ELF 静态反汇编，邻近 BL 不等于已经确定资源加载或 UI 消费。", "",
                     "§§§asm"])
        focused = {x["xref_rva"], x.get("add_rva")}
        for line in x["arm64_window"]:
            emphasis = "  ; <- STRING ADDRESS" if line["pc"] in focused else ""
            note.append(f"{line['pc']} {line['opcode']} {line['mnemonic']} {line['operands']}{emphasis}")
        note.append("§§§")
    note.extend(["", "## 11 语言原始文字对账", "",
                 "| Locale | ItemID=1 | ItemID=2 |",
                 "|---|---|---|"])
    for locale, rec in locales.items():
        a1, a2 = rec["samples"]
        note.append(f"| {locale} | {a1['text'].replace('|','/')} | {a2['text'].replace('|','/')} |")
    note.extend(["", "## 下阶段 Native/运行时验收边界", "",
                 "- Item8 PML 已知：§main+0x502104§ 装载、§0x4FD784§ Getter、§0x266D58§ Pouch、§0x2C3054§ Sprite。",
                 "- itemname 待证：资源对象注册/语言切换、ItemID 名称查找、Text sink、可见 UI 命中。",
                 "- 不能将 4.0.0 message 字符串 XREF 当作 4.1.0 的代码地址。",
                 "- 原始指令和校验 JSON：§derived/4.1.0/native_itemname_xrefs/itemname_elf_xrefs.json§。", ""])
    a.out_md.parent.mkdir(parents=True, exist_ok=True)
    a.out_md.write_text("\n".join(note).replace("§", chr(96)), encoding="utf-8")
    print(json.dumps({"static_audit": "PASS", "xref_counts": totals,
                      "full_chain_closed": False}, ensure_ascii=False))


if __name__ == "__main__":
    main()
