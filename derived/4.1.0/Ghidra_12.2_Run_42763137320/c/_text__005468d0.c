/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005468d0; name: FUN_.text__005468d0
 */


/* WARNING: Type propagation algorithm not settling */

void FUN__text__005468d0(long param_1,long param_2)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
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
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  double local_c0 [6];
  double local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  double dStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  undefined8 uStack_8;
  
  local_c0[0] = *(double *)(param_1 + 8);
  local_c0[4] = *(double *)(param_1 + 0x10);
  local_c0[2] = *(double *)(param_1 + 0x18);
  local_60 = *(undefined8 *)(param_1 + 0x20);
  uStack_88 = *(undefined8 *)(param_1 + 0x28);
  local_c0[5] = *(double *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = 0x7f7fffff7f7fffff;
  *(undefined8 *)(param_1 + 0x40) = 0xff7fffff7f7fffff;
  local_c0[1] = local_c0[4];
  lVar1 = 0;
  local_c0[3] = local_c0[0];
  local_90 = local_c0[0];
  local_80 = local_c0[5];
  dStack_78 = local_c0[0];
  fVar3 = 3.4028235e+38;
  fVar2 = 3.4028235e+38;
  uStack_58 = local_c0[4];
  local_40 = local_c0[4];
  uStack_38 = local_c0[5];
  fVar4 = -3.4028235e+38;
  local_70 = uStack_88;
  uStack_68 = local_c0[2];
  local_50 = local_c0[2];
  uStack_48 = local_60;
  local_30 = local_60;
  uStack_28 = uStack_88;
  local_20 = local_c0[5];
  uStack_18 = local_60;
  fVar5 = -3.4028235e+38;
  fVar6 = -3.4028235e+38;
  local_10 = uStack_88;
  uStack_8 = local_c0[2];
  fVar7 = 3.4028235e+38;
  *(undefined8 *)(param_1 + 0x48) = 0xff7fffffff7fffff;
  *(long *)(param_1 + 0x50) = param_2;
  do {
    fVar11 = (float)(*(double *)((long)local_c0 + lVar1 + 8) - *(double *)(param_2 + 0x28));
    fVar9 = *(float *)(param_2 + 0x40);
    fVar18 = (float)(*(double *)((long)local_c0 + lVar1) - *(double *)(param_2 + 0x20));
    fVar10 = *(float *)(param_2 + 0x18);
    fVar16 = *(float *)(param_2 + 0x1c);
    fVar8 = (float)(*(double *)((long)local_c0 + lVar1 + 0x10) - *(double *)(param_2 + 0x30));
    fVar14 = fVar16 * fVar11 - fVar10 * fVar8;
    fVar15 = *(float *)(param_2 + 0x10);
    fVar12 = *(float *)(param_2 + 0x14);
    fVar13 = *(float *)(param_2 + 0x3c);
    fVar17 = fVar12 * fVar8 - fVar16 * fVar18;
    fVar19 = fVar10 * fVar18 - fVar12 * fVar11;
    fVar14 = fVar14 + fVar14;
    fVar17 = fVar17 + fVar17;
    fVar19 = fVar19 + fVar19;
    fVar18 = ((fVar18 - fVar10 * fVar19) + fVar15 * fVar14 + fVar16 * fVar17) /
             *(float *)(param_2 + 0x38);
    if (fVar18 < fVar7) {
      *(float *)(param_1 + 0x38) = fVar18;
      fVar13 = ((fVar11 + fVar12 * fVar19 + fVar15 * fVar17) - fVar16 * fVar14) / fVar13;
      fVar7 = fVar18;
      if (fVar13 < fVar2) goto LAB__text__00546a50;
LAB__text__005469fc:
      fVar8 = (fVar8 + fVar15 * fVar19 + fVar10 * fVar14) - fVar12 * fVar17;
    }
    else {
      fVar13 = ((fVar11 + fVar12 * fVar19 + fVar15 * fVar17) - fVar16 * fVar14) / fVar13;
      if (fVar2 <= fVar13) goto LAB__text__005469fc;
LAB__text__00546a50:
      *(float *)(param_1 + 0x3c) = fVar13;
      fVar8 = (fVar8 + fVar15 * fVar19 + fVar10 * fVar14) - fVar12 * fVar17;
      fVar2 = fVar13;
    }
    fVar8 = fVar8 / fVar9;
    if (fVar8 < fVar3) {
      *(float *)(param_1 + 0x40) = fVar8;
      fVar3 = fVar8;
    }
    if (fVar6 < fVar18) {
      *(float *)(param_1 + 0x44) = fVar18;
      fVar6 = fVar18;
    }
    if (fVar5 < fVar13) {
      *(float *)(param_1 + 0x48) = fVar13;
      fVar5 = fVar13;
    }
    if (fVar4 < fVar8) {
      *(float *)(param_1 + 0x4c) = fVar8;
      fVar4 = fVar8;
    }
    lVar1 = lVar1 + 0x18;
    if (lVar1 == 0xc0) {
      return;
    }
  } while( true );
}


