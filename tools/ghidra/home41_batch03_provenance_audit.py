#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""HOME 4.1.0 Batch03: audit X0, HOME Tracker provenance, and Dirty-list scope.

Input: exact Ghidra 12.2 SQLite artifact from Run #42763137320.
Read-only static audit only; it does not claim runtime behavior, server ACK,
external-module coverage, or a successful Ghidra project mutation.
"""
from __future__ import annotations
import argparse
import collections
import json
import re
import sqlite3
from pathlib import Path

ELF_SHA256 = "bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a"
X0_DEF = re.compile(r"^(?:mov|ldr|ldur|add|sub|adr|adrp|ldp|ldrb|ldrh|ldrsw|orr|and|eor|csel)\s+[xw]0\b")

def addr(value: int) -> str:
    return f".text::{value:08x}"

def instruction(db: sqlite3.Connection, address: int) -> str | None:
    row = db.execute("SELECT display_text FROM instructions WHERE addr=?", (addr(address),)).fetchone()
    return row[0] if row else None

def c_source(db: sqlite3.Connection, entry: int) -> str:
    row = db.execute("SELECT c FROM decompilation WHERE entry=?", (addr(entry),)).fetchone()
    if row is None:
        raise AssertionError(f"missing decompilation for {addr(entry)}")
    return row[0]

def call_refs(db: sqlite3.Connection, target: int) -> list[str]:
    return [r[0] for r in db.execute(
        "SELECT from_addr FROM references_full WHERE to_addr=? AND is_call=1 ORDER BY from_addr",
        (addr(target),),
    )]

def expect_ins(db: sqlite3.Connection, address: int, expected: str, errors: list[str]) -> None:
    got = instruction(db, address)
    if got != expected:
        errors.append(f"{addr(address)} expected {expected!r}, got {got!r}")

def audit(db_path: Path) -> dict:
    db = sqlite3.connect(f"file:{db_path}?mode=ro", uri=True)
    errors: list[str] = []
    integrity = db.execute("PRAGMA integrity_check").fetchone()[0]
    if integrity != "ok":
        errors.append(f"SQLite integrity_check={integrity}")

    counts = {
        "functions": db.execute("SELECT COUNT(*) FROM functions").fetchone()[0],
        "instructions": db.execute("SELECT COUNT(*) FROM instructions").fetchone()[0],
        "references": db.execute("SELECT COUNT(*) FROM references_full").fetchone()[0],
        "decompilations": db.execute("SELECT COUNT(*) FROM decompilation").fetchone()[0],
    }
    statuses = {r[0]: r[1] for r in db.execute(
        "SELECT status,COUNT(*) FROM decompilation GROUP BY status")}
    expected_counts = {"functions": 15415, "instructions": 1029451,
                       "references": 423988, "decompilations": 15415}
    if counts != expected_counts:
        errors.append(f"database coverage changed: {counts}")
    if statuses != {"OK": 15415}:
        errors.append(f"decompilation status coverage changed: {statuses}")

    # A. Hidden X0 parameter to 0x5306B4.
    sites = call_refs(db, 0x006306B4)
    histogram = collections.Counter()
    x0_proven = []
    for site in sites:
        pc = int(site.split("::")[-1], 16)
        previous = instruction(db, pc - 4)
        if previous != "bl 0x0060e7c4":
            errors.append(f"{site}: expected immediate preceding BL 0x60E7C4, got {previous!r}")
            continue
        source = None
        distance = None
        for delta in range(8, 0x40, 4):
            ins = instruction(db, pc - delta)
            if ins is None:
                break
            if ins.startswith("bl ") or ins.startswith("blr "):
                errors.append(f"{site}: intervening call could clobber X0: {ins}")
                break
            if X0_DEF.match(ins):
                source, distance = ins, delta
                break
        if source is None:
            errors.append(f"{site}: could not recover X0 source before getter")
            continue
        if source not in ("mov x0,x19", "mov x0,x20"):
            errors.append(f"{site}: unexpected view source register setup {source!r}")
        histogram[(source, distance)] += 1
        x0_proven.append({"callsite": site, "getter_input": source, "distance_bytes": distance})

    expect_ins(db, 0x0060E7C4, "ldr x0,[x0, #0x8]", errors)
    expect_ins(db, 0x0060E7C8, "ret", errors)
    expect_ins(db, 0x006306C8, "mov x20,x0", errors)
    if len(sites) != 120 or len(x0_proven) != 120:
        errors.append(f"X0 callsite coverage expected 120/120, got {len(x0_proven)}/{len(sites)}")

    # B. Record+0x12 is the GameDataCore base; Tracker is its first u64.
    for pc, text in [
        (0x0060E7F8, "ldr x8,[x0, #0x8]"),
        (0x0060E7FC, "add x0,x8,#0x12"),
        (0x0060E800, "ret"),
        (0x0060F9A0, "bl 0x0060e7f8"),
        (0x0060F9B0, "ldr x21,[x0]"),
        (0x0060FA00, "mov x0,x21"),
        (0x0060FA14, "ret"),
        (0x00637404, "ldr x0,[x0, #0x2f0]"),
        (0x00637408, "b 0x0060f8d0"),
    ]:
        expect_ins(db, pc, text, errors)

    # C. Track Tracker through the box slot's persisted metadata pair.
    for pc, text in [
        (0x00301CF4, "ldr x0,[x21, #0x58]"),
        (0x00301CF8, "bl 0x00637404"),
        (0x00301CFC, "str x0,[x22, #0x2f0]"),
        (0x003003E0, "ldr x8,[x20, #0x2f0]"),
        (0x003003E4, "ldr x9,[x20, #0x2f8]"),
        (0x003003E8, "stp x8,x9,[x19, #0x60]"),
        (0x00302044, "ldp x9,x8,[x23, #0x60]"),
        (0x0030204C, "str x9,[x21, #0x2f0]"),
        (0x00302050, "str x8,[x21, #0x2f8]"),
    ]:
        expect_ins(db, pc, text, errors)

    # D. The six-field stage calls the Tracker-dedup insertion routine six times.
    dirty_sites = call_refs(db, 0x003068C0)
    if len(dirty_sites) != 6:
        errors.append(f"expected six direct calls to 0x2068C0, got {len(dirty_sites)}")
    if any(not site.startswith(".text::001f") for site in dirty_sites):
        errors.append(f"unexpected Dirty insertion callers: {dirty_sites}")
    stage = c_source(db, 0x001F67F0)
    for marker in [
        "FUN__text__003068c0(lVar5,0,",
        "FUN__text__003068c0(lVar5,1,",
        "FUN__text__003068c0(lVar5,2,",
        "FUN__text__003068c0(lVar5,3,",
        "FUN__text__003068c0(lVar5,4,",
        "FUN__text__003068c0(lVar5,5,",
        "param_1 + 0x84", "param_1 + 0x98",
    ]:
        if marker not in stage:
            errors.append(f"0x0F67F0 missing C evidence {marker!r}")

    # E. IsBadEgg semantics: CRC mismatch writer, explicit setter, boolean reader.
    crc = c_source(db, 0x006306B4)
    setter = c_source(db, 0x0061C860)
    getter = c_source(db, 0x0060FC9C)
    if "*(undefined1 *)(lVar4 + 0xc) = 1;" not in crc:
        errors.append("0x5306B4 no longer writes GameDataCore+0x0C on CRC mismatch")
    if "*(byte *)(lVar7 + 0xc) = param_2;" not in setter:
        errors.append("0x51C860 IsBadEgg setter evidence missing")
    if "cVar1 = *(char *)(lVar2 + 0xc);" not in getter:
        errors.append("0x50FC9C IsBadEgg getter evidence missing")

    # F. Scope of the Dirty Tracker set: direct static users only.
    key_users = [r[0] for r in db.execute(
        "SELECT entry FROM decompilation WHERE c LIKE '%0x7fc18%' ORDER BY entry")]
    count_users = [r[0] for r in db.execute(
        "SELECT entry FROM decompilation WHERE c LIKE '%0x93498%' ORDER BY entry")]
    reset_users = [r[0] for r in db.execute(
        "SELECT entry FROM decompilation WHERE c LIKE '%DAT_00978ac8%' ORDER BY entry")]
    reset = c_source(db, 0x00325490)
    reset_xrefs = db.execute(
        "SELECT COUNT(*) FROM references_full WHERE to_addr=?", (addr(0x00325490),)
    ).fetchone()[0]
    if key_users != [addr(0x003068C0)]:
        errors.append(f"unexpected direct key-list users: {key_users}")
    if count_users != [addr(0x003068C0)]:
        errors.append(f"unexpected direct count-offset users: {count_users}")
    if addr(0x00325490) not in reset_users:
        errors.append(f"count reset routine missing from DAT_00978AC8 users: {reset_users}")
    if "DAT_00978ac8 = 0;" not in reset or "FUN__text__00300180(lVar6);" not in reset:
        errors.append("0x225490 no longer matches Box subsystem reinitialization/reset evidence")

    return {
        "status": "PASS_STATIC_ONLY" if not errors else "FAIL",
        "elf_sha256": ELF_SHA256,
        "sqlite_integrity": integrity,
        "database_coverage": counts,
        "decompilation_statuses": statuses,
        "x0_transfer": {
            "target_rva": "0x5306B4",
            "direct_calls": len(sites),
            "proven_calls": len(x0_proven),
            "source_histogram": [
                {"instruction": k[0], "distance_bytes": k[1], "count": v}
                for k, v in sorted(histogram.items())
            ],
            "getter_instructions": [instruction(db, 0x0060E7C4), instruction(db, 0x0060E7C8)],
            "callee_x0_capture": instruction(db, 0x006306C8),
        },
        "home_tracker_provenance": {
            "record_core_base": "record+0x12",
            "tracker": "GameDataCore+0x00 = record+0x12 (uint64)",
            "encryption_constant": "GameDataCore+0x08 = record+0x1A (uint32)",
            "is_bad_egg": "GameDataCore+0x0C = record+0x1E (uint8)",
            "independent_reference": "PKHeX PKM/HOME/GameDataCore.cs",
            "tracker_read": "0x50F8D0 reads uint64 at record+0x12 under record lock",
            "box_slot": "slot+0x2F0 <-> wrapper+0x60; companion qword +0x2F8 <-> +0x68",
            "dirty_insert_calls": len(dirty_sites),
            "dirty_key": "HOME Tracker",
        },
        "dirty_list_scope": {
            "direct_key_list_users": key_users,
            "direct_count_offset_users": count_users,
            "count_global_users": reset_users,
            "reset_routine": "0x225490",
            "reset_routine_static_xrefs": reset_xrefs,
            "interpretation": "No separate direct consumer found in this main.elf decompilation. Count reset occurs in Box subsystem reinitialization; save/ACK remains unproven.",
            "save_ack_chain": "NOT_CLOSED",
        },
        "errors": errors,
    }

def main() -> int:
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument("--db", type=Path, required=True, help="Ghidra SQLite database from Run #42763137320")
    p.add_argument("--out", type=Path, help="Optional JSON report path")
    args = p.parse_args()
    report = audit(args.db)
    encoded = json.dumps(report, ensure_ascii=False, indent=2) + "\n"
    if args.out:
        args.out.parent.mkdir(parents=True, exist_ok=True)
        args.out.write_text(encoded, encoding="utf-8")
    print(json.dumps({
        "status": report["status"],
        "x0_calls": report["x0_transfer"]["direct_calls"],
        "x0_proven": report["x0_transfer"]["proven_calls"],
        "dirty_stage_calls": report["home_tracker_provenance"]["dirty_insert_calls"],
        "direct_key_list_users": report["dirty_list_scope"]["direct_key_list_users"],
        "save_ack_chain": report["dirty_list_scope"]["save_ack_chain"],
        "errors": report["errors"],
    }, ensure_ascii=False, indent=2))
    return 0 if report["status"] == "PASS_STATIC_ONLY" else 1

if __name__ == "__main__":
    raise SystemExit(main())
