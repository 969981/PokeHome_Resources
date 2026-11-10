/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0041a060; name: FUN_.text__0041a060
 */


void FUN__text__0041a060(float param_1,long *param_2,uint *param_3,float *param_4)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  float *pfVar7;
  float *pfVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  uVar6 = *param_3;
  pfVar8 = (float *)(*param_2 + (ulong)uVar6 * 0xc);
  pfVar7 = pfVar8 + 3;
  if ((param_1 < *pfVar8) || (*pfVar7 <= param_1)) {
    if (*pfVar8 <= param_1) {
      if (*pfVar7 <= param_1) {
        if ((uVar6 + 1 < *(uint *)(param_2 + 1)) && (*pfVar7 <= param_1)) {
          pfVar8 = (float *)(*param_2 + (ulong)uVar6 * 0xc + 0x18);
          uVar1 = uVar6 + 1;
          do {
            uVar6 = uVar1;
            pfVar7 = pfVar8;
            *param_3 = uVar6;
            if (*(uint *)(param_2 + 1) <= uVar6 + 1) break;
            pfVar8 = pfVar7 + 3;
            uVar1 = uVar6 + 1;
          } while (*pfVar7 <= param_1);
        }
        pfVar8 = pfVar7 + -3;
      }
    }
    else {
      for (; (uVar6 != 0 && (param_1 < *pfVar8)); pfVar8 = pfVar8 + -3) {
        uVar6 = uVar6 - 1;
        *param_3 = uVar6;
      }
      pfVar7 = pfVar8 + 3;
    }
  }
  if (pfVar8[2] == 1.26117e-44) {
    fVar12 = pfVar8[1];
    *param_4 = fVar12;
    iVar5 = *(int *)((long)param_2 + 0xc);
joined_r0x0041a280:
    if (iVar5 == 4) goto LAB__text__0041a284;
LAB__text__0041a1a8:
    if (iVar5 != 3) {
      if (iVar5 == 2) {
        fVar13 = (float)NEON_fminnm(fVar12,0x3f800000);
        fVar11 = 1.0;
        if (0.0 <= fVar12) {
          fVar11 = -1.0;
        }
        if (fVar13 <= -1.0) {
          fVar13 = -1.0;
        }
        fVar13 = fVar11 * fVar13 + 1.0;
        fVar12 = (float)((uint)fVar13 & 0x7fffff | 0x3f800000);
        fVar10 = fVar12 + 1.0;
        *param_4 = fVar11 * 20.0 *
                   ((float)((uint)fVar13 >> 0x17 & 0xff) * 0.30103 + -38.230812 +
                   (fVar12 * 1.1581186 * fVar12 * fVar12 + -1.1581186) / (fVar10 * fVar10 * fVar10))
        ;
      }
      return;
    }
    fVar11 = 0.0;
    if ((fVar12 < -37.0) || (37.0 < fVar12)) goto LAB__text__0041a344;
    fVar11 = 27866352.0;
  }
  else {
    lVar9 = *param_2 + (ulong)*(uint *)(param_2 + 1) * 0xc;
    fVar12 = *(float *)(lVar9 + (ulong)uVar6 * 8);
    if (pfVar8[2] != 5.60519e-45) {
      fVar12 = (float)FUN__text__0041a360(fVar12 * (param_1 - *pfVar8),pfVar8[1],pfVar7[1],
                                          *(undefined4 *)(lVar9 + (ulong)uVar6 * 8 + 4));
      *param_4 = fVar12;
      iVar5 = *(int *)((long)param_2 + 0xc);
      goto joined_r0x0041a280;
    }
    fVar12 = pfVar8[1] + (param_1 - *pfVar8) * fVar12;
    *param_4 = fVar12;
    iVar5 = *(int *)((long)param_2 + 0xc);
    if (iVar5 != 4) goto LAB__text__0041a1a8;
LAB__text__0041a284:
    fVar13 = fVar12 * 0.05;
    fVar11 = 0.0;
    bVar2 = false;
    bVar3 = false;
    bVar4 = false;
    if (-37.0 <= fVar13) {
      bVar2 = false;
      bVar3 = false;
      bVar4 = true;
      if (!NAN(fVar13)) {
        bVar2 = fVar13 < 37.0;
        bVar3 = fVar13 == 37.0;
        bVar4 = false;
      }
    }
    if (!bVar3 && bVar2 == bVar4) goto LAB__text__0041a344;
    fVar11 = 1393317.6;
  }
  uVar6 = (uint)(fVar11 * fVar12 + 1.0653532e+09);
  fVar12 = (float)(uVar6 & 0x7fffff | 0x3f800000);
  fVar11 = (fVar12 * (fVar12 * 0.32518977 + 0.020805772) + 0.65304345) * (float)(uVar6 & 0xff800000)
  ;
LAB__text__0041a344:
  *param_4 = fVar11;
  return;
}


