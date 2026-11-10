/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0055c30c; name: FUN_.text__0055c30c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0055c30c(long *param_1,long param_2)

{
  long lVar1;
  
  *(undefined8 *)((long)param_1 + 0xc) = 0x447a000000000000;
  *(undefined4 *)((long)param_1 + 0x14) = 0x3f800000;
  lVar1 = _DAT_008a3dc0;
  param_1[4] = 0x447a000000000000;
  *(undefined8 *)((long)param_1 + 0x34) = 0x447a000000000000;
  param_1[9] = 0x447a000000000000;
  *(undefined8 *)((long)param_1 + 0x5c) = 0x447a000000000000;
  param_1[0xe] = 0x447a000000000000;
  *(undefined8 *)((long)param_1 + 0x84) = 0x4248000042480000;
  *(undefined2 *)(param_1 + 3) = 0x100;
  *param_1 = lVar1 + 0x10;
  *(undefined4 *)((long)param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 5) = 0x3f800000;
  *(undefined2 *)((long)param_1 + 0x2c) = 0x100;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined4 *)((long)param_1 + 0x3c) = 0x3f800000;
  *(undefined2 *)(param_1 + 8) = 0x100;
  *(undefined4 *)((long)param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 10) = 0x3f800000;
  *(undefined2 *)((long)param_1 + 0x54) = 0x100;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *(undefined4 *)((long)param_1 + 100) = 0x3f800000;
  *(undefined2 *)(param_1 + 0xd) = 0x100;
  *(undefined4 *)((long)param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0xf) = 0x3f800000;
  *(undefined2 *)((long)param_1 + 0x7c) = 0x100;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)((long)param_1 + 0x8c) = 0;
  *(undefined1 *)(param_1 + 0x12) = 1;
  *(undefined8 *)((long)param_1 + 0x94) = 0x42c800003f800000;
  memcpy(param_1 + 1,(void *)(param_2 + 8),0x94);
  *(undefined1 *)((long)param_1 + 0x19) = 1;
  *(undefined1 *)((long)param_1 + 0x2d) = 1;
  *(undefined1 *)((long)param_1 + 0x41) = 1;
  *(undefined1 *)((long)param_1 + 0x55) = 1;
  *(undefined1 *)((long)param_1 + 0x69) = 1;
  *(undefined1 *)((long)param_1 + 0x7d) = 1;
  *(undefined1 *)(param_1 + 0x12) = 1;
  return;
}


