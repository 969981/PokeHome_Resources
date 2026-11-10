/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0054fac0; name: FUN_.text__0054fac0
 */


void FUN__text__0054fac0(undefined4 *param_1,int param_2,uint param_3)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  bool bVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  ulong uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  ulong uVar14;
  uint uVar15;
  uint uVar16;
  undefined4 *puVar17;
  uint uVar18;
  
  param_3 = param_3 >> (param_2 == 1);
  if (param_3 * -0x55555555 < 0x55555556) {
    iVar13 = 0;
    iVar12 = 1;
    uVar14 = (ulong)param_3;
    do {
      iVar13 = iVar13 + 1;
      uVar10 = uVar14 / 3;
      iVar12 = iVar12 * 3;
      uVar4 = uVar14 / 3;
      uVar14 = uVar10;
    } while ((uint)((int)uVar4 * -0x55555555) < 0x55555556);
  }
  else {
    iVar13 = 0;
    iVar12 = 1;
    uVar10 = (ulong)param_3;
  }
  if ((uVar10 & 3) == 0) {
    uVar11 = 0;
    uVar14 = uVar10;
    do {
      uVar10 = uVar14 >> 2;
      uVar11 = uVar11 + 1;
      iVar12 = iVar12 << 2;
      uVar4 = uVar14 & 0xc;
      uVar14 = uVar10;
    } while (uVar4 == 0);
  }
  else {
    uVar11 = 0;
  }
  if ((uint)((int)uVar10 * -0x33333333) < 0x33333334) {
    iVar8 = 0;
    uVar14 = uVar10;
    do {
      iVar8 = iVar8 + 1;
      uVar10 = uVar14 / 5;
      iVar12 = iVar12 * 5;
      uVar4 = uVar14 / 5;
      uVar14 = uVar10;
    } while ((uint)((int)uVar4 * -0x33333333) < 0x33333334);
  }
  else {
    iVar8 = 0;
  }
  bVar5 = (uVar10 & 1) != 0;
  bVar1 = !bVar5 && uVar11 != 0;
  uVar18 = (uint)bVar1;
  uVar2 = iVar12 << (ulong)uVar18;
  if (bVar5 || uVar11 == 0) {
    uVar15 = 0;
    uVar14 = (ulong)param_3;
    bVar5 = uVar11 != uVar18 && uVar2 == param_3;
    uVar9 = (uint)bVar5;
    uVar16 = uVar15;
    if (uVar11 - uVar18 != (uint)bVar5) goto LAB__text__0054fca4;
LAB__text__0054fbf0:
    uVar11 = uVar15;
    if (iVar13 != 0) goto LAB__text__0054fc04;
LAB__text__0054fd3c:
    if (iVar8 == 0) goto LAB__text__0054fd44;
LAB__text__0054fc44:
    do {
      iVar13 = (int)uVar14;
      uVar18 = uVar11 + 1;
      uVar14 = uVar14 / 5;
      uVar6 = 8;
      if (0xccccccc < ((uint)(iVar13 * -0x33333333) >> 2 | iVar13 * 0x40000000)) {
        uVar6 = 4;
      }
      iVar8 = iVar8 + -1;
      param_1[uVar11] = uVar6;
      uVar11 = uVar18;
    } while (iVar8 != 0);
    if (uVar9 != 0) goto LAB__text__0054fc74;
LAB__text__0054fd4c:
    if (uVar2 == param_3) goto joined_r0x0054fd58;
    uVar6 = 0;
  }
  else {
    uVar14 = (ulong)(param_3 >> 3);
    uVar6 = 5;
    if ((param_3 & 0x1f) != 0) {
      uVar6 = 1;
    }
    *param_1 = uVar6;
    uVar15 = 1;
    bVar5 = uVar11 != uVar18 && uVar2 == param_3;
    uVar9 = (uint)bVar5;
    uVar16 = uVar15;
    if (uVar11 - uVar18 == (uint)bVar5) goto LAB__text__0054fbf0;
LAB__text__0054fca4:
    iVar3 = -(uint)bVar1;
    uVar10 = (ulong)uVar16;
    iVar12 = uVar11 + iVar3;
    uVar18 = iVar12 - uVar9;
    uVar15 = (iVar12 + uVar16) - uVar9;
    if ((uVar18 & 1) != 0) {
      uVar6 = 7;
      if ((uVar14 & 0xf) != 0) {
        uVar6 = 3;
      }
      uVar14 = uVar14 >> 2;
      param_1[uVar10] = uVar6;
      uVar10 = uVar10 + 1;
    }
    if (uVar18 != 1) {
      puVar17 = param_1 + uVar10 + 1;
      iVar12 = ((uVar11 + uVar16 + iVar3) - uVar9) - (int)uVar10;
      do {
        uVar6 = 7;
        if ((uVar14 & 0xf) != 0) {
          uVar6 = 3;
        }
        uVar10 = uVar14 & 0x3c;
        uVar14 = uVar14 >> 4;
        uVar7 = 7;
        if (uVar10 != 0) {
          uVar7 = 3;
        }
        iVar12 = iVar12 + -2;
        puVar17[-1] = uVar6;
        *puVar17 = uVar7;
        puVar17 = puVar17 + 2;
      } while (iVar12 != 0);
    }
    uVar11 = uVar15;
    if (iVar13 == 0) goto LAB__text__0054fd3c;
LAB__text__0054fc04:
    do {
      iVar12 = (int)uVar14;
      uVar11 = uVar15 + 1;
      uVar14 = uVar14 / 3;
      uVar6 = 6;
      if (0x15555555 < ((uint)(iVar12 * -0x55555555) >> 2 | iVar12 * -0x40000000)) {
        uVar6 = 2;
      }
      iVar13 = iVar13 + -1;
      param_1[uVar15] = uVar6;
      uVar15 = uVar11;
    } while (iVar13 != 0);
    if (iVar8 != 0) goto LAB__text__0054fc44;
LAB__text__0054fd44:
    if (uVar9 == 0) goto LAB__text__0054fd4c;
LAB__text__0054fc74:
    uVar6 = 9;
    if ((param_3 & 0xf) != 0) {
      uVar6 = 3;
    }
  }
  param_1[uVar11] = uVar6;
  uVar11 = uVar11 + 1;
joined_r0x0054fd58:
  if (param_2 == 1) {
    param_1[uVar11] = 10;
    return;
  }
  return;
}


