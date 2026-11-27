# HOME 4.1.0 release counter — original ELF static audit

SHA-256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a

Only static instructions. No device access, no mutation, no bypass or persistence claim. Offsets are main RVA. Byte hex is little endian.

## Direct BL/B cross references
- 0xDCB18: 0xD6DDC
- 0xDCD30: 0xD6DE4
- 0xA0B8C: 0xB6A78
- 0xA1728: 0xB6414
- 0xC1FA4: 0xA0BE0, 0xA0C98, 0xB28E8
- 0xC2650: 0xA0BF8

## Focused native windows
### 0xDCB18..0xDCD30 (bounded window, not claimed FDE)
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
0x000DCBA8  ff7f06a9  stp       xzr, xzr, [sp, #0x60]
0x000DCBAC  ff7f05a9  stp       xzr, xzr, [sp, #0x50]
0x000DCBB0  ff7f04a9  stp       xzr, xzr, [sp, #0x40]
0x000DCBB4  6b4a0894  bl        #0x2ef560
0x000DCBB8  00020034  cbz       w0, #0xdcbf8
0x000DCBBC  e203002a  mov       w2, w0
0x000DCBC0  800a41f9  ldr       x0, [x20, #0x210]
0x000DCBC4  e1830091  add       x1, sp, #0x20
0x000DCBC8  e5030191  add       x5, sp, #0x40
0x000DCBCC  e30315aa  mov       x3, x21
0x000DCBD0  e4031f2a  mov       w4, wzr
0x000DCBD4  e6031faa  mov       x6, xzr
0x000DCBD8  f4030191  add       x20, sp, #0x40
0x000DCBDC  7806fe97  bl        #0x5e5bc
0x000DCBE0  e82740f9  ldr       x8, [sp, #0x48]
0x000DCBE4  a80000b4  cbz       x8, #0xdcbf8
0x000DCBE8  80820091  add       x0, x20, #0x20
0x000DCBEC  ff7f05a9  stp       xzr, xzr, [sp, #0x50]
0x000DCBF0  ff7f04a9  stp       xzr, xzr, [sp, #0x40]
0x000DCBF4  00013fd6  blr       x8
0x000DCBF8  e01f40f9  ldr       x0, [sp, #0x38]
0x000DCBFC  800000b4  cbz       x0, #0xdcc0c
0x000DCC00  088c44f8  ldr       x8, [x0, #0x48]!
0x000DCC04  080d40f9  ldr       x8, [x8, #0x18]
0x000DCC08  00013fd6  blr       x8
0x000DCC0C  740e40f9  ldr       x20, [x19, #0x18]
0x000DCC10  d40800b4  cbz       x20, #0xdcd28
0x000DCC14  080740f9  ldr       x8, [x24, #8]
0x000DCC18  e2030191  add       x2, sp, #0x40
0x000DCC1C  093b40b9  ldr       w9, [x24, #0x38]
0x000DCC20  29f17dd3  lsl       x9, x9, #3
0x000DCC24  087140f9  ldr       x8, [x8, #0xe0]
0x000DCC28  970a40f9  ldr       x23, [x20, #0x10]
0x000DCC2C  156969b8  ldr       w21, [x8, x9]
0x000DCC30  083e9152  mov       w8, #0x89f0
0x000DCC34  ff030139  strb      wzr, [sp, #0x40]
0x000DCC38  ff4304f8  stur      xzr, [sp, #0x44]
0x000DCC3C  ffc304f8  stur      xzr, [sp, #0x4c]
0x000DCC40  ff4305f8  stur      xzr, [sp, #0x54]
0x000DCC44  7602088b  add       x22, x19, x8
0x000DCC48  e00316aa  mov       x0, x22
0x000DCC4C  e103152a  mov       w1, w21
0x000DCC50  45f5fe97  bl        #0x9a164
0x000DCC54  e82744a9  ldp       x8, x9, [sp, #0x40]
0x000DCC58  e00317aa  mov       x0, x23
0x000DCC5C  e82702a9  stp       x8, x9, [sp, #0x20]
0x000DCC60  e85340b9  ldr       w8, [sp, #0x50]
0x000DCC64  e12740b9  ldr       w1, [sp, #0x24]
0x000DCC68  e83300b9  str       w8, [sp, #0x30]
0x000DCC6C  f6e2fe97  bl        #0x95844
0x000DCC70  080c40b9  ldr       w8, [x0, #0xc]
0x000DCC74  1f050071  cmp       w8, #1
0x000DCC78  00010054  b.eq      #0xdcc98
0x000DCC7C  e82742a9  ldp       x8, x9, [sp, #0x20]
0x000DCC80  e1230091  add       x1, sp, #8
0x000DCC84  e00314aa  mov       x0, x20
0x000DCC88  e8a700a9  stp       x8, x9, [sp, #8]
0x000DCC8C  e83340b9  ldr       w8, [sp, #0x30]
0x000DCC90  e81b00b9  str       w8, [sp, #0x18]
0x000DCC94  c336ff97  bl        #0xaa7a0
0x000DCC98  e1830091  add       x1, sp, #0x20
0x000DCC9C  e00317aa  mov       x0, x23
0x000DCCA0  2fe2fe97  bl        #0x9555c
0x000DCCA4  e1830091  add       x1, sp, #0x20
0x000DCCA8  e00314aa  mov       x0, x20
0x000DCCAC  9237ff97  bl        #0xaaaf4
0x000DCCB0  e00316aa  mov       x0, x22
0x000DCCB4  e103152a  mov       w1, w21
0x000DCCB8  22008052  mov       w2, #1
0x000DCCBC  37008052  mov       w23, #1
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
0x000DCD2C  00000000  udf       #0
```
### 0xDCD30..0xDCF00 (bounded window, not claimed FDE)
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
0x000DCDC0  22008052  mov       w2, #1
0x000DCDC4  07f5fe97  bl        #0x9a1e0
0x000DCDC8  19c30039  strb      w25, [x24, #0x30]
0x000DCDCC  5a230091  add       x26, x26, #8
0x000DCDD0  9f031aeb  cmp       x28, x26
0x000DCDD4  00040054  b.eq      #0xdce54
0x000DCDD8  080740f9  ldr       x8, [x24, #8]
0x000DCDDC  087140f9  ldr       x8, [x8, #0xe0]
0x000DCDE0  09011a8b  add       x9, x8, x26
0x000DCDE4  29114039  ldrb      w9, [x9, #4]
0x000DCDE8  29ffff34  cbz       w9, #0xdcdcc
0x000DCDEC  17697ab8  ldr       w23, [x8, x26]
0x000DCDF0  e2030191  add       x2, sp, #0x40
0x000DCDF4  e00316aa  mov       x0, x22
0x000DCDF8  ff030139  strb      wzr, [sp, #0x40]
0x000DCDFC  7f0b00f9  str       xzr, [x27, #0x10]
0x000DCE00  7f7f00a9  stp       xzr, xzr, [x27]
0x000DCE04  e103172a  mov       w1, w23
0x000DCE08  d7f4fe97  bl        #0x9a164
0x000DCE0C  e82744a9  ldp       x8, x9, [sp, #0x40]
0x000DCE10  e00315aa  mov       x0, x21
0x000DCE14  e8a700a9  stp       x8, x9, [sp, #8]
0x000DCE18  e85340b9  ldr       w8, [sp, #0x50]
0x000DCE1C  e10f40b9  ldr       w1, [sp, #0xc]
0x000DCE20  e81b00b9  str       w8, [sp, #0x18]
0x000DCE24  88e2fe97  bl        #0x95844
0x000DCE28  080c40b9  ldr       w8, [x0, #0xc]
0x000DCE2C  1f050071  cmp       w8, #1
0x000DCE30  80fbff54  b.eq      #0xdcda0
0x000DCE34  e8a740a9  ldp       x8, x9, [sp, #8]
0x000DCE38  e1a30091  add       x1, sp, #0x28
0x000DCE3C  e00314aa  mov       x0, x20
0x000DCE40  e8a702a9  stp       x8, x9, [sp, #0x28]
0x000DCE44  e81b40b9  ldr       w8, [sp, #0x18]
0x000DCE48  e83b00b9  str       w8, [sp, #0x38]
0x000DCE4C  5536ff97  bl        #0xaa7a0
0x000DCE50  d4ffff17  b         #0xdcda0
0x000DCE54  e80340f9  ldr       x8, [sp]
0x000DCE58  15410491  add       x21, x8, #0x110
0x000DCE5C  000340f9  ldr       x0, [x24]
0x000DCE60  dc440794  bl        #0x2ae1d0
0x000DCE64  083600f0  adrp      x8, #0x79f000
0x000DCE68  20360090  adrp      x0, #0x7a0000
0x000DCE6C  08cd42f9  ldr       x8, [x8, #0x598]
0x000DCE70  160140f9  ldr       x22, [x8]
0x000DCE74  000043f9  ldr       x0, [x0, #0x600]
0x000DCE78  e8230091  add       x8, sp, #8
0x000DCE7C  00311094  bl        #0x4e927c
0x000DCE80  e00316aa  mov       x0, x22
0x000DCE84  64470894  bl        #0x2eec14
0x000DCE88  f70300aa  mov       x23, x0
0x000DCE8C  e1230091  add       x1, sp, #8
0x000DCE90  e00316aa  mov       x0, x22
0x000DCE94  e20317aa  mov       x2, x23
0x000DCE98  ff7f0ba9  stp       xzr, xzr, [sp, #0xb0]
0x000DCE9C  e3031f2a  mov       w3, wzr
0x000DCEA0  ff7f0aa9  stp       xzr, xzr, [sp, #0xa0]
0x000DCEA4  ff7f09a9  stp       xzr, xzr, [sp, #0x90]
0x000DCEA8  ff7f08a9  stp       xzr, xzr, [sp, #0x80]
0x000DCEAC  ff7f07a9  stp       xzr, xzr, [sp, #0x70]
0x000DCEB0  ff7f06a9  stp       xzr, xzr, [sp, #0x60]
0x000DCEB4  ff7f05a9  stp       xzr, xzr, [sp, #0x50]
0x000DCEB8  ff7f04a9  stp       xzr, xzr, [sp, #0x40]
0x000DCEBC  a9490894  bl        #0x2ef560
0x000DCEC0  00020034  cbz       w0, #0xdcf00
0x000DCEC4  e203002a  mov       w2, w0
0x000DCEC8  c00a41f9  ldr       x0, [x22, #0x210]
0x000DCECC  e1230091  add       x1, sp, #8
0x000DCED0  e5030191  add       x5, sp, #0x40
0x000DCED4  e30317aa  mov       x3, x23
0x000DCED8  e4031f2a  mov       w4, wzr
0x000DCEDC  e6031faa  mov       x6, xzr
0x000DCEE0  f6030191  add       x22, sp, #0x40
0x000DCEE4  b605fe97  bl        #0x5e5bc
0x000DCEE8  e82740f9  ldr       x8, [sp, #0x48]
0x000DCEEC  a80000b4  cbz       x8, #0xdcf00
0x000DCEF0  c0820091  add       x0, x22, #0x20
0x000DCEF4  ff7f05a9  stp       xzr, xzr, [sp, #0x50]
0x000DCEF8  ff7f04a9  stp       xzr, xzr, [sp, #0x40]
0x000DCEFC  00013fd6  blr       x8
```
### 0xA0B8C..0xA0C80 (bounded window, not claimed FDE)
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
0x000A0C5C  083440f9  ldr       x8, [x0, #0x68]
0x000A0C60  29708b52  mov       w9, #0x5b81
0x000A0C64  0a4440f9  ldr       x10, [x0, #0x88]
0x000A0C68  08696938  ldrb      w8, [x8, x9]
0x000A0C6C  49696938  ldrb      w9, [x10, x9]
0x000A0C70  2001082a  orr       w0, w9, w8
0x000A0C74  c0035fd6  ret       
0x000A0C78  ff8301d1  sub       sp, sp, #0x60
0x000A0C7C  fd7b04a9  stp       x29, x30, [sp, #0x40]
```
### 0xA1728..0xA17E8 (bounded window, not claimed FDE)
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
0x000A17B8  e2031f2a  mov       w2, wzr
0x000A17BC  f30b40f9  ldr       x19, [sp, #0x10]
0x000A17C0  e3031f2a  mov       w3, wzr
0x000A17C4  fd7bc2a8  ldp       x29, x30, [sp], #0x20
0x000A17C8  366b0014  b         #0xbc4a0
0x000A17CC  dd521594  bl        #0x5f6340
0x000A17D0  080c40f9  ldr       x8, [x0, #0x18]
0x000A17D4  680100b4  cbz       x8, #0xa1800
0x000A17D8  082540f9  ldr       x8, [x8, #0x48]
0x000A17DC  09b041b9  ldr       w9, [x0, #0x1b0]
0x000A17E0  080540b9  ldr       w8, [x8, #4]
0x000A17E4  3f01086b  cmp       w9, w8
```
### 0xC1E90..0xC1FD0 (bounded window, not claimed FDE)
```asm
0x000C1E90  08078052  mov       w8, #0x38
0x000C1E94  2800289b  smaddl    x8, w1, w8, x0
0x000C1E98  08814039  ldrb      w8, [x8, #0x20]
0x000C1E9C  08080034  cbz       w8, #0xc1f9c
0x000C1EA0  287c4093  sxtw      x8, w1
0x000C1EA4  09078052  mov       w9, #0x38
0x000C1EA8  0801299b  smaddl    x8, w8, w9, x0
0x000C1EAC  09e14039  ldrb      w9, [x8, #0x38]
0x000C1EB0  0af54039  ldrb      w10, [x8, #0x3d]
0x000C1EB4  0b094139  ldrb      w11, [x8, #0x42]
0x000C1EB8  0c1d4139  ldrb      w12, [x8, #0x47]
0x000C1EBC  0d314139  ldrb      w13, [x8, #0x4c]
0x000C1EC0  29010a0b  add       w9, w9, w10
0x000C1EC4  0a454139  ldrb      w10, [x8, #0x51]
0x000C1EC8  6b010c0b  add       w11, w11, w12
0x000C1ECC  0cf94039  ldrb      w12, [x8, #0x3e]
0x000C1ED0  29010b0b  add       w9, w9, w11
0x000C1ED4  0be54039  ldrb      w11, [x8, #0x39]
0x000C1ED8  aa010a0b  add       w10, w13, w10
0x000C1EDC  0d0d4139  ldrb      w13, [x8, #0x43]
0x000C1EE0  4a010b0b  add       w10, w10, w11
0x000C1EE4  0b214139  ldrb      w11, [x8, #0x48]
0x000C1EE8  29010a0b  add       w9, w9, w10
0x000C1EEC  0a354139  ldrb      w10, [x8, #0x4d]
0x000C1EF0  8c010d0b  add       w12, w12, w13
0x000C1EF4  8b010b0b  add       w11, w12, w11
0x000C1EF8  6a010a0b  add       w10, w11, w10
0x000C1EFC  0b494139  ldrb      w11, [x8, #0x52]
0x000C1F00  29010a0b  add       w9, w9, w10
0x000C1F04  0ae94039  ldrb      w10, [x8, #0x3a]
0x000C1F08  6a010a0b  add       w10, w11, w10
0x000C1F0C  0bfd4039  ldrb      w11, [x8, #0x3f]
0x000C1F10  4a010b0b  add       w10, w10, w11
0x000C1F14  0b114139  ldrb      w11, [x8, #0x44]
0x000C1F18  4a010b0b  add       w10, w10, w11
0x000C1F1C  0b254139  ldrb      w11, [x8, #0x49]
0x000C1F20  4a010b0b  add       w10, w10, w11
0x000C1F24  0b4d4139  ldrb      w11, [x8, #0x53]
0x000C1F28  29010a0b  add       w9, w9, w10
0x000C1F2C  0a394139  ldrb      w10, [x8, #0x4e]
0x000C1F30  4a010b0b  add       w10, w10, w11
0x000C1F34  0bed4039  ldrb      w11, [x8, #0x3b]
0x000C1F38  4a010b0b  add       w10, w10, w11
0x000C1F3C  0b014139  ldrb      w11, [x8, #0x40]
0x000C1F40  4a010b0b  add       w10, w10, w11
0x000C1F44  0b154139  ldrb      w11, [x8, #0x45]
0x000C1F48  4a010b0b  add       w10, w10, w11
0x000C1F4C  0b294139  ldrb      w11, [x8, #0x4a]
0x000C1F50  4a010b0b  add       w10, w10, w11
0x000C1F54  0b514139  ldrb      w11, [x8, #0x54]
0x000C1F58  29010a0b  add       w9, w9, w10
0x000C1F5C  0a3d4139  ldrb      w10, [x8, #0x4f]
0x000C1F60  4a010b0b  add       w10, w10, w11
0x000C1F64  0bf14039  ldrb      w11, [x8, #0x3c]
0x000C1F68  4a010b0b  add       w10, w10, w11
0x000C1F6C  0b054139  ldrb      w11, [x8, #0x41]
0x000C1F70  4a010b0b  add       w10, w10, w11
0x000C1F74  0b194139  ldrb      w11, [x8, #0x46]
0x000C1F78  4a010b0b  add       w10, w10, w11
0x000C1F7C  0b2d4139  ldrb      w11, [x8, #0x4b]
0x000C1F80  4a010b0b  add       w10, w10, w11
0x000C1F84  0b414139  ldrb      w11, [x8, #0x50]
0x000C1F88  08554139  ldrb      w8, [x8, #0x55]
0x000C1F8C  4a010b0b  add       w10, w10, w11
0x000C1F90  29010a0b  add       w9, w9, w10
0x000C1F94  2001080b  add       w0, w9, w8
0x000C1F98  c0035fd6  ret       
0x000C1F9C  e0031f2a  mov       w0, wzr
0x000C1FA0  c0035fd6  ret       
0x000C1FA4  fd7bbea9  stp       x29, x30, [sp, #-0x20]!
0x000C1FA8  f44f01a9  stp       x20, x19, [sp, #0x10]
0x000C1FAC  fd030091  mov       x29, sp
0x000C1FB0  e1031f2a  mov       w1, wzr
0x000C1FB4  f30300aa  mov       x19, x0
0x000C1FB8  b6ffff97  bl        #0xc1e90
0x000C1FBC  f403002a  mov       w20, w0
0x000C1FC0  e00313aa  mov       x0, x19
0x000C1FC4  21008052  mov       w1, #1
0x000C1FC8  b2ffff97  bl        #0xc1e90
0x000C1FCC  0000140b  add       w0, w0, w20
```

## All direct +0x2A8 candidates (raw immediate scan)

Count: 301. Same displacement is not proof of same object. Pair/bulk reset and indirect accesses require separate follow-up.
- direct memory: 0x000012A4  935601f9  str       x19, [x20, #0x2a8]
- direct memory: 0x00001680  805641f9  ldr       x0, [x20, #0x2a8]
- direct memory: 0x00001694  9f5601f9  str       xzr, [x20, #0x2a8]
- direct memory: 0x00008808  9f5601f9  str       xzr, [x20, #0x2a8]
- direct memory: 0x00012554  015541f9  ldr       x1, [x8, #0x2a8]
- direct memory: 0x00048D70  e85701f9  str       x8, [sp, #0x2a8]
- direct memory: 0x0004A5B0  085401f9  str       x8, [x0, #0x2a8]
- direct memory: 0x0005F0C4  7f5601f9  str       xzr, [x19, #0x2a8]
- direct memory: 0x00068D7C  ff5701f9  str       xzr, [sp, #0x2a8]
- direct memory: 0x0006946C  e05741f9  ldr       x0, [sp, #0x2a8]
- direct memory: 0x0006949C  e95701f9  str       x9, [sp, #0x2a8]
- direct memory: 0x0006C6FC  015541f9  ldr       x1, [x8, #0x2a8]
- direct memory: 0x0006CE48  015541f9  ldr       x1, [x8, #0x2a8]
- direct memory: 0x0006EDDC  1f5401f9  str       xzr, [x0, #0x2a8]
- direct memory: 0x00092584  425741f9  ldr       x2, [x26, #0x2a8]
```asm
0x00092554  284f40f9  ldr       x8, [x25, #0x98]
0x00092558  f50300aa  mov       x21, x0
0x0009255C  08050091  add       x8, x8, #1
0x00092560  284f00f9  str       x8, [x25, #0x98]
0x00092564  47ffff97  bl        #0x92280
0x00092568  284f40f9  ldr       x8, [x25, #0x98]
0x0009256C  080500d1  sub       x8, x8, #1
0x00092570  284f00f9  str       x8, [x25, #0x98]
0x00092574  414f41f9  ldr       x1, [x26, #0x298]
0x00092578  554f01f9  str       x21, [x26, #0x298]
0x0009257C  e10000b4  cbz       x1, #0x92598
0x00092580  405341f9  ldr       x0, [x26, #0x2a0]
0x00092584  425741f9  ldr       x2, [x26, #0x2a8]  ; candidate
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
0x000925B0  680240f9  ldr       x8, [x19]
0x000925B4  080940f9  ldr       x8, [x8, #0x10]
```
- direct memory: 0x000925A4  575701f9  str       x23, [x26, #0x2a8]
```asm
0x00092574  414f41f9  ldr       x1, [x26, #0x298]
0x00092578  554f01f9  str       x21, [x26, #0x298]
0x0009257C  e10000b4  cbz       x1, #0x92598
0x00092580  405341f9  ldr       x0, [x26, #0x2a0]
0x00092584  425741f9  ldr       x2, [x26, #0x2a8]
0x00092588  435b41f9  ldr       x3, [x26, #0x2b0]
0x0009258C  080040f9  ldr       x8, [x0]
0x00092590  080d40f9  ldr       x8, [x8, #0x18]
0x00092594  00013fd6  blr       x8
0x00092598  535301f9  str       x19, [x26, #0x2a0]
0x0009259C  e00313aa  mov       x0, x19
0x000925A0  01048052  mov       w1, #0x20
0x000925A4  575701f9  str       x23, [x26, #0x2a8]  ; candidate
0x000925A8  02018052  mov       w2, #8
0x000925AC  585b01f9  str       x24, [x26, #0x2b0]
0x000925B0  680240f9  ldr       x8, [x19]
0x000925B4  080940f9  ldr       x8, [x8, #0x10]
0x000925B8  00013fd6  blr       x8
0x000925BC  284f40f9  ldr       x8, [x25, #0x98]
0x000925C0  1f4100f1  cmp       x8, #0x10
0x000925C4  80030054  b.eq      #0x92634
0x000925C8  737b28f8  str       x19, [x27, x8, lsl #3]
0x000925CC  e10313aa  mov       x1, x19
0x000925D0  284f40f9  ldr       x8, [x25, #0x98]
0x000925D4  f50300aa  mov       x21, x0
```
- direct memory: 0x0009C5F4  1fa00a39  strb      wzr, [x0, #0x2a8]
```asm
0x0009C5C4  1f200339  strb      wzr, [x0, #0xc8]
0x0009C5C8  1fc00339  strb      wzr, [x0, #0xf0]
0x0009C5CC  1f600439  strb      wzr, [x0, #0x118]
0x0009C5D0  1f000539  strb      wzr, [x0, #0x140]
0x0009C5D4  1fa00539  strb      wzr, [x0, #0x168]
0x0009C5D8  1f400639  strb      wzr, [x0, #0x190]
0x0009C5DC  1fe00639  strb      wzr, [x0, #0x1b8]
0x0009C5E0  1f800739  strb      wzr, [x0, #0x1e0]
0x0009C5E4  1f200839  strb      wzr, [x0, #0x208]
0x0009C5E8  1fc00839  strb      wzr, [x0, #0x230]
0x0009C5EC  1f600939  strb      wzr, [x0, #0x258]
0x0009C5F0  1f000a39  strb      wzr, [x0, #0x280]
0x0009C5F4  1fa00a39  strb      wzr, [x0, #0x2a8]  ; candidate
0x0009C5F8  1f400b39  strb      wzr, [x0, #0x2d0]
0x0009C5FC  1fe00b39  strb      wzr, [x0, #0x2f8]
0x0009C600  1f800c39  strb      wzr, [x0, #0x320]
0x0009C604  1f200d39  strb      wzr, [x0, #0x348]
0x0009C608  1fc00d39  strb      wzr, [x0, #0x370]
0x0009C60C  1f600e39  strb      wzr, [x0, #0x398]
0x0009C610  1f000f39  strb      wzr, [x0, #0x3c0]
0x0009C614  1fa00f39  strb      wzr, [x0, #0x3e8]
0x0009C618  1f401039  strb      wzr, [x0, #0x410]
0x0009C61C  1fe01039  strb      wzr, [x0, #0x438]
0x0009C620  1f801139  strb      wzr, [x0, #0x460]
0x0009C624  1f201239  strb      wzr, [x0, #0x488]
```
- direct memory: 0x0009E350  1fa00a39  strb      wzr, [x0, #0x2a8]
```asm
0x0009E320  1f200939  strb      wzr, [x0, #0x248]
0x0009E324  1f2001f9  str       xzr, [x0, #0x240]
0x0009E328  1f1c01f9  str       xzr, [x0, #0x238]
0x0009E32C  1f800939  strb      wzr, [x0, #0x260]
0x0009E330  1f2c01f9  str       xzr, [x0, #0x258]
0x0009E334  1f2801f9  str       xzr, [x0, #0x250]
0x0009E338  1fe00939  strb      wzr, [x0, #0x278]
0x0009E33C  1f3801f9  str       xzr, [x0, #0x270]
0x0009E340  1f3401f9  str       xzr, [x0, #0x268]
0x0009E344  1f400a39  strb      wzr, [x0, #0x290]
0x0009E348  1f4401f9  str       xzr, [x0, #0x288]
0x0009E34C  1f4001f9  str       xzr, [x0, #0x280]
0x0009E350  1fa00a39  strb      wzr, [x0, #0x2a8]  ; candidate
0x0009E354  1f5001f9  str       xzr, [x0, #0x2a0]
0x0009E358  1f4c01f9  str       xzr, [x0, #0x298]
0x0009E35C  1f000b39  strb      wzr, [x0, #0x2c0]
0x0009E360  1f5c01f9  str       xzr, [x0, #0x2b8]
0x0009E364  1f5801f9  str       xzr, [x0, #0x2b0]
0x0009E368  1f600b39  strb      wzr, [x0, #0x2d8]
0x0009E36C  1f6801f9  str       xzr, [x0, #0x2d0]
0x0009E370  1f6401f9  str       xzr, [x0, #0x2c8]
0x0009E374  1fc00b39  strb      wzr, [x0, #0x2f0]
0x0009E378  1f7401f9  str       xzr, [x0, #0x2e8]
0x0009E37C  1f7001f9  str       xzr, [x0, #0x2e0]
0x0009E380  090000f9  str       x9, [x0]
```
- direct memory: 0x000A0BE8  09a942b9  ldr       w9, [x8, #0x2a8]
```asm
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
0x000A0BE8  09a942b9  ldr       w9, [x8, #0x2a8]  ; candidate
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
- direct memory: 0x000A0BF4  09a902b9  str       w9, [x8, #0x2a8]
```asm
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
0x000A0BF4  09a902b9  str       w9, [x8, #0x2a8]  ; candidate
0x000A0BF8  96860094  bl        #0xc2650
0x000A0BFC  68be41b9  ldr       w8, [x19, #0x1bc]
0x000A0C00  1f110071  cmp       w8, #4
0x000A0C04  21010054  b.ne      #0xa0c28
0x000A0C08  68c241b9  ldr       w8, [x19, #0x1c0]
0x000A0C0C  1f110071  cmp       w8, #4
0x000A0C10  61010054  b.ne      #0xa0c3c
0x000A0C14  e00313aa  mov       x0, x19
0x000A0C18  f44f42a9  ldp       x20, x19, [sp, #0x20]
0x000A0C1C  f50b40f9  ldr       x21, [sp, #0x10]
0x000A0C20  fd7bc3a8  ldp       x29, x30, [sp], #0x30
0x000A0C24  93ffff17  b         #0xa0a70
```
- direct memory: 0x000A1768  09a942b9  ldr       w9, [x8, #0x2a8]
```asm
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
0x000A1768  09a942b9  ldr       w9, [x8, #0x2a8]  ; candidate
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
```
- direct memory: 0x000A1770  09a902b9  str       w9, [x8, #0x2a8]
```asm
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
0x000A1770  09a902b9  str       w9, [x8, #0x2a8]  ; candidate
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
```
- direct memory: 0x000A7144  085541f9  ldr       x8, [x8, #0x2a8]
```asm
0x000A7114  1f630639  strb      wzr, [x24, #0x198]
0x000A7118  089f01b9  str       w8, [x24, #0x19c]
0x000A711C  094f40f9  ldr       x9, [x24, #0x98]
0x000A7120  08a340b9  ldr       w8, [x24, #0xa0]
0x000A7124  09d300f9  str       x9, [x24, #0x1a0]
0x000A7128  08ab01b9  str       w8, [x24, #0x1a8]
0x000A712C  c83900d0  adrp      x8, #0x7e1000
0x000A7130  08611491  add       x8, x8, #0x518
0x000A7134  bf831ef8  stur      xzr, [x29, #-0x18]
0x000A7138  bfff3ca9  stp       xzr, xzr, [x29, #-0x38]
0x000A713C  080140f9  ldr       x8, [x8]
0x000A7140  bf031fb8  stur      wzr, [x29, #-0x10]
0x000A7144  085541f9  ldr       x8, [x8, #0x2a8]  ; candidate
0x000A7148  ff5a02b9  str       wzr, [x23, #0x258]
0x000A714C  164b40b9  ldr       w22, [x24, #0x48]
0x000A7150  095340b9  ldr       w9, [x24, #0x50]
0x000A7154  df02096b  cmp       w22, w9
0x000A7158  bfa33da9  stp       xzr, x8, [x29, #-0x28]
0x000A715C  48250054  b.hi      #0xa7604
0x000A7160  0a4740b9  ldr       w10, [x24, #0x44]
0x000A7164  084f40b9  ldr       w8, [x24, #0x4c]
0x000A7168  5f01086b  cmp       w10, w8
0x000A716C  a9000054  b.ls      #0xa7180
0x000A7170  d6060011  add       w22, w22, #1
0x000A7174  df02096b  cmp       w22, w9
```
- direct memory: 0x000A7934  085541f9  ldr       x8, [x8, #0x2a8]
```asm
0x000A7904  5f01086b  cmp       w10, w8
0x000A7908  49030054  b.ls      #0xa7970
0x000A790C  1f2003d5  nop       
0x000A7910  5a070011  add       w26, w26, #1
0x000A7914  5f03096b  cmp       w26, w9
0x000A7918  c9ffff54  b.ls      #0xa7910
0x000A791C  c83900d0  adrp      x8, #0x7e1000
0x000A7920  08611491  add       x8, x8, #0x518
0x000A7924  ffe700f9  str       xzr, [sp, #0x1c8]
0x000A7928  ffff1aa9  stp       xzr, xzr, [sp, #0x1a8]
0x000A792C  080140f9  ldr       x8, [x8]
0x000A7930  ffd301b9  str       wzr, [sp, #0x1d0]
0x000A7934  085541f9  ldr       x8, [x8, #0x2a8]  ; candidate
0x000A7938  ff5a02b9  str       wzr, [x23, #0x258]
0x000A793C  9a4a40b9  ldr       w26, [x20, #0x48]
0x000A7940  895240b9  ldr       w9, [x20, #0x50]
0x000A7944  5f03096b  cmp       w26, w9
0x000A7948  ffa31ba9  stp       xzr, x8, [sp, #0x1b8]
0x000A794C  88280054  b.hi      #0xa7e5c
0x000A7950  8a4640b9  ldr       w10, [x20, #0x44]
0x000A7954  884e40b9  ldr       w8, [x20, #0x4c]
0x000A7958  5f01086b  cmp       w10, w8
0x000A795C  890c0054  b.ls      #0xa7aec
0x000A7960  5a070011  add       w26, w26, #1
0x000A7964  5f03096b  cmp       w26, w9
```
- direct memory: 0x000AF9E8  005541f9  ldr       x0, [x8, #0x2a8]
```asm
0x000AF9B8  00013fd6  blr       x8
0x000AF9BC  ff0f00f9  str       xzr, [sp, #0x18]
0x000AF9C0  38060036  tbz       w24, #0, #0xafa84
0x000AF9C4  a82640f9  ldr       x8, [x21, #0x48]
0x000AF9C8  e00313aa  mov       x0, x19
0x000AF9CC  080940f9  ldr       x8, [x8, #0x10]
0x000AF9D0  00013fd6  blr       x8
0x000AF9D4  b5031ff8  stur      x21, [x29, #-0x10]
0x000AF9D8  88370090  adrp      x8, #0x79f000
0x000AF9DC  e1430091  add       x1, sp, #0x10
0x000AF9E0  08ed41f9  ldr       x8, [x8, #0x3d8]
0x000AF9E4  080140f9  ldr       x8, [x8]
0x000AF9E8  005541f9  ldr       x0, [x8, #0x2a8]  ; candidate
0x000AF9EC  e8230091  add       x8, sp, #8
0x000AF9F0  e00b00f9  str       x0, [sp, #0x10]
0x000AF9F4  5f76ff97  bl        #0x8d370
0x000AF9F8  e00740f9  ldr       x0, [sp, #8]
0x000AF9FC  e00300f9  str       x0, [sp]
0x000AFA00  800000b4  cbz       x0, #0xafa10
0x000AFA04  088c44f8  ldr       x8, [x0, #0x48]!
0x000AFA08  080940f9  ldr       x8, [x8, #0x10]
0x000AFA0C  00013fd6  blr       x8
0x000AFA10  e1030091  mov       x1, sp
0x000AFA14  e00317aa  mov       x0, x23
0x000AFA18  e20316aa  mov       x2, x22
```
- direct memory: 0x000B2D14  08a942b9  ldr       w8, [x8, #0x2a8]
```asm
0x000B2CE4  08cd42f9  ldr       x8, [x8, #0x598]
0x000B2CE8  130140f9  ldr       x19, [x8]
0x000B2CEC  001c43f9  ldr       x0, [x0, #0x638]
0x000B2CF0  4a000014  b         #0xb2e18
0x000B2CF4  683700b0  adrp      x8, #0x79f000
0x000B2CF8  603700d0  adrp      x0, #0x7a0000
0x000B2CFC  08cd42f9  ldr       x8, [x8, #0x598]
0x000B2D00  130140f9  ldr       x19, [x8]
0x000B2D04  002843f9  ldr       x0, [x0, #0x650]
0x000B2D08  88ffff17  b         #0xb2b28
0x000B2D0C  a80640f9  ldr       x8, [x21, #8]
0x000B2D10  a92240f9  ldr       x9, [x21, #0x40]
0x000B2D14  08a942b9  ldr       w8, [x8, #0x2a8]  ; candidate
0x000B2D18  290140b9  ldr       w9, [x9]
0x000B2D1C  0801130b  add       w8, w8, w19
0x000B2D20  1f01096b  cmp       w8, w9
0x000B2D24  c9050054  b.ls      #0xb2ddc
0x000B2D28  813240b9  ldr       w1, [x20, #0x30]
0x000B2D2C  e00318aa  mov       x0, x24
0x000B2D30  e2031aaa  mov       x2, x26
0x000B2D34  3e3c0094  bl        #0xc1e2c
0x000B2D38  28008052  mov       w8, #1
0x000B2D3C  603700d0  adrp      x0, #0x7a0000
0x000B2D40  28070039  strb      w8, [x25, #1]
0x000B2D44  683700b0  adrp      x8, #0x79f000
```
- direct memory: 0x000C4A60  7f5601f9  str       xzr, [x19, #0x2a8]
```asm
0x000C4A30  7f1201f9  str       xzr, [x19, #0x220]
0x000C4A34  7f0e01f9  str       xzr, [x19, #0x218]
0x000C4A38  7f0a01f9  str       xzr, [x19, #0x210]
0x000C4A3C  10921094  bl        #0x4e927c
0x000C4A40  68820991  add       x8, x19, #0x260
0x000C4A44  e00314aa  mov       x0, x20
0x000C4A48  0d921094  bl        #0x4e927c
0x000C4A4C  68020a91  add       x8, x19, #0x280
0x000C4A50  e00314aa  mov       x0, x20
0x000C4A54  7f5201f9  str       xzr, [x19, #0x2a0]
0x000C4A58  1fe102f8  stur      xzr, [x8, #0x2e]
0x000C4A5C  68e20a91  add       x8, x19, #0x2b8
0x000C4A60  7f5601f9  str       xzr, [x19, #0x2a8]  ; candidate
0x000C4A64  7f4e01f9  str       xzr, [x19, #0x298]
0x000C4A68  7f4a01f9  str       xzr, [x19, #0x290]
0x000C4A6C  7f4601f9  str       xzr, [x19, #0x288]
0x000C4A70  7f4201f9  str       xzr, [x19, #0x280]
0x000C4A74  02921094  bl        #0x4e927c
0x000C4A78  68620b91  add       x8, x19, #0x2d8
0x000C4A7C  e00314aa  mov       x0, x20
0x000C4A80  ff911094  bl        #0x4e927c
0x000C4A84  68e20b91  add       x8, x19, #0x2f8
0x000C4A88  e00314aa  mov       x0, x20
0x000C4A8C  7f8a01f9  str       xzr, [x19, #0x310]
0x000C4A90  1f6102f8  stur      xzr, [x8, #0x26]
```
- direct memory: 0x000C8490  605641f9  ldr       x0, [x19, #0x2a8]
```asm
0x000C8460  605e41f9  ldr       x0, [x19, #0x2b8]
0x000C8464  a00000b4  cbz       x0, #0xc8478
0x000C8468  088c44f8  ldr       x8, [x0, #0x48]!
0x000C846C  080d40f9  ldr       x8, [x8, #0x18]
0x000C8470  00013fd6  blr       x8
0x000C8474  7f5e01f9  str       xzr, [x19, #0x2b8]
0x000C8478  605a41f9  ldr       x0, [x19, #0x2b0]
0x000C847C  a00000b4  cbz       x0, #0xc8490
0x000C8480  088c44f8  ldr       x8, [x0, #0x48]!
0x000C8484  080d40f9  ldr       x8, [x8, #0x18]
0x000C8488  00013fd6  blr       x8
0x000C848C  7f5a01f9  str       xzr, [x19, #0x2b0]
0x000C8490  605641f9  ldr       x0, [x19, #0x2a8]  ; candidate
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
0x000C84BC  7f5201f9  str       xzr, [x19, #0x2a0]
0x000C84C0  604e41f9  ldr       x0, [x19, #0x298]
```
- direct memory: 0x000C84A4  7f5601f9  str       xzr, [x19, #0x2a8]
```asm
0x000C8474  7f5e01f9  str       xzr, [x19, #0x2b8]
0x000C8478  605a41f9  ldr       x0, [x19, #0x2b0]
0x000C847C  a00000b4  cbz       x0, #0xc8490
0x000C8480  088c44f8  ldr       x8, [x0, #0x48]!
0x000C8484  080d40f9  ldr       x8, [x8, #0x18]
0x000C8488  00013fd6  blr       x8
0x000C848C  7f5a01f9  str       xzr, [x19, #0x2b0]
0x000C8490  605641f9  ldr       x0, [x19, #0x2a8]
0x000C8494  a00000b4  cbz       x0, #0xc84a8
0x000C8498  088c44f8  ldr       x8, [x0, #0x48]!
0x000C849C  080d40f9  ldr       x8, [x8, #0x18]
0x000C84A0  00013fd6  blr       x8
0x000C84A4  7f5601f9  str       xzr, [x19, #0x2a8]  ; candidate
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
0x000C84D4  7f4e01f9  str       xzr, [x19, #0x298]
```
- address arithmetic: 0x000D7394  68a20a91  add       x8, x19, #0x2a8
```asm
0x000D7364  7f1601f9  str       xzr, [x19, #0x228]
0x000D7368  7f0e01f9  str       xzr, [x19, #0x218]
0x000D736C  7f0a01f9  str       xzr, [x19, #0x210]
0x000D7370  7f0601f9  str       xzr, [x19, #0x208]
0x000D7374  c2471094  bl        #0x4e927c
0x000D7378  68620991  add       x8, x19, #0x258
0x000D737C  e00314aa  mov       x0, x20
0x000D7380  bf471094  bl        #0x4e927c
0x000D7384  68e20991  add       x8, x19, #0x278
0x000D7388  e00314aa  mov       x0, x20
0x000D738C  7f4a01f9  str       xzr, [x19, #0x290]
0x000D7390  1f6102f8  stur      xzr, [x8, #0x26]
0x000D7394  68a20a91  add       x8, x19, #0x2a8  ; candidate
0x000D7398  7f4e01f9  str       xzr, [x19, #0x298]
0x000D739C  7f4601f9  str       xzr, [x19, #0x288]
0x000D73A0  7f4201f9  str       xzr, [x19, #0x280]
0x000D73A4  7f3e01f9  str       xzr, [x19, #0x278]
0x000D73A8  b5471094  bl        #0x4e927c
0x000D73AC  68220b91  add       x8, x19, #0x2c8
0x000D73B0  e00314aa  mov       x0, x20
0x000D73B4  b2471094  bl        #0x4e927c
0x000D73B8  68a20b91  add       x8, x19, #0x2e8
0x000D73BC  e00314aa  mov       x0, x20
0x000D73C0  7f8201f9  str       xzr, [x19, #0x300]
0x000D73C4  1f6102f8  stur      xzr, [x8, #0x26]
```
- direct memory: 0x000D7FC4  885601f9  str       x8, [x20, #0x2a8]
```asm
0x000D7F94  2878caf2  movk      x8, #0x53c1, lsl #32
0x000D7F98  c8b9ebf2  movk      x8, #0x5dce, lsl #48
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
0x000D7FC4  885601f9  str       x8, [x20, #0x2a8]  ; candidate
0x000D7FC8  28cc8cd2  mov       x8, #0x6661
0x000D7FCC  e84aa2f2  movk      x8, #0x1257, lsl #16
0x000D7FD0  4846dff2  movk      x8, #0xfa32, lsl #32
0x000D7FD4  48d3f8f2  movk      x8, #0xc69a, lsl #48
0x000D7FD8  885a01f9  str       x8, [x20, #0x2b0]
0x000D7FDC  88459fd2  mov       x8, #0xfa2c
0x000D7FE0  c8fdbef2  movk      x8, #0xf7ee, lsl #16
0x000D7FE4  28cbdaf2  movk      x8, #0xd659, lsl #32
0x000D7FE8  c8c5fff2  movk      x8, #0xfe2e, lsl #48
0x000D7FEC  885e01f9  str       x8, [x20, #0x2b8]
0x000D7FF0  08b286d2  mov       x8, #0x3590
0x000D7FF4  c8a2bcf2  movk      x8, #0xe516, lsl #16
```
- direct memory: 0x000DA624  e95701f9  str       x9, [sp, #0x2a8]
```asm
0x000DA5F4  ea8301f9  str       x10, [sp, #0x300]
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
0x000DA624  e95701f9  str       x9, [sp, #0x2a8]  ; candidate
0x000DA628  293600f0  adrp      x9, #0x7a1000
0x000DA62C  296540f9  ldr       x9, [x9, #0xc8]
0x000DA630  f41301f9  str       x20, [sp, #0x220]
0x000DA634  ff1b01f9  str       xzr, [sp, #0x230]
0x000DA638  ea0301f9  str       x10, [sp, #0x200]
0x000DA63C  eb0701f9  str       x11, [sp, #0x208]
0x000DA640  e80b01f9  str       x8, [sp, #0x210]
0x000DA644  ec0f01f9  str       x12, [sp, #0x218]
0x000DA648  e91701f9  str       x9, [sp, #0x228]
0x000DA64C  293600f0  adrp      x9, #0x7a1000
0x000DA650  296940f9  ldr       x9, [x9, #0xd0]
0x000DA654  ad5540f9  ldr       x13, [x13, #0xa8]
```
- direct memory: 0x000DB1E4  08a942b9  ldr       w8, [x8, #0x2a8]
```asm
0x000DB1B4  080d40f9  ldr       x8, [x8, #0x18]
0x000DB1B8  00013fd6  blr       x8
0x000DB1BC  f44f4ca9  ldp       x20, x19, [sp, #0xc0]
0x000DB1C0  fb4340f9  ldr       x27, [sp, #0x80]
0x000DB1C4  f6574ba9  ldp       x22, x21, [sp, #0xb0]
0x000DB1C8  f85f4aa9  ldp       x24, x23, [sp, #0xa0]
0x000DB1CC  fa6749a9  ldp       x26, x25, [sp, #0x90]
0x000DB1D0  fd7b47a9  ldp       x29, x30, [sp, #0x70]
0x000DB1D4  ff430391  add       sp, sp, #0xd0
0x000DB1D8  c0035fd6  ret       
0x000DB1DC  280740f9  ldr       x8, [x25, #8]
0x000DB1E0  292b40f9  ldr       x9, [x25, #0x50]
0x000DB1E4  08a942b9  ldr       w8, [x8, #0x2a8]  ; candidate
0x000DB1E8  290140b9  ldr       w9, [x9]
0x000DB1EC  2801080b  add       w8, w9, w8
0x000DB1F0  292340f9  ldr       x9, [x25, #0x40]
0x000DB1F4  290140b9  ldr       w9, [x9]
0x000DB1F8  1f01096b  cmp       w8, w9
0x000DB1FC  620b0054  b.hs      #0xdb368
0x000DB200  a1630091  add       x1, x29, #0x18
0x000DB204  e00314aa  mov       x0, x20
0x000DB208  22008052  mov       w2, #1
0x000DB20C  95b20794  bl        #0x2c7c60
0x000DB210  f30700f9  str       x19, [sp, #8]
0x000DB214  b30000b4  cbz       x19, #0xdb228
```
- direct memory: 0x000DCCCC  09a942b9  ldr       w9, [x8, #0x2a8]
```asm
0x000DCC9C  e00317aa  mov       x0, x23
0x000DCCA0  2fe2fe97  bl        #0x9555c
0x000DCCA4  e1830091  add       x1, sp, #0x20
0x000DCCA8  e00314aa  mov       x0, x20
0x000DCCAC  9237ff97  bl        #0xaaaf4
0x000DCCB0  e00316aa  mov       x0, x22
0x000DCCB4  e103152a  mov       w1, w21
0x000DCCB8  22008052  mov       w2, #1
0x000DCCBC  37008052  mov       w23, #1
0x000DCCC0  48f5fe97  bl        #0x9a1e0
0x000DCCC4  17c30039  strb      w23, [x24, #0x30]
0x000DCCC8  880640f9  ldr       x8, [x20, #8]
0x000DCCCC  09a942b9  ldr       w9, [x8, #0x2a8]  ; candidate
0x000DCCD0  29050011  add       w9, w9, #1
0x000DCCD4  09a902b9  str       w9, [x8, #0x2a8]
0x000DCCD8  176f0739  strb      w23, [x24, #0x1db]
0x000DCCDC  083740b9  ldr       w8, [x24, #0x34]
0x000DCCE0  08050011  add       w8, w8, #1
0x000DCCE4  083700b9  str       w8, [x24, #0x34]
0x000DCCE8  08df41b9  ldr       w8, [x24, #0x1dc]
0x000DCCEC  68000034  cbz       w8, #0xdccf8
0x000DCCF0  08050051  sub       w8, w8, #1
0x000DCCF4  08df01b9  str       w8, [x24, #0x1dc]
0x000DCCF8  08e341b9  ldr       w8, [x24, #0x1e0]
0x000DCCFC  68000034  cbz       w8, #0xdcd08
```
- direct memory: 0x000DCCD4  09a902b9  str       w9, [x8, #0x2a8]
```asm
0x000DCCA4  e1830091  add       x1, sp, #0x20
0x000DCCA8  e00314aa  mov       x0, x20
0x000DCCAC  9237ff97  bl        #0xaaaf4
0x000DCCB0  e00316aa  mov       x0, x22
0x000DCCB4  e103152a  mov       w1, w21
0x000DCCB8  22008052  mov       w2, #1
0x000DCCBC  37008052  mov       w23, #1
0x000DCCC0  48f5fe97  bl        #0x9a1e0
0x000DCCC4  17c30039  strb      w23, [x24, #0x30]
0x000DCCC8  880640f9  ldr       x8, [x20, #8]
0x000DCCCC  09a942b9  ldr       w9, [x8, #0x2a8]
0x000DCCD0  29050011  add       w9, w9, #1
0x000DCCD4  09a902b9  str       w9, [x8, #0x2a8]  ; candidate
0x000DCCD8  176f0739  strb      w23, [x24, #0x1db]
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
```
- direct memory: 0x000DCF24  2aa942b9  ldr       w10, [x9, #0x2a8]
```asm
0x000DCEF4  ff7f05a9  stp       xzr, xzr, [sp, #0x50]
0x000DCEF8  ff7f04a9  stp       xzr, xzr, [sp, #0x40]
0x000DCEFC  00013fd6  blr       x8
0x000DCF00  e01340f9  ldr       x0, [sp, #0x20]
0x000DCF04  800000b4  cbz       x0, #0xdcf14
0x000DCF08  088c44f8  ldr       x8, [x0, #0x48]!
0x000DCF0C  080d40f9  ldr       x8, [x8, #0x18]
0x000DCF10  00013fd6  blr       x8
0x000DCF14  882a40f9  ldr       x8, [x20, #0x50]
0x000DCF18  e00315aa  mov       x0, x21
0x000DCF1C  890640f9  ldr       x9, [x20, #8]
0x000DCF20  080140b9  ldr       w8, [x8]
0x000DCF24  2aa942b9  ldr       w10, [x9, #0x2a8]  ; candidate
0x000DCF28  4801080b  add       w8, w10, w8
0x000DCF2C  28a902b9  str       w8, [x9, #0x2a8]
0x000DCF30  1f030139  strb      wzr, [x24, #0x40]
0x000DCF34  082740f9  ldr       x8, [x24, #0x48]
0x000DCF38  082b00f9  str       x8, [x24, #0x50]
0x000DCF3C  085b9152  mov       w8, #0x8ad8
0x000DCF40  6102088b  add       x1, x19, x8
0x000DCF44  0d3dfd97  bl        #0x2c378
0x000DCF48  882a40f9  ldr       x8, [x20, #0x50]
0x000DCF4C  093740b9  ldr       w9, [x24, #0x34]
0x000DCF50  080140b9  ldr       w8, [x8]
0x000DCF54  2801080b  add       w8, w9, w8
```
- direct memory: 0x000DCF2C  28a902b9  str       w8, [x9, #0x2a8]
```asm
0x000DCEFC  00013fd6  blr       x8
0x000DCF00  e01340f9  ldr       x0, [sp, #0x20]
0x000DCF04  800000b4  cbz       x0, #0xdcf14
0x000DCF08  088c44f8  ldr       x8, [x0, #0x48]!
0x000DCF0C  080d40f9  ldr       x8, [x8, #0x18]
0x000DCF10  00013fd6  blr       x8
0x000DCF14  882a40f9  ldr       x8, [x20, #0x50]
0x000DCF18  e00315aa  mov       x0, x21
0x000DCF1C  890640f9  ldr       x9, [x20, #8]
0x000DCF20  080140b9  ldr       w8, [x8]
0x000DCF24  2aa942b9  ldr       w10, [x9, #0x2a8]
0x000DCF28  4801080b  add       w8, w10, w8
0x000DCF2C  28a902b9  str       w8, [x9, #0x2a8]  ; candidate
0x000DCF30  1f030139  strb      wzr, [x24, #0x40]
0x000DCF34  082740f9  ldr       x8, [x24, #0x48]
0x000DCF38  082b00f9  str       x8, [x24, #0x50]
0x000DCF3C  085b9152  mov       w8, #0x8ad8
0x000DCF40  6102088b  add       x1, x19, x8
0x000DCF44  0d3dfd97  bl        #0x2c378
0x000DCF48  882a40f9  ldr       x8, [x20, #0x50]
0x000DCF4C  093740b9  ldr       w9, [x24, #0x34]
0x000DCF50  080140b9  ldr       w8, [x8]
0x000DCF54  2801080b  add       w8, w9, w8
0x000DCF58  09df41b9  ldr       w9, [x24, #0x1dc]
0x000DCF5C  083700b9  str       w8, [x24, #0x34]
```
- direct memory: 0x000E35F4  08a942b9  ldr       w8, [x8, #0x2a8]
```asm
0x000E35C4  55010034  cbz       w21, #0xe35ec
0x000E35C8  e8008052  mov       w8, #7
0x000E35CC  bf120071  cmp       w21, #4
0x000E35D0  68ba00b9  str       w8, [x19, #0xb8]
0x000E35D4  a0010054  b.eq      #0xe3608
0x000E35D8  bf0e0071  cmp       w21, #3
0x000E35DC  c1010054  b.ne      #0xe3614
0x000E35E0  28008052  mov       w8, #1
0x000E35E4  68c200b9  str       w8, [x19, #0xc0]
0x000E35E8  0f000014  b         #0xe3624
0x000E35EC  680e40f9  ldr       x8, [x19, #0x18]
0x000E35F0  694a40b9  ldr       w9, [x19, #0x48]
0x000E35F4  08a942b9  ldr       w8, [x8, #0x2a8]  ; candidate
0x000E35F8  1f01096b  cmp       w8, w9
0x000E35FC  02010054  b.hs      #0xe361c
0x000E3600  7fba00b9  str       wzr, [x19, #0xb8]
0x000E3604  08000014  b         #0xe3624
0x000E3608  48008052  mov       w8, #2
0x000E360C  68c200b9  str       w8, [x19, #0xc0]
0x000E3610  05000014  b         #0xe3624
0x000E3614  7fc200b9  str       wzr, [x19, #0xc0]
0x000E3618  03000014  b         #0xe3624
0x000E361C  c8008052  mov       w8, #6
0x000E3620  68ba00b9  str       w8, [x19, #0xb8]
0x000E3624  68028052  mov       w8, #0x13
```
- address arithmetic: 0x000E4BB8  60a20a91  add       x0, x19, #0x2a8
```asm
0x000E4B88  60c20891  add       x0, x19, #0x230
0x000E4B8C  e10313aa  mov       x1, x19
0x000E4B90  a9defe97  bl        #0x9c634
0x000E4B94  a0080037  tbnz      w0, #0, #0xe4ca8
0x000E4B98  60620991  add       x0, x19, #0x258
0x000E4B9C  e10313aa  mov       x1, x19
0x000E4BA0  a5defe97  bl        #0x9c634
0x000E4BA4  20080037  tbnz      w0, #0, #0xe4ca8
0x000E4BA8  60020a91  add       x0, x19, #0x280
0x000E4BAC  e10313aa  mov       x1, x19
0x000E4BB0  a1defe97  bl        #0x9c634
0x000E4BB4  a0070037  tbnz      w0, #0, #0xe4ca8
0x000E4BB8  60a20a91  add       x0, x19, #0x2a8  ; candidate
0x000E4BBC  e10313aa  mov       x1, x19
0x000E4BC0  9ddefe97  bl        #0x9c634
0x000E4BC4  20070037  tbnz      w0, #0, #0xe4ca8
0x000E4BC8  60420b91  add       x0, x19, #0x2d0
0x000E4BCC  e10313aa  mov       x1, x19
0x000E4BD0  99defe97  bl        #0x9c634
0x000E4BD4  a0060037  tbnz      w0, #0, #0xe4ca8
0x000E4BD8  60e20b91  add       x0, x19, #0x2f8
0x000E4BDC  e10313aa  mov       x1, x19
0x000E4BE0  95defe97  bl        #0x9c634
0x000E4BE4  20060037  tbnz      w0, #0, #0xe4ca8
0x000E4BE8  60820c91  add       x0, x19, #0x320
```
- direct memory: 0x000E5BF0  f85701f9  str       x24, [sp, #0x2a8]
```asm
0x000E5BC0  fb6b19a9  stp       x27, x26, [sp, #0x190]
0x000E5BC4  394344f9  ldr       x25, [x25, #0x880]
0x000E5BC8  184744f9  ldr       x24, [x24, #0x888]
0x000E5BCC  f9631aa9  stp       x25, x24, [sp, #0x1a0]
0x000E5BD0  08b144f9  ldr       x8, [x8, #0x960]
0x000E5BD4  145440f9  ldr       x20, [x0, #0xa8]
0x000E5BD8  e05b01f9  str       x0, [sp, #0x2b0]
0x000E5BDC  ff6301f9  str       xzr, [sp, #0x2c0]
0x000E5BE0  ff1701f9  str       xzr, [sp, #0x228]
0x000E5BE4  fb4b01f9  str       x27, [sp, #0x290]
0x000E5BE8  fa4f01f9  str       x26, [sp, #0x298]
0x000E5BEC  f95301f9  str       x25, [sp, #0x2a0]
0x000E5BF0  f85701f9  str       x24, [sp, #0x2a8]  ; candidate
0x000E5BF4  e85f01f9  str       x8, [sp, #0x2b8]
0x000E5BF8  b40000b4  cbz       x20, #0xe5c0c
0x000E5BFC  e00314aa  mov       x0, x20
0x000E5C00  088c44f8  ldr       x8, [x0, #0x48]!
0x000E5C04  080940f9  ldr       x8, [x8, #0x10]
0x000E5C08  00013fd6  blr       x8
0x000E5C0C  f44b02f9  str       x20, [sp, #0x490]
0x000E5C10  c93500f0  adrp      x9, #0x7a0000
0x000E5C14  683240f9  ldr       x8, [x19, #0x60]
0x000E5C18  297543f9  ldr       x9, [x9, #0x6e8]
0x000E5C1C  29d977f8  ldr       x9, [x9, w23, sxtw #3]
0x000E5C20  e95302f9  str       x9, [sp, #0x4a0]
```
- direct memory: 0x000E6980  e85701f9  str       x8, [sp, #0x2a8]
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
0x000E697C  fb4f01f9  str       x27, [sp, #0x298]
0x000E6980  e85701f9  str       x8, [sp, #0x2a8]  ; candidate
0x000E6984  b70000b4  cbz       x23, #0xe6998
0x000E6988  e00317aa  mov       x0, x23
0x000E698C  088c44f8  ldr       x8, [x0, #0x48]!
0x000E6990  080940f9  ldr       x8, [x8, #0x10]
0x000E6994  00013fd6  blr       x8
0x000E6998  c83500d0  adrp      x8, #0x7a0000
0x000E699C  94820091  add       x20, x20, #0x20
0x000E69A0  087543f9  ldr       x8, [x8, #0x6e8]
0x000E69A4  f74302f9  str       x23, [sp, #0x480]
0x000E69A8  ff7f01a9  stp       xzr, xzr, [sp, #0x10]
0x000E69AC  08d975f8  ldr       x8, [x8, w21, sxtw #3]
0x000E69B0  e84b02f9  str       x8, [sp, #0x490]
```
- direct memory: 0x000ECBA8  08a942b9  ldr       w8, [x8, #0x2a8]
```asm
0x000ECB78  ea1f40b9  ldr       w10, [sp, #0x1c]
0x000ECB7C  0a1d00b9  str       w10, [x8, #0x1c]
0x000ECB80  094101f8  stur      x9, [x8, #0x14]
0x000ECB84  02000014  b         #0xecb8c
0x000ECB88  f6031f2a  mov       w22, wzr
0x000ECB8C  b6fe0729  stp       w22, wzr, [x21, #0x3c]
0x000ECB90  683240f9  ldr       x8, [x19, #0x60]
0x000ECB94  a84204f8  stur      x8, [x21, #0x44]
0x000ECB98  e8008052  mov       w8, #7
0x000ECB9C  10000014  b         #0xecbdc
0x000ECBA0  680e40f9  ldr       x8, [x19, #0x18]
0x000ECBA4  694a40b9  ldr       w9, [x19, #0x48]
0x000ECBA8  08a942b9  ldr       w8, [x8, #0x2a8]  ; candidate
0x000ECBAC  1f01096b  cmp       w8, w9
0x000ECBB0  02010054  b.hs      #0xecbd0
0x000ECBB4  7fba00b9  str       wzr, [x19, #0xb8]
0x000ECBB8  08000014  b         #0xecbd8
0x000ECBBC  48008052  mov       w8, #2
0x000ECBC0  68c200b9  str       w8, [x19, #0xc0]
0x000ECBC4  05000014  b         #0xecbd8
0x000ECBC8  7fc200b9  str       wzr, [x19, #0xc0]
0x000ECBCC  03000014  b         #0xecbd8
0x000ECBD0  c8008052  mov       w8, #6
0x000ECBD4  68ba00b9  str       w8, [x19, #0xb8]
0x000ECBD8  68028052  mov       w8, #0x13
```
- direct memory: 0x000FBD24  ff5701f9  str       xzr, [sp, #0x2a8]
- direct memory: 0x000FD1F0  ff5701f9  str       xzr, [sp, #0x2a8]
- direct memory: 0x000FD9B4  ff5701f9  str       xzr, [sp, #0x2a8]
- address arithmetic: 0x00105950  1fa10a71  cmp       w8, #0x2a8
- direct memory: 0x0010E2B8  1f5401f9  str       xzr, [x0, #0x2a8]
- direct memory: 0x00110420  015541f9  ldr       x1, [x8, #0x2a8]
- direct memory: 0x0011501C  005541f9  ldr       x0, [x8, #0x2a8]
- direct memory: 0x00116528  145541f9  ldr       x20, [x8, #0x2a8]
- direct memory: 0x001190F0  ff5601f9  str       xzr, [x23, #0x2a8]
- direct memory: 0x0011A194  685641f9  ldr       x8, [x19, #0x2a8]
- direct memory: 0x0011A1A8  7f5601f9  str       xzr, [x19, #0x2a8]
- direct memory: 0x0011A25C  685641f9  ldr       x8, [x19, #0x2a8]
- direct memory: 0x0011A270  7f5601f9  str       xzr, [x19, #0x2a8]
- direct memory: 0x001419BC  005541f9  ldr       x0, [x8, #0x2a8]
- direct memory: 0x0015BDEC  005541f9  ldr       x0, [x8, #0x2a8]
- direct memory: 0x0015DA0C  e95701f9  str       x9, [sp, #0x2a8]
- direct memory: 0x0015DBAC  e95741f9  ldr       x9, [sp, #0x2a8]
- direct memory: 0x0015DCD4  e85741f9  ldr       x8, [sp, #0x2a8]
- direct memory: 0x0015DCE8  ff5701f9  str       xzr, [sp, #0x2a8]
- direct memory: 0x0015FB8C  ff5701f9  str       xzr, [sp, #0x2a8]
- direct memory: 0x0015FFD4  ff5701f9  str       xzr, [sp, #0x2a8]
- direct memory: 0x0016022C  ff5701f9  str       xzr, [sp, #0x2a8]
- direct memory: 0x001606E8  ff5701f9  str       xzr, [sp, #0x2a8]
- direct memory: 0x001608B4  ff5701f9  str       xzr, [sp, #0x2a8]
- direct memory: 0x00160C10  ff5701f9  str       xzr, [sp, #0x2a8]
- direct memory: 0x001610A0  ff5701f9  str       xzr, [sp, #0x2a8]
- direct memory: 0x001618CC  ff5701f9  str       xzr, [sp, #0x2a8]
- direct memory: 0x00193170  ff5701f9  str       xzr, [sp, #0x2a8]
- direct memory: 0x0019F5AC  f75641f9  ldr       x23, [x23, #0x2a8]
- direct memory: 0x001A42F0  155541f9  ldr       x21, [x8, #0x2a8]
- direct memory: 0x001A46C8  175541f9  ldr       x23, [x8, #0x2a8]
- direct memory: 0x001A4DA4  145541f9  ldr       x20, [x8, #0x2a8] [near 99/100 candidate]
```asm
0x001A4D74  080d40f9  ldr       x8, [x8, #0x18]
0x001A4D78  00013fd6  blr       x8
0x001A4D7C  a0835ef8  ldur      x0, [x29, #-0x18]
0x001A4D80  08fb8152  mov       w8, #0xfd8
0x001A4D84  080ea072  movk      w8, #0x70, lsl #16
0x001A4D88  136828b8  str       w19, [x0, x8]
0x001A4D8C  fd6c0194  bl        #0x200180
0x001A4D90  c82f00f0  adrp      x8, #0x79f000
0x001A4D94  bf160071  cmp       w21, #5
0x001A4D98  08ed41f9  ldr       x8, [x8, #0x3d8]
0x001A4D9C  e00316aa  mov       x0, x22
0x001A4DA0  080140f9  ldr       x8, [x8]
0x001A4DA4  145541f9  ldr       x20, [x8, #0x2a8]  ; candidate
0x001A4DA8  e806971a  cinc      w8, w23, ne
0x001A4DAC  e84700b9  str       w8, [sp, #0x44]
0x001A4DB0  e8630191  add       x8, sp, #0x58
0x001A4DB4  bce6ff97  bl        #0x19e8a4
0x001A4DB8  e80740b9  ldr       w8, [sp, #4]
0x001A4DBC  48230034  cbz       w8, #0x1a5224
0x001A4DC0  48d03bd5  mrs       x8, tpidr_el0
0x001A4DC4  e9930191  add       x9, sp, #0x64
0x001A4DC8  f5031f2a  mov       w21, wzr
0x001A4DCC  17c97392  and       x23, x8, #0xffffffffffffe000
0x001A4DD0  2a110091  add       x10, x9, #4
0x001A4DD4  13b49952  mov       w19, #0xcda0
```
- direct memory: 0x001A55CC  195541f9  ldr       x25, [x8, #0x2a8]
- direct memory: 0x001A6998  7f5601f9  str       xzr, [x19, #0x2a8]
- address arithmetic: 0x001B3744  08a10a91  add       x8, x8, #0x2a8
- direct memory: 0x001C65CC  165541f9  ldr       x22, [x8, #0x2a8]
- direct memory: 0x001C67F0  155541f9  ldr       x21, [x8, #0x2a8]
- direct memory: 0x001C6AE0  165541f9  ldr       x22, [x8, #0x2a8]
- direct memory: 0x001C7124  165541f9  ldr       x22, [x8, #0x2a8]
- direct memory: 0x001CA2D0  005541f9  ldr       x0, [x8, #0x2a8]
- address arithmetic: 0x001CA8B4  08a10a91  add       x8, x8, #0x2a8
- direct memory: 0x001CA914  005541f9  ldr       x0, [x8, #0x2a8]
- address arithmetic: 0x001D0834  08a10a91  add       x8, x8, #0x2a8
- address arithmetic: 0x001D0944  08a10a91  add       x8, x8, #0x2a8
- address arithmetic: 0x001D0EE4  08a10a91  add       x8, x8, #0x2a8
- address arithmetic: 0x001D1A74  08a10a91  add       x8, x8, #0x2a8
- address arithmetic: 0x001D1D60  08a10a91  add       x8, x8, #0x2a8
- address arithmetic: 0x001D1EB4  08a10a91  add       x8, x8, #0x2a8
- address arithmetic: 0x001D8BF8  08a10a91  add       x8, x8, #0x2a8
- address arithmetic: 0x001D8C60  08a10a91  add       x8, x8, #0x2a8
- direct memory: 0x001F926C  685601f9  str       x8, [x19, #0x2a8]
- direct memory: 0x001FAA64  685641f9  ldr       x8, [x19, #0x2a8]
- direct memory: 0x001FAA78  7f5601f9  str       xzr, [x19, #0x2a8]
- direct memory: 0x00200AA4  0a5541f9  ldr       x10, [x8, #0x2a8]
- direct memory: 0x002013DC  c85641f9  ldr       x8, [x22, #0x2a8]
- direct memory: 0x002015B4  a85641f9  ldr       x8, [x21, #0x2a8]
- direct memory: 0x00201C10  c85641f9  ldr       x8, [x22, #0x2a8]
- direct memory: 0x00201CC4  cb5601f9  str       x11, [x22, #0x2a8]
- direct memory: 0x00208BA4  685641f9  ldr       x8, [x19, #0x2a8]
- direct memory: 0x00208BB8  7f5601f9  str       xzr, [x19, #0x2a8]
- direct memory: 0x00208D9C  885641f9  ldr       x8, [x20, #0x2a8]
- direct memory: 0x00208DB0  9f5601f9  str       xzr, [x20, #0x2a8]
- direct memory: 0x00209124  685641f9  ldr       x8, [x19, #0x2a8]
- direct memory: 0x0020A540  c85641f9  ldr       x8, [x22, #0x2a8]
- direct memory: 0x0020A554  df5601f9  str       xzr, [x22, #0x2a8]
- address arithmetic: 0x0021288C  3fa00a71  cmp       w1, #0x2a8
- direct memory: 0x0021304C  025541f9  ldr       x2, [x8, #0x2a8]
- direct memory: 0x00213090  005541f9  ldr       x0, [x8, #0x2a8]
- direct memory: 0x0021320C  025541f9  ldr       x2, [x8, #0x2a8]
- direct memory: 0x00213250  005541f9  ldr       x0, [x8, #0x2a8]
- direct memory: 0x002200DC  135541f9  ldr       x19, [x8, #0x2a8]
- direct memory: 0x00221E70  bf5601f9  str       xzr, [x21, #0x2a8]
- direct memory: 0x002222E4  bf5601f9  str       xzr, [x21, #0x2a8]
- direct memory: 0x0022249C  145541f9  ldr       x20, [x8, #0x2a8]
- direct memory: 0x002228A4  155541f9  ldr       x21, [x8, #0x2a8]
- direct memory: 0x00222D28  bf5601f9  str       xzr, [x21, #0x2a8]
- direct memory: 0x00223238  155541f9  ldr       x21, [x8, #0x2a8]
- direct memory: 0x00223318  155541f9  ldr       x21, [x8, #0x2a8]
- direct memory: 0x00223568  155541f9  ldr       x21, [x8, #0x2a8]
- direct memory: 0x00223678  175541f9  ldr       x23, [x8, #0x2a8]
- direct memory: 0x0022375C  165541f9  ldr       x22, [x8, #0x2a8]
- direct memory: 0x002238E8  165541f9  ldr       x22, [x8, #0x2a8]
- direct memory: 0x002250E4  bf5601f9  str       xzr, [x21, #0x2a8]
- direct memory: 0x00225798  bf5601f9  str       xzr, [x21, #0x2a8]
- direct memory: 0x00227320  bf5601f9  str       xzr, [x21, #0x2a8]
- direct memory: 0x0022783C  145541f9  ldr       x20, [x8, #0x2a8]
- direct memory: 0x00227D0C  7faa02b9  str       wzr, [x19, #0x2a8]
- direct memory: 0x0022E650  bf5601f9  str       xzr, [x21, #0x2a8]
- direct memory: 0x0022EAB0  bf5601f9  str       xzr, [x21, #0x2a8]
- direct memory: 0x0022EF10  bf5601f9  str       xzr, [x21, #0x2a8]
- direct memory: 0x0022F3A0  bf5601f9  str       xzr, [x21, #0x2a8]
- direct memory: 0x0022F8C4  df5601f9  str       xzr, [x22, #0x2a8]
- direct memory: 0x0022FD00  bf5601f9  str       xzr, [x21, #0x2a8]
- direct memory: 0x00230174  bf5601f9  str       xzr, [x21, #0x2a8]
- direct memory: 0x002305E4  bf5601f9  str       xzr, [x21, #0x2a8]
- direct memory: 0x002309E0  bf5601f9  str       xzr, [x21, #0x2a8]
- direct memory: 0x00230DE0  bf5601f9  str       xzr, [x21, #0x2a8]
- direct memory: 0x002311E0  bf5601f9  str       xzr, [x21, #0x2a8]
- direct memory: 0x002315E0  bf5601f9  str       xzr, [x21, #0x2a8]
- direct memory: 0x002319E0  bf5601f9  str       xzr, [x21, #0x2a8]
- direct memory: 0x00231E40  bf5601f9  str       xzr, [x21, #0x2a8]
- direct memory: 0x00232240  bf5601f9  str       xzr, [x21, #0x2a8]
- direct memory: 0x00232640  bf5601f9  str       xzr, [x21, #0x2a8]
- direct memory: 0x00232B34  df5601f9  str       xzr, [x22, #0x2a8]
- direct memory: 0x00243E98  005541f9  ldr       x0, [x8, #0x2a8]
- direct memory: 0x00247024  025541f9  ldr       x2, [x8, #0x2a8]
- direct memory: 0x002476EC  165541f9  ldr       x22, [x8, #0x2a8]
- direct memory: 0x00247E80  025541f9  ldr       x2, [x8, #0x2a8]
- direct memory: 0x00248C90  025541f9  ldr       x2, [x8, #0x2a8]
- direct memory: 0x00248D18  145541f9  ldr       x20, [x8, #0x2a8]
- direct memory: 0x00248E64  005541f9  ldr       x0, [x8, #0x2a8]
- direct memory: 0x002490B0  025541f9  ldr       x2, [x8, #0x2a8]
- direct memory: 0x00249130  015541f9  ldr       x1, [x8, #0x2a8] [near 99/100 candidate]
```asm
0x00249100  488ca072  movk      w8, #0x462, lsl #16
0x00249104  7502088b  add       x21, x19, x8
0x00249108  e00315aa  mov       x0, x21
0x0024910C  882bfb97  bl        #0x113f2c
0x00249110  2073ff97  bl        #0x225d90
0x00249114  e00315aa  mov       x0, x21
0x00249118  852bfb97  bl        #0x113f2c
0x0024911C  c82c0090  adrp      x8, #0x7e1000
0x00249120  08611491  add       x8, x8, #0x518
0x00249124  16200239  strb      w22, [x0, #0x88]
0x00249128  e00314aa  mov       x0, x20
0x0024912C  080140f9  ldr       x8, [x8]
0x00249130  015541f9  ldr       x1, [x8, #0x2a8]  ; candidate
0x00249134  302cfb97  bl        #0x1141f4
0x00249138  e00a0036  tbz       w0, #0, #0x249294
0x0024913C  88008052  mov       w8, #4
0x00249140  e0031f2a  mov       w0, wzr
0x00249144  681600b9  str       w8, [x19, #0x14]
0x00249148  64020014  b         #0x249ad8
0x0024914C  c82c0090  adrp      x8, #0x7e1000
0x00249150  08011991  add       x8, x8, #0x640
0x00249154  000140f9  ldr       x0, [x8]
0x00249158  9302ff97  bl        #0x209ba4
0x0024915C  c0090036  tbz       w0, #0, #0x249294
0x00249160  08a99f52  mov       w8, #0xfd48
```
- direct memory: 0x0024969C  155541f9  ldr       x21, [x8, #0x2a8]
- direct memory: 0x0024CEEC  ff5701f9  str       xzr, [sp, #0x2a8]
- direct memory: 0x0024D048  ff5701f9  str       xzr, [sp, #0x2a8]
- direct memory: 0x0024D124  ff5701f9  str       xzr, [sp, #0x2a8]
- direct memory: 0x0024D81C  ff5701f9  str       xzr, [sp, #0x2a8]
- direct memory: 0x0024D938  ff5701f9  str       xzr, [sp, #0x2a8]
- direct memory: 0x0024DAEC  ff5701f9  str       xzr, [sp, #0x2a8]
- direct memory: 0x0024E114  145541f9  ldr       x20, [x8, #0x2a8]
- direct memory: 0x00253ED0  085541f9  ldr       x8, [x8, #0x2a8]
- direct memory: 0x0025433C  085541f9  ldr       x8, [x8, #0x2a8]
- direct memory: 0x00254BE0  155541f9  ldr       x21, [x8, #0x2a8]
- direct memory: 0x002553C0  1b5541f9  ldr       x27, [x8, #0x2a8]
- direct memory: 0x00255638  175541f9  ldr       x23, [x8, #0x2a8]
- direct memory: 0x002559D0  155541f9  ldr       x21, [x8, #0x2a8]
- direct memory: 0x00255E7C  035541f9  ldr       x3, [x8, #0x2a8]
- direct memory: 0x00255EC4  165541f9  ldr       x22, [x8, #0x2a8]
- direct memory: 0x00256108  165541f9  ldr       x22, [x8, #0x2a8]
- direct memory: 0x0025644C  175541f9  ldr       x23, [x8, #0x2a8]
- direct memory: 0x00256524  165541f9  ldr       x22, [x8, #0x2a8]
- direct memory: 0x00256FB4  155541f9  ldr       x21, [x8, #0x2a8]
- direct memory: 0x0027262C  9f5601f9  str       xzr, [x20, #0x2a8]
- direct memory: 0x002859CC  085541f9  ldr       x8, [x8, #0x2a8]
- direct memory: 0x002859F4  005441f9  ldr       x0, [x0, #0x2a8]
- direct memory: 0x00285A28  005441f9  ldr       x0, [x0, #0x2a8]
- direct memory: 0x00294520  195541f9  ldr       x25, [x8, #0x2a8]
- direct memory: 0x00294C64  175541f9  ldr       x23, [x8, #0x2a8]
- direct memory: 0x00295524  295541f9  ldr       x9, [x9, #0x2a8]
- direct memory: 0x00295A98  035541f9  ldr       x3, [x8, #0x2a8]
- direct memory: 0x002AB3D0  7f5601f9  str       xzr, [x19, #0x2a8]
- direct memory: 0x002AB524  605641f9  ldr       x0, [x19, #0x2a8]
- direct memory: 0x002AB53C  685601f9  str       x8, [x19, #0x2a8]
- direct memory: 0x002BC538  7f5601f9  str       xzr, [x19, #0x2a8]
- direct memory: 0x002BC874  7f5601f9  str       xzr, [x19, #0x2a8]
- direct memory: 0x002BC8B4  7f5601f9  str       xzr, [x19, #0x2a8]
- direct memory: 0x002BF090  7f5601f9  str       xzr, [x19, #0x2a8]
- direct memory: 0x002D1098  0c5401f9  str       x12, [x0, #0x2a8]
- address arithmetic: 0x002D1A98  14a10a91  add       x20, x8, #0x2a8
- direct memory: 0x002E82BC  7f5601f9  str       xzr, [x19, #0x2a8]
- direct memory: 0x002E8530  625641f9  ldr       x2, [x19, #0x2a8]
- direct memory: 0x002E8558  625641f9  ldr       x2, [x19, #0x2a8]
- direct memory: 0x002E8634  625641f9  ldr       x2, [x19, #0x2a8]
- direct memory: 0x002E8664  625641f9  ldr       x2, [x19, #0x2a8]
- direct memory: 0x002E918C  625641f9  ldr       x2, [x19, #0x2a8]
- direct memory: 0x002E91B4  625641f9  ldr       x2, [x19, #0x2a8]
- direct memory: 0x002E91D8  775601f9  str       x23, [x19, #0x2a8]
- address arithmetic: 0x002F7FC8  93a30a91  add       x19, x28, #0x2a8
- address arithmetic: 0x002F8170  58a30a91  add       x24, x26, #0x2a8
- address arithmetic: 0x002F83E8  08a10a91  add       x8, x8, #0x2a8
- address arithmetic: 0x002F90E0  00a10a91  add       x0, x8, #0x2a8
- address arithmetic: 0x002F9C08  08a10a91  add       x8, x8, #0x2a8
- address arithmetic: 0x002F9D04  80a20a91  add       x0, x20, #0x2a8
- address arithmetic: 0x002F9D48  00a00a91  add       x0, x0, #0x2a8
- address arithmetic: 0x002F9DD0  60a20a91  add       x0, x19, #0x2a8
- address arithmetic: 0x002F9E38  60a20a91  add       x0, x19, #0x2a8
- address arithmetic: 0x002FBA1C  00a10a91  add       x0, x8, #0x2a8
- address arithmetic: 0x002FC1A0  00a10a91  add       x0, x8, #0x2a8
- address arithmetic: 0x002FC654  00a10a91  add       x0, x8, #0x2a8
- address arithmetic: 0x002FD1E4  00a10a91  add       x0, x8, #0x2a8
- address arithmetic: 0x002FD3FC  00a10a91  add       x0, x8, #0x2a8
- address arithmetic: 0x002FD8D4  00a10a91  add       x0, x8, #0x2a8
- direct memory: 0x002FE300  1fa802b9  str       wzr, [x0, #0x2a8]
- address arithmetic: 0x002FFA30  00a30a91  add       x0, x24, #0x2a8
- address arithmetic: 0x002FFBB8  e0a20a91  add       x0, x23, #0x2a8
- address arithmetic: 0x002FFF7C  a0a20a91  add       x0, x21, #0x2a8
- address arithmetic: 0x003000D0  f6a20a91  add       x22, x23, #0x2a8
- address arithmetic: 0x00300C70  00a10a91  add       x0, x8, #0x2a8
- direct memory: 0x00306424  7f5601f9  str       xzr, [x19, #0x2a8]
- direct memory: 0x00306444  77a20a39  strb      w23, [x19, #0x2a8]
- direct memory: 0x00315AF0  285541f9  ldr       x8, [x9, #0x2a8]
- direct memory: 0x00327C10  485441f9  ldr       x8, [x2, #0x2a8]
- direct memory: 0x003291AC  005541f9  ldr       x0, [x8, #0x2a8]
- direct memory: 0x003291FC  005541f9  ldr       x0, [x8, #0x2a8]
- direct memory: 0x00351028  a05601f9  str       x0, [x21, #0x2a8]
- direct memory: 0x00363A78  ae5541f9  ldr       x14, [x13, #0x2a8]
- direct memory: 0x00373228  a85641f9  ldr       x8, [x21, #0x2a8]
- direct memory: 0x00373440  015441f9  ldr       x1, [x0, #0x2a8]
- direct memory: 0x003734D4  365541f9  ldr       x22, [x9, #0x2a8]
- direct memory: 0x00373A34  7f5601f9  str       xzr, [x19, #0x2a8]
- direct memory: 0x00374E20  605641f9  ldr       x0, [x19, #0x2a8]
- direct memory: 0x0037568C  605641f9  ldr       x0, [x19, #0x2a8]
- direct memory: 0x00375A50  1f5401f9  str       xzr, [x0, #0x2a8]
- direct memory: 0x00375F98  605641f9  ldr       x0, [x19, #0x2a8]
- direct memory: 0x00376D6C  005441f9  ldr       x0, [x0, #0x2a8]
- direct memory: 0x00376DA8  805641f9  ldr       x0, [x20, #0x2a8]
- direct memory: 0x00376DE4  005441f9  ldr       x0, [x0, #0x2a8]
- direct memory: 0x00376E24  605641f9  ldr       x0, [x19, #0x2a8]
- direct memory: 0x00376ECC  a05641f9  ldr       x0, [x21, #0x2a8]
- address arithmetic: 0x003C5C28  0aa10a91  add       x10, x8, #0x2a8
- address arithmetic: 0x003C5C68  0aa10a91  add       x10, x8, #0x2a8
- direct memory: 0x003DDC24  485441f9  ldr       x8, [x2, #0x2a8]
- address arithmetic: 0x003EDFA4  0aa10a91  add       x10, x8, #0x2a8
- address arithmetic: 0x003EE024  0aa10a91  add       x10, x8, #0x2a8
- direct memory: 0x003F2328  085541f9  ldr       x8, [x8, #0x2a8]
- direct memory: 0x003F9BBC  085541f9  ldr       x8, [x8, #0x2a8]
- direct memory: 0x0041304C  ff5701f9  str       xzr, [sp, #0x2a8]
- direct memory: 0x0041362C  6c5401f9  str       x12, [x3, #0x2a8]
- direct memory: 0x004144CC  ff5701f9  str       xzr, [sp, #0x2a8]
- direct memory: 0x00414AAC  6c5401f9  str       x12, [x3, #0x2a8]
- direct memory: 0x0043AA78  e95701f9  str       x9, [sp, #0x2a8]
- direct memory: 0x0043EE24  945641f9  ldr       x20, [x20, #0x2a8]
- direct memory: 0x00445628  ff5701f9  str       xzr, [sp, #0x2a8]
- direct memory: 0x00445C40  6b5401f9  str       x11, [x3, #0x2a8]
- direct memory: 0x00445E14  2a5441f9  ldr       x10, [x1, #0x2a8]
- direct memory: 0x004975C4  685601f9  str       x8, [x19, #0x2a8]
- direct memory: 0x00497770  685641f9  ldr       x8, [x19, #0x2a8]
- direct memory: 0x00497934  095401f9  str       x9, [x0, #0x2a8]
- direct memory: 0x004A572C  7f5601f9  str       xzr, [x19, #0x2a8]
- direct memory: 0x004AB064  7f5601f9  str       xzr, [x19, #0x2a8]
- direct memory: 0x004AB268  7f5601f9  str       xzr, [x19, #0x2a8]
- direct memory: 0x004B56E0  285541f9  ldr       x8, [x9, #0x2a8]
- direct memory: 0x004B621C  615601f9  str       x1, [x19, #0x2a8]
- direct memory: 0x004CC9B8  685601f9  str       x8, [x19, #0x2a8]
- address arithmetic: 0x004DC44C  29a10a91  add       x9, x9, #0x2a8
- direct memory: 0x004EFE30  605641f9  ldr       x0, [x19, #0x2a8]
- direct memory: 0x005027E0  1f5401f9  str       xzr, [x0, #0x2a8]
- direct memory: 0x0052366C  e85701f9  str       x8, [sp, #0x2a8]
- direct memory: 0x00524364  e85701f9  str       x8, [sp, #0x2a8]
- direct memory: 0x00524720  e85741f9  ldr       x8, [sp, #0x2a8]
- direct memory: 0x00524FCC  e85701f9  str       x8, [sp, #0x2a8]
- direct memory: 0x00525D64  e85701f9  str       x8, [sp, #0x2a8]
- direct memory: 0x00526120  e85741f9  ldr       x8, [sp, #0x2a8]
- direct memory: 0x005269CC  e85701f9  str       x8, [sp, #0x2a8]
- direct memory: 0x005278B4  e85701f9  str       x8, [sp, #0x2a8]
- direct memory: 0x00527C70  e85741f9  ldr       x8, [sp, #0x2a8]
- direct memory: 0x0052851C  e85701f9  str       x8, [sp, #0x2a8]
- direct memory: 0x00529404  e85701f9  str       x8, [sp, #0x2a8]
- direct memory: 0x00529774  e85741f9  ldr       x8, [sp, #0x2a8]
- direct memory: 0x0052A01C  e85701f9  str       x8, [sp, #0x2a8]
- direct memory: 0x0052AE74  e85701f9  str       x8, [sp, #0x2a8]
- direct memory: 0x0052B230  e85741f9  ldr       x8, [sp, #0x2a8]
- direct memory: 0x0052BADC  e85701f9  str       x8, [sp, #0x2a8]
- direct memory: 0x0052C994  e85701f9  str       x8, [sp, #0x2a8]
- direct memory: 0x00578368  295541f9  ldr       x9, [x9, #0x2a8]
- direct memory: 0x0059F024  085541f9  ldr       x8, [x8, #0x2a8]
- direct memory: 0x0059F21C  005441f9  ldr       x0, [x0, #0x2a8]
- direct memory: 0x0059F250  005441f9  ldr       x0, [x0, #0x2a8]
- direct memory: 0x0059FD74  085541f9  ldr       x8, [x8, #0x2a8]
- direct memory: 0x0059FD98  005441f9  ldr       x0, [x0, #0x2a8]
- direct memory: 0x0059FDCC  005441f9  ldr       x0, [x0, #0x2a8]
- direct memory: 0x005A53B4  085401f9  str       x8, [x0, #0x2a8]
- direct memory: 0x005E1B84  295541f9  ldr       x9, [x9, #0x2a8]
- direct memory: 0x005EF120  085541f9  ldr       x8, [x8, #0x2a8]
- direct memory: 0x005F34FC  085541f9  ldr       x8, [x8, #0x2a8]
- direct memory: 0x005F3DBC  085541f9  ldr       x8, [x8, #0x2a8]
- direct memory: 0x005F6684  115641f9  ldr       x17, [x16, #0x2a8]
- address arithmetic: 0x005F6688  10a20a91  add       x16, x16, #0x2a8

## Resource hash byte occurrences

## Limitations
No receiver dataflow proof solely from displacement; compare candidates require manual branch validation. No runtime reset, server ACK, or executable patch.
