/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004d70f0; name: FUN_.text__004d70f0
 */


void FUN__text__004d70f0(float param_1,long *param_2,long *param_3)

{
  undefined1 (*pauVar1) [16];
  byte bVar2;
  ushort uVar3;
  undefined1 auVar4 [16];
  float *pfVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  undefined1 (*pauVar10) [16];
  undefined1 (*pauVar9) [16];
  float *pfVar12;
  float *pfVar11;
  long lVar13;
  long lVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auVar20 [16];
  float fVar21;
  undefined1 auVar22 [16];
  undefined4 uVar23;
  float fVar24;
  
  bVar2 = *(byte *)(param_3 + 9);
  fVar15 = 0.0;
  if (*(short *)((long)param_2 + 0x12) != 0) {
    fVar15 = param_1;
  }
  if ((bVar2 & 1) != 0) {
    uVar7 = (uint)*(byte *)(param_2 + 1);
    if (fVar15 <= 0.0) {
      if (uVar7 != 0) {
        memset((void *)*param_3,0,(ulong)*(byte *)(param_2 + 1) << 2);
      }
    }
    else {
      uVar6 = 0;
      if (uVar7 < 2) {
        uVar7 = 1;
      }
      do {
        auVar20._8_8_ = 0xcf000000cf000000;
        auVar20._0_8_ = 0xcf000000cf000000;
        auVar22._8_8_ = 0x4f0000004f000000;
        auVar22._0_8_ = 0x4f0000004f000000;
        pauVar1 = (undefined1 (*) [16])(*param_2 + uVar6 * *(ushort *)(param_2 + 2) * 4);
        pauVar9 = pauVar1;
        do {
          pauVar10 = pauVar9 + 1;
          auVar22 = NEON_fmin(auVar22,*pauVar9,4);
          auVar20 = NEON_fmax(auVar20,*pauVar9,4);
          pauVar9 = pauVar10;
        } while (pauVar10 <
                 (undefined1 (*) [16])(*pauVar1 + ((ulong)*(ushort *)(param_2 + 2) & 0xfffc) * 4));
        uVar23 = NEON_fminnm(auVar22._0_4_,auVar22._4_4_);
        uVar23 = NEON_fminnm(uVar23,auVar22._8_4_);
        fVar21 = (float)NEON_fminnm(uVar23,auVar22._12_4_);
        *(float *)(*param_3 + uVar6 * 4) = fVar15 * 1.0009619 * ABS(fVar21);
        uVar6 = uVar6 + 1;
      } while (uVar6 != uVar7);
    }
  }
  if ((bVar2 >> 2 & 1) != 0) {
    uVar7 = (uint)*(byte *)(param_2 + 1);
    if (fVar15 <= 0.0) {
      if (uVar7 != 0) {
        memset((void *)param_3[2],0,(ulong)*(byte *)(param_2 + 1) << 2);
      }
    }
    else {
      uVar6 = 0;
      if (uVar7 < 2) {
        uVar7 = 1;
      }
      do {
        uVar3 = *(ushort *)(param_2 + 2);
        fVar17 = 0.0;
        fVar18 = 0.0;
        fVar21 = 0.0;
        fVar16 = 0.0;
        pfVar5 = (float *)(*param_2 + uVar6 * uVar3 * 4);
        pfVar11 = pfVar5;
        do {
          pfVar12 = pfVar11 + 4;
          fVar21 = fVar21 + *pfVar11 * *pfVar11;
          fVar16 = fVar16 + pfVar11[1] * pfVar11[1];
          fVar17 = fVar17 + pfVar11[2] * pfVar11[2];
          fVar18 = fVar18 + pfVar11[3] * pfVar11[3];
          pfVar11 = pfVar12;
        } while (pfVar12 < pfVar5 + (ulong)(uVar3 >> 2) * 4);
        auVar4._4_4_ = fVar16;
        auVar4._0_4_ = fVar21;
        auVar4._8_4_ = fVar17;
        auVar4._12_4_ = fVar18;
        auVar20 = NEON_rev64(auVar4,4);
        *(float *)(param_3[2] + uVar6 * 4) =
             fVar15 * 1.0009619 *
             SQRT((auVar20._8_4_ + fVar17 + auVar20._0_4_ + fVar21) / (float)uVar3);
        uVar6 = uVar6 + 1;
      } while (uVar6 != uVar7);
    }
  }
  if ((bVar2 >> 1 & 1) != 0) {
    uVar7 = (uint)*(byte *)(param_2 + 1);
    if (fVar15 <= 0.0) {
      if (uVar7 != 0) {
        memset((void *)param_3[1],0,(ulong)*(byte *)(param_2 + 1) << 2);
      }
    }
    else {
      if (uVar7 < 2) {
        uVar7 = 1;
      }
      lVar13 = 0;
      lVar14 = 0;
      do {
        fVar21 = (float)FUN__text__004d84e0(*param_2 + lVar14 * (ulong)*(ushort *)(param_2 + 2),
                                            param_3[5] + lVar13);
        lVar13 = lVar13 + 0x30;
        *(float *)(param_3[1] + lVar14) = fVar15 * 1.0009619 * fVar21;
        lVar14 = lVar14 + 4;
      } while ((ulong)uVar7 * 4 != lVar14);
    }
  }
  if ((bVar2 >> 4 & 1) != 0) {
    FUN__text__004d8300(fVar15,param_3,param_2);
  }
  if (((bVar2 >> 5 & 1) != 0) && (pfVar5 = (float *)param_3[6], pfVar5 != (float *)0x0)) {
    bVar2 = *(byte *)(param_2 + 1);
    if (fVar15 <= 0.0) {
      if (bVar2 != 0) {
        memset(pfVar5,0,(ulong)bVar2 << 2);
        return;
      }
    }
    else {
      uVar3 = *(ushort *)(param_2 + 2);
      fVar15 = fVar15 * 1.0009619;
      if (uVar3 == 0) {
        uVar6 = 0;
        *pfVar5 = fVar15 * -2.1474836e+09;
      }
      else {
        if (uVar3 == 1) {
          fVar19 = -2.1474836e+09;
          uVar8 = 0;
          uVar6 = 0;
          fVar21 = -2.1474836e+09;
        }
        else {
          uVar6 = 0;
          fVar21 = -2.1474836e+09;
          fVar16 = -2.1474836e+09;
          uVar7 = 0;
          do {
            pfVar11 = (float *)(*param_2 + uVar6 * 4);
            fVar17 = *pfVar11;
            fVar18 = pfVar11[1];
            fVar24 = ABS(fVar17);
            if (fVar24 <= fVar16) {
              fVar17 = fVar21;
            }
            fVar19 = ABS(fVar18);
            uVar8 = (uint)uVar6;
            if (fVar24 <= fVar16) {
              uVar8 = uVar7;
            }
            if (fVar19 <= fVar24) {
              fVar21 = fVar17;
            }
            else {
              uVar8 = (uint)uVar6 + 1;
              fVar21 = fVar18;
            }
            uVar6 = uVar6 + 2;
            fVar16 = fVar19;
            uVar7 = uVar8;
          } while (uVar6 != ((ulong)uVar3 & 0xfffe));
        }
        uVar7 = uVar8;
        if ((uVar3 & 1) != 0) {
          fVar16 = *(float *)(*param_2 + uVar6 * 4);
          uVar7 = (uint)uVar6;
          if (ABS(fVar16) <= fVar19) {
            uVar7 = uVar8;
            fVar16 = fVar21;
          }
          fVar21 = fVar16;
        }
        uVar6 = (ulong)uVar7;
        *pfVar5 = fVar21 * fVar15;
      }
      if (1 < bVar2) {
        lVar13 = 4;
        do {
          *(float *)(param_3[6] + lVar13) =
               *(float *)(*param_2 + lVar13 * (ulong)*(ushort *)(param_2 + 2) + uVar6 * 4) * fVar15;
          lVar13 = lVar13 + 4;
        } while ((ulong)bVar2 * 4 != lVar13);
      }
    }
  }
  return;
}


