#!/usr/bin/env python3
"""P10: read-only native status/PP Up/EV consumer audit (Sword/Shield 1.3.2).

Requires the adjacent P9 module and the two private, unmodified ELF files.
No ELF mutation, game runtime patching, or claim of matched RomFS item IDs.
"""
from pathlib import Path
import argparse
import json
import struct
from swsh_132_item_effect_bridge import inspect, parse_elf, word, bl_target, virtual_file_off

DISPATCH=0x788630
# selector, status_code, eligibility call (Sword), application call (Sword)
STATUS=[(26,2,0x13B61D0,0x13B6838),(27,5,0x13B61E8,0x13B68AC),
        (28,4,0x13B6200,0x13B6878),(29,3,0x13B6218,0x13B6860),
        (30,1,0x13B6230,0x13B6804)]
# name, native stat index, flag, signed value, two item calls, writer call, byte store RVA, offset
STATS=[
 ('HP',0,50,60,0x13B6D50,0x13B6D60,0x13B6E34,0x770488,0x1E),
 ('Attack',1,51,61,0x13B6E58,0x13B6E68,0x13B6F28,0x7705D8,0x1F),
 ('Defense',2,52,62,0x13B6F40,0x13B6F50,0x13B700C,0x770728,0x20),
 ('Speed',5,53,63,0x13B7028,0x13B7038,0x13B70F4,0x770B18,0x21),
 ('SpAttack',3,54,64,0x13B7110,0x13B7120,0x13B71DC,0x770878,0x22),
 ('SpDefense',4,55,65,0x13B71F8,0x13B7208,0x13B72AC,0x7709C8,0x23)]
ENC={
 26:0x52800341,27:0x52800361,28:0x321E0BE1,29:0x528003A1,30:0x321F0FE1,
 45:0x528005A1,46:0x528005C1,47:0x528005E1,48:0x321C07E1,
 50:0x52800641,51:0x52800661,52:0x52800681,53:0x528006A1,54:0x528006C1,55:0x528006E1,
 60:0x321E0FE1,61:0x528007A1,62:0x321F13E1,63:0x320017E1,64:0x321A03E1,65:0x52800821}

def check(cond,reason):
 if not cond:raise ValueError(reason)

def verify(path,edition):
 # Re-run the full pinned SHA256/Build ID and all P9 opcode audits first.
 p9=inspect(path,edition)
 data=path.read_bytes(); seg=parse_elf(data); shift=0 if edition=='sword' else 0x30
 def op(pc,expected):
  got=word(data,seg,pc)
  check(got==expected,f'{edition}: opcode at {pc:X}: {got:08X} != {expected:08X}')
 def edge(pc,target):
  check(bl_target(data,seg,pc)==target,f'{edition}: branch {pc:X} not to {target:X}')
 def call(pc,sel,back=8):
  edge(pc,DISPATCH);op(pc-back,ENC[sel])
 # Status: current getter, zero argument, 32-bit field store
 edge(0x77B564,0x767F50);op(0x77B584,0x2A1F03E1)
 edge(0x77B588,0x76EB60);op(0x76EC10,0xB9003D14)
 edge(0x13B6898+shift,0x77B580)
 status=[]
 for sel,state,eligible,apply in STATUS:
  call(eligible+shift,sel);call(apply+shift,sel)
  op(eligible+shift+4,0x7100001F | (state<<10) | (22<<5))
  status.append({'selector':sel,'native_status_code':state,
                 'eligibility_call':f'0x{eligible+shift:X}','apply_check_call':f'0x{apply+shift:X}'})
 # PP Up: write the [move_slot+0x26] nibble-equivalent stage as a byte
 for sel,pc in [(45,0x13B6A0C),(46,0x13B6A68),(47,0x13B6AE4),(48,0x13B6B60)]:
  call(pc+shift,sel,12 if sel==46 else 8)
 edge(0x13B6AB4+shift,0x77B860);edge(0x77B874,0x770E80)
 op(0x770F3C,0x39009914)
 # EV: immediate flag + signed delta; 252/510 limit; six native byte stores
 edge(0x77A8BC,0x77A6E0);edge(0x77A8CC,0x77AB70)
 for pc,opcode in [(0x77AB88,0x7103F05F),(0x13B6DD8+shift,0x7107F93F),
                   (0x13B6DF0+shift,0x7103F13F),(0x13B6E14+shift,0x7107F95F)]:
  op(pc,opcode)
 for sel in range(60,66):op(0x788998+8*(sel-60),0x39C09520+0x400*(sel-60))
 native_writers={0:(0x77A8F8,0x7703E0),1:(0x77A918,0x770530),
                 2:(0x77A95C,0x770680),3:(0x77A9A0,0x7707D0),
                 4:(0x77A9E4,0x770920),5:(0x77AA38,0x770A70)}
 table=0x2043FD0
 channels=[]
 for name,stat,flag,delta,fpc,dpc,wpc,store,offset in STATS:
  call(fpc+shift,flag);call(dpc+shift,delta)
  edge(wpc+shift,0x77A8A0)
  entry=struct.unpack_from('<i',data,virtual_file_off(seg,table+4*stat))[0]
  src,dest=native_writers[stat]
  check(table+entry==src,f'EV dispatch index {stat} mismatched')
  edge(src,dest)
  op(store,0x39000000 | (offset<<10) | (8<<5) | 20)
  channels.append({'name':name,'stat_enum':stat,'flag_selector':flag,
    'signed_delta_selector':delta,'flag_call':f'0x{fpc+shift:X}',
    'delta_call':f'0x{dpc+shift:X}','apply_call':f'0x{wpc+shift:X}',
    'byte_store':f'0x{store:X}','storage_offset':f'0x{offset:X}'})
 return {'sha256':p9['sha256'],'build_id':p9['build_id'],
  'status':{'clear_call':f'0x{0x13B6898+shift:X}','setter':'0x76EB60',
            'status_store32':'0x76EC10','selectors':status},
  'pp':{'pp_up_stage_store':'0x770F3C','pp_up_stage_setter':'0x770E80',
        'flags':{'45':'PP Up stage +1','46':'PP Up stage +3',
                 '47':'single-slot PP restoration','48':'all-slot PP restoration'}},
  'ev':{'current_getter':'0x77A6E0','writer':'0x77A8A0','cap_helper':'0x77AB70',
        'per_stat_cap':252,'total_cap':510,'channels':channels}}

def main():
 ap=argparse.ArgumentParser()
 ap.add_argument('--sword',type=Path,required=True)
 ap.add_argument('--shield',type=Path,required=True)
 ap.add_argument('--out',type=Path,required=True)
 a=ap.parse_args()
 result={'audit':'SW/SH 1.3.2 Item8 P10 native consumer static evidence',
         'sword':verify(a.sword,'sword'),'shield':verify(a.shield,'shield'),
         'limitations':['No matching Sword/Shield 1.3.2 RomFS per-item value comparison.',
                        'No runtime state trace. Unknown selectors cannot be declared unused.',
                        'Status enum-to-localized status names not proved here.']}
 check([c['storage_offset'] for c in result['sword']['ev']['channels']]==
       [c['storage_offset'] for c in result['shield']['ev']['channels']],
       'Sword/Shield EV stores differ')
 a.out.parent.mkdir(parents=True,exist_ok=True)
 a.out.write_text(json.dumps(result,ensure_ascii=False,indent=2)+'\n',encoding='utf-8')
 print(json.dumps({'verified_editions':['sword','shield'],'status_flags':5,
                   'ev_channels':6,'path':str(a.out)},ensure_ascii=False))

if __name__=='__main__':main()
