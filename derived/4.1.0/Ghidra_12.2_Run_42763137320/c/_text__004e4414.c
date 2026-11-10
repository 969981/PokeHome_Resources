/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004e4414; name: FUN_.text__004e4414
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__004e4414(undefined8 *param_1,int param_2,int param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  
  *(int *)(param_1 + 9) = param_2;
  *(int *)((long)param_1 + 0x4c) = param_3;
  *(undefined4 *)(param_1 + 10) = param_4;
  plVar4 = (long *)FUN__text__00400f80(5,0x40);
  lVar5 = _DAT_008a4fa0;
  if (plVar4 == (long *)0x0) {
    *param_1 = 0;
    return 2;
  }
  plVar4[4] = 0;
  plVar4[5] = 0;
  plVar4[6] = 0;
  *(undefined4 *)(plVar4 + 7) = 0;
  plVar4[2] = 0;
  plVar4[3] = 0;
  *plVar4 = lVar5 + 0x10;
  plVar4[1] = 0;
  *param_1 = plVar4;
  uVar6 = *(undefined8 *)(_DAT_008a4fa8 + (long)param_3 * 8 + -8);
  param_1[2] = uVar6;
  lVar5 = FUN__text__00400f90(5,uVar6,0x1000);
  param_1[1] = lVar5;
  if (lVar5 == 0) {
    return 0x34;
  }
  uVar2 = 0;
  if (*_DAT_008a4b68 != 0) {
    uVar2 = ((uint)*_DAT_008a4b70 * param_2) / *_DAT_008a4b68;
  }
  uVar1 = *(uint *)(param_1 + 10);
  uVar3 = 0;
  if (uVar1 != 0) {
    uVar3 = ((uVar1 + uVar2 * 5) - 1) / uVar1;
  }
  lVar5 = FUN__text__00400f80(5,(ulong)uVar3 * 0x5f0);
  param_1[3] = lVar5;
  if (lVar5 != 0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)((long)param_1 + 0x24) = 0;
    *(uint *)(param_1 + 5) = uVar3;
    lVar5 = FUN__text__00400f80(5,(ulong)uVar3 * 0xf08);
    param_1[6] = lVar5;
    if (lVar5 != 0) {
      *(undefined4 *)(param_1 + 7) = 0;
      *(undefined4 *)((long)param_1 + 0x3c) = 0;
      *(uint *)(param_1 + 8) = uVar3;
      return 1;
    }
  }
  return 2;
}


