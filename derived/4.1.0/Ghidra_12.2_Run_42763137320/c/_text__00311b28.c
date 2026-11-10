/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00311b28; name: FUN_.text__00311b28
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00311b28(long *param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  param_1[7] = 0;
  lVar6 = _DAT_0089f690;
  *(undefined4 *)(param_1 + 8) = 0;
  uVar1 = tpidr_el0;
  uVar1 = uVar1 & 0xffffffffffffe000;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *param_1 = lVar6 + 0x10;
  lVar6 = 0;
  if (uVar1 != 0) {
    if (*(long *)(uVar1 + 0x98) == 0) {
      lVar6 = 0;
    }
    else {
      lVar6 = *(long *)(uVar1 + *(long *)(uVar1 + 0x98) * 8 + 0x10);
    }
  }
  *(undefined4 *)(param_1 + 10) = 0;
  lVar4 = _DAT_008a2ab0;
  param_1[0x1e] = 0;
  lVar2 = _DAT_0089ff80;
  *(undefined1 *)(param_1 + 0x20) = 1;
  *param_1 = lVar4 + 0x10;
  param_1[1] = lVar6;
  param_1[0xc] = lVar2 + 0x10;
  puVar3 = _DAT_0089ff88;
  param_1[9] = lVar4 + 0x68;
  param_1[0xe] = (long)FUN__text__00311d04;
  param_1[0xf] = (long)&DAT__text__00311d30;
  param_1[0x10] = (long)&LAB__text__00311d34;
  uVar5 = *puVar3;
  param_1[0x11] = (long)&LAB__text__00311d40;
  param_1[0x12] = (long)param_1;
  FUN__text__005df194(uVar5,0);
  *(undefined8 *)((long)param_1 + 0x54) = 0;
  *(undefined4 *)((long)param_1 + 0x5c) = 0;
  return;
}


