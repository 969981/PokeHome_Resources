/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0050e010; name: FUN_.text__0050e010
 */


void FUN__text__0050e010(long *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  for (puVar1 = (undefined8 *)*param_1; puVar1 != (undefined8 *)0x0;
      puVar1 = (undefined8 *)puVar1[0x2f00]) {
    if (puVar1[0x2f02] != 0) goto LAB__text__0050e370;
  }
  puVar1 = (undefined8 *)FUN__text__00400f90(10,0x17818,0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[0x234] = puVar1 + 0x178;
    puVar1[0x178] = puVar1 + 0xbc;
    puVar1[0x2f0] = puVar1 + 0x234;
    puVar1[0xbc] = puVar1;
    puVar1[0x3ac] = puVar1 + 0x2f0;
    puVar1[0x468] = puVar1 + 0x3ac;
    puVar1[0x524] = puVar1 + 0x468;
    puVar1[0x5e0] = puVar1 + 0x524;
    puVar1[0x69c] = puVar1 + 0x5e0;
    puVar1[0x758] = puVar1 + 0x69c;
    puVar1[0x814] = puVar1 + 0x758;
    puVar1[0x8d0] = puVar1 + 0x814;
    puVar1[0x98c] = puVar1 + 0x8d0;
    puVar1[0xa48] = puVar1 + 0x98c;
    puVar1[0xb04] = puVar1 + 0xa48;
    puVar1[0xbc0] = puVar1 + 0xb04;
    puVar1[0xc7c] = puVar1 + 0xbc0;
    puVar1[0xd38] = puVar1 + 0xc7c;
    puVar1[0xdf4] = puVar1 + 0xd38;
    puVar1[0xeb0] = puVar1 + 0xdf4;
    puVar1[0xf6c] = puVar1 + 0xeb0;
    puVar1[0x1028] = puVar1 + 0xf6c;
    puVar1[0x10e4] = puVar1 + 0x1028;
    puVar1[0x11a0] = puVar1 + 0x10e4;
    puVar1[0x125c] = puVar1 + 0x11a0;
    puVar1[0x1318] = puVar1 + 0x125c;
    puVar1[0x13d4] = puVar1 + 0x1318;
    puVar1[0x1490] = puVar1 + 0x13d4;
    puVar1[0x154c] = puVar1 + 0x1490;
    puVar1[0x1608] = puVar1 + 0x154c;
    puVar1[0x16c4] = puVar1 + 0x1608;
    puVar1[0x1780] = puVar1 + 0x16c4;
    puVar1[0x183c] = puVar1 + 0x1780;
    puVar1[0x18f8] = puVar1 + 0x183c;
    puVar1[0x19b4] = puVar1 + 0x18f8;
    puVar1[0x1a70] = puVar1 + 0x19b4;
    puVar1[0x1b2c] = puVar1 + 0x1a70;
    puVar1[0x1be8] = puVar1 + 0x1b2c;
    puVar1[0x1ca4] = puVar1 + 0x1be8;
    puVar1[0x1d60] = puVar1 + 0x1ca4;
    puVar1[0x1e1c] = puVar1 + 0x1d60;
    puVar1[0x1ed8] = puVar1 + 0x1e1c;
    puVar1[0x1f94] = puVar1 + 0x1ed8;
    puVar1[0x2050] = puVar1 + 0x1f94;
    puVar1[0x210c] = puVar1 + 0x2050;
    puVar1[0x21c8] = puVar1 + 0x210c;
    puVar1[0x2284] = puVar1 + 0x21c8;
    puVar1[0x2340] = puVar1 + 0x2284;
    puVar1[0x23fc] = puVar1 + 0x2340;
    puVar1[0x24b8] = puVar1 + 0x23fc;
    puVar1[0x2574] = puVar1 + 0x24b8;
    puVar1[0x2630] = puVar1 + 0x2574;
    puVar1[0x26ec] = puVar1 + 0x2630;
    puVar1[0x27a8] = puVar1 + 0x26ec;
    puVar1[0x2864] = puVar1 + 0x27a8;
    puVar1[0x2920] = puVar1 + 0x2864;
    puVar1[0x29dc] = puVar1 + 0x2920;
    puVar1[0x2a98] = puVar1 + 0x29dc;
    puVar1[0x2b54] = puVar1 + 0x2a98;
    puVar1[0x2c10] = puVar1 + 0x2b54;
    puVar1[0x2ccc] = puVar1 + 0x2c10;
    puVar1[0x2d88] = puVar1 + 0x2ccc;
    puVar1[0x2e44] = puVar1 + 0x2d88;
    puVar1[0x2f00] = 0;
    *(undefined4 *)(puVar1 + 0x2f01) = 0x40;
    puVar1[0x2f02] = puVar1 + 0x2e44;
    if (*param_1 == 0) {
      *param_1 = (long)puVar1;
      puVar1[0x2f00] = 0;
      puVar2 = (undefined8 *)puVar1[0x2f02];
    }
    else {
      puVar1[0x2f00] = *param_1;
      *param_1 = (long)puVar1;
LAB__text__0050e370:
      puVar2 = (undefined8 *)puVar1[0x2f02];
    }
    if (puVar2 != (undefined8 *)0x0) {
      puVar1[0x2f02] = *puVar2;
      *puVar2 = 0;
      *(int *)(puVar1 + 0x2f01) = *(int *)(puVar1 + 0x2f01) + -1;
    }
  }
  return;
}


