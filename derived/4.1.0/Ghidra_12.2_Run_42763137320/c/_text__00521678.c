/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00521678; name: FUN_.text__00521678
 */


undefined8
FUN__text__00521678(double *param_1,double *param_2,long *param_3,long *param_4,float *param_5,
                   float *param_6)

{
  bool bVar1;
  long lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  float fVar6;
  float fVar7;
  double dVar8;
  double dVar9;
  float fVar10;
  float fVar11;
  double dVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  if (1 < *(uint *)(param_1 + 0xc)) {
    dVar4 = *param_2;
    dVar5 = param_2[1];
    fVar15 = *(float *)((long)param_1 + 0x3c);
    dVar3 = param_2[2];
    fVar14 = (float)(dVar5 - param_1[1]);
    fVar13 = (float)(dVar4 - *param_1);
    fVar7 = (float)(dVar3 - param_1[2]);
    fVar11 = *(float *)(param_1 + 3) * fVar13 + fVar14 * *(float *)((long)param_1 + 0x1c) +
             fVar7 * *(float *)(param_1 + 4);
    fVar10 = *(float *)((long)param_1 + 0x44);
    fVar6 = fVar10 + fVar10;
    if (ABS(fVar11) <= fVar6 + fVar15) {
      fVar17 = *(float *)((long)param_1 + 0x24) * fVar13 + fVar14 * *(float *)(param_1 + 5) +
               fVar7 * *(float *)((long)param_1 + 0x2c);
      fVar18 = *(float *)(param_1 + 8);
      if (ABS(fVar17) <= fVar18 + fVar6) {
        fVar13 = *(float *)(param_1 + 6) * fVar13 + fVar14 * *(float *)((long)param_1 + 0x34) +
                 fVar7 * *(float *)(param_1 + 7);
        fVar7 = ABS(fVar13);
        if (fVar7 <= fVar10) {
          fVar16 = (float)NEON_fminnm(fVar11,fVar15);
          dVar8 = param_1[0xb3];
          fVar14 = -fVar15;
          if (-fVar15 <= fVar11) {
            fVar14 = fVar16;
          }
          fVar16 = (float)NEON_fminnm(fVar17,fVar18);
          fVar15 = -fVar18;
          if (-fVar18 <= fVar17) {
            fVar15 = fVar16;
          }
          bVar1 = false;
          if ((fVar14 == fVar11) && (bVar1 = false, !NAN(fVar15) && !NAN(fVar17))) {
            bVar1 = fVar15 == fVar17;
          }
          if (bVar1) {
            dVar12 = param_1[0xb4];
            dVar9 = param_1[0xb5];
            fVar6 = (fVar13 + fVar10) / fVar6;
            fVar11 = *(float *)((long)param_1 + 0x5cc);
            fVar13 = *(float *)(param_1 + 0xb9);
            fVar10 = *(float *)(param_1 + 0xba);
            *param_6 = fVar7;
            if (0.0 < fVar13 * (float)(dVar4 - dVar8) + (float)(dVar5 - dVar12) * fVar11 +
                      (float)(dVar3 - dVar9) * fVar10) {
              *param_3 = *(long *)param_1[0xb];
              *param_4 = *(long *)((long)param_1[0xb] + 8);
              *param_5 = (fVar6 * 0.5 - 0.5) / (1.0 - *(float *)(param_1 + 0xb2)) + 1.0;
              return 1;
            }
            *param_3 = ((long *)param_1[0xb])[1];
            *param_4 = *(long *)param_1[0xb];
            *param_5 = (fVar6 * -0.5) / *(float *)(param_1 + 0xb2) + 1.0;
            return 1;
          }
          lVar2 = *(long *)param_1[0xb];
          dVar4 = dVar4 - (dVar8 + (double)(*(float *)(param_1 + 0xb6) * fVar14) +
                          (double)(*(float *)((long)param_1 + 0x5bc) * fVar15));
          dVar5 = dVar5 - (param_1[0xb4] + (double)(*(float *)((long)param_1 + 0x5b4) * fVar14) +
                          (double)(*(float *)(param_1 + 0xb8) * fVar15));
          dVar3 = dVar3 - (param_1[0xb5] + (double)(*(float *)(param_1 + 0xb7) * fVar14) +
                          (double)(*(float *)((long)param_1 + 0x5c4) * fVar15));
          fVar7 = 1.0 - *(float *)(param_1 + 0xb2);
          if (lVar2 != *param_3) {
            fVar7 = *(float *)(param_1 + 0xb2);
          }
          fVar10 = (float)SQRT(dVar4 * dVar4 + dVar5 * dVar5 + dVar3 * dVar3);
          if (fVar10 < fVar7 * fVar6) {
            *param_4 = ((long *)param_1[0xb])[lVar2 == *param_3];
            *param_6 = fVar10;
            *param_5 = (fVar10 * 0.5) / (fVar7 * fVar6) + 0.5;
            return 1;
          }
        }
      }
    }
  }
  return 0;
}


