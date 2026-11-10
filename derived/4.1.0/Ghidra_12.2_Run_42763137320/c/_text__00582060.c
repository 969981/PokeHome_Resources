/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00582060; name: FUN_.text__00582060
 */


void FUN__text__00582060(float param_1,float param_2,float *param_3,float *param_4,uint param_5)

{
  float *pfVar1;
  uint uVar2;
  float *pfVar3;
  float *pfVar4;
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
  float fVar20;
  float fVar21;
  
  fVar5 = *param_3;
  fVar9 = param_3[1];
  pfVar1 = param_4 + param_5;
  fVar6 = fVar5 + fVar9;
  fVar6 = (float)((uint)fVar6 ^
                 ((uint)fVar6 ^ (uint)(fVar6 + -6.2831855)) & ~-(uint)(fVar6 < 3.1415925));
  fVar7 = fVar6 + fVar9;
  fVar7 = (float)((uint)fVar7 ^
                 ((uint)fVar7 ^ (uint)(fVar7 + -6.2831855)) & ~-(uint)(fVar7 < 3.1415925));
  fVar8 = fVar7 + fVar9;
  fVar8 = (float)((uint)(fVar8 + -6.2831855) ^
                 ((uint)(fVar8 + -6.2831855) ^ (uint)fVar8) & -(uint)(fVar8 < 3.1415925));
  fVar9 = fVar9 * 4.0;
  if (6.2831855 <= fVar9) {
    fVar9 = fVar9 + -6.2831855;
  }
  if (param_5 == 0) {
    *param_3 = fVar5;
    if (param_2 != param_1) goto LAB__text__00582258;
    if (param_1 == 1.0) {
      return;
    }
  }
  else {
    pfVar4 = param_4;
    do {
      fVar10 = fVar5 * fVar5;
      fVar11 = fVar6 * fVar6;
      fVar12 = fVar7 * fVar7;
      fVar13 = fVar8 * fVar8;
      fVar18 = fVar5 + fVar9;
      fVar19 = fVar6 + fVar9;
      fVar20 = fVar7 + fVar9;
      fVar21 = fVar8 + fVar9;
      fVar14 = fVar10 * fVar5 * fVar10;
      fVar15 = fVar11 * fVar6 * fVar11;
      fVar16 = fVar12 * fVar7 * fVar12;
      fVar17 = fVar13 * fVar8 * fVar13;
      pfVar3 = pfVar4 + 4;
      pfVar4[2] = fVar7 + fVar12 * fVar7 * -0.16652186 + fVar16 * 0.008199913 +
                  fVar16 * fVar12 * -0.00016147594;
      pfVar4[3] = fVar8 + fVar13 * fVar8 * -0.16652186 + fVar17 * 0.008199913 +
                  fVar17 * fVar13 * -0.00016147594;
      *pfVar4 = fVar5 + fVar10 * fVar5 * -0.16652186 + fVar14 * 0.008199913 +
                fVar14 * fVar10 * -0.00016147594;
      pfVar4[1] = fVar6 + fVar11 * fVar6 * -0.16652186 + fVar15 * 0.008199913 +
                  fVar15 * fVar11 * -0.00016147594;
      fVar5 = (float)((uint)fVar18 ^
                     ((uint)fVar18 ^ (uint)(fVar18 + -6.2831855)) & -(uint)(3.1415925 <= fVar18));
      fVar6 = (float)((uint)fVar19 ^
                     ((uint)fVar19 ^ (uint)(fVar19 + -6.2831855)) & -(uint)(3.1415925 <= fVar19));
      fVar7 = (float)((uint)fVar20 ^
                     ((uint)fVar20 ^ (uint)(fVar20 + -6.2831855)) & -(uint)(3.1415925 <= fVar20));
      fVar8 = (float)((uint)fVar21 ^
                     ((uint)fVar21 ^ (uint)(fVar21 + -6.2831855)) & -(uint)(3.1415925 <= fVar21));
      pfVar4 = pfVar3;
    } while (pfVar3 < pfVar1);
    *param_3 = fVar5;
    if (param_2 != param_1) {
      if ((3 < param_5) && (uVar2 = param_5 & 0xfffffffc, uVar2 != 0)) {
        pfVar4 = param_4 + uVar2;
        fVar8 = (param_2 - param_1) / (float)uVar2;
        fVar6 = fVar8 + param_1;
        fVar5 = fVar8 * 4.0;
        fVar7 = fVar6 + fVar8;
        fVar8 = fVar7 + fVar8;
        pfVar3 = param_4;
        fVar9 = param_1;
        do {
          fVar10 = (float)*(undefined8 *)pfVar3 * fVar9;
          fVar11 = (float)((ulong)*(undefined8 *)pfVar3 >> 0x20) * fVar6;
          fVar12 = (float)*(undefined8 *)(pfVar3 + 2) * fVar7;
          fVar13 = (float)((ulong)*(undefined8 *)(pfVar3 + 2) >> 0x20) * fVar8;
          fVar9 = fVar9 + fVar5;
          fVar6 = fVar6 + fVar5;
          fVar7 = fVar7 + fVar5;
          fVar8 = fVar8 + fVar5;
          param_4 = pfVar3 + 4;
          *(ulong *)(pfVar3 + 2) = CONCAT44(fVar13,fVar12);
          *(ulong *)pfVar3 = CONCAT44(fVar11,fVar10);
          pfVar3 = param_4;
        } while (param_4 < pfVar4);
      }
LAB__text__00582258:
      if (pfVar1 <= param_4) {
        return;
      }
      param_2 = param_2 - param_1;
      do {
        fVar9 = *param_4 * param_1;
        param_1 = param_1 + param_2 / (float)param_5;
        pfVar4 = param_4 + 1;
        *param_4 = fVar9;
        param_4 = pfVar4;
      } while (pfVar4 < pfVar1);
      return;
    }
    if (param_1 == 1.0) {
      return;
    }
    if ((3 < param_5) && ((param_5 & 0xfffffffc) != 0)) {
      pfVar4 = param_4 + (param_5 & 0xfffffffc);
      pfVar3 = param_4;
      do {
        param_4 = pfVar3 + 4;
        *(ulong *)(pfVar3 + 2) =
             CONCAT44((float)((ulong)*(undefined8 *)(pfVar3 + 2) >> 0x20) * param_1,
                      (float)*(undefined8 *)(pfVar3 + 2) * param_1);
        *(ulong *)pfVar3 =
             CONCAT44((float)((ulong)*(undefined8 *)pfVar3 >> 0x20) * param_1,
                      (float)*(undefined8 *)pfVar3 * param_1);
        pfVar3 = param_4;
      } while (param_4 < pfVar4);
    }
  }
  for (; param_4 < pfVar1; param_4 = param_4 + 1) {
    *param_4 = *param_4 * param_1;
  }
  return;
}


