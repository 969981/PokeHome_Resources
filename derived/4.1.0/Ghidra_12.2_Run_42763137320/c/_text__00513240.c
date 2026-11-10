/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00513240; name: FUN_.text__00513240
 */


ulong FUN__text__00513240(undefined8 param_1,undefined4 *param_2,float *param_3)

{
  float fVar1;
  bool bVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
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
  
  fVar1 = param_3[0x80];
  if (((int)fVar1 < 1) || (fVar1 == 1.4013e-45)) {
    uVar4 = 0;
  }
  else {
    fVar6 = (float)param_2[5];
    uVar4 = 0;
    uVar5 = 1;
    fVar8 = (float)NEON_fminnm(*param_2,*param_3);
    fVar9 = (float)NEON_fminnm(param_2[1],param_3[1]);
    fVar10 = (float)NEON_fminnm(param_2[2],param_3[2]);
    fVar7 = (param_3[3] - *param_3) * 0.5;
    fVar12 = (param_3[4] - param_3[1]) * 0.5;
    fVar13 = (param_3[5] - param_3[2]) * 0.5;
    fVar8 = ((float)param_2[3] - fVar8) * 0.5;
    fVar9 = ((float)param_2[4] - fVar9) * 0.5;
    fVar10 = (fVar6 - fVar10) * 0.5;
    fVar7 = fVar7 * fVar7 + fVar12 * fVar12 + fVar13 * fVar13;
    param_3 = param_3 + 0xb;
    fVar8 = fVar8 * fVar8 + fVar9 * fVar9 + fVar10 * fVar10;
    fVar7 = fVar7 * 4.1887903 * SQRT(fVar7);
    fVar8 = fVar8 * 4.1887903 * SQRT(fVar8) - fVar7;
    do {
      fVar15 = *param_3;
      fVar10 = (float)NEON_fminnm(*param_2,param_3[-5]);
      fVar13 = (float)NEON_fminnm(param_2[1],param_3[-4]);
      fVar11 = (float)NEON_fminnm(param_2[2],param_3[-3]);
      fVar9 = (param_3[-2] - param_3[-5]) * 0.5;
      fVar14 = (param_3[-1] - param_3[-4]) * 0.5;
      fVar16 = (fVar15 - param_3[-3]) * 0.5;
      fVar12 = ((float)param_2[3] - fVar10) * 0.5;
      fVar13 = ((float)param_2[4] - fVar13) * 0.5;
      fVar9 = fVar9 * fVar9 + fVar14 * fVar14 + fVar16 * fVar16;
      fVar10 = fVar9 * 4.1887903 * SQRT(fVar9);
      fVar9 = fVar6;
      if (fVar6 <= fVar15) {
        fVar9 = fVar15;
      }
      fVar9 = (fVar9 - fVar11) * 0.5;
      fVar9 = fVar12 * fVar12 + fVar13 * fVar13 + fVar9 * fVar9;
      fVar9 = fVar9 * 4.1887903 * SQRT(fVar9) - fVar10;
      if (fVar9 < fVar8) {
LAB__text__00513314:
        uVar4 = uVar5 & 0xffffffff;
        fVar7 = fVar10;
        fVar8 = fVar9;
      }
      else {
        bVar2 = false;
        bVar3 = false;
        if (fVar9 == fVar8) {
          bVar2 = false;
          bVar3 = true;
          if (!NAN(fVar10) && !NAN(fVar7)) {
            bVar2 = fVar10 < fVar7;
            bVar3 = false;
          }
        }
        if (bVar2 != bVar3) goto LAB__text__00513314;
      }
      uVar5 = uVar5 + 1;
      param_3 = param_3 + 6;
    } while ((uint)fVar1 != uVar5);
  }
  return uVar4;
}


