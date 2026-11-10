/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00563940; name: FUN_.text__00563940
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00563940(long *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *(undefined2 *)(param_1 + 1) = 0;
  lVar1 = _DAT_008a3c00;
  *(undefined4 *)((long)param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[2] = 0x447a00003f800000;
  param_1[3] = 0x3f8000003f800000;
  *(undefined8 *)((long)param_1 + 0x24) = 0x3f8000003f800000;
  *(undefined4 *)((long)param_1 + 0x2c) = 0x42480000;
  *(undefined2 *)(param_1 + 6) = 0;
  *param_1 = lVar1 + 0x10;
  *(undefined8 *)((long)param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
  uVar2 = *(undefined8 *)(param_2 + 0x1c);
  uVar3 = *(undefined8 *)(param_2 + 0x24);
  uVar4 = *(undefined8 *)(param_2 + 0x2a);
  *(undefined8 *)((long)param_1 + 0x14) = *(undefined8 *)(param_2 + 0x14);
  *(undefined8 *)((long)param_1 + 0x2a) = uVar4;
  *(undefined8 *)((long)param_1 + 0x24) = uVar3;
  *(undefined8 *)((long)param_1 + 0x1c) = uVar2;
  *(undefined2 *)(param_1 + 1) = 0xffff;
  return;
}


