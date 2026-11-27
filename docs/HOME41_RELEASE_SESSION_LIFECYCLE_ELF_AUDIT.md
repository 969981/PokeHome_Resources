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

## Boundaries
Pair/bulk reset or indirect aliases can be missed; no same-object or runtime lifecycle claim from matching offsets.
