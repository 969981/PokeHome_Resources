#!/usr/bin/env python3
"""SYNTHETIC GDB shim test: executes the observer logic, NOT a Switch guest."""
import os
import runpy
import struct
import sys
import tempfile
import types
import unittest
from pathlib import Path
from unittest.mock import patch

import home41_switch_trace_validate as validator

VA_BASE=0x100000
MAIN_BASE=0x7100000000
class Memory:
    def __init__(self):self.d={}
    def put(self,addr,blob):
        for i,b in enumerate(blob):self.d[addr+i]=b
    def u32(self,addr,x):self.put(addr,struct.pack("<I",x))
    def read_memory(self,addr,n):
        return bytes(self.d.get(addr+i,0) for i in range(n))

class TestActualObserverInFakeGdb(unittest.TestCase):
    def test_normal_core_group_simulated_registers(self):
        with tempfile.TemporaryDirectory() as t:
            out=Path(t)/"synthetic_guest.jsonl"
            m=Memory()
            signatures={
                0x34E814:0x940E9F87, 0x34CB78:0xB9000B20,
                0x34E51C:0xB9001668
            }
            for va,op in signatures.items():
                m.u32(MAIN_BASE+va-VA_BASE,op)
            m.put(MAIN_BASE+0x710FB3-VA_BASE,b"/detail\0")
            req=0x8000000000; numeric=0x8200000000
            m.put(numeric,b"0\0")
            for off,value in ((0x14,7),(0x3941474,0),(0x3941478,0),
                              (0x394147C,6),(0x2FF2420+8,0),
                              (0x2FF2420+0xB0,0),(0x2FF2420+0xB8,200)):
                m.u32(req+off,value)
            breaks=[];cmds=[]
            fake=types.ModuleType("gdb")
            fake.BP_HARDWARE_BREAKPOINT=42
            fake.COMMAND_USER=0
            fake.selected_inferior=lambda:types.SimpleNamespace(
                pid=9001,read_memory=m.read_memory)
            regs={"x0":0,"x19":req,"x8":0}
            fake.selected_frame=lambda:types.SimpleNamespace(
                read_register=lambda name:regs[name])
            fake.selected_thread=lambda:types.SimpleNamespace(global_num=1)
            fake.write=lambda *args,**kwargs:None
            class Breakpoint:
                def __init__(self, spec, type=None, internal=False):
                    self.spec=spec;self.type=type;self.valid=True;breaks.append(self)
                def is_valid(self):return self.valid
                def delete(self):self.valid=False
            class Command:
                def __init__(self,*args):cmds.append(self)
            fake.Breakpoint=Breakpoint;fake.Command=Command
            env={"HOME41_MAIN_BASE":hex(MAIN_BASE),
                 "HOME41_CASE":"normal","HOME41_GROUP":"core",
                 "HOME41_OUTPUT":str(out)}
            path=Path(__file__).with_name("home41_switch_guest_observer.py")
            with patch.dict(sys.modules,{"gdb":fake}):
                with patch.dict(os.environ,env):
                    ns=runpy.run_path(str(path))
            self.assertEqual(len(breaks),4)
            self.assertTrue(all(b.type==42 for b in breaks))
            bp={b.name:b for b in breaks}
            regs["x0"]=req
            self.assertFalse(bp["parser_enter"].stop())
            regs["x0"]=numeric
            self.assertFalse(bp["detail_atoi"].stop())
            regs["x0"]=0
            self.assertFalse(bp["parser_result"].stop())
            regs["x8"]=8
            self.assertFalse(bp["write_state8"].stop())
            cmds[0].invoke("",False)
            report=validator.summarize([out])
            item=report["sessions"][0]
            self.assertTrue(item["commit_detail_zero_and_local_fields_zero"])
            self.assertTrue(item["box_state8_write_observed"])
            self.assertFalse(report["application_ack_verified"])
            self.assertFalse(report["dirty_failure_recovery_verified"])
            self.assertEqual(item["errors_in_probe"],0)

if __name__=="__main__":unittest.main()
