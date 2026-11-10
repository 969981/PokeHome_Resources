/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0046fae8; name: FUN_.text__0046fae8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0046fae8(long param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  float fVar9;
  double dVar10;
  float fVar11;
  float __x;
  float fVar12;
  float fVar13;
  double dVar14;
  
  lVar5 = *(long *)(param_1 + 0xa8);
  if (lVar5 == 0) goto LAB__text__0046fcbc;
  __x = *(float *)(lVar5 + 0x24);
  uVar8 = *(undefined4 *)(lVar5 + 0x28);
  iVar2 = *(int *)(lVar5 + 0x2c);
  uVar6 = *(undefined8 *)(lVar5 + 0x30);
  uVar7 = *(undefined8 *)(lVar5 + 0x18);
  *(undefined4 *)(param_1 + 0x120) = *(undefined4 *)(lVar5 + 0x20);
  *(undefined8 *)(param_1 + 0x118) = uVar7;
  *(undefined4 *)(param_1 + 0x128) = uVar8;
  *(int *)(param_1 + 300) = iVar2;
  *(undefined8 *)(param_1 + 0x130) = uVar6;
  *(float *)(param_1 + 0x124) = __x;
  if (iVar2 == 0) {
    fVar13 = 6.2831855;
LAB__text__0046fb5c:
    __x = fmodf(__x,fVar13);
    *(float *)(param_1 + 0x124) = __x;
  }
  else if (iVar2 != 5) {
    fVar13 = 1.0;
    goto LAB__text__0046fb5c;
  }
  uVar3 = _DAT_008ab030;
  if (*(char *)(param_1 + 0x138) == '\0') goto LAB__text__0046fcbc;
  fVar13 = *(float *)(param_1 + 0x10c);
  if (fVar13 == 0.0) {
    fVar12 = *(float *)(param_1 + 0x108);
    fVar9 = 1.0;
    fVar13 = 0.0;
    fVar11 = (float)_DAT_008ab030;
    if (fVar12 < fVar11) goto LAB__text__0046fba4;
LAB__text__0046fc38:
    fVar12 = 1.0;
    iVar4 = *(int *)(param_1 + 0x104);
    *(undefined4 *)(param_1 + 0x128) = 0x3f800000;
    if (iVar4 != 0) goto LAB__text__0046fc48;
LAB__text__0046fc60:
    *(float *)(param_1 + 0x128) = fVar12 * 6.2831855;
    *(float *)(param_1 + 0x11c) = fVar9;
    *(float *)(param_1 + 0x120) = fVar13;
    if (iVar2 != iVar4) goto LAB__text__0046fc84;
LAB__text__0046fc58:
    iVar4 = iVar2;
  }
  else {
    dVar14 = (double)_DAT_008ab030;
    fVar12 = *(float *)(param_1 + 0x108);
    dVar10 = (double)NEON_fminnm((double)fVar12,dVar14);
    dVar10 = log((dVar14 * 0.5) / dVar10);
    dVar10 = exp(-((double)fVar13 * dVar10));
    dVar10 = cos((dVar14 * 3.141592653589793 * dVar10) / dVar14);
    dVar10 = 2.0 - dVar10;
    fVar13 = (float)(SQRT(dVar10 * dVar10 + -1.0) - dVar10);
    fVar9 = fVar13 + 1.0;
    fVar11 = (float)uVar3;
    if (fVar11 <= fVar12) goto LAB__text__0046fc38;
LAB__text__0046fba4:
    fVar12 = fVar12 / fVar11;
    iVar4 = *(int *)(param_1 + 0x104);
    *(float *)(param_1 + 0x128) = fVar12;
    if (iVar4 == 0) goto LAB__text__0046fc60;
LAB__text__0046fc48:
    *(float *)(param_1 + 0x11c) = fVar9;
    *(float *)(param_1 + 0x120) = fVar13;
    if (iVar2 == iVar4) goto LAB__text__0046fc58;
LAB__text__0046fc84:
    if ((iVar4 == 0) || (iVar2 == 0)) {
      fVar13 = 0.15915494;
      if (iVar2 != 0) {
        fVar13 = 6.2831855;
      }
      *(float *)(param_1 + 0x124) = __x * fVar13;
    }
  }
  *(int *)(param_1 + 300) = iVar4;
  *(undefined1 *)(param_1 + 0x138) = 0;
LAB__text__0046fcbc:
  param_2[6] = *(undefined4 *)(param_1 + 0xf8);
  param_2[7] = *(undefined4 *)(param_1 + 0xfc);
  param_2[8] = *(undefined4 *)(param_1 + 0x100);
  param_2[9] = *(undefined4 *)(param_1 + 0x104);
  param_2[10] = *(undefined4 *)(param_1 + 0x108);
  param_2[0xb] = *(undefined4 *)(param_1 + 0x10c);
  param_2[0xc] = *(undefined4 *)(param_1 + 0x110);
  uVar6 = *(undefined8 *)(param_1 + 0x118);
  uVar7 = *(undefined8 *)(param_1 + 0x120);
  uVar1 = *(undefined8 *)(param_1 + 0x130);
  *(undefined8 *)(param_2 + 0x12) = *(undefined8 *)(param_1 + 0x128);
  *(undefined8 *)(param_2 + 0x14) = uVar1;
  *(undefined8 *)(param_2 + 0xe) = uVar6;
  *(undefined8 *)(param_2 + 0x10) = uVar7;
  *param_2 = *(undefined4 *)(param_1 + 0xc0);
  param_2[3] = *(undefined4 *)(param_1 + 0xb8);
  param_2[2] = *(undefined4 *)(param_1 + 0xb4);
  param_2[1] = *(undefined4 *)(param_1 + 0xb0);
  param_2[4] = *(undefined4 *)(param_1 + 200);
  param_2[5] = *(undefined4 *)(param_1 + 0xd4);
  return;
}


