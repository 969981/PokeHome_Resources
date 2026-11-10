/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0054f36c; name: FUN_.text__0054f36c
 */


void FUN__text__0054f36c(float param_1,long param_2,uint param_3,int *param_4,long param_5)

{
  int iVar1;
  int iVar2;
  double dVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  double dVar9;
  
  fVar8 = (float)param_4[2];
  fVar6 = 1.0;
  if (fVar8 == 0.0) {
    fVar7 = (float)param_4[1];
    fVar5 = 1.0;
    fVar8 = 0.0;
    fVar4 = (float)param_3;
    if (fVar7 < fVar4) {
LAB__text__0054f3c4:
      fVar6 = fVar7 / fVar4;
    }
  }
  else {
    dVar9 = (double)param_3;
    fVar7 = (float)param_4[1];
    dVar3 = (double)NEON_fminnm((double)fVar7,dVar9);
    dVar3 = log((dVar9 * 0.5) / dVar3);
    dVar3 = exp(-((double)fVar8 * dVar3));
    dVar3 = cos((dVar9 * 3.141592653589793 * dVar3) / dVar9);
    dVar3 = 2.0 - dVar3;
    fVar8 = (float)(SQRT(dVar3 * dVar3 + -1.0) - dVar3);
    fVar5 = fVar8 + 1.0;
    fVar4 = (float)param_3;
    if (fVar7 < fVar4) goto LAB__text__0054f3c4;
  }
  *(float *)(param_2 + 0x10) = fVar6;
  if (*param_4 == 0) {
    *(float *)(param_2 + 0x10) = fVar6 * 6.2831855;
    *(float *)(param_2 + 4) = fVar5;
    *(float *)(param_2 + 8) = fVar8;
    iVar2 = *(int *)(param_2 + 0x14);
    iVar1 = *param_4;
    if (iVar2 != iVar1) goto LAB__text__0054f494;
  }
  else {
    *(float *)(param_2 + 4) = fVar5;
    *(float *)(param_2 + 8) = fVar8;
    iVar2 = *(int *)(param_2 + 0x14);
    iVar1 = *param_4;
    if (iVar2 != iVar1) {
LAB__text__0054f494:
      if (iVar2 == 0) {
        fVar6 = 0.15915494;
      }
      else {
        iVar2 = iVar1;
        if (iVar1 != 0) goto LAB__text__0054f4c8;
        fVar6 = 6.2831855;
      }
      *(float *)(param_2 + 0xc) = *(float *)(param_2 + 0xc) * fVar6;
      iVar2 = *param_4;
    }
  }
LAB__text__0054f4c8:
  *(int *)(param_2 + 0x14) = iVar2;
  fVar8 = 1.0;
  fVar6 = 6.2831855;
  if (*param_4 != 0) {
    fVar6 = 1.0;
  }
  fVar5 = param_1 * 0.0027777778 * fVar6;
  if (iVar2 == 1) {
    fVar4 = 0.25;
LAB__text__0054f524:
    *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_2 + 0x18);
    fVar7 = fVar6;
    if (0.0 <= fVar5 + fVar4) {
      fVar7 = -0.0;
    }
    fVar7 = fVar7 + fVar5 + fVar4;
    fVar5 = 0.0;
    if (fVar6 <= fVar7) {
      fVar5 = fVar6;
    }
    fVar7 = fVar7 - fVar5;
  }
  else {
    if (iVar2 == 5) {
      fVar8 = fVar6;
      if (0.0 <= fVar5) {
        fVar8 = -0.0;
      }
      *(long *)(param_2 + 0x18) = param_5 * 0x5851f42d4c957f2d + 1;
      fVar4 = 0.0;
      if (fVar6 <= fVar8 + fVar5) {
        fVar4 = fVar6;
      }
      fVar4 = (fVar8 + fVar5) - fVar4;
      goto LAB__text__0054f5c8;
    }
    if (iVar2 == 3) {
      fVar4 = 0.5;
      goto LAB__text__0054f524;
    }
    *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_2 + 0x18);
    fVar4 = fVar6;
    if (0.0 <= fVar5) {
      fVar4 = -0.0;
    }
    fVar7 = 0.0;
    if (fVar6 <= fVar4 + fVar5) {
      fVar7 = fVar6;
    }
    fVar7 = (fVar4 + fVar5) - fVar7;
    if (iVar2 == 0) {
      fVar8 = 6.2831855;
    }
  }
  fVar4 = fmodf(fVar7,fVar8);
LAB__text__0054f5c8:
  *(float *)(param_2 + 0xc) = fVar4;
  return;
}


