#!/usr/bin/env python3
"""HOME 4.1.0 Batch05: audit Tracker collections vs the separate local cache path."""
from __future__ import annotations
import argparse,json,re,sqlite3
from pathlib import Path
SHA="bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a"
EXPECTED={"functions":15415,"instructions":1029451,"references":423988,"decompilations":15415}
def ev(va): return f".text::{va:08x}"
def er(rva): return ev(rva+0x100000)
def c(db,va):
 r=db.execute("select c from decompilation where entry=?",(ev(va),)).fetchone()
 if not r: raise AssertionError(f"missing C at Ghidra VA {va:#x}")
 return r[0]
def users(db,s):
 return [r[0] for r in db.execute("select entry from decompilation where lower(c) like ? order by entry",(f"%{s.lower()}%",))]
def audit(path):
 db=sqlite3.connect(f"file:{path}?mode=ro",uri=True);err=[];out={}
 integrity=db.execute("pragma integrity_check").fetchone()[0]
 counts={k:db.execute(f"select count(*) from {t}").fetchone()[0] for k,t in
         [("functions","functions"),("instructions","instructions"),("references","references_full"),("decompilations","decompilation")]}
 if integrity!="ok":err.append(f"integrity={integrity}")
 if counts!=EXPECTED:err.append(f"coverage={counts}")
 # Dirty Tracker set: only 0x2068C0 uses the list/count offsets in decompiled C.
 dirty_key=users(db,"0x7fc18");dirty_count=users(db,"0x93498")
 if dirty_key!=[er(0x2068c0)]:err.append(f"Dirty key users {dirty_key}")
 if dirty_count!=[er(0x2068c0)]:err.append(f"Dirty count users {dirty_count}")
 init=c(db,0x325490)
 if "DAT_00978ac8 = 0;" not in init or "FUN__text__00300180(lVar6);" not in init:
  err.append("Dirty count reset / Box-manager reinit context changed")
 out["dirty_set"]={"key_users":dirty_key,"count_users":dirty_count,"reset":er(0x225490),
                   "meaning":"count reset during Box-manager reinitialization; not an ACK"}
 # Secondary Tracker collection: append only when tracker is absent from active Box slots.
 side={x:users(db,x) for x in ("0x7b498","0x7b4a0","0x7b7c0","0x7b7f0")}
 for k,v in side.items():
  if v!=[ev(0x307ca0)]:err.append(f"secondary users {k}: {v}")
 reset=users(db,"DAT_00960ac8")
 if reset!=[ev(0x325490)]:err.append(f"secondary count reset users {reset}")
 probe=c(db,0x3028c4);wrapper=c(db,0x19555c);append=c(db,0x307ca0)
 for m in ("0x700fdc","0x5fa0","0x6290","0x5f60"):
  if m not in probe:err.append(f"presence probe missing {m}")
 for m in ("0x7b498","0x7b4a0","0x7b7c0","0x7b7f0"):
  if m not in append:err.append(f"append missing {m}")
 callers=[r[0] for r in db.execute("select from_addr from references_full where to_addr=? and is_call=1 order by from_addr",(ev(0x307ca0),))]
 wrapper_callers=[r[0] for r in db.execute("select from_addr from references_full where to_addr=? and is_call=1",(ev(0x19555c),))]
 if callers!=[".text::001955c8"]:err.append(f"0x307CA0 callers {callers}")
 if "FUN__text__00306588" not in wrapper or "FUN__text__00307ca0" not in wrapper:err.append("0x19555C gate changed")
 out["secondary_tracker_collection"]={"offset_users":side,"count_reset_users":reset,"insert":ev(0x307ca0),
  "insert_callers":callers,"wrapper":ev(0x19555c),"wrapper_callers":len(wrapper_callers),
  "presence_probe":ev(0x3028c4),"interpretation":"conditional absent-from-current-Box Tracker snapshot; no separate consumer found in main.elf"}
 # Adjacent fixed 6+2 Tracker table is not the secondary collection.
 scan=c(db,0x3542d0)
 for m in ("0x7b458","0x7b488","0x7b490","FUN__text__00311910","FUN__text__0030c650"):
  if m not in scan:err.append(f"0x3542D0 missing {m}")
 if any(m in scan for m in ("0x7b498","0x7b4a0","0x7b7c0")):err.append("0x3542D0 unexpectedly touches secondary collection")
 # Local compact cache path. Pointer array at +0x7EFA0 is read by these functions.
 add=c(db,0x311634);serial=c(db,0x311910);encode=c(db,0x5fc07c);convert=c(db,0x60af70)
 restore_loop=c(db,0x3118a0);restore_item=c(db,0x5fc188);decode=c(db,0x604a24);restore_core=c(db,0x60aa70)
 for m in ("999 < uVar2","0x7efa0","uVar2 + 1"):
  if m not in add:err.append(f"0x311634 missing {m}")
 for m in ("lVar2 != 1000","0x104","FUN__text__005fc07c"):
  if m not in serial:err.append(f"0x311910 missing {m}")
 for m in ("0x296","FUN__text__00604704","0xe8"):
  if m not in encode:err.append(f"0x5FC07C missing {m}")
 if "*(undefined4 *)(lVar9 + 8)" not in convert:err.append("0x60AF70 EC read missing")
 if "*(undefined8 *)(lVar9)" in convert or "*(undefined8 *)(lVar9 + 0x0)" in convert:err.append("0x60AF70 now reads Tracker; re-review")
 ptr_users=users(db,"0x7efa0")
 if ptr_users!=[ev(0x3115d0),ev(0x311634),ev(0x3118a0),ev(0x311910)]:
  err.append(f"pointer-array literal users changed: {ptr_users}")
 ins=[r[0] for r in db.execute("select display_text from instructions where addr>=? and addr<=? order by addr",
      (ev(0x311634),db.execute("select max_addr from functions where entry=?",(ev(0x311634),)).fetchone()[0]))]
 if any(re.search(r"(?<![A-Za-z0-9])x1(?![0-9])",x) for x in ins):err.append("0x311634 now consumes X1")
 if "FUN__text__005fc188(*(undefined8 *)(param_1 + 0x7efa0 + lVar1 * 8),__src,0);" not in restore_loop:err.append("restore loop no longer supplies Tracker override 0")
 if "FUN__text__00604a24(auStack_2d6,param_2,param_2 + 0xe8,param_3);" not in restore_item:err.append("0x5FC188 decode call changed")
 if "FUN__text__0060aa70(param_1,auStack_118,auStack_134,param_4);" not in decode:err.append("0x604A24 forwarder changed")
 if "*puVar7 = param_4;" not in restore_core:err.append("0x60AA70 no longer writes Tracker override")
 out["local_compact_cache"]={"scan":ev(0x3542d0),"fixed_tracker_offsets":["manager+0x7b458 (six qwords)","manager+0x7b488","manager+0x7b490"],
  "count_limit":1000,"serialized_entry_stride":0x104,"scratch_record_size":0x296,
  "pointer_array_users":ptr_users,"pointer_array_writer":"not found among literal-offset users",
  "311634_X1":"callsite passes X1 from 0x306BC4; callee body does not read X1 and does not store it",
  "tracker_restore":"0x3118A0 passes 0 -> 0x5FC188 -> 0x604A24 -> 0x60AA70 writes zero to GameDataCore+0x00; this local compact cache does not preserve HOME Tracker"}
 # Local filesystem SaveData path is separate from cloud ACK.
 start=c(db,0x30c650);worker=c(db,0x30d9a0);commit=c(db,0x5dd758);serializer=c(db,0x310610)
 for m in ("FUN__text__00310610","0x71746e","FUN__text__005e896c"):
  if m not in start:err.append(f"0x30C650 missing {m}")
 for m in ("0x70b9e8","FUN__text__005dc198","FUN__text__005dd758"):
  if m not in worker:err.append(f"0x30D9A0 missing {m}")
 if "nn::fs::Commit" not in commit:err.append("nn::fs::Commit wrapper changed")
 if "memcpy" not in serializer:err.append("0x310610 section serializer changed")
 out["local_savedata"]={"thread_setup":ev(0x30c650),"worker_path":ev(0x30d9a0),"file":"savedata.bin",
  "write":"nn::fs::WriteFile via 0x5DC198","commit":"nn::fs::Commit via 0x5DD758",
  "limit":"local filesystem commit only; callback binding to SaveThread and cloud ACK are not proven"}
 labels=[r[0] for r in db.execute("select preview from defined_data where is_string=1 and preview like '%SaveRequest%'")]
 out["cloud_state_labels"]={"count":len(labels),"status":"literal strings only; no request consumer/ACK callgraph established"}
 return {"status":"PASS_STATIC_SCOPE_ONLY" if not err else "FAIL","elf_sha256":SHA,"sqlite_integrity":integrity,
         "database_coverage":counts,"checks":out,"errors":err}
def main():
 p=argparse.ArgumentParser();p.add_argument("--db",type=Path,required=True);p.add_argument("--out",type=Path);a=p.parse_args()
 r=audit(a.db);s=json.dumps(r,ensure_ascii=False,indent=2)+"\n"
 if a.out:a.out.parent.mkdir(parents=True,exist_ok=True);a.out.write_text(s,encoding="utf-8")
 print(json.dumps({"status":r["status"],"errors":r["errors"],"checks":r["checks"]},ensure_ascii=False,indent=2))
 return 0 if r["status"]!="FAIL" else 1
if __name__=="__main__":raise SystemExit(main())
