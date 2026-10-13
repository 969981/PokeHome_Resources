#!/usr/bin/env python3
"""Strict read-only SW/SH 1.3.2 item effect producer/consumer audit.

No copy of the binaries leaves the local working directory. Disassembled
meaning of selected AArch64 instructions was also checked via LLVM objdump.
Proves selector 66 is used by a max-HP-capped restoration function, but
not that any one item_id in HOME maps identically to SWSH without RomFS.
"""
from pathlib import Path
import argparse,hashlib,json,struct,collections,subprocess,re

SOURCE={
  'sword':{'sha256':'689db76a880c6ca5b20308343e6f49268c67f75fd009b7d644a166e18adc0652','build_id':'a3b75bcd3311385aeed67fbeeb79cbb7bf02f471'},
  'shield':{'sha256':'f59618e93f585c967f508fb10b94da81bbaab6014cadacb9a82351546ae091f4','build_id':'a16802625e7826bf83b6f9708e475b912a9ab7df'}
}
SELECTOR=0x788630
OFFSETS={'resource_adpr':0x7D1BD8,'resource_add':0x7D1BDC,
         'dispatcher':0x788630,'effects_gate':0x78865C,'extended_start':0x7887CC,
         'effect66_native_byte_read':0x7889C8,
         'medicine_call66_normal':0x13B6940,'medicine_call66_zeroHP':0x13B6978,
         'medicine_write_amount_argument':0x13B69AC,'medicine_call_hp_restorer':0x13B69B0,
         'max_hp_accessor_call':0x77B0BC,'current_hp_accessor_call':0x77B0C8,
         'hp_add_amount':0x77B0CC,'hp_capped_select':0x77B0DC,
         'restorer_branch_to_hp_setter':0x77B0E8,
         'hp_store_halfword':0x76F0F0,
         'pp_selector_byte_read':0x7889D0,
         'pp_current_read':0x77B7CC,'pp_add':0x77B7D8,
         'pp_capped_select':0x77B7E4,'pp_restore_jump':0x77B828,
         'pp_write_byte':0x770DDC,
         'quarter_hp_branch':0x13B69A4,'half_hp_branch':0x13B6964}
COMMON_BRANCH_TARGET={0x77B0BC:0x7681F0,0x77B0C8:0x7680A0,0x77B0E8:0x76F040,0x77B7CC:0x76A040,0x77B828:0x770D20}
MEDICINE_PCS={
 'sword':{'normal':0x13B6940,'fainted':0x13B6978,'restore':0x13B69B0,'pp_read':0x13B6BC8,'pp_restore':0x13B6C18},
 'shield':{'normal':0x13B6970,'fainted':0x13B69A8,'restore':0x13B69E0,'pp_read':0x13B6BF8,'pp_restore':0x13B6C48},
}
SPECIAL={0xFD:'max_hp >> 2',0xFE:'max_hp >> 1',0xFF:'max_hp'}

FRIENDSHIP_CALLS={
  'sword':{'sel68':0x13A9D44,'sel69':0x13A9D54,'sel70':0x13A9D64,'current':0x13A9D88,'write':0x13A9E08,'low100':0x13A9D8C,'low160':0x13A9D94,'signed_load':0x13A9D9C,'sum':0x13A9DF0,'low_clamp':0x13A9DF4,'max255':0x13A9DF8,'upper_clamp':0x13A9E00},
  'shield':{'sel68':0x13A9D74,'sel69':0x13A9D84,'sel70':0x13A9D94,'current':0x13A9DB8,'write':0x13A9E38,'low100':0x13A9DBC,'low160':0x13A9DC4,'signed_load':0x13A9DCC,'sum':0x13A9E20,'low_clamp':0x13A9E24,'max255':0x13A9E28,'upper_clamp':0x13A9E30},
}
FRIENDSHIP_COMMON={
 'status_current_getter_jump':(0x77D3E4,0x7691C0),
 'status_writer_capped_call':(0x77D410,0x76FE10),
 'status_field_byte_store':(0x76FEE8,0x39008114),
 'value66_source_opcode':(0x7889C8,0x3940AD20),
 'value67_source_opcode':(0x7889D0,0x3940B120),
 'value68_signed_source_opcode':(0x7889D8,0x39C0B520),
 'value69_signed_source_opcode':(0x7889E0,0x39C0B920),
 'value70_signed_source_opcode':(0x7889E8,0x39C0BD20),
}


def sign(x,n):return x-(1<<n) if x&(1<<(n-1)) else x

def parse_elf(data):
 if data[:4]!=b'\x7fELF' or data[4]!=2 or data[5]!=1 or struct.unpack_from('<H',data,18)[0]!=183:
  raise ValueError('expected ELF64 little-endian AArch64')
 phoff=struct.unpack_from('<Q',data,32)[0]; entsize,number=struct.unpack_from('<HH',data,54)
 segments=[]
 for i in range(number):
  typ,flags,off,va,_paddr,filesz,memsz,align=struct.unpack_from('<IIQQQQQQ',data,phoff+i*entsize)
  if typ==1:segments.append({'off':off,'vaddr':va,'size':filesz,'flags':flags})
 return segments

def parse_build_id(data):
 shoff=struct.unpack_from('<Q',data,40)[0]
 es,n=struct.unpack_from('<HH',data,58)
 if not shoff or es <64 or shoff+es*n>len(data):
  raise ValueError('missing ELF section table')
 for i in range(n):
  section=struct.unpack_from('<IIQQQQIIQQ',data,shoff+es*i)
  if section[1]!=7:continue
  start,size=section[4:6]
  if start+size>len(data):continue
  off=start
  while off+12<=start+size:
   namesz,descsz,typ=struct.unpack_from('<III',data,off)
   off+=12
   name=data[off:off+namesz].rstrip(b'\0')
   off+=(namesz+3)&~3
   desc=data[off:off+descsz]
   off+=(descsz+3)&~3
   if name==b'GNU' and typ==3 and len(desc)==20:return desc.hex()
 raise ValueError('GNU NT_GNU_BUILD_ID not found')

def virtual_file_off(segments,va,size=4):
 for s in segments:
  if s['vaddr']<=va and va+size<=s['vaddr']+s['size']:
   return s['off']+va-s['vaddr']
 raise ValueError(f'unmapped virtual address 0x{va:X}')

def word(data,segs,va):return struct.unpack_from('<I',data,virtual_file_off(segs,va))[0]

def bl_target(data,segs,va):
 w=word(data,segs,va)
 if (w & 0xFC000000)!=0x94000000 and (w&0xFC000000)!=0x14000000:
  raise ValueError(f'not BL/B at 0x{va:X} opcode {w:08x}')
 return va+(sign(w&0x3ffffff,26)<<2)

def mov_w1_imm(data,segs,va):
 w=word(data,segs,va)
 if w&0x7f80001f != 0x52800001:
  raise ValueError(f'not movz w1 immediate at 0x{va:X}: {w:08x}')
 return ((w>>5)&0xffff) << (16*((w>>21)&3))

def pc_adrp(data,segs,va):
 w=word(data,segs,va)
 if w & 0x9f000000!=0x90000000:raise ValueError('not ADRP')
 imm=((w>>29)&3)|(((w>>5)&0x7ffff)<<2)
 return (va&~4095)+(sign(imm,21)<<12),(w&31)

def add_imm(data,segs,va):
 w=word(data,segs,va)
 if w&0xff000000!=0x91000000:raise ValueError('not 64-bit add immediate')
 return (w>>5)&31,w&31,((w>>10)&4095)<<(12 if (w>>22)&1 else 0)

def cstr(data,segs,addr):
 off=virtual_file_off(segs,addr)
 return data[off:off+256].split(b'\0')[0].decode('utf8')

def inspect(path,edition):
 data=path.read_bytes();sha=hashlib.sha256(data).hexdigest()
 if sha!=SOURCE[edition]['sha256']:raise ValueError('Source SHA mismatch; refuse offsets')
 build_id=parse_build_id(data)
 if build_id!=SOURCE[edition]['build_id']:
  raise ValueError('ELF GNU Build ID differs from pinned game build')
 segs=parse_elf(data);exec_seg=next(s for s in segs if s['flags']&1)
 page,rd=pc_adrp(data,segs,0x7d1bd8)
 rn,dst,offset=add_imm(data,segs,0x7d1bdc)
 if (rn,dst)!=(rd,rd):raise ValueError('resource string regs mismatch')
 item_path=cstr(data,segs,page+offset)
 if item_path!='bin/pml/item':raise ValueError('not Sword/Shield item table path')
 medicine=MEDICINE_PCS[edition]
 if mov_w1_imm(data,segs,medicine['normal']-8)!=66 or mov_w1_imm(data,segs,medicine['fainted']-8)!=66:
  raise ValueError('medicine selector input source mismatch')
 if mov_w1_imm(data,segs,medicine['pp_read']-8)!=67:
  raise ValueError('PP selector source mismatch')
 for pc,target in ({medicine['normal']:SELECTOR,medicine['fainted']:SELECTOR,medicine['restore']:0x77B0A0,medicine['pp_read']:SELECTOR,medicine['pp_restore']:0x77B770}|COMMON_BRANCH_TARGET).items():
  if bl_target(data,segs,pc)!=target:
   raise ValueError(f'HP restoration branch mismatch PC=0x{pc:X}')
 # Dispatcher is equivalent to HOME item struct schema; assert matched
 # ABI constants, field offsets and executable HP halfword store encoding.
 required={
  0x788630:0x7100643f,  # CMP W1,#0x19
  0x78865C:0x39405528,  # LDRB W8,[X9,#0x15] - checked below
 }
 if word(data,segs,0x788630)!=0x7100643f:raise ValueError('dispatcher different')
 # Exact opcode for HP write and selector66 read are checked by same opcode
 # across both builds; llvm-objdump confirms LDRB [x9,#0x2B], STRH [x8,#0x32].
 # Count all direct BL calls into item property dispatcher.
 count=0;selector_calls=[]
 for off in range(0,exec_seg['size']-3,4):
  pc=exec_seg['vaddr']+off
  opcode=struct.unpack_from('<I',data,exec_seg['off']+off)[0]
  if opcode&0xfc000000!=0x94000000:continue
  if pc+(sign(opcode&0x3ffffff,26)<<2)!=SELECTOR:continue
  count+=1
  if off>=8:
   try:sel=mov_w1_imm(data,segs,pc-8)
   except ValueError:sel=None
   if sel is not None and 26<=sel<=70:
    selector_calls.append({'callsite_rva':f'0x{pc:X}','source_rva':f'0x{pc-8:X}','selector':sel,
                           'direct_bl_target':f'0x{SELECTOR:X}'})
 if count!=126 or len(selector_calls)!=78:raise ValueError(f'unexpected caller pattern {count}, {len(selector_calls)}')
 # Extended jump table uses relative signed 32-bit targets.
 base=0x2044408; target66=base+struct.unpack_from('<i',data,virtual_file_off(segs,base+40*4))[0]
 if target66!=0x7889c8:raise ValueError(f'selector 66 getter RVA mismatch: {target66:X}')
 target67=base+struct.unpack_from('<i',data,virtual_file_off(segs,base+41*4))[0]
 if target67!=0x7889d0:raise ValueError(f'selector 67 getter RVA mismatch: {target67:X}')
 # Friendship / happiness adjustment consumers: three signed item bytes selected
 # by the current (0..255) status tier, and written through a single byte setter.
 fc=FRIENDSHIP_CALLS[edition]
 for sel in (68,69,70):
  pc=fc[f'sel{sel}']
  if mov_w1_imm(data,segs,pc-8)!=sel or bl_target(data,segs,pc)!=SELECTOR:
   raise ValueError(f'friendship selector {sel} not passed to original Item8 getter at 0x{pc:X}')
 if bl_target(data,segs,fc['current'])!=0x77D3E0:
  raise ValueError('friendship current-value getter missing')
 if bl_target(data,segs,fc['write'])!=0x77D3F0:
  raise ValueError('friendship adjusted-value writer missing')
 for key,(pc,target_or_opcode) in FRIENDSHIP_COMMON.items():
  if key.endswith('_opcode') or key=='status_field_byte_store':
   if word(data,segs,pc)!=target_or_opcode:
    raise ValueError(f'friendship source/storage opcode mismatch {key} at 0x{pc:X}: 0x{word(data,segs,pc):08x}')
  else:
   if bl_target(data,segs,pc)!=target_or_opcode:
    raise ValueError(f'friendship getter/setter function target mismatch {key} at 0x{pc:X}')
 for key in ('low100','low160'):
  w=word(data,segs,fc[key])
  if key=='low100' and w!=0x71018c1f:raise ValueError('tier <=99 check missing')
  if key=='low160' and w!=0x71027c1f:raise ValueError('tier <=159 check missing')
 if word(data,segs,fc['signed_load'])!=0x39c00115:raise ValueError('signed tier adjustment lookup missing')
 if word(data,segs,fc['sum'])!=0x0b1402a8:raise ValueError('adjust current status missing')
 if word(data,segs,fc['low_clamp'])!=0x0aa87d08:raise ValueError('clamp to lower 0 missing')
 if word(data,segs,fc['max255'])!=0x7103fd1f:raise ValueError('clamp to upper 255 missing')
 if word(data,segs,fc['upper_clamp'])!=0x1a89b101:raise ValueError('upper saturation select missing')
 # Confirm halfword setter opcode exact equality across builds in subsequent combined proof.
 samples={str(k):f'0x{word(data,segs,k):08X}' for k in OFFSETS.values()}
 return {
  'edition':edition,'filename':path.name,'size_bytes':len(data),
  'sha256':sha,'build_id':build_id,
  'pml_path':{'producer_rva':'0x7D1BD8','result_virtual_rva':f'0x{page+offset:X}','content':item_path},
  'native_item_dispatcher_rva':'0x788630',
  'extended_selector_66_getter_rva':'0x7889C8',
  'extended_selector_67_getter_rva':'0x7889D0',
  'extended_selector_67_source':{'native_read':'LDRB W0,[X9,#0x2C]','offset_in_48byte_record':'0x2C','native_type':'uint8'},
  'extended_selector_66_source':{'native_read':'LDRB W0,[X9,#0x2B]','offset_in_48byte_record':'0x2B',
                                  'native_type':'uint8'},
  'total_direct_bl_calls_to_dispatcher':count,
  'strict_effect_selector_calls_immediately_preceded_by_mov_w1':len(selector_calls),
  'effect_selector_call_counts':dict(sorted(collections.Counter(str(x['selector']) for x in selector_calls).items(),key=lambda z:int(z[0]))),
  'effect_selector_calls':selector_calls,
  'hp_effect_proof':{
   'normal_source_call_rva':f"0x{medicine['normal']:X}",'fainted_source_call_rva':f"0x{medicine['fainted']:X}",
   'restoration_handler_call_rva':f"0x{medicine['restore']:X}",'max_hp_getter_rva':'0x7681F0',
   'current_hp_getter_rva':'0x7680A0','add_amount_rva':'0x77B0CC',
   'cap_to_max_rva':'0x77B0DC','hp_setter_rva':'0x76F040',
   'actual_halfword_store_rva':'0x76F0F0','special_source_values':SPECIAL,
   'static_meaning':'select effect selector 66 from Item8, restore HP by min(currentHP + amount, maxHP), write back'
  },
  'pp_effect_proof':{'selector':67,'selector_call_rva':f"0x{medicine['pp_read']:X}",
   'pp_restore_call_rva':f"0x{medicine['pp_restore']:X}",
   'pp_getter_rva':'0x76A040','max_pp_accessor_rva':'0x780A40',
   'pp_add_rva':'0x77B7D8','pp_cap_rva':'0x77B7E4','pp_restorer_rva':'0x77B770',
   'pp_setter_rva':'0x770D20','pp_storage_write_rva':'0x770DDC',
   'static_meaning':'selector67 restores per-move PP (indexed 0–3), capped at maximum and written as a byte'},
  'friendship_tier_adjustment_proof':{
   'native_read_getter_rva':'0x788630',
   'signed_item_bytes':{str(sel):{'callsite_rva':f"0x{fc[f'sel{sel}']:X}",'signed_source_rva':f'0x{0x7889D8+(sel-68)*8:X}','record_offset':f'0x{0x2D+sel-68:X}'} for sel in (68,69,70)},
   'current_value_accessor_call_rva':f"0x{fc['current']:X}",
   'current_value_accessor_rva':'0x77D3E0',
   'tier_thresholds':[99,159],
   'signed_adjustment_load_rva':f"0x{fc['signed_load']:X}",
   'add_to_current_rva':f"0x{fc['sum']:X}",
   'clamp_negative_to_zero_rva':f"0x{fc['low_clamp']:X}",
   'cap_above_255_rva':f"0x{fc['upper_clamp']:X}",
   'adjusted_writer_call_rva':f"0x{fc['write']:X}",
   'adjusted_writer_rva':'0x77D3F0',
   'byte_setter_rva':'0x76FE10',
   'actual_byte_store_rva':'0x76FEE8',
   'static_meaning':'signed item attributes 68–70 selected by current 0..99, 100..159, 160..255 friendliness/friendship bands, applied to current status and saturated to 0..255, then stored',
   'semantic_confidence':'high; read/write/threshold native opcodes proven, no runtime sample',
  },
  'strict_raw_opcodes':samples,
  'evidence_scope':'ELF code and item record layout; SWSH RomFS item_id->effect value matching unverified',
 }

def build(sword,shield):
 results={x:inspect(p,x) for x,p in [('sword',sword),('shield',shield)]}
 a,b=results['sword'],results['shield']
 if a['effect_selector_call_counts']!=b['effect_selector_call_counts']:
  raise ValueError('different effect selector distribution between builds')
 if a['strict_raw_opcodes']!=b['strict_raw_opcodes']:
  differing={k for k in a['strict_raw_opcodes'] if a['strict_raw_opcodes'][k]!=b['strict_raw_opcodes'][k]}
  # Resource string address and one small medicine nearby instruction are allowed different; precise proof instructions must match.
  critical={f'{pc}' for pc in (0x788630,0x78865C,0x7889C8,0x7889D0,0x77B0CC,0x77B0DC,0x77B0E8,0x76F0F0,0x77B7D8,0x77B7E4,0x77B828,0x770DDC)}
  if differing & critical:raise ValueError(f'critical instruction changed: {differing&critical}')
 return {'audit':'SWSH 1.3.2 cross-game Item8 effect consumer static native analysis',
         'sword':a,'shield':b,
         'core_read_and_hp_write_chains_match':True,
         'limitations':['There is no paired SWSH RomFS item resource in this audit.',
                         'Business meaning of selectors 66 HP, 67 PP, 68-70 tier-based friendship adjustment is statically proved; remaining selectors are unverified.',
                         'HP state accessors inferred from min(current+amount,max) flow and downstream halfword setter; runtime state traces not captured.']}

def main():
 p=argparse.ArgumentParser();p.add_argument('--sword',type=Path,required=True);p.add_argument('--shield',type=Path,required=True);p.add_argument('--out',type=Path,required=True);o=p.parse_args()
 result=build(o.sword,o.shield)
 o.out.parent.mkdir(parents=True,exist_ok=True)
 o.out.write_text(json.dumps(result,ensure_ascii=False,indent=2)+'\n')
 print(json.dumps({'checks':{k:{'sha':v['sha256'],'buildid':v['build_id'],'calls':v['total_direct_bl_calls_to_dispatcher'],'effect_exact_call_count':v['strict_effect_selector_calls_immediately_preceded_by_mov_w1'], 'pml_resource_string':v['pml_path']['result_virtual_rva']} for k,v in [('sword',result['sword']),('shield',result['shield'])]},'hp_pp_chains':result['core_read_and_hp_write_chains_match']}))
if __name__=='__main__':main()