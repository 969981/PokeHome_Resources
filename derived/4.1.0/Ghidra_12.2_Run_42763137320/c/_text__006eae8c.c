/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006eae8c; name: FUN_.text__006eae8c
 */


bool FUN__text__006eae8c(long *param_1,long param_2,int param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  
  lVar4 = *(long *)(param_2 + 0x1c8);
  *(int *)(param_1 + 0xf) = param_3;
  uVar5 = (param_4 + lVar4) - 1U & -lVar4;
  lVar4 = uVar5 * (long)param_3;
  param_1[0xe] = uVar5;
  param_1[2] = param_2;
  param_1[3] = lVar4;
  lVar4 = FUN__text__006d7f10(param_2,lVar4,*(undefined8 *)(param_2 + 0x1c8));
  *param_1 = lVar4;
  if (lVar4 != 0) {
    lVar1 = param_1[2];
    uVar5 = param_1[3];
    param_1[1] = 0;
    lVar8 = param_1[0xe] + -1;
    uVar6 = *(long *)(lVar1 + 0x1c8) + lVar8 & -*(long *)(lVar1 + 0x1c8);
    if (uVar5 < uVar6) {
      uVar6 = 0;
      lVar9 = 0;
    }
    else {
      param_1[1] = uVar6;
      lVar9 = lVar4;
    }
    param_1[10] = lVar9;
    lVar2 = *(long *)(param_2 + 0x1d8);
    lVar3 = *(long *)(param_2 + 0x1e0);
    param_1[4] = lVar2;
    param_1[5] = lVar3;
    param_1[4] = (lVar9 - *(long *)(param_2 + 0x170)) + lVar2;
    uVar7 = (*(long *)(lVar1 + 0x1c8) + lVar8 & -*(long *)(lVar1 + 0x1c8)) + uVar6;
    if (uVar5 < uVar7) {
      lVar9 = 0;
      uVar7 = uVar6;
    }
    else {
      lVar9 = lVar4 + uVar6;
      param_1[1] = uVar7;
    }
    param_1[0xb] = lVar9;
    lVar2 = *(long *)(param_2 + 0x1d8);
    lVar3 = *(long *)(param_2 + 0x1e0);
    param_1[6] = lVar2;
    param_1[7] = lVar3;
    param_1[6] = (lVar9 - *(long *)(param_2 + 0x170)) + lVar2;
    if ((int)param_1[0xf] == 3) {
      lVar9 = 0;
      uVar6 = (*(long *)(lVar1 + 0x1c8) + lVar8 & -*(long *)(lVar1 + 0x1c8)) + uVar7;
      if (uVar6 <= uVar5) {
        lVar9 = lVar4 + uVar7;
        param_1[1] = uVar6;
      }
      param_1[0xc] = lVar9;
      lVar1 = *(long *)(param_2 + 0x1d8);
      lVar8 = *(long *)(param_2 + 0x1e0);
      param_1[8] = lVar1;
      param_1[9] = lVar8;
      param_1[8] = (lVar9 - *(long *)(param_2 + 0x170)) + lVar1;
    }
  }
  return lVar4 != 0;
}


