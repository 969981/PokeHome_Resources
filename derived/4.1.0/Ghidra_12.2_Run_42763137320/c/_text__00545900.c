/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00545900; name: FUN_.text__00545900
 */


ulong FUN__text__00545900(undefined8 param_1,undefined8 *param_2,double *param_3)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  
  uVar1 = *(uint *)(param_3 + 0x70);
  if (((int)uVar1 < 1) || (uVar1 == 1)) {
    uVar4 = 0;
  }
  else {
    dVar6 = (double)param_2[5];
    dVar8 = (double)NEON_fminnm(*param_2,*param_3);
    dVar9 = (double)NEON_fminnm(param_2[1],param_3[1]);
    dVar10 = (double)NEON_fminnm(param_2[2],param_3[2]);
    uVar4 = 0;
    uVar5 = 1;
    dVar7 = (param_3[3] - *param_3) * 0.5;
    dVar12 = (param_3[4] - param_3[1]) * 0.5;
    dVar13 = (param_3[5] - param_3[2]) * 0.5;
    dVar8 = ((double)param_2[3] - dVar8) * 0.5;
    dVar9 = ((double)param_2[4] - dVar9) * 0.5;
    dVar10 = (dVar6 - dVar10) * 0.5;
    dVar7 = dVar7 * dVar7 + dVar12 * dVar12 + dVar13 * dVar13;
    param_3 = param_3 + 0xb;
    dVar8 = dVar8 * dVar8 + dVar9 * dVar9 + dVar10 * dVar10;
    dVar7 = dVar7 * 4.188790204786391 * SQRT(dVar7);
    dVar8 = dVar8 * 4.188790204786391 * SQRT(dVar8) - dVar7;
    do {
      dVar15 = *param_3;
      dVar10 = (double)NEON_fminnm(*param_2,param_3[-5]);
      dVar13 = (double)NEON_fminnm(param_2[1],param_3[-4]);
      dVar11 = (double)NEON_fminnm(param_2[2],param_3[-3]);
      dVar9 = (param_3[-2] - param_3[-5]) * 0.5;
      dVar14 = (param_3[-1] - param_3[-4]) * 0.5;
      dVar16 = (dVar15 - param_3[-3]) * 0.5;
      dVar12 = ((double)param_2[3] - dVar10) * 0.5;
      dVar13 = ((double)param_2[4] - dVar13) * 0.5;
      dVar9 = dVar9 * dVar9 + dVar14 * dVar14 + dVar16 * dVar16;
      dVar10 = dVar9 * 4.188790204786391 * SQRT(dVar9);
      dVar9 = dVar6;
      if (dVar6 <= dVar15) {
        dVar9 = dVar15;
      }
      dVar9 = (dVar9 - dVar11) * 0.5;
      dVar9 = dVar12 * dVar12 + dVar13 * dVar13 + dVar9 * dVar9;
      dVar9 = dVar9 * 4.188790204786391 * SQRT(dVar9) - dVar10;
      if (dVar9 < dVar8) {
LAB__text__005459e4:
        uVar4 = uVar5 & 0xffffffff;
        dVar7 = dVar10;
        dVar8 = dVar9;
      }
      else {
        bVar2 = false;
        bVar3 = false;
        if (dVar9 == dVar8) {
          bVar2 = false;
          bVar3 = true;
          if (!NAN(dVar10) && !NAN(dVar7)) {
            bVar2 = dVar10 < dVar7;
            bVar3 = false;
          }
        }
        if (bVar2 != bVar3) goto LAB__text__005459e4;
      }
      uVar5 = uVar5 + 1;
      param_3 = param_3 + 6;
    } while (uVar1 != uVar5);
  }
  return uVar4;
}


