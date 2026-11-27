# HOME41 release session lifecycle — original ELF static candidate audit

SHA-256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a

FDE ranges: 25803. Machine bytes little-endian. No device, save or modification.

## Known receiver functions and direct callers
- anchor 0xB2D20: FDE 0xB2160 length 0xE14, direct B/BL sites: 0xA0374, 0xA03E4, 0xB1F34
- anchor 0xDB1F8: FDE 0xDAEA0 length 0x560, direct B/BL sites: 
- anchor 0xE35F8: FDE 0xE3470 length 0x1F0, direct B/BL sites: 
- anchor 0xECBAC: FDE 0xEC970 length 0x2A4, direct B/BL sites: 
- anchor 0xA0BF4: FDE 0xA0B8C length 0xD0, direct B/BL sites: 0xB6A78
- anchor 0xA1770: FDE 0xA1728 length 0xA8, direct B/BL sites: 0xB6414
- anchor 0xDCCD4: FDE 0xDCB18 length 0x214, direct B/BL sites: 0xD6DDC
- anchor 0xDCF2C: FDE 0xDCD30 length 0x288, direct B/BL sites: 0xD6DE4
- anchor 0xD64DC: FDE 0xD64DC length 0x3AC, direct B/BL sites: 0xD64A8
- anchor 0xD70DC: FDE 0xD70DC length 0x138, direct B/BL sites: 0xD7214, 0xD7220, 0xD7228, 0xD7238, 0xD7240

## Receiver entry / exit windows
### FDE 0xA0B8C length 0xD0
```asm
0x000A0B8C  fd7bbda9  stp       x29, x30, [sp, #-0x30]!
0x000A0B90  f50b00f9  str       x21, [sp, #0x10]
0x000A0B94  f44f02a9  stp       x20, x19, [sp, #0x20]
0x000A0B98  fd030091  mov       x29, sp
0x000A0B9C  083440f9  ldr       x8, [x0, #0x68]
0x000A0BA0  29708b52  mov       w9, #0x5b81
0x000A0BA4  08696938  ldrb      w8, [x8, x9]
0x000A0BA8  c8000035  cbnz      w8, #0xa0bc0
0x000A0BAC  084440f9  ldr       x8, [x0, #0x88]
0x000A0BB0  29708b52  mov       w9, #0x5b81
0x000A0BB4  f30300aa  mov       x19, x0
0x000A0BB8  08696938  ldrb      w8, [x8, x9]
0x000A0BBC  a8000034  cbz       w8, #0xa0bd0
0x000A0BC0  f44f42a9  ldp       x20, x19, [sp, #0x20]
0x000A0BC4  f50b40f9  ldr       x21, [sp, #0x10]
0x000A0BC8  fd7bc3a8  ldp       x29, x30, [sp], #0x30
0x000A0BCC  c0035fd6  ret       
0x000A0BD0  750e40f9  ldr       x21, [x19, #0x18]
0x000A0BD4  350400b4  cbz       x21, #0xa0c58
0x000A0BD8  748640f9  ldr       x20, [x19, #0x108]
0x000A0BDC  e00314aa  mov       x0, x20
0x000A0BE0  f1840094  bl        #0xc1fa4
0x000A0BE4  a80640f9  ldr       x8, [x21, #8]
0x000A0BE8  09a942b9  ldr       w9, [x8, #0x2a8]
0x000A0BEC  2901000b  add       w9, w9, w0
0x000A0BF0  e00314aa  mov       x0, x20
0x000A0BF4  09a902b9  str       w9, [x8, #0x2a8]
0x000A0BF8  96860094  bl        #0xc2650
0x000A0BFC  68be41b9  ldr       w8, [x19, #0x1bc]
0x000A0C00  1f110071  cmp       w8, #4
0x000A0C04  21010054  b.ne      #0xa0c28
0x000A0C08  68c241b9  ldr       w8, [x19, #0x1c0]
0x000A0C0C  1f110071  cmp       w8, #4
0x000A0C10  61010054  b.ne      #0xa0c3c
0x000A0C14  e00313aa  mov       x0, x19
0x000A0C18  f44f42a9  ldp       x20, x19, [sp, #0x20]
```
```asm
0x000A0C0C  1f110071  cmp       w8, #4
0x000A0C10  61010054  b.ne      #0xa0c3c
0x000A0C14  e00313aa  mov       x0, x19
0x000A0C18  f44f42a9  ldp       x20, x19, [sp, #0x20]
0x000A0C1C  f50b40f9  ldr       x21, [sp, #0x10]
0x000A0C20  fd7bc3a8  ldp       x29, x30, [sp], #0x30
0x000A0C24  93ffff17  b         #0xa0a70
0x000A0C28  603640f9  ldr       x0, [x19, #0x68]
0x000A0C2C  5f750094  bl        #0xbe1a8
0x000A0C30  68c241b9  ldr       w8, [x19, #0x1c0]
0x000A0C34  1f110071  cmp       w8, #4
0x000A0C38  e0feff54  b.eq      #0xa0c14
0x000A0C3C  604640f9  ldr       x0, [x19, #0x88]
0x000A0C40  5a750094  bl        #0xbe1a8
0x000A0C44  e00313aa  mov       x0, x19
0x000A0C48  f44f42a9  ldp       x20, x19, [sp, #0x20]
0x000A0C4C  f50b40f9  ldr       x21, [sp, #0x10]
0x000A0C50  fd7bc3a8  ldp       x29, x30, [sp], #0x30
0x000A0C54  87ffff17  b         #0xa0a70
0x000A0C58  ba551594  bl        #0x5f6340
```
### FDE 0xA1728 length 0xA8
```asm
0x000A1728  fd7bbea9  stp       x29, x30, [sp, #-0x20]!
0x000A172C  f30b00f9  str       x19, [sp, #0x10]
0x000A1730  fd030091  mov       x29, sp
0x000A1734  083440f9  ldr       x8, [x0, #0x68]
0x000A1738  09708b52  mov       w9, #0x5b80
0x000A173C  08696938  ldrb      w8, [x8, x9]
0x000A1740  28030035  cbnz      w8, #0xa17a4
0x000A1744  084440f9  ldr       x8, [x0, #0x88]
0x000A1748  09708b52  mov       w9, #0x5b80
0x000A174C  f30300aa  mov       x19, x0
0x000A1750  08696938  ldrb      w8, [x8, x9]
0x000A1754  88020035  cbnz      w8, #0xa17a4
0x000A1758  680e40f9  ldr       x8, [x19, #0x18]
0x000A175C  880300b4  cbz       x8, #0xa17cc
0x000A1760  080540f9  ldr       x8, [x8, #8]
0x000A1764  607640f9  ldr       x0, [x19, #0xe8]
0x000A1768  09a942b9  ldr       w9, [x8, #0x2a8]
0x000A176C  29050011  add       w9, w9, #1
0x000A1770  09a902b9  str       w9, [x8, #0x2a8]
0x000A1774  a6240094  bl        #0xaaa0c
0x000A1778  68be41b9  ldr       w8, [x19, #0x1bc]
0x000A177C  1f110071  cmp       w8, #4
0x000A1780  c0000054  b.eq      #0xa1798
0x000A1784  603640f9  ldr       x0, [x19, #0x68]
0x000A1788  e1031f2a  mov       w1, wzr
0x000A178C  e2031f2a  mov       w2, wzr
0x000A1790  e3031f2a  mov       w3, wzr
0x000A1794  436b0094  bl        #0xbc4a0
0x000A1798  68c241b9  ldr       w8, [x19, #0x1c0]
0x000A179C  1f110071  cmp       w8, #4
0x000A17A0  81000054  b.ne      #0xa17b0
0x000A17A4  f30b40f9  ldr       x19, [sp, #0x10]
0x000A17A8  fd7bc2a8  ldp       x29, x30, [sp], #0x20
0x000A17AC  c0035fd6  ret       
0x000A17B0  604640f9  ldr       x0, [x19, #0x88]
0x000A17B4  e1031f2a  mov       w1, wzr
```
```asm
0x000A1780  c0000054  b.eq      #0xa1798
0x000A1784  603640f9  ldr       x0, [x19, #0x68]
0x000A1788  e1031f2a  mov       w1, wzr
0x000A178C  e2031f2a  mov       w2, wzr
0x000A1790  e3031f2a  mov       w3, wzr
0x000A1794  436b0094  bl        #0xbc4a0
0x000A1798  68c241b9  ldr       w8, [x19, #0x1c0]
0x000A179C  1f110071  cmp       w8, #4
0x000A17A0  81000054  b.ne      #0xa17b0
0x000A17A4  f30b40f9  ldr       x19, [sp, #0x10]
0x000A17A8  fd7bc2a8  ldp       x29, x30, [sp], #0x20
0x000A17AC  c0035fd6  ret       
0x000A17B0  604640f9  ldr       x0, [x19, #0x88]
0x000A17B4  e1031f2a  mov       w1, wzr
0x000A17B8  e2031f2a  mov       w2, wzr
0x000A17BC  f30b40f9  ldr       x19, [sp, #0x10]
0x000A17C0  e3031f2a  mov       w3, wzr
0x000A17C4  fd7bc2a8  ldp       x29, x30, [sp], #0x20
0x000A17C8  366b0014  b         #0xbc4a0
0x000A17CC  dd521594  bl        #0x5f6340
```
### FDE 0xB2160 length 0xE14
```asm
0x000B2160  ff8306d1  sub       sp, sp, #0x1a0
0x000B2164  fd7b14a9  stp       x29, x30, [sp, #0x140]
0x000B2168  fc6f15a9  stp       x28, x27, [sp, #0x150]
0x000B216C  fa6716a9  stp       x26, x25, [sp, #0x160]
0x000B2170  f85f17a9  stp       x24, x23, [sp, #0x170]
0x000B2174  f65718a9  stp       x22, x21, [sp, #0x180]
0x000B2178  f44f19a9  stp       x20, x19, [sp, #0x190]
0x000B217C  fd030591  add       x29, sp, #0x140
0x000B2180  190440f9  ldr       x25, [x0, #8]
0x000B2184  f40300aa  mov       x20, x0
0x000B2188  376b41f9  ldr       x23, [x25, #0x2d0]
0x000B218C  176f00b4  cbz       x23, #0xb2f6c
0x000B2190  29204029  ldp       w9, w8, [x1]
0x000B2194  fa0317aa  mov       x26, x23
0x000B2198  f303022a  mov       w19, w2
0x000B219C  fc0301aa  mov       x28, x1
0x000B21A0  e92302a9  stp       x9, x8, [sp, #0x20]
0x000B21A4  488f44f8  ldr       x8, [x26, #0x48]!
0x000B21A8  e0031aaa  mov       x0, x26
0x000B21AC  080940f9  ldr       x8, [x8, #0x10]
0x000B21B0  00013fd6  blr       x8
0x000B21B4  890e40f9  ldr       x9, [x20, #0x18]
0x000B21B8  c96d00b4  cbz       x9, #0xb2f70
0x000B21BC  2a0940f9  ldr       x10, [x9, #0x10]
0x000B21C0  8a6d00b4  cbz       x10, #0xb2f70
0x000B21C4  881e40f9  ldr       x8, [x20, #0x38]
0x000B21C8  1b7540f9  ldr       x27, [x8, #0xe8]
0x000B21CC  3b6d00b4  cbz       x27, #0xb2f70
0x000B21D0  158540f9  ldr       x21, [x8, #0x108]
0x000B21D4  f56c00b4  cbz       x21, #0xb2f70
0x000B21D8  169540f9  ldr       x22, [x8, #0x128]
0x000B21DC  ea0b00f9  str       x10, [sp, #0x10]
0x000B21E0  f41b00f9  str       x20, [sp, #0x30]
0x000B21E4  766c00b4  cbz       x22, #0xb2f70
0x000B21E8  14e941b9  ldr       w20, [x8, #0x1e8]
0x000B21EC  fa0f00f9  str       x26, [sp, #0x18]
```
```asm
0x000B2F24  693640f9  ldr       x9, [x19, #0x68]
0x000B2F28  0a2d40a9  ldp       x10, x11, [x8]
0x000B2F2C  081140b9  ldr       w8, [x8, #0x10]
0x000B2F30  281100b9  str       w8, [x9, #0x10]
0x000B2F34  2a2d00a9  stp       x10, x11, [x9]
0x000B2F38  683700b0  adrp      x8, #0x79f000
0x000B2F3C  603700d0  adrp      x0, #0x7a0000
0x000B2F40  08cd42f9  ldr       x8, [x8, #0x598]
0x000B2F44  130140f9  ldr       x19, [x8]
0x000B2F48  001c43f9  ldr       x0, [x0, #0x638]
0x000B2F4C  a84302d1  sub       x8, x29, #0x90
0x000B2F50  cbd81094  bl        #0x4e927c
0x000B2F54  a14302d1  sub       x1, x29, #0x90
0x000B2F58  e00313aa  mov       x0, x19
0x000B2F5C  d22a0094  bl        #0xbdaa4
0x000B2F60  a08358f8  ldur      x0, [x29, #-0x78]
0x000B2F64  a0a5ffb5  cbnz      x0, #0xb2418
0x000B2F68  d4ffff17  b         #0xb2eb8
0x000B2F6C  880e40f9  ldr       x8, [x20, #0x18]
0x000B2F70  f40c1594  bl        #0x5f6340
```
### FDE 0xD64DC length 0x3AC
```asm
0x000D64DC  ff0302d1  sub       sp, sp, #0x80
0x000D64E0  fd7b04a9  stp       x29, x30, [sp, #0x40]
0x000D64E4  f85f05a9  stp       x24, x23, [sp, #0x50]
0x000D64E8  f65706a9  stp       x22, x21, [sp, #0x60]
0x000D64EC  f44f07a9  stp       x20, x19, [sp, #0x70]
0x000D64F0  fd030191  add       x29, sp, #0x40
0x000D64F4  082843f9  ldr       x8, [x0, #0x650]
0x000D64F8  f30300aa  mov       x19, x0
0x000D64FC  010a8052  mov       w1, #0x50
0x000D6500  140440f9  ldr       x20, [x0, #8]
0x000D6504  02018052  mov       w2, #8
0x000D6508  a0a33ea9  stp       x0, x8, [x29, #-0x18]
0x000D650C  082043f9  ldr       x8, [x0, #0x640]
0x000D6510  e00314aa  mov       x0, x20
0x000D6514  a8831ff8  stur      x8, [x29, #-8]
0x000D6518  880240f9  ldr       x8, [x20]
0x000D651C  080940f9  ldr       x8, [x8, #0x10]
0x000D6520  00013fd6  blr       x8
0x000D6524  48d03bd5  mrs       x8, tpidr_el0
0x000D6528  17c97392  and       x23, x8, #0xffffffffffffe000
0x000D652C  e84e40f9  ldr       x8, [x23, #0x98]
0x000D6530  1f4100f1  cmp       x8, #0x10
0x000D6534  801a0054  b.eq      #0xd6884
0x000D6538  f8620091  add       x24, x23, #0x18
0x000D653C  147b28f8  str       x20, [x24, x8, lsl #3]
0x000D6540  e84e40f9  ldr       x8, [x23, #0x98]
0x000D6544  08050091  add       x8, x8, #1
0x000D6548  e84e00f9  str       x8, [x23, #0x98]
0x000D654C  a8835ef8  ldur      x8, [x29, #-0x18]
0x000D6550  080400f9  str       x8, [x0, #8]
0x000D6554  a8035ff8  ldur      x8, [x29, #-0x10]
0x000D6558  080800f9  str       x8, [x0, #0x10]
0x000D655C  a8835ff8  ldur      x8, [x29, #-8]
0x000D6560  080c00f9  str       x8, [x0, #0x18]
0x000D6564  28008052  mov       w8, #1
0x000D6568  08800039  strb      w8, [x0, #0x20]
```
```asm
0x000D6838  e82741a9  ldp       x8, x9, [sp, #0x10]
0x000D683C  686e03f9  str       x8, [x19, #0x6d8]
0x000D6840  e81340f9  ldr       x8, [sp, #0x20]
0x000D6844  697203f9  str       x9, [x19, #0x6e0]
0x000D6848  687603f9  str       x8, [x19, #0x6e8]
0x000D684C  606a43f9  ldr       x0, [x19, #0x6d0]
0x000D6850  615a43f9  ldr       x1, [x19, #0x6b0]
0x000D6854  623a43f9  ldr       x2, [x19, #0x670]
0x000D6858  634a43f9  ldr       x3, [x19, #0x690]
0x000D685C  e50b0094  bl        #0xd97f0
0x000D6860  606a43f9  ldr       x0, [x19, #0x6d0]
0x000D6864  21008052  mov       w1, #1
0x000D6868  b76cff97  bl        #0xb1b44
0x000D686C  f44f47a9  ldp       x20, x19, [sp, #0x70]
0x000D6870  f65746a9  ldp       x22, x21, [sp, #0x60]
0x000D6874  f85f45a9  ldp       x24, x23, [sp, #0x50]
0x000D6878  fd7b44a9  ldp       x29, x30, [sp, #0x40]
0x000D687C  ff030291  add       sp, sp, #0x80
0x000D6880  c0035fd6  ret       
0x000D6884  e3b0fc97  bl        #0x2c10
```
### FDE 0xD70DC length 0x138
```asm
0x000D70DC  fd7bbea9  stp       x29, x30, [sp, #-0x20]!
0x000D70E0  f44f01a9  stp       x20, x19, [sp, #0x10]
0x000D70E4  fd030091  mov       x29, sp
0x000D70E8  146843f9  ldr       x20, [x0, #0x6d0]
0x000D70EC  f30300aa  mov       x19, x0
0x000D70F0  1f6803f9  str       xzr, [x0, #0x6d0]
0x000D70F4  940100b4  cbz       x20, #0xd7124
0x000D70F8  880240f9  ldr       x8, [x20]
0x000D70FC  e00314aa  mov       x0, x20
0x000D7100  080140f9  ldr       x8, [x8]
0x000D7104  00013fd6  blr       x8
0x000D7108  606e43f9  ldr       x0, [x19, #0x6d8]
0x000D710C  e10314aa  mov       x1, x20
0x000D7110  627243f9  ldr       x2, [x19, #0x6e0]
0x000D7114  637643f9  ldr       x3, [x19, #0x6e8]
0x000D7118  080040f9  ldr       x8, [x0]
0x000D711C  080d40f9  ldr       x8, [x8, #0x18]
0x000D7120  00013fd6  blr       x8
0x000D7124  745a43f9  ldr       x20, [x19, #0x6b0]
0x000D7128  7f5a03f9  str       xzr, [x19, #0x6b0]
0x000D712C  940100b4  cbz       x20, #0xd715c
0x000D7130  880240f9  ldr       x8, [x20]
0x000D7134  e00314aa  mov       x0, x20
0x000D7138  080140f9  ldr       x8, [x8]
0x000D713C  00013fd6  blr       x8
0x000D7140  605e43f9  ldr       x0, [x19, #0x6b8]
0x000D7144  e10314aa  mov       x1, x20
0x000D7148  626243f9  ldr       x2, [x19, #0x6c0]
0x000D714C  636643f9  ldr       x3, [x19, #0x6c8]
0x000D7150  080040f9  ldr       x8, [x0]
0x000D7154  080d40f9  ldr       x8, [x8, #0x18]
0x000D7158  00013fd6  blr       x8
0x000D715C  744a43f9  ldr       x20, [x19, #0x690]
0x000D7160  7f4a03f9  str       xzr, [x19, #0x690]
0x000D7164  940100b4  cbz       x20, #0xd7194
0x000D7168  880240f9  ldr       x8, [x20]
```
```asm
0x000D71C4  080d40f9  ldr       x8, [x8, #0x18]
0x000D71C8  00013fd6  blr       x8
0x000D71CC  742a43f9  ldr       x20, [x19, #0x650]
0x000D71D0  7f2a03f9  str       xzr, [x19, #0x650]
0x000D71D4  940100b4  cbz       x20, #0xd7204
0x000D71D8  880240f9  ldr       x8, [x20]
0x000D71DC  e00314aa  mov       x0, x20
0x000D71E0  080140f9  ldr       x8, [x8]
0x000D71E4  00013fd6  blr       x8
0x000D71E8  602e43f9  ldr       x0, [x19, #0x658]
0x000D71EC  e10314aa  mov       x1, x20
0x000D71F0  623243f9  ldr       x2, [x19, #0x660]
0x000D71F4  633643f9  ldr       x3, [x19, #0x668]
0x000D71F8  080040f9  ldr       x8, [x0]
0x000D71FC  080d40f9  ldr       x8, [x8, #0x18]
0x000D7200  00013fd6  blr       x8
0x000D7204  e00313aa  mov       x0, x19
0x000D7208  f44f41a9  ldp       x20, x19, [sp, #0x10]
0x000D720C  fd7bc2a8  ldp       x29, x30, [sp], #0x20
0x000D7210  0445fd17  b         #0x28620
```
### FDE 0xDAEA0 length 0x560
```asm
0x000DAEA0  ff4303d1  sub       sp, sp, #0xd0
0x000DAEA4  fd7b07a9  stp       x29, x30, [sp, #0x70]
0x000DAEA8  fb4300f9  str       x27, [sp, #0x80]
0x000DAEAC  fa6709a9  stp       x26, x25, [sp, #0x90]
0x000DAEB0  f85f0aa9  stp       x24, x23, [sp, #0xa0]
0x000DAEB4  f6570ba9  stp       x22, x21, [sp, #0xb0]
0x000DAEB8  f44f0ca9  stp       x20, x19, [sp, #0xc0]
0x000DAEBC  fdc30191  add       x29, sp, #0x70
0x000DAEC0  190c40f9  ldr       x25, [x0, #0x18]
0x000DAEC4  d92900b4  cbz       x25, #0xdb3fc
0x000DAEC8  083a9152  mov       w8, #0x89d0
0x000DAECC  f403012a  mov       w20, w1
0x000DAED0  350b40f9  ldr       x21, [x25, #0x10]
0x000DAED4  1a00088b  add       x26, x0, x8
0x000DAED8  897e7dd3  ubfiz     x9, x20, #3, #0x20
0x000DAEDC  33af40f9  ldr       x19, [x25, #0x158]
0x000DAEE0  480340f9  ldr       x8, [x26]
0x000DAEE4  f603032a  mov       w22, w3
0x000DAEE8  f70300aa  mov       x23, x0
0x000DAEEC  087140f9  ldr       x8, [x8, #0xe0]
0x000DAEF0  186969b8  ldr       w24, [x8, x9]
0x000DAEF4  b30000b4  cbz       x19, #0xdaf08
0x000DAEF8  e00313aa  mov       x0, x19
0x000DAEFC  088c44f8  ldr       x8, [x0, #0x48]!
0x000DAF00  080940f9  ldr       x8, [x8, #0x10]
0x000DAF04  00013fd6  blr       x8
0x000DAF08  083e9152  mov       w8, #0x89f0
0x000DAF0C  e2d30091  add       x2, sp, #0x34
0x000DAF10  ffd30039  strb      wzr, [sp, #0x34]
0x000DAF14  e002088b  add       x0, x23, x8
0x000DAF18  e103182a  mov       w1, w24
0x000DAF1C  ff8304f8  stur      xzr, [sp, #0x48]
0x000DAF20  ffff03a9  stp       xzr, xzr, [sp, #0x38]
0x000DAF24  90fcfe97  bl        #0x9a164
0x000DAF28  e84343f8  ldur      x8, [sp, #0x34]
0x000DAF2C  e9c343f8  ldur      x9, [sp, #0x3c]
```
```asm
0x000DB3B0  e83300b9  str       w8, [sp, #0x30]
0x000DB3B4  282740f9  ldr       x8, [x25, #0x48]
0x000DB3B8  e92b42a9  ldp       x9, x10, [sp, #0x20]
0x000DB3BC  eb3340b9  ldr       w11, [sp, #0x30]
0x000DB3C0  0b1100b9  str       w11, [x8, #0x10]
0x000DB3C4  092900a9  stp       x9, x10, [x8]
0x000DB3C8  282b40f9  ldr       x8, [x25, #0x50]
0x000DB3CC  090140b9  ldr       w9, [x8]
0x000DB3D0  29050011  add       w9, w9, #1
0x000DB3D4  090100b9  str       w9, [x8]
0x000DB3D8  29008052  mov       w9, #1
0x000DB3DC  480340f9  ldr       x8, [x26]
0x000DB3E0  087140f9  ldr       x8, [x8, #0xe0]
0x000DB3E4  080d1b8b  add       x8, x8, x27, lsl #3
0x000DB3E8  09110039  strb      w9, [x8, #4]
0x000DB3EC  007342f9  ldr       x0, [x24, #0x4e0]
0x000DB3F0  00edffb5  cbnz      x0, #0xdb190
0x000DB3F4  68ffff17  b         #0xdb194
0x000DB3F8  069efc97  bl        #0x2c10
0x000DB3FC  d16b1494  bl        #0x5f6340
```
### FDE 0xDCB18 length 0x214
```asm
0x000DCB18  ff0304d1  sub       sp, sp, #0x100
0x000DCB1C  fd7b0ca9  stp       x29, x30, [sp, #0xc0]
0x000DCB20  f85f0da9  stp       x24, x23, [sp, #0xd0]
0x000DCB24  f6570ea9  stp       x22, x21, [sp, #0xe0]
0x000DCB28  f44f0fa9  stp       x20, x19, [sp, #0xf0]
0x000DCB2C  fd030391  add       x29, sp, #0xc0
0x000DCB30  08399152  mov       w8, #0x89c8
0x000DCB34  f30300aa  mov       x19, x0
0x000DCB38  1800088b  add       x24, x0, x8
0x000DCB3C  080740f9  ldr       x8, [x24, #8]
0x000DCB40  093b40b9  ldr       w9, [x24, #0x38]
0x000DCB44  087140f9  ldr       x8, [x8, #0xe0]
0x000DCB48  080d098b  add       x8, x8, x9, lsl #3
0x000DCB4C  29008052  mov       w9, #1
0x000DCB50  09110039  strb      w9, [x8, #4]
0x000DCB54  000340f9  ldr       x0, [x24]
0x000DCB58  9e450794  bl        #0x2ae1d0
0x000DCB5C  083600f0  adrp      x8, #0x79f000
0x000DCB60  20360090  adrp      x0, #0x7a0000
0x000DCB64  08cd42f9  ldr       x8, [x8, #0x598]
0x000DCB68  140140f9  ldr       x20, [x8]
0x000DCB6C  000043f9  ldr       x0, [x0, #0x600]
0x000DCB70  e8830091  add       x8, sp, #0x20
0x000DCB74  c2311094  bl        #0x4e927c
0x000DCB78  e00314aa  mov       x0, x20
0x000DCB7C  26480894  bl        #0x2eec14
0x000DCB80  f50300aa  mov       x21, x0
0x000DCB84  e1830091  add       x1, sp, #0x20
0x000DCB88  e00314aa  mov       x0, x20
0x000DCB8C  e20315aa  mov       x2, x21
0x000DCB90  ff7f0ba9  stp       xzr, xzr, [sp, #0xb0]
0x000DCB94  e3031f2a  mov       w3, wzr
0x000DCB98  ff7f0aa9  stp       xzr, xzr, [sp, #0xa0]
0x000DCB9C  ff7f09a9  stp       xzr, xzr, [sp, #0x90]
0x000DCBA0  ff7f08a9  stp       xzr, xzr, [sp, #0x80]
0x000DCBA4  ff7f07a9  stp       xzr, xzr, [sp, #0x70]
```
```asm
0x000DCCDC  083740b9  ldr       w8, [x24, #0x34]
0x000DCCE0  08050011  add       w8, w8, #1
0x000DCCE4  083700b9  str       w8, [x24, #0x34]
0x000DCCE8  08df41b9  ldr       w8, [x24, #0x1dc]
0x000DCCEC  68000034  cbz       w8, #0xdccf8
0x000DCCF0  08050051  sub       w8, w8, #1
0x000DCCF4  08df01b9  str       w8, [x24, #0x1dc]
0x000DCCF8  08e341b9  ldr       w8, [x24, #0x1e0]
0x000DCCFC  68000034  cbz       w8, #0xdcd08
0x000DCD00  08050051  sub       w8, w8, #1
0x000DCD04  08e301b9  str       w8, [x24, #0x1e0]
0x000DCD08  e00313aa  mov       x0, x19
0x000DCD0C  88faff97  bl        #0xdb72c
0x000DCD10  f44f4fa9  ldp       x20, x19, [sp, #0xf0]
0x000DCD14  f6574ea9  ldp       x22, x21, [sp, #0xe0]
0x000DCD18  f85f4da9  ldp       x24, x23, [sp, #0xd0]
0x000DCD1C  fd7b4ca9  ldp       x29, x30, [sp, #0xc0]
0x000DCD20  ff030491  add       sp, sp, #0x100
0x000DCD24  c0035fd6  ret       
0x000DCD28  86651494  bl        #0x5f6340
```
### FDE 0xDCD30 length 0x288
```asm
0x000DCD30  ffc304d1  sub       sp, sp, #0x130
0x000DCD34  fd7b0da9  stp       x29, x30, [sp, #0xd0]
0x000DCD38  fc6f0ea9  stp       x28, x27, [sp, #0xe0]
0x000DCD3C  fa670fa9  stp       x26, x25, [sp, #0xf0]
0x000DCD40  f85f10a9  stp       x24, x23, [sp, #0x100]
0x000DCD44  f65711a9  stp       x22, x21, [sp, #0x110]
0x000DCD48  f44f12a9  stp       x20, x19, [sp, #0x120]
0x000DCD4C  fd430391  add       x29, sp, #0xd0
0x000DCD50  140c40f9  ldr       x20, [x0, #0x18]
0x000DCD54  141300b4  cbz       x20, #0xdcfb4
0x000DCD58  08399152  mov       w8, #0x89c8
0x000DCD5C  f30300aa  mov       x19, x0
0x000DCD60  1800088b  add       x24, x0, x8
0x000DCD64  080440f9  ldr       x8, [x0, #8]
0x000DCD68  e80300f9  str       x8, [sp]
0x000DCD6C  080740f9  ldr       x8, [x24, #8]
0x000DCD70  08e940b9  ldr       w8, [x8, #0xe8]
0x000DCD74  080700b4  cbz       x8, #0xdce54
0x000DCD78  950a40f9  ldr       x21, [x20, #0x10]
0x000DCD7C  e9030191  add       x9, sp, #0x40
0x000DCD80  fa031faa  mov       x26, xzr
0x000DCD84  3b110091  add       x27, x9, #4
0x000DCD88  093e9152  mov       w9, #0x89f0
0x000DCD8C  1cf17dd3  lsl       x28, x8, #3
0x000DCD90  7602098b  add       x22, x19, x9
0x000DCD94  39008052  mov       w25, #1
0x000DCD98  10000014  b         #0xdcdd8
0x000DCD9C  1f2003d5  nop       
0x000DCDA0  e1230091  add       x1, sp, #8
0x000DCDA4  e00315aa  mov       x0, x21
0x000DCDA8  ede1fe97  bl        #0x9555c
0x000DCDAC  e1230091  add       x1, sp, #8
0x000DCDB0  e00314aa  mov       x0, x20
0x000DCDB4  5037ff97  bl        #0xaaaf4
0x000DCDB8  e00316aa  mov       x0, x22
0x000DCDBC  e103172a  mov       w1, w23
```
```asm
0x000DCF68  882a40f9  ldr       x8, [x20, #0x50]
0x000DCF6C  080140b9  ldr       w8, [x8]
0x000DCF70  2901086b  subs      w9, w9, w8
0x000DCF74  43000054  b.lo      #0xdcf7c
0x000DCF78  09df01b9  str       w9, [x24, #0x1dc]
0x000DCF7C  09e341b9  ldr       w9, [x24, #0x1e0]
0x000DCF80  2801086b  subs      w8, w9, w8
0x000DCF84  43000054  b.lo      #0xdcf8c
0x000DCF88  08e301b9  str       w8, [x24, #0x1e0]
0x000DCF8C  e00313aa  mov       x0, x19
0x000DCF90  e7f9ff97  bl        #0xdb72c
0x000DCF94  f44f52a9  ldp       x20, x19, [sp, #0x120]
0x000DCF98  f65751a9  ldp       x22, x21, [sp, #0x110]
0x000DCF9C  f85f50a9  ldp       x24, x23, [sp, #0x100]
0x000DCFA0  fa674fa9  ldp       x26, x25, [sp, #0xf0]
0x000DCFA4  fc6f4ea9  ldp       x28, x27, [sp, #0xe0]
0x000DCFA8  fd7b4da9  ldp       x29, x30, [sp, #0xd0]
0x000DCFAC  ffc30491  add       sp, sp, #0x130
0x000DCFB0  c0035fd6  ret       
0x000DCFB4  e3641494  bl        #0x5f6340
```
### FDE 0xE3470 length 0x1F0
```asm
0x000E3470  ff4301d1  sub       sp, sp, #0x50
0x000E3474  fd7b01a9  stp       x29, x30, [sp, #0x10]
0x000E3478  f85f02a9  stp       x24, x23, [sp, #0x20]
0x000E347C  f65703a9  stp       x22, x21, [sp, #0x30]
0x000E3480  f44f04a9  stp       x20, x19, [sp, #0x40]
0x000E3484  fd430091  add       x29, sp, #0x10
0x000E3488  178040b9  ldr       w23, [x0, #0x80]
0x000E348C  ff0a0071  cmp       w23, #2
0x000E3490  610d0054  b.ne      #0xe363c
0x000E3494  083440f9  ldr       x8, [x0, #0x68]
0x000E3498  f50300aa  mov       x21, x0
0x000E349C  080e00b4  cbz       x8, #0xe365c
0x000E34A0  133140f9  ldr       x19, [x8, #0x60]
0x000E34A4  d30d00b4  cbz       x19, #0xe365c
0x000E34A8  680240f9  ldr       x8, [x19]
0x000E34AC  e00313aa  mov       x0, x19
0x000E34B0  080140f9  ldr       x8, [x8]
0x000E34B4  00013fd6  blr       x8
0x000E34B8  f40300aa  mov       x20, x0
0x000E34BC  79a8fe97  bl        #0x8d6a0
0x000E34C0  1f0014eb  cmp       x0, x20
0x000E34C4  00010054  b.eq      #0xe34e4
0x000E34C8  1f2003d5  nop       
0x000E34CC  1f2003d5  nop       
0x000E34D0  940240f9  ldr       x20, [x20]
0x000E34D4  9f0200eb  cmp       x20, x0
0x000E34D8  841a40fa  ccmp      x20, #0, #4, ne
0x000E34DC  a1ffff54  b.ne      #0xe34d0
0x000E34E0  f40b00b4  cbz       x20, #0xe365c
0x000E34E4  680e40f9  ldr       x8, [x19, #0x18]
0x000E34E8  a80b00b4  cbz       x8, #0xe365c
0x000E34EC  761240f9  ldr       x22, [x19, #0x20]
0x000E34F0  760b00b4  cbz       x22, #0xe365c
0x000E34F4  782241f9  ldr       x24, [x19, #0x240]
0x000E34F8  380b00b4  cbz       x24, #0xe365c
0x000E34FC  f40318aa  mov       x20, x24
```
```asm
0x000E3610  05000014  b         #0xe3624
0x000E3614  7fc200b9  str       wzr, [x19, #0xc0]
0x000E3618  03000014  b         #0xe3624
0x000E361C  c8008052  mov       w8, #6
0x000E3620  68ba00b9  str       w8, [x19, #0xb8]
0x000E3624  68028052  mov       w8, #0x13
0x000E3628  685203b9  str       w8, [x19, #0x350]
0x000E362C  e00314aa  mov       x0, x20
0x000E3630  880240f9  ldr       x8, [x20]
0x000E3634  080d40f9  ldr       x8, [x8, #0x18]
0x000E3638  00013fd6  blr       x8
0x000E363C  ff0a0071  cmp       w23, #2
0x000E3640  f44f44a9  ldp       x20, x19, [sp, #0x40]
0x000E3644  f65743a9  ldp       x22, x21, [sp, #0x30]
0x000E3648  e0179f1a  cset      w0, eq
0x000E364C  f85f42a9  ldp       x24, x23, [sp, #0x20]
0x000E3650  fd7b41a9  ldp       x29, x30, [sp, #0x10]
0x000E3654  ff430191  add       sp, sp, #0x50
0x000E3658  c0035fd6  ret       
0x000E365C  394b1494  bl        #0x5f6340
```
### FDE 0xEC970 length 0x2A4
```asm
0x000EC970  ff8301d1  sub       sp, sp, #0x60
0x000EC974  fd7b02a9  stp       x29, x30, [sp, #0x20]
0x000EC978  f85f03a9  stp       x24, x23, [sp, #0x30]
0x000EC97C  f65704a9  stp       x22, x21, [sp, #0x40]
0x000EC980  f44f05a9  stp       x20, x19, [sp, #0x50]
0x000EC984  fd830091  add       x29, sp, #0x20
0x000EC988  178040b9  ldr       w23, [x0, #0x80]
0x000EC98C  ff0a0071  cmp       w23, #2
0x000EC990  01130054  b.ne      #0xecbf0
0x000EC994  083440f9  ldr       x8, [x0, #0x68]
0x000EC998  f50300aa  mov       x21, x0
0x000EC99C  a81300b4  cbz       x8, #0xecc10
0x000EC9A0  133140f9  ldr       x19, [x8, #0x60]
0x000EC9A4  731300b4  cbz       x19, #0xecc10
0x000EC9A8  680240f9  ldr       x8, [x19]
0x000EC9AC  e00313aa  mov       x0, x19
0x000EC9B0  080140f9  ldr       x8, [x8]
0x000EC9B4  00013fd6  blr       x8
0x000EC9B8  f40300aa  mov       x20, x0
0x000EC9BC  3983fe97  bl        #0x8d6a0
0x000EC9C0  1f0014eb  cmp       x0, x20
0x000EC9C4  00010054  b.eq      #0xec9e4
0x000EC9C8  1f2003d5  nop       
0x000EC9CC  1f2003d5  nop       
0x000EC9D0  940240f9  ldr       x20, [x20]
0x000EC9D4  9f0200eb  cmp       x20, x0
0x000EC9D8  841a40fa  ccmp      x20, #0, #4, ne
0x000EC9DC  a1ffff54  b.ne      #0xec9d0
0x000EC9E0  941100b4  cbz       x20, #0xecc10
0x000EC9E4  680e40f9  ldr       x8, [x19, #0x18]
0x000EC9E8  481100b4  cbz       x8, #0xecc10
0x000EC9EC  761240f9  ldr       x22, [x19, #0x20]
0x000EC9F0  161100b4  cbz       x22, #0xecc10
0x000EC9F4  782241f9  ldr       x24, [x19, #0x240]
0x000EC9F8  d81000b4  cbz       x24, #0xecc10
0x000EC9FC  f40318aa  mov       x20, x24
```
```asm
0x000ECBC4  05000014  b         #0xecbd8
0x000ECBC8  7fc200b9  str       wzr, [x19, #0xc0]
0x000ECBCC  03000014  b         #0xecbd8
0x000ECBD0  c8008052  mov       w8, #6
0x000ECBD4  68ba00b9  str       w8, [x19, #0xb8]
0x000ECBD8  68028052  mov       w8, #0x13
0x000ECBDC  685203b9  str       w8, [x19, #0x350]
0x000ECBE0  e00314aa  mov       x0, x20
0x000ECBE4  880240f9  ldr       x8, [x20]
0x000ECBE8  080d40f9  ldr       x8, [x8, #0x18]
0x000ECBEC  00013fd6  blr       x8
0x000ECBF0  ff0a0071  cmp       w23, #2
0x000ECBF4  f44f45a9  ldp       x20, x19, [sp, #0x50]
0x000ECBF8  f65744a9  ldp       x22, x21, [sp, #0x40]
0x000ECBFC  e0179f1a  cset      w0, eq
0x000ECC00  f85f43a9  ldp       x24, x23, [sp, #0x30]
0x000ECC04  fd7b42a9  ldp       x29, x30, [sp, #0x20]
0x000ECC08  ff830191  add       sp, sp, #0x60
0x000ECC0C  c0035fd6  ret       
0x000ECC10  cc251494  bl        #0x5f6340
```

## Caller windows for known receiver FDEs
### callsite 0xB6A78, caller FDE 0xB6480
```asm
0x000B6A28  ff7f04a9  stp       xzr, xzr, [sp, #0x40]
0x000B6A2C  ff7f03a9  stp       xzr, xzr, [sp, #0x30]
0x000B6A30  00013fd6  blr       x8
0x000B6A34  e01740f9  ldr       x0, [sp, #0x28]
0x000B6A38  f40740f9  ldr       x20, [sp, #8]
0x000B6A3C  800000b4  cbz       x0, #0xb6a4c
0x000B6A40  088c44f8  ldr       x8, [x0, #0x48]!
0x000B6A44  080d40f9  ldr       x8, [x8, #0x18]
0x000B6A48  00013fd6  blr       x8
0x000B6A4C  883240b8  ldur      w8, [x20, #3]
0x000B6A50  08050011  add       w8, w8, #1
0x000B6A54  883200b8  stur      w8, [x20, #3]
0x000B6A58  09000014  b         #0xb6a7c
0x000B6A5C  17010036  tbz       w23, #0, #0xb6a7c
0x000B6A60  e90740f9  ldr       x9, [sp, #8]
0x000B6A64  3f010039  strb      wzr, [x9]
0x000B6A68  283140b8  ldur      w8, [x9, #3]
0x000B6A6C  801e40f9  ldr       x0, [x20, #0x38]
0x000B6A70  08050011  add       w8, w8, #1
0x000B6A74  283100b8  stur      w8, [x9, #3]
0x000B6A78  45a8ff97  bl        #0xa0b8c
0x000B6A7C  b30000b4  cbz       x19, #0xb6a90
0x000B6A80  688e44f8  ldr       x8, [x19, #0x48]!
0x000B6A84  e00313aa  mov       x0, x19
0x000B6A88  080d40f9  ldr       x8, [x8, #0x18]
0x000B6A8C  00013fd6  blr       x8
0x000B6A90  f44f51a9  ldp       x20, x19, [sp, #0x110]
0x000B6A94  f65750a9  ldp       x22, x21, [sp, #0x100]
```
### callsite 0xB6414, caller FDE 0xB6244
```asm
0x000B63C4  e00313aa  mov       x0, x19
0x000B63C8  e2031f2a  mov       w2, wzr
0x000B63CC  f722a99b  umaddl    x23, w23, w9, x8
0x000B63D0  088f8252  mov       w8, #0x1478
0x000B63D4  e102088b  add       x1, x23, x8
0x000B63D8  22460894  bl        #0x2c7c60
0x000B63DC  087f8252  mov       w8, #0x13f8
0x000B63E0  e00313aa  mov       x0, x19
0x000B63E4  e2031f2a  mov       w2, wzr
0x000B63E8  e102088b  add       x1, x23, x8
0x000B63EC  1d460894  bl        #0x2c7c60
0x000B63F0  08928252  mov       w8, #0x1490
0x000B63F4  e00315aa  mov       x0, x21
0x000B63F8  e102088b  add       x1, x23, x8
0x000B63FC  dfd7fd97  bl        #0x2c378
0x000B6400  c80640b9  ldr       w8, [x22, #4]
0x000B6404  df020039  strb      wzr, [x22]
0x000B6408  08050011  add       w8, w8, #1
0x000B640C  801e40f9  ldr       x0, [x20, #0x38]
0x000B6410  c80600b9  str       w8, [x22, #4]
0x000B6414  c5acff97  bl        #0xa1728
0x000B6418  806a42f9  ldr       x0, [x20, #0x4d0]
0x000B641C  19dcff97  bl        #0xad480
0x000B6420  801e40f9  ldr       x0, [x20, #0x38]
0x000B6424  e1830091  add       x1, sp, #0x20
0x000B6428  ff1300f9  str       xzr, [sp, #0x20]
0x000B642C  3aadff97  bl        #0xa1914
0x000B6430  e01340f9  ldr       x0, [sp, #0x20]
```
### callsite 0xA0374, caller FDE 0xA030C
```asm
0x000A0324  010c40f9  ldr       x1, [x0, #0x18]
0x000A0328  810200b4  cbz       x1, #0xa0378
0x000A032C  e00308aa  mov       x0, x8
0x000A0330  22008052  mov       w2, #1
0x000A0334  fd7bc1a8  ldp       x29, x30, [sp], #0x10
0x000A0338  be8b0014  b         #0xc3230
0x000A033C  08c481b9  ldrsw     x8, [x0, #0x1c4]
0x000A0340  01300791  add       x1, x0, #0x1cc
0x000A0344  0908088b  add       x9, x0, x8, lsl #2
0x000A0348  0814088b  add       x8, x0, x8, lsl #5
0x000A034C  29bd41b9  ldr       w9, [x9, #0x1bc]
0x000A0350  3f110071  cmp       w9, #4
0x000A0354  a1000054  b.ne      #0xa0368
0x000A0358  005540f9  ldr       x0, [x8, #0xa8]
0x000A035C  22008052  mov       w2, #1
0x000A0360  fd7bc1a8  ldp       x29, x30, [sp], #0x10
0x000A0364  f8ad0014  b         #0xcbb44
0x000A0368  003540f9  ldr       x0, [x8, #0x68]
0x000A036C  22008052  mov       w2, #1
0x000A0370  fd7bc1a8  ldp       x29, x30, [sp], #0x10
0x000A0374  7b470014  b         #0xb2160
0x000A0378  f2571594  bl        #0x5f6340
0x000A037C  fd7bbfa9  stp       x29, x30, [sp, #-0x10]!
0x000A0380  fd030091  mov       x29, sp
0x000A0384  08c841b9  ldr       w8, [x0, #0x1c8]
0x000A0388  28010034  cbz       w8, #0xa03ac
0x000A038C  080440f9  ldr       x8, [x0, #8]
0x000A0390  c80200b4  cbz       x8, #0xa03e8
```
### callsite 0xA03E4, caller FDE 0xA037C
```asm
0x000A0394  010c40f9  ldr       x1, [x0, #0x18]
0x000A0398  810200b4  cbz       x1, #0xa03e8
0x000A039C  e00308aa  mov       x0, x8
0x000A03A0  22008052  mov       w2, #1
0x000A03A4  fd7bc1a8  ldp       x29, x30, [sp], #0x10
0x000A03A8  a28b0014  b         #0xc3230
0x000A03AC  08c481b9  ldrsw     x8, [x0, #0x1c4]
0x000A03B0  01300791  add       x1, x0, #0x1cc
0x000A03B4  0908088b  add       x9, x0, x8, lsl #2
0x000A03B8  0814088b  add       x8, x0, x8, lsl #5
0x000A03BC  29bd41b9  ldr       w9, [x9, #0x1bc]
0x000A03C0  3f110071  cmp       w9, #4
0x000A03C4  a1000054  b.ne      #0xa03d8
0x000A03C8  005540f9  ldr       x0, [x8, #0xa8]
0x000A03CC  22008052  mov       w2, #1
0x000A03D0  fd7bc1a8  ldp       x29, x30, [sp], #0x10
0x000A03D4  dcad0014  b         #0xcbb44
0x000A03D8  003540f9  ldr       x0, [x8, #0x68]
0x000A03DC  22008052  mov       w2, #1
0x000A03E0  fd7bc1a8  ldp       x29, x30, [sp], #0x10
0x000A03E4  5f470014  b         #0xb2160
0x000A03E8  d6571594  bl        #0x5f6340
0x000A03EC  087440f9  ldr       x8, [x0, #0xe8]
0x000A03F0  09b041b9  ldr       w9, [x0, #0x1b0]
0x000A03F4  082540b9  ldr       w8, [x8, #0x24]
0x000A03F8  3f01086b  cmp       w9, w8
0x000A03FC  09b441b9  ldr       w9, [x0, #0x1b4]
0x000A0400  2011487a  ccmp      w9, w8, #0, ne
```
### callsite 0xB1F34, caller FDE 0xB1BB4
```asm
0x000B1EE4  a8a246f9  ldr       x8, [x21, #0xd40]
0x000B1EE8  1f0116eb  cmp       x8, x22
0x000B1EEC  61000054  b.ne      #0xb1ef8
0x000B1EF0  68008052  mov       w8, #3
0x000B1EF4  0b000014  b         #0xb1f20
0x000B1EF8  a8ba47f9  ldr       x8, [x21, #0xf70]
0x000B1EFC  1f0116eb  cmp       x8, x22
0x000B1F00  81000054  b.ne      #0xb1f10
0x000B1F04  89008052  mov       w9, #4
0x000B1F08  88008052  mov       w8, #4
0x000B1F0C  06000014  b         #0xb1f24
0x000B1F10  a8d248f9  ldr       x8, [x21, #0x11a0]
0x000B1F14  1f0116eb  cmp       x8, x22
0x000B1F18  01010054  b.ne      #0xb1f38
0x000B1F1C  a8008052  mov       w8, #5
0x000B1F20  89008052  mov       w9, #4
0x000B1F24  e1030091  mov       x1, sp
0x000B1F28  e00315aa  mov       x0, x21
0x000B1F2C  e8270029  stp       w8, w9, [sp]
0x000B1F30  e2031f2a  mov       w2, wzr
0x000B1F34  8b000094  bl        #0xb2160
0x000B1F38  a83240f9  ldr       x8, [x21, #0x60]
0x000B1F3C  1f0116eb  cmp       x8, x22
0x000B1F40  21040054  b.ne      #0xb1fc4
0x000B1F44  180b0037  tbnz      w24, #0, #0xb20a4
0x000B1F48  410740b9  ldr       w1, [x26, #4]
0x000B1F4C  e00317aa  mov       x0, x23
0x000B1F50  3d8eff97  bl        #0x95844
```
### callsite 0xD64A8, caller FDE 0xD63E4
```asm
0x000D6458  762a43f9  ldr       x22, [x19, #0x650]
0x000D645C  752a03f9  str       x21, [x19, #0x650]
0x000D6460  960100b4  cbz       x22, #0xd6490
0x000D6464  c80240f9  ldr       x8, [x22]
0x000D6468  e00316aa  mov       x0, x22
0x000D646C  080140f9  ldr       x8, [x8]
0x000D6470  00013fd6  blr       x8
0x000D6474  602e43f9  ldr       x0, [x19, #0x658]
0x000D6478  e10316aa  mov       x1, x22
0x000D647C  623243f9  ldr       x2, [x19, #0x660]
0x000D6480  633643f9  ldr       x3, [x19, #0x668]
0x000D6484  080040f9  ldr       x8, [x0]
0x000D6488  080d40f9  ldr       x8, [x8, #0x18]
0x000D648C  00013fd6  blr       x8
0x000D6490  08038052  mov       w8, #0x18
0x000D6494  e00313aa  mov       x0, x19
0x000D6498  742e03f9  str       x20, [x19, #0x658]
0x000D649C  683203f9  str       x8, [x19, #0x660]
0x000D64A0  08018052  mov       w8, #8
0x000D64A4  683603f9  str       x8, [x19, #0x668]
0x000D64A8  0d000094  bl        #0xd64dc
0x000D64AC  e00313aa  mov       x0, x19
0x000D64B0  e1031f2a  mov       w1, wzr
0x000D64B4  22008052  mov       w2, #1
0x000D64B8  3e4afd97  bl        #0x28db0
0x000D64BC  e00313aa  mov       x0, x19
0x000D64C0  f44f42a9  ldp       x20, x19, [sp, #0x20]
0x000D64C4  f65741a9  ldp       x22, x21, [sp, #0x10]
```
### callsite 0xD7214, caller FDE 0xD7214
```asm
0x000D71C4  080d40f9  ldr       x8, [x8, #0x18]
0x000D71C8  00013fd6  blr       x8
0x000D71CC  742a43f9  ldr       x20, [x19, #0x650]
0x000D71D0  7f2a03f9  str       xzr, [x19, #0x650]
0x000D71D4  940100b4  cbz       x20, #0xd7204
0x000D71D8  880240f9  ldr       x8, [x20]
0x000D71DC  e00314aa  mov       x0, x20
0x000D71E0  080140f9  ldr       x8, [x8]
0x000D71E4  00013fd6  blr       x8
0x000D71E8  602e43f9  ldr       x0, [x19, #0x658]
0x000D71EC  e10314aa  mov       x1, x20
0x000D71F0  623243f9  ldr       x2, [x19, #0x660]
0x000D71F4  633643f9  ldr       x3, [x19, #0x668]
0x000D71F8  080040f9  ldr       x8, [x0]
0x000D71FC  080d40f9  ldr       x8, [x8, #0x18]
0x000D7200  00013fd6  blr       x8
0x000D7204  e00313aa  mov       x0, x19
0x000D7208  f44f41a9  ldp       x20, x19, [sp, #0x10]
0x000D720C  fd7bc2a8  ldp       x29, x30, [sp], #0x20
0x000D7210  0445fd17  b         #0x28620
0x000D7214  b2ffff17  b         #0xd70dc
0x000D7218  a7defe17  b         #0x8ecb4
0x000D721C  002001d1  sub       x0, x0, #0x48
0x000D7220  afffff17  b         #0xd70dc
0x000D7224  002001d1  sub       x0, x0, #0x48
0x000D7228  adffff17  b         #0xd70dc
0x000D722C  a2defe17  b         #0x8ecb4
0x000D7230  a1defe17  b         #0x8ecb4
```
### callsite 0xD7220, caller FDE 0xD721C
```asm
0x000D71D0  7f2a03f9  str       xzr, [x19, #0x650]
0x000D71D4  940100b4  cbz       x20, #0xd7204
0x000D71D8  880240f9  ldr       x8, [x20]
0x000D71DC  e00314aa  mov       x0, x20
0x000D71E0  080140f9  ldr       x8, [x8]
0x000D71E4  00013fd6  blr       x8
0x000D71E8  602e43f9  ldr       x0, [x19, #0x658]
0x000D71EC  e10314aa  mov       x1, x20
0x000D71F0  623243f9  ldr       x2, [x19, #0x660]
0x000D71F4  633643f9  ldr       x3, [x19, #0x668]
0x000D71F8  080040f9  ldr       x8, [x0]
0x000D71FC  080d40f9  ldr       x8, [x8, #0x18]
0x000D7200  00013fd6  blr       x8
0x000D7204  e00313aa  mov       x0, x19
0x000D7208  f44f41a9  ldp       x20, x19, [sp, #0x10]
0x000D720C  fd7bc2a8  ldp       x29, x30, [sp], #0x20
0x000D7210  0445fd17  b         #0x28620
0x000D7214  b2ffff17  b         #0xd70dc
0x000D7218  a7defe17  b         #0x8ecb4
0x000D721C  002001d1  sub       x0, x0, #0x48
0x000D7220  afffff17  b         #0xd70dc
0x000D7224  002001d1  sub       x0, x0, #0x48
0x000D7228  adffff17  b         #0xd70dc
0x000D722C  a2defe17  b         #0x8ecb4
0x000D7230  a1defe17  b         #0x8ecb4
0x000D7234  004001d1  sub       x0, x0, #0x50
0x000D7238  a9ffff17  b         #0xd70dc
0x000D723C  004001d1  sub       x0, x0, #0x50
```
### callsite 0xD7228, caller FDE 0xD7224
```asm
0x000D71D8  880240f9  ldr       x8, [x20]
0x000D71DC  e00314aa  mov       x0, x20
0x000D71E0  080140f9  ldr       x8, [x8]
0x000D71E4  00013fd6  blr       x8
0x000D71E8  602e43f9  ldr       x0, [x19, #0x658]
0x000D71EC  e10314aa  mov       x1, x20
0x000D71F0  623243f9  ldr       x2, [x19, #0x660]
0x000D71F4  633643f9  ldr       x3, [x19, #0x668]
0x000D71F8  080040f9  ldr       x8, [x0]
0x000D71FC  080d40f9  ldr       x8, [x8, #0x18]
0x000D7200  00013fd6  blr       x8
0x000D7204  e00313aa  mov       x0, x19
0x000D7208  f44f41a9  ldp       x20, x19, [sp, #0x10]
0x000D720C  fd7bc2a8  ldp       x29, x30, [sp], #0x20
0x000D7210  0445fd17  b         #0x28620
0x000D7214  b2ffff17  b         #0xd70dc
0x000D7218  a7defe17  b         #0x8ecb4
0x000D721C  002001d1  sub       x0, x0, #0x48
0x000D7220  afffff17  b         #0xd70dc
0x000D7224  002001d1  sub       x0, x0, #0x48
0x000D7228  adffff17  b         #0xd70dc
0x000D722C  a2defe17  b         #0x8ecb4
0x000D7230  a1defe17  b         #0x8ecb4
0x000D7234  004001d1  sub       x0, x0, #0x50
0x000D7238  a9ffff17  b         #0xd70dc
0x000D723C  004001d1  sub       x0, x0, #0x50
0x000D7240  a7ffff17  b         #0xd70dc
0x000D7244  2fa5fc17  b         #0x700
```
### callsite 0xD7238, caller FDE 0xD7234
```asm
0x000D71E8  602e43f9  ldr       x0, [x19, #0x658]
0x000D71EC  e10314aa  mov       x1, x20
0x000D71F0  623243f9  ldr       x2, [x19, #0x660]
0x000D71F4  633643f9  ldr       x3, [x19, #0x668]
0x000D71F8  080040f9  ldr       x8, [x0]
0x000D71FC  080d40f9  ldr       x8, [x8, #0x18]
0x000D7200  00013fd6  blr       x8
0x000D7204  e00313aa  mov       x0, x19
0x000D7208  f44f41a9  ldp       x20, x19, [sp, #0x10]
0x000D720C  fd7bc2a8  ldp       x29, x30, [sp], #0x20
0x000D7210  0445fd17  b         #0x28620
0x000D7214  b2ffff17  b         #0xd70dc
0x000D7218  a7defe17  b         #0x8ecb4
0x000D721C  002001d1  sub       x0, x0, #0x48
0x000D7220  afffff17  b         #0xd70dc
0x000D7224  002001d1  sub       x0, x0, #0x48
0x000D7228  adffff17  b         #0xd70dc
0x000D722C  a2defe17  b         #0x8ecb4
0x000D7230  a1defe17  b         #0x8ecb4
0x000D7234  004001d1  sub       x0, x0, #0x50
0x000D7238  a9ffff17  b         #0xd70dc
0x000D723C  004001d1  sub       x0, x0, #0x50
0x000D7240  a7ffff17  b         #0xd70dc
0x000D7244  2fa5fc17  b         #0x700
0x000D7248  fd7bbea9  stp       x29, x30, [sp, #-0x20]!
0x000D724C  f44f01a9  stp       x20, x19, [sp, #0x10]
0x000D7250  fd030091  mov       x29, sp
0x000D7254  493600b0  adrp      x9, #0x7a0000
```
### callsite 0xD7240, caller FDE 0xD723C
```asm
0x000D71F0  623243f9  ldr       x2, [x19, #0x660]
0x000D71F4  633643f9  ldr       x3, [x19, #0x668]
0x000D71F8  080040f9  ldr       x8, [x0]
0x000D71FC  080d40f9  ldr       x8, [x8, #0x18]
0x000D7200  00013fd6  blr       x8
0x000D7204  e00313aa  mov       x0, x19
0x000D7208  f44f41a9  ldp       x20, x19, [sp, #0x10]
0x000D720C  fd7bc2a8  ldp       x29, x30, [sp], #0x20
0x000D7210  0445fd17  b         #0x28620
0x000D7214  b2ffff17  b         #0xd70dc
0x000D7218  a7defe17  b         #0x8ecb4
0x000D721C  002001d1  sub       x0, x0, #0x48
0x000D7220  afffff17  b         #0xd70dc
0x000D7224  002001d1  sub       x0, x0, #0x48
0x000D7228  adffff17  b         #0xd70dc
0x000D722C  a2defe17  b         #0x8ecb4
0x000D7230  a1defe17  b         #0x8ecb4
0x000D7234  004001d1  sub       x0, x0, #0x50
0x000D7238  a9ffff17  b         #0xd70dc
0x000D723C  004001d1  sub       x0, x0, #0x50
0x000D7240  a7ffff17  b         #0xd70dc
0x000D7244  2fa5fc17  b         #0x700
0x000D7248  fd7bbea9  stp       x29, x30, [sp, #-0x20]!
0x000D724C  f44f01a9  stp       x20, x19, [sp, #0x10]
0x000D7250  fd030091  mov       x29, sp
0x000D7254  493600b0  adrp      x9, #0x7a0000
0x000D7258  28008052  mov       w8, #1
0x000D725C  294d47f9  ldr       x9, [x9, #0xe98]
```
### callsite 0xD6DDC, caller FDE 0xD6D28
```asm
0x000D6D8C  606a43f9  ldr       x0, [x19, #0x6d0]
0x000D6D90  68160094  bl        #0xdc730
0x000D6D94  604a43f9  ldr       x0, [x19, #0x690]
0x000D6D98  21008052  mov       w1, #1
0x000D6D9C  f30b40f9  ldr       x19, [sp, #0x10]
0x000D6DA0  fd7bc2a8  ldp       x29, x30, [sp], #0x20
0x000D6DA4  07070014  b         #0xd89c0
0x000D6DA8  f30b40f9  ldr       x19, [sp, #0x10]
0x000D6DAC  fd7bc2a8  ldp       x29, x30, [sp], #0x20
0x000D6DB0  c0035fd6  ret       
0x000D6DB4  606a43f9  ldr       x0, [x19, #0x6d0]
0x000D6DB8  02170094  bl        #0xdc9c0
0x000D6DBC  604a43f9  ldr       x0, [x19, #0x690]
0x000D6DC0  e1031f2a  mov       w1, wzr
0x000D6DC4  f30b40f9  ldr       x19, [sp, #0x10]
0x000D6DC8  fd7bc2a8  ldp       x29, x30, [sp], #0x20
0x000D6DCC  fd060014  b         #0xd89c0
0x000D6DD0  606a43f9  ldr       x0, [x19, #0x6d0]
0x000D6DD4  f30b40f9  ldr       x19, [sp, #0x10]
0x000D6DD8  fd7bc2a8  ldp       x29, x30, [sp], #0x20
0x000D6DDC  4f170014  b         #0xdcb18
0x000D6DE0  606a43f9  ldr       x0, [x19, #0x6d0]
0x000D6DE4  d3170094  bl        #0xdcd30
0x000D6DE8  604a43f9  ldr       x0, [x19, #0x690]
0x000D6DEC  e1031f2a  mov       w1, wzr
0x000D6DF0  f30b40f9  ldr       x19, [sp, #0x10]
0x000D6DF4  fd7bc2a8  ldp       x29, x30, [sp], #0x20
0x000D6DF8  f2060014  b         #0xd89c0
```
### callsite 0xD6DE4, caller FDE 0xD6D28
```asm
0x000D6D94  604a43f9  ldr       x0, [x19, #0x690]
0x000D6D98  21008052  mov       w1, #1
0x000D6D9C  f30b40f9  ldr       x19, [sp, #0x10]
0x000D6DA0  fd7bc2a8  ldp       x29, x30, [sp], #0x20
0x000D6DA4  07070014  b         #0xd89c0
0x000D6DA8  f30b40f9  ldr       x19, [sp, #0x10]
0x000D6DAC  fd7bc2a8  ldp       x29, x30, [sp], #0x20
0x000D6DB0  c0035fd6  ret       
0x000D6DB4  606a43f9  ldr       x0, [x19, #0x6d0]
0x000D6DB8  02170094  bl        #0xdc9c0
0x000D6DBC  604a43f9  ldr       x0, [x19, #0x690]
0x000D6DC0  e1031f2a  mov       w1, wzr
0x000D6DC4  f30b40f9  ldr       x19, [sp, #0x10]
0x000D6DC8  fd7bc2a8  ldp       x29, x30, [sp], #0x20
0x000D6DCC  fd060014  b         #0xd89c0
0x000D6DD0  606a43f9  ldr       x0, [x19, #0x6d0]
0x000D6DD4  f30b40f9  ldr       x19, [sp, #0x10]
0x000D6DD8  fd7bc2a8  ldp       x29, x30, [sp], #0x20
0x000D6DDC  4f170014  b         #0xdcb18
0x000D6DE0  606a43f9  ldr       x0, [x19, #0x6d0]
0x000D6DE4  d3170094  bl        #0xdcd30
0x000D6DE8  604a43f9  ldr       x0, [x19, #0x690]
0x000D6DEC  e1031f2a  mov       w1, wzr
0x000D6DF0  f30b40f9  ldr       x19, [sp, #0x10]
0x000D6DF4  fd7bc2a8  ldp       x29, x30, [sp], #0x20
0x000D6DF8  f2060014  b         #0xd89c0
0x000D6DFC  fd7bbea9  stp       x29, x30, [sp, #-0x20]!
0x000D6E00  f44f01a9  stp       x20, x19, [sp, #0x10]
```

## MOVZ 100 candidates
Total: 58 (not all ways of materialising 100).
### 0x11709C FDE 0x117058
```asm
0x0011706C  f30301aa  mov       x19, x1
0x00117070  f50300aa  mov       x21, x0
0x00117074  5bf9ff97  bl        #0x1155e0
0x00117078  9f160071  cmp       w20, #5
0x0011707C  08000052  eor       w8, w0, #1
0x00117080  e9979f1a  cset      w9, hi
0x00117084  7f0200f1  cmp       x19, #0
0x00117088  2801082a  orr       w8, w9, w8
0x0011708C  e9179f1a  cset      w9, eq
0x00117090  2801082a  orr       w8, w9, w8
0x00117094  c8010037  tbnz      w8, #0, #0x1170cc
0x00117098  a94640f9  ldr       x9, [x21, #0x88]
0x0011709C  8a0c8052  mov       w10, #0x64
0x001170A0  8926aa9b  umaddl    x9, w20, w10, x9
0x001170A4  2aad43a9  ldp       x10, x11, [x9, #0x38]
0x001170A8  6a2e00a9  stp       x10, x11, [x19]
0x001170AC  2aad44a9  ldp       x10, x11, [x9, #0x48]
0x001170B0  2cb545a9  ldp       x12, x13, [x9, #0x58]
0x001170B4  6c3602a9  stp       x12, x13, [x19, #0x20]
0x001170B8  6a2e01a9  stp       x10, x11, [x19, #0x10]
0x001170BC  2aad46a9  ldp       x10, x11, [x9, #0x68]
0x001170C0  2ca547a9  ldp       x12, x9, [x9, #0x78]
0x001170C4  6c2604a9  stp       x12, x9, [x19, #0x40]
0x001170C8  6a2e03a9  stp       x10, x11, [x19, #0x30]
0x001170CC  f44f42a9  ldp       x20, x19, [sp, #0x20]
0x001170D0  29008052  mov       w9, #1
0x001170D4  f50b40f9  ldr       x21, [sp, #0x10]
0x001170D8  2001280a  bic       w0, w9, w8
```

## Candidate receiver constructors: STR Xn with shared base and +8/+40/+50

Only direct stores in UI code, not proof of type.

## Candidate writes overlapping +0x2A8
Total raw store candidates: 369. Includes unrelated fields.
### 0x70880 FDE 0x70630
```asm
0x0007086C  cfe9ff97  bl        #0x6afa8
0x00070870  60020a91  add       x0, x19, #0x280
0x00070874  7f3e01f9  str       xzr, [x19, #0x278]
0x00070878  cce9ff97  bl        #0x6afa8
0x0007087C  60820a91  add       x0, x19, #0x2a0
0x00070880  7f4e01f9  str       xzr, [x19, #0x298]
0x00070884  c9e9ff97  bl        #0x6afa8
0x00070888  60020b91  add       x0, x19, #0x2c0
0x0007088C  7f5e01f9  str       xzr, [x19, #0x2b8]
0x00070890  c6e9ff97  bl        #0x6afa8
0x00070894  60820b91  add       x0, x19, #0x2e0
```
### 0x713C0 FDE 0x71170
```asm
0x000713AC  ffe6ff97  bl        #0x6afa8
0x000713B0  60020a91  add       x0, x19, #0x280
0x000713B4  7f3e01f9  str       xzr, [x19, #0x278]
0x000713B8  fce6ff97  bl        #0x6afa8
0x000713BC  60820a91  add       x0, x19, #0x2a0
0x000713C0  7f4e01f9  str       xzr, [x19, #0x298]
0x000713C4  f9e6ff97  bl        #0x6afa8
0x000713C8  60020b91  add       x0, x19, #0x2c0
0x000713CC  7f5e01f9  str       xzr, [x19, #0x2b8]
0x000713D0  f6e6ff97  bl        #0x6afa8
0x000713D4  60820b91  add       x0, x19, #0x2e0
```
### 0x71EFC FDE 0x71CB0
```asm
0x00071EE8  30e4ff97  bl        #0x6afa8
0x00071EEC  60020a91  add       x0, x19, #0x280
0x00071EF0  7f3e01f9  str       xzr, [x19, #0x278]
0x00071EF4  2de4ff97  bl        #0x6afa8
0x00071EF8  60820a91  add       x0, x19, #0x2a0
0x00071EFC  7f4e01f9  str       xzr, [x19, #0x298]
0x00071F00  2ae4ff97  bl        #0x6afa8
0x00071F04  60020b91  add       x0, x19, #0x2c0
0x00071F08  7f5e01f9  str       xzr, [x19, #0x2b8]
0x00071F0C  27e4ff97  bl        #0x6afa8
0x00071F10  60820b91  add       x0, x19, #0x2e0
```
### 0x72AC0 FDE 0x72870
```asm
0x00072AAC  3fe1ff97  bl        #0x6afa8
0x00072AB0  60020a91  add       x0, x19, #0x280
0x00072AB4  7f3e01f9  str       xzr, [x19, #0x278]
0x00072AB8  3ce1ff97  bl        #0x6afa8
0x00072ABC  60820a91  add       x0, x19, #0x2a0
0x00072AC0  7f4e01f9  str       xzr, [x19, #0x298]
0x00072AC4  39e1ff97  bl        #0x6afa8
0x00072AC8  60020b91  add       x0, x19, #0x2c0
0x00072ACC  7f5e01f9  str       xzr, [x19, #0x2b8]
0x00072AD0  36e1ff97  bl        #0x6afa8
0x00072AD4  60820b91  add       x0, x19, #0x2e0
```
### 0x73600 FDE 0x733B0
```asm
0x000735EC  6fdeff97  bl        #0x6afa8
0x000735F0  60020a91  add       x0, x19, #0x280
0x000735F4  7f3e01f9  str       xzr, [x19, #0x278]
0x000735F8  6cdeff97  bl        #0x6afa8
0x000735FC  60820a91  add       x0, x19, #0x2a0
0x00073600  7f4e01f9  str       xzr, [x19, #0x298]
0x00073604  69deff97  bl        #0x6afa8
0x00073608  60020b91  add       x0, x19, #0x2c0
0x0007360C  7f5e01f9  str       xzr, [x19, #0x2b8]
0x00073610  66deff97  bl        #0x6afa8
0x00073614  60820b91  add       x0, x19, #0x2e0
```
### 0x74140 FDE 0x73EF0
```asm
0x0007412C  9fdbff97  bl        #0x6afa8
0x00074130  60020a91  add       x0, x19, #0x280
0x00074134  7f3e01f9  str       xzr, [x19, #0x278]
0x00074138  9cdbff97  bl        #0x6afa8
0x0007413C  60820a91  add       x0, x19, #0x2a0
0x00074140  7f4e01f9  str       xzr, [x19, #0x298]
0x00074144  99dbff97  bl        #0x6afa8
0x00074148  60020b91  add       x0, x19, #0x2c0
0x0007414C  7f5e01f9  str       xzr, [x19, #0x2b8]
0x00074150  96dbff97  bl        #0x6afa8
0x00074154  60820b91  add       x0, x19, #0x2e0
```
### 0x75AE0 FDE 0x758A0
```asm
0x00075ACC  37d5ff97  bl        #0x6afa8
0x00075AD0  60020a91  add       x0, x19, #0x280
0x00075AD4  7f3e01f9  str       xzr, [x19, #0x278]
0x00075AD8  34d5ff97  bl        #0x6afa8
0x00075ADC  60820a91  add       x0, x19, #0x2a0
0x00075AE0  7f4e01f9  str       xzr, [x19, #0x298]
0x00075AE4  31d5ff97  bl        #0x6afa8
0x00075AE8  60020b91  add       x0, x19, #0x2c0
0x00075AEC  7f5e01f9  str       xzr, [x19, #0x2b8]
0x00075AF0  2ed5ff97  bl        #0x6afa8
0x00075AF4  60820b91  add       x0, x19, #0x2e0
```
### 0x765A0 FDE 0x76350
```asm
0x0007658C  87d2ff97  bl        #0x6afa8
0x00076590  60020a91  add       x0, x19, #0x280
0x00076594  7f3e01f9  str       xzr, [x19, #0x278]
0x00076598  84d2ff97  bl        #0x6afa8
0x0007659C  60820a91  add       x0, x19, #0x2a0
0x000765A0  7f4e01f9  str       xzr, [x19, #0x298]
0x000765A4  81d2ff97  bl        #0x6afa8
0x000765A8  60020b91  add       x0, x19, #0x2c0
0x000765AC  7f5e01f9  str       xzr, [x19, #0x2b8]
0x000765B0  7ed2ff97  bl        #0x6afa8
0x000765B4  60820b91  add       x0, x19, #0x2e0
```
### 0x772E0 FDE 0x77090
```asm
0x000772CC  37cfff97  bl        #0x6afa8
0x000772D0  60020a91  add       x0, x19, #0x280
0x000772D4  7f3e01f9  str       xzr, [x19, #0x278]
0x000772D8  34cfff97  bl        #0x6afa8
0x000772DC  60820a91  add       x0, x19, #0x2a0
0x000772E0  7f4e01f9  str       xzr, [x19, #0x298]
0x000772E4  31cfff97  bl        #0x6afa8
0x000772E8  60020b91  add       x0, x19, #0x2c0
0x000772EC  7f5e01f9  str       xzr, [x19, #0x2b8]
0x000772F0  2ecfff97  bl        #0x6afa8
0x000772F4  60820b91  add       x0, x19, #0x2e0
```
### 0x77E10 FDE 0x77BC0
```asm
0x00077DFC  6bccff97  bl        #0x6afa8
0x00077E00  60020a91  add       x0, x19, #0x280
0x00077E04  7f3e01f9  str       xzr, [x19, #0x278]
0x00077E08  68ccff97  bl        #0x6afa8
0x00077E0C  60820a91  add       x0, x19, #0x2a0
0x00077E10  7f4e01f9  str       xzr, [x19, #0x298]
0x00077E14  65ccff97  bl        #0x6afa8
0x00077E18  60020b91  add       x0, x19, #0x2c0
0x00077E1C  7f5e01f9  str       xzr, [x19, #0x2b8]
0x00077E20  62ccff97  bl        #0x6afa8
0x00077E24  60820b91  add       x0, x19, #0x2e0
```
### 0x787BC FDE 0x78570
```asm
0x000787A8  00caff97  bl        #0x6afa8
0x000787AC  60020a91  add       x0, x19, #0x280
0x000787B0  7f3e01f9  str       xzr, [x19, #0x278]
0x000787B4  fdc9ff97  bl        #0x6afa8
0x000787B8  60820a91  add       x0, x19, #0x2a0
0x000787BC  7f4e01f9  str       xzr, [x19, #0x298]
0x000787C0  fac9ff97  bl        #0x6afa8
0x000787C4  60020b91  add       x0, x19, #0x2c0
0x000787C8  7f5e01f9  str       xzr, [x19, #0x2b8]
0x000787CC  f7c9ff97  bl        #0x6afa8
0x000787D0  60820b91  add       x0, x19, #0x2e0
```
### 0x7937C FDE 0x79130
```asm
0x00079368  10c7ff97  bl        #0x6afa8
0x0007936C  60020a91  add       x0, x19, #0x280
0x00079370  7f3e01f9  str       xzr, [x19, #0x278]
0x00079374  0dc7ff97  bl        #0x6afa8
0x00079378  60820a91  add       x0, x19, #0x2a0
0x0007937C  7f4e01f9  str       xzr, [x19, #0x298]
0x00079380  0ac7ff97  bl        #0x6afa8
0x00079384  60020b91  add       x0, x19, #0x2c0
0x00079388  7f5e01f9  str       xzr, [x19, #0x2b8]
0x0007938C  07c7ff97  bl        #0x6afa8
0x00079390  60820b91  add       x0, x19, #0x2e0
```
### 0x79F40 FDE 0x79CF0
```asm
0x00079F2C  1fc4ff97  bl        #0x6afa8
0x00079F30  60020a91  add       x0, x19, #0x280
0x00079F34  7f3e01f9  str       xzr, [x19, #0x278]
0x00079F38  1cc4ff97  bl        #0x6afa8
0x00079F3C  60820a91  add       x0, x19, #0x2a0
0x00079F40  7f4e01f9  str       xzr, [x19, #0x298]
0x00079F44  19c4ff97  bl        #0x6afa8
0x00079F48  60020b91  add       x0, x19, #0x2c0
0x00079F4C  7f5e01f9  str       xzr, [x19, #0x2b8]
0x00079F50  16c4ff97  bl        #0x6afa8
0x00079F54  60820b91  add       x0, x19, #0x2e0
```
### 0x7AA7C FDE 0x7A830
```asm
0x0007AA68  50c1ff97  bl        #0x6afa8
0x0007AA6C  60020a91  add       x0, x19, #0x280
0x0007AA70  7f3e01f9  str       xzr, [x19, #0x278]
0x0007AA74  4dc1ff97  bl        #0x6afa8
0x0007AA78  60820a91  add       x0, x19, #0x2a0
0x0007AA7C  7f4e01f9  str       xzr, [x19, #0x298]
0x0007AA80  4ac1ff97  bl        #0x6afa8
0x0007AA84  60020b91  add       x0, x19, #0x2c0
0x0007AA88  7f5e01f9  str       xzr, [x19, #0x2b8]
0x0007AA8C  47c1ff97  bl        #0x6afa8
0x0007AA90  60820b91  add       x0, x19, #0x2e0
```
### 0x7B640 FDE 0x7B3F0
```asm
0x0007B62C  5fbeff97  bl        #0x6afa8
0x0007B630  60020a91  add       x0, x19, #0x280
0x0007B634  7f3e01f9  str       xzr, [x19, #0x278]
0x0007B638  5cbeff97  bl        #0x6afa8
0x0007B63C  60820a91  add       x0, x19, #0x2a0
0x0007B640  7f4e01f9  str       xzr, [x19, #0x298]
0x0007B644  59beff97  bl        #0x6afa8
0x0007B648  60020b91  add       x0, x19, #0x2c0
0x0007B64C  7f5e01f9  str       xzr, [x19, #0x2b8]
0x0007B650  56beff97  bl        #0x6afa8
0x0007B654  60820b91  add       x0, x19, #0x2e0
```
### 0x7C180 FDE 0x7BF30
```asm
0x0007C16C  8fbbff97  bl        #0x6afa8
0x0007C170  60020a91  add       x0, x19, #0x280
0x0007C174  7f3e01f9  str       xzr, [x19, #0x278]
0x0007C178  8cbbff97  bl        #0x6afa8
0x0007C17C  60820a91  add       x0, x19, #0x2a0
0x0007C180  7f4e01f9  str       xzr, [x19, #0x298]
0x0007C184  89bbff97  bl        #0x6afa8
0x0007C188  60020b91  add       x0, x19, #0x2c0
0x0007C18C  7f5e01f9  str       xzr, [x19, #0x2b8]
0x0007C190  86bbff97  bl        #0x6afa8
0x0007C194  60820b91  add       x0, x19, #0x2e0
```
### 0x7CCC0 FDE 0x7CA70
```asm
0x0007CCAC  bfb8ff97  bl        #0x6afa8
0x0007CCB0  60020a91  add       x0, x19, #0x280
0x0007CCB4  7f3e01f9  str       xzr, [x19, #0x278]
0x0007CCB8  bcb8ff97  bl        #0x6afa8
0x0007CCBC  60820a91  add       x0, x19, #0x2a0
0x0007CCC0  7f4e01f9  str       xzr, [x19, #0x298]
0x0007CCC4  b9b8ff97  bl        #0x6afa8
0x0007CCC8  60020b91  add       x0, x19, #0x2c0
0x0007CCCC  7f5e01f9  str       xzr, [x19, #0x2b8]
0x0007CCD0  b6b8ff97  bl        #0x6afa8
0x0007CCD4  60820b91  add       x0, x19, #0x2e0
```
### 0x92578 FDE 0x922A0
```asm
0x00092564  47ffff97  bl        #0x92280
0x00092568  284f40f9  ldr       x8, [x25, #0x98]
0x0009256C  080500d1  sub       x8, x8, #1
0x00092570  284f00f9  str       x8, [x25, #0x98]
0x00092574  414f41f9  ldr       x1, [x26, #0x298]
0x00092578  554f01f9  str       x21, [x26, #0x298]
0x0009257C  e10000b4  cbz       x1, #0x92598
0x00092580  405341f9  ldr       x0, [x26, #0x2a0]
0x00092584  425741f9  ldr       x2, [x26, #0x2a8]
0x00092588  435b41f9  ldr       x3, [x26, #0x2b0]
0x0009258C  080040f9  ldr       x8, [x0]
```
### 0x92598 FDE 0x922A0
```asm
0x00092584  425741f9  ldr       x2, [x26, #0x2a8]
0x00092588  435b41f9  ldr       x3, [x26, #0x2b0]
0x0009258C  080040f9  ldr       x8, [x0]
0x00092590  080d40f9  ldr       x8, [x8, #0x18]
0x00092594  00013fd6  blr       x8
0x00092598  535301f9  str       x19, [x26, #0x2a0]
0x0009259C  e00313aa  mov       x0, x19
0x000925A0  01048052  mov       w1, #0x20
0x000925A4  575701f9  str       x23, [x26, #0x2a8]
0x000925A8  02018052  mov       w2, #8
0x000925AC  585b01f9  str       x24, [x26, #0x2b0]
```
### 0x925A4 FDE 0x922A0
```asm
0x00092590  080d40f9  ldr       x8, [x8, #0x18]
0x00092594  00013fd6  blr       x8
0x00092598  535301f9  str       x19, [x26, #0x2a0]
0x0009259C  e00313aa  mov       x0, x19
0x000925A0  01048052  mov       w1, #0x20
0x000925A4  575701f9  str       x23, [x26, #0x2a8]
0x000925A8  02018052  mov       w2, #8
0x000925AC  585b01f9  str       x24, [x26, #0x2b0]
0x000925B0  680240f9  ldr       x8, [x19]
0x000925B4  080940f9  ldr       x8, [x8, #0x10]
0x000925B8  00013fd6  blr       x8
```
### 0x9C5F4 FDE 0x9C5B0
```asm
0x0009C5E0  1f800739  strb      wzr, [x0, #0x1e0]
0x0009C5E4  1f200839  strb      wzr, [x0, #0x208]
0x0009C5E8  1fc00839  strb      wzr, [x0, #0x230]
0x0009C5EC  1f600939  strb      wzr, [x0, #0x258]
0x0009C5F0  1f000a39  strb      wzr, [x0, #0x280]
0x0009C5F4  1fa00a39  strb      wzr, [x0, #0x2a8]
0x0009C5F8  1f400b39  strb      wzr, [x0, #0x2d0]
0x0009C5FC  1fe00b39  strb      wzr, [x0, #0x2f8]
0x0009C600  1f800c39  strb      wzr, [x0, #0x320]
0x0009C604  1f200d39  strb      wzr, [x0, #0x348]
0x0009C608  1fc00d39  strb      wzr, [x0, #0x370]
```
### 0x9E350 FDE 0x9E200
```asm
0x0009E33C  1f3801f9  str       xzr, [x0, #0x270]
0x0009E340  1f3401f9  str       xzr, [x0, #0x268]
0x0009E344  1f400a39  strb      wzr, [x0, #0x290]
0x0009E348  1f4401f9  str       xzr, [x0, #0x288]
0x0009E34C  1f4001f9  str       xzr, [x0, #0x280]
0x0009E350  1fa00a39  strb      wzr, [x0, #0x2a8]
0x0009E354  1f5001f9  str       xzr, [x0, #0x2a0]
0x0009E358  1f4c01f9  str       xzr, [x0, #0x298]
0x0009E35C  1f000b39  strb      wzr, [x0, #0x2c0]
0x0009E360  1f5c01f9  str       xzr, [x0, #0x2b8]
0x0009E364  1f5801f9  str       xzr, [x0, #0x2b0]
```
### 0x9E354 FDE 0x9E200
```asm
0x0009E340  1f3401f9  str       xzr, [x0, #0x268]
0x0009E344  1f400a39  strb      wzr, [x0, #0x290]
0x0009E348  1f4401f9  str       xzr, [x0, #0x288]
0x0009E34C  1f4001f9  str       xzr, [x0, #0x280]
0x0009E350  1fa00a39  strb      wzr, [x0, #0x2a8]
0x0009E354  1f5001f9  str       xzr, [x0, #0x2a0]
0x0009E358  1f4c01f9  str       xzr, [x0, #0x298]
0x0009E35C  1f000b39  strb      wzr, [x0, #0x2c0]
0x0009E360  1f5c01f9  str       xzr, [x0, #0x2b8]
0x0009E364  1f5801f9  str       xzr, [x0, #0x2b0]
0x0009E368  1f600b39  strb      wzr, [x0, #0x2d8]
```
### 0x9E358 FDE 0x9E200
```asm
0x0009E344  1f400a39  strb      wzr, [x0, #0x290]
0x0009E348  1f4401f9  str       xzr, [x0, #0x288]
0x0009E34C  1f4001f9  str       xzr, [x0, #0x280]
0x0009E350  1fa00a39  strb      wzr, [x0, #0x2a8]
0x0009E354  1f5001f9  str       xzr, [x0, #0x2a0]
0x0009E358  1f4c01f9  str       xzr, [x0, #0x298]
0x0009E35C  1f000b39  strb      wzr, [x0, #0x2c0]
0x0009E360  1f5c01f9  str       xzr, [x0, #0x2b8]
0x0009E364  1f5801f9  str       xzr, [x0, #0x2b0]
0x0009E368  1f600b39  strb      wzr, [x0, #0x2d8]
0x0009E36C  1f6801f9  str       xzr, [x0, #0x2d0]
```
### 0x9E3B4 FDE 0x9E200
```asm
0x0009E3A0  09c40839  strb      w9, [x0, #0x231]
0x0009E3A4  09240939  strb      w9, [x0, #0x249]
0x0009E3A8  09840939  strb      w9, [x0, #0x261]
0x0009E3AC  09e40939  strb      w9, [x0, #0x279]
0x0009E3B0  09440a39  strb      w9, [x0, #0x291]
0x0009E3B4  09a40a39  strb      w9, [x0, #0x2a9]
0x0009E3B8  09040b39  strb      w9, [x0, #0x2c1]
0x0009E3BC  09640b39  strb      w9, [x0, #0x2d9]
0x0009E3C0  09c40b39  strb      w9, [x0, #0x2f1]
0x0009E3C4  095f8052  mov       w9, #0x2f8
0x0009E3C8  1ffc0ea9  stp       xzr, xzr, [x0, #0xe8]
```
### 0xA0BF4 FDE 0xA0B8C
```asm
0x000A0BE0  f1840094  bl        #0xc1fa4
0x000A0BE4  a80640f9  ldr       x8, [x21, #8]
0x000A0BE8  09a942b9  ldr       w9, [x8, #0x2a8]
0x000A0BEC  2901000b  add       w9, w9, w0
0x000A0BF0  e00314aa  mov       x0, x20
0x000A0BF4  09a902b9  str       w9, [x8, #0x2a8]
0x000A0BF8  96860094  bl        #0xc2650
0x000A0BFC  68be41b9  ldr       w8, [x19, #0x1bc]
0x000A0C00  1f110071  cmp       w8, #4
0x000A0C04  21010054  b.ne      #0xa0c28
0x000A0C08  68c241b9  ldr       w8, [x19, #0x1c0]
```
### 0xA1770 FDE 0xA1728
```asm
0x000A175C  880300b4  cbz       x8, #0xa17cc
0x000A1760  080540f9  ldr       x8, [x8, #8]
0x000A1764  607640f9  ldr       x0, [x19, #0xe8]
0x000A1768  09a942b9  ldr       w9, [x8, #0x2a8]
0x000A176C  29050011  add       w9, w9, #1
0x000A1770  09a902b9  str       w9, [x8, #0x2a8]
0x000A1774  a6240094  bl        #0xaaa0c
0x000A1778  68be41b9  ldr       w8, [x19, #0x1bc]
0x000A177C  1f110071  cmp       w8, #4
0x000A1780  c0000054  b.eq      #0xa1798
0x000A1784  603640f9  ldr       x0, [x19, #0x68]
```
### 0xC4A54 FDE 0xC4910
```asm
0x000C4A40  68820991  add       x8, x19, #0x260
0x000C4A44  e00314aa  mov       x0, x20
0x000C4A48  0d921094  bl        #0x4e927c
0x000C4A4C  68020a91  add       x8, x19, #0x280
0x000C4A50  e00314aa  mov       x0, x20
0x000C4A54  7f5201f9  str       xzr, [x19, #0x2a0]
0x000C4A58  1fe102f8  stur      xzr, [x8, #0x2e]
0x000C4A5C  68e20a91  add       x8, x19, #0x2b8
0x000C4A60  7f5601f9  str       xzr, [x19, #0x2a8]
0x000C4A64  7f4e01f9  str       xzr, [x19, #0x298]
0x000C4A68  7f4a01f9  str       xzr, [x19, #0x290]
```
### 0xC4A60 FDE 0xC4910
```asm
0x000C4A4C  68020a91  add       x8, x19, #0x280
0x000C4A50  e00314aa  mov       x0, x20
0x000C4A54  7f5201f9  str       xzr, [x19, #0x2a0]
0x000C4A58  1fe102f8  stur      xzr, [x8, #0x2e]
0x000C4A5C  68e20a91  add       x8, x19, #0x2b8
0x000C4A60  7f5601f9  str       xzr, [x19, #0x2a8]
0x000C4A64  7f4e01f9  str       xzr, [x19, #0x298]
0x000C4A68  7f4a01f9  str       xzr, [x19, #0x290]
0x000C4A6C  7f4601f9  str       xzr, [x19, #0x288]
0x000C4A70  7f4201f9  str       xzr, [x19, #0x280]
0x000C4A74  02921094  bl        #0x4e927c
```
### 0xC4A64 FDE 0xC4910
```asm
0x000C4A50  e00314aa  mov       x0, x20
0x000C4A54  7f5201f9  str       xzr, [x19, #0x2a0]
0x000C4A58  1fe102f8  stur      xzr, [x8, #0x2e]
0x000C4A5C  68e20a91  add       x8, x19, #0x2b8
0x000C4A60  7f5601f9  str       xzr, [x19, #0x2a8]
0x000C4A64  7f4e01f9  str       xzr, [x19, #0x298]
0x000C4A68  7f4a01f9  str       xzr, [x19, #0x290]
0x000C4A6C  7f4601f9  str       xzr, [x19, #0x288]
0x000C4A70  7f4201f9  str       xzr, [x19, #0x280]
0x000C4A74  02921094  bl        #0x4e927c
0x000C4A78  68620b91  add       x8, x19, #0x2d8
```
### 0xC84A4 FDE 0xC81B8
```asm
0x000C8490  605641f9  ldr       x0, [x19, #0x2a8]
0x000C8494  a00000b4  cbz       x0, #0xc84a8
0x000C8498  088c44f8  ldr       x8, [x0, #0x48]!
0x000C849C  080d40f9  ldr       x8, [x8, #0x18]
0x000C84A0  00013fd6  blr       x8
0x000C84A4  7f5601f9  str       xzr, [x19, #0x2a8]
0x000C84A8  605241f9  ldr       x0, [x19, #0x2a0]
0x000C84AC  a00000b4  cbz       x0, #0xc84c0
0x000C84B0  088c44f8  ldr       x8, [x0, #0x48]!
0x000C84B4  080d40f9  ldr       x8, [x8, #0x18]
0x000C84B8  00013fd6  blr       x8
```
### 0xC84BC FDE 0xC81B8
```asm
0x000C84A8  605241f9  ldr       x0, [x19, #0x2a0]
0x000C84AC  a00000b4  cbz       x0, #0xc84c0
0x000C84B0  088c44f8  ldr       x8, [x0, #0x48]!
0x000C84B4  080d40f9  ldr       x8, [x8, #0x18]
0x000C84B8  00013fd6  blr       x8
0x000C84BC  7f5201f9  str       xzr, [x19, #0x2a0]
0x000C84C0  604e41f9  ldr       x0, [x19, #0x298]
0x000C84C4  a00000b4  cbz       x0, #0xc84d8
0x000C84C8  088c44f8  ldr       x8, [x0, #0x48]!
0x000C84CC  080d40f9  ldr       x8, [x8, #0x18]
0x000C84D0  00013fd6  blr       x8
```
### 0xC84D4 FDE 0xC81B8
```asm
0x000C84C0  604e41f9  ldr       x0, [x19, #0x298]
0x000C84C4  a00000b4  cbz       x0, #0xc84d8
0x000C84C8  088c44f8  ldr       x8, [x0, #0x48]!
0x000C84CC  080d40f9  ldr       x8, [x8, #0x18]
0x000C84D0  00013fd6  blr       x8
0x000C84D4  7f4e01f9  str       xzr, [x19, #0x298]
0x000C84D8  604a41f9  ldr       x0, [x19, #0x290]
0x000C84DC  a00000b4  cbz       x0, #0xc84f0
0x000C84E0  088c44f8  ldr       x8, [x0, #0x48]!
0x000C84E4  080d40f9  ldr       x8, [x8, #0x18]
0x000C84E8  00013fd6  blr       x8
```
### 0xC9A48 FDE 0xC8E50
```asm
0x000C9A34  490109ca  eor       x9, x10, x9
0x000C9A38  2a7d149b  mul       x10, x9, x20
0x000C9A3C  09154038  ldrb      w9, [x8], #1
0x000C9A40  89ffff35  cbnz      w9, #0xc9a30
0x000C9A44  08038052  mov       w8, #0x18
0x000C9A48  6a5201f9  str       x10, [x19, #0x2a0]
0x000C9A4C  776e01f9  str       x23, [x19, #0x2d8]
0x000C9A50  757201f9  str       x21, [x19, #0x2e0]
0x000C9A54  687601f9  str       x8, [x19, #0x2e8]
0x000C9A58  15000014  b         #0xc9aac
0x000C9A5C  622a00b0  adrp      x2, #0x616000
```
### 0xD7398 FDE 0xD7248
```asm
0x000D7384  68e20991  add       x8, x19, #0x278
0x000D7388  e00314aa  mov       x0, x20
0x000D738C  7f4a01f9  str       xzr, [x19, #0x290]
0x000D7390  1f6102f8  stur      xzr, [x8, #0x26]
0x000D7394  68a20a91  add       x8, x19, #0x2a8
0x000D7398  7f4e01f9  str       xzr, [x19, #0x298]
0x000D739C  7f4601f9  str       xzr, [x19, #0x288]
0x000D73A0  7f4201f9  str       xzr, [x19, #0x280]
0x000D73A4  7f3e01f9  str       xzr, [x19, #0x278]
0x000D73A8  b5471094  bl        #0x4e927c
0x000D73AC  68220b91  add       x8, x19, #0x2c8
```
### 0xD7FB0 FDE 0xD7D50
```asm
0x000D7F9C  882601f9  str       x8, [x20, #0x248]
0x000D7FA0  a8a29dd2  mov       x8, #0xed15
0x000D7FA4  c8b3a3f2  movk      x8, #0x1d9e, lsl #16
0x000D7FA8  488ec4f2  movk      x8, #0x2472, lsl #32
0x000D7FAC  6891f2f2  movk      x8, #0x948b, lsl #48
0x000D7FB0  885201f9  str       x8, [x20, #0x2a0]
0x000D7FB4  68c58ad2  mov       x8, #0x562b
0x000D7FB8  68eab0f2  movk      x8, #0x8753, lsl #16
0x000D7FBC  8832c3f2  movk      x8, #0x1994, lsl #32
0x000D7FC0  08a3ecf2  movk      x8, #0x6518, lsl #48
0x000D7FC4  885601f9  str       x8, [x20, #0x2a8]
```
### 0xD7FC4 FDE 0xD7D50
```asm
0x000D7FB0  885201f9  str       x8, [x20, #0x2a0]
0x000D7FB4  68c58ad2  mov       x8, #0x562b
0x000D7FB8  68eab0f2  movk      x8, #0x8753, lsl #16
0x000D7FBC  8832c3f2  movk      x8, #0x1994, lsl #32
0x000D7FC0  08a3ecf2  movk      x8, #0x6518, lsl #48
0x000D7FC4  885601f9  str       x8, [x20, #0x2a8]
0x000D7FC8  28cc8cd2  mov       x8, #0x6661
0x000D7FCC  e84aa2f2  movk      x8, #0x1257, lsl #16
0x000D7FD0  4846dff2  movk      x8, #0xfa32, lsl #32
0x000D7FD4  48d3f8f2  movk      x8, #0xc69a, lsl #48
0x000D7FD8  885a01f9  str       x8, [x20, #0x2b0]
```
### 0xDA60C FDE 0xD97F0
```asm
0x000DA5F8  eb8701f9  str       x11, [sp, #0x308]
0x000DA5FC  8c4d40f9  ldr       x12, [x12, #0x98]
0x000DA600  e88b01f9  str       x8, [sp, #0x310]
0x000DA604  ec8f01f9  str       x12, [sp, #0x318]
0x000DA608  295140f9  ldr       x9, [x9, #0xa0]
0x000DA60C  f45301f9  str       x20, [sp, #0x2a0]
0x000DA610  ff5b01f9  str       xzr, [sp, #0x2b0]
0x000DA614  ea4301f9  str       x10, [sp, #0x280]
0x000DA618  eb4701f9  str       x11, [sp, #0x288]
0x000DA61C  e84b01f9  str       x8, [sp, #0x290]
0x000DA620  ec4f01f9  str       x12, [sp, #0x298]
```
### 0xDA620 FDE 0xD97F0
```asm
0x000DA60C  f45301f9  str       x20, [sp, #0x2a0]
0x000DA610  ff5b01f9  str       xzr, [sp, #0x2b0]
0x000DA614  ea4301f9  str       x10, [sp, #0x280]
0x000DA618  eb4701f9  str       x11, [sp, #0x288]
0x000DA61C  e84b01f9  str       x8, [sp, #0x290]
0x000DA620  ec4f01f9  str       x12, [sp, #0x298]
0x000DA624  e95701f9  str       x9, [sp, #0x2a8]
0x000DA628  293600f0  adrp      x9, #0x7a1000
0x000DA62C  296540f9  ldr       x9, [x9, #0xc8]
0x000DA630  f41301f9  str       x20, [sp, #0x220]
0x000DA634  ff1b01f9  str       xzr, [sp, #0x230]
```
### 0xDA624 FDE 0xD97F0
```asm
0x000DA610  ff5b01f9  str       xzr, [sp, #0x2b0]
0x000DA614  ea4301f9  str       x10, [sp, #0x280]
0x000DA618  eb4701f9  str       x11, [sp, #0x288]
0x000DA61C  e84b01f9  str       x8, [sp, #0x290]
0x000DA620  ec4f01f9  str       x12, [sp, #0x298]
0x000DA624  e95701f9  str       x9, [sp, #0x2a8]
0x000DA628  293600f0  adrp      x9, #0x7a1000
0x000DA62C  296540f9  ldr       x9, [x9, #0xc8]
0x000DA630  f41301f9  str       x20, [sp, #0x220]
0x000DA634  ff1b01f9  str       xzr, [sp, #0x230]
0x000DA638  ea0301f9  str       x10, [sp, #0x200]
```
### 0xDABAC FDE 0xD97F0
```asm
0x000DAB98  ff0301f9  str       xzr, [sp, #0x200]
0x000DAB9C  00013fd6  blr       x8
0x000DABA0  e84741f9  ldr       x8, [sp, #0x288]
0x000DABA4  e80000b4  cbz       x8, #0xdabc0
0x000DABA8  e0031caa  mov       x0, x28
0x000DABAC  ff4f01f9  str       xzr, [sp, #0x298]
0x000DABB0  ff4b01f9  str       xzr, [sp, #0x290]
0x000DABB4  ff4701f9  str       xzr, [sp, #0x288]
0x000DABB8  ff4301f9  str       xzr, [sp, #0x280]
0x000DABBC  00013fd6  blr       x8
0x000DABC0  e88741f9  ldr       x8, [sp, #0x308]
```
### 0xDCCD4 FDE 0xDCB18
```asm
0x000DCCC0  48f5fe97  bl        #0x9a1e0
0x000DCCC4  17c30039  strb      w23, [x24, #0x30]
0x000DCCC8  880640f9  ldr       x8, [x20, #8]
0x000DCCCC  09a942b9  ldr       w9, [x8, #0x2a8]
0x000DCCD0  29050011  add       w9, w9, #1
0x000DCCD4  09a902b9  str       w9, [x8, #0x2a8]
0x000DCCD8  176f0739  strb      w23, [x24, #0x1db]
0x000DCCDC  083740b9  ldr       w8, [x24, #0x34]
0x000DCCE0  08050011  add       w8, w8, #1
0x000DCCE4  083700b9  str       w8, [x24, #0x34]
0x000DCCE8  08df41b9  ldr       w8, [x24, #0x1dc]
```
### 0xDCF2C FDE 0xDCD30
```asm
0x000DCF18  e00315aa  mov       x0, x21
0x000DCF1C  890640f9  ldr       x9, [x20, #8]
0x000DCF20  080140b9  ldr       w8, [x8]
0x000DCF24  2aa942b9  ldr       w10, [x9, #0x2a8]
0x000DCF28  4801080b  add       w8, w10, w8
0x000DCF2C  28a902b9  str       w8, [x9, #0x2a8]
0x000DCF30  1f030139  strb      wzr, [x24, #0x40]
0x000DCF34  082740f9  ldr       x8, [x24, #0x48]
0x000DCF38  082b00f9  str       x8, [x24, #0x50]
0x000DCF3C  085b9152  mov       w8, #0x8ad8
0x000DCF40  6102088b  add       x1, x19, x8
```
### 0xE3AB0 FDE 0xE38C0
```asm
0x000E3A9C  e80b01f9  str       x8, [sp, #0x210]
0x000E3AA0  1f2003d5  nop       
0x000E3AA4  484b0010  adr       x8, #0xe440c
0x000E3AA8  ffff18a9  stp       xzr, xzr, [sp, #0x188]
0x000E3AAC  ff4b01f9  str       xzr, [sp, #0x290]
0x000E3AB0  ff4f01f9  str       xzr, [sp, #0x298]
0x000E3AB4  ff8301f9  str       xzr, [sp, #0x300]
0x000E3AB8  ff8701f9  str       xzr, [sp, #0x308]
0x000E3ABC  ff8b01f9  str       xzr, [sp, #0x310]
0x000E3AC0  ff8f01f9  str       xzr, [sp, #0x318]
0x000E3AC4  ffc301f9  str       xzr, [sp, #0x380]
```
### 0xE4DD8 FDE 0xE4CE0
```asm
0x000E4DC4  ff4301f9  str       xzr, [sp, #0x280]
0x000E4DC8  ff7f18a9  stp       xzr, xzr, [sp, #0x180]
0x000E4DCC  ff4701f9  str       xzr, [sp, #0x288]
0x000E4DD0  ff7f19a9  stp       xzr, xzr, [sp, #0x190]
0x000E4DD4  ff4b01f9  str       xzr, [sp, #0x290]
0x000E4DD8  ff4f01f9  str       xzr, [sp, #0x298]
0x000E4DDC  ff8301f9  str       xzr, [sp, #0x300]
0x000E4DE0  ff8701f9  str       xzr, [sp, #0x308]
0x000E4DE4  ff8b01f9  str       xzr, [sp, #0x310]
0x000E4DE8  ff8f01f9  str       xzr, [sp, #0x318]
0x000E4DEC  ff0702f9  str       xzr, [sp, #0x408]
```
### 0xE5BE8 FDE 0xE5A40
```asm
0x000E5BD4  145440f9  ldr       x20, [x0, #0xa8]
0x000E5BD8  e05b01f9  str       x0, [sp, #0x2b0]
0x000E5BDC  ff6301f9  str       xzr, [sp, #0x2c0]
0x000E5BE0  ff1701f9  str       xzr, [sp, #0x228]
0x000E5BE4  fb4b01f9  str       x27, [sp, #0x290]
0x000E5BE8  fa4f01f9  str       x26, [sp, #0x298]
0x000E5BEC  f95301f9  str       x25, [sp, #0x2a0]
0x000E5BF0  f85701f9  str       x24, [sp, #0x2a8]
0x000E5BF4  e85f01f9  str       x8, [sp, #0x2b8]
0x000E5BF8  b40000b4  cbz       x20, #0xe5c0c
0x000E5BFC  e00314aa  mov       x0, x20
```
### 0xE5BEC FDE 0xE5A40
```asm
0x000E5BD8  e05b01f9  str       x0, [sp, #0x2b0]
0x000E5BDC  ff6301f9  str       xzr, [sp, #0x2c0]
0x000E5BE0  ff1701f9  str       xzr, [sp, #0x228]
0x000E5BE4  fb4b01f9  str       x27, [sp, #0x290]
0x000E5BE8  fa4f01f9  str       x26, [sp, #0x298]
0x000E5BEC  f95301f9  str       x25, [sp, #0x2a0]
0x000E5BF0  f85701f9  str       x24, [sp, #0x2a8]
0x000E5BF4  e85f01f9  str       x8, [sp, #0x2b8]
0x000E5BF8  b40000b4  cbz       x20, #0xe5c0c
0x000E5BFC  e00314aa  mov       x0, x20
0x000E5C00  088c44f8  ldr       x8, [x0, #0x48]!
```
### 0xE5BF0 FDE 0xE5A40
```asm
0x000E5BDC  ff6301f9  str       xzr, [sp, #0x2c0]
0x000E5BE0  ff1701f9  str       xzr, [sp, #0x228]
0x000E5BE4  fb4b01f9  str       x27, [sp, #0x290]
0x000E5BE8  fa4f01f9  str       x26, [sp, #0x298]
0x000E5BEC  f95301f9  str       x25, [sp, #0x2a0]
0x000E5BF0  f85701f9  str       x24, [sp, #0x2a8]
0x000E5BF4  e85f01f9  str       x8, [sp, #0x2b8]
0x000E5BF8  b40000b4  cbz       x20, #0xe5c0c
0x000E5BFC  e00314aa  mov       x0, x20
0x000E5C00  088c44f8  ldr       x8, [x0, #0x48]!
0x000E5C04  080940f9  ldr       x8, [x8, #0x10]
```
### 0xE6964 FDE 0xE67F0
```asm
0x000E6950  d64244f9  ldr       x22, [x22, #0x880]
0x000E6954  7b4744f9  ldr       x27, [x27, #0x888]
0x000E6958  f66f19a9  stp       x22, x27, [sp, #0x190]
0x000E695C  08e144f9  ldr       x8, [x8, #0x9c0]
0x000E6960  175440f9  ldr       x23, [x0, #0xa8]
0x000E6964  e05301f9  str       x0, [sp, #0x2a0]
0x000E6968  ff5b01f9  str       xzr, [sp, #0x2b0]
0x000E696C  ff0f01f9  str       xzr, [sp, #0x218]
0x000E6970  fa4301f9  str       x26, [sp, #0x280]
0x000E6974  fc4701f9  str       x28, [sp, #0x288]
0x000E6978  f64b01f9  str       x22, [sp, #0x290]
```
### 0xE697C FDE 0xE67F0
```asm
0x000E6968  ff5b01f9  str       xzr, [sp, #0x2b0]
0x000E696C  ff0f01f9  str       xzr, [sp, #0x218]
0x000E6970  fa4301f9  str       x26, [sp, #0x280]
0x000E6974  fc4701f9  str       x28, [sp, #0x288]
0x000E6978  f64b01f9  str       x22, [sp, #0x290]
0x000E697C  fb4f01f9  str       x27, [sp, #0x298]
0x000E6980  e85701f9  str       x8, [sp, #0x2a8]
0x000E6984  b70000b4  cbz       x23, #0xe6998
0x000E6988  e00317aa  mov       x0, x23
0x000E698C  088c44f8  ldr       x8, [x0, #0x48]!
0x000E6990  080940f9  ldr       x8, [x8, #0x10]
```
### 0xE6980 FDE 0xE67F0
```asm
0x000E696C  ff0f01f9  str       xzr, [sp, #0x218]
0x000E6970  fa4301f9  str       x26, [sp, #0x280]
0x000E6974  fc4701f9  str       x28, [sp, #0x288]
0x000E6978  f64b01f9  str       x22, [sp, #0x290]
0x000E697C  fb4f01f9  str       x27, [sp, #0x298]
0x000E6980  e85701f9  str       x8, [sp, #0x2a8]
0x000E6984  b70000b4  cbz       x23, #0xe6998
0x000E6988  e00317aa  mov       x0, x23
0x000E698C  088c44f8  ldr       x8, [x0, #0x48]!
0x000E6990  080940f9  ldr       x8, [x8, #0x10]
0x000E6994  00013fd6  blr       x8
```
### 0xF08A4 FDE 0xF0840
```asm
0x000F0890  887640b9  ldr       w8, [x20, #0x74]
0x000F0894  29008052  mov       w9, #1
0x000F0898  68e600b9  str       w8, [x19, #0xe4]
0x000F089C  f50b40f9  ldr       x21, [sp, #0x10]
0x000F08A0  880e40f9  ldr       x8, [x20, #0x18]
0x000F08A4  09910a39  strb      w9, [x8, #0x2a4]
0x000F08A8  f44f42a9  ldp       x20, x19, [sp, #0x20]
0x000F08AC  fd7bc3a8  ldp       x29, x30, [sp], #0x30
0x000F08B0  c0035fd6  ret       
0x000F08B4  00000000  udf       #0
0x000F08B8  00000000  udf       #0
```
### 0xFBD24 FDE 0xFBA90
```asm
0x000FBD10  ff1b01f9  str       xzr, [sp, #0x230]
0x000FBD14  ff7f1aa9  stp       xzr, xzr, [sp, #0x1a0]
0x000FBD18  ff1f01f9  str       xzr, [sp, #0x238]
0x000FBD1C  ff5f01f9  str       xzr, [sp, #0x2b8]
0x000FBD20  ff5b01f9  str       xzr, [sp, #0x2b0]
0x000FBD24  ff5701f9  str       xzr, [sp, #0x2a8]
0x000FBD28  ff5301f9  str       xzr, [sp, #0x2a0]
0x000FBD2C  ff9f01f9  str       xzr, [sp, #0x338]
0x000FBD30  ff9b01f9  str       xzr, [sp, #0x330]
0x000FBD34  ff9701f9  str       xzr, [sp, #0x328]
0x000FBD38  ff9301f9  str       xzr, [sp, #0x320]
```
### 0xFBD28 FDE 0xFBA90
```asm
0x000FBD14  ff7f1aa9  stp       xzr, xzr, [sp, #0x1a0]
0x000FBD18  ff1f01f9  str       xzr, [sp, #0x238]
0x000FBD1C  ff5f01f9  str       xzr, [sp, #0x2b8]
0x000FBD20  ff5b01f9  str       xzr, [sp, #0x2b0]
0x000FBD24  ff5701f9  str       xzr, [sp, #0x2a8]
0x000FBD28  ff5301f9  str       xzr, [sp, #0x2a0]
0x000FBD2C  ff9f01f9  str       xzr, [sp, #0x338]
0x000FBD30  ff9b01f9  str       xzr, [sp, #0x330]
0x000FBD34  ff9701f9  str       xzr, [sp, #0x328]
0x000FBD38  ff9301f9  str       xzr, [sp, #0x320]
0x000FBD3C  ffd301f9  str       xzr, [sp, #0x3a0]
```
### 0xFC9F4 FDE 0xFC7B0
```asm
0x000FC9E0  283d0210  adr       x8, #0x101184
0x000FC9E4  ffff18a9  stp       xzr, xzr, [sp, #0x188]
0x000FC9E8  ff4301f9  str       xzr, [sp, #0x280]
0x000FC9EC  ff4701f9  str       xzr, [sp, #0x288]
0x000FC9F0  ff4b01f9  str       xzr, [sp, #0x290]
0x000FC9F4  ff4f01f9  str       xzr, [sp, #0x298]
0x000FC9F8  ff8301f9  str       xzr, [sp, #0x300]
0x000FC9FC  ff8701f9  str       xzr, [sp, #0x308]
0x000FCA00  ff8b01f9  str       xzr, [sp, #0x310]
0x000FCA04  ff8f01f9  str       xzr, [sp, #0x318]
0x000FCA08  ff0302f9  str       xzr, [sp, #0x400]
```
### 0xFCE80 FDE 0xFCBC0
```asm
0x000FCE6C  e8480210  adr       x8, #0x101788
0x000FCE70  ff7f19a9  stp       xzr, xzr, [sp, #0x190]
0x000FCE74  ff4301f9  str       xzr, [sp, #0x280]
0x000FCE78  ff4701f9  str       xzr, [sp, #0x288]
0x000FCE7C  ff4b01f9  str       xzr, [sp, #0x290]
0x000FCE80  ff4f01f9  str       xzr, [sp, #0x298]
0x000FCE84  ff0302f9  str       xzr, [sp, #0x400]
0x000FCE88  ff0702f9  str       xzr, [sp, #0x408]
0x000FCE8C  ff0b02f9  str       xzr, [sp, #0x410]
0x000FCE90  ff0f02f9  str       xzr, [sp, #0x418]
0x000FCE94  ff4302f9  str       xzr, [sp, #0x480]
```
### 0xFD1E8 FDE 0xFD030
```asm
0x000FD1D4  1f2003d5  nop       
0x000FD1D8  88460210  adr       x8, #0x101aa8
0x000FD1DC  ff7f0aa9  stp       xzr, xzr, [sp, #0xa0]
0x000FD1E0  ff7f09a9  stp       xzr, xzr, [sp, #0x90]
0x000FD1E4  ff4b01f9  str       xzr, [sp, #0x290]
0x000FD1E8  ff4f01f9  str       xzr, [sp, #0x298]
0x000FD1EC  ff5301f9  str       xzr, [sp, #0x2a0]
0x000FD1F0  ff5701f9  str       xzr, [sp, #0x2a8]
0x000FD1F4  ff8b01f9  str       xzr, [sp, #0x310]
0x000FD1F8  ff8f01f9  str       xzr, [sp, #0x318]
0x000FD1FC  ff9301f9  str       xzr, [sp, #0x320]
```
### 0xFD1EC FDE 0xFD030
```asm
0x000FD1D8  88460210  adr       x8, #0x101aa8
0x000FD1DC  ff7f0aa9  stp       xzr, xzr, [sp, #0xa0]
0x000FD1E0  ff7f09a9  stp       xzr, xzr, [sp, #0x90]
0x000FD1E4  ff4b01f9  str       xzr, [sp, #0x290]
0x000FD1E8  ff4f01f9  str       xzr, [sp, #0x298]
0x000FD1EC  ff5301f9  str       xzr, [sp, #0x2a0]
0x000FD1F0  ff5701f9  str       xzr, [sp, #0x2a8]
0x000FD1F4  ff8b01f9  str       xzr, [sp, #0x310]
0x000FD1F8  ff8f01f9  str       xzr, [sp, #0x318]
0x000FD1FC  ff9301f9  str       xzr, [sp, #0x320]
0x000FD200  ff9701f9  str       xzr, [sp, #0x328]
```
### 0xFD1F0 FDE 0xFD030
```asm
0x000FD1DC  ff7f0aa9  stp       xzr, xzr, [sp, #0xa0]
0x000FD1E0  ff7f09a9  stp       xzr, xzr, [sp, #0x90]
0x000FD1E4  ff4b01f9  str       xzr, [sp, #0x290]
0x000FD1E8  ff4f01f9  str       xzr, [sp, #0x298]
0x000FD1EC  ff5301f9  str       xzr, [sp, #0x2a0]
0x000FD1F0  ff5701f9  str       xzr, [sp, #0x2a8]
0x000FD1F4  ff8b01f9  str       xzr, [sp, #0x310]
0x000FD1F8  ff8f01f9  str       xzr, [sp, #0x318]
0x000FD1FC  ff9301f9  str       xzr, [sp, #0x320]
0x000FD200  ff9701f9  str       xzr, [sp, #0x328]
0x000FD204  ff1702f9  str       xzr, [sp, #0x428]
```
### 0xFD9B4 FDE 0xFD720
```asm
0x000FD9A0  ff1b01f9  str       xzr, [sp, #0x230]
0x000FD9A4  ff7f1aa9  stp       xzr, xzr, [sp, #0x1a0]
0x000FD9A8  ff1f01f9  str       xzr, [sp, #0x238]
0x000FD9AC  ff5f01f9  str       xzr, [sp, #0x2b8]
0x000FD9B0  ff5b01f9  str       xzr, [sp, #0x2b0]
0x000FD9B4  ff5701f9  str       xzr, [sp, #0x2a8]
0x000FD9B8  ff5301f9  str       xzr, [sp, #0x2a0]
0x000FD9BC  ff9f01f9  str       xzr, [sp, #0x338]
0x000FD9C0  ff9b01f9  str       xzr, [sp, #0x330]
0x000FD9C4  ff9701f9  str       xzr, [sp, #0x328]
0x000FD9C8  ff9301f9  str       xzr, [sp, #0x320]
```
### 0xFD9B8 FDE 0xFD720
```asm
0x000FD9A4  ff7f1aa9  stp       xzr, xzr, [sp, #0x1a0]
0x000FD9A8  ff1f01f9  str       xzr, [sp, #0x238]
0x000FD9AC  ff5f01f9  str       xzr, [sp, #0x2b8]
0x000FD9B0  ff5b01f9  str       xzr, [sp, #0x2b0]
0x000FD9B4  ff5701f9  str       xzr, [sp, #0x2a8]
0x000FD9B8  ff5301f9  str       xzr, [sp, #0x2a0]
0x000FD9BC  ff9f01f9  str       xzr, [sp, #0x338]
0x000FD9C0  ff9b01f9  str       xzr, [sp, #0x330]
0x000FD9C4  ff9701f9  str       xzr, [sp, #0x328]
0x000FD9C8  ff9301f9  str       xzr, [sp, #0x320]
0x000FD9CC  ffd301f9  str       xzr, [sp, #0x3a0]
```
### 0x10E2B0 FDE 0x10E214
```asm
0x0010E29C  1f3801f9  str       xzr, [x0, #0x270]
0x0010E2A0  083c01f9  str       x8, [x0, #0x278]
0x0010E2A4  084001f9  str       x8, [x0, #0x280]
0x0010E2A8  084401f9  str       x8, [x0, #0x288]
0x0010E2AC  084801f9  str       x8, [x0, #0x290]
0x0010E2B0  084c01f9  str       x8, [x0, #0x298]
0x0010E2B4  085001f9  str       x8, [x0, #0x2a0]
0x0010E2B8  1f5401f9  str       xzr, [x0, #0x2a8]
0x0010E2BC  085801f9  str       x8, [x0, #0x2b0]
0x0010E2C0  085c01f9  str       x8, [x0, #0x2b8]
0x0010E2C4  086001f9  str       x8, [x0, #0x2c0]
```
### 0x10E2B4 FDE 0x10E214
```asm
0x0010E2A0  083c01f9  str       x8, [x0, #0x278]
0x0010E2A4  084001f9  str       x8, [x0, #0x280]
0x0010E2A8  084401f9  str       x8, [x0, #0x288]
0x0010E2AC  084801f9  str       x8, [x0, #0x290]
0x0010E2B0  084c01f9  str       x8, [x0, #0x298]
0x0010E2B4  085001f9  str       x8, [x0, #0x2a0]
0x0010E2B8  1f5401f9  str       xzr, [x0, #0x2a8]
0x0010E2BC  085801f9  str       x8, [x0, #0x2b0]
0x0010E2C0  085c01f9  str       x8, [x0, #0x2b8]
0x0010E2C4  086001f9  str       x8, [x0, #0x2c0]
0x0010E2C8  090000f9  str       x9, [x0]
```
### 0x10E2B8 FDE 0x10E214
```asm
0x0010E2A4  084001f9  str       x8, [x0, #0x280]
0x0010E2A8  084401f9  str       x8, [x0, #0x288]
0x0010E2AC  084801f9  str       x8, [x0, #0x290]
0x0010E2B0  084c01f9  str       x8, [x0, #0x298]
0x0010E2B4  085001f9  str       x8, [x0, #0x2a0]
0x0010E2B8  1f5401f9  str       xzr, [x0, #0x2a8]
0x0010E2BC  085801f9  str       x8, [x0, #0x2b0]
0x0010E2C0  085c01f9  str       x8, [x0, #0x2b8]
0x0010E2C4  086001f9  str       x8, [x0, #0x2c0]
0x0010E2C8  090000f9  str       x9, [x0]
0x0010E2CC  086401f9  str       x8, [x0, #0x2c8]
```
### 0x1190EC FDE 0x118E10
```asm
0x001190D8  ff1201f9  str       xzr, [x23, #0x220]
0x001190DC  ff7e1aa9  stp       xzr, xzr, [x23, #0x1a0]
0x001190E0  ff1601f9  str       xzr, [x23, #0x228]
0x001190E4  ff1a01f9  str       xzr, [x23, #0x230]
0x001190E8  ff1e01f9  str       xzr, [x23, #0x238]
0x001190EC  ff5201f9  str       xzr, [x23, #0x2a0]
0x001190F0  ff5601f9  str       xzr, [x23, #0x2a8]
0x001190F4  ff5a01f9  str       xzr, [x23, #0x2b0]
0x001190F8  ff5e01f9  str       xzr, [x23, #0x2b8]
0x001190FC  a98e04f8  str       x9, [x21, #0x48]!
0x00119100  09c10291  add       x9, x8, #0xb0
```
### 0x1190F0 FDE 0x118E10
```asm
0x001190DC  ff7e1aa9  stp       xzr, xzr, [x23, #0x1a0]
0x001190E0  ff1601f9  str       xzr, [x23, #0x228]
0x001190E4  ff1a01f9  str       xzr, [x23, #0x230]
0x001190E8  ff1e01f9  str       xzr, [x23, #0x238]
0x001190EC  ff5201f9  str       xzr, [x23, #0x2a0]
0x001190F0  ff5601f9  str       xzr, [x23, #0x2a8]
0x001190F4  ff5a01f9  str       xzr, [x23, #0x2b0]
0x001190F8  ff5e01f9  str       xzr, [x23, #0x2b8]
0x001190FC  a98e04f8  str       x9, [x21, #0x48]!
0x00119100  09c10291  add       x9, x8, #0xb0
0x00119104  08410091  add       x8, x8, #0x10
```
### 0x11A1A8 FDE 0x11A14C
```asm
0x0011A194  685641f9  ldr       x8, [x19, #0x2a8]
0x0011A198  e80000b4  cbz       x8, #0x11a1b4
0x0011A19C  60020b91  add       x0, x19, #0x2c0
0x0011A1A0  7f5e01f9  str       xzr, [x19, #0x2b8]
0x0011A1A4  7f5a01f9  str       xzr, [x19, #0x2b0]
0x0011A1A8  7f5601f9  str       xzr, [x19, #0x2a8]
0x0011A1AC  7f5201f9  str       xzr, [x19, #0x2a0]
0x0011A1B0  00013fd6  blr       x8
0x0011A1B4  681641f9  ldr       x8, [x19, #0x228]
0x0011A1B8  e80000b4  cbz       x8, #0x11a1d4
0x0011A1BC  60020991  add       x0, x19, #0x240
```
### 0x11A1AC FDE 0x11A14C
```asm
0x0011A198  e80000b4  cbz       x8, #0x11a1b4
0x0011A19C  60020b91  add       x0, x19, #0x2c0
0x0011A1A0  7f5e01f9  str       xzr, [x19, #0x2b8]
0x0011A1A4  7f5a01f9  str       xzr, [x19, #0x2b0]
0x0011A1A8  7f5601f9  str       xzr, [x19, #0x2a8]
0x0011A1AC  7f5201f9  str       xzr, [x19, #0x2a0]
0x0011A1B0  00013fd6  blr       x8
0x0011A1B4  681641f9  ldr       x8, [x19, #0x228]
0x0011A1B8  e80000b4  cbz       x8, #0x11a1d4
0x0011A1BC  60020991  add       x0, x19, #0x240
0x0011A1C0  7f1e01f9  str       xzr, [x19, #0x238]
```
### 0x11A270 FDE 0x11A214
```asm
0x0011A25C  685641f9  ldr       x8, [x19, #0x2a8]
0x0011A260  e80000b4  cbz       x8, #0x11a27c
0x0011A264  60020b91  add       x0, x19, #0x2c0
0x0011A268  7f5e01f9  str       xzr, [x19, #0x2b8]
0x0011A26C  7f5a01f9  str       xzr, [x19, #0x2b0]
0x0011A270  7f5601f9  str       xzr, [x19, #0x2a8]
0x0011A274  7f5201f9  str       xzr, [x19, #0x2a0]
0x0011A278  00013fd6  blr       x8
0x0011A27C  681641f9  ldr       x8, [x19, #0x228]
0x0011A280  e80000b4  cbz       x8, #0x11a29c
0x0011A284  60020991  add       x0, x19, #0x240
```
### 0x11A274 FDE 0x11A214
```asm
0x0011A260  e80000b4  cbz       x8, #0x11a27c
0x0011A264  60020b91  add       x0, x19, #0x2c0
0x0011A268  7f5e01f9  str       xzr, [x19, #0x2b8]
0x0011A26C  7f5a01f9  str       xzr, [x19, #0x2b0]
0x0011A270  7f5601f9  str       xzr, [x19, #0x2a8]
0x0011A274  7f5201f9  str       xzr, [x19, #0x2a0]
0x0011A278  00013fd6  blr       x8
0x0011A27C  681641f9  ldr       x8, [x19, #0x228]
0x0011A280  e80000b4  cbz       x8, #0x11a29c
0x0011A284  60020991  add       x0, x19, #0x240
0x0011A288  7f1e01f9  str       xzr, [x19, #0x238]
```
### 0x227D0C FDE 0x227AD8
```asm
0x00227CF8  684201f9  str       x8, [x19, #0x280]
0x00227CFC  7f120579  strh      wzr, [x19, #0x288]
0x00227D00  7f8e02b9  str       wzr, [x19, #0x28c]
0x00227D04  7f220579  strh      wzr, [x19, #0x290]
0x00227D08  7f4a0579  strh      wzr, [x19, #0x2a4]
0x00227D0C  7faa02b9  str       wzr, [x19, #0x2a8]
0x00227D10  7f5a0579  strh      wzr, [x19, #0x2ac]
0x00227D14  7f5a01f9  str       xzr, [x19, #0x2b0]
0x00227D18  685e01f9  str       x8, [x19, #0x2b8]
0x00227D1C  7f820579  strh      wzr, [x19, #0x2c0]
0x00227D20  7fc602b9  str       wzr, [x19, #0x2c4]
```
### 0x2FE300 FDE 0x2FE24C
```asm
0x002FE2EC  1f3801f9  str       xzr, [x0, #0x270]
0x002FE2F0  1f7802b9  str       wzr, [x0, #0x278]
0x002FE2F4  1f9002b9  str       wzr, [x0, #0x290]
0x002FE2F8  1f4401f9  str       xzr, [x0, #0x288]
0x002FE2FC  1f4001f9  str       xzr, [x0, #0x280]
0x002FE300  1fa802b9  str       wzr, [x0, #0x2a8]
0x002FE304  1f5001f9  str       xzr, [x0, #0x2a0]
0x002FE308  1f4c01f9  str       xzr, [x0, #0x298]
0x002FE30C  1fc002b9  str       wzr, [x0, #0x2c0]
0x002FE310  1f5c01f9  str       xzr, [x0, #0x2b8]
0x002FE314  1f5801f9  str       xzr, [x0, #0x2b0]
```

## View_List and session binding
### View_List vtable neighborhood
- 0x76E150: 0x60AC9C
- 0x76E158: 0x14
- 0x76E160: 0x0
- 0x76E168: 0x0
- 0x76E170: 0xD70DC
- 0x76E178: 0xD7214
- 0x76E180: 0x1029C
- 0x76E188: 0x102B8
- 0x76E190: 0x10310
- 0x76E198: 0x10360
- 0x76E1A0: 0xD7218
- 0x76E1A8: 0x27F64
- 0x76E1B0: 0xD63E4
- 0x76E1B8: 0x27F70
- 0x76E1C0: 0xD6888
- 0x76E1C8: 0x27F78
- 0x76E1D0: 0x27F7C
- 0x76E1D8: 0x27F80
- 0x76E1E0: 0xD69A4
- 0x76E1E8: 0xD63E0
- 0x76E1F0: 0xD6B3C
- 0x76E1F8: 0xFFFFFFFFFFFFFFB8

### Type-token direct tail wrappers
0xc8690, 0xc86a4, 0xc86a8

### Type-token relocation cells (candidates)

### STR X to +0x640: 134
#### 0xDBD8, FDE 0xDAA4
```asm
0x0000DBA8  7f9a02f9  str       xzr, [x19, #0x530]
0x0000DBAC  7f9602f9  str       xzr, [x19, #0x528]
0x0000DBB0  7f9202f9  str       xzr, [x19, #0x520]
0x0000DBB4  683a01f9  str       x8, [x19, #0x270]
0x0000DBB8  68c201f9  str       x8, [x19, #0x380]
0x0000DBBC  7f5e02f9  str       xzr, [x19, #0x4b8]
0x0000DBC0  7f5a02f9  str       xzr, [x19, #0x4b0]
0x0000DBC4  7f5602f9  str       xzr, [x19, #0x4a8]
0x0000DBC8  7f5202f9  str       xzr, [x19, #0x4a0]
0x0000DBCC  7f4e02f9  str       xzr, [x19, #0x498]
0x0000DBD0  684a02f9  str       x8, [x19, #0x490]
0x0000DBD4  7f2603f9  str       xzr, [x19, #0x648]
0x0000DBD8  7f2203f9  str       xzr, [x19, #0x640]
0x0000DBDC  7f1e03f9  str       xzr, [x19, #0x638]
0x0000DBE0  7f1a03f9  str       xzr, [x19, #0x630]
0x0000DBE4  7fe602f9  str       xzr, [x19, #0x5c8]
0x0000DBE8  7fe202f9  str       xzr, [x19, #0x5c0]
0x0000DBEC  7fde02f9  str       xzr, [x19, #0x5b8]
0x0000DBF0  7fda02f9  str       xzr, [x19, #0x5b0]
0x0000DBF4  7fd602f9  str       xzr, [x19, #0x5a8]
0x0000DBF8  68d202f9  str       x8, [x19, #0x5a0]
0x0000DBFC  7fae03f9  str       xzr, [x19, #0x758]
0x0000DC00  7faa03f9  str       xzr, [x19, #0x750]
0x0000DC04  7fa603f9  str       xzr, [x19, #0x748]
0x0000DC08  7fa203f9  str       xzr, [x19, #0x740]
0x0000DC0C  7f6e03f9  str       xzr, [x19, #0x6d8]
```
#### 0x13584, FDE 0x133E4
```asm
0x00013554  7f6602f9  str       xzr, [x19, #0x4c8]
0x00013558  7f6202f9  str       xzr, [x19, #0x4c0]
0x0001355C  7fae02f9  str       xzr, [x19, #0x558]
0x00013560  7faa02f9  str       xzr, [x19, #0x550]
0x00013564  7fa602f9  str       xzr, [x19, #0x548]
0x00013568  7fa202f9  str       xzr, [x19, #0x540]
0x0001356C  7fee02f9  str       xzr, [x19, #0x5d8]
0x00013570  7fea02f9  str       xzr, [x19, #0x5d0]
0x00013574  7fe602f9  str       xzr, [x19, #0x5c8]
0x00013578  7fe202f9  str       xzr, [x19, #0x5c0]
0x0001357C  7f2a03f9  str       xzr, [x19, #0x650]
0x00013580  7f2603f9  str       xzr, [x19, #0x648]
0x00013584  7f2203f9  str       xzr, [x19, #0x640]
0x00013588  7f2e01f9  str       xzr, [x19, #0x258]
0x0001358C  7f2a01f9  str       xzr, [x19, #0x250]
0x00013590  7f2601f9  str       xzr, [x19, #0x248]
0x00013594  7f2201f9  str       xzr, [x19, #0x240]
0x00013598  7f1e01f9  str       xzr, [x19, #0x238]
0x0001359C  69220fa9  stp       x9, x8, [x19, #0xf0]
0x000135A0  692212a9  stp       x9, x8, [x19, #0x120]
0x000135A4  692215a9  stp       x9, x8, [x19, #0x150]
0x000135A8  692218a9  stp       x9, x8, [x19, #0x180]
0x000135AC  69221ba9  stp       x9, x8, [x19, #0x1b0]
0x000135B0  69221ea9  stp       x9, x8, [x19, #0x1e0]
0x000135B4  08fcc3d2  mov       x8, #0x1fe000000000
0x000135B8  7f7e0da9  stp       xzr, xzr, [x19, #0xd0]
```
#### 0x30608, FDE 0x30488
```asm
0x000305D8  00013fd6  blr       x8
0x000305DC  602643f9  ldr       x0, [x19, #0x648]
0x000305E0  a00000b4  cbz       x0, #0x305f4
0x000305E4  088c44f8  ldr       x8, [x0, #0x48]!
0x000305E8  080d40f9  ldr       x8, [x8, #0x18]
0x000305EC  00013fd6  blr       x8
0x000305F0  7f2603f9  str       xzr, [x19, #0x648]
0x000305F4  602243f9  ldr       x0, [x19, #0x640]
0x000305F8  a00000b4  cbz       x0, #0x3060c
0x000305FC  088c44f8  ldr       x8, [x0, #0x48]!
0x00030600  080d40f9  ldr       x8, [x8, #0x18]
0x00030604  00013fd6  blr       x8
0x00030608  7f2203f9  str       xzr, [x19, #0x640]
0x0003060C  e00313aa  mov       x0, x19
0x00030610  f44f41a9  ldp       x20, x19, [sp, #0x10]
0x00030614  fd7bc2a8  ldp       x29, x30, [sp], #0x20
0x00030618  02e0ff17  b         #0x28620
```
#### 0x30F04, FDE 0x30E68
```asm
0x00030ED4  680240f9  ldr       x8, [x19]
0x00030ED8  e00313aa  mov       x0, x19
0x00030EDC  085d40f9  ldr       x8, [x8, #0xb8]
0x00030EE0  00013fd6  blr       x8
0x00030EE4  e10240f9  ldr       x1, [x23]
0x00030EE8  e00314aa  mov       x0, x20
0x00030EEC  c20240f9  ldr       x2, [x22]
0x00030EF0  a30240f9  ldr       x3, [x21]
0x00030EF4  c2dcff97  bl        #0x281fc
0x00030EF8  683b00f0  adrp      x8, #0x79f000
0x00030EFC  80621a91  add       x0, x20, #0x698
0x00030F00  085945f9  ldr       x8, [x8, #0xab0]
0x00030F04  9f2203f9  str       xzr, [x20, #0x640]
0x00030F08  9f2603f9  str       xzr, [x20, #0x648]
0x00030F0C  09410091  add       x9, x8, #0x10
0x00030F10  9f2a03f9  str       xzr, [x20, #0x650]
0x00030F14  9f2e03f9  str       xzr, [x20, #0x658]
0x00030F18  9f3203f9  str       xzr, [x20, #0x660]
0x00030F1C  9f3603f9  str       xzr, [x20, #0x668]
0x00030F20  9f3a03f9  str       xzr, [x20, #0x670]
0x00030F24  9f3e03f9  str       xzr, [x20, #0x678]
0x00030F28  9f4203f9  str       xzr, [x20, #0x680]
0x00030F2C  9f4603f9  str       xzr, [x20, #0x688]
0x00030F30  9f220d79  strh      wzr, [x20, #0x690]
0x00030F34  890200f9  str       x9, [x20]
0x00030F38  09e10291  add       x9, x8, #0xb8
```
#### 0x31364, FDE 0x312A8
```asm
0x00031334  e00318aa  mov       x0, x24
0x00031338  085d40f9  ldr       x8, [x8, #0xb8]
0x0003133C  00013fd6  blr       x8
0x00031340  e00314aa  mov       x0, x20
0x00031344  e10313aa  mov       x1, x19
0x00031348  e20317aa  mov       x2, x23
0x0003134C  e30319aa  mov       x3, x25
0x00031350  abdbff97  bl        #0x281fc
0x00031354  683b00d0  adrp      x8, #0x79f000
0x00031358  f70314aa  mov       x23, x20
0x0003135C  08ad45f9  ldr       x8, [x8, #0xb58]
0x00031360  0a008092  mov       x10, #-1
0x00031364  9f2203f9  str       xzr, [x20, #0x640]
0x00031368  9f2603f9  str       xzr, [x20, #0x648]
0x0003136C  9f2a03f9  str       xzr, [x20, #0x650]
0x00031370  09e10291  add       x9, x8, #0xb8
0x00031374  9f2e03f9  str       xzr, [x20, #0x658]
0x00031378  9f6203f9  str       xzr, [x20, #0x6c0]
0x0003137C  9f6603f9  str       xzr, [x20, #0x6c8]
0x00031380  9f6a03f9  str       xzr, [x20, #0x6d0]
0x00031384  9f6e03f9  str       xzr, [x20, #0x6d8]
0x00031388  9fe206b9  str       wzr, [x20, #0x6e0]
0x0003138C  9fda0d79  strh      wzr, [x20, #0x6ec]
0x00031390  9f7a03f9  str       xzr, [x20, #0x6f0]
0x00031394  9f7e03f9  str       xzr, [x20, #0x6f8]
0x00031398  9f8203f9  str       xzr, [x20, #0x700]
```
#### 0x31934, FDE 0x31878
```asm
0x00031904  e00317aa  mov       x0, x23
0x00031908  085d40f9  ldr       x8, [x8, #0xb8]
0x0003190C  00013fd6  blr       x8
0x00031910  e00314aa  mov       x0, x20
0x00031914  e10313aa  mov       x1, x19
0x00031918  e20318aa  mov       x2, x24
0x0003191C  e30319aa  mov       x3, x25
0x00031920  37daff97  bl        #0x281fc
0x00031924  683b00d0  adrp      x8, #0x79f000
0x00031928  f80314aa  mov       x24, x20
0x0003192C  08ad45f9  ldr       x8, [x8, #0xb58]
0x00031930  0a008092  mov       x10, #-1
0x00031934  9f2203f9  str       xzr, [x20, #0x640]
0x00031938  9f2603f9  str       xzr, [x20, #0x648]
0x0003193C  9f2a03f9  str       xzr, [x20, #0x650]
0x00031940  09e10291  add       x9, x8, #0xb8
0x00031944  9f2e03f9  str       xzr, [x20, #0x658]
0x00031948  9f6203f9  str       xzr, [x20, #0x6c0]
0x0003194C  9f6603f9  str       xzr, [x20, #0x6c8]
0x00031950  9f6a03f9  str       xzr, [x20, #0x6d0]
0x00031954  9f6e03f9  str       xzr, [x20, #0x6d8]
0x00031958  9fe206b9  str       wzr, [x20, #0x6e0]
0x0003195C  9fda0d79  strh      wzr, [x20, #0x6ec]
0x00031960  9f7a03f9  str       xzr, [x20, #0x6f0]
0x00031964  9f7e03f9  str       xzr, [x20, #0x6f8]
0x00031968  9f8203f9  str       xzr, [x20, #0x700]
```
#### 0x31B68, FDE 0x31ABC
```asm
0x00031B38  ac710a94  bl        #0x2ce1e8
0x00031B3C  a0835ff8  ldur      x0, [x29, #-8]
0x00031B40  800000b4  cbz       x0, #0x31b50
0x00031B44  088c44f8  ldr       x8, [x0, #0x48]!
0x00031B48  080d40f9  ldr       x8, [x8, #0x18]
0x00031B4C  00013fd6  blr       x8
0x00031B50  602243f9  ldr       x0, [x19, #0x640]
0x00031B54  800000b4  cbz       x0, #0x31b64
0x00031B58  088c44f8  ldr       x8, [x0, #0x48]!
0x00031B5C  080d40f9  ldr       x8, [x8, #0x18]
0x00031B60  00013fd6  blr       x8
0x00031B64  f60740f9  ldr       x22, [sp, #8]
0x00031B68  762203f9  str       x22, [x19, #0x640]
0x00031B6C  742643f9  ldr       x20, [x19, #0x648]
0x00031B70  540100b4  cbz       x20, #0x31b98
0x00031B74  f50314aa  mov       x21, x20
0x00031B78  a88e44f8  ldr       x8, [x21, #0x48]!
0x00031B7C  e00315aa  mov       x0, x21
0x00031B80  080940f9  ldr       x8, [x8, #0x10]
0x00031B84  00013fd6  blr       x8
0x00031B88  a80240f9  ldr       x8, [x21]
0x00031B8C  e00315aa  mov       x0, x21
0x00031B90  080940f9  ldr       x8, [x8, #0x10]
0x00031B94  00013fd6  blr       x8
0x00031B98  c05640f9  ldr       x0, [x22, #0xa8]
0x00031B9C  d45600f9  str       x20, [x22, #0xa8]
```
#### 0x31D40, FDE 0x31D14
```asm
0x00031D14  fd7bbea9  stp       x29, x30, [sp, #-0x20]!
0x00031D18  f30b00f9  str       x19, [sp, #0x10]
0x00031D1C  fd030091  mov       x29, sp
0x00031D20  f30300aa  mov       x19, x0
0x00031D24  002043f9  ldr       x0, [x0, #0x640]
0x00031D28  e00100b4  cbz       x0, #0x31d64
0x00031D2C  68025f39  ldrb      w8, [x19, #0x7c0]
0x00031D30  48020034  cbz       w8, #0x31d78
0x00031D34  0a490a94  bl        #0x2c415c
0x00031D38  c0020036  tbz       w0, #0, #0x31d90
0x00031D3C  602243f9  ldr       x0, [x19, #0x640]
0x00031D40  7f2203f9  str       xzr, [x19, #0x640]
0x00031D44  200100b4  cbz       x0, #0x31d68
0x00031D48  088c44f8  ldr       x8, [x0, #0x48]!
0x00031D4C  080d40f9  ldr       x8, [x8, #0x18]
0x00031D50  00013fd6  blr       x8
0x00031D54  20008052  mov       w0, #1
0x00031D58  f30b40f9  ldr       x19, [sp, #0x10]
0x00031D5C  fd7bc2a8  ldp       x29, x30, [sp], #0x20
0x00031D60  c0035fd6  ret       
0x00031D64  7f2203f9  str       xzr, [x19, #0x640]
0x00031D68  20008052  mov       w0, #1
0x00031D6C  f30b40f9  ldr       x19, [sp, #0x10]
0x00031D70  fd7bc2a8  ldp       x29, x30, [sp], #0x20
0x00031D74  c0035fd6  ret       
```
#### 0x31D64, FDE 0x31D14
```asm
0x00031D34  0a490a94  bl        #0x2c415c
0x00031D38  c0020036  tbz       w0, #0, #0x31d90
0x00031D3C  602243f9  ldr       x0, [x19, #0x640]
0x00031D40  7f2203f9  str       xzr, [x19, #0x640]
0x00031D44  200100b4  cbz       x0, #0x31d68
0x00031D48  088c44f8  ldr       x8, [x0, #0x48]!
0x00031D4C  080d40f9  ldr       x8, [x8, #0x18]
0x00031D50  00013fd6  blr       x8
0x00031D54  20008052  mov       w0, #1
0x00031D58  f30b40f9  ldr       x19, [sp, #0x10]
0x00031D5C  fd7bc2a8  ldp       x29, x30, [sp], #0x20
0x00031D60  c0035fd6  ret       
0x00031D64  7f2203f9  str       xzr, [x19, #0x640]
0x00031D68  20008052  mov       w0, #1
0x00031D6C  f30b40f9  ldr       x19, [sp, #0x10]
0x00031D70  fd7bc2a8  ldp       x29, x30, [sp], #0x20
0x00031D74  c0035fd6  ret       
0x00031D78  a4480a94  bl        #0x2c4008
0x00031D7C  602243f9  ldr       x0, [x19, #0x640]
0x00031D80  28008052  mov       w8, #1
0x00031D84  68021f39  strb      w8, [x19, #0x7c0]
0x00031D88  f5480a94  bl        #0x2c415c
0x00031D8C  80fd0737  tbnz      w0, #0, #0x31d3c
0x00031D90  e0031f2a  mov       w0, wzr
0x00031D94  f30b40f9  ldr       x19, [sp, #0x10]
0x00031D98  fd7bc2a8  ldp       x29, x30, [sp], #0x20
```
#### 0x363D0, FDE 0x36338
```asm
0x000363A0  c82e00b0  adrp      x8, #0x60f000
0x000363A4  080d1a91  add       x8, x8, #0x683
0x000363A8  7f0200f1  cmp       x19, #0
0x000363AC  0101939a  csel      x1, x8, x19, eq
0x000363B0  a0630091  add       x0, x29, #0x18
0x000363B4  084fff97  bl        #0x9fd4
0x000363B8  802243f9  ldr       x0, [x20, #0x640]
0x000363BC  800000b4  cbz       x0, #0x363cc
0x000363C0  088c44f8  ldr       x8, [x0, #0x48]!
0x000363C4  080d40f9  ldr       x8, [x8, #0x18]
0x000363C8  00013fd6  blr       x8
0x000363CC  a80f40f9  ldr       x8, [x29, #0x18]
0x000363D0  882203f9  str       x8, [x20, #0x640]
0x000363D4  e00740f9  ldr       x0, [sp, #8]
0x000363D8  800000b4  cbz       x0, #0x363e8
0x000363DC  088c44f8  ldr       x8, [x0, #0x48]!
0x000363E0  080d40f9  ldr       x8, [x8, #0x18]
0x000363E4  00013fd6  blr       x8
0x000363E8  f44f43a9  ldp       x20, x19, [sp, #0x30]
0x000363EC  f51340f9  ldr       x21, [sp, #0x20]
0x000363F0  fd7b41a9  ldp       x29, x30, [sp, #0x10]
0x000363F4  ff030191  add       sp, sp, #0x40
0x000363F8  c0035fd6  ret       
```
#### 0x3649C, FDE 0x363FC
```asm
0x0003646C  c82e00b0  adrp      x8, #0x60f000
0x00036470  080d1a91  add       x8, x8, #0x683
0x00036474  7f0200f1  cmp       x19, #0
0x00036478  0101939a  csel      x1, x8, x19, eq
0x0003647C  e0230091  add       x0, sp, #8
0x00036480  d54eff97  bl        #0x9fd4
0x00036484  802243f9  ldr       x0, [x20, #0x640]
0x00036488  800000b4  cbz       x0, #0x36498
0x0003648C  088c44f8  ldr       x8, [x0, #0x48]!
0x00036490  080d40f9  ldr       x8, [x8, #0x18]
0x00036494  00013fd6  blr       x8
0x00036498  e02340a9  ldp       x0, x8, [sp]
0x0003649C  882203f9  str       x8, [x20, #0x640]
0x000364A0  800000b4  cbz       x0, #0x364b0
0x000364A4  088c44f8  ldr       x8, [x0, #0x48]!
0x000364A8  080d40f9  ldr       x8, [x8, #0x18]
0x000364AC  00013fd6  blr       x8
0x000364B0  f44f43a9  ldp       x20, x19, [sp, #0x30]
0x000364B4  f65742a9  ldp       x22, x21, [sp, #0x20]
0x000364B8  fd7b41a9  ldp       x29, x30, [sp, #0x10]
0x000364BC  ff030191  add       sp, sp, #0x40
0x000364C0  c0035fd6  ret       
```
#### 0x36D14, FDE 0x36CB4
```asm
0x00036CE4  e80000b4  cbz       x8, #0x36d00
0x00036CE8  60c21991  add       x0, x19, #0x670
0x00036CEC  7f3603f9  str       xzr, [x19, #0x668]
0x00036CF0  7f3203f9  str       xzr, [x19, #0x660]
0x00036CF4  7f2e03f9  str       xzr, [x19, #0x658]
0x00036CF8  7f2a03f9  str       xzr, [x19, #0x650]
0x00036CFC  00013fd6  blr       x8
0x00036D00  602243f9  ldr       x0, [x19, #0x640]
0x00036D04  a00000b4  cbz       x0, #0x36d18
0x00036D08  088c44f8  ldr       x8, [x0, #0x48]!
0x00036D0C  080d40f9  ldr       x8, [x8, #0x18]
0x00036D10  00013fd6  blr       x8
0x00036D14  7f2203f9  str       xzr, [x19, #0x640]
0x00036D18  e00313aa  mov       x0, x19
0x00036D1C  f30b40f9  ldr       x19, [sp, #0x10]
0x00036D20  fd7bc2a8  ldp       x29, x30, [sp], #0x20
0x00036D24  3fc6ff17  b         #0x28620
```
#### 0x36D88, FDE 0x36D28
```asm
0x00036D58  e80000b4  cbz       x8, #0x36d74
0x00036D5C  60c21991  add       x0, x19, #0x670
0x00036D60  7f3603f9  str       xzr, [x19, #0x668]
0x00036D64  7f3203f9  str       xzr, [x19, #0x660]
0x00036D68  7f2e03f9  str       xzr, [x19, #0x658]
0x00036D6C  7f2a03f9  str       xzr, [x19, #0x650]
0x00036D70  00013fd6  blr       x8
0x00036D74  602243f9  ldr       x0, [x19, #0x640]
0x00036D78  a00000b4  cbz       x0, #0x36d8c
0x00036D7C  088c44f8  ldr       x8, [x0, #0x48]!
0x00036D80  080d40f9  ldr       x8, [x8, #0x18]
0x00036D84  00013fd6  blr       x8
0x00036D88  7f2203f9  str       xzr, [x19, #0x640]
0x00036D8C  e00313aa  mov       x0, x19
0x00036D90  f30b40f9  ldr       x19, [sp, #0x10]
0x00036D94  fd7bc2a8  ldp       x29, x30, [sp], #0x20
0x00036D98  22c6ff17  b         #0x28620
```
#### 0x37278, FDE 0x371C0
```asm
0x00037248  080340f9  ldr       x8, [x24]
0x0003724C  e00318aa  mov       x0, x24
0x00037250  085d40f9  ldr       x8, [x8, #0xb8]
0x00037254  00013fd6  blr       x8
0x00037258  e00314aa  mov       x0, x20
0x0003725C  e10313aa  mov       x1, x19
0x00037260  e20317aa  mov       x2, x23
0x00037264  e30319aa  mov       x3, x25
0x00037268  e5c3ff97  bl        #0x281fc
0x0003726C  483b0090  adrp      x8, #0x79f000
0x00037270  f70314aa  mov       x23, x20
0x00037274  08b945f9  ldr       x8, [x8, #0xb70]
0x00037278  9f2203f9  str       xzr, [x20, #0x640]
0x0003727C  9f2a03f9  str       xzr, [x20, #0x650]
0x00037280  09c10291  add       x9, x8, #0xb0
0x00037284  9f2e03f9  str       xzr, [x20, #0x658]
0x00037288  9f3203f9  str       xzr, [x20, #0x660]
0x0003728C  9f3603f9  str       xzr, [x20, #0x668]
0x00037290  9f6a03f9  str       xzr, [x20, #0x6d0]
0x00037294  9fda06b9  str       wzr, [x20, #0x6d8]
0x00037298  9fe206b9  str       wzr, [x20, #0x6e0]
0x0003729C  d40200f9  str       x20, [x22]
0x000372A0  e98e04f8  str       x9, [x23, #0x48]!
0x000372A4  09410091  add       x9, x8, #0x10
0x000372A8  08c10391  add       x8, x8, #0xf0
0x000372AC  e00317aa  mov       x0, x23
```
#### 0x375A0, FDE 0x374E8
```asm
0x00037570  e80240f9  ldr       x8, [x23]
0x00037574  e00317aa  mov       x0, x23
0x00037578  085d40f9  ldr       x8, [x8, #0xb8]
0x0003757C  00013fd6  blr       x8
0x00037580  e00314aa  mov       x0, x20
0x00037584  e10313aa  mov       x1, x19
0x00037588  e20318aa  mov       x2, x24
0x0003758C  e30319aa  mov       x3, x25
0x00037590  1bc3ff97  bl        #0x281fc
0x00037594  483b0090  adrp      x8, #0x79f000
0x00037598  f80314aa  mov       x24, x20
0x0003759C  08b945f9  ldr       x8, [x8, #0xb70]
0x000375A0  9f2203f9  str       xzr, [x20, #0x640]
0x000375A4  9f2a03f9  str       xzr, [x20, #0x650]
0x000375A8  09c10291  add       x9, x8, #0xb0
0x000375AC  9f2e03f9  str       xzr, [x20, #0x658]
0x000375B0  9f3203f9  str       xzr, [x20, #0x660]
0x000375B4  9f3603f9  str       xzr, [x20, #0x668]
0x000375B8  9f6a03f9  str       xzr, [x20, #0x6d0]
0x000375BC  9fda06b9  str       wzr, [x20, #0x6d8]
0x000375C0  9fe206b9  str       wzr, [x20, #0x6e0]
0x000375C4  d40200f9  str       x20, [x22]
0x000375C8  098f04f8  str       x9, [x24, #0x48]!
0x000375CC  09410091  add       x9, x8, #0x10
0x000375D0  08c10391  add       x8, x8, #0xf0
0x000375D4  e00318aa  mov       x0, x24
```
#### 0x37F8C, FDE 0x37D20
```asm
0x00037F5C  490c0094  bl        #0x3b080
0x00037F60  f70300aa  mov       x23, x0
0x00037F64  a00000b4  cbz       x0, #0x37f78
0x00037F68  e00317aa  mov       x0, x23
0x00037F6C  088c44f8  ldr       x8, [x0, #0x48]!
0x00037F70  080940f9  ldr       x8, [x8, #0x10]
0x00037F74  00013fd6  blr       x8
0x00037F78  802243f9  ldr       x0, [x20, #0x640]
0x00037F7C  800000b4  cbz       x0, #0x37f8c
0x00037F80  088c44f8  ldr       x8, [x0, #0x48]!
0x00037F84  080d40f9  ldr       x8, [x8, #0x18]
0x00037F88  00013fd6  blr       x8
0x00037F8C  972203f9  str       x23, [x20, #0x640]
0x00037F90  b7831ff8  stur      x23, [x29, #-8]
0x00037F94  b70000b4  cbz       x23, #0x37fa8
0x00037F98  e88e44f8  ldr       x8, [x23, #0x48]!
0x00037F9C  e00317aa  mov       x0, x23
0x00037FA0  080940f9  ldr       x8, [x8, #0x10]
0x00037FA4  00013fd6  blr       x8
0x00037FA8  a12300d1  sub       x1, x29, #8
0x00037FAC  e00315aa  mov       x0, x21
0x00037FB0  16e60994  bl        #0x2b1808
0x00037FB4  a0835ff8  ldur      x0, [x29, #-8]
0x00037FB8  a00000b4  cbz       x0, #0x37fcc
0x00037FBC  088c44f8  ldr       x8, [x0, #0x48]!
0x00037FC0  080d40f9  ldr       x8, [x8, #0x18]
```
#### 0x3A7B8, FDE 0x3A758
```asm
0x0003A788  a00000b4  cbz       x0, #0x3a79c
0x0003A78C  088c44f8  ldr       x8, [x0, #0x48]!
0x0003A790  080d40f9  ldr       x8, [x8, #0x18]
0x0003A794  00013fd6  blr       x8
0x0003A798  7f1a06f9  str       xzr, [x19, #0xc30]
0x0003A79C  60421991  add       x0, x19, #0x650
0x0003A7A0  a3000094  bl        #0x3aa2c
0x0003A7A4  602243f9  ldr       x0, [x19, #0x640]
0x0003A7A8  a00000b4  cbz       x0, #0x3a7bc
0x0003A7AC  088c44f8  ldr       x8, [x0, #0x48]!
0x0003A7B0  080d40f9  ldr       x8, [x8, #0x18]
0x0003A7B4  00013fd6  blr       x8
0x0003A7B8  7f2203f9  str       xzr, [x19, #0x640]
0x0003A7BC  e00313aa  mov       x0, x19
0x0003A7C0  f30b40f9  ldr       x19, [sp, #0x10]
0x0003A7C4  fd7bc2a8  ldp       x29, x30, [sp], #0x20
0x0003A7C8  96b7ff17  b         #0x28620
```
#### 0x3A82C, FDE 0x3A7CC
```asm
0x0003A7FC  a00000b4  cbz       x0, #0x3a810
0x0003A800  088c44f8  ldr       x8, [x0, #0x48]!
0x0003A804  080d40f9  ldr       x8, [x8, #0x18]
0x0003A808  00013fd6  blr       x8
0x0003A80C  7f1a06f9  str       xzr, [x19, #0xc30]
0x0003A810  60421991  add       x0, x19, #0x650
0x0003A814  86000094  bl        #0x3aa2c
0x0003A818  602243f9  ldr       x0, [x19, #0x640]
0x0003A81C  a00000b4  cbz       x0, #0x3a830
0x0003A820  088c44f8  ldr       x8, [x0, #0x48]!
0x0003A824  080d40f9  ldr       x8, [x8, #0x18]
0x0003A828  00013fd6  blr       x8
0x0003A82C  7f2203f9  str       xzr, [x19, #0x640]
0x0003A830  e00313aa  mov       x0, x19
0x0003A834  f30b40f9  ldr       x19, [sp, #0x10]
0x0003A838  fd7bc2a8  ldp       x29, x30, [sp], #0x20
0x0003A83C  79b7ff17  b         #0x28620
```
#### 0x3AEF8, FDE 0x3AE5C
```asm
0x0003AEC8  680240f9  ldr       x8, [x19]
0x0003AECC  e00313aa  mov       x0, x19
0x0003AED0  085d40f9  ldr       x8, [x8, #0xb8]
0x0003AED4  00013fd6  blr       x8
0x0003AED8  e10240f9  ldr       x1, [x23]
0x0003AEDC  e00314aa  mov       x0, x20
0x0003AEE0  c20240f9  ldr       x2, [x22]
0x0003AEE4  a30240f9  ldr       x3, [x21]
0x0003AEE8  c5b4ff97  bl        #0x281fc
0x0003AEEC  283b00b0  adrp      x8, #0x79f000
0x0003AEF0  e00314aa  mov       x0, x20
0x0003AEF4  08e145f9  ldr       x8, [x8, #0xbc0]
0x0003AEF8  9f2203f9  str       xzr, [x20, #0x640]
0x0003AEFC  9f221939  strb      wzr, [x20, #0x648]
0x0003AF00  09410391  add       x9, x8, #0xd0
0x0003AF04  0a410491  add       x10, x8, #0x110
0x0003AF08  08410091  add       x8, x8, #0x10
0x0003AF0C  9f6a03f9  str       xzr, [x20, #0x6d0]
0x0003AF10  9f6e03f9  str       xzr, [x20, #0x6d8]
0x0003AF14  9f7203f9  str       xzr, [x20, #0x6e0]
0x0003AF18  9f7603f9  str       xzr, [x20, #0x6e8]
0x0003AF1C  f65742a9  ldp       x22, x21, [sp, #0x20]
0x0003AF20  9faa03f9  str       xzr, [x20, #0x750]
0x0003AF24  9fae03f9  str       xzr, [x20, #0x758]
0x0003AF28  9fb203f9  str       xzr, [x20, #0x760]
0x0003AF2C  9fb603f9  str       xzr, [x20, #0x768]
```
#### 0x3BF0C, FDE 0x3BCA0
```asm
0x0003BEDC  69fcff97  bl        #0x3b080
0x0003BEE0  f70300aa  mov       x23, x0
0x0003BEE4  a00000b4  cbz       x0, #0x3bef8
0x0003BEE8  e00317aa  mov       x0, x23
0x0003BEEC  088c44f8  ldr       x8, [x0, #0x48]!
0x0003BEF0  080940f9  ldr       x8, [x8, #0x10]
0x0003BEF4  00013fd6  blr       x8
0x0003BEF8  802243f9  ldr       x0, [x20, #0x640]
0x0003BEFC  800000b4  cbz       x0, #0x3bf0c
0x0003BF00  088c44f8  ldr       x8, [x0, #0x48]!
0x0003BF04  080d40f9  ldr       x8, [x8, #0x18]
0x0003BF08  00013fd6  blr       x8
0x0003BF0C  972203f9  str       x23, [x20, #0x640]
0x0003BF10  b7831ff8  stur      x23, [x29, #-8]
0x0003BF14  b70000b4  cbz       x23, #0x3bf28
0x0003BF18  e88e44f8  ldr       x8, [x23, #0x48]!
0x0003BF1C  e00317aa  mov       x0, x23
0x0003BF20  080940f9  ldr       x8, [x8, #0x10]
0x0003BF24  00013fd6  blr       x8
0x0003BF28  a12300d1  sub       x1, x29, #8
0x0003BF2C  e00315aa  mov       x0, x21
0x0003BF30  36d60994  bl        #0x2b1808
0x0003BF34  a0835ff8  ldur      x0, [x29, #-8]
0x0003BF38  a00000b4  cbz       x0, #0x3bf4c
0x0003BF3C  088c44f8  ldr       x8, [x0, #0x48]!
0x0003BF40  080d40f9  ldr       x8, [x8, #0x18]
```
#### 0x3E588, FDE 0x3E528
```asm
0x0003E558  a00000b4  cbz       x0, #0x3e56c
0x0003E55C  088c44f8  ldr       x8, [x0, #0x48]!
0x0003E560  080d40f9  ldr       x8, [x8, #0x18]
0x0003E564  00013fd6  blr       x8
0x0003E568  7fca06f9  str       xzr, [x19, #0xd90]
0x0003E56C  60421991  add       x0, x19, #0x650
0x0003E570  a3000094  bl        #0x3e7fc
0x0003E574  602243f9  ldr       x0, [x19, #0x640]
0x0003E578  a00000b4  cbz       x0, #0x3e58c
0x0003E57C  088c44f8  ldr       x8, [x0, #0x48]!
0x0003E580  080d40f9  ldr       x8, [x8, #0x18]
0x0003E584  00013fd6  blr       x8
0x0003E588  7f2203f9  str       xzr, [x19, #0x640]
0x0003E58C  e00313aa  mov       x0, x19
0x0003E590  f30b40f9  ldr       x19, [sp, #0x10]
0x0003E594  fd7bc2a8  ldp       x29, x30, [sp], #0x20
0x0003E598  22a8ff17  b         #0x28620
```
#### 0x3E5FC, FDE 0x3E59C
```asm
0x0003E5CC  a00000b4  cbz       x0, #0x3e5e0
0x0003E5D0  088c44f8  ldr       x8, [x0, #0x48]!
0x0003E5D4  080d40f9  ldr       x8, [x8, #0x18]
0x0003E5D8  00013fd6  blr       x8
0x0003E5DC  7fca06f9  str       xzr, [x19, #0xd90]
0x0003E5E0  60421991  add       x0, x19, #0x650
0x0003E5E4  86000094  bl        #0x3e7fc
0x0003E5E8  602243f9  ldr       x0, [x19, #0x640]
0x0003E5EC  a00000b4  cbz       x0, #0x3e600
0x0003E5F0  088c44f8  ldr       x8, [x0, #0x48]!
0x0003E5F4  080d40f9  ldr       x8, [x8, #0x18]
0x0003E5F8  00013fd6  blr       x8
0x0003E5FC  7f2203f9  str       xzr, [x19, #0x640]
0x0003E600  e00313aa  mov       x0, x19
0x0003E604  f30b40f9  ldr       x19, [sp, #0x10]
0x0003E608  fd7bc2a8  ldp       x29, x30, [sp], #0x20
0x0003E60C  05a8ff17  b         #0x28620
```
#### 0x3E854, FDE 0x3E7FC
```asm
0x0003E824  685e43f9  ldr       x8, [x19, #0x6b8]
0x0003E828  e80000b4  cbz       x8, #0x3e844
0x0003E82C  60421b91  add       x0, x19, #0x6d0
0x0003E830  7f6603f9  str       xzr, [x19, #0x6c8]
0x0003E834  7f6203f9  str       xzr, [x19, #0x6c0]
0x0003E838  7f5e03f9  str       xzr, [x19, #0x6b8]
0x0003E83C  7f5a03f9  str       xzr, [x19, #0x6b0]
0x0003E840  00013fd6  blr       x8
0x0003E844  681e43f9  ldr       x8, [x19, #0x638]
0x0003E848  e80000b4  cbz       x8, #0x3e864
0x0003E84C  60421991  add       x0, x19, #0x650
0x0003E850  7f2603f9  str       xzr, [x19, #0x648]
0x0003E854  7f2203f9  str       xzr, [x19, #0x640]
0x0003E858  7f1e03f9  str       xzr, [x19, #0x638]
0x0003E85C  7f1a03f9  str       xzr, [x19, #0x630]
0x0003E860  00013fd6  blr       x8
0x0003E864  68de42f9  ldr       x8, [x19, #0x5b8]
0x0003E868  e80000b4  cbz       x8, #0x3e884
0x0003E86C  60421791  add       x0, x19, #0x5d0
0x0003E870  7fe602f9  str       xzr, [x19, #0x5c8]
0x0003E874  7fe202f9  str       xzr, [x19, #0x5c0]
0x0003E878  7fde02f9  str       xzr, [x19, #0x5b8]
0x0003E87C  7fda02f9  str       xzr, [x19, #0x5b0]
0x0003E880  00013fd6  blr       x8
0x0003E884  60c642f9  ldr       x0, [x19, #0x588]
0x0003E888  a00000b4  cbz       x0, #0x3e89c
```
#### 0x3ED28, FDE 0x3EC8C
```asm
0x0003ECF8  680240f9  ldr       x8, [x19]
0x0003ECFC  e00313aa  mov       x0, x19
0x0003ED00  085d40f9  ldr       x8, [x8, #0xb8]
0x0003ED04  00013fd6  blr       x8
0x0003ED08  e10240f9  ldr       x1, [x23]
0x0003ED0C  e00314aa  mov       x0, x20
0x0003ED10  c20240f9  ldr       x2, [x22]
0x0003ED14  a30240f9  ldr       x3, [x21]
0x0003ED18  39a5ff97  bl        #0x281fc
0x0003ED1C  083b00b0  adrp      x8, #0x79f000
0x0003ED20  e00314aa  mov       x0, x20
0x0003ED24  082d46f9  ldr       x8, [x8, #0xc58]
0x0003ED28  9f2203f9  str       xzr, [x20, #0x640]
0x0003ED2C  9f221939  strb      wzr, [x20, #0x648]
0x0003ED30  09410391  add       x9, x8, #0xd0
0x0003ED34  0a410491  add       x10, x8, #0x110
0x0003ED38  08410091  add       x8, x8, #0x10
0x0003ED3C  9f6a03f9  str       xzr, [x20, #0x6d0]
0x0003ED40  9f6e03f9  str       xzr, [x20, #0x6d8]
0x0003ED44  9f7203f9  str       xzr, [x20, #0x6e0]
0x0003ED48  9f7603f9  str       xzr, [x20, #0x6e8]
0x0003ED4C  f65742a9  ldp       x22, x21, [sp, #0x20]
0x0003ED50  9faa03f9  str       xzr, [x20, #0x750]
0x0003ED54  9fae03f9  str       xzr, [x20, #0x758]
0x0003ED58  9fb203f9  str       xzr, [x20, #0x760]
0x0003ED5C  9fb603f9  str       xzr, [x20, #0x768]
```
#### 0x3F3D8, FDE 0x3F338
```asm
0x0003F3A8  882e0090  adrp      x8, #0x60f000
0x0003F3AC  080d1a91  add       x8, x8, #0x683
0x0003F3B0  7f0200f1  cmp       x19, #0
0x0003F3B4  0101939a  csel      x1, x8, x19, eq
0x0003F3B8  e0230091  add       x0, sp, #8
0x0003F3BC  062bff97  bl        #0x9fd4
0x0003F3C0  802243f9  ldr       x0, [x20, #0x640]
0x0003F3C4  800000b4  cbz       x0, #0x3f3d4
0x0003F3C8  088c44f8  ldr       x8, [x0, #0x48]!
0x0003F3CC  080d40f9  ldr       x8, [x8, #0x18]
0x0003F3D0  00013fd6  blr       x8
0x0003F3D4  e02340a9  ldp       x0, x8, [sp]
0x0003F3D8  882203f9  str       x8, [x20, #0x640]
0x0003F3DC  800000b4  cbz       x0, #0x3f3ec
0x0003F3E0  088c44f8  ldr       x8, [x0, #0x48]!
0x0003F3E4  080d40f9  ldr       x8, [x8, #0x18]
0x0003F3E8  00013fd6  blr       x8
0x0003F3EC  f44f43a9  ldp       x20, x19, [sp, #0x30]
0x0003F3F0  f65742a9  ldp       x22, x21, [sp, #0x20]
0x0003F3F4  fd7b41a9  ldp       x29, x30, [sp, #0x10]
0x0003F3F8  ff030191  add       sp, sp, #0x40
0x0003F3FC  c0035fd6  ret       
```
#### 0x4049C, FDE 0x40444
```asm
0x0004046C  0aa004a9  stp       x10, x8, [x0, #0x48]
0x00040470  002843f9  ldr       x0, [x0, #0x650]
0x00040474  a00000b4  cbz       x0, #0x40488
0x00040478  088c44f8  ldr       x8, [x0, #0x48]!
0x0004047C  080d40f9  ldr       x8, [x8, #0x18]
0x00040480  00013fd6  blr       x8
0x00040484  7f2a03f9  str       xzr, [x19, #0x650]
0x00040488  602243f9  ldr       x0, [x19, #0x640]
0x0004048C  a00000b4  cbz       x0, #0x404a0
0x00040490  088c44f8  ldr       x8, [x0, #0x48]!
0x00040494  080d40f9  ldr       x8, [x8, #0x18]
0x00040498  00013fd6  blr       x8
0x0004049C  7f2203f9  str       xzr, [x19, #0x640]
0x000404A0  e00313aa  mov       x0, x19
0x000404A4  f30b40f9  ldr       x19, [sp, #0x10]
0x000404A8  fd7bc2a8  ldp       x29, x30, [sp], #0x20
0x000404AC  5da0ff17  b         #0x28620
```
#### 0x40508, FDE 0x404B0
```asm
0x000404D8  0aa004a9  stp       x10, x8, [x0, #0x48]
0x000404DC  002843f9  ldr       x0, [x0, #0x650]
0x000404E0  a00000b4  cbz       x0, #0x404f4
0x000404E4  088c44f8  ldr       x8, [x0, #0x48]!
0x000404E8  080d40f9  ldr       x8, [x8, #0x18]
0x000404EC  00013fd6  blr       x8
0x000404F0  7f2a03f9  str       xzr, [x19, #0x650]
0x000404F4  602243f9  ldr       x0, [x19, #0x640]
0x000404F8  a00000b4  cbz       x0, #0x4050c
0x000404FC  088c44f8  ldr       x8, [x0, #0x48]!
0x00040500  080d40f9  ldr       x8, [x8, #0x18]
0x00040504  00013fd6  blr       x8
0x00040508  7f2203f9  str       xzr, [x19, #0x640]
0x0004050C  e00313aa  mov       x0, x19
0x00040510  f30b40f9  ldr       x19, [sp, #0x10]
0x00040514  fd7bc2a8  ldp       x29, x30, [sp], #0x20
0x00040518  42a0ff17  b         #0x28620
```
#### 0x409E0, FDE 0x40928
```asm
0x000409B0  e80240f9  ldr       x8, [x23]
0x000409B4  e00317aa  mov       x0, x23
0x000409B8  085d40f9  ldr       x8, [x8, #0xb8]
0x000409BC  00013fd6  blr       x8
0x000409C0  e00314aa  mov       x0, x20
0x000409C4  e10313aa  mov       x1, x19
0x000409C8  e20318aa  mov       x2, x24
0x000409CC  e30319aa  mov       x3, x25
0x000409D0  0b9eff97  bl        #0x281fc
0x000409D4  e83a00f0  adrp      x8, #0x79f000
0x000409D8  f80314aa  mov       x24, x20
0x000409DC  080546f9  ldr       x8, [x8, #0xc08]
0x000409E0  9f2203f9  str       xzr, [x20, #0x640]
0x000409E4  9f2603f9  str       xzr, [x20, #0x648]
0x000409E8  09c10291  add       x9, x8, #0xb0
0x000409EC  9f2a03f9  str       xzr, [x20, #0x650]
0x000409F0  d40200f9  str       x20, [x22]
0x000409F4  098f04f8  str       x9, [x24, #0x48]!
0x000409F8  09410091  add       x9, x8, #0x10
0x000409FC  08c10391  add       x8, x8, #0xf0
0x00040A00  882a00f9  str       x8, [x20, #0x50]
0x00040A04  08cc8052  mov       w8, #0x660
0x00040A08  895e00a9  stp       x9, x23, [x20]
0x00040A0C  e00318aa  mov       x0, x24
0x00040A10  942201a9  stp       x20, x8, [x20, #0x10]
0x00040A14  08028052  mov       w8, #0x10
```
#### 0x41308, FDE 0x410D4
```asm
0x000412D8  a88358f8  ldur      x8, [x29, #-0x78]
0x000412DC  a80000b4  cbz       x8, #0x412f0
0x000412E0  e00315aa  mov       x0, x21
0x000412E4  bf7f39a9  stp       xzr, xzr, [x29, #-0x70]
0x000412E8  bf7f38a9  stp       xzr, xzr, [x29, #-0x80]
0x000412EC  00013fd6  blr       x8
0x000412F0  c12e00f0  adrp      x1, #0x61c000
0x000412F4  21e80691  add       x1, x1, #0x1ba
0x000412F8  e00313aa  mov       x0, x19
0x000412FC  39aeff97  bl        #0x2cbe0
0x00041300  485d82d2  mov       x8, #0x12ea
0x00041304  c835abf2  movk      x8, #0x59ae, lsl #16
0x00041308  802203f9  str       x0, [x20, #0x640]
0x0004130C  88c2d1f2  movk      x8, #0x8e14, lsl #32
0x00041310  e86aecf2  movk      x8, #0x6357, lsl #48
0x00041314  082402f9  str       x8, [x0, #0x448]
0x00041318  682e00b0  adrp      x8, #0x60e000
0x0004131C  08650991  add       x8, x8, #0x259
0x00041320  082802f9  str       x8, [x0, #0x450]
0x00041324  a8038052  mov       w8, #0x1d
0x00041328  082c02f9  str       x8, [x0, #0x458]
0x0004132C  88ea43f9  ldr       x8, [x20, #0x7d0]
0x00041330  480800b4  cbz       x8, #0x41438
0x00041334  95c21f91  add       x21, x20, #0x7f0
0x00041338  a10302d1  sub       x1, x29, #0x80
0x0004133C  bf0318b8  stur      wzr, [x29, #-0x80]
```
#### 0x4244C, FDE 0x423AC
```asm
0x0004241C  880240f9  ldr       x8, [x20]
0x00042420  e00314aa  mov       x0, x20
0x00042424  085d40f9  ldr       x8, [x8, #0xb8]
0x00042428  00013fd6  blr       x8
0x0004242C  010340f9  ldr       x1, [x24]
0x00042430  e00315aa  mov       x0, x21
0x00042434  e20240f9  ldr       x2, [x23]
0x00042438  c30240f9  ldr       x3, [x22]
0x0004243C  7097ff97  bl        #0x281fc
0x00042440  e83a00b0  adrp      x8, #0x79f000
0x00042444  e00315aa  mov       x0, x21
0x00042448  084d45f9  ldr       x8, [x8, #0xa98]
0x0004244C  bf2203f9  str       xzr, [x21, #0x640]
0x00042450  bf2a03f9  str       xzr, [x21, #0x650]
0x00042454  09a10291  add       x9, x8, #0xa8
0x00042458  bf2e03f9  str       xzr, [x21, #0x658]
0x0004245C  bf3203f9  str       xzr, [x21, #0x660]
0x00042460  bf3603f9  str       xzr, [x21, #0x668]
0x00042464  bf6a03f9  str       xzr, [x21, #0x6d0]
0x00042468  f85f42a9  ldp       x24, x23, [sp, #0x20]
0x0004246C  bf6e03f9  str       xzr, [x21, #0x6d8]
0x00042470  bf7203f9  str       xzr, [x21, #0x6e0]
0x00042474  bf7603f9  str       xzr, [x21, #0x6e8]
0x00042478  bfaa03f9  str       xzr, [x21, #0x750]
0x0004247C  bfae03f9  str       xzr, [x21, #0x758]
0x00042480  bfb203f9  str       xzr, [x21, #0x760]
```
#### 0x429C0, FDE 0x42980
```asm
0x00042990  f65713a9  stp       x22, x21, [sp, #0x130]
0x00042994  f44f14a9  stp       x20, x19, [sp, #0x140]
0x00042998  fd030491  add       x29, sp, #0x100
0x0004299C  360040f9  ldr       x22, [x1]
0x000429A0  f50301aa  mov       x21, x1
0x000429A4  f30300aa  mov       x19, x0
0x000429A8  b60000b4  cbz       x22, #0x429bc
0x000429AC  e00316aa  mov       x0, x22
0x000429B0  088c44f8  ldr       x8, [x0, #0x48]!
0x000429B4  080940f9  ldr       x8, [x8, #0x10]
0x000429B8  00013fd6  blr       x8
0x000429BC  602243f9  ldr       x0, [x19, #0x640]
0x000429C0  762203f9  str       x22, [x19, #0x640]
0x000429C4  a00000b4  cbz       x0, #0x429d8
0x000429C8  088c44f8  ldr       x8, [x0, #0x48]!
0x000429CC  080d40f9  ldr       x8, [x8, #0x18]
0x000429D0  00013fd6  blr       x8
0x000429D4  762243f9  ldr       x22, [x19, #0x640]
0x000429D8  761700b4  cbz       x22, #0x42cc4
0x000429DC  a80a40b9  ldr       w8, [x21, #8]
0x000429E0  1f110071  cmp       w8, #4
0x000429E4  02170054  b.hs      #0x42cc4
0x000429E8  7f7a06b9  str       wzr, [x19, #0x678]
0x000429EC  7f020d79  strh      wzr, [x19, #0x680]
0x000429F0  a80a40b9  ldr       w8, [x21, #8]
0x000429F4  687e06b9  str       w8, [x19, #0x67c]
```
#### 0x43400, FDE 0x433C0
```asm
0x000433D0  f30300aa  mov       x19, x0
0x000433D4  089945f9  ldr       x8, [x8, #0xb30]
0x000433D8  09410091  add       x9, x8, #0x10
0x000433DC  0aa10291  add       x10, x8, #0xa8
0x000433E0  08a10391  add       x8, x8, #0xe8
0x000433E4  090000f9  str       x9, [x0]
0x000433E8  0aa004a9  stp       x10, x8, [x0, #0x48]
0x000433EC  002043f9  ldr       x0, [x0, #0x640]
0x000433F0  a00000b4  cbz       x0, #0x43404
0x000433F4  088c44f8  ldr       x8, [x0, #0x48]!
0x000433F8  080d40f9  ldr       x8, [x8, #0x18]
0x000433FC  00013fd6  blr       x8
0x00043400  7f2203f9  str       xzr, [x19, #0x640]
0x00043404  e00313aa  mov       x0, x19
0x00043408  f30b40f9  ldr       x19, [sp, #0x10]
0x0004340C  fd7bc2a8  ldp       x29, x30, [sp], #0x20
0x00043410  8494ff17  b         #0x28620
```
#### 0x43454, FDE 0x43414
```asm
0x00043424  f30300aa  mov       x19, x0
0x00043428  089945f9  ldr       x8, [x8, #0xb30]
0x0004342C  09410091  add       x9, x8, #0x10
0x00043430  0aa10291  add       x10, x8, #0xa8
0x00043434  08a10391  add       x8, x8, #0xe8
0x00043438  090000f9  str       x9, [x0]
0x0004343C  0aa004a9  stp       x10, x8, [x0, #0x48]
0x00043440  002043f9  ldr       x0, [x0, #0x640]
0x00043444  a00000b4  cbz       x0, #0x43458
0x00043448  088c44f8  ldr       x8, [x0, #0x48]!
0x0004344C  080d40f9  ldr       x8, [x8, #0x18]
0x00043450  00013fd6  blr       x8
0x00043454  7f2203f9  str       xzr, [x19, #0x640]
0x00043458  e00313aa  mov       x0, x19
0x0004345C  f30b40f9  ldr       x19, [sp, #0x10]
0x00043460  fd7bc2a8  ldp       x29, x30, [sp], #0x20
0x00043464  6f94ff17  b         #0x28620
```
#### 0x57278, FDE 0x57160
```asm
0x00057248  1f9802f9  str       xzr, [x0, #0x530]
0x0005724C  1f9402f9  str       xzr, [x0, #0x528]
0x00057250  1f9002f9  str       xzr, [x0, #0x520]
0x00057254  083801f9  str       x8, [x0, #0x270]
0x00057258  08c001f9  str       x8, [x0, #0x380]
0x0005725C  1f5c02f9  str       xzr, [x0, #0x4b8]
0x00057260  1f5802f9  str       xzr, [x0, #0x4b0]
0x00057264  1f5402f9  str       xzr, [x0, #0x4a8]
0x00057268  1f5002f9  str       xzr, [x0, #0x4a0]
0x0005726C  1f4c02f9  str       xzr, [x0, #0x498]
0x00057270  084802f9  str       x8, [x0, #0x490]
0x00057274  1f2403f9  str       xzr, [x0, #0x648]
0x00057278  1f2003f9  str       xzr, [x0, #0x640]
0x0005727C  1f1c03f9  str       xzr, [x0, #0x638]
0x00057280  1f1803f9  str       xzr, [x0, #0x630]
0x00057284  1fe402f9  str       xzr, [x0, #0x5c8]
0x00057288  1fe002f9  str       xzr, [x0, #0x5c0]
0x0005728C  1fdc02f9  str       xzr, [x0, #0x5b8]
0x00057290  1fd802f9  str       xzr, [x0, #0x5b0]
0x00057294  1fd402f9  str       xzr, [x0, #0x5a8]
0x00057298  08d002f9  str       x8, [x0, #0x5a0]
0x0005729C  1fac03f9  str       xzr, [x0, #0x758]
0x000572A0  1fa803f9  str       xzr, [x0, #0x750]
0x000572A4  1fa403f9  str       xzr, [x0, #0x748]
0x000572A8  1fa003f9  str       xzr, [x0, #0x740]
0x000572AC  1f6c03f9  str       xzr, [x0, #0x6d8]
```
#### 0x7D650, FDE 0x7D3F8
```asm
0x0007D620  e00314aa  mov       x0, x20
0x0007D624  e2031faa  mov       x2, xzr
0x0007D628  5b020094  bl        #0x7df94
0x0007D62C  e01340f9  ldr       x0, [sp, #0x20]
0x0007D630  800000b4  cbz       x0, #0x7d640
0x0007D634  088c44f8  ldr       x8, [x0, #0x48]!
0x0007D638  080d40f9  ldr       x8, [x8, #0x18]
0x0007D63C  00013fd6  blr       x8
0x0007D640  e80340f9  ldr       x8, [sp]
0x0007D644  21008052  mov       w1, #1
0x0007D648  e2031f2a  mov       w2, wzr
0x0007D64C  692245f9  ldr       x9, [x19, #0xa40]
0x0007D650  092103f9  str       x9, [x8, #0x640]
0x0007D654  283b0090  adrp      x8, #0x7e1000
0x0007D658  08411791  add       x8, x8, #0x5d0
0x0007D65C  000140f9  ldr       x0, [x8]
0x0007D660  0b43fe97  bl        #0xe28c
0x0007D664  e00340f9  ldr       x0, [sp]
0x0007D668  800000b4  cbz       x0, #0x7d678
0x0007D66C  088c44f8  ldr       x8, [x0, #0x48]!
0x0007D670  080d40f9  ldr       x8, [x8, #0x18]
0x0007D674  00013fd6  blr       x8
0x0007D678  f44f4ca9  ldp       x20, x19, [sp, #0xc0]
0x0007D67C  f6574ba9  ldp       x22, x21, [sp, #0xb0]
0x0007D680  fd7b4aa9  ldp       x29, x30, [sp, #0xa0]
0x0007D684  ff430391  add       sp, sp, #0xd0
```
#### 0x7E15C, FDE 0x7E0A4
```asm
0x0007E12C  080340f9  ldr       x8, [x24]
0x0007E130  e00318aa  mov       x0, x24
0x0007E134  085d40f9  ldr       x8, [x8, #0xb8]
0x0007E138  00013fd6  blr       x8
0x0007E13C  e00314aa  mov       x0, x20
0x0007E140  e10313aa  mov       x1, x19
0x0007E144  e20317aa  mov       x2, x23
0x0007E148  e30319aa  mov       x3, x25
0x0007E14C  2ca8fe97  bl        #0x281fc
0x0007E150  083900f0  adrp      x8, #0x7a1000
0x0007E154  f70314aa  mov       x23, x20
0x0007E158  082542f9  ldr       x8, [x8, #0x448]
0x0007E15C  9f2203f9  str       xzr, [x20, #0x640]
0x0007E160  9f2a03f9  str       xzr, [x20, #0x650]
0x0007E164  09a10291  add       x9, x8, #0xa8
0x0007E168  d40200f9  str       x20, [x22]
0x0007E16C  e98e04f8  str       x9, [x23, #0x48]!
0x0007E170  09410091  add       x9, x8, #0x10
0x0007E174  08a10391  add       x8, x8, #0xe8
0x0007E178  882a00f9  str       x8, [x20, #0x50]
0x0007E17C  c8008052  mov       w8, #6
0x0007E180  896200a9  stp       x9, x24, [x20]
0x0007E184  e00317aa  mov       x0, x23
0x0007E188  882603f9  str       x8, [x20, #0x648]
0x0007E18C  08cc8052  mov       w8, #0x660
0x0007E190  942201a9  stp       x20, x8, [x20, #0x10]
```
#### 0x83F44, FDE 0x83E88
```asm
0x00083F14  e00318aa  mov       x0, x24
0x00083F18  085d40f9  ldr       x8, [x8, #0xb8]
0x00083F1C  00013fd6  blr       x8
0x00083F20  e00314aa  mov       x0, x20
0x00083F24  e10313aa  mov       x1, x19
0x00083F28  e20317aa  mov       x2, x23
0x00083F2C  e30319aa  mov       x3, x25
0x00083F30  b390fe97  bl        #0x281fc
0x00083F34  e83800d0  adrp      x8, #0x7a1000
0x00083F38  f70314aa  mov       x23, x20
0x00083F3C  08bd40f9  ldr       x8, [x8, #0x178]
0x00083F40  9fee1839  strb      wzr, [x20, #0x63b]
0x00083F44  9f2203f9  str       xzr, [x20, #0x640]
0x00083F48  09a10291  add       x9, x8, #0xa8
0x00083F4C  9f2603f9  str       xzr, [x20, #0x648]
0x00083F50  9f2a03f9  str       xzr, [x20, #0x650]
0x00083F54  9f2e03f9  str       xzr, [x20, #0x658]
0x00083F58  9f3203f9  str       xzr, [x20, #0x660]
0x00083F5C  9f3603f9  str       xzr, [x20, #0x668]
0x00083F60  9f3a03f9  str       xzr, [x20, #0x670]
0x00083F64  9f3e03f9  str       xzr, [x20, #0x678]
0x00083F68  9f4203f9  str       xzr, [x20, #0x680]
0x00083F6C  9f4603f9  str       xzr, [x20, #0x688]
0x00083F70  9f4a03f9  str       xzr, [x20, #0x690]
0x00083F74  9f4e03f9  str       xzr, [x20, #0x698]
0x00083F78  9f5203f9  str       xzr, [x20, #0x6a0]
```
#### 0x854DC, FDE 0x844F0
```asm
0x000854AC  e00316aa  mov       x0, x22
0x000854B0  080d40f9  ldr       x8, [x8, #0x18]
0x000854B4  00013fd6  blr       x8
0x000854B8  a82640f9  ldr       x8, [x21, #0x48]
0x000854BC  e00317aa  mov       x0, x23
0x000854C0  080d40f9  ldr       x8, [x8, #0x18]
0x000854C4  00013fd6  blr       x8
0x000854C8  606a41f9  ldr       x0, [x19, #0x2d0]
0x000854CC  152d0090  adrp      x21, #0x625000
0x000854D0  b5222191  add       x21, x21, #0x848
0x000854D4  e10315aa  mov       x1, x21
0x000854D8  3a090994  bl        #0x2c79c0
0x000854DC  602203f9  str       x0, [x19, #0x640]
0x000854E0  606a41f9  ldr       x0, [x19, #0x2d0]
0x000854E4  a1220091  add       x1, x21, #8
0x000854E8  36090994  bl        #0x2c79c0
0x000854EC  602603f9  str       x0, [x19, #0x648]
0x000854F0  606a41f9  ldr       x0, [x19, #0x2d0]
0x000854F4  a1420091  add       x1, x21, #0x10
0x000854F8  32090994  bl        #0x2c79c0
0x000854FC  602a03f9  str       x0, [x19, #0x650]
0x00085500  606a41f9  ldr       x0, [x19, #0x2d0]
0x00085504  a1620091  add       x1, x21, #0x18
0x00085508  2e090994  bl        #0x2c79c0
0x0008550C  602e03f9  str       x0, [x19, #0x658]
0x00085510  606a41f9  ldr       x0, [x19, #0x2d0]
```
#### 0x86410, FDE 0x863E8
```asm
0x000863E8  fd7bbea9  stp       x29, x30, [sp, #-0x20]!
0x000863EC  f30b00f9  str       x19, [sp, #0x10]
0x000863F0  fd030091  mov       x29, sp
0x000863F4  082443f9  ldr       x8, [x0, #0x648]
0x000863F8  f30300aa  mov       x19, x0
0x000863FC  e80000b4  cbz       x8, #0x86418
0x00086400  60821991  add       x0, x19, #0x660
0x00086404  7f2e03f9  str       xzr, [x19, #0x658]
0x00086408  7f2a03f9  str       xzr, [x19, #0x650]
0x0008640C  7f2603f9  str       xzr, [x19, #0x648]
0x00086410  7f2203f9  str       xzr, [x19, #0x640]
0x00086414  00013fd6  blr       x8
0x00086418  604201d1  sub       x0, x19, #0x50
0x0008641C  f30b40f9  ldr       x19, [sp, #0x10]
0x00086420  fd7bc2a8  ldp       x29, x30, [sp], #0x20
0x00086424  7f88fe17  b         #0x28620
```
#### 0x86450, FDE 0x86428
```asm
0x00086428  fd7bbea9  stp       x29, x30, [sp, #-0x20]!
0x0008642C  f30b00f9  str       x19, [sp, #0x10]
0x00086430  fd030091  mov       x29, sp
0x00086434  082443f9  ldr       x8, [x0, #0x648]
0x00086438  f30300aa  mov       x19, x0
0x0008643C  e80000b4  cbz       x8, #0x86458
0x00086440  60821991  add       x0, x19, #0x660
0x00086444  7f2e03f9  str       xzr, [x19, #0x658]
0x00086448  7f2a03f9  str       xzr, [x19, #0x650]
0x0008644C  7f2603f9  str       xzr, [x19, #0x648]
0x00086450  7f2203f9  str       xzr, [x19, #0x640]
0x00086454  00013fd6  blr       x8
0x00086458  604201d1  sub       x0, x19, #0x50
0x0008645C  f30b40f9  ldr       x19, [sp, #0x10]
0x00086460  fd7bc2a8  ldp       x29, x30, [sp], #0x20
0x00086464  6f88fe17  b         #0x28620
```
#### 0x885CC, FDE 0x87F60
```asm
0x0008859C  e1830091  add       x1, sp, #0x20
0x000885A0  e00315aa  mov       x0, x21
0x000885A4  e2031faa  mov       x2, xzr
0x000885A8  e40314aa  mov       x4, x20
0x000885AC  87140094  bl        #0x8d7c8
0x000885B0  e01340f9  ldr       x0, [sp, #0x20]
0x000885B4  800000b4  cbz       x0, #0x885c4
0x000885B8  088c44f8  ldr       x8, [x0, #0x48]!
0x000885BC  080d40f9  ldr       x8, [x8, #0x18]
0x000885C0  00013fd6  blr       x8
0x000885C4  a80f40f9  ldr       x8, [x29, #0x18]
0x000885C8  695646f9  ldr       x9, [x19, #0xca8]
0x000885CC  092103f9  str       x9, [x8, #0x640]
0x000885D0  695246f9  ldr       x9, [x19, #0xca0]
0x000885D4  290940b9  ldr       w9, [x9, #8]
0x000885D8  094906b9  str       w9, [x8, #0x648]
0x000885DC  480340f9  ldr       x8, [x26]
0x000885E0  75e642f9  ldr       x21, [x19, #0x5c8]
0x000885E4  146540f9  ldr       x20, [x8, #0xc8]
0x000885E8  a02e40f9  ldr       x0, [x21, #0x58]
0x000885EC  e01300f9  str       x0, [sp, #0x20]
0x000885F0  800000b4  cbz       x0, #0x88600
0x000885F4  088c44f8  ldr       x8, [x0, #0x48]!
0x000885F8  080940f9  ldr       x8, [x8, #0x10]
0x000885FC  00013fd6  blr       x8
0x00088600  632c00b0  adrp      x3, #0x615000
```
#### 0x88648, FDE 0x87F60
```asm
0x00088618  e40314aa  mov       x4, x20
0x0008861C  48150094  bl        #0x8db3c
0x00088620  e01340f9  ldr       x0, [sp, #0x20]
0x00088624  800000b4  cbz       x0, #0x88634
0x00088628  088c44f8  ldr       x8, [x0, #0x48]!
0x0008862C  080d40f9  ldr       x8, [x8, #0x18]
0x00088630  00013fd6  blr       x8
0x00088634  e80f40f9  ldr       x8, [sp, #0x18]
0x00088638  602c00f0  adrp      x0, #0x617000
0x0008863C  00482f91  add       x0, x0, #0xbd2
0x00088640  695646f9  ldr       x9, [x19, #0xca8]
0x00088644  23008052  mov       w3, #1
0x00088648  092103f9  str       x9, [x8, #0x640]
0x0008864C  480340f9  ldr       x8, [x26]
0x00088650  61e642f9  ldr       x1, [x19, #0x5c8]
0x00088654  027540f9  ldr       x2, [x8, #0xe8]
0x00088658  c8bcfe97  bl        #0x37978
0x0008865C  480340f9  ldr       x8, [x26]
0x00088660  202c0090  adrp      x0, #0x60c000
0x00088664  00a00b91  add       x0, x0, #0x2e8
0x00088668  61e642f9  ldr       x1, [x19, #0x5c8]
0x0008866C  e3031f2a  mov       w3, wzr
0x00088670  028540f9  ldr       x2, [x8, #0x108]
0x00088674  c1bcfe97  bl        #0x37978
0x00088678  480340f9  ldr       x8, [x26]
0x0008867C  602c00b0  adrp      x0, #0x615000
```
#### 0x8878C, FDE 0x87F60
```asm
0x0008875C  63002c91  add       x3, x3, #0xb00
0x00088760  e8430091  add       x8, sp, #0x10
0x00088764  e1830091  add       x1, sp, #0x20
0x00088768  e00314aa  mov       x0, x20
0x0008876C  e2031faa  mov       x2, xzr
0x00088770  cb150094  bl        #0x8de9c
0x00088774  e01340f9  ldr       x0, [sp, #0x20]
0x00088778  800000b4  cbz       x0, #0x88788
0x0008877C  088c44f8  ldr       x8, [x0, #0x48]!
0x00088780  080d40f9  ldr       x8, [x8, #0x18]
0x00088784  00013fd6  blr       x8
0x00088788  e80b40f9  ldr       x8, [sp, #0x10]
0x0008878C  172103f9  str       x23, [x8, #0x640]
0x00088790  74e642f9  ldr       x20, [x19, #0x5c8]
0x00088794  802e40f9  ldr       x0, [x20, #0x58]
0x00088798  e01300f9  str       x0, [sp, #0x20]
0x0008879C  800000b4  cbz       x0, #0x887ac
0x000887A0  088c44f8  ldr       x8, [x0, #0x48]!
0x000887A4  080940f9  ldr       x8, [x8, #0x10]
0x000887A8  00013fd6  blr       x8
0x000887AC  232c00d0  adrp      x3, #0x60e000
0x000887B0  63e40a91  add       x3, x3, #0x2b9
0x000887B4  e8230091  add       x8, sp, #8
0x000887B8  e1830091  add       x1, sp, #0x20
0x000887BC  e00314aa  mov       x0, x20
0x000887C0  e2031faa  mov       x2, xzr
```
#### 0x8D998, FDE 0x8D8E0
```asm
0x0008D968  e80240f9  ldr       x8, [x23]
0x0008D96C  e00317aa  mov       x0, x23
0x0008D970  085d40f9  ldr       x8, [x8, #0xb8]
0x0008D974  00013fd6  blr       x8
0x0008D978  e00314aa  mov       x0, x20
0x0008D97C  e10313aa  mov       x1, x19
0x0008D980  e20318aa  mov       x2, x24
0x0008D984  e30319aa  mov       x3, x25
0x0008D988  1d6afe97  bl        #0x281fc
0x0008D98C  883800f0  adrp      x8, #0x7a0000
0x0008D990  f80314aa  mov       x24, x20
0x0008D994  087547f9  ldr       x8, [x8, #0xee8]
0x0008D998  9f2203f9  str       xzr, [x20, #0x640]
0x0008D99C  9f2603f9  str       xzr, [x20, #0x648]
0x0008D9A0  09a10291  add       x9, x8, #0xa8
0x0008D9A4  9f5206b9  str       wzr, [x20, #0x650]
0x0008D9A8  9f2e03f9  str       xzr, [x20, #0x658]
0x0008D9AC  9f3203f9  str       xzr, [x20, #0x660]
0x0008D9B0  9f3603f9  str       xzr, [x20, #0x668]
0x0008D9B4  9f3a03f9  str       xzr, [x20, #0x670]
0x0008D9B8  9f3e03f9  str       xzr, [x20, #0x678]
0x0008D9BC  9f4203f9  str       xzr, [x20, #0x680]
0x0008D9C0  9f4603f9  str       xzr, [x20, #0x688]
0x0008D9C4  9f4a03f9  str       xzr, [x20, #0x690]
0x0008D9C8  9f4e03f9  str       xzr, [x20, #0x698]
0x0008D9CC  9f5203f9  str       xzr, [x20, #0x6a0]
```
#### 0x8DD0C, FDE 0x8DC54
```asm
0x0008DCDC  e80240f9  ldr       x8, [x23]
0x0008DCE0  e00317aa  mov       x0, x23
0x0008DCE4  085d40f9  ldr       x8, [x8, #0xb8]
0x0008DCE8  00013fd6  blr       x8
0x0008DCEC  e00314aa  mov       x0, x20
0x0008DCF0  e10313aa  mov       x1, x19
0x0008DCF4  e20318aa  mov       x2, x24
0x0008DCF8  e30319aa  mov       x3, x25
0x0008DCFC  4069fe97  bl        #0x281fc
0x0008DD00  883800f0  adrp      x8, #0x7a0000
0x0008DD04  f80314aa  mov       x24, x20
0x0008DD08  086547f9  ldr       x8, [x8, #0xec8]
0x0008DD0C  9f2203f9  str       xzr, [x20, #0x640]
0x0008DD10  9f2603f9  str       xzr, [x20, #0x648]
0x0008DD14  09a10291  add       x9, x8, #0xa8
0x0008DD18  9f2a03f9  str       xzr, [x20, #0x650]
0x0008DD1C  9f2e03f9  str       xzr, [x20, #0x658]
0x0008DD20  9f3203f9  str       xzr, [x20, #0x660]
0x0008DD24  9f3603f9  str       xzr, [x20, #0x668]
0x0008DD28  9f3a03f9  str       xzr, [x20, #0x670]
0x0008DD2C  9f3e03f9  str       xzr, [x20, #0x678]
0x0008DD30  9f4203f9  str       xzr, [x20, #0x680]
0x0008DD34  9f4603f9  str       xzr, [x20, #0x688]
0x0008DD38  9f4a03f9  str       xzr, [x20, #0x690]
0x0008DD3C  9f4e03f9  str       xzr, [x20, #0x698]
0x0008DD40  9f5203f9  str       xzr, [x20, #0x6a0]
```
#### 0x8E064, FDE 0x8DFAC
```asm
0x0008E034  080340f9  ldr       x8, [x24]
0x0008E038  e00318aa  mov       x0, x24
0x0008E03C  085d40f9  ldr       x8, [x8, #0xb8]
0x0008E040  00013fd6  blr       x8
0x0008E044  e00314aa  mov       x0, x20
0x0008E048  e10313aa  mov       x1, x19
0x0008E04C  e20317aa  mov       x2, x23
0x0008E050  e30319aa  mov       x3, x25
0x0008E054  6a68fe97  bl        #0x281fc
0x0008E058  883800d0  adrp      x8, #0x7a0000
0x0008E05C  f70314aa  mov       x23, x20
0x0008E060  08d947f9  ldr       x8, [x8, #0xfb0]
0x0008E064  9f2203f9  str       xzr, [x20, #0x640]
0x0008E068  9f2603f9  str       xzr, [x20, #0x648]
0x0008E06C  09a10291  add       x9, x8, #0xa8
0x0008E070  9f2a03f9  str       xzr, [x20, #0x650]
0x0008E074  9f2e03f9  str       xzr, [x20, #0x658]
0x0008E078  9f3203f9  str       xzr, [x20, #0x660]
0x0008E07C  9f3603f9  str       xzr, [x20, #0x668]
0x0008E080  9f3a03f9  str       xzr, [x20, #0x670]
0x0008E084  9f3e03f9  str       xzr, [x20, #0x678]
0x0008E088  9f221a39  strb      wzr, [x20, #0x688]
0x0008E08C  d40200f9  str       x20, [x22]
0x0008E090  e98e04f8  str       x9, [x23, #0x48]!
0x0008E094  09a10391  add       x9, x8, #0xe8
0x0008E098  08410091  add       x8, x8, #0x10
```
#### 0x8E390, FDE 0x8E2D8
```asm
0x0008E360  080340f9  ldr       x8, [x24]
0x0008E364  e00318aa  mov       x0, x24
0x0008E368  085d40f9  ldr       x8, [x8, #0xb8]
0x0008E36C  00013fd6  blr       x8
0x0008E370  e00314aa  mov       x0, x20
0x0008E374  e10313aa  mov       x1, x19
0x0008E378  e20317aa  mov       x2, x23
0x0008E37C  e30319aa  mov       x3, x25
0x0008E380  9f67fe97  bl        #0x281fc
0x0008E384  883800b0  adrp      x8, #0x79f000
0x0008E388  f70314aa  mov       x23, x20
0x0008E38C  089945f9  ldr       x8, [x8, #0xb30]
0x0008E390  9f2203f9  str       xzr, [x20, #0x640]
0x0008E394  9f2603f9  str       xzr, [x20, #0x648]
0x0008E398  09a10291  add       x9, x8, #0xa8
0x0008E39C  9f2a03f9  str       xzr, [x20, #0x650]
0x0008E3A0  9f2e03f9  str       xzr, [x20, #0x658]
0x0008E3A4  9f3203f9  str       xzr, [x20, #0x660]
0x0008E3A8  9f3603f9  str       xzr, [x20, #0x668]
0x0008E3AC  9f3a03f9  str       xzr, [x20, #0x670]
0x0008E3B0  9f020d79  strh      wzr, [x20, #0x680]
0x0008E3B4  d40200f9  str       x20, [x22]
0x0008E3B8  e98e04f8  str       x9, [x23, #0x48]!
0x0008E3BC  09a10391  add       x9, x8, #0xe8
0x0008E3C0  08410091  add       x8, x8, #0x10
0x0008E3C4  e00317aa  mov       x0, x23
```
#### 0xA1EC0, FDE 0xA1DC0
```asm
0x000A1E90  fb1c1194  bl        #0x4e927c
0x000A1E94  68821891  add       x8, x19, #0x620
0x000A1E98  e00315aa  mov       x0, x21
0x000A1E9C  f81c1194  bl        #0x4e927c
0x000A1EA0  68021991  add       x8, x19, #0x640
0x000A1EA4  e00315aa  mov       x0, x21
0x000A1EA8  7f2e03f9  str       xzr, [x19, #0x658]
0x000A1EAC  1f6102f8  stur      xzr, [x8, #0x26]
0x000A1EB0  68c21991  add       x8, x19, #0x670
0x000A1EB4  7f3203f9  str       xzr, [x19, #0x660]
0x000A1EB8  7f2a03f9  str       xzr, [x19, #0x650]
0x000A1EBC  7f2603f9  str       xzr, [x19, #0x648]
0x000A1EC0  7f2203f9  str       xzr, [x19, #0x640]
0x000A1EC4  ee1c1194  bl        #0x4e927c
0x000A1EC8  68421a91  add       x8, x19, #0x690
0x000A1ECC  e00315aa  mov       x0, x21
0x000A1ED0  eb1c1194  bl        #0x4e927c
0x000A1ED4  68c21a91  add       x8, x19, #0x6b0
0x000A1ED8  e00315aa  mov       x0, x21
0x000A1EDC  7f6603f9  str       xzr, [x19, #0x6c8]
0x000A1EE0  1f6102f8  stur      xzr, [x8, #0x26]
0x000A1EE4  68821b91  add       x8, x19, #0x6e0
0x000A1EE8  7f6a03f9  str       xzr, [x19, #0x6d0]
0x000A1EEC  7f6203f9  str       xzr, [x19, #0x6c0]
0x000A1EF0  7f5e03f9  str       xzr, [x19, #0x6b8]
0x000A1EF4  7f5a03f9  str       xzr, [x19, #0x6b0]
```
#### 0xA2900, FDE 0xA27F0
```asm
0x000A28D0  6b1a1194  bl        #0x4e927c
0x000A28D4  68821891  add       x8, x19, #0x620
0x000A28D8  e00315aa  mov       x0, x21
0x000A28DC  681a1194  bl        #0x4e927c
0x000A28E0  68021991  add       x8, x19, #0x640
0x000A28E4  e00315aa  mov       x0, x21
0x000A28E8  7f2e03f9  str       xzr, [x19, #0x658]
0x000A28EC  1f6102f8  stur      xzr, [x8, #0x26]
0x000A28F0  68c21991  add       x8, x19, #0x670
0x000A28F4  7f3203f9  str       xzr, [x19, #0x660]
0x000A28F8  7f2a03f9  str       xzr, [x19, #0x650]
0x000A28FC  7f2603f9  str       xzr, [x19, #0x648]
0x000A2900  7f2203f9  str       xzr, [x19, #0x640]
0x000A2904  5e1a1194  bl        #0x4e927c
0x000A2908  68421a91  add       x8, x19, #0x690
0x000A290C  e00315aa  mov       x0, x21
0x000A2910  5b1a1194  bl        #0x4e927c
0x000A2914  68c21a91  add       x8, x19, #0x6b0
0x000A2918  e00315aa  mov       x0, x21
0x000A291C  7f6603f9  str       xzr, [x19, #0x6c8]
0x000A2920  1f6102f8  stur      xzr, [x8, #0x26]
0x000A2924  68821b91  add       x8, x19, #0x6e0
0x000A2928  7f6a03f9  str       xzr, [x19, #0x6d0]
0x000A292C  7f6203f9  str       xzr, [x19, #0x6c0]
0x000A2930  7f5e03f9  str       xzr, [x19, #0x6b8]
0x000A2934  7f5a03f9  str       xzr, [x19, #0x6b0]
```
#### 0xD954C, FDE 0xD94D0
```asm
0x000D951C  7f5a03f9  str       xzr, [x19, #0x6b0]
0x000D9520  603243f9  ldr       x0, [x19, #0x660]
0x000D9524  a00000b4  cbz       x0, #0xd9538
0x000D9528  088c44f8  ldr       x8, [x0, #0x48]!
0x000D952C  080d40f9  ldr       x8, [x8, #0x18]
0x000D9530  00013fd6  blr       x8
0x000D9534  7f3203f9  str       xzr, [x19, #0x660]
0x000D9538  602243f9  ldr       x0, [x19, #0x640]
0x000D953C  a00000b4  cbz       x0, #0xd9550
0x000D9540  088c44f8  ldr       x8, [x0, #0x48]!
0x000D9544  080d40f9  ldr       x8, [x8, #0x18]
0x000D9548  00013fd6  blr       x8
0x000D954C  7f2203f9  str       xzr, [x19, #0x640]
0x000D9550  60fa42f9  ldr       x0, [x19, #0x5f0]
0x000D9554  a00000b4  cbz       x0, #0xd9568
0x000D9558  088c44f8  ldr       x8, [x0, #0x48]!
0x000D955C  080d40f9  ldr       x8, [x8, #0x18]
0x000D9560  00013fd6  blr       x8
0x000D9564  7ffa02f9  str       xzr, [x19, #0x5f0]
0x000D9568  60ea42f9  ldr       x0, [x19, #0x5d0]
0x000D956C  a00000b4  cbz       x0, #0xd9580
0x000D9570  088c44f8  ldr       x8, [x0, #0x48]!
0x000D9574  080d40f9  ldr       x8, [x8, #0x18]
0x000D9578  00013fd6  blr       x8
0x000D957C  7fea02f9  str       xzr, [x19, #0x5d0]
0x000D9580  60c242f9  ldr       x0, [x19, #0x580]
```
#### 0xED278, FDE 0xECE80
```asm
0x000ED248  e87f01a9  stp       x8, xzr, [sp, #0x10]
0x000ED24C  b584fe97  bl        #0x8e520
0x000ED250  f50300aa  mov       x21, x0
0x000ED254  e00f40f9  ldr       x0, [sp, #0x18]
0x000ED258  800000b4  cbz       x0, #0xed268
0x000ED25C  088c44f8  ldr       x8, [x0, #0x48]!
0x000ED260  080d40f9  ldr       x8, [x8, #0x18]
0x000ED264  00013fd6  blr       x8
0x000ED268  756a00f9  str       x21, [x19, #0xd0]
0x000ED26C  758a00b4  cbz       x21, #0xee3b8
0x000ED270  49168ed2  mov       x9, #0x70b2
0x000ED274  a9d5b9f2  movk      x9, #0xcead, lsl #16
0x000ED278  b62203f9  str       x22, [x21, #0x640]
0x000ED27C  082900b0  adrp      x8, #0x60e000
0x000ED280  08e50a91  add       x8, x8, #0x2b9
0x000ED284  c984dbf2  movk      x9, #0xdc26, lsl #32
0x000ED288  4980e1f2  movk      x9, #0xc02, lsl #48
0x000ED28C  e92300a9  stp       x9, x8, [sp]
0x000ED290  e8028052  mov       w8, #0x17
0x000ED294  e1030091  mov       x1, sp
0x000ED298  e00314aa  mov       x0, x20
0x000ED29C  e87f01a9  stp       x8, xzr, [sp, #0x10]
0x000ED2A0  2c85fe97  bl        #0x8e750
0x000ED2A4  f40300aa  mov       x20, x0
0x000ED2A8  e00f40f9  ldr       x0, [sp, #0x18]
0x000ED2AC  800000b4  cbz       x0, #0xed2bc
```
#### 0xFCA48, FDE 0xFC7B0
```asm
0x000FCA18  ff4f02f9  str       xzr, [sp, #0x498]
0x000FCA1C  ff4b02f9  str       xzr, [sp, #0x490]
0x000FCA20  ff4702f9  str       xzr, [sp, #0x488]
0x000FCA24  ff4302f9  str       xzr, [sp, #0x480]
0x000FCA28  ff8f02f9  str       xzr, [sp, #0x518]
0x000FCA2C  ff8b02f9  str       xzr, [sp, #0x510]
0x000FCA30  ff8702f9  str       xzr, [sp, #0x508]
0x000FCA34  ff8302f9  str       xzr, [sp, #0x500]
0x000FCA38  ffc302f9  str       xzr, [sp, #0x580]
0x000FCA3C  ffc702f9  str       xzr, [sp, #0x588]
0x000FCA40  ff1b03f9  str       xzr, [sp, #0x630]
0x000FCA44  ff1f03f9  str       xzr, [sp, #0x638]
0x000FCA48  ff2303f9  str       xzr, [sp, #0x640]
0x000FCA4C  ff2703f9  str       xzr, [sp, #0x648]
0x000FCA50  ff5b03f9  str       xzr, [sp, #0x6b0]
0x000FCA54  ff5f03f9  str       xzr, [sp, #0x6b8]
0x000FCA58  ff6303f9  str       xzr, [sp, #0x6c0]
0x000FCA5C  ff6703f9  str       xzr, [sp, #0x6c8]
0x000FCA60  ffcf02f9  str       xzr, [sp, #0x598]
0x000FCA64  ffd302f9  str       xzr, [sp, #0x5a0]
0x000FCA68  ffab05b9  str       wzr, [sp, #0x5a8]
0x000FCA6C  ffd31c39  strb      wzr, [sp, #0x734]
0x000FCA70  ff9f03f9  str       xzr, [sp, #0x738]
0x000FCA74  f42b00b9  str       w20, [sp, #0x28]
0x000FCA78  f73b00b9  str       w23, [sp, #0x38]
0x000FCA7C  ffc300f9  str       xzr, [sp, #0x180]
```
#### 0xFCEC4, FDE 0xFCBC0
```asm
0x000FCE94  ff4302f9  str       xzr, [sp, #0x480]
0x000FCE98  ff4702f9  str       xzr, [sp, #0x488]
0x000FCE9C  ff4b02f9  str       xzr, [sp, #0x490]
0x000FCEA0  ff4f02f9  str       xzr, [sp, #0x498]
0x000FCEA4  ff8f02f9  str       xzr, [sp, #0x518]
0x000FCEA8  ff8b02f9  str       xzr, [sp, #0x510]
0x000FCEAC  ff8702f9  str       xzr, [sp, #0x508]
0x000FCEB0  ff8302f9  str       xzr, [sp, #0x500]
0x000FCEB4  ffc702f9  str       xzr, [sp, #0x588]
0x000FCEB8  ffc302f9  str       xzr, [sp, #0x580]
0x000FCEBC  ff1b03f9  str       xzr, [sp, #0x630]
0x000FCEC0  ff1f03f9  str       xzr, [sp, #0x638]
0x000FCEC4  ff2303f9  str       xzr, [sp, #0x640]
0x000FCEC8  ff2703f9  str       xzr, [sp, #0x648]
0x000FCECC  ff5b03f9  str       xzr, [sp, #0x6b0]
0x000FCED0  ff5f03f9  str       xzr, [sp, #0x6b8]
0x000FCED4  ff6303f9  str       xzr, [sp, #0x6c0]
0x000FCED8  ff6703f9  str       xzr, [sp, #0x6c8]
0x000FCEDC  ffcf02f9  str       xzr, [sp, #0x598]
0x000FCEE0  ffd302f9  str       xzr, [sp, #0x5a0]
0x000FCEE4  ffab05b9  str       wzr, [sp, #0x5a8]
0x000FCEE8  ffd31c39  strb      wzr, [sp, #0x734]
0x000FCEEC  ff9f03f9  str       xzr, [sp, #0x738]
0x000FCEF0  f52b00b9  str       w21, [sp, #0x28]
0x000FCEF4  f31300f9  str       x19, [sp, #0x20]
0x000FCEF8  f31301f9  str       x19, [sp, #0x220]
```
#### 0xFD23C, FDE 0xFD030
```asm
0x000FD20C  ff0f02f9  str       xzr, [sp, #0x418]
0x000FD210  ff0b02f9  str       xzr, [sp, #0x410]
0x000FD214  ff5702f9  str       xzr, [sp, #0x4a8]
0x000FD218  ff5302f9  str       xzr, [sp, #0x4a0]
0x000FD21C  ff4f02f9  str       xzr, [sp, #0x498]
0x000FD220  ff4b02f9  str       xzr, [sp, #0x490]
0x000FD224  ff8b02f9  str       xzr, [sp, #0x510]
0x000FD228  ff8f02f9  str       xzr, [sp, #0x518]
0x000FD22C  ff9302f9  str       xzr, [sp, #0x520]
0x000FD230  ff9702f9  str       xzr, [sp, #0x528]
0x000FD234  ffcb02f9  str       xzr, [sp, #0x590]
0x000FD238  ffcf02f9  str       xzr, [sp, #0x598]
0x000FD23C  ff2303f9  str       xzr, [sp, #0x640]
0x000FD240  ff2703f9  str       xzr, [sp, #0x648]
0x000FD244  ff2b03f9  str       xzr, [sp, #0x650]
0x000FD248  ff2f03f9  str       xzr, [sp, #0x658]
0x000FD24C  ff6303f9  str       xzr, [sp, #0x6c0]
0x000FD250  ff6703f9  str       xzr, [sp, #0x6c8]
0x000FD254  ff6b03f9  str       xzr, [sp, #0x6d0]
0x000FD258  ff6f03f9  str       xzr, [sp, #0x6d8]
0x000FD25C  ffbb05b9  str       wzr, [sp, #0x5b8]
0x000FD260  ffdb02f9  str       xzr, [sp, #0x5b0]
0x000FD264  ffd702f9  str       xzr, [sp, #0x5a8]
0x000FD268  ff131d39  strb      wzr, [sp, #0x744]
0x000FD26C  ffa703f9  str       xzr, [sp, #0x748]
0x000FD270  f31b01f9  str       x19, [sp, #0x230]
```
#### 0x104B3C, FDE 0x104770
```asm
0x00104B0C  f40f40f9  ldr       x20, [sp, #0x18]
0x00104B10  a14300d1  sub       x1, x29, #0x10
0x00104B14  e00314aa  mov       x0, x20
0x00104B18  f6000094  bl        #0x104ef0
0x00104B1C  e90340f9  ldr       x9, [sp]
0x00104B20  a88302d1  sub       x8, x29, #0xa0
0x00104B24  1f2003d5  nop       
0x00104B28  ca3d0010  adr       x10, #0x1052e0
0x00104B2C  16810091  add       x22, x8, #0x20
0x00104B30  b30319f8  stur      x19, [x29, #-0x70]
0x00104B34  1f2003d5  nop       
0x00104B38  c82f0010  adr       x8, #0x105130
0x00104B3C  f42303f9  str       x20, [sp, #0x640]
0x00104B40  1f2003d5  nop       
0x00104B44  8b3d0010  adr       x11, #0x1052f4
0x00104B48  f803002a  mov       w24, w0
0x00104B4C  b42738a9  stp       x20, x9, [x29, #-0x80]
0x00104B50  1f2003d5  nop       
0x00104B54  493c0010  adr       x9, #0x1052dc
0x00104B58  a82736a9  stp       x8, x9, [x29, #-0xa0]
0x00104B5C  883240f9  ldr       x8, [x20, #0x60]
0x00104B60  1f2003d5  nop       
0x00104B64  a93d0010  adr       x9, #0x105318
0x00104B68  e91703f9  str       x9, [sp, #0x628]
0x00104B6C  1f2003d5  nop       
0x00104B70  c93d0010  adr       x9, #0x105328
```
#### 0x108654, FDE 0x1084D8
```asm
0x00108624  606243f9  ldr       x0, [x19, #0x6c0]
0x00108628  a00000b4  cbz       x0, #0x10863c
0x0010862C  088c44f8  ldr       x8, [x0, #0x48]!
0x00108630  080d40f9  ldr       x8, [x8, #0x18]
0x00108634  00013fd6  blr       x8
0x00108638  7f6203f9  str       xzr, [x19, #0x6c0]
0x0010863C  682643f9  ldr       x8, [x19, #0x648]
0x00108640  e80000b4  cbz       x8, #0x10865c
0x00108644  60821991  add       x0, x19, #0x660
0x00108648  7f2e03f9  str       xzr, [x19, #0x658]
0x0010864C  7f2a03f9  str       xzr, [x19, #0x650]
0x00108650  7f2603f9  str       xzr, [x19, #0x648]
0x00108654  7f2203f9  str       xzr, [x19, #0x640]
0x00108658  00013fd6  blr       x8
0x0010865C  e00313aa  mov       x0, x19
0x00108660  f44f41a9  ldp       x20, x19, [sp, #0x10]
0x00108664  fd7bc2a8  ldp       x29, x30, [sp], #0x20
0x00108668  ee7ffc17  b         #0x28620
```
#### 0x10ACAC, FDE 0x10ABF4
```asm
0x0010AC7C  080340f9  ldr       x8, [x24]
0x0010AC80  e00318aa  mov       x0, x24
0x0010AC84  085d40f9  ldr       x8, [x8, #0xb8]
0x0010AC88  00013fd6  blr       x8
0x0010AC8C  e00314aa  mov       x0, x20
0x0010AC90  e10313aa  mov       x1, x19
0x0010AC94  e20317aa  mov       x2, x23
0x0010AC98  e30319aa  mov       x3, x25
0x0010AC9C  5875fc97  bl        #0x281fc
0x0010ACA0  a83400f0  adrp      x8, #0x7a1000
0x0010ACA4  f70314aa  mov       x23, x20
0x0010ACA8  085941f9  ldr       x8, [x8, #0x2b0]
0x0010ACAC  9f2203f9  str       xzr, [x20, #0x640]
0x0010ACB0  9f2603f9  str       xzr, [x20, #0x648]
0x0010ACB4  09a10291  add       x9, x8, #0xa8
0x0010ACB8  9f2a03f9  str       xzr, [x20, #0x650]
0x0010ACBC  9f2e03f9  str       xzr, [x20, #0x658]
0x0010ACC0  9f6203f9  str       xzr, [x20, #0x6c0]
0x0010ACC4  9f221b39  strb      wzr, [x20, #0x6c8]
0x0010ACC8  9f6a03f9  str       xzr, [x20, #0x6d0]
0x0010ACCC  9f6e03f9  str       xzr, [x20, #0x6d8]
0x0010ACD0  9f7203f9  str       xzr, [x20, #0x6e0]
0x0010ACD4  9f7603f9  str       xzr, [x20, #0x6e8]
0x0010ACD8  9f7a03f9  str       xzr, [x20, #0x6f0]
0x0010ACDC  9f7e03f9  str       xzr, [x20, #0x6f8]
0x0010ACE0  9f8203f9  str       xzr, [x20, #0x700]
```
#### 0x10DBAC, FDE 0x10DA8C
```asm
0x0010DB7C  606243f9  ldr       x0, [x19, #0x6c0]
0x0010DB80  a00000b4  cbz       x0, #0x10db94
0x0010DB84  088c44f8  ldr       x8, [x0, #0x48]!
0x0010DB88  080d40f9  ldr       x8, [x8, #0x18]
0x0010DB8C  00013fd6  blr       x8
0x0010DB90  7f6203f9  str       xzr, [x19, #0x6c0]
0x0010DB94  682643f9  ldr       x8, [x19, #0x648]
0x0010DB98  e80000b4  cbz       x8, #0x10dbb4
0x0010DB9C  60821991  add       x0, x19, #0x660
0x0010DBA0  7f2e03f9  str       xzr, [x19, #0x658]
0x0010DBA4  7f2a03f9  str       xzr, [x19, #0x650]
0x0010DBA8  7f2603f9  str       xzr, [x19, #0x648]
0x0010DBAC  7f2203f9  str       xzr, [x19, #0x640]
0x0010DBB0  00013fd6  blr       x8
0x0010DBB4  e00313aa  mov       x0, x19
0x0010DBB8  f44f41a9  ldp       x20, x19, [sp, #0x10]
0x0010DBBC  fd7bc2a8  ldp       x29, x30, [sp], #0x20
0x0010DBC0  986afc17  b         #0x28620
```
#### 0x10E488, FDE 0x10E214
```asm
0x0010E458  08f002f9  str       x8, [x0, #0x5e0]
0x0010E45C  08f402f9  str       x8, [x0, #0x5e8]
0x0010E460  1ff802f9  str       xzr, [x0, #0x5f0]
0x0010E464  08fc02f9  str       x8, [x0, #0x5f8]
0x0010E468  080003f9  str       x8, [x0, #0x600]
0x0010E46C  080403f9  str       x8, [x0, #0x608]
0x0010E470  080803f9  str       x8, [x0, #0x610]
0x0010E474  080c03f9  str       x8, [x0, #0x618]
0x0010E478  081003f9  str       x8, [x0, #0x620]
0x0010E47C  1f1403f9  str       xzr, [x0, #0x628]
0x0010E480  081803f9  str       x8, [x0, #0x630]
0x0010E484  081c03f9  str       x8, [x0, #0x638]
0x0010E488  082003f9  str       x8, [x0, #0x640]
0x0010E48C  082403f9  str       x8, [x0, #0x648]
0x0010E490  082803f9  str       x8, [x0, #0x650]
0x0010E494  082c03f9  str       x8, [x0, #0x658]
0x0010E498  1f3003f9  str       xzr, [x0, #0x660]
0x0010E49C  083403f9  str       x8, [x0, #0x668]
0x0010E4A0  083803f9  str       x8, [x0, #0x670]
0x0010E4A4  083c03f9  str       x8, [x0, #0x678]
0x0010E4A8  084003f9  str       x8, [x0, #0x680]
0x0010E4AC  084403f9  str       x8, [x0, #0x688]
0x0010E4B0  084803f9  str       x8, [x0, #0x690]
0x0010E4B4  1f4c03f9  str       xzr, [x0, #0x698]
0x0010E4B8  085003f9  str       x8, [x0, #0x6a0]
0x0010E4BC  0a2001a9  stp       x10, x8, [x0, #0x10]
```
#### 0x11E4D0, FDE 0x11E414
```asm
0x0011E4A0  e00318aa  mov       x0, x24
0x0011E4A4  085d40f9  ldr       x8, [x8, #0xb8]
0x0011E4A8  00013fd6  blr       x8
0x0011E4AC  e00314aa  mov       x0, x20
0x0011E4B0  e10313aa  mov       x1, x19
0x0011E4B4  e20317aa  mov       x2, x23
0x0011E4B8  e30319aa  mov       x3, x25
0x0011E4BC  5027fc97  bl        #0x281fc
0x0011E4C0  083400f0  adrp      x8, #0x7a1000
0x0011E4C4  f70314aa  mov       x23, x20
0x0011E4C8  085544f9  ldr       x8, [x8, #0x8a8]
0x0011E4CC  9f6203f9  str       xzr, [x20, #0x6c0]
0x0011E4D0  9f2203f9  str       xzr, [x20, #0x640]
0x0011E4D4  09a10291  add       x9, x8, #0xa8
0x0011E4D8  9f2603f9  str       xzr, [x20, #0x648]
0x0011E4DC  9f2a03f9  str       xzr, [x20, #0x650]
0x0011E4E0  9f2e03f9  str       xzr, [x20, #0x658]
0x0011E4E4  d40200f9  str       x20, [x22]
0x0011E4E8  e98e04f8  str       x9, [x23, #0x48]!
0x0011E4EC  09410091  add       x9, x8, #0x10
0x0011E4F0  08a10391  add       x8, x8, #0xe8
0x0011E4F4  e00317aa  mov       x0, x23
0x0011E4F8  882a00f9  str       x8, [x20, #0x50]
0x0011E4FC  88021b91  add       x8, x20, #0x6c0
0x0011E500  1f7100b8  stur      wzr, [x8, #7]
0x0011E504  08da8052  mov       w8, #0x6d0
```
#### 0x12224C, FDE 0x12220C
```asm
0x0012221C  006043f9  ldr       x0, [x0, #0x6c0]
0x00122220  a00000b4  cbz       x0, #0x122234
0x00122224  088c44f8  ldr       x8, [x0, #0x48]!
0x00122228  080d40f9  ldr       x8, [x8, #0x18]
0x0012222C  00013fd6  blr       x8
0x00122230  7f6203f9  str       xzr, [x19, #0x6c0]
0x00122234  682643f9  ldr       x8, [x19, #0x648]
0x00122238  e80000b4  cbz       x8, #0x122254
0x0012223C  60821991  add       x0, x19, #0x660
0x00122240  7f2e03f9  str       xzr, [x19, #0x658]
0x00122244  7f2a03f9  str       xzr, [x19, #0x650]
0x00122248  7f2603f9  str       xzr, [x19, #0x648]
0x0012224C  7f2203f9  str       xzr, [x19, #0x640]
0x00122250  00013fd6  blr       x8
0x00122254  e00313aa  mov       x0, x19
0x00122258  f30b40f9  ldr       x19, [sp, #0x10]
0x0012225C  fd7bc2a8  ldp       x29, x30, [sp], #0x20
0x00122260  f018fc17  b         #0x28620
```
#### 0x1222A4, FDE 0x122264
```asm
0x00122274  006043f9  ldr       x0, [x0, #0x6c0]
0x00122278  a00000b4  cbz       x0, #0x12228c
0x0012227C  088c44f8  ldr       x8, [x0, #0x48]!
0x00122280  080d40f9  ldr       x8, [x8, #0x18]
0x00122284  00013fd6  blr       x8
0x00122288  7f6203f9  str       xzr, [x19, #0x6c0]
0x0012228C  682643f9  ldr       x8, [x19, #0x648]
0x00122290  e80000b4  cbz       x8, #0x1222ac
0x00122294  60821991  add       x0, x19, #0x660
0x00122298  7f2e03f9  str       xzr, [x19, #0x658]
0x0012229C  7f2a03f9  str       xzr, [x19, #0x650]
0x001222A0  7f2603f9  str       xzr, [x19, #0x648]
0x001222A4  7f2203f9  str       xzr, [x19, #0x640]
0x001222A8  00013fd6  blr       x8
0x001222AC  e00313aa  mov       x0, x19
0x001222B0  f30b40f9  ldr       x19, [sp, #0x10]
0x001222B4  fd7bc2a8  ldp       x29, x30, [sp], #0x20
0x001222B8  da18fc17  b         #0x28620
```
#### 0x12314C, FDE 0x123094
```asm
0x0012311C  080340f9  ldr       x8, [x24]
0x00123120  e00318aa  mov       x0, x24
0x00123124  085d40f9  ldr       x8, [x8, #0xb8]
0x00123128  00013fd6  blr       x8
0x0012312C  e00314aa  mov       x0, x20
0x00123130  e10313aa  mov       x1, x19
0x00123134  e20317aa  mov       x2, x23
0x00123138  e30319aa  mov       x3, x25
0x0012313C  3014fc97  bl        #0x281fc
0x00123140  e83300d0  adrp      x8, #0x7a1000
0x00123144  f70314aa  mov       x23, x20
0x00123148  088144f9  ldr       x8, [x8, #0x900]
0x0012314C  9f2203f9  str       xzr, [x20, #0x640]
0x00123150  9f2603f9  str       xzr, [x20, #0x648]
0x00123154  09a10291  add       x9, x8, #0xa8
0x00123158  9f2a03f9  str       xzr, [x20, #0x650]
0x0012315C  9f2e03f9  str       xzr, [x20, #0x658]
0x00123160  9f6203f9  str       xzr, [x20, #0x6c0]
0x00123164  9f6603f9  str       xzr, [x20, #0x6c8]
0x00123168  9f6a03f9  str       xzr, [x20, #0x6d0]
0x0012316C  9f6e03f9  str       xzr, [x20, #0x6d8]
0x00123170  d40200f9  str       x20, [x22]
0x00123174  e98e04f8  str       x9, [x23, #0x48]!
0x00123178  09a10391  add       x9, x8, #0xe8
0x0012317C  08410091  add       x8, x8, #0x10
0x00123180  e00317aa  mov       x0, x23
```
#### 0x127540, FDE 0x1274E8
```asm
0x00127510  606243f9  ldr       x0, [x19, #0x6c0]
0x00127514  a00000b4  cbz       x0, #0x127528
0x00127518  088c44f8  ldr       x8, [x0, #0x48]!
0x0012751C  080d40f9  ldr       x8, [x8, #0x18]
0x00127520  00013fd6  blr       x8
0x00127524  7f6203f9  str       xzr, [x19, #0x6c0]
0x00127528  682643f9  ldr       x8, [x19, #0x648]
0x0012752C  e80000b4  cbz       x8, #0x127548
0x00127530  60821991  add       x0, x19, #0x660
0x00127534  7f2e03f9  str       xzr, [x19, #0x658]
0x00127538  7f2a03f9  str       xzr, [x19, #0x650]
0x0012753C  7f2603f9  str       xzr, [x19, #0x648]
0x00127540  7f2203f9  str       xzr, [x19, #0x640]
0x00127544  00013fd6  blr       x8
0x00127548  e00313aa  mov       x0, x19
0x0012754C  f30b40f9  ldr       x19, [sp, #0x10]
0x00127550  fd7bc2a8  ldp       x29, x30, [sp], #0x20
0x00127554  3304fc17  b         #0x28620
```
#### 0x1275B0, FDE 0x127558
```asm
0x00127580  606243f9  ldr       x0, [x19, #0x6c0]
0x00127584  a00000b4  cbz       x0, #0x127598
0x00127588  088c44f8  ldr       x8, [x0, #0x48]!
0x0012758C  080d40f9  ldr       x8, [x8, #0x18]
0x00127590  00013fd6  blr       x8
0x00127594  7f6203f9  str       xzr, [x19, #0x6c0]
0x00127598  682643f9  ldr       x8, [x19, #0x648]
0x0012759C  e80000b4  cbz       x8, #0x1275b8
0x001275A0  60821991  add       x0, x19, #0x660
0x001275A4  7f2e03f9  str       xzr, [x19, #0x658]
0x001275A8  7f2a03f9  str       xzr, [x19, #0x650]
0x001275AC  7f2603f9  str       xzr, [x19, #0x648]
0x001275B0  7f2203f9  str       xzr, [x19, #0x640]
0x001275B4  00013fd6  blr       x8
0x001275B8  e00313aa  mov       x0, x19
0x001275BC  f30b40f9  ldr       x19, [sp, #0x10]
0x001275C0  fd7bc2a8  ldp       x29, x30, [sp], #0x20
0x001275C4  1704fc17  b         #0x28620
```
#### 0x127DF0, FDE 0x127C10
```asm
0x00127DC0  a18300d1  sub       x1, x29, #0x20
0x00127DC4  e00314aa  mov       x0, x20
0x00127DC8  e2031faa  mov       x2, xzr
0x00127DCC  83070094  bl        #0x129bd8
0x00127DD0  a0035ef8  ldur      x0, [x29, #-0x20]
0x00127DD4  800000b4  cbz       x0, #0x127de4
0x00127DD8  088c44f8  ldr       x8, [x0, #0x48]!
0x00127DDC  080d40f9  ldr       x8, [x8, #0x18]
0x00127DE0  00013fd6  blr       x8
0x00127DE4  e81340f9  ldr       x8, [sp, #0x20]
0x00127DE8  76422991  add       x22, x19, #0xa50
0x00127DEC  692245f9  ldr       x9, [x19, #0xa40]
0x00127DF0  092103f9  str       x9, [x8, #0x640]
0x00127DF4  152503f9  str       x21, [x8, #0x648]
0x00127DF8  162903f9  str       x22, [x8, #0x650]
0x00127DFC  74e642f9  ldr       x20, [x19, #0x5c8]
0x00127E00  802e40f9  ldr       x0, [x20, #0x58]
0x00127E04  a0031ef8  stur      x0, [x29, #-0x20]
0x00127E08  800000b4  cbz       x0, #0x127e18
0x00127E0C  088c44f8  ldr       x8, [x0, #0x48]!
0x00127E10  080940f9  ldr       x8, [x8, #0x10]
0x00127E14  00013fd6  blr       x8
0x00127E18  232700f0  adrp      x3, #0x60e000
0x00127E1C  630c3991  add       x3, x3, #0xe43
0x00127E20  e8630091  add       x8, sp, #0x18
0x00127E24  a18300d1  sub       x1, x29, #0x20
```
#### 0x127E50, FDE 0x127C10
```asm
0x00127E20  e8630091  add       x8, sp, #0x18
0x00127E24  a18300d1  sub       x1, x29, #0x20
0x00127E28  e00314aa  mov       x0, x20
0x00127E2C  e2031faa  mov       x2, xzr
0x00127E30  35080094  bl        #0x129f04
0x00127E34  a0035ef8  ldur      x0, [x29, #-0x20]
0x00127E38  800000b4  cbz       x0, #0x127e48
0x00127E3C  088c44f8  ldr       x8, [x0, #0x48]!
0x00127E40  080d40f9  ldr       x8, [x8, #0x18]
0x00127E44  00013fd6  blr       x8
0x00127E48  e80f40f9  ldr       x8, [sp, #0x18]
0x00127E4C  692245f9  ldr       x9, [x19, #0xa40]
0x00127E50  092103f9  str       x9, [x8, #0x640]
0x00127E54  152503f9  str       x21, [x8, #0x648]
0x00127E58  162903f9  str       x22, [x8, #0x650]
0x00127E5C  74e642f9  ldr       x20, [x19, #0x5c8]
0x00127E60  802e40f9  ldr       x0, [x20, #0x58]
0x00127E64  a0031ef8  stur      x0, [x29, #-0x20]
0x00127E68  800000b4  cbz       x0, #0x127e78
0x00127E6C  088c44f8  ldr       x8, [x0, #0x48]!
0x00127E70  080940f9  ldr       x8, [x8, #0x10]
0x00127E74  00013fd6  blr       x8
0x00127E78  63270090  adrp      x3, #0x613000
0x00127E7C  630c0591  add       x3, x3, #0x143
0x00127E80  e8430091  add       x8, sp, #0x10
0x00127E84  a18300d1  sub       x1, x29, #0x20
```
#### 0x127EB0, FDE 0x127C10
```asm
0x00127E80  e8430091  add       x8, sp, #0x10
0x00127E84  a18300d1  sub       x1, x29, #0x20
0x00127E88  e00314aa  mov       x0, x20
0x00127E8C  e2031faa  mov       x2, xzr
0x00127E90  f1080094  bl        #0x12a254
0x00127E94  a0035ef8  ldur      x0, [x29, #-0x20]
0x00127E98  800000b4  cbz       x0, #0x127ea8
0x00127E9C  088c44f8  ldr       x8, [x0, #0x48]!
0x00127EA0  080d40f9  ldr       x8, [x8, #0x18]
0x00127EA4  00013fd6  blr       x8
0x00127EA8  e80b40f9  ldr       x8, [sp, #0x10]
0x00127EAC  692245f9  ldr       x9, [x19, #0xa40]
0x00127EB0  092103f9  str       x9, [x8, #0x640]
0x00127EB4  152503f9  str       x21, [x8, #0x648]
0x00127EB8  162903f9  str       x22, [x8, #0x650]
0x00127EBC  74e642f9  ldr       x20, [x19, #0x5c8]
0x00127EC0  802e40f9  ldr       x0, [x20, #0x58]
0x00127EC4  a0031ef8  stur      x0, [x29, #-0x20]
0x00127EC8  800000b4  cbz       x0, #0x127ed8
0x00127ECC  088c44f8  ldr       x8, [x0, #0x48]!
0x00127ED0  080940f9  ldr       x8, [x8, #0x10]
0x00127ED4  00013fd6  blr       x8
0x00127ED8  63270090  adrp      x3, #0x613000
0x00127EDC  63bc3191  add       x3, x3, #0xc6f
0x00127EE0  e8230091  add       x8, sp, #8
0x00127EE4  a18300d1  sub       x1, x29, #0x20
```
#### 0x127F20, FDE 0x127C10
```asm
0x00127EF0  e8090094  bl        #0x12a690
0x00127EF4  a0035ef8  ldur      x0, [x29, #-0x20]
0x00127EF8  800000b4  cbz       x0, #0x127f08
0x00127EFC  088c44f8  ldr       x8, [x0, #0x48]!
0x00127F00  080d40f9  ldr       x8, [x8, #0x18]
0x00127F04  00013fd6  blr       x8
0x00127F08  e80740f9  ldr       x8, [sp, #8]
0x00127F0C  602700b0  adrp      x0, #0x614000
0x00127F10  00641691  add       x0, x0, #0x599
0x00127F14  692245f9  ldr       x9, [x19, #0xa40]
0x00127F18  622700f0  adrp      x2, #0x616000
0x00127F1C  421c2391  add       x2, x2, #0x8c7
0x00127F20  092103f9  str       x9, [x8, #0x640]
0x00127F24  152503f9  str       x21, [x8, #0x648]
0x00127F28  162903f9  str       x22, [x8, #0x650]
0x00127F2C  61e642f9  ldr       x1, [x19, #0x5c8]
0x00127F30  0239fc97  bl        #0x36338
0x00127F34  62e642f9  ldr       x2, [x19, #0x5c8]
0x00127F38  a02700f0  adrp      x0, #0x61e000
0x00127F3C  007c0e91  add       x0, x0, #0x39f
0x00127F40  412700b0  adrp      x1, #0x610000
0x00127F44  21283791  add       x1, x1, #0xdca
0x00127F48  6f20fc97  bl        #0x30104
0x00127F4C  c8330090  adrp      x8, #0x79f000
0x00127F50  21028052  mov       w1, #0x11
0x00127F54  08d142f9  ldr       x8, [x8, #0x5a0]
```
#### 0x129A90, FDE 0x1299C4
```asm
0x00129A60  e10313aa  mov       x1, x19
0x00129A64  e20317aa  mov       x2, x23
0x00129A68  e30319aa  mov       x3, x25
0x00129A6C  e4f9fb97  bl        #0x281fc
0x00129A70  c8330090  adrp      x8, #0x7a1000
0x00129A74  f70314aa  mov       x23, x20
0x00129A78  08a544f9  ldr       x8, [x8, #0x948]
0x00129A7C  9f3a03f9  str       xzr, [x20, #0x670]
0x00129A80  9f3e03f9  str       xzr, [x20, #0x678]
0x00129A84  09a10291  add       x9, x8, #0xa8
0x00129A88  9f4203f9  str       xzr, [x20, #0x680]
0x00129A8C  9f4603f9  str       xzr, [x20, #0x688]
0x00129A90  9f2203f9  str       xzr, [x20, #0x640]
0x00129A94  9f2603f9  str       xzr, [x20, #0x648]
0x00129A98  9f2a03f9  str       xzr, [x20, #0x650]
0x00129A9C  9f2e03f9  str       xzr, [x20, #0x658]
0x00129AA0  9f3203f9  str       xzr, [x20, #0x660]
0x00129AA4  d40200f9  str       x20, [x22]
0x00129AA8  e98e04f8  str       x9, [x23, #0x48]!
0x00129AAC  09a10391  add       x9, x8, #0xe8
0x00129AB0  08410091  add       x8, x8, #0x10
0x00129AB4  e00317aa  mov       x0, x23
0x00129AB8  892a00f9  str       x9, [x20, #0x50]
0x00129ABC  886200a9  stp       x8, x24, [x20]
0x00129AC0  08de8052  mov       w8, #0x6f0
0x00129AC4  942201a9  stp       x20, x8, [x20, #0x10]
```
#### 0x129DC4, FDE 0x129CE8
```asm
0x00129D94  c8330090  adrp      x8, #0x7a1000
0x00129D98  f70314aa  mov       x23, x20
0x00129D9C  08a944f9  ldr       x8, [x8, #0x950]
0x00129DA0  9f3203f9  str       xzr, [x20, #0x660]
0x00129DA4  9f3603f9  str       xzr, [x20, #0x668]
0x00129DA8  09a10291  add       x9, x8, #0xa8
0x00129DAC  9f3a03f9  str       xzr, [x20, #0x670]
0x00129DB0  9f3e03f9  str       xzr, [x20, #0x678]
0x00129DB4  9f7203f9  str       xzr, [x20, #0x6e0]
0x00129DB8  9f7603f9  str       xzr, [x20, #0x6e8]
0x00129DBC  9f7a03f9  str       xzr, [x20, #0x6f0]
0x00129DC0  9f7e03f9  str       xzr, [x20, #0x6f8]
0x00129DC4  9f2203f9  str       xzr, [x20, #0x640]
0x00129DC8  9f2603f9  str       xzr, [x20, #0x648]
0x00129DCC  9f2a03f9  str       xzr, [x20, #0x650]
0x00129DD0  d40200f9  str       x20, [x22]
0x00129DD4  e98e04f8  str       x9, [x23, #0x48]!
0x00129DD8  09a10391  add       x9, x8, #0xe8
0x00129DDC  08410091  add       x8, x8, #0x10
0x00129DE0  e00317aa  mov       x0, x23
0x00129DE4  892a00f9  str       x9, [x20, #0x50]
0x00129DE8  09028052  mov       w9, #0x10
0x00129DEC  891200f9  str       x9, [x20, #0x20]
0x00129DF0  886200a9  stp       x8, x24, [x20]
0x00129DF4  08ec8052  mov       w8, #0x760
0x00129DF8  942201a9  stp       x20, x8, [x20, #0x10]
```
#### 0x12A0F0, FDE 0x12A014
```asm
0x0012A0C0  a83300f0  adrp      x8, #0x7a1000
0x0012A0C4  f70314aa  mov       x23, x20
0x0012A0C8  08ad44f9  ldr       x8, [x8, #0x958]
0x0012A0CC  9f3203f9  str       xzr, [x20, #0x660]
0x0012A0D0  9f3603f9  str       xzr, [x20, #0x668]
0x0012A0D4  09a10291  add       x9, x8, #0xa8
0x0012A0D8  9f3a03f9  str       xzr, [x20, #0x670]
0x0012A0DC  9f3e03f9  str       xzr, [x20, #0x678]
0x0012A0E0  9f7203f9  str       xzr, [x20, #0x6e0]
0x0012A0E4  9f7603f9  str       xzr, [x20, #0x6e8]
0x0012A0E8  9f7a03f9  str       xzr, [x20, #0x6f0]
0x0012A0EC  9f7e03f9  str       xzr, [x20, #0x6f8]
0x0012A0F0  9f2203f9  str       xzr, [x20, #0x640]
0x0012A0F4  9f2603f9  str       xzr, [x20, #0x648]
0x0012A0F8  9f2a03f9  str       xzr, [x20, #0x650]
0x0012A0FC  9fb203f9  str       xzr, [x20, #0x760]
0x0012A100  9fb603f9  str       xzr, [x20, #0x768]
0x0012A104  9fba03f9  str       xzr, [x20, #0x770]
0x0012A108  e98e04f8  str       x9, [x23, #0x48]!
0x0012A10C  09a10391  add       x9, x8, #0xe8
0x0012A110  08410091  add       x8, x8, #0x10
0x0012A114  e00317aa  mov       x0, x23
0x0012A118  892a00f9  str       x9, [x20, #0x50]
0x0012A11C  09028052  mov       w9, #0x10
0x0012A120  9fbe03f9  str       xzr, [x20, #0x778]
0x0012A124  9fc203f9  str       xzr, [x20, #0x780]
```
#### 0x12A588, FDE 0x12A4BC
```asm
0x0012A558  9f3203f9  str       xzr, [x20, #0x660]
0x0012A55C  9f3603f9  str       xzr, [x20, #0x668]
0x0012A560  09410091  add       x9, x8, #0x10
0x0012A564  0aa10291  add       x10, x8, #0xa8
0x0012A568  08a10391  add       x8, x8, #0xe8
0x0012A56C  9f3a03f9  str       xzr, [x20, #0x670]
0x0012A570  9f3e03f9  str       xzr, [x20, #0x678]
0x0012A574  9f7203f9  str       xzr, [x20, #0x6e0]
0x0012A578  9f7603f9  str       xzr, [x20, #0x6e8]
0x0012A57C  9f7a03f9  str       xzr, [x20, #0x6f0]
0x0012A580  9f7e03f9  str       xzr, [x20, #0x6f8]
0x0012A584  9f821d39  strb      wzr, [x20, #0x760]
0x0012A588  9f2203f9  str       xzr, [x20, #0x640]
0x0012A58C  9f2603f9  str       xzr, [x20, #0x648]
0x0012A590  9f2a03f9  str       xzr, [x20, #0x650]
0x0012A594  890200f9  str       x9, [x20]
0x0012A598  09928252  mov       w9, #0x1490
0x0012A59C  9502098b  add       x21, x20, x9
0x0012A5A0  9fce07b9  str       wzr, [x20, #0x7cc]
0x0012A5A4  8aa204a9  stp       x10, x8, [x20, #0x48]
0x0012A5A8  88921d91  add       x8, x20, #0x764
0x0012A5AC  1f3100f9  str       xzr, [x8, #0x60]
0x0012A5B0  1f7d00a9  stp       xzr, xzr, [x8]
0x0012A5B4  1f7d01a9  stp       xzr, xzr, [x8, #0x10]
0x0012A5B8  1f7d02a9  stp       xzr, xzr, [x8, #0x20]
0x0012A5BC  1f7d03a9  stp       xzr, xzr, [x8, #0x30]
```
#### 0x12A870, FDE 0x12A7A0
```asm
0x0012A840  e20317aa  mov       x2, x23
0x0012A844  e30319aa  mov       x3, x25
0x0012A848  6df6fb97  bl        #0x281fc
0x0012A84C  9f3203f9  str       xzr, [x20, #0x660]
0x0012A850  a83300f0  adrp      x8, #0x7a1000
0x0012A854  f70314aa  mov       x23, x20
0x0012A858  08b544f9  ldr       x8, [x8, #0x968]
0x0012A85C  80821b91  add       x0, x20, #0x6e0
0x0012A860  9f3603f9  str       xzr, [x20, #0x668]
0x0012A864  9f3a03f9  str       xzr, [x20, #0x670]
0x0012A868  09410091  add       x9, x8, #0x10
0x0012A86C  9f3e03f9  str       xzr, [x20, #0x678]
0x0012A870  9f2203f9  str       xzr, [x20, #0x640]
0x0012A874  9f2603f9  str       xzr, [x20, #0x648]
0x0012A878  9f2a03f9  str       xzr, [x20, #0x650]
0x0012A87C  890200f9  str       x9, [x20]
0x0012A880  09a10291  add       x9, x8, #0xa8
0x0012A884  08a10391  add       x8, x8, #0xe8
0x0012A888  e98e04f8  str       x9, [x23, #0x48]!
0x0012A88C  882a00f9  str       x8, [x20, #0x50]
0x0012A890  b8990694  bl        #0x2d0f70
0x0012A894  a83300f0  adrp      x8, #0x7a1000
0x0012A898  09028052  mov       w9, #0x10
0x0012A89C  08a541f9  ldr       x8, [x8, #0x348]
0x0012A8A0  9fa206f9  str       xzr, [x20, #0xd40]
0x0012A8A4  98d200a9  stp       x24, x20, [x20, #8]
```
#### 0x13CDFC, FDE 0x13CA00
```asm
0x0013CDCC  e00316aa  mov       x0, x22
0x0013CDD0  080d40f9  ldr       x8, [x8, #0x18]
0x0013CDD4  00013fd6  blr       x8
0x0013CDD8  606a41f9  ldr       x0, [x19, #0x2d0]
0x0013CDDC  08a58bd2  mov       x8, #0x5d28
0x0013CDE0  8814bcf2  movk      x8, #0xe0a4, lsl #16
0x0013CDE4  08ccc1f2  movk      x8, #0xe60, lsl #32
0x0013CDE8  a831ebf2  movk      x8, #0x598d, lsl #48
0x0013CDEC  e80300f9  str       x8, [sp]
0x0013CDF0  e1030091  mov       x1, sp
0x0013CDF4  f7030091  mov       x23, sp
0x0013CDF8  f22a0694  bl        #0x2c79c0
0x0013CDFC  602203f9  str       x0, [x19, #0x640]
0x0013CE00  612700f0  adrp      x1, #0x62b000
0x0013CE04  21802991  add       x1, x1, #0xa60
0x0013CE08  e00315aa  mov       x0, x21
0x0013CE0C  4fc0fb97  bl        #0x2cf48
0x0013CE10  602603f9  str       x0, [x19, #0x648]
0x0013CE14  e00315aa  mov       x0, x21
0x0013CE18  e1031f2a  mov       w1, wzr
0x0013CE1C  a8bbfb97  bl        #0x2bcbc
0x0013CE20  612700f0  adrp      x1, #0x62b000
0x0013CE24  21a02991  add       x1, x1, #0xa68
0x0013CE28  e00315aa  mov       x0, x21
0x0013CE2C  aebffb97  bl        #0x2cce4
0x0013CE30  603203f9  str       x0, [x19, #0x660]
```
#### 0x13D7AC, FDE 0x13D790
```asm
0x0013D790  fd7bbea9  stp       x29, x30, [sp, #-0x20]!
0x0013D794  f30b00f9  str       x19, [sp, #0x10]
0x0013D798  fd030091  mov       x29, sp
0x0013D79C  081843f9  ldr       x8, [x0, #0x630]
0x0013D7A0  f30300aa  mov       x19, x0
0x0013D7A4  e80000b4  cbz       x8, #0x13d7c0
0x0013D7A8  60221991  add       x0, x19, #0x648
0x0013D7AC  7f2203f9  str       xzr, [x19, #0x640]
0x0013D7B0  7f1e03f9  str       xzr, [x19, #0x638]
0x0013D7B4  7f1a03f9  str       xzr, [x19, #0x630]
0x0013D7B8  7f1603f9  str       xzr, [x19, #0x628]
0x0013D7BC  00013fd6  blr       x8
0x0013D7C0  602201d1  sub       x0, x19, #0x48
0x0013D7C4  f30b40f9  ldr       x19, [sp, #0x10]
0x0013D7C8  fd7bc2a8  ldp       x29, x30, [sp], #0x20
0x0013D7CC  95abfb17  b         #0x28620
```
#### 0x13D7EC, FDE 0x13D7D0
```asm
0x0013D7D0  fd7bbea9  stp       x29, x30, [sp, #-0x20]!
0x0013D7D4  f30b00f9  str       x19, [sp, #0x10]
0x0013D7D8  fd030091  mov       x29, sp
0x0013D7DC  081843f9  ldr       x8, [x0, #0x630]
0x0013D7E0  f30300aa  mov       x19, x0
0x0013D7E4  e80000b4  cbz       x8, #0x13d800
0x0013D7E8  60221991  add       x0, x19, #0x648
0x0013D7EC  7f2203f9  str       xzr, [x19, #0x640]
0x0013D7F0  7f1e03f9  str       xzr, [x19, #0x638]
0x0013D7F4  7f1a03f9  str       xzr, [x19, #0x630]
0x0013D7F8  7f1603f9  str       xzr, [x19, #0x628]
0x0013D7FC  00013fd6  blr       x8
0x0013D800  602201d1  sub       x0, x19, #0x48
0x0013D804  f30b40f9  ldr       x19, [sp, #0x10]
0x0013D808  fd7bc2a8  ldp       x29, x30, [sp], #0x20
0x0013D80C  85abfb17  b         #0x28620
```
#### 0x13EA2C, FDE 0x13E980
```asm
0x0013E9FC  00013fd6  blr       x8
0x0013EA00  f40300aa  mov       x20, x0
0x0013EA04  a00000b5  cbnz      x0, #0x13ea18
0x0013EA08  080340f9  ldr       x8, [x24]
0x0013EA0C  e00318aa  mov       x0, x24
0x0013EA10  085d40f9  ldr       x8, [x8, #0xb8]
0x0013EA14  00013fd6  blr       x8
0x0013EA18  e00314aa  mov       x0, x20
0x0013EA1C  e10313aa  mov       x1, x19
0x0013EA20  e20317aa  mov       x2, x23
0x0013EA24  e30319aa  mov       x3, x25
0x0013EA28  f5a5fb97  bl        #0x281fc
0x0013EA2C  9f2203f9  str       xzr, [x20, #0x640]
0x0013EA30  083300f0  adrp      x8, #0x7a1000
0x0013EA34  f70314aa  mov       x23, x20
0x0013EA38  085945f9  ldr       x8, [x8, #0xab0]
0x0013EA3C  80621c91  add       x0, x20, #0x718
0x0013EA40  a2588052  mov       w2, #0x2c5
0x0013EA44  e1031f2a  mov       w1, wzr
0x0013EA48  9f2a03f9  str       xzr, [x20, #0x650]
0x0013EA4C  9f2e03f9  str       xzr, [x20, #0x658]
0x0013EA50  9f3203f9  str       xzr, [x20, #0x660]
0x0013EA54  09a10291  add       x9, x8, #0xa8
0x0013EA58  9f3603f9  str       xzr, [x20, #0x668]
0x0013EA5C  9f6a03f9  str       xzr, [x20, #0x6d0]
0x0013EA60  9f0a07b9  str       wzr, [x20, #0x708]
```
#### 0x1439F8, FDE 0x1438C0
```asm
0x001439C8  f70300aa  mov       x23, x0
0x001439CC  a00000b4  cbz       x0, #0x1439e0
0x001439D0  e00317aa  mov       x0, x23
0x001439D4  088c44f8  ldr       x8, [x0, #0x48]!
0x001439D8  080940f9  ldr       x8, [x8, #0x10]
0x001439DC  00013fd6  blr       x8
0x001439E0  602243f9  ldr       x0, [x19, #0x640]
0x001439E4  800000b4  cbz       x0, #0x1439f4
0x001439E8  088c44f8  ldr       x8, [x0, #0x48]!
0x001439EC  080d40f9  ldr       x8, [x8, #0x18]
0x001439F0  00013fd6  blr       x8
0x001439F4  1f070071  cmp       w24, #1
0x001439F8  772203f9  str       x23, [x19, #0x640]
0x001439FC  6b050054  b.lt      #0x143aa8
0x00143A00  48d03bd5  mrs       x8, tpidr_el0
0x00143A04  f7031f2a  mov       w23, wzr
0x00143A08  19c97392  and       x25, x8, #0xffffffffffffe000
0x00143A0C  1f2003d5  nop       
0x00143A10  682243f9  ldr       x8, [x19, #0x640]
0x00143A14  f79300b9  str       w23, [sp, #0x90]
0x00143A18  ff530239  strb      wzr, [sp, #0x94]
0x00143A1C  09294ea9  ldp       x9, x10, [x8, #0xe0]
0x00143A20  210d0a8b  add       x1, x9, x10, lsl #3
0x00143A24  097940f9  ldr       x9, [x8, #0xf0]
0x00143A28  5f0109eb  cmp       x10, x9
0x00143A2C  c0020054  b.eq      #0x143a84
```
#### 0x1461F8, FDE 0x14607C
```asm
0x001461C8  e80000b4  cbz       x8, #0x1461e4
0x001461CC  60c21991  add       x0, x19, #0x670
0x001461D0  7f3603f9  str       xzr, [x19, #0x668]
0x001461D4  7f3203f9  str       xzr, [x19, #0x660]
0x001461D8  7f2e03f9  str       xzr, [x19, #0x658]
0x001461DC  7f2a03f9  str       xzr, [x19, #0x650]
0x001461E0  00013fd6  blr       x8
0x001461E4  602243f9  ldr       x0, [x19, #0x640]
0x001461E8  a00000b4  cbz       x0, #0x1461fc
0x001461EC  088c44f8  ldr       x8, [x0, #0x48]!
0x001461F0  080d40f9  ldr       x8, [x8, #0x18]
0x001461F4  00013fd6  blr       x8
0x001461F8  7f2203f9  str       xzr, [x19, #0x640]
0x001461FC  e00313aa  mov       x0, x19
0x00146200  f30b40f9  ldr       x19, [sp, #0x10]
0x00146204  fd7bc2a8  ldp       x29, x30, [sp], #0x20
0x00146208  0689fb17  b         #0x28620
```
#### 0x14800C, FDE 0x147E4C
```asm
0x00147FDC  f3040094  bl        #0x1493a8
0x00147FE0  e00b40f9  ldr       x0, [sp, #0x10]
0x00147FE4  800000b4  cbz       x0, #0x147ff4
0x00147FE8  088c44f8  ldr       x8, [x0, #0x48]!
0x00147FEC  080d40f9  ldr       x8, [x8, #0x18]
0x00147FF0  00013fd6  blr       x8
0x00147FF4  e80740f9  ldr       x8, [sp, #8]
0x00147FF8  a02600f0  adrp      x0, #0x61e000
0x00147FFC  007c0e91  add       x0, x0, #0x39f
0x00148000  693245f9  ldr       x9, [x19, #0xa60]
0x00148004  41260090  adrp      x1, #0x610000
0x00148008  21283791  add       x1, x1, #0xdca
0x0014800C  092103f9  str       x9, [x8, #0x640]
0x00148010  142503f9  str       x20, [x8, #0x648]
0x00148014  62e642f9  ldr       x2, [x19, #0x5c8]
0x00148018  3ba0fb97  bl        #0x30104
0x0014801C  c83200b0  adrp      x8, #0x7a1000
0x00148020  202600b0  adrp      x0, #0x60d000
0x00148024  00c42891  add       x0, x0, #0xa31
0x00148028  088142f9  ldr       x8, [x8, #0x500]
0x0014802C  61e642f9  ldr       x1, [x19, #0x5c8]
0x00148030  e3031f2a  mov       w3, wzr
0x00148034  080140f9  ldr       x8, [x8]
0x00148038  021540f9  ldr       x2, [x8, #0x28]
0x0014803C  4fbefb97  bl        #0x37978
0x00148040  a83200f0  adrp      x8, #0x79f000
```
#### 0x149590, FDE 0x1494B8
```asm
0x00149560  e10313aa  mov       x1, x19
0x00149564  e20317aa  mov       x2, x23
0x00149568  e3031aaa  mov       x3, x26
0x0014956C  247bfb97  bl        #0x281fc
0x00149570  c8320090  adrp      x8, #0x7a1000
0x00149574  69008052  mov       w9, #3
0x00149578  08d945f9  ldr       x8, [x8, #0xbb0]
0x0014957C  f70314aa  mov       x23, x20
0x00149580  895206b9  str       w9, [x20, #0x650]
0x00149584  80621991  add       x0, x20, #0x658
0x00149588  42478152  mov       w2, #0xa3a
0x0014958C  a207a072  movk      w2, #0x3d, lsl #16
0x00149590  9f2203f9  str       xzr, [x20, #0x640]
0x00149594  e1031f2a  mov       w1, wzr
0x00149598  9f2603f9  str       xzr, [x20, #0x648]
0x0014959C  09a10291  add       x9, x8, #0xa8
0x001495A0  e98e04f8  str       x9, [x23, #0x48]!
0x001495A4  09410091  add       x9, x8, #0x10
0x001495A8  08a10391  add       x8, x8, #0xe8
0x001495AC  890200f9  str       x9, [x20]
0x001495B0  89464f91  add       x9, x20, #0x3d1, lsl #12
0x001495B4  882a00f9  str       x8, [x20, #0x50]
0x001495B8  88764f91  add       x8, x20, #0x3dd, lsl #12
0x001495BC  3a510291  add       x26, x9, #0x94
0x001495C0  1ba10f91  add       x27, x8, #0x3e8
0x001495C4  e3b21294  bl        #0x5f6150
```
#### 0x14CDFC, FDE 0x14CA30
```asm
0x0014CDCC  1f2003d5  nop       
0x0014CDD0  d60240f9  ldr       x22, [x22]
0x0014CDD4  df0200eb  cmp       x22, x0
0x0014CDD8  c41a40fa  ccmp      x22, #0, #4, ne
0x0014CDDC  a1ffff54  b.ne      #0x14cdd0
0x0014CDE0  760c00b4  cbz       x22, #0x14cf6c
0x0014CDE4  b54201d1  sub       x21, x21, #0x50
0x0014CDE8  888e44f8  ldr       x8, [x20, #0x48]!
0x0014CDEC  e00314aa  mov       x0, x20
0x0014CDF0  080d40f9  ldr       x8, [x8, #0x18]
0x0014CDF4  00013fd6  blr       x8
0x0014CDF8  350e00b4  cbz       x21, #0x14cfbc
0x0014CDFC  f52203f9  str       x21, [x23, #0x640]
0x0014CE00  603245f9  ldr       x0, [x19, #0xa60]
0x0014CE04  400000b4  cbz       x0, #0x14ce0c
0x0014CE08  4c3bfd97  bl        #0x9bb38
0x0014CE0C  e80f40f9  ldr       x8, [sp, #0x18]
0x0014CE10  00ed06b9  str       w0, [x8, #0x6ec]
0x0014CE14  a83200b0  adrp      x8, #0x7a1000
0x0014CE18  802600d0  adrp      x0, #0x61e000
0x0014CE1C  00e80e91  add       x0, x0, #0x3ba
0x0014CE20  083943f9  ldr       x8, [x8, #0x670]
0x0014CE24  61e642f9  ldr       x1, [x19, #0x5c8]
0x0014CE28  080140f9  ldr       x8, [x8]
0x0014CE2C  021540f9  ldr       x2, [x8, #0x28]
0x0014CE30  c6cffb97  bl        #0x40d48
```
#### 0x14DF2C, FDE 0x14DE78
```asm
0x0014DEFC  c20240f9  ldr       x2, [x22]
0x0014DF00  a30240f9  ldr       x3, [x21]
0x0014DF04  be68fb97  bl        #0x281fc
0x0014DF08  9fee1839  strb      wzr, [x20, #0x63b]
0x0014DF0C  a8320090  adrp      x8, #0x7a1000
0x0014DF10  80022691  add       x0, x20, #0x980
0x0014DF14  081d46f9  ldr       x8, [x8, #0xc38]
0x0014DF18  9f3203f9  str       xzr, [x20, #0x660]
0x0014DF1C  09410091  add       x9, x8, #0x10
0x0014DF20  9f3603f9  str       xzr, [x20, #0x668]
0x0014DF24  9f7206b9  str       wzr, [x20, #0x670]
0x0014DF28  9f3e03f9  str       xzr, [x20, #0x678]
0x0014DF2C  9f2203f9  str       xzr, [x20, #0x640]
0x0014DF30  9f2603f9  str       xzr, [x20, #0x648]
0x0014DF34  9f2a03f9  str       xzr, [x20, #0x650]
0x0014DF38  9f5a06b9  str       wzr, [x20, #0x658]
0x0014DF3C  9f7203f9  str       xzr, [x20, #0x6e0]
0x0014DF40  9f7603f9  str       xzr, [x20, #0x6e8]
0x0014DF44  9fc21b39  strb      wzr, [x20, #0x6f0]
0x0014DF48  9f7e03f9  str       xzr, [x20, #0x6f8]
0x0014DF4C  9f8203f9  str       xzr, [x20, #0x700]
0x0014DF50  890200f9  str       x9, [x20]
0x0014DF54  09a10291  add       x9, x8, #0xa8
0x0014DF58  08a10391  add       x8, x8, #0xe8
0x0014DF5C  9f8603f9  str       xzr, [x20, #0x708]
0x0014DF60  9f8a03f9  str       xzr, [x20, #0x710]
```
#### 0x14F9A4, FDE 0x14F984
```asm
0x0014F984  fd7bbea9  stp       x29, x30, [sp, #-0x20]!
0x0014F988  f30b00f9  str       x19, [sp, #0x10]
0x0014F98C  fd030091  mov       x29, sp
0x0014F990  f30300aa  mov       x19, x0
0x0014F994  1a62fb97  bl        #0x281fc
0x0014F998  883200d0  adrp      x8, #0x7a1000
0x0014F99C  69f21991  add       x9, x19, #0x67c
0x0014F9A0  083d46f9  ldr       x8, [x8, #0xc78]
0x0014F9A4  7f2203f9  str       xzr, [x19, #0x640]
0x0014F9A8  7f9e06b9  str       wzr, [x19, #0x69c]
0x0014F9AC  0a410091  add       x10, x8, #0x10
0x0014F9B0  7f8203f9  str       xzr, [x19, #0x700]
0x0014F9B4  7f8603f9  str       xzr, [x19, #0x708]
0x0014F9B8  6a0200f9  str       x10, [x19]
0x0014F9BC  0aa10291  add       x10, x8, #0xa8
0x0014F9C0  08a10391  add       x8, x8, #0xe8
0x0014F9C4  3f7d00a9  stp       xzr, xzr, [x9]
0x0014F9C8  3f7d01a9  stp       xzr, xzr, [x9, #0x10]
0x0014F9CC  6aa204a9  stp       x10, x8, [x19, #0x48]
0x0014F9D0  a80180d2  mov       x8, #0xd
0x0014F9D4  a801c0f2  movk      x8, #0xd, lsl #32
0x0014F9D8  682603f9  str       x8, [x19, #0x648]
```
#### 0x150688, FDE 0x150550
```asm
0x00150658  8aaafb97  bl        #0x3b080
0x0015065C  f70300aa  mov       x23, x0
0x00150660  a00000b4  cbz       x0, #0x150674
0x00150664  e00317aa  mov       x0, x23
0x00150668  088c44f8  ldr       x8, [x0, #0x48]!
0x0015066C  080940f9  ldr       x8, [x8, #0x10]
0x00150670  00013fd6  blr       x8
0x00150674  802243f9  ldr       x0, [x20, #0x640]
0x00150678  800000b4  cbz       x0, #0x150688
0x0015067C  088c44f8  ldr       x8, [x0, #0x48]!
0x00150680  080d40f9  ldr       x8, [x8, #0x18]
0x00150684  00013fd6  blr       x8
0x00150688  972203f9  str       x23, [x20, #0x640]
0x0015068C  b7831ef8  stur      x23, [x29, #-0x18]
0x00150690  b70000b4  cbz       x23, #0x1506a4
0x00150694  e88e44f8  ldr       x8, [x23, #0x48]!
0x00150698  e00317aa  mov       x0, x23
0x0015069C  080940f9  ldr       x8, [x8, #0x10]
0x001506A0  00013fd6  blr       x8
0x001506A4  a16300d1  sub       x1, x29, #0x18
0x001506A8  e00315aa  mov       x0, x21
0x001506AC  57840594  bl        #0x2b1808
0x001506B0  a0835ef8  ldur      x0, [x29, #-0x18]
0x001506B4  a00000b4  cbz       x0, #0x1506c8
0x001506B8  088c44f8  ldr       x8, [x0, #0x48]!
0x001506BC  080d40f9  ldr       x8, [x8, #0x18]
```
#### 0x151354, FDE 0x1512F8
```asm
0x00151324  e80000b4  cbz       x8, #0x151340
0x00151328  60821a91  add       x0, x19, #0x6a0
0x0015132C  7f4e03f9  str       xzr, [x19, #0x698]
0x00151330  7f4a03f9  str       xzr, [x19, #0x690]
0x00151334  7f4603f9  str       xzr, [x19, #0x688]
0x00151338  7f4203f9  str       xzr, [x19, #0x680]
0x0015133C  00013fd6  blr       x8
0x00151340  602243f9  ldr       x0, [x19, #0x640]
0x00151344  a00000b4  cbz       x0, #0x151358
0x00151348  088c44f8  ldr       x8, [x0, #0x48]!
0x0015134C  080d40f9  ldr       x8, [x8, #0x18]
0x00151350  00013fd6  blr       x8
0x00151354  7f2203f9  str       xzr, [x19, #0x640]
0x00151358  e00313aa  mov       x0, x19
0x0015135C  f30b40f9  ldr       x19, [sp, #0x10]
0x00151360  fd7bc2a8  ldp       x29, x30, [sp], #0x20
0x00151364  af5cfb17  b         #0x28620
```
#### 0x1513C4, FDE 0x151368
```asm
0x00151394  e80000b4  cbz       x8, #0x1513b0
0x00151398  60821a91  add       x0, x19, #0x6a0
0x0015139C  7f4e03f9  str       xzr, [x19, #0x698]
0x001513A0  7f4a03f9  str       xzr, [x19, #0x690]
0x001513A4  7f4603f9  str       xzr, [x19, #0x688]
0x001513A8  7f4203f9  str       xzr, [x19, #0x680]
0x001513AC  00013fd6  blr       x8
0x001513B0  602243f9  ldr       x0, [x19, #0x640]
0x001513B4  a00000b4  cbz       x0, #0x1513c8
0x001513B8  088c44f8  ldr       x8, [x0, #0x48]!
0x001513BC  080d40f9  ldr       x8, [x8, #0x18]
0x001513C0  00013fd6  blr       x8
0x001513C4  7f2203f9  str       xzr, [x19, #0x640]
0x001513C8  e00313aa  mov       x0, x19
0x001513CC  f30b40f9  ldr       x19, [sp, #0x10]
0x001513D0  fd7bc2a8  ldp       x29, x30, [sp], #0x20
0x001513D4  935cfb17  b         #0x28620
```
#### 0x151418, FDE 0x1513DC
```asm
0x001513E8  f30300aa  mov       x19, x0
0x001513EC  006043f9  ldr       x0, [x0, #0x6c0]
0x001513F0  a00000b4  cbz       x0, #0x151404
0x001513F4  088c44f8  ldr       x8, [x0, #0x48]!
0x001513F8  080d40f9  ldr       x8, [x8, #0x18]
0x001513FC  00013fd6  blr       x8
0x00151400  7f6203f9  str       xzr, [x19, #0x6c0]
0x00151404  682243f9  ldr       x8, [x19, #0x640]
0x00151408  e80000b4  cbz       x8, #0x151424
0x0015140C  60621991  add       x0, x19, #0x658
0x00151410  7f2a03f9  str       xzr, [x19, #0x650]
0x00151414  7f2603f9  str       xzr, [x19, #0x648]
0x00151418  7f2203f9  str       xzr, [x19, #0x640]
0x0015141C  7f1e03f9  str       xzr, [x19, #0x638]
0x00151420  00013fd6  blr       x8
0x00151424  60fe42f9  ldr       x0, [x19, #0x5f8]
0x00151428  a00000b4  cbz       x0, #0x15143c
0x0015142C  088c44f8  ldr       x8, [x0, #0x48]!
0x00151430  080d40f9  ldr       x8, [x8, #0x18]
0x00151434  00013fd6  blr       x8
0x00151438  7ffe02f9  str       xzr, [x19, #0x5f8]
0x0015143C  602201d1  sub       x0, x19, #0x48
0x00151440  f30b40f9  ldr       x19, [sp, #0x10]
0x00151444  fd7bc2a8  ldp       x29, x30, [sp], #0x20
0x00151448  765cfb17  b         #0x28620
```
#### 0x151488, FDE 0x15144C
```asm
0x00151458  f30300aa  mov       x19, x0
0x0015145C  006043f9  ldr       x0, [x0, #0x6c0]
0x00151460  a00000b4  cbz       x0, #0x151474
0x00151464  088c44f8  ldr       x8, [x0, #0x48]!
0x00151468  080d40f9  ldr       x8, [x8, #0x18]
0x0015146C  00013fd6  blr       x8
0x00151470  7f6203f9  str       xzr, [x19, #0x6c0]
0x00151474  682243f9  ldr       x8, [x19, #0x640]
0x00151478  e80000b4  cbz       x8, #0x151494
0x0015147C  60621991  add       x0, x19, #0x658
0x00151480  7f2a03f9  str       xzr, [x19, #0x650]
0x00151484  7f2603f9  str       xzr, [x19, #0x648]
0x00151488  7f2203f9  str       xzr, [x19, #0x640]
0x0015148C  7f1e03f9  str       xzr, [x19, #0x638]
0x00151490  00013fd6  blr       x8
0x00151494  60fe42f9  ldr       x0, [x19, #0x5f8]
0x00151498  a00000b4  cbz       x0, #0x1514ac
0x0015149C  088c44f8  ldr       x8, [x0, #0x48]!
0x001514A0  080d40f9  ldr       x8, [x8, #0x18]
0x001514A4  00013fd6  blr       x8
0x001514A8  7ffe02f9  str       xzr, [x19, #0x5f8]
0x001514AC  602201d1  sub       x0, x19, #0x48
0x001514B0  f30b40f9  ldr       x19, [sp, #0x10]
0x001514B4  fd7bc2a8  ldp       x29, x30, [sp], #0x20
0x001514B8  5a5cfb17  b         #0x28620
```
#### 0x1514FC, FDE 0x1514C4
```asm
0x001514CC  fd030091  mov       x29, sp
0x001514D0  f30300aa  mov       x19, x0
0x001514D4  005c43f9  ldr       x0, [x0, #0x6b8]
0x001514D8  a00000b4  cbz       x0, #0x1514ec
0x001514DC  088c44f8  ldr       x8, [x0, #0x48]!
0x001514E0  080d40f9  ldr       x8, [x8, #0x18]
0x001514E4  00013fd6  blr       x8
0x001514E8  7f5e03f9  str       xzr, [x19, #0x6b8]
0x001514EC  681e43f9  ldr       x8, [x19, #0x638]
0x001514F0  e80000b4  cbz       x8, #0x15150c
0x001514F4  60421991  add       x0, x19, #0x650
0x001514F8  7f2603f9  str       xzr, [x19, #0x648]
0x001514FC  7f2203f9  str       xzr, [x19, #0x640]
0x00151500  7f1e03f9  str       xzr, [x19, #0x638]
0x00151504  7f1a03f9  str       xzr, [x19, #0x630]
0x00151508  00013fd6  blr       x8
0x0015150C  60fa42f9  ldr       x0, [x19, #0x5f0]
0x00151510  a00000b4  cbz       x0, #0x151524
0x00151514  088c44f8  ldr       x8, [x0, #0x48]!
0x00151518  080d40f9  ldr       x8, [x8, #0x18]
0x0015151C  00013fd6  blr       x8
0x00151520  7ffa02f9  str       xzr, [x19, #0x5f0]
0x00151524  604201d1  sub       x0, x19, #0x50
0x00151528  f30b40f9  ldr       x19, [sp, #0x10]
0x0015152C  fd7bc2a8  ldp       x29, x30, [sp], #0x20
0x00151530  3c5cfb17  b         #0x28620
```
#### 0x15156C, FDE 0x151534
```asm
0x0015153C  fd030091  mov       x29, sp
0x00151540  f30300aa  mov       x19, x0
0x00151544  005c43f9  ldr       x0, [x0, #0x6b8]
0x00151548  a00000b4  cbz       x0, #0x15155c
0x0015154C  088c44f8  ldr       x8, [x0, #0x48]!
0x00151550  080d40f9  ldr       x8, [x8, #0x18]
0x00151554  00013fd6  blr       x8
0x00151558  7f5e03f9  str       xzr, [x19, #0x6b8]
0x0015155C  681e43f9  ldr       x8, [x19, #0x638]
0x00151560  e80000b4  cbz       x8, #0x15157c
0x00151564  60421991  add       x0, x19, #0x650
0x00151568  7f2603f9  str       xzr, [x19, #0x648]
0x0015156C  7f2203f9  str       xzr, [x19, #0x640]
0x00151570  7f1e03f9  str       xzr, [x19, #0x638]
0x00151574  7f1a03f9  str       xzr, [x19, #0x630]
0x00151578  00013fd6  blr       x8
0x0015157C  60fa42f9  ldr       x0, [x19, #0x5f0]
0x00151580  a00000b4  cbz       x0, #0x151594
0x00151584  088c44f8  ldr       x8, [x0, #0x48]!
0x00151588  080d40f9  ldr       x8, [x8, #0x18]
0x0015158C  00013fd6  blr       x8
0x00151590  7ffa02f9  str       xzr, [x19, #0x5f0]
0x00151594  604201d1  sub       x0, x19, #0x50
0x00151598  f30b40f9  ldr       x19, [sp, #0x10]
0x0015159C  fd7bc2a8  ldp       x29, x30, [sp], #0x20
0x001515A0  205cfb17  b         #0x28620
```
#### 0x1629E4, FDE 0x162964
```asm
0x001629B4  1700088b  add       x23, x0, x8
0x001629B8  08fa9352  mov       w8, #0x9fd0
0x001629BC  1800088b  add       x24, x0, x8
0x001629C0  082e9352  mov       w8, #0x9970
0x001629C4  1a00088b  add       x26, x0, x8
0x001629C8  08629252  mov       w8, #0x9310
0x001629CC  1b00088b  add       x27, x0, x8
0x001629D0  08969152  mov       w8, #0x8cb0
0x001629D4  1c00088b  add       x28, x0, x8
0x001629D8  08ca9052  mov       w8, #0x8650
0x001629DC  1400088b  add       x20, x0, x8
0x001629E0  0716fb97  bl        #0x281fc
0x001629E4  3f2303f9  str       xzr, [x25, #0x640]
0x001629E8  e83100f0  adrp      x8, #0x7a1000
0x001629EC  20431b91  add       x0, x25, #0x6d0
0x001629F0  08a946f9  ldr       x8, [x8, #0xd50]
0x001629F4  3f2703f9  str       xzr, [x25, #0x648]
0x001629F8  09410091  add       x9, x8, #0x10
0x001629FC  0aa10291  add       x10, x8, #0xa8
0x00162A00  08a10391  add       x8, x8, #0xe8
0x00162A04  3f2b03f9  str       xzr, [x25, #0x650]
0x00162A08  3f2f03f9  str       xzr, [x25, #0x658]
0x00162A0C  3f6303f9  str       xzr, [x25, #0x6c0]
0x00162A10  3f231b39  strb      wzr, [x25, #0x6c8]
0x00162A14  290300f9  str       x9, [x25]
0x00162A18  2aa304a9  stp       x10, x8, [x25, #0x48]
```
#### 0x167770, FDE 0x1675CC
```asm
0x00167740  606243f9  ldr       x0, [x19, #0x6c0]
0x00167744  a00000b4  cbz       x0, #0x167758
0x00167748  088c44f8  ldr       x8, [x0, #0x48]!
0x0016774C  080d40f9  ldr       x8, [x8, #0x18]
0x00167750  00013fd6  blr       x8
0x00167754  7f6203f9  str       xzr, [x19, #0x6c0]
0x00167758  682643f9  ldr       x8, [x19, #0x648]
0x0016775C  e80000b4  cbz       x8, #0x167778
0x00167760  60821991  add       x0, x19, #0x660
0x00167764  7f2e03f9  str       xzr, [x19, #0x658]
0x00167768  7f2a03f9  str       xzr, [x19, #0x650]
0x0016776C  7f2603f9  str       xzr, [x19, #0x648]
0x00167770  7f2203f9  str       xzr, [x19, #0x640]
0x00167774  00013fd6  blr       x8
0x00167778  e00313aa  mov       x0, x19
0x0016777C  f44f41a9  ldp       x20, x19, [sp, #0x10]
0x00167780  fd7bc2a8  ldp       x29, x30, [sp], #0x20
0x00167784  a703fb17  b         #0x28620
```
#### 0x167AA8, FDE 0x167840
```asm
0x00167A78  f9010094  bl        #0x16825c
0x00167A7C  e01340f9  ldr       x0, [sp, #0x20]
0x00167A80  800000b4  cbz       x0, #0x167a90
0x00167A84  088c44f8  ldr       x8, [x0, #0x48]!
0x00167A88  080d40f9  ldr       x8, [x8, #0x18]
0x00167A8C  00013fd6  blr       x8
0x00167A90  e80340f9  ldr       x8, [sp]
0x00167A94  a02500f0  adrp      x0, #0x61e000
0x00167A98  007c0e91  add       x0, x0, #0x39f
0x00167A9C  692245f9  ldr       x9, [x19, #0xa40]
0x00167AA0  412500b0  adrp      x1, #0x610000
0x00167AA4  21283791  add       x1, x1, #0xdca
0x00167AA8  092103f9  str       x9, [x8, #0x640]
0x00167AAC  62e642f9  ldr       x2, [x19, #0x5c8]
0x00167AB0  9521fb97  bl        #0x30104
0x00167AB4  e00340f9  ldr       x0, [sp]
0x00167AB8  800000b4  cbz       x0, #0x167ac8
0x00167ABC  088c44f8  ldr       x8, [x0, #0x48]!
0x00167AC0  080d40f9  ldr       x8, [x8, #0x18]
0x00167AC4  00013fd6  blr       x8
0x00167AC8  c8310090  adrp      x8, #0x79f000
0x00167ACC  41008052  mov       w1, #2
0x00167AD0  08d142f9  ldr       x8, [x8, #0x5a0]
0x00167AD4  e2031f2a  mov       w2, wzr
0x00167AD8  000140f9  ldr       x0, [x8]
0x00167ADC  ec99fa97  bl        #0xe28c
```
#### 0x168428, FDE 0x16836C
```asm
0x001683F8  e00318aa  mov       x0, x24
0x001683FC  085d40f9  ldr       x8, [x8, #0xb8]
0x00168400  00013fd6  blr       x8
0x00168404  e00314aa  mov       x0, x20
0x00168408  e10313aa  mov       x1, x19
0x0016840C  e20317aa  mov       x2, x23
0x00168410  e30319aa  mov       x3, x25
0x00168414  7afffa97  bl        #0x281fc
0x00168418  c83100b0  adrp      x8, #0x7a1000
0x0016841C  f70314aa  mov       x23, x20
0x00168420  08dd46f9  ldr       x8, [x8, #0xdb8]
0x00168424  9fda06b9  str       wzr, [x20, #0x6d8]
0x00168428  9f2203f9  str       xzr, [x20, #0x640]
0x0016842C  09a10291  add       x9, x8, #0xa8
0x00168430  9f2a03f9  str       xzr, [x20, #0x650]
0x00168434  9f2e03f9  str       xzr, [x20, #0x658]
0x00168438  9f3203f9  str       xzr, [x20, #0x660]
0x0016843C  9f3603f9  str       xzr, [x20, #0x668]
0x00168440  d40200f9  str       x20, [x22]
0x00168444  e98e04f8  str       x9, [x23, #0x48]!
0x00168448  09410091  add       x9, x8, #0x10
0x0016844C  08a10391  add       x8, x8, #0xe8
0x00168450  e00317aa  mov       x0, x23
0x00168454  882a00f9  str       x8, [x20, #0x50]
0x00168458  880080d2  mov       x8, #4
0x0016845C  2800c0f2  movk      x8, #1, lsl #32
```
#### 0x16B6C8, FDE 0x16B60C
```asm
0x0016B698  e00318aa  mov       x0, x24
0x0016B69C  085d40f9  ldr       x8, [x8, #0xb8]
0x0016B6A0  00013fd6  blr       x8
0x0016B6A4  e00314aa  mov       x0, x20
0x0016B6A8  e10313aa  mov       x1, x19
0x0016B6AC  e20317aa  mov       x2, x23
0x0016B6B0  e30319aa  mov       x3, x25
0x0016B6B4  d2f2fa97  bl        #0x281fc
0x0016B6B8  a83100d0  adrp      x8, #0x7a1000
0x0016B6BC  f70314aa  mov       x23, x20
0x0016B6C0  080547f9  ldr       x8, [x8, #0xe08]
0x0016B6C4  9fee1839  strb      wzr, [x20, #0x63b]
0x0016B6C8  9f2203f9  str       xzr, [x20, #0x640]
0x0016B6CC  09a10291  add       x9, x8, #0xa8
0x0016B6D0  d40200f9  str       x20, [x22]
0x0016B6D4  e98e04f8  str       x9, [x23, #0x48]!
0x0016B6D8  09410091  add       x9, x8, #0x10
0x0016B6DC  08a10391  add       x8, x8, #0xe8
0x0016B6E0  882a00f9  str       x8, [x20, #0x50]
0x0016B6E4  08ca8052  mov       w8, #0x650
0x0016B6E8  896200a9  stp       x9, x24, [x20]
0x0016B6EC  e00317aa  mov       x0, x23
0x0016B6F0  942201a9  stp       x20, x8, [x20, #0x10]
0x0016B6F4  08028052  mov       w8, #0x10
0x0016B6F8  881200f9  str       x8, [x20, #0x20]
0x0016B6FC  484f40f9  ldr       x8, [x26, #0x98]
```
#### 0x16B9D0, FDE 0x16B914
```asm
0x0016B9A0  e00318aa  mov       x0, x24
0x0016B9A4  085d40f9  ldr       x8, [x8, #0xb8]
0x0016B9A8  00013fd6  blr       x8
0x0016B9AC  e00314aa  mov       x0, x20
0x0016B9B0  e10313aa  mov       x1, x19
0x0016B9B4  e20317aa  mov       x2, x23
0x0016B9B8  e30319aa  mov       x3, x25
0x0016B9BC  10f2fa97  bl        #0x281fc
0x0016B9C0  a83100d0  adrp      x8, #0x7a1000
0x0016B9C4  f70314aa  mov       x23, x20
0x0016B9C8  080947f9  ldr       x8, [x8, #0xe10]
0x0016B9CC  9fee1839  strb      wzr, [x20, #0x63b]
0x0016B9D0  9f2203f9  str       xzr, [x20, #0x640]
0x0016B9D4  09a10291  add       x9, x8, #0xa8
0x0016B9D8  d40200f9  str       x20, [x22]
0x0016B9DC  e98e04f8  str       x9, [x23, #0x48]!
0x0016B9E0  09410091  add       x9, x8, #0x10
0x0016B9E4  08a10391  add       x8, x8, #0xe8
0x0016B9E8  882a00f9  str       x8, [x20, #0x50]
0x0016B9EC  08ca8052  mov       w8, #0x650
0x0016B9F0  896200a9  stp       x9, x24, [x20]
0x0016B9F4  e00317aa  mov       x0, x23
0x0016B9F8  942201a9  stp       x20, x8, [x20, #0x10]
0x0016B9FC  08028052  mov       w8, #0x10
0x0016BA00  881200f9  str       x8, [x20, #0x20]
0x0016BA04  484f40f9  ldr       x8, [x26, #0x98]
```
#### 0x16E3D0, FDE 0x16E318
```asm
0x0016E3A0  080340f9  ldr       x8, [x24]
0x0016E3A4  e00318aa  mov       x0, x24
0x0016E3A8  085d40f9  ldr       x8, [x8, #0xb8]
0x0016E3AC  00013fd6  blr       x8
0x0016E3B0  e00314aa  mov       x0, x20
0x0016E3B4  e10313aa  mov       x1, x19
0x0016E3B8  e20317aa  mov       x2, x23
0x0016E3BC  e30319aa  mov       x3, x25
0x0016E3C0  8fe7fa97  bl        #0x281fc
0x0016E3C4  883100f0  adrp      x8, #0x7a1000
0x0016E3C8  f70314aa  mov       x23, x20
0x0016E3CC  083147f9  ldr       x8, [x8, #0xe60]
0x0016E3D0  9f2203f9  str       xzr, [x20, #0x640]
0x0016E3D4  9f221939  strb      wzr, [x20, #0x648]
0x0016E3D8  09a10291  add       x9, x8, #0xa8
0x0016E3DC  d40200f9  str       x20, [x22]
0x0016E3E0  e98e04f8  str       x9, [x23, #0x48]!
0x0016E3E4  09410091  add       x9, x8, #0x10
0x0016E3E8  08a10391  add       x8, x8, #0xe8
0x0016E3EC  882a00f9  str       x8, [x20, #0x50]
0x0016E3F0  08ca8052  mov       w8, #0x650
0x0016E3F4  896200a9  stp       x9, x24, [x20]
0x0016E3F8  e00317aa  mov       x0, x23
0x0016E3FC  942201a9  stp       x20, x8, [x20, #0x10]
0x0016E400  08028052  mov       w8, #0x10
0x0016E404  881200f9  str       x8, [x20, #0x20]
```
#### 0x170554, FDE 0x1704D8
```asm
0x00170524  153140f9  ldr       x21, [x8, #0x60]
0x00170528  b50000b4  cbz       x21, #0x17053c
0x0017052C  e00315aa  mov       x0, x21
0x00170530  088c44f8  ldr       x8, [x0, #0x48]!
0x00170534  080940f9  ldr       x8, [x8, #0x10]
0x00170538  00013fd6  blr       x8
0x0017053C  802243f9  ldr       x0, [x20, #0x640]
0x00170540  800000b4  cbz       x0, #0x170550
0x00170544  088c44f8  ldr       x8, [x0, #0x48]!
0x00170548  080d40f9  ldr       x8, [x8, #0x18]
0x0017054C  00013fd6  blr       x8
0x00170550  e00740f9  ldr       x0, [sp, #8]
0x00170554  952203f9  str       x21, [x20, #0x640]
0x00170558  a00000b4  cbz       x0, #0x17056c
0x0017055C  088c44f8  ldr       x8, [x0, #0x48]!
0x00170560  080d40f9  ldr       x8, [x8, #0x18]
0x00170564  00013fd6  blr       x8
0x00170568  952243f9  ldr       x21, [x20, #0x640]
0x0017056C  b50000b4  cbz       x21, #0x170580
0x00170570  e00315aa  mov       x0, x21
0x00170574  088c44f8  ldr       x8, [x0, #0x48]!
0x00170578  080940f9  ldr       x8, [x8, #0x10]
0x0017057C  00013fd6  blr       x8
0x00170580  685f8ed2  mov       x8, #0x72fb
0x00170584  8870adf2  movk      x8, #0x6b84, lsl #16
0x00170588  c805daf2  movk      x8, #0xd02e, lsl #32
```
#### 0x170A6C, FDE 0x170A48
```asm
0x00170A48  fd7bbea9  stp       x29, x30, [sp, #-0x20]!
0x00170A4C  f30b00f9  str       x19, [sp, #0x10]
0x00170A50  fd030091  mov       x29, sp
0x00170A54  f30300aa  mov       x19, x0
0x00170A58  002043f9  ldr       x0, [x0, #0x640]
0x00170A5C  a00000b4  cbz       x0, #0x170a70
0x00170A60  088c44f8  ldr       x8, [x0, #0x48]!
0x00170A64  080d40f9  ldr       x8, [x8, #0x18]
0x00170A68  00013fd6  blr       x8
0x00170A6C  7f2203f9  str       xzr, [x19, #0x640]
0x00170A70  e00313aa  mov       x0, x19
0x00170A74  f30b40f9  ldr       x19, [sp, #0x10]
0x00170A78  fd7bc2a8  ldp       x29, x30, [sp], #0x20
0x00170A7C  e9defa17  b         #0x28620
```
#### 0x170AA4, FDE 0x170A80
```asm
0x00170A80  fd7bbea9  stp       x29, x30, [sp, #-0x20]!
0x00170A84  f30b00f9  str       x19, [sp, #0x10]
0x00170A88  fd030091  mov       x29, sp
0x00170A8C  f30300aa  mov       x19, x0
0x00170A90  002043f9  ldr       x0, [x0, #0x640]
0x00170A94  a00000b4  cbz       x0, #0x170aa8
0x00170A98  088c44f8  ldr       x8, [x0, #0x48]!
0x00170A9C  080d40f9  ldr       x8, [x8, #0x18]
0x00170AA0  00013fd6  blr       x8
0x00170AA4  7f2203f9  str       xzr, [x19, #0x640]
0x00170AA8  e00313aa  mov       x0, x19
0x00170AAC  f30b40f9  ldr       x19, [sp, #0x10]
0x00170AB0  fd7bc2a8  ldp       x29, x30, [sp], #0x20
0x00170AB4  dbdefa17  b         #0x28620
```
#### 0x171E54, FDE 0x171D9C
```asm
0x00171E24  080340f9  ldr       x8, [x24]
0x00171E28  e00318aa  mov       x0, x24
0x00171E2C  085d40f9  ldr       x8, [x8, #0xb8]
0x00171E30  00013fd6  blr       x8
0x00171E34  e00314aa  mov       x0, x20
0x00171E38  e10313aa  mov       x1, x19
0x00171E3C  e20317aa  mov       x2, x23
0x00171E40  e30319aa  mov       x3, x25
0x00171E44  eed8fa97  bl        #0x281fc
0x00171E48  88310090  adrp      x8, #0x7a1000
0x00171E4C  f70314aa  mov       x23, x20
0x00171E50  085547f9  ldr       x8, [x8, #0xea8]
0x00171E54  9f2203f9  str       xzr, [x20, #0x640]
0x00171E58  9f2a03f9  str       xzr, [x20, #0x650]
0x00171E5C  09a10291  add       x9, x8, #0xa8
0x00171E60  9f2e03f9  str       xzr, [x20, #0x658]
0x00171E64  9f3203f9  str       xzr, [x20, #0x660]
0x00171E68  9f3603f9  str       xzr, [x20, #0x668]
0x00171E6C  9f6a03f9  str       xzr, [x20, #0x6d0]
0x00171E70  9f6e03f9  str       xzr, [x20, #0x6d8]
0x00171E74  9f7203f9  str       xzr, [x20, #0x6e0]
0x00171E78  9f7603f9  str       xzr, [x20, #0x6e8]
0x00171E7C  9f7a03f9  str       xzr, [x20, #0x6f0]
0x00171E80  9f7e03f9  str       xzr, [x20, #0x6f8]
0x00171E84  9f8203f9  str       xzr, [x20, #0x700]
0x00171E88  9f8603f9  str       xzr, [x20, #0x708]
```
#### 0x173D40, FDE 0x172D30
```asm
0x00173D10  e8c30091  add       x8, sp, #0x30
0x00173D14  e00315aa  mov       x0, x21
0x00173D18  1677fa97  bl        #0x11970
0x00173D1C  602243f9  ldr       x0, [x19, #0x640]
0x00173D20  800000b4  cbz       x0, #0x173d30
0x00173D24  088c44f8  ldr       x8, [x0, #0x48]!
0x00173D28  080d40f9  ldr       x8, [x8, #0x18]
0x00173D2C  00013fd6  blr       x8
0x00173D30  e81b40f9  ldr       x8, [sp, #0x30]
0x00173D34  ea430091  add       x10, sp, #0x10
0x00173D38  4a0140b2  orr       x10, x10, #1
0x00173D3C  e91340f9  ldr       x9, [sp, #0x20]
0x00173D40  682203f9  str       x8, [x19, #0x640]
0x00173D44  e8434039  ldrb      w8, [sp, #0x10]
0x00173D48  1f010072  tst       w8, #1
0x00173D4C  5501899a  csel      x21, x10, x9, eq
0x00173D50  e00315aa  mov       x0, x21
0x00173D54  47091294  bl        #0x5f6270
0x00173D58  e30300aa  mov       x3, x0
0x00173D5C  e0c30091  add       x0, sp, #0x30
0x00173D60  01048052  mov       w1, #0x20
0x00173D64  e20315aa  mov       x2, x21
0x00173D68  aaff0d94  bl        #0x4f3c10
0x00173D6C  602243f9  ldr       x0, [x19, #0x640]
0x00173D70  e1c30091  add       x1, sp, #0x30
0x00173D74  54fd0d94  bl        #0x4f32c4
```
#### 0x174E80, FDE 0x174E0C
```asm
0x00174E50  e80000b4  cbz       x8, #0x174e6c
0x00174E54  60c21991  add       x0, x19, #0x670
0x00174E58  7f3603f9  str       xzr, [x19, #0x668]
0x00174E5C  7f3203f9  str       xzr, [x19, #0x660]
0x00174E60  7f2e03f9  str       xzr, [x19, #0x658]
0x00174E64  7f2a03f9  str       xzr, [x19, #0x650]
0x00174E68  00013fd6  blr       x8
0x00174E6C  602243f9  ldr       x0, [x19, #0x640]
0x00174E70  a00000b4  cbz       x0, #0x174e84
0x00174E74  088c44f8  ldr       x8, [x0, #0x48]!
0x00174E78  080d40f9  ldr       x8, [x8, #0x18]
0x00174E7C  00013fd6  blr       x8
0x00174E80  7f2203f9  str       xzr, [x19, #0x640]
0x00174E84  e00313aa  mov       x0, x19
0x00174E88  f30b40f9  ldr       x19, [sp, #0x10]
0x00174E8C  fd7bc2a8  ldp       x29, x30, [sp], #0x20
0x00174E90  e4cdfa17  b         #0x28620
```
#### 0x174F08, FDE 0x174E94
```asm
0x00174ED8  e80000b4  cbz       x8, #0x174ef4
0x00174EDC  60c21991  add       x0, x19, #0x670
0x00174EE0  7f3603f9  str       xzr, [x19, #0x668]
0x00174EE4  7f3203f9  str       xzr, [x19, #0x660]
0x00174EE8  7f2e03f9  str       xzr, [x19, #0x658]
0x00174EEC  7f2a03f9  str       xzr, [x19, #0x650]
0x00174EF0  00013fd6  blr       x8
0x00174EF4  602243f9  ldr       x0, [x19, #0x640]
0x00174EF8  a00000b4  cbz       x0, #0x174f0c
0x00174EFC  088c44f8  ldr       x8, [x0, #0x48]!
0x00174F00  080d40f9  ldr       x8, [x8, #0x18]
0x00174F04  00013fd6  blr       x8
0x00174F08  7f2203f9  str       xzr, [x19, #0x640]
0x00174F0C  e00313aa  mov       x0, x19
0x00174F10  f30b40f9  ldr       x19, [sp, #0x10]
0x00174F14  fd7bc2a8  ldp       x29, x30, [sp], #0x20
0x00174F18  c2cdfa17  b         #0x28620
```
#### 0x17EA30, FDE 0x17DDF0
```asm
0x0017EA00  c0000054  b.eq      #0x17ea18
0x0017EA04  d60240f9  ldr       x22, [x22]
0x0017EA08  df0200eb  cmp       x22, x0
0x0017EA0C  c41a40fa  ccmp      x22, #0, #4, ne
0x0017EA10  a1ffff54  b.ne      #0x17ea04
0x0017EA14  f62b00b4  cbz       x22, #0x17ef90
0x0017EA18  b54201d1  sub       x21, x21, #0x50
0x0017EA1C  888e44f8  ldr       x8, [x20, #0x48]!
0x0017EA20  e00314aa  mov       x0, x20
0x0017EA24  080d40f9  ldr       x8, [x8, #0x18]
0x0017EA28  00013fd6  blr       x8
0x0017EA2C  952e00b4  cbz       x21, #0x17effc
0x0017EA30  f52203f9  str       x21, [x23, #0x640]
0x0017EA34  b6835ff8  ldur      x22, [x29, #-8]
0x0017EA38  741a47f9  ldr       x20, [x19, #0xe30]
0x0017EA3C  540100b4  cbz       x20, #0x17ea64
0x0017EA40  f50314aa  mov       x21, x20
0x0017EA44  a88e44f8  ldr       x8, [x21, #0x48]!
0x0017EA48  e00315aa  mov       x0, x21
0x0017EA4C  080940f9  ldr       x8, [x8, #0x10]
0x0017EA50  00013fd6  blr       x8
0x0017EA54  a80240f9  ldr       x8, [x21]
0x0017EA58  e00315aa  mov       x0, x21
0x0017EA5C  080940f9  ldr       x8, [x8, #0x10]
0x0017EA60  00013fd6  blr       x8
0x0017EA64  c0f644f9  ldr       x0, [x22, #0x9e8]
```
#### 0x17EB90, FDE 0x17DDF0
```asm
0x0017EB60  d60240f9  ldr       x22, [x22]
0x0017EB64  df0200eb  cmp       x22, x0
0x0017EB68  c41a40fa  ccmp      x22, #0, #4, ne
0x0017EB6C  a1ffff54  b.ne      #0x17eb60
0x0017EB70  f62100b4  cbz       x22, #0x17efac
0x0017EB74  b54201d1  sub       x21, x21, #0x50
0x0017EB78  888e44f8  ldr       x8, [x20, #0x48]!
0x0017EB7C  e00314aa  mov       x0, x20
0x0017EB80  080d40f9  ldr       x8, [x8, #0x18]
0x0017EB84  00013fd6  blr       x8
0x0017EB88  b52300b4  cbz       x21, #0x17effc
0x0017EB8C  b6835ff8  ldur      x22, [x29, #-8]
0x0017EB90  f52203f9  str       x21, [x23, #0x640]
0x0017EB94  1f2003d5  nop       
0x0017EB98  28200110  adr       x8, #0x180f9c
0x0017EB9C  1f2003d5  nop       
0x0017EBA0  49200110  adr       x9, #0x180fa8
0x0017EBA4  e82708a9  stp       x8, x9, [sp, #0x80]
0x0017EBA8  ec030091  mov       x12, sp
0x0017EBAC  e82700a9  stp       x8, x9, [sp]
0x0017EBB0  1f2003d5  nop       
0x0017EBB4  ca1f0110  adr       x10, #0x180fac
0x0017EBB8  c84e44f9  ldr       x8, [x22, #0x898]
0x0017EBBC  1f2003d5  nop       
0x0017EBC0  cb1f0110  adr       x11, #0x180fb8
0x0017EBC4  94810091  add       x20, x12, #0x20
```
#### 0x17ED40, FDE 0x17DDF0
```asm
0x0017ED10  c0000054  b.eq      #0x17ed28
0x0017ED14  d60240f9  ldr       x22, [x22]
0x0017ED18  df0200eb  cmp       x22, x0
0x0017ED1C  c41a40fa  ccmp      x22, #0, #4, ne
0x0017ED20  a1ffff54  b.ne      #0x17ed14
0x0017ED24  361500b4  cbz       x22, #0x17efc8
0x0017ED28  b54201d1  sub       x21, x21, #0x50
0x0017ED2C  888e44f8  ldr       x8, [x20, #0x48]!
0x0017ED30  e00314aa  mov       x0, x20
0x0017ED34  080d40f9  ldr       x8, [x8, #0x18]
0x0017ED38  00013fd6  blr       x8
0x0017ED3C  151600b4  cbz       x21, #0x17effc
0x0017ED40  152303f9  str       x21, [x24, #0x640]
0x0017ED44  b6835ff8  ldur      x22, [x29, #-8]
0x0017ED48  741647f9  ldr       x20, [x19, #0xe28]
0x0017ED4C  540100b4  cbz       x20, #0x17ed74
0x0017ED50  f50314aa  mov       x21, x20
0x0017ED54  a88e44f8  ldr       x8, [x21, #0x48]!
0x0017ED58  e00315aa  mov       x0, x21
0x0017ED5C  080940f9  ldr       x8, [x8, #0x10]
0x0017ED60  00013fd6  blr       x8
0x0017ED64  a80240f9  ldr       x8, [x21]
0x0017ED68  e00315aa  mov       x0, x21
0x0017ED6C  080940f9  ldr       x8, [x8, #0x10]
0x0017ED70  00013fd6  blr       x8
0x0017ED74  c0aa4af9  ldr       x0, [x22, #0x1550]
```
#### 0x17EED0, FDE 0x17DDF0
```asm
0x0017EEA0  d60240f9  ldr       x22, [x22]
0x0017EEA4  df0200eb  cmp       x22, x0
0x0017EEA8  c41a40fa  ccmp      x22, #0, #4, ne
0x0017EEAC  a1ffff54  b.ne      #0x17eea0
0x0017EEB0  b60900b4  cbz       x22, #0x17efe4
0x0017EEB4  b54201d1  sub       x21, x21, #0x50
0x0017EEB8  888e44f8  ldr       x8, [x20, #0x48]!
0x0017EEBC  e00314aa  mov       x0, x20
0x0017EEC0  080d40f9  ldr       x8, [x8, #0x18]
0x0017EEC4  00013fd6  blr       x8
0x0017EEC8  b50900b4  cbz       x21, #0x17effc
0x0017EECC  a0835ff8  ldur      x0, [x29, #-8]
0x0017EED0  f52203f9  str       x21, [x23, #0x640]
0x0017EED4  800000b4  cbz       x0, #0x17eee4
0x0017EED8  088c44f8  ldr       x8, [x0, #0x48]!
0x0017EEDC  080d40f9  ldr       x8, [x8, #0x18]
0x0017EEE0  00013fd6  blr       x8
0x0017EEE4  61e642f9  ldr       x1, [x19, #0x5c8]
0x0017EEE8  c0240090  adrp      x0, #0x616000
0x0017EEEC  00741f91  add       x0, x0, #0x7dd
0x0017EEF0  622400f0  adrp      x2, #0x60d000
0x0017EEF4  42b02d91  add       x2, x2, #0xb6c
0x0017EEF8  10ddfa97  bl        #0x36338
0x0017EEFC  e0031f2a  mov       w0, wzr
0x0017EF00  1bfcff17  b         #0x17df6c
0x0017EF04  f5031faa  mov       x21, xzr
```
#### 0x1A69FC, FDE 0x1A691C
```asm
0x001A69CC  7fa202f9  str       xzr, [x19, #0x540]
0x001A69D0  7f9e02f9  str       xzr, [x19, #0x538]
0x001A69D4  7f9a02f9  str       xzr, [x19, #0x530]
0x001A69D8  7f6602f9  str       xzr, [x19, #0x4c8]
0x001A69DC  7f6202f9  str       xzr, [x19, #0x4c0]
0x001A69E0  7f5e02f9  str       xzr, [x19, #0x4b8]
0x001A69E4  7f5a02f9  str       xzr, [x19, #0x4b0]
0x001A69E8  7f5602f9  str       xzr, [x19, #0x4a8]
0x001A69EC  685202f9  str       x8, [x19, #0x4a0]
0x001A69F0  7f2e03f9  str       xzr, [x19, #0x658]
0x001A69F4  7f2a03f9  str       xzr, [x19, #0x650]
0x001A69F8  7f2603f9  str       xzr, [x19, #0x648]
0x001A69FC  7f2203f9  str       xzr, [x19, #0x640]
0x001A6A00  7fee02f9  str       xzr, [x19, #0x5d8]
0x001A6A04  7fea02f9  str       xzr, [x19, #0x5d0]
0x001A6A08  7fe602f9  str       xzr, [x19, #0x5c8]
0x001A6A0C  7fe202f9  str       xzr, [x19, #0x5c0]
0x001A6A10  7fde02f9  str       xzr, [x19, #0x5b8]
0x001A6A14  68da02f9  str       x8, [x19, #0x5b0]
0x001A6A18  7fb603f9  str       xzr, [x19, #0x768]
0x001A6A1C  7fb203f9  str       xzr, [x19, #0x760]
0x001A6A20  7fae03f9  str       xzr, [x19, #0x758]
0x001A6A24  7faa03f9  str       xzr, [x19, #0x750]
0x001A6A28  7f7603f9  str       xzr, [x19, #0x6e8]
0x001A6A2C  7f7203f9  str       xzr, [x19, #0x6e0]
0x001A6A30  7f6e03f9  str       xzr, [x19, #0x6d8]
```
#### 0x1F938C, FDE 0x1F8F00
```asm
0x001F935C  7ff202f9  str       xzr, [x19, #0x5e0]
0x001F9360  7ff602f9  str       xzr, [x19, #0x5e8]
0x001F9364  7ffa02f9  str       xzr, [x19, #0x5f0]
0x001F9368  7ffe02f9  str       xzr, [x19, #0x5f8]
0x001F936C  7f0203f9  str       xzr, [x19, #0x600]
0x001F9370  7f0603f9  str       xzr, [x19, #0x608]
0x001F9374  7f0a03f9  str       xzr, [x19, #0x610]
0x001F9378  7f0e03f9  str       xzr, [x19, #0x618]
0x001F937C  7f1203f9  str       xzr, [x19, #0x620]
0x001F9380  7f1603f9  str       xzr, [x19, #0x628]
0x001F9384  7f1a03f9  str       xzr, [x19, #0x630]
0x001F9388  7f1e03f9  str       xzr, [x19, #0x638]
0x001F938C  7f2203f9  str       xzr, [x19, #0x640]
0x001F9390  7f2603f9  str       xzr, [x19, #0x648]
0x001F9394  732201f9  str       x19, [x19, #0x240]
0x001F9398  736201f9  str       x19, [x19, #0x2c0]
0x001F939C  73a201f9  str       x19, [x19, #0x340]
0x001F93A0  73e201f9  str       x19, [x19, #0x3c0]
0x001F93A4  732202f9  str       x19, [x19, #0x440]
0x001F93A8  736202f9  str       x19, [x19, #0x4c0]
0x001F93AC  685e02f9  str       x8, [x19, #0x4b8]
0x001F93B0  f44f44a9  ldp       x20, x19, [sp, #0x40]
0x001F93B4  fd7bc5a8  ldp       x29, x30, [sp], #0x50
0x001F93B8  c0035fd6  ret       
0x001F93BC  1526f897  bl        #0x2c10
```
#### 0x2726A0, FDE 0x272558
```asm
0x00272670  9fa202f9  str       xzr, [x20, #0x540]
0x00272674  9f9e02f9  str       xzr, [x20, #0x538]
0x00272678  9f9a02f9  str       xzr, [x20, #0x530]
0x0027267C  9f6602f9  str       xzr, [x20, #0x4c8]
0x00272680  9f6202f9  str       xzr, [x20, #0x4c0]
0x00272684  9f5e02f9  str       xzr, [x20, #0x4b8]
0x00272688  9f5a02f9  str       xzr, [x20, #0x4b0]
0x0027268C  9f5602f9  str       xzr, [x20, #0x4a8]
0x00272690  895202f9  str       x9, [x20, #0x4a0]
0x00272694  9f2e03f9  str       xzr, [x20, #0x658]
0x00272698  9f2a03f9  str       xzr, [x20, #0x650]
0x0027269C  9f2603f9  str       xzr, [x20, #0x648]
0x002726A0  9f2203f9  str       xzr, [x20, #0x640]
0x002726A4  9fee02f9  str       xzr, [x20, #0x5d8]
0x002726A8  9fea02f9  str       xzr, [x20, #0x5d0]
0x002726AC  9fe602f9  str       xzr, [x20, #0x5c8]
0x002726B0  9fe202f9  str       xzr, [x20, #0x5c0]
0x002726B4  9fde02f9  str       xzr, [x20, #0x5b8]
0x002726B8  89da02f9  str       x9, [x20, #0x5b0]
0x002726BC  9fb603f9  str       xzr, [x20, #0x768]
0x002726C0  9fb203f9  str       xzr, [x20, #0x760]
0x002726C4  9fae03f9  str       xzr, [x20, #0x758]
0x002726C8  9faa03f9  str       xzr, [x20, #0x750]
0x002726CC  9f7603f9  str       xzr, [x20, #0x6e8]
0x002726D0  9f7203f9  str       xzr, [x20, #0x6e0]
0x002726D4  9f6e03f9  str       xzr, [x20, #0x6d8]
```
#### 0x2AC480, FDE 0x2AC388
```asm
0x002AC450  7f6202f9  str       xzr, [x19, #0x4c0]
0x002AC454  7fae02f9  str       xzr, [x19, #0x558]
0x002AC458  7faa02f9  str       xzr, [x19, #0x550]
0x002AC45C  7fa602f9  str       xzr, [x19, #0x548]
0x002AC460  7fa202f9  str       xzr, [x19, #0x540]
0x002AC464  7fee02f9  str       xzr, [x19, #0x5d8]
0x002AC468  7fea02f9  str       xzr, [x19, #0x5d0]
0x002AC46C  7fe602f9  str       xzr, [x19, #0x5c8]
0x002AC470  7fe202f9  str       xzr, [x19, #0x5c0]
0x002AC474  7f2e03f9  str       xzr, [x19, #0x658]
0x002AC478  7f2a03f9  str       xzr, [x19, #0x650]
0x002AC47C  7f2603f9  str       xzr, [x19, #0x648]
0x002AC480  7f2203f9  str       xzr, [x19, #0x640]
0x002AC484  1f0100f9  str       xzr, [x8]
0x002AC488  7fa21b39  strb      wzr, [x19, #0x6e8]
0x002AC48C  7f7203f9  str       xzr, [x19, #0x6e0]
0x002AC490  7f6e03f9  str       xzr, [x19, #0x6d8]
0x002AC494  7f6a03f9  str       xzr, [x19, #0x6d0]
0x002AC498  7f6603f9  str       xzr, [x19, #0x6c8]
0x002AC49C  7f021d39  strb      wzr, [x19, #0x740]
0x002AC4A0  7f9e03f9  str       xzr, [x19, #0x738]
0x002AC4A4  7f9a03f9  str       xzr, [x19, #0x730]
0x002AC4A8  7f9603f9  str       xzr, [x19, #0x728]
0x002AC4AC  7f9203f9  str       xzr, [x19, #0x720]
0x002AC4B0  7f8e03f9  str       xzr, [x19, #0x718]
0x002AC4B4  7f8a03f9  str       xzr, [x19, #0x710]
```
#### 0x2ACF88, FDE 0x2ACD18
```asm
0x002ACF58  e10314aa  mov       x1, x20
0x002ACF5C  62ae43f9  ldr       x2, [x19, #0x758]
0x002ACF60  63b243f9  ldr       x3, [x19, #0x760]
0x002ACF64  080040f9  ldr       x8, [x0]
0x002ACF68  080d40f9  ldr       x8, [x8, #0x18]
0x002ACF6C  00013fd6  blr       x8
0x002ACF70  682643f9  ldr       x8, [x19, #0x648]
0x002ACF74  e80000b4  cbz       x8, #0x2acf90
0x002ACF78  60821991  add       x0, x19, #0x660
0x002ACF7C  7f2e03f9  str       xzr, [x19, #0x658]
0x002ACF80  7f2a03f9  str       xzr, [x19, #0x650]
0x002ACF84  7f2603f9  str       xzr, [x19, #0x648]
0x002ACF88  7f2203f9  str       xzr, [x19, #0x640]
0x002ACF8C  00013fd6  blr       x8
0x002ACF90  68e642f9  ldr       x8, [x19, #0x5c8]
0x002ACF94  e80000b4  cbz       x8, #0x2acfb0
0x002ACF98  60821791  add       x0, x19, #0x5e0
0x002ACF9C  7fee02f9  str       xzr, [x19, #0x5d8]
0x002ACFA0  7fea02f9  str       xzr, [x19, #0x5d0]
0x002ACFA4  7fe602f9  str       xzr, [x19, #0x5c8]
0x002ACFA8  7fe202f9  str       xzr, [x19, #0x5c0]
0x002ACFAC  00013fd6  blr       x8
0x002ACFB0  68a642f9  ldr       x8, [x19, #0x548]
0x002ACFB4  e80000b4  cbz       x8, #0x2acfd0
0x002ACFB8  60821591  add       x0, x19, #0x560
0x002ACFBC  7fae02f9  str       xzr, [x19, #0x558]
```
#### 0x2D1118, FDE 0x2D0F70
```asm
0x002D10E8  0b9805b9  str       w11, [x0, #0x598]
0x002D10EC  1fdc02f9  str       xzr, [x0, #0x5b8]
0x002D10F0  1fd802f9  str       xzr, [x0, #0x5b0]
0x002D10F4  1fd402f9  str       xzr, [x0, #0x5a8]
0x002D10F8  1fd002f9  str       xzr, [x0, #0x5a0]
0x002D10FC  08400c79  strh      w8, [x0, #0x620]
0x002D1100  1f881839  strb      wzr, [x0, #0x622]
0x002D1104  1f1403f9  str       xzr, [x0, #0x628]
0x002D1108  091803f9  str       x9, [x0, #0x630]
0x002D110C  0a1c03f9  str       x10, [x0, #0x638]
0x002D1110  1f5006b9  str       wzr, [x0, #0x650]
0x002D1114  1f2403f9  str       xzr, [x0, #0x648]
0x002D1118  1f2003f9  str       xzr, [x0, #0x640]
0x002D111C  c0035fd6  ret       
```
#### 0x2D1188, FDE 0x2D1120
```asm
0x002D1158  080d40f9  ldr       x8, [x8, #0x18]
0x002D115C  00013fd6  blr       x8
0x002D1160  602643f9  ldr       x0, [x19, #0x648]
0x002D1164  b4c884d2  mov       x20, #0x2645
0x002D1168  5484b0f2  movk      x20, #0x8422, lsl #16
0x002D116C  949cd3f2  movk      x20, #0x9ce4, lsl #32
0x002D1170  547ef9f2  movk      x20, #0xcbf2, lsl #48
0x002D1174  7f1603f9  str       xzr, [x19, #0x628]
0x002D1178  f51900d0  adrp      x21, #0x60f000
0x002D117C  b50e1a91  add       x21, x21, #0x683
0x002D1180  741a03f9  str       x20, [x19, #0x630]
0x002D1184  751e03f9  str       x21, [x19, #0x638]
0x002D1188  7f2203f9  str       xzr, [x19, #0x640]
0x002D118C  800000b4  cbz       x0, #0x2d119c
0x002D1190  088c44f8  ldr       x8, [x0, #0x48]!
0x002D1194  080d40f9  ldr       x8, [x8, #0x18]
0x002D1198  00013fd6  blr       x8
0x002D119C  68d642f9  ldr       x8, [x19, #0x5a8]
0x002D11A0  7f2603f9  str       xzr, [x19, #0x648]
0x002D11A4  7f5206b9  str       wzr, [x19, #0x650]
0x002D11A8  e80000b4  cbz       x8, #0x2d11c4
0x002D11AC  60021791  add       x0, x19, #0x5c0
0x002D11B0  7fde02f9  str       xzr, [x19, #0x5b8]
0x002D11B4  7fda02f9  str       xzr, [x19, #0x5b0]
0x002D11B8  7fd602f9  str       xzr, [x19, #0x5a8]
0x002D11BC  7fd202f9  str       xzr, [x19, #0x5a0]
```
#### 0x2D1978, FDE 0x2D17A0
```asm
0x002D1948  7f8a05b9  str       wzr, [x19, #0x588]
0x002D194C  7f8a1839  strb      wzr, [x19, #0x622]
0x002D1950  c80000b4  cbz       x8, #0x2d1968
0x002D1954  601643f9  ldr       x0, [x19, #0x628]
0x002D1958  800000b4  cbz       x0, #0x2d1968
0x002D195C  088c44f8  ldr       x8, [x0, #0x48]!
0x002D1960  080d40f9  ldr       x8, [x8, #0x18]
0x002D1964  00013fd6  blr       x8
0x002D1968  602643f9  ldr       x0, [x19, #0x648]
0x002D196C  7f1603f9  str       xzr, [x19, #0x628]
0x002D1970  741a03f9  str       x20, [x19, #0x630]
0x002D1974  751e03f9  str       x21, [x19, #0x638]
0x002D1978  7f2203f9  str       xzr, [x19, #0x640]
0x002D197C  800000b4  cbz       x0, #0x2d198c
0x002D1980  088c44f8  ldr       x8, [x0, #0x48]!
0x002D1984  080d40f9  ldr       x8, [x8, #0x18]
0x002D1988  00013fd6  blr       x8
0x002D198C  28008052  mov       w8, #1
0x002D1990  7f2603f9  str       xzr, [x19, #0x648]
0x002D1994  7f5206b9  str       wzr, [x19, #0x650]
0x002D1998  680a00b9  str       w8, [x19, #8]
0x002D199C  1b000014  b         #0x2d1a08
0x002D19A0  688245b9  ldr       w8, [x19, #0x580]
0x002D19A4  08010035  cbnz      w8, #0x2d19c4
0x002D19A8  6aba42f9  ldr       x10, [x19, #0x570]
0x002D19AC  68621591  add       x8, x19, #0x558
```
#### 0x2F789C, FDE 0x2F7874
```asm
0x002F7874  fd7bbea9  stp       x29, x30, [sp, #-0x20]!
0x002F7878  f30b00f9  str       x19, [sp, #0x10]
0x002F787C  fd030091  mov       x29, sp
0x002F7880  f30300aa  mov       x19, x0
0x002F7884  0c090094  bl        #0x2f9cb4
0x002F7888  682400d0  adrp      x8, #0x785000
0x002F788C  08c13b91  add       x8, x8, #0xef0
0x002F7890  7f3206b9  str       wzr, [x19, #0x630]
0x002F7894  7f1e03f9  str       xzr, [x19, #0x638]
0x002F7898  08410091  add       x8, x8, #0x10
0x002F789C  7f2203f9  str       xzr, [x19, #0x640]
0x002F78A0  7f2603f9  str       xzr, [x19, #0x648]
0x002F78A4  680200f9  str       x8, [x19]
0x002F78A8  f30b40f9  ldr       x19, [sp, #0x10]
0x002F78AC  fd7bc2a8  ldp       x29, x30, [sp], #0x20
0x002F78B0  c0035fd6  ret       
```
#### 0x2F78E8, FDE 0x2F78B4
```asm
0x002F78B8  f30b00f9  str       x19, [sp, #0x10]
0x002F78BC  fd030091  mov       x29, sp
0x002F78C0  682500b0  adrp      x8, #0x7a4000
0x002F78C4  f30300aa  mov       x19, x0
0x002F78C8  08d541f9  ldr       x8, [x8, #0x3a8]
0x002F78CC  012443f9  ldr       x1, [x0, #0x648]
0x002F78D0  08410091  add       x8, x8, #0x10
0x002F78D4  080000f9  str       x8, [x0]
0x002F78D8  c10000b4  cbz       x1, #0x2f78f0
0x002F78DC  e0008052  mov       w0, #7
0x002F78E0  7f3206b9  str       wzr, [x19, #0x630]
0x002F78E4  7f1e03f9  str       xzr, [x19, #0x638]
0x002F78E8  7f2203f9  str       xzr, [x19, #0x640]
0x002F78EC  b5250094  bl        #0x300fc0
0x002F78F0  7f3206b9  str       wzr, [x19, #0x630]
0x002F78F4  e00313aa  mov       x0, x19
0x002F78F8  7f1e03f9  str       xzr, [x19, #0x638]
0x002F78FC  7f2203f9  str       xzr, [x19, #0x640]
0x002F7900  f30b40f9  ldr       x19, [sp, #0x10]
0x002F7904  fd7bc2a8  ldp       x29, x30, [sp], #0x20
0x002F7908  08090014  b         #0x2f9d28
```
#### 0x2F78FC, FDE 0x2F78B4
```asm
0x002F78CC  012443f9  ldr       x1, [x0, #0x648]
0x002F78D0  08410091  add       x8, x8, #0x10
0x002F78D4  080000f9  str       x8, [x0]
0x002F78D8  c10000b4  cbz       x1, #0x2f78f0
0x002F78DC  e0008052  mov       w0, #7
0x002F78E0  7f3206b9  str       wzr, [x19, #0x630]
0x002F78E4  7f1e03f9  str       xzr, [x19, #0x638]
0x002F78E8  7f2203f9  str       xzr, [x19, #0x640]
0x002F78EC  b5250094  bl        #0x300fc0
0x002F78F0  7f3206b9  str       wzr, [x19, #0x630]
0x002F78F4  e00313aa  mov       x0, x19
0x002F78F8  7f1e03f9  str       xzr, [x19, #0x638]
0x002F78FC  7f2203f9  str       xzr, [x19, #0x640]
0x002F7900  f30b40f9  ldr       x19, [sp, #0x10]
0x002F7904  fd7bc2a8  ldp       x29, x30, [sp], #0x20
0x002F7908  08090014  b         #0x2f9d28
```
#### 0x2F7988, FDE 0x2F7930
```asm
0x002F7958  884640b9  ldr       w8, [x20, #0x44]
0x002F795C  e0008052  mov       w0, #7
0x002F7960  0809088b  add       x8, x8, x8, lsl #2
0x002F7964  01ed7cd3  lsl       x1, x8, #4
0x002F7968  86250094  bl        #0x300f80
0x002F796C  602603f9  str       x0, [x19, #0x648]
0x002F7970  e00300b4  cbz       x0, #0x2f79ec
0x002F7974  884640b9  ldr       w8, [x20, #0x44]
0x002F7978  090a8052  mov       w9, #0x50
0x002F797C  0801a99b  umaddl    x8, w8, w9, x0
0x002F7980  09000014  b         #0x2f79a4
0x002F7984  090000f9  str       x9, [x0]
0x002F7988  602203f9  str       x0, [x19, #0x640]
0x002F798C  693246b9  ldr       w9, [x19, #0x630]
0x002F7990  00400191  add       x0, x0, #0x50
0x002F7994  1f0008eb  cmp       x0, x8
0x002F7998  29050011  add       w9, w9, #1
0x002F799C  693206b9  str       w9, [x19, #0x630]
0x002F79A0  a2010054  b.hs      #0x2f79d4
0x002F79A4  1f0000f9  str       xzr, [x0]
0x002F79A8  1f1c00f9  str       xzr, [x0, #0x38]
0x002F79AC  692243f9  ldr       x9, [x19, #0x640]
0x002F79B0  a9feffb5  cbnz      x9, #0x2f7984
0x002F79B4  602203f9  str       x0, [x19, #0x640]
0x002F79B8  601e03f9  str       x0, [x19, #0x638]
0x002F79BC  1f0405f8  str       xzr, [x0], #0x50
```
#### 0x2F79B4, FDE 0x2F7930
```asm
0x002F7984  090000f9  str       x9, [x0]
0x002F7988  602203f9  str       x0, [x19, #0x640]
0x002F798C  693246b9  ldr       w9, [x19, #0x630]
0x002F7990  00400191  add       x0, x0, #0x50
0x002F7994  1f0008eb  cmp       x0, x8
0x002F7998  29050011  add       w9, w9, #1
0x002F799C  693206b9  str       w9, [x19, #0x630]
0x002F79A0  a2010054  b.hs      #0x2f79d4
0x002F79A4  1f0000f9  str       xzr, [x0]
0x002F79A8  1f1c00f9  str       xzr, [x0, #0x38]
0x002F79AC  692243f9  ldr       x9, [x19, #0x640]
0x002F79B0  a9feffb5  cbnz      x9, #0x2f7984
0x002F79B4  602203f9  str       x0, [x19, #0x640]
0x002F79B8  601e03f9  str       x0, [x19, #0x638]
0x002F79BC  1f0405f8  str       xzr, [x0], #0x50
0x002F79C0  693246b9  ldr       w9, [x19, #0x630]
0x002F79C4  1f0008eb  cmp       x0, x8
0x002F79C8  29050011  add       w9, w9, #1
0x002F79CC  693206b9  str       w9, [x19, #0x630]
0x002F79D0  a3feff54  b.lo      #0x2f79a4
0x002F79D4  20008052  mov       w0, #1
0x002F79D8  f44f41a9  ldp       x20, x19, [sp, #0x10]
0x002F79DC  fd7bc2a8  ldp       x29, x30, [sp], #0x20
0x002F79E0  c0035fd6  ret       
0x002F79E4  e0038052  mov       w0, #0x1f
0x002F79E8  c0035fd6  ret       
```
#### 0x2F8034, FDE 0x2F7F54
```asm
0x002F8004  f30340f9  ldr       x19, [sp]
0x002F8008  f4031faa  mov       x20, xzr
0x002F800C  36000014  b         #0x2f80e4
0x002F8010  fb0700f9  str       x27, [sp, #8]
0x002F8014  680740f9  ldr       x8, [x27, #8]
0x002F8018  0941378b  add       x9, x8, w23, uxtw
0x002F801C  882343f9  ldr       x8, [x28, #0x640]
0x002F8020  f30340f9  ldr       x19, [sp]
0x002F8024  480100b4  cbz       x8, #0x2f804c
0x002F8028  0a0140f9  ldr       x10, [x8]
0x002F802C  4a0000b5  cbnz      x10, #0x2f8034
0x002F8030  9f1f03f9  str       xzr, [x28, #0x638]
0x002F8034  8a2303f9  str       x10, [x28, #0x640]
0x002F8038  1f0100f9  str       xzr, [x8]
0x002F803C  8a3346b9  ldr       w10, [x28, #0x630]
0x002F8040  fb0740f9  ldr       x27, [sp, #8]
0x002F8044  4a050051  sub       w10, w10, #1
0x002F8048  8a3306b9  str       w10, [x28, #0x630]
0x002F804C  aa1240f9  ldr       x10, [x21, #0x20]
0x002F8050  ab6240b9  ldr       w11, [x21, #0x60]
0x002F8054  4a0540f9  ldr       x10, [x10, #8]
0x002F8058  4a690b9b  madd      x10, x10, x11, x26
0x002F805C  0a0500f9  str       x10, [x8, #8]
0x002F8060  1f2003d5  nop       
0x002F8064  cad20310  adr       x10, #0x2ffabc
0x002F8068  19610229  stp       w25, w24, [x8, #0x10]
```
#### 0x2F826C, FDE 0x2F8110
```asm
0x002F823C  e2031b2a  mov       w2, w27
0x002F8240  c8190094  bl        #0x2fe960
0x002F8244  a1835ff8  ldur      x1, [x29, #-8]
0x002F8248  e10700b4  cbz       x1, #0x2f8344
0x002F824C  280440f9  ldr       x8, [x1, #8]
0x002F8250  291c40b9  ldr       w9, [x1, #0x1c]
0x002F8254  8a0240b9  ldr       w10, [x20]
0x002F8258  422343f9  ldr       x2, [x26, #0x640]
0x002F825C  420100b4  cbz       x2, #0x2f8284
0x002F8260  4b0040f9  ldr       x11, [x2]
0x002F8264  4b0000b5  cbnz      x11, #0x2f826c
0x002F8268  5f1f03f9  str       xzr, [x26, #0x638]
0x002F826C  4b2303f9  str       x11, [x26, #0x640]
0x002F8270  5f0000f9  str       xzr, [x2]
0x002F8274  4b3346b9  ldr       w11, [x26, #0x630]
0x002F8278  a1835ff8  ldur      x1, [x29, #-8]
0x002F827C  6b050051  sub       w11, w11, #1
0x002F8280  4b3306b9  str       w11, [x26, #0x630]
0x002F8284  f31341a9  ldp       x19, x4, [sp, #0x10]
0x002F8288  e00318aa  mov       x0, x24
0x002F828C  e303172a  mov       w3, w23
0x002F8290  6b1240f9  ldr       x11, [x19, #0x20]
0x002F8294  6c6240b9  ldr       w12, [x19, #0x60]
0x002F8298  6b0540f9  ldr       x11, [x11, #8]
0x002F829C  49280229  stp       w9, w10, [x2, #0x10]
0x002F82A0  69250090  adrp      x9, #0x7a4000
```
#### 0x300188, FDE 0x30007C
```asm
0x00300158  a1835ff8  ldur      x1, [x29, #-8]
0x0030015C  210500b4  cbz       x1, #0x300200
0x00300160  ec1340a9  ldp       x12, x4, [sp]
0x00300164  e2c21891  add       x2, x23, #0x630
0x00300168  280440f9  ldr       x8, [x1, #8]
0x0030016C  e00316aa  mov       x0, x22
0x00300170  e303152a  mov       w3, w21
0x00300174  291c40b9  ldr       w9, [x1, #0x1c]
0x00300178  8a0340b9  ldr       w10, [x28]
0x0030017C  8b1140f9  ldr       x11, [x12, #0x20]
0x00300180  8c6140b9  ldr       w12, [x12, #0x60]
0x00300184  6b0540f9  ldr       x11, [x11, #8]
0x00300188  e82203f9  str       x8, [x23, #0x640]
0x0030018C  e93a06b9  str       w9, [x23, #0x638]
0x00300190  ea3e06b9  str       w10, [x23, #0x63c]
0x00300194  6b110c9b  madd      x11, x11, x12, x4
0x00300198  eb1a03f9  str       x11, [x23, #0x630]
0x0030019C  020300f9  str       x2, [x24]
0x003001A0  850340b9  ldr       w5, [x28]
0x003001A4  57fbff97  bl        #0x2fef00
0x003001A8  a1835ff8  ldur      x1, [x29, #-8]
0x003001AC  48534039  ldrb      w8, [x26, #0x14]
0x003001B0  410700f9  str       x1, [x26, #8]
0x003001B4  5b1300b9  str       w27, [x26, #0x10]
0x003001B8  08111d12  and       w8, w8, #0xf8
0x003001BC  48530039  strb      w8, [x26, #0x14]
```
#### 0x300590, FDE 0x300404
```asm
0x00300560  e00318aa  mov       x0, x24
0x00300564  3fd80b94  bl        #0x5f6660
0x00300568  57f7ffb4  cbz       x23, #0x300450
0x0030056C  8a1240f9  ldr       x10, [x20, #0x20]
0x00300570  c9c21891  add       x9, x22, #0x630
0x00300574  8b6240b9  ldr       w11, [x20, #0x60]
0x00300578  ec0740f9  ldr       x12, [sp, #8]
0x0030057C  884240f9  ldr       x8, [x20, #0x80]
0x00300580  08413c8b  add       x8, x8, w28, uxtw
0x00300584  4a0540f9  ldr       x10, [x10, #8]
0x00300588  da3a06b9  str       w26, [x22, #0x638]
0x0030058C  db3e06b9  str       w27, [x22, #0x63c]
0x00300590  c82203f9  str       x8, [x22, #0x640]
0x00300594  4a310b9b  madd      x10, x10, x11, x12
0x00300598  ca1a03f9  str       x10, [x22, #0x630]
0x0030059C  a90200f9  str       x9, [x21]
0x003005A0  894600f9  str       x9, [x20, #0x88]
0x003005A4  f90600f9  str       x25, [x23, #8]
0x003005A8  fc1200b9  str       w28, [x23, #0x10]
0x003005AC  e8524039  ldrb      w8, [x23, #0x14]
0x003005B0  08111d12  and       w8, w8, #0xf8
0x003005B4  e8520039  strb      w8, [x23, #0x14]
0x003005B8  975a00f9  str       x23, [x20, #0xb0]
0x003005BC  88a240b9  ldr       w8, [x20, #0xa0]
0x003005C0  08011b0b  add       w8, w8, w27
0x003005C4  88a200b9  str       w8, [x20, #0xa0]
```
#### 0x3020E4, FDE 0x301CD0
```asm
0x003020B4  e3ffff17  b         #0x302040
0x003020B8  c8d977d3  lsl       x8, x14, #9
0x003020BC  08011091  add       x8, x8, #0x400
0x003020C0  480100f9  str       x8, [x10]
0x003020C4  08c78052  mov       w8, #0x638
0x003020C8  022f8052  mov       w2, #0x178
0x003020CC  b352289b  smaddl    x19, w21, w8, x20
0x003020D0  e1031f2a  mov       w1, wzr
0x003020D4  60021391  add       x0, x19, #0x4c0
0x003020D8  1ed00b94  bl        #0x5f6150
0x003020DC  e0031f2a  mov       w0, wzr
0x003020E0  68e21891  add       x8, x19, #0x638
0x003020E4  7f2203f9  str       xzr, [x19, #0x640]
0x003020E8  7f2603f9  str       xzr, [x19, #0x648]
0x003020EC  1ffd9f88  stlr      wzr, [x8]
0x003020F0  f44f42a9  ldp       x20, x19, [sp, #0x20]
0x003020F4  f65741a9  ldp       x22, x21, [sp, #0x10]
0x003020F8  fd7bc3a8  ldp       x29, x30, [sp], #0x30
0x003020FC  c0035fd6  ret       
```
#### 0x40CF9C, FDE 0x40CF20
```asm
0x0040CF6C  08c800f9  str       x8, [x0, #0x190]
0x0040CF70  08600991  add       x8, x0, #0x258
0x0040CF74  092c01f9  str       x9, [x0, #0x258]
0x0040CF78  09800c91  add       x9, x0, #0x320
0x0040CF7C  089001f9  str       x8, [x0, #0x320]
0x0040CF80  08a00f91  add       x8, x0, #0x3e8
0x0040CF84  09f401f9  str       x9, [x0, #0x3e8]
0x0040CF88  09c01291  add       x9, x0, #0x4b0
0x0040CF8C  085802f9  str       x8, [x0, #0x4b0]
0x0040CF90  08e01591  add       x8, x0, #0x578
0x0040CF94  09bc02f9  str       x9, [x0, #0x578]
0x0040CF98  09001991  add       x9, x0, #0x640
0x0040CF9C  082003f9  str       x8, [x0, #0x640]
0x0040CFA0  08201c91  add       x8, x0, #0x708
0x0040CFA4  098403f9  str       x9, [x0, #0x708]
0x0040CFA8  09401f91  add       x9, x0, #0x7d0
0x0040CFAC  08e803f9  str       x8, [x0, #0x7d0]
0x0040CFB0  08602291  add       x8, x0, #0x898
0x0040CFB4  094c04f9  str       x9, [x0, #0x898]
0x0040CFB8  09802591  add       x9, x0, #0x960
0x0040CFBC  08b004f9  str       x8, [x0, #0x960]
0x0040CFC0  08a02891  add       x8, x0, #0xa28
0x0040CFC4  091405f9  str       x9, [x0, #0xa28]
0x0040CFC8  09c02b91  add       x9, x0, #0xaf0
0x0040CFCC  087805f9  str       x8, [x0, #0xaf0]
0x0040CFD0  08e02e91  add       x8, x0, #0xbb8
```
#### 0x40DA0C, FDE 0x40D990
```asm
0x0040D9DC  08c800f9  str       x8, [x0, #0x190]
0x0040D9E0  08600991  add       x8, x0, #0x258
0x0040D9E4  092c01f9  str       x9, [x0, #0x258]
0x0040D9E8  09800c91  add       x9, x0, #0x320
0x0040D9EC  089001f9  str       x8, [x0, #0x320]
0x0040D9F0  08a00f91  add       x8, x0, #0x3e8
0x0040D9F4  09f401f9  str       x9, [x0, #0x3e8]
0x0040D9F8  09c01291  add       x9, x0, #0x4b0
0x0040D9FC  085802f9  str       x8, [x0, #0x4b0]
0x0040DA00  08e01591  add       x8, x0, #0x578
0x0040DA04  09bc02f9  str       x9, [x0, #0x578]
0x0040DA08  09001991  add       x9, x0, #0x640
0x0040DA0C  082003f9  str       x8, [x0, #0x640]
0x0040DA10  08201c91  add       x8, x0, #0x708
0x0040DA14  098403f9  str       x9, [x0, #0x708]
0x0040DA18  09401f91  add       x9, x0, #0x7d0
0x0040DA1C  08e803f9  str       x8, [x0, #0x7d0]
0x0040DA20  08602291  add       x8, x0, #0x898
0x0040DA24  094c04f9  str       x9, [x0, #0x898]
0x0040DA28  09802591  add       x9, x0, #0x960
0x0040DA2C  08b004f9  str       x8, [x0, #0x960]
0x0040DA30  08a02891  add       x8, x0, #0xa28
0x0040DA34  091405f9  str       x9, [x0, #0xa28]
0x0040DA38  09c02b91  add       x9, x0, #0xaf0
0x0040DA3C  087805f9  str       x8, [x0, #0xaf0]
0x0040DA40  08e02e91  add       x8, x0, #0xbb8
```
#### 0x4B7258, FDE 0x4B709C
```asm
0x004B7228  9f9202f9  str       xzr, [x20, #0x520]
0x004B722C  9f8e02f9  str       xzr, [x20, #0x518]
0x004B7230  9f8a02f9  str       xzr, [x20, #0x510]
0x004B7234  9f8602f9  str       xzr, [x20, #0x508]
0x004B7238  888202f9  str       x8, [x20, #0x500]
0x004B723C  9f0a03f9  str       xzr, [x20, #0x610]
0x004B7240  890e03f9  str       x9, [x20, #0x618]
0x004B7244  9f6603f9  str       xzr, [x20, #0x6c8]
0x004B7248  9f6203f9  str       xzr, [x20, #0x6c0]
0x004B724C  9f5e03f9  str       xzr, [x20, #0x6b8]
0x004B7250  9f5a03f9  str       xzr, [x20, #0x6b0]
0x004B7254  9f2603f9  str       xzr, [x20, #0x648]
0x004B7258  9f2203f9  str       xzr, [x20, #0x640]
0x004B725C  9f1e03f9  str       xzr, [x20, #0x638]
0x004B7260  9f1a03f9  str       xzr, [x20, #0x630]
0x004B7264  9f1603f9  str       xzr, [x20, #0x628]
0x004B7268  881203f9  str       x8, [x20, #0x620]
0x004B726C  9f9a03f9  str       xzr, [x20, #0x730]
0x004B7270  899e03f9  str       x9, [x20, #0x738]
0x004B7274  9faa03f9  str       xzr, [x20, #0x750]
0x004B7278  9fa603f9  str       xzr, [x20, #0x748]
0x004B727C  9fa203f9  str       xzr, [x20, #0x740]
0x004B7280  887e08a9  stp       x8, xzr, [x20, #0x80]
0x004B7284  9f2619a9  stp       xzr, x9, [x20, #0x190]
0x004B7288  9f7e1ba9  stp       xzr, xzr, [x20, #0x1b0]
0x004B728C  9f7e1ca9  stp       xzr, xzr, [x20, #0x1c0]
```
#### 0x4B80E0, FDE 0x4B8088
```asm
0x004B80B0  61821691  add       x1, x19, #0x5a0
0x004B80B4  77840094  bl        #0x4d9290
0x004B80B8  60d642f9  ldr       x0, [x19, #0x5a8]
0x004B80BC  7fd602f9  str       xzr, [x19, #0x5a8]
0x004B80C0  800000b4  cbz       x0, #0x4b80d0
0x004B80C4  088c44f8  ldr       x8, [x0, #0x48]!
0x004B80C8  080d40f9  ldr       x8, [x8, #0x18]
0x004B80CC  00013fd6  blr       x8
0x004B80D0  681e43f9  ldr       x8, [x19, #0x638]
0x004B80D4  e80000b4  cbz       x8, #0x4b80f0
0x004B80D8  60421991  add       x0, x19, #0x650
0x004B80DC  7f2603f9  str       xzr, [x19, #0x648]
0x004B80E0  7f2203f9  str       xzr, [x19, #0x640]
0x004B80E4  7f1e03f9  str       xzr, [x19, #0x638]
0x004B80E8  7f1a03f9  str       xzr, [x19, #0x630]
0x004B80EC  00013fd6  blr       x8
0x004B80F0  68de42f9  ldr       x8, [x19, #0x5b8]
0x004B80F4  e80000b4  cbz       x8, #0x4b8110
0x004B80F8  60421791  add       x0, x19, #0x5d0
0x004B80FC  7fe602f9  str       xzr, [x19, #0x5c8]
0x004B8100  7fe202f9  str       xzr, [x19, #0x5c0]
0x004B8104  7fde02f9  str       xzr, [x19, #0x5b8]
0x004B8108  7fda02f9  str       xzr, [x19, #0x5b0]
0x004B810C  00013fd6  blr       x8
0x004B8110  60d642f9  ldr       x0, [x19, #0x5a8]
0x004B8114  a00000b4  cbz       x0, #0x4b8128
```
#### 0x4C484C, FDE 0x4C4558
```asm
0x004C481C  ffeb02f9  str       xzr, [sp, #0x5d0]
0x004C4820  f5ef02f9  str       x21, [sp, #0x5d8]
0x004C4824  f5f302f9  str       x21, [sp, #0x5e0]
0x004C4828  f5f702f9  str       x21, [sp, #0x5e8]
0x004C482C  edfb02f9  str       x13, [sp, #0x5f0]
0x004C4830  f40303f9  str       x20, [sp, #0x600]
0x004C4834  f70703f9  str       x23, [sp, #0x608]
0x004C4838  ff0b03f9  str       xzr, [sp, #0x610]
0x004C483C  f60f03f9  str       x22, [sp, #0x618]
0x004C4840  f61303f9  str       x22, [sp, #0x620]
0x004C4844  f61703f9  str       x22, [sp, #0x628]
0x004C4848  ed1b03f9  str       x13, [sp, #0x630]
0x004C484C  f42303f9  str       x20, [sp, #0x640]
0x004C4850  f72703f9  str       x23, [sp, #0x648]
0x004C4854  ff2b03f9  str       xzr, [sp, #0x650]
0x004C4858  f42f03f9  str       x20, [sp, #0x658]
0x004C485C  f43303f9  str       x20, [sp, #0x660]
0x004C4860  f43703f9  str       x20, [sp, #0x668]
0x004C4864  ea3b03f9  str       x10, [sp, #0x670]
0x004C4868  f44303f9  str       x20, [sp, #0x680]
0x004C486C  f44703f9  str       x20, [sp, #0x688]
0x004C4870  ff5703f9  str       xzr, [sp, #0x6a8]
0x004C4874  ff5303f9  str       xzr, [sp, #0x6a0]
0x004C4878  ff4f03f9  str       xzr, [sp, #0x698]
0x004C487C  ff4b03f9  str       xzr, [sp, #0x690]
0x004C4880  ea5b03f9  str       x10, [sp, #0x6b0]
```
#### 0x5E1DA0, FDE 0x5E1550
```asm
0x005E1D70  80a21291  add       x0, x20, #0x4a8
0x005E1D74  9f5202f9  str       xzr, [x20, #0x4a0]
0x005E1D78  9f4e02f9  str       xzr, [x20, #0x498]
0x005E1D7C  9f4a02f9  str       xzr, [x20, #0x490]
0x005E1D80  9f4602f9  str       xzr, [x20, #0x488]
0x005E1D84  cb290094  bl        #0x5ec4b0
0x005E1D88  80021491  add       x0, x20, #0x500
0x005E1D8C  9fe21339  strb      wzr, [x20, #0x4f8]
0x005E1D90  38320094  bl        #0x5ee670
0x005E1D94  e00318aa  mov       x0, x24
0x005E1D98  9f2a03f9  str       xzr, [x20, #0x650]
0x005E1D9C  9f2603f9  str       xzr, [x20, #0x648]
0x005E1DA0  9f2203f9  str       xzr, [x20, #0x640]
0x005E1DA4  9f1e03f9  str       xzr, [x20, #0x638]
0x005E1DA8  f4031aaa  mov       x20, x26
0x005E1DAC  6b210094  bl        #0x5ea358
0x005E1DB0  680a40f9  ldr       x8, [x19, #0x10]
0x005E1DB4  e20316aa  mov       x2, x22
0x005E1DB8  08011b8b  add       x8, x8, x27
0x005E1DBC  611e40f9  ldr       x1, [x19, #0x38]
0x005E1DC0  636240b9  ldr       w3, [x19, #0x60]
0x005E1DC4  00410491  add       x0, x8, #0x110
0x005E1DC8  18210094  bl        #0x5ea228
0x005E1DCC  680a40f9  ldr       x8, [x19, #0x10]
0x005E1DD0  c9008052  mov       w9, #6
0x005E1DD4  e0031aaa  mov       x0, x26
```

## Boundaries
Pair/bulk reset or indirect aliases can be missed; no same-object or runtime lifecycle claim from matching offsets.
