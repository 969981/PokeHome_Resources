#!/usr/bin/env python3
"""P6 verified Pokémon HOME 4.1.0 item.dat Native property read sites.

Evidence strength:
- main+0x4FD098 calls main+0x4FD784, storing a raw Item8 48-byte pointer.
- main+0x4FD0B8 dispatches property selectors over this wrapper.
- main+0x4FD108 onward directly loads the record pointer from wrapper+0x00,
  and accesses its raw fields with LDR(W)/LDRH/LDRB/LDRSH.
- business LABELS are merely pkNX compatible, not Nintendo source symbols.

The script verifies exact instruction locations and mnemonics against a pinned
ELF SHA before publishing any field offsets or data widths.
"""
from __future__ import annotations
import argparse
import hashlib
import json
from pathlib import Path
from home41_elf_disasm_windows import window
from home41_elf_resource_xrefs import elf_segments

ELF_SHA = "bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a"

# (business label, getter RVA, actual record read instruction RVA,
#  opcode, exact operand fragment, file record offset, raw width, signedness,
#  optional bit extraction opcode RVA/opcode/operand)
# Caller wrapper[0] points at Item8 record; get-without-alias-risk requires
# getter -> ldr x8,[x0] -> this exact field access.
FIELDS = (
    ("price_pkNX",0x4FD108,0x4FD10C,"ldr","w0, [x8]",0x00,32,False,None),
    ("watts_price_pkNX",0x4FD114,0x4FD118,"ldr","w0, [x8, #4]",0x04,32,False,None),
    ("alternate_price_pkNX",0x4FD120,0x4FD124,"ldr","w0, [x8, #8]",0x08,32,False,None),
    ("misc_0c_raw",0x4FD138,0x4FD13C,"ldrb","w0, [x8, #0xc]",0x0C,8,False,None),
    ("misc_0d_raw",0x4FD144,0x4FD148,"ldrb","w0, [x8, #0xd]",0x0D,8,False,None),
    ("misc_0e_raw",0x4FD150,0x4FD154,"ldrb","w0, [x8, #0xe]",0x0E,8,False,None),
    ("flag10_bit12",0x4FD15C,0x4FD160,"ldrh","w8, [x8, #0x10]",0x10,16,False,(0x4FD164,"ubfx","#0xc, #1")),
    ("misc_12_raw",0x4FD16C,0x4FD170,"ldrb","w0, [x8, #0x12]",0x12,8,False,None),
    ("misc_0f_raw",0x4FD178,0x4FD17C,"ldrb","w0, [x8, #0xf]",0x0F,8,False,None),
    ("flags_10_low5",0x4FD184,0x4FD188,"ldrh","w8, [x8, #0x10]",0x10,16,False,(0x4FD18C,"and","#0x1f")),
    ("flags_10_bit5",0x4FD194,0x4FD198,"ldrh","w8, [x8, #0x10]",0x10,16,False,(0x4FD19C,"ubfx","#5, #1")),
    ("flags_10_bit6",0x4FD1A4,0x4FD1A8,"ldrh","w8, [x8, #0x10]",0x10,16,False,(0x4FD1AC,"ubfx","#6, #1")),
    ("pouch_low4_pkNX",0x4FD1B4,0x4FD1B8,"ldrb","w8, [x8, #0x11]",0x11,8,False,(0x4FD1BC,"and","#0xf")),
    ("effect_field_pkNX",0x4FD1C4,0x4FD1C8,"ldrb","w0, [x8, #0x13]",0x13,8,False,None),
    ("misc_14_raw",0x4FD1D0,0x4FD1D4,"ldrb","w0, [x8, #0x14]",0x14,8,False,None),
    ("can_use_on_pokemon_pkNX",0x4FD1DC,0x4FD1E0,"ldrb","w0, [x8, #0x15]",0x15,8,False,None),
    ("misc_16_raw",0x4FD1E8,0x4FD1EC,"ldrb","w0, [x8, #0x16]",0x16,8,False,None),
    ("flags_17_low4",0x4FD1F4,0x4FD1F8,"ldrb","w8, [x8, #0x17]",0x17,8,False,(0x4FD1FC,"and","#0xf")),
    ("flags_17_high4",0x4FD204,0x4FD208,"ldrb","w8, [x8, #0x17]",0x17,8,False,(0x4FD20C,"lsr","#4")),
    ("misc_18_raw",0x4FD214,0x4FD218,"ldrb","w0, [x8, #0x18]",0x18,8,False,None),
    ("group_type_pkNX",0x4FD220,0x4FD224,"ldrb","w0, [x8, #0x1c]",0x1C,8,False,None),
    ("group_index_pkNX",0x4FD22C,0x4FD230,"ldrb","w0, [x8, #0x1d]",0x1D,8,False,None),
    ("flags_10_bit7",0x4FD238,0x4FD23C,"ldrh","w8, [x8, #0x10]",0x10,16,False,(0x4FD240,"ubfx","#7, #1")),
    ("flags_10_bit13",0x4FD248,0x4FD24C,"ldrh","w8, [x8, #0x10]",0x10,16,False,(0x4FD250,"ubfx","#0xd, #1")),
    ("signed_sprite_pkNX",0x4FD12C,0x4FD130,"ldrsh","w0, [x8, #0x1a]",0x1A,16,True,None),
)


def prove(elf: bytes) -> dict:
    if hashlib.sha256(elf).hexdigest() != ELF_SHA:
        raise ValueError("HOME 4.1.0 ELF SHA mismatch")
    ins = window(elf,elf_segments(elf),0x4FD06C,0,0x450)
    mapping = {pc:(mn,op,b) for pc,mn,op,b in ins}
    def check(pc, mnemonic, substring):
        v=mapping.get(pc)
        if not v or v[0]!=mnemonic or substring not in v[1]:
            raise ValueError(f"native item property opcode mismatch at 0x{pc:X}: {v} / {mnemonic} / {substring}")
        return {"pc":f"0x{pc:X}","mnemonic":v[0],"operands":v[1],"instruction_bytes_le":v[2]}
    # Proven pointer flow. The consumer object [x20] is [x0] in all getters,
    # populated via BL 0x4FD784 in 0x4FD098.
    wrappers=[
        # Original code at main+0x4FD094 moves argument ItemId into w19.
        check(0x4FD098,"bl","#0x4fd784"),
        check(0x4FD09C,"str","[x20]"),
        check(0x4FD0E4,"ldr","x8, [x0]"),
    ]
    result=[]
    for label,entry,read_pc,mn,operand,offset,width,signed,extract in FIELDS:
        first=check(entry,"ldr","x8, [x0]")
        read=check(read_pc,mn,operand)
        bit=check(*extract) if extract else None
        result.append({
            "field_name_provisional_pkNX_or_raw":label,
            "native_getter_rva":f"0x{entry:X}",
            "raw_record_offset":offset,
            "native_read_width_bits":width,
            "native_read_signed":signed,
            "record_pointer_read":first,
            "native_field_read":read,
            "bit_extraction":bit,
            "business_label_confidence":"pkNX cross-reference" if "pkNX" in label else "raw field / Native bit operation only",
        })
    return {"original_elf_sha256":ELF_SHA,
            "native_record_getter_rva":"0x4FD784",
            "native_wrapper_init_rva":"0x4FD06C",
            "native_property_selector_rva":"0x4FD0B8",
            "native_entry_byte_verified":True,
            "native_properties_count":len(result),
            "raw_record_stride_bytes":48,
            "wrapper_opcode_chain":wrappers,
            "property_getters":result,
            "field_names_limitation":"Native opcodes establish offsets, width and signs, pkNX separately suggests business names; effects require runtime consumer study."}


def main():
    a=argparse.ArgumentParser()
    a.add_argument("--elf",type=Path,required=True)
    a.add_argument("--out",type=Path,required=True)
    c=a.parse_args()
    report=prove(c.elf.read_bytes())
    c.out.parent.mkdir(parents=True,exist_ok=True)
    c.out.write_text(json.dumps(report,indent=2,ensure_ascii=False)+"\n",encoding="utf-8")
    print(json.dumps({"count":report["native_properties_count"],"elf_sha256":ELF_SHA,
      "sites":[f["native_getter_rva"] for f in report["property_getters"]]}))


if __name__=="__main__":
    main()
