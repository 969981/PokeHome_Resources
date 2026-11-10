/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003fecb0; name: FUN_.text__003fecb0
 */


ulong FUN__text__003fecb0(long param_1,uint param_2,ulong param_3,uint param_4,uint param_5,
                         byte param_6,uint *param_7,undefined8 *param_8)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  short sVar6;
  ulong uVar7;
  ulong uVar8;
  int iVar9;
  int iVar10;
  ulong *puVar11;
  
  *param_8 = 0;
  iVar2 = *(int *)(param_1 + 0x30);
  if (iVar2 == 0) {
    return 0;
  }
  iVar10 = 0;
  iVar9 = iVar2 + -1;
  do {
    while( true ) {
      iVar3 = iVar9 - iVar10;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      uVar1 = iVar10 + (iVar3 >> 1);
      puVar11 = *(ulong **)(*(long *)(param_1 + 0x28) + (ulong)uVar1 * 8);
      uVar4 = (uint)puVar11[4];
      if (param_2 < uVar4) break;
      if (param_2 <= uVar4) {
        uVar8 = *puVar11;
        if (uVar8 < param_3) break;
        if (uVar8 == param_3) {
          if (param_3 <= (uVar8 - param_4) + (ulong)*param_7) {
            iVar10 = (int)puVar11[3];
            goto LAB__text__003fedcc;
          }
          goto LAB__text__003fed30;
        }
      }
      iVar10 = uVar1 + 1;
      if (iVar9 < iVar10) goto LAB__text__003fed30;
    }
    iVar9 = uVar1 - 1;
  } while (iVar10 <= iVar9);
LAB__text__003fed30:
  if (((uVar4 != param_2) || (uVar8 = *puVar11, param_3 < uVar8)) ||
     (iVar10 = (int)puVar11[3], (int)(((int)uVar8 - param_4) + iVar10) < (int)param_3)) {
    if (iVar2 <= (int)(uVar1 + 1)) {
      return 0;
    }
    puVar11 = *(ulong **)(*(long *)(param_1 + 0x28) + (ulong)(uVar1 + 1) * 8);
    if ((uint)puVar11[4] != param_2) {
      return 0;
    }
    uVar8 = *puVar11;
    if (param_3 < uVar8) {
      return 0;
    }
    iVar10 = (int)puVar11[3];
    if ((int)(((int)uVar8 - param_4) + iVar10) < (int)param_3) {
      return 0;
    }
  }
LAB__text__003fedcc:
  param_3 = param_3 - uVar8;
  uVar1 = iVar10 - (int)param_3;
  if (*param_7 < uVar1) {
    return 0;
  }
  if ((uVar1 == *param_7 & param_6) == 0) {
    uVar4 = 0;
    if (param_5 != 0) {
      uVar4 = uVar1 / param_5;
    }
    if (uVar1 != uVar4 * param_5) {
      return 0;
    }
  }
  if (param_4 <= uVar1) {
    uVar7 = (ulong)param_5;
    uVar8 = puVar11[1] + (param_3 & 0xffffffff);
    uVar5 = 0;
    if (uVar7 != 0) {
      uVar5 = uVar8 / uVar7;
    }
    if (uVar8 == uVar5 * uVar7) {
      *param_7 = uVar1;
      sVar6 = *(short *)((long)puVar11 + 0x24);
      if (sVar6 == 0) {
        FUN__text__003fee80(param_1 + 8,puVar11);
        *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) - (int)puVar11[3];
        puVar11[2] = 0;
        sVar6 = *(short *)((long)puVar11 + 0x24);
      }
      *(short *)((long)puVar11 + 0x24) = sVar6 + 1;
      *param_8 = puVar11;
      return param_3 & 0xffffffff;
    }
  }
  return 0;
}


