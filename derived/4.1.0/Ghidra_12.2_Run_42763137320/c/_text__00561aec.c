/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00561aec; name: FUN_.text__00561aec
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00561aec(long *param_1,long param_2)

{
  undefined2 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  *(undefined2 *)(param_1 + 1) = 0;
  *(undefined8 *)((long)param_1 + 0x14) = 0x3f800000447a0000;
  lVar2 = _DAT_008a3d98;
  *(undefined1 *)((long)param_1 + 10) = 0;
  param_1[5] = 0x3f80000000000000;
  param_1[6] = 0x3f800000447a0000;
  *(undefined8 *)((long)param_1 + 0xc) = 0x3f80000000000000;
  *(undefined8 *)((long)param_1 + 0x1c) = 0x3f8000003f800000;
  *(undefined1 *)((long)param_1 + 0x24) = 0;
  param_1[7] = 0x3f8000003f800000;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined8 *)((long)param_1 + 0x44) = 0x3f80000000000000;
  *(undefined8 *)((long)param_1 + 0x4c) = 0x4003f800000;
  *(undefined2 *)((long)param_1 + 0x54) = 0;
  *param_1 = lVar2 + 0x10;
  uVar3 = *(undefined8 *)(param_2 + 0xc);
  *(undefined8 *)((long)param_1 + 0x14) = *(undefined8 *)(param_2 + 0x14);
  *(undefined8 *)((long)param_1 + 0xc) = uVar3;
  uVar3 = *(undefined8 *)(param_2 + 0x1c);
  uVar4 = *(undefined8 *)(param_2 + 0x24);
  uVar5 = *(undefined8 *)(param_2 + 0x2c);
  *(undefined8 *)((long)param_1 + 0x34) = *(undefined8 *)(param_2 + 0x34);
  *(undefined8 *)((long)param_1 + 0x2c) = uVar5;
  *(undefined8 *)((long)param_1 + 0x24) = uVar4;
  *(undefined8 *)((long)param_1 + 0x1c) = uVar3;
  uVar3 = *(undefined8 *)(param_2 + 0x44);
  uVar4 = *(undefined8 *)(param_2 + 0x4c);
  uVar1 = *(undefined2 *)(param_2 + 0x54);
  *(undefined8 *)((long)param_1 + 0x3c) = *(undefined8 *)(param_2 + 0x3c);
  *(undefined2 *)((long)param_1 + 0x54) = uVar1;
  *(undefined8 *)((long)param_1 + 0x4c) = uVar4;
  *(undefined8 *)((long)param_1 + 0x44) = uVar3;
  *(undefined2 *)(param_1 + 1) = 0xffff;
  *(undefined1 *)((long)param_1 + 10) = 0xff;
  return;
}


