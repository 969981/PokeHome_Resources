/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0067cdc0; name: FUN_.text__0067cdc0
 */


int FUN__text__0067cdc0(long param_1,uint param_2,long param_3,long param_4)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  
  if ((param_2 & 1) != 0) {
    if (param_4 != 0) {
      return -0x1f5;
    }
    if (0x270 < *(ulong *)(param_1 + 0x920) >> 4) {
      return -0x388;
    }
  }
  iVar2 = FUN__text__00684b44(param_3,param_4);
  if (iVar2 == 0) {
    return -0x1f5;
  }
  lVar9 = param_1 + 0x890;
  lVar3 = FUN__text__006809d4(lVar9,0x98);
  if (lVar3 == 0) {
    return -0x385;
  }
  if (param_4 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = FUN__text__0068497c(param_3,param_4,lVar9);
    if (lVar4 == 0) goto LAB__text__0067ce7c;
  }
  if ((param_2 & 1) != 0) {
    puVar5 = (undefined8 *)0x0;
    goto LAB__text__0067cee8;
  }
  puVar5 = (undefined8 *)FUN__text__006809d4(lVar9,0x18);
  if (puVar5 == (undefined8 *)0x0) {
LAB__text__0067ce70:
    FUN__text__006809e4(lVar9,lVar4);
LAB__text__0067ce7c:
    FUN__text__006809e4(lVar9,lVar3);
    return -0x385;
  }
  if (param_4 == 0) {
    puVar5[1] = 0;
  }
  else {
    lVar6 = FUN__text__0068497c(param_3,param_4,lVar9);
    puVar5[1] = lVar6;
    if (lVar6 == 0) {
      FUN__text__006809e4(lVar9,puVar5);
      goto LAB__text__0067ce70;
    }
  }
  puVar5[2] = param_4;
  *puVar5 = 0;
LAB__text__0067cee8:
  FUN__text__00683bd8(lVar3);
  FUN__text__00683e20(lVar3,param_2,lVar4,param_4);
  iVar2 = FUN__text__0067ac40(param_1,lVar3);
  if (iVar2 != 0) {
    FUN__text__0067a510(puVar5,lVar9);
    FUN__text__00683e48(lVar3,lVar9);
    FUN__text__006809e4(lVar9,lVar3);
    return iVar2;
  }
  if ((param_2 & 1) == 0) {
    puVar8 = (undefined8 *)(param_1 + 0x8e0);
    do {
      puVar7 = puVar8;
      puVar8 = (undefined8 *)*puVar7;
    } while (puVar8 != (undefined8 *)0x0);
    *puVar7 = puVar5;
  }
  else {
    *(long *)(param_1 + 0x920) = *(long *)(param_1 + 0x920) + 1;
  }
  param_3 = param_3 + param_4 * 8;
  lVar9 = param_4 + 1;
  puVar10 = (undefined4 *)(param_3 + 4);
  do {
    lVar9 = lVar9 + -1;
    if (lVar9 == 0) goto LAB__text__0067cf98;
    puVar11 = puVar10 + -2;
    piVar1 = puVar10 + -3;
    puVar10 = puVar11;
  } while (*piVar1 != 3);
  *(undefined4 *)(param_1 + 0x9a0) = *puVar11;
LAB__text__0067cf98:
  lVar9 = param_4 + 1;
  puVar10 = (undefined4 *)(param_3 + 4);
  do {
    lVar9 = lVar9 + -1;
    if (lVar9 == 0) goto LAB__text__0067cfc4;
    puVar11 = puVar10 + -2;
    piVar1 = puVar10 + -3;
    puVar10 = puVar11;
  } while (*piVar1 != 2);
  *(char *)(param_1 + 0x9a8) = (char)*puVar11;
LAB__text__0067cfc4:
  param_4 = param_4 + 1;
  puVar10 = (undefined4 *)(param_3 + 4);
  do {
    param_4 = param_4 + -1;
    if (param_4 == 0) {
      return 0;
    }
    puVar11 = puVar10 + -2;
    piVar1 = puVar10 + -3;
    puVar10 = puVar11;
  } while (*piVar1 != 8);
  *(char *)(param_1 + 0x9a9) = (char)*puVar11;
  return 0;
}


