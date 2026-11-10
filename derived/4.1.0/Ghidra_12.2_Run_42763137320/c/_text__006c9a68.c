/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006c9a68; name: FUN_.text__006c9a68
 */


void FUN__text__006c9a68(long param_1,long param_2,undefined8 param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  byte bVar5;
  bool bVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  int local_50;
  int iStack_4c;
  int local_48;
  int iStack_44;
  undefined8 local_40;
  undefined8 uStack_38;
  
  if (((*(byte *)(param_1 + 0x58) & 1) == 0) || (*(char *)(param_1 + 0x5a) == '\0')) {
    FUN__text__006b4130(param_1,param_2,param_3);
    return;
  }
  iVar2 = *(int *)(param_2 + 0xe0);
  iVar3 = *(int *)(param_2 + 0xe4);
  fVar10 = *(float *)(param_2 + 0x108);
  fVar8 = *(float *)(param_2 + 0x10c);
  fVar11 = *(float *)(param_2 + 0x100);
  fVar9 = *(float *)(param_2 + 0x104);
  fVar12 = fVar10;
  if (iVar3 != 0 || iVar2 != 0) {
    fVar12 = (float)iVar2;
  }
  bVar4 = *(byte *)(param_2 + 0x194);
  fVar13 = fVar8;
  if (iVar3 != 0 || iVar2 != 0) {
    fVar13 = (float)iVar3;
  }
  fVar15 = (float)((ulong)*(undefined8 *)(param_1 + 0x78) >> 0x20);
  fVar14 = (float)((ulong)*(undefined8 *)(param_1 + 0x88) >> 0x20);
  if ((bVar4 >> 4 & 1) == 0) {
    fVar17 = 1.0;
    if (((char)bVar4 < '\0') && (lVar7 = *(long *)(param_2 + 0xc0), lVar7 != 0)) {
      fVar17 = *(float *)(lVar7 + 0x28) / fVar12;
      fVar14 = fVar14 / (*(float *)(lVar7 + 0x2c) / fVar13);
      fVar15 = fVar15 / fVar17;
    }
  }
  else {
    fVar15 = fVar15 - *(float *)(param_2 + 0x188);
    fVar14 = fVar14 - *(float *)(param_2 + 0x18c);
    fVar17 = 1.0;
  }
  bVar1 = *(byte *)(param_1 + 0x5b) & 3;
  bVar5 = *(byte *)(param_1 + 0x5b) >> 2 & 3;
  fVar16 = ((*(float *)(param_1 + 0x54) * (float)((ulong)*(undefined8 *)(param_1 + 0x80) >> 0x20)) /
           fVar17) * 0.5;
  fVar19 = ((*(float *)(param_1 + 0x50) * (float)*(undefined8 *)(param_1 + 0x70)) / fVar17) * 0.5;
  fVar20 = ABS(fVar16) + ABS(fVar16);
  fVar18 = ABS(fVar19) + ABS(fVar19);
  fVar17 = fVar15;
  if (bVar1 == 1) {
    fVar17 = fVar15 + fVar19;
  }
  fVar15 = fVar15 - fVar19;
  if (bVar1 != 2) {
    fVar15 = fVar17;
  }
  fVar17 = fVar14;
  if (bVar5 == 1) {
    fVar17 = fVar14 - fVar16;
  }
  fVar14 = fVar14 + fVar16;
  if (bVar5 != 2) {
    fVar14 = fVar17;
  }
  if ((bVar4 & 0x18) != 0) {
    fVar14 = -fVar14;
  }
  fVar17 = fVar9 + (fVar8 / fVar13) * ((fVar14 - fVar20 * 0.5) + fVar13 * 0.5);
  fVar14 = fVar11 + (fVar10 / fVar12) * ((fVar15 - fVar18 * 0.5) + fVar12 * 0.5);
  fVar16 = fVar10 + fVar11;
  fVar15 = fVar11;
  if (fVar11 <= fVar14) {
    fVar15 = fVar14;
  }
  fVar19 = fVar11 - fVar14;
  if (fVar11 <= fVar14) {
    fVar19 = 0.0;
  }
  fVar19 = (fVar10 / fVar12) * fVar18 - fVar19;
  fVar12 = fVar16 - fVar15;
  if (fVar15 + fVar19 <= fVar16) {
    fVar12 = fVar19;
  }
  fVar11 = fVar9 - fVar17;
  fVar10 = fVar9;
  if (fVar9 <= fVar17) {
    fVar10 = fVar17;
  }
  fVar14 = fVar8 + fVar9;
  if (fVar9 <= fVar17) {
    fVar11 = 0.0;
  }
  fVar11 = (fVar8 / fVar13) * fVar20 - fVar11;
  fVar8 = fVar14 - fVar10;
  if (fVar10 + fVar11 <= fVar14) {
    fVar8 = fVar11;
  }
  bVar6 = false;
  if ((fVar10 < fVar14) && (bVar6 = false, !NAN(fVar15) && !NAN(fVar16))) {
    bVar6 = fVar15 < fVar16;
  }
  if (((bVar6) && (0.0 < fVar12)) && (0.0 < fVar8)) {
    local_70 = *(undefined8 *)(param_2 + 0x130);
    uStack_68 = *(undefined8 *)(param_2 + 0x138);
    local_40 = 0;
    uStack_38 = 0;
    local_50 = (int)(fVar15 + 0.5);
    iStack_4c = (int)(fVar10 + 0.5);
    local_48 = (int)(fVar15 + fVar12 + 0.5) - local_50;
    iStack_44 = (int)(fVar10 + fVar8 + 0.5) - iStack_4c;
    local_60 = *(undefined8 *)(param_2 + 0x140);
    uStack_58 = *(undefined8 *)(param_2 + 0x148);
    FUN__text__006ee050(param_3,0,1,&local_50);
    *(ulong *)(param_2 + 0x130) = CONCAT44(iStack_4c,local_50);
    *(ulong *)(param_2 + 0x138) = CONCAT44(iStack_44,local_48);
    *(undefined8 *)(param_2 + 0x140) = local_40;
    *(undefined8 *)(param_2 + 0x148) = uStack_38;
    FUN__text__006b4130(param_1,param_2,param_3);
    FUN__text__006ee050(param_3,0,1,&local_70);
    *(undefined8 *)(param_2 + 0x130) = local_70;
    *(undefined8 *)(param_2 + 0x138) = uStack_68;
    *(undefined8 *)(param_2 + 0x140) = local_60;
    *(undefined8 *)(param_2 + 0x148) = uStack_58;
  }
  return;
}


