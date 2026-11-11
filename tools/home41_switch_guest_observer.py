#!/usr/bin/env python3
"""HOME 4.1.0 Switch guest read-only GDB trace.

Load INSIDE a GDB session already attached to a real AArch64 Switch guest:
  HOME41_MAIN_BASE=0x... HOME41_CASE=normal HOME41_GROUP=core \
  HOME41_OUTPUT=home41_normal_core.jsonl gdb-multiarch ...
  (gdb) source -s python tools/home41_switch_guest_observer.py

Hardware execute breakpoints ONLY. No inferior calls, setters, network mutations,
software-breakpoint fallback, decrypted response bodies, PKM, or login data.
Note: this source cannot magically attach to a Switch guest on a GitHub runner.
"""
import datetime
import hashlib
import json
import os
import re
import struct
import time

import gdb

ELF_SHA256 = "bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a"
GHIDRA_BASE = 0x100000
DETAIL_KEY_VA = 0x710FB3
CASE = os.environ.get("HOME41_CASE", "")
GROUP = os.environ.get("HOME41_GROUP", "core")
OUT = os.environ.get("HOME41_OUTPUT", "")
MAX_EVENTS = int(os.environ.get("HOME41_MAX_EVENTS", "5000"))
VALID_GROUPS = {"core", "states", "callbacks", "dirty", "reconcile", "transport", "all"}
if CASE not in {"normal", "failure"}:
    raise RuntimeError("HOME41_CASE must be normal or failure (operator label, not verdict)")
if GROUP not in VALID_GROUPS:
    raise RuntimeError("HOME41_GROUP must be one of "+", ".join(sorted(VALID_GROUPS)))
if not OUT or not os.environ.get("HOME41_MAIN_BASE"):
    raise RuntimeError("Set HOME41_OUTPUT and the actual guest HOME41_MAIN_BASE")
MAIN_BASE = int(os.environ["HOME41_MAIN_BASE"], 0)
if MAIN_BASE < 0x10000 or MAIN_BASE & 0xFFF:
    raise RuntimeError("Guest main module base must be valid and page-aligned")
if not (1 <= MAX_EVENTS <= 500000):
    raise RuntimeError("HOME41_MAX_EVENTS outside safe bound")

POINTS = {
    "parser_enter": 0x34E638,       # on entry: x0 = BoxRequest *
    "detail_atoi": 0x34E814,        # BL atoi for /detail (x0 numeric string)
    "parser_result": 0x34CB78,     # before STR w0,[x25,#8]
    "write_state9": 0x34CB90,      # STR w8,[x19,#0x14]
    "write_state7_shared": 0x34E4A8,# STR w8,[x9,#0x14]
    "write_state_counter": 0x34E500,# STR w8,[x19,#0x14]
    "write_state8": 0x34E51C,      # STR w8,[x19,#0x14]
    "write_state4": 0x34D208,      # STR w8,[x19,#0x14]
    "write_state10": 0x34D234,     # STR w8,[x20,#0x14]
    "state8_slot0": 0x34CBF8,      # BLR x8, vtable+0
    "state10_slot8": 0x34D2F4,     # BLR x8, vtable+8
    "dirty_count_read": 0x34DBA4,  # LDRH w19,[x0,x8]
    "dirty_clear_before": 0x34DD74,# STR wzr,[x0,x8]
    "dirty_clear_after": 0x34DD78,
    "reconcile_flags": 0x34CC28,  # flags 0x965 and 0x964
    "reconcile_copy": 0x34CC40,   # BL 0x322470
    "reconcile_compare_result":0x34CC48, # w0 from BL 0x322870
    "transport_completion_entry":0x64BB9C,
    "state7_entry":0x34CB3C,
}
GROUPS = {
    "core":("parser_enter","detail_atoi","parser_result","write_state9"),
    "states":("write_state7_shared","write_state_counter","write_state8","write_state4","write_state10"),
    "callbacks":("state8_slot0","state10_slot8"),
    "dirty":("dirty_count_read","dirty_clear_before","dirty_clear_after"),
    "reconcile":("reconcile_flags","reconcile_copy","reconcile_compare_result"),
    "transport":("transport_completion_entry","state7_entry"),
}
SIGNATURES = {
    "detail_atoi":0x940E9F87,
    "parser_result":0xB9000B20,
    "write_state9":0xB9001668,
    "write_state7_shared":0xB9001528,
    "write_state_counter":0xB9001668,
    "write_state8":0xB9001668,
    "write_state4":0xB9001668,
    "write_state10":0xB9001688,
    "state8_slot0":0xD63F0100,
    "state10_slot8":0xD63F0100,
    "reconcile_flags":0x39659668,
}
active = tuple(POINTS) if GROUP == "all" else GROUPS[GROUP]
inferior = gdb.selected_inferior()
if inferior is None or inferior.pid is None:
    raise RuntimeError("Attach to guest GDB stub before sourcing this script")
def mem(addr, length):
    if addr is None or addr <= 0 or length <= 0 or length > 4096:
        raise ValueError("unsafe guest memory read")
    return bytes(inferior.read_memory(addr, length))
def u16(addr):
    return struct.unpack("<H", mem(addr,2))[0]
def u32(addr):
    return struct.unpack("<I", mem(addr,4))[0]
def u64(addr):
    return struct.unpack("<Q", mem(addr,8))[0]
def reg(name):
    return int(gdb.selected_frame().read_register(name)) & ((1<<64)-1)
def hexaddr(value):
    return "0x%x"%value
def guest(va):
    return MAIN_BASE + (va - GHIDRA_BASE)
def thread_id():
    th=gdb.selected_thread()
    return str(th.global_num) if th else "unknown"

# Fail closed before installing any breakpoint. No attempt to repair mismatches.
if mem(guest(DETAIL_KEY_VA),8) != b"/detail\0":
    raise RuntimeError("Guest main layout mismatch: original /detail literal not at expected RVA")
for name in active:
    if name in SIGNATURES:
        raw=u32(guest(POINTS[name]))
        if raw != SIGNATURES[name]:
            raise RuntimeError("Guest opcode mismatch at %s: %08x != %08x" %
                               (name,raw,SIGNATURES[name]))

os.makedirs(os.path.dirname(os.path.abspath(OUT)),exist_ok=True)
fh = open(OUT, "w", encoding="utf8", buffering=1)
counter = 0
contexts = {}
manager = None
session = datetime.datetime.now(datetime.timezone.utc).strftime("%Y%m%dT%H%M%SZ")
def emit(kind, **fields):
    global counter
    if counter >= MAX_EVENTS:return
    counter += 1
    event={"schema":"HOME41_SWITCH_GDB_V1","time":datetime.datetime.now(
        datetime.timezone.utc).isoformat(timespec="milliseconds"),
           "session":session,"scenario":CASE,"group":GROUP,"event":kind,
           "thread":thread_id()}
    event.update(fields)
    fh.write(json.dumps(event,sort_keys=True,ensure_ascii=False)+"\n")
def maybe_count():
    if manager is None:return None
    try:return u32(manager+0x93498)
    except Exception:return None
def dirty_fingerprint(base,count):
    if base is None or count is None or not 0 <= count <= 512:return None
    try:
        # Hash ONLY; never write Dirty qwords/addresses into a trace.
        blob=mem(base+0x7FC18, min(4096,count*8))
        return hashlib.sha256(blob).hexdigest()
    except Exception:return None
def snapshot_transport(request):
    if not request:return {}
    b=request+0x2FF2420
    out={}
    for label,off in (("transport_code",8),("transport_error",0xB0),
                      ("http_status",0xB8)):
        try:out[label]=u32(b+off)
        except Exception:out[label]=None
    return out
def request_stage(request):
    out={}
    if request:
        for label,off in (("state",0x14),("stage_counter",0x394147C),
                          ("app_error",0x3941474),("parsed_result",0x3941478)):
            try:out[label]=u32(request+off)
            except Exception:out[label]=None
    return out
def on_hit(name):
    global manager
    tid=thread_id()
    ctx=contexts.setdefault(tid, {"detail_seen":False,"detail_value":None})
    if name=="parser_enter":
        req=reg("x0")
        contexts[tid]={"request":req,"detail_seen":False,"detail_value":None}
        emit("parser_enter", **request_stage(req))
    elif name=="detail_atoi":
        # Only first atoi immediately after the verified /detail getter.
        # No response body or string is emitted (numeric field only).
        if ctx.get("request"):
            raw=mem(reg("x0"),16).split(b"\0",1)[0]
            text=raw.decode("ascii","replace")
            valid=bool(re.fullmatch(r"-?[0-9]{1,10}",text))
            ctx["detail_seen"]=True
            ctx["detail_value"]=int(text) if valid else None
            emit("detail_observed",detail_numeric=ctx["detail_value"],
                 detail_numeric_valid=valid)
    elif name=="parser_result":
        req=reg("x19")
        emit("parser_result",parser_return=reg("w0")&0xffffffff,
             detail_observed=bool(ctx.get("detail_seen")),
             detail_numeric=ctx.get("detail_value"),
             manager_dirty_count=maybe_count(),
             **request_stage(req),**snapshot_transport(req))
    elif name.startswith("write_state"):
        base_reg = "x9" if name=="write_state7_shared" else (
            "x20" if name=="write_state10" else "x19")
        req=reg(base_reg)
        emit("state_write_before",site=name,prior_state=u32(req+0x14),
             new_state=reg("w8")&0xffffffff,
             manager_dirty_count=maybe_count(),
             **{k:v for k,v in request_stage(req).items() if k!="state"})
    elif name in ("state8_slot0","state10_slot8"):
        obj=reg("x0");vtable=u64(obj);off=0 if name=="state8_slot0" else 8
        target=reg("x8")
        actual=u64(vtable+off)
        emit("virtual_call",site=name,object_pointer=hexaddr(obj),
             vptr=hexaddr(vtable),method_slot=off,
             resolved_target=hexaddr(target),
             slot_matches_register=target==actual,
             target_main_rva=hexaddr(target-MAIN_BASE) if
                MAIN_BASE <= target < MAIN_BASE+0x10000000 else None,
             return_address=hexaddr(reg("x30")))
    elif name=="dirty_count_read":
        # At this native LDRH, x0+x8 reads a 16-bit count. Validate the
        # manager+0x93498 hypothesis instead of assuming it unconditionally.
        base=reg("x0");effective=base+reg("x8")
        observed=u16(effective)
        crosscheck=u32(base+0x93498)
        if observed == (crosscheck&0xffff):
            manager=base
        emit("dirty_snapshot",sample="read",count_instruction=observed,
             count_manager=crosscheck,manager_offset_consistent=manager==base,
             list_sha256=dirty_fingerprint(manager,crosscheck))
    elif name in ("dirty_clear_before","dirty_clear_after"):
        base=reg("x0");effective=base+reg("x8")
        emit("dirty_snapshot",sample=name,count_effective=u32(effective),
             manager_dirty_count=maybe_count(),
             list_sha256=dirty_fingerprint(manager,maybe_count()))
    elif name=="reconcile_flags":
        request=reg("x19")
        emit("reconcile_flags",flag_964=mem(request+0x964,1)[0],
             flag_965=mem(request+0x965,1)[0],
             **request_stage(request))
    elif name=="reconcile_copy":
        emit("reconcile_copy_invoked")
    elif name=="reconcile_compare_result":
        emit("reconcile_compare_result",comparison_word=reg("w0")&0xffffffff,
             differs=bool(reg("w0")&1))
    elif name=="transport_completion_entry":
        emit("transport_callback_enter")
    elif name=="state7_entry":
        req=reg("x19")
        emit("state7_enter",**request_stage(req),**snapshot_transport(req))
class ObserverBreakpoint(gdb.Breakpoint):
    def __init__(self,name):
        super().__init__("*"+hexaddr(guest(POINTS[name])),
                         type=gdb.BP_HARDWARE_BREAKPOINT,internal=True)
        self.name=name
        self.silent=True
    def stop(self):
        try:on_hit(self.name)
        except Exception as exc:
            # Do not emit guest buffers / exception message. Record type only.
            emit("probe_read_error",site=self.name,exception_type=type(exc).__name__)
        return False   # monitor only; keep the guest running
breakpoints=[]
try:
    for point in active:breakpoints.append(ObserverBreakpoint(point))
except Exception:
    for bp in breakpoints:
        try:bp.delete()
        except Exception:pass
    fh.close()
    raise
emit("session_start",expected_elf_sha256=ELF_SHA256,
     main_base=hexaddr(MAIN_BASE),point_count=len(active),
     instrumentation="HARDWARE_EXECUTION_BREAKPOINTS_ONLY",
     no_mutations=True,real_runtime_verified=False)
class Home41Stop(gdb.Command):
    def __init__(self):
        super().__init__("home41-stop",gdb.COMMAND_USER)
    def invoke(self,arg,from_tty):
        for bp in breakpoints:
            if bp.is_valid():bp.delete()
        emit("session_end",events_written=counter)
        fh.close()
        gdb.write("HOME41 monitor stopped; trace is in "+OUT+"\n")
Home41Stop()
gdb.write("HOME41 hardware observer ready (%d sites, group %s, case %s).\n"%
          (len(active),GROUP,CASE))
gdb.write("Use 'continue' to observe; run 'home41-stop' when the guest is stopped.\n")
