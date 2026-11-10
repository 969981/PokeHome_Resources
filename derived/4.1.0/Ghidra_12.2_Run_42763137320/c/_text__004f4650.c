/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004f4650; name: FUN_.text__004f4650
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN__text__004f4650(long param_1,int param_2,int param_3,uint param_4,undefined4 *param_5)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint *puVar9;
  ulong uVar10;
  int *piVar11;
  long lVar12;
  
  uVar1 = *(uint *)(param_1 + 0x130);
  uVar5 = (ulong)(param_4 & 1);
  uVar2 = uVar1 - 1;
  puVar3 = *(undefined4 **)(param_1 + 0x128);
  if ((param_4 & 1) < uVar2) {
    puVar9 = puVar3 + ((ulong)param_4 & 1) * 4 + 1;
    do {
      if ((uint)(puVar3[1] + param_2) <= *puVar9) goto LAB__text__004f469c;
      uVar4 = (int)uVar5 + 1;
      uVar5 = (ulong)uVar4;
      puVar9 = puVar9 + 4;
    } while (uVar2 != uVar4);
    uVar5 = (ulong)uVar2;
  }
LAB__text__004f469c:
  uVar4 = (uint)uVar5;
  if (param_3 == 0) {
    uVar6 = uVar2 - uVar4;
  }
  else {
    uVar6 = (uint)(uVar4 == 0);
    uVar8 = uVar4;
    if (uVar4 < 2) {
      uVar8 = 1;
    }
    uVar10 = (ulong)uVar8;
    if (uVar8 < uVar2) {
      if (((uVar1 + ~uVar8 & 1) != 0) &&
         (lVar12 = uVar10 * 4, uVar10 = uVar10 + 1, puVar3[lVar12] == param_3)) {
        uVar6 = uVar6 + 1;
      }
      if (uVar1 - 2 != uVar8) {
        iVar7 = ~(uint)uVar10 + uVar1;
        piVar11 = puVar3 + uVar10 * 4 + 4;
        do {
          if (piVar11[-4] == param_3) {
            uVar6 = uVar6 + 1;
          }
          if (*piVar11 == param_3) {
            uVar6 = uVar6 + 1;
          }
          iVar7 = iVar7 + -2;
          piVar11 = piVar11 + 8;
        } while (iVar7 != 0);
      }
    }
  }
  if (uVar6 == 0) {
    *param_5 = *puVar3;
    return 0;
  }
  lVar12 = *_DAT_008a45e8 * 0x5851f42d4c957f2d + 1;
  *_DAT_008a45e8 = lVar12;
  uVar2 = 0;
  uVar8 = (uint)((ulong)lVar12 >> 0x21);
  if (uVar6 != 0) {
    uVar2 = uVar8 / uVar6;
  }
  iVar7 = uVar8 - uVar2 * uVar6;
  if (param_3 == 0) {
    uVar5 = (ulong)(iVar7 + uVar4);
    goto LAB__text__004f47c4;
  }
  if (uVar4 == 0) {
    if (iVar7 != 0) {
      iVar7 = iVar7 + -1;
      uVar5 = 1;
      goto LAB__text__004f4790;
    }
  }
  else {
LAB__text__004f4790:
    do {
      if (puVar3[uVar5 * 4] == param_3) {
        if (iVar7 == 0) goto LAB__text__004f47c4;
        iVar7 = iVar7 + -1;
      }
      uVar2 = (int)uVar5 + 1;
      uVar5 = (ulong)uVar2;
    } while (uVar2 < uVar1);
  }
  uVar5 = 0;
LAB__text__004f47c4:
  *param_5 = puVar3[uVar5 * 4];
  return *(int *)(*(long *)(param_1 + 0x128) + uVar5 * 0x10 + 4) -
         *(int *)(*(long *)(param_1 + 0x128) + 4);
}


