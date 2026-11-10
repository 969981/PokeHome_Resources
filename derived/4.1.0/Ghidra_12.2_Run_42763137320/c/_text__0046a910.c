/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0046a910; name: FUN_.text__0046a910
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0046a910(long *param_1,undefined8 param_2,float *param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  float fVar6;
  float local_24;
  
  if (param_1[0xb] == 0) {
    return;
  }
  if ((*(byte *)(param_1[0xb] + 2) & 0x70) == 0) {
    return;
  }
  param_3[0] = 0.0;
  param_3[1] = 0.0;
  param_3[2] = 0.0;
  plVar2 = (long *)FUN__text__004329c0(param_1 + 9,0x14);
  puVar1 = _DAT_008a45f0;
  lVar4 = param_1[9];
  uVar5 = (ulong)*(uint *)(param_1 + 10);
  if ((long *)(lVar4 + uVar5 * 8) == plVar2) {
LAB__text__0046a9e4:
    if (plVar2 == (long *)(lVar4 + uVar5 * 8)) goto LAB__text__0046aa58;
  }
  else {
    lVar3 = *plVar2;
    if (*(int *)(lVar3 + 8) == 0x14) {
      do {
        plVar2 = plVar2 + 1;
        fVar6 = (float)FUN__text__00435a30(*puVar1,lVar3,param_2);
        *param_3 = *param_3 + fVar6;
        lVar4 = param_1[9];
        uVar5 = (ulong)*(uint *)(param_1 + 10);
        if (plVar2 == (long *)(lVar4 + uVar5 * 8)) goto LAB__text__0046a9e4;
        lVar3 = *plVar2;
      } while (*(int *)(lVar3 + 8) == 0x14);
    }
    if (plVar2 == (long *)(lVar4 + uVar5 * 8)) goto LAB__text__0046aa58;
  }
  puVar1 = _DAT_008a45f0;
  lVar3 = *plVar2;
  if (*(int *)(lVar3 + 8) == 0x15) {
    do {
      plVar2 = plVar2 + 1;
      fVar6 = (float)FUN__text__00435a30(*puVar1,lVar3,param_2);
      param_3[2] = param_3[2] + fVar6;
      lVar4 = param_1[9];
      uVar5 = (ulong)*(uint *)(param_1 + 10);
      if (plVar2 == (long *)(lVar4 + uVar5 * 8)) break;
      lVar3 = *plVar2;
    } while (*(int *)(lVar3 + 8) == 0x15);
  }
LAB__text__0046aa58:
  if (plVar2 != (long *)(lVar4 + uVar5 * 8)) {
    do {
      if (*(int *)(*plVar2 + 8) != 0x16) break;
      fVar6 = (float)FUN__text__00435a30(DAT_00ae9a70,*plVar2,param_2);
      plVar2 = plVar2 + 1;
      param_3[1] = param_3[1] + fVar6;
    } while (plVar2 != (long *)(param_1[9] + (ulong)*(uint *)(param_1 + 10) * 8));
  }
  local_24 = 0.0;
  uVar5 = (**(code **)(*param_1 + 0x108))(param_1,&local_24);
  if ((uVar5 & 1) != 0) {
    local_24 = local_24 * 0.01;
    *param_3 = *param_3 * local_24;
    param_3[1] = param_3[1] * local_24;
    param_3[2] = param_3[2] * local_24;
  }
  return;
}


