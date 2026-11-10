/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006bdd88; name: FUN_.text__006bdd88
 */


void FUN__text__006bdd88(float *param_1,long param_2)

{
  byte bVar1;
  ushort uVar2;
  long lVar3;
  byte bVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  lVar3 = *(long *)(param_2 + 0xf0);
  param_1[0] = 0.0;
  param_1[1] = 0.0;
  param_1[2] = 0.0;
  param_1[3] = 0.0;
  if (lVar3 == 0) {
    return;
  }
  FUN__text__006bda44(param_2,param_1);
  fVar6 = param_1[3];
  fVar11 = fVar6 - param_1[1];
  fVar12 = param_1[2] - *param_1;
  fVar5 = (float)FUN__text__006b2e38(param_2);
  fVar8 = 0.0;
  fVar7 = 0.0;
  fVar9 = 0.0;
  fVar10 = 0.0;
  if (*(long *)(param_2 + 0x138) != 0) goto LAB__text__006bdde4;
  bVar1 = *(byte *)(param_2 + 0x116);
  if ((bVar1 & 3) == 2) {
    fVar7 = *(float *)(param_2 + 0x50);
    uVar2 = *(ushort *)(param_2 + 0x114);
    bVar4 = bVar1 >> 2 & 3;
    if ((uVar2 & 0x1000) != 0) {
      bVar4 = 0;
    }
    if (bVar4 != 2) goto LAB__text__006bde54;
LAB__text__006bded0:
    fVar8 = *(float *)(param_2 + 0x54);
  }
  else {
    if ((bVar1 & 3) == 0) {
      fVar7 = *(float *)(param_2 + 0x50) * 0.5;
    }
    uVar2 = *(ushort *)(param_2 + 0x114);
    bVar4 = bVar1 >> 2 & 3;
    if ((uVar2 & 0x1000) != 0) {
      bVar4 = 0;
    }
    if (bVar4 == 2) goto LAB__text__006bded0;
LAB__text__006bde54:
    fVar8 = 0.0;
    if (bVar4 == 0) {
      fVar8 = *(float *)(param_2 + 0x54) * 0.5;
    }
  }
  fVar9 = fVar12;
  if (((bVar1 & 3) != 2) && (fVar9 = 0.0, (bVar1 & 3) == 0)) {
    fVar9 = fVar12 * 0.5;
    if ((uVar2 & 0x100) != 0) {
      fVar9 = (float)(int)(fVar12 * 0.5);
    }
  }
  if (bVar4 == 2) {
    fVar10 = fVar11;
  }
  else {
    fVar10 = 0.0;
    if (bVar4 == 0) {
      fVar10 = fVar11 * 0.5;
      if ((uVar2 & 0x100) != 0) {
        fVar10 = (float)(int)(fVar11 * 0.5);
      }
    }
  }
LAB__text__006bdde4:
  fVar5 = fVar5 + (fVar7 - fVar9);
  fVar6 = fVar6 - (fVar8 - fVar10);
  *param_1 = fVar5;
  param_1[2] = fVar12 + fVar5;
  param_1[1] = fVar6;
  param_1[3] = fVar6 - fVar11;
  return;
}


