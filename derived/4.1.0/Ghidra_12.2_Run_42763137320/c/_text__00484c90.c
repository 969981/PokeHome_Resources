/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00484c90; name: FUN_.text__00484c90
 */


void FUN__text__00484c90(uint param_1,long param_2,float *param_3)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar4;
  float *pfVar3;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float afStack_210 [128];
  
  pfVar2 = afStack_210 + (ulong)param_1 * -4 + 0x80;
  pfVar1 = pfVar2 + (param_1 << 2);
  pfVar3 = pfVar2;
  do {
    pfVar4 = pfVar3 + 4;
    pfVar3[0] = 0.0;
    pfVar3[1] = 0.0;
    pfVar3[2] = 1.0;
    pfVar3[3] = 1.0;
    pfVar3 = pfVar4;
  } while (pfVar4 < pfVar1);
  fVar8 = *(float *)(param_2 + 0x18);
  fVar10 = *(float *)(param_2 + 0x1c);
  fVar5 = 0.0;
  fVar11 = *(float *)(param_2 + 0x20);
  fVar6 = fVar8 * fVar8 + fVar10 * fVar10 + fVar11 * fVar11;
  if (fVar6 <= 0.0) {
LAB__text__00484d64:
    fVar8 = 1.0;
    fVar6 = 1.0;
  }
  else {
    fVar6 = 1.0 / SQRT(fVar6);
    fVar8 = fVar6 * fVar8;
    fVar10 = -(fVar10 * fVar6);
    fVar6 = fVar6 * fVar11;
    fVar11 = fVar8 * fVar8 + fVar10 * fVar10;
    if (1.1920929e-07 < fVar11) {
      fVar11 = SQRT(fVar11);
      fVar13 = 1.0 - fVar6;
      fVar10 = (1.0 / fVar11) * fVar10;
      fVar8 = (1.0 / fVar11) * fVar8;
      fVar12 = fVar8 * fVar11;
      fVar7 = fVar6 + fVar13 * fVar10 * fVar10;
      fVar9 = fVar10 * fVar13 * fVar8;
      fVar5 = -(fVar8 * fVar11);
      fVar8 = fVar6 + fVar13 * fVar8 * fVar8;
      fVar13 = fVar10 * fVar11;
      fVar10 = -(fVar10 * fVar11);
      goto joined_r0x00484d7c;
    }
    if (0.0 <= fVar6) goto LAB__text__00484d64;
    fVar8 = -1.0;
    fVar6 = -1.0;
  }
  fVar10 = 0.0;
  fVar12 = 0.0;
  fVar13 = 0.0;
  fVar9 = 0.0;
  fVar7 = 1.0;
joined_r0x00484d7c:
  if (param_1 != 0) {
    do {
      fVar11 = *pfVar2;
      fVar14 = pfVar2[1];
      fVar15 = pfVar2[2];
      pfVar2 = pfVar2 + 4;
      *param_3 = fVar11 * fVar7 + fVar9 * fVar14 + fVar12 * fVar15;
      param_3[1] = fVar11 * fVar9 + fVar8 * fVar14 + fVar10 * fVar15;
      param_3[2] = fVar11 * fVar5 + fVar13 * fVar14 + fVar6 * fVar15;
      param_3 = param_3 + 4;
    } while (pfVar2 < pfVar1);
  }
  return;
}


