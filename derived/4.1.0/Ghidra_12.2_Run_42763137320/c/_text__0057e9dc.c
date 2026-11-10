/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0057e9dc; name: FUN_.text__0057e9dc
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0057e9dc(long *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *(undefined2 *)(param_1 + 1) = 0;
  *(undefined1 *)((long)param_1 + 10) = 0;
  lVar1 = _DAT_008a3b70;
  *(undefined8 *)((long)param_1 + 0xc) = 0x3e8000003f000000;
  *(undefined8 *)((long)param_1 + 0x14) = 0x3f0000003e800000;
  *(undefined8 *)((long)param_1 + 0x1c) = 0x3e8000003e800000;
  *(undefined4 *)((long)param_1 + 0x2c) = 0;
  param_1[6] = 0x447a00003f800000;
  *(undefined4 *)(param_1 + 7) = 0x3f800000;
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  *(undefined8 *)((long)param_1 + 0x3c) = 0x3f8000003f800000;
  *(undefined4 *)((long)param_1 + 0x44) = 0;
  *(undefined2 *)(param_1 + 9) = 0;
  *param_1 = lVar1 + 0x10;
  uVar2 = *(undefined8 *)(param_2 + 0xc);
  uVar3 = *(undefined8 *)(param_2 + 0x14);
  uVar4 = *(undefined8 *)(param_2 + 0x1c);
  *(undefined8 *)((long)param_1 + 0x24) = *(undefined8 *)(param_2 + 0x24);
  *(undefined8 *)((long)param_1 + 0x1c) = uVar4;
  *(undefined8 *)((long)param_1 + 0x14) = uVar3;
  *(undefined8 *)((long)param_1 + 0xc) = uVar2;
  uVar2 = *(undefined8 *)(param_2 + 0x34);
  uVar3 = *(undefined8 *)(param_2 + 0x3c);
  uVar4 = *(undefined8 *)(param_2 + 0x42);
  *(undefined8 *)((long)param_1 + 0x2c) = *(undefined8 *)(param_2 + 0x2c);
  *(undefined8 *)((long)param_1 + 0x42) = uVar4;
  *(undefined8 *)((long)param_1 + 0x3c) = uVar3;
  *(undefined8 *)((long)param_1 + 0x34) = uVar2;
  *(undefined2 *)(param_1 + 1) = 0xffff;
  *(undefined1 *)((long)param_1 + 10) = 0xff;
  return;
}


