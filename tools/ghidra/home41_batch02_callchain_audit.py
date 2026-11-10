#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""HOME41 Batch02 evidence-anchored local C audit (read-only).

Checks exact recovered Ghidra 12.2 C snippets; does not claim true ABI,
runtime observation, packet I/O, or server save confirmation.
"""
from __future__ import annotations
import argparse
import hashlib
import json
from pathlib import Path

ELF_SHA256 = "bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a"
REPO_ROOT = Path(__file__).resolve().parents[2]
DEFAULT_C = REPO_ROOT / "derived/4.1.0/Ghidra_12.2_Run_42763137320/c"

# Each literal was individually observed in the published, unmodified Ghidra C.
EVIDENCE = {
    0x5306B4: ("EH4_CRC_MISMATCH_WRITER", [
        "iVar2 = FUN__text__00630120(param_1);",
        "FUN__text__0063041c(param_1);",
        "if (iVar1 != iVar2)",
        "*(undefined1 *)(lVar4 + 0xc) = 1;",
    ]),
    0x50E7F8: ("RECORD_PLUS_0x12_ACCESSOR", [
        "return *(long *)(param_1 + 8) + 0x12;",
    ]),
    0x50FC9C: ("STATUS_1E_BOOLEAN_CONSUMER", [
        "lVar2 = FUN__text__0060e7f8(param_1);",
        "cVar1 = *(char *)(lVar2 + 0xc);",
        "return cVar1 != '\\0';",
    ]),
    0x510E1C: ("STATUS_1E_BYTE_FALLBACK_CONSUMER", [
        "if (*(char *)(lVar1 + 0xc) == '\\0')",
        "uVar2 = *(undefined1 *)(lVar1 + 0x93);",
        "uVar2 = DAT_00c15e45;",
    ]),
    0x51C860: ("STATUS_1E_EXPLICIT_MUTATOR", [
        "param_2 = param_2 & 1;",
        "*(byte *)(lVar7 + 0xc) = param_2;",
    ]),
    0x5168F0: ("STATUS_1E_EXPORT_CONSUMER", [
        "uVar8 = FUN__text__0060fc9c(param_1);",
        "FUN__text__005f32c4(param_2,puVar10 + 0x44);",
    ]),
    0x50E9C0: ("SIDEDATA_TAG_REMOVAL", [
        "if (cVar4 != param_2)",
        "memcpy(*(void **)(param_1 + 8),local_300,",
    ]),
    0x0F67F0: ("DIRTY_SIX_WRITE_CALLER", [
        "FUN__text__00306588(lVar5);",
        "FUN__text__003068c0(lVar5,0,",
        "FUN__text__003068c0(lVar5,5,",
        "FUN__text__001951d4(",
    ]),
    0x2068C0: ("DIRTY_KEY_DEDUP_APPEND", [
        "FUN__text__00321ac0()",
        "0x7fc18",
        "0x93498",
    ]),
    0x225490: ("DIRTY_COUNT_INIT_RESET", [
        "DAT_00978ac8 = 0;",
    ]),
    0x205BA4: ("PRE_DIRTY_COPY_END_BOUNDARY", [
        "lVar1 = FUN__text__00321ac0();",
        "lVar1 + 0x7d1e8",
        "0x2a30",
    ]),
    0x531268: ("PACKED_2BIT_UPDATE", [
        "if ((param_2 < 6) && (param_3 < 3))",
        "FUN__text__0063784c(",
        "FUN__text__0061d4a0(",
    ]),
}

def audit(c_root: Path) -> dict:
    findings = []
    failures = []
    for rva, (claim, needles) in sorted(EVIDENCE.items()):
        ghidra_va = rva + 0x100000
        path = c_root / f"_text__{ghidra_va:08x}.c"
        missing = []
        try:
            data = path.read_bytes()
            body = data.decode("utf-8")
        except (OSError, UnicodeError) as err:
            failures.append(f"0x{rva:X}: cannot read Ghidra source: {err}")
            continue
        if f"Ghidra function entry: .text::{ghidra_va:08x}" not in body:
            missing.append("entrypoint")
        if ELF_SHA256 not in body:
            missing.append("ELF_SHA256")
        for text in needles:
            if text not in body:
                missing.append(text)
        findings.append({
            "rva": f"0x{rva:X}",
            "claim": claim,
            "source": path.as_posix(),
            "sha256": hashlib.sha256(data).hexdigest(),
            "matched_literals": len(needles) - sum(n in needles for n in missing),
            "status": "STATIC_C_MATCH" if not missing else "FAIL",
            "missing": missing,
        })
        if missing:
            failures.append(f"0x{rva:X}: {missing}")
    # Arithmetic bound check distinct from save/ACK inference.
    if 0x7D1E8 + 0x2A30 != 0x7FC18:
        failures.append("Pre-Dirty copy boundary mismatch")
    return {
        "status": "PASS_STATIC_ONLY" if not failures else "FAIL",
        "elf_sha256": ELF_SHA256,
        "checks": len(EVIDENCE),
        "matched": sum(f["status"] == "STATIC_C_MATCH" for f in findings),
        "files": findings,
        "errors": failures,
        "runtime_equivalence": "NOT_OBSERVED",
        "server_ack_chain": "NOT_CLOSED",
        "scope": "Ghidra C literal/source-identity and offset arithmetic only",
    }

def main() -> int:
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument("--c-root", type=Path, default=DEFAULT_C)
    p.add_argument("--out", type=Path)
    args = p.parse_args()
    report = audit(args.c_root)
    output = json.dumps(report, ensure_ascii=False, indent=2) + "\n"
    if args.out is not None:
        args.out.parent.mkdir(parents=True, exist_ok=True)
        args.out.write_text(output, encoding="utf-8")
    print(json.dumps({k: report[k] for k in (
        "status", "checks", "matched", "errors", "runtime_equivalence",
        "server_ack_chain",
    )}, ensure_ascii=False, indent=2))
    return 0 if not report["errors"] else 1

if __name__ == "__main__":
    raise SystemExit(main())
