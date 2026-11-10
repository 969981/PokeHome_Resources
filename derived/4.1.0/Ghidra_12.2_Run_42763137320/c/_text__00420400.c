/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00420400; name: FUN_.text__00420400
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00420400(long param_1,long param_2,long param_3,long param_4,long param_5,
                        uint param_6,uint param_7,uint param_8)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  float *pfVar12;
  ulong uVar13;
  ulong uVar14;
  float *pfVar15;
  float *pfVar16;
  float *pfVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  float *pfVar21;
  uint uVar22;
  long lVar23;
  undefined8 *puVar24;
  float *pfVar25;
  float *pfVar26;
  undefined8 *puVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  float fVar42;
  float fVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  float fVar46;
  float fVar47;
  float fVar53;
  float fVar55;
  float fVar57;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  float fVar54;
  float fVar56;
  float fVar58;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar63;
  undefined8 uVar62;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float afStack_220 [128];
  
  uVar11 = uRam0000000000724b48;
  uVar10 = _DAT_00724b40;
  uVar9 = uRam0000000000724a38;
  uVar8 = _DAT_00724a30;
  uVar7 = uRam0000000000724858;
  uVar6 = _DAT_00724850;
  uVar5 = uRam0000000000724848;
  uVar4 = _DAT_00724840;
  uVar1 = param_8 + 3 & 0xfffffffc;
  uVar14 = (ulong)uVar1;
  pfVar15 = afStack_220 + (0x80 - uVar14);
  pfVar16 = pfVar15 + -uVar14;
  pfVar17 = pfVar16 + -uVar14;
  if ((param_7 != 0) && (param_8 != 0)) {
    auVar40 = NEON_fmov(0x40800000,4);
    auVar41 = NEON_fmov(0x41800000,4);
    uVar18 = 0;
    uVar2 = param_6 & 0xfffffff0;
    fVar42 = 1.0 / (float)param_6;
    do {
      lVar23 = uVar18 * 8;
      lVar19 = *(long *)(param_1 + lVar23);
      fVar71 = *(float *)(param_3 + lVar23);
      if (uVar1 != 0) {
        fVar43 = ((float *)(param_3 + lVar23))[1];
        uVar20 = 0;
        pfVar12 = pfVar17;
        pfVar21 = *(float **)(param_4 + lVar23);
        puVar24 = *(undefined8 **)(param_5 + lVar23);
        pfVar25 = pfVar16;
        pfVar26 = pfVar15;
        do {
          uVar20 = uVar20 + 4;
          fVar46 = *pfVar21 * fVar71;
          fVar53 = pfVar21[1] * fVar71;
          fVar55 = pfVar21[2] * fVar71;
          fVar57 = pfVar21[3] * fVar71;
          fVar59 = (float)*puVar24 * fVar43;
          fVar60 = (float)((ulong)*puVar24 >> 0x20) * fVar43;
          fVar61 = (float)puVar24[1] * fVar43;
          fVar63 = (float)((ulong)puVar24[1] >> 0x20) * fVar43;
          pfVar26[2] = fVar55;
          pfVar26[3] = fVar57;
          *pfVar26 = fVar46;
          pfVar26[1] = fVar53;
          *(ulong *)(pfVar25 + 2) = CONCAT44((fVar63 - fVar57) * fVar42,(fVar61 - fVar55) * fVar42);
          *(ulong *)pfVar25 = CONCAT44((fVar60 - fVar53) * fVar42,(fVar59 - fVar46) * fVar42);
          auVar48._0_4_ = -(uint)(1.1920929e-07 < ABS(fVar59 - fVar46));
          auVar48._4_4_ = -(uint)(1.1920929e-07 < ABS(fVar60 - fVar53));
          auVar48._8_4_ = -(uint)(1.1920929e-07 < ABS(fVar61 - fVar55));
          auVar48._12_4_ = -(uint)(1.1920929e-07 < ABS(fVar63 - fVar57));
          auVar49._4_4_ = -(uint)(1.1920929e-07 < ABS(fVar53));
          auVar49._0_4_ = -(uint)(1.1920929e-07 < ABS(fVar46));
          auVar49._8_4_ = -(uint)(1.1920929e-07 < ABS(fVar55));
          auVar49._12_4_ = -(uint)(1.1920929e-07 < ABS(fVar57));
          auVar49 = NEON_sli(auVar48,auVar49,0x10,4);
          *(long *)(pfVar12 + 2) = auVar49._8_8_;
          *(long *)pfVar12 = auVar49._0_8_;
          pfVar12 = pfVar12 + 4;
          pfVar21 = pfVar21 + 4;
          puVar24 = puVar24 + 2;
          pfVar25 = pfVar25 + 4;
          pfVar26 = pfVar26 + 4;
        } while (uVar20 < uVar14);
      }
      uVar22 = 0;
      uVar20 = 0;
      do {
        if (*(short *)((long)pfVar17 + (ulong)(uVar22 << 1) * 2) == 0) {
          if (*(short *)((long)pfVar17 + (ulong)(uVar22 << 1 | 1) * 2) != 0) {
            fVar71 = pfVar15[uVar20 & 0xffff];
            lVar23 = *(long *)(param_2 + (uVar20 & 0xffff) * 8);
            if (uVar2 == 0) {
              uVar13 = 0;
            }
            else {
              uVar13 = 0;
              puVar24 = (undefined8 *)(lVar23 + 0x20);
              puVar27 = (undefined8 *)(lVar19 + 0x20);
              do {
                uVar44 = puVar27[-4];
                fVar43 = *(float *)(puVar27 + -2);
                fVar46 = *(float *)((long)puVar27 + -0xc);
                fVar53 = *(float *)(puVar27 + -1);
                fVar55 = *(float *)((long)puVar27 + -4);
                uVar13 = uVar13 + 0x10;
                uVar62 = puVar27[1];
                uVar45 = *puVar27;
                auVar51._0_8_ =
                     CONCAT44(*(float *)((long)puVar24 + 0x14) +
                              (float)((ulong)puVar27[2] >> 0x20) * fVar71,
                              *(float *)(puVar24 + 2) + (float)puVar27[2] * fVar71);
                auVar51._8_4_ = *(float *)(puVar24 + 3) + (float)puVar27[3] * fVar71;
                auVar51._12_4_ =
                     *(float *)((long)puVar24 + 0x1c) + (float)((ulong)puVar27[3] >> 0x20) * fVar71;
                puVar24[-3] = CONCAT44((float)((ulong)puVar24[-3] >> 0x20) +
                                       (float)((ulong)puVar27[-3] >> 0x20) * fVar71,
                                       (float)puVar24[-3] + (float)puVar27[-3] * fVar71);
                puVar24[-4] = CONCAT44((float)((ulong)puVar24[-4] >> 0x20) +
                                       (float)((ulong)uVar44 >> 0x20) * fVar71,
                                       (float)puVar24[-4] + (float)uVar44 * fVar71);
                puVar24[-1] = CONCAT44((float)((ulong)puVar24[-1] >> 0x20) + fVar55 * fVar71,
                                       (float)puVar24[-1] + fVar53 * fVar71);
                puVar24[-2] = CONCAT44((float)((ulong)puVar24[-2] >> 0x20) + fVar46 * fVar71,
                                       (float)puVar24[-2] + fVar43 * fVar71);
                puVar24[1] = CONCAT44((float)((ulong)puVar24[1] >> 0x20) +
                                      (float)((ulong)uVar62 >> 0x20) * fVar71,
                                      (float)puVar24[1] + (float)uVar62 * fVar71);
                *puVar24 = CONCAT44((float)((ulong)*puVar24 >> 0x20) +
                                    (float)((ulong)uVar45 >> 0x20) * fVar71,
                                    (float)*puVar24 + (float)uVar45 * fVar71);
                puVar24[3] = auVar51._8_8_;
                puVar24[2] = auVar51._0_8_;
                puVar24 = puVar24 + 8;
                puVar27 = puVar27 + 8;
              } while (uVar13 < uVar2);
            }
            for (; (uint)uVar13 < param_6; uVar13 = (ulong)((uint)uVar13 + 4)) {
              lVar3 = (uVar13 & 0xffffffff) * 4;
              uVar45 = ((undefined8 *)(lVar19 + lVar3))[1];
              uVar44 = *(undefined8 *)(lVar19 + lVar3);
              pfVar12 = (float *)(lVar23 + lVar3);
              auVar52._0_8_ =
                   CONCAT44(pfVar12[1] + (float)((ulong)uVar44 >> 0x20) * fVar71,
                            *pfVar12 + (float)uVar44 * fVar71);
              auVar52._8_4_ = pfVar12[2] + (float)uVar45 * fVar71;
              auVar52._12_4_ = pfVar12[3] + (float)((ulong)uVar45 >> 0x20) * fVar71;
              ((undefined8 *)(lVar23 + lVar3))[1] = auVar52._8_8_;
              *(undefined8 *)(lVar23 + lVar3) = auVar52._0_8_;
            }
          }
        }
        else {
          uVar13 = uVar20 & 0xffff;
          lVar23 = *(long *)(param_2 + uVar13 * 8);
          fVar57 = pfVar16[uVar13];
          fVar71 = pfVar15[uVar13];
          fVar43 = fVar71 + (float)uVar10 * fVar57;
          fVar46 = fVar71 + (float)((ulong)uVar10 >> 0x20) * fVar57;
          fVar53 = fVar71 + (float)uVar11 * fVar57;
          fVar55 = fVar71 + (float)((ulong)uVar11 >> 0x20) * fVar57;
          if (uVar2 == 0) {
            uVar13 = 0;
            if (param_6 != 0) goto LAB__text__0042065c;
          }
          else {
            uVar13 = 0;
            auVar50._0_4_ = fVar71 + (float)uVar6 * fVar57;
            auVar50._4_4_ = fVar71 + (float)((ulong)uVar6 >> 0x20) * fVar57;
            auVar50._8_4_ = fVar71 + (float)uVar7 * fVar57;
            auVar50._12_4_ = fVar71 + (float)((ulong)uVar7 >> 0x20) * fVar57;
            fVar59 = auVar41._0_4_ * fVar57;
            fVar60 = auVar41._4_4_ * fVar57;
            fVar61 = auVar41._8_4_ * fVar57;
            fVar63 = auVar41._12_4_ * fVar57;
            fVar64 = fVar71 + (float)uVar8 * fVar57;
            fVar65 = fVar71 + (float)((ulong)uVar8 >> 0x20) * fVar57;
            fVar66 = fVar71 + (float)uVar9 * fVar57;
            fVar67 = fVar71 + (float)((ulong)uVar9 >> 0x20) * fVar57;
            fVar68 = fVar71 + (float)uVar4 * fVar57;
            fVar69 = fVar71 + (float)((ulong)uVar4 >> 0x20) * fVar57;
            fVar70 = fVar71 + (float)uVar5 * fVar57;
            fVar71 = fVar71 + (float)((ulong)uVar5 >> 0x20) * fVar57;
            puVar24 = (undefined8 *)(lVar23 + 0x20);
            puVar27 = (undefined8 *)(lVar19 + 0x20);
            do {
              uVar45 = puVar27[-1];
              uVar44 = puVar27[-2];
              uVar13 = uVar13 + 0x10;
              fVar47 = auVar50._0_4_;
              fVar54 = auVar50._4_4_;
              fVar56 = auVar50._8_4_;
              fVar58 = auVar50._12_4_;
              auVar50._0_4_ = fVar47 + fVar59;
              auVar50._4_4_ = fVar54 + fVar60;
              auVar50._8_4_ = fVar56 + fVar61;
              auVar50._12_4_ = fVar58 + fVar63;
              fVar28 = fVar43 * (float)puVar27[-4];
              fVar31 = fVar46 * (float)((ulong)puVar27[-4] >> 0x20);
              fVar34 = fVar53 * (float)puVar27[-3];
              fVar37 = fVar55 * (float)((ulong)puVar27[-3] >> 0x20);
              fVar43 = fVar43 + fVar59;
              fVar46 = fVar46 + fVar60;
              fVar53 = fVar53 + fVar61;
              fVar55 = fVar55 + fVar63;
              fVar29 = fVar68 * (float)*puVar27;
              fVar32 = fVar69 * (float)((ulong)*puVar27 >> 0x20);
              fVar35 = fVar70 * (float)puVar27[1];
              fVar38 = fVar71 * (float)((ulong)puVar27[1] >> 0x20);
              fVar30 = fVar64 * (float)puVar27[2];
              fVar33 = fVar65 * (float)((ulong)puVar27[2] >> 0x20);
              fVar36 = fVar66 * (float)puVar27[3];
              fVar39 = fVar67 * (float)((ulong)puVar27[3] >> 0x20);
              fVar68 = fVar68 + fVar59;
              fVar69 = fVar69 + fVar60;
              fVar70 = fVar70 + fVar61;
              fVar71 = fVar71 + fVar63;
              fVar64 = fVar64 + fVar59;
              fVar65 = fVar65 + fVar60;
              fVar66 = fVar66 + fVar61;
              fVar67 = fVar67 + fVar63;
              puVar24[-3] = CONCAT44((float)((ulong)puVar24[-3] >> 0x20) + fVar37,
                                     (float)puVar24[-3] + fVar34);
              puVar24[-4] = CONCAT44((float)((ulong)puVar24[-4] >> 0x20) + fVar31,
                                     (float)puVar24[-4] + fVar28);
              puVar24[-1] = CONCAT44((float)((ulong)puVar24[-1] >> 0x20) +
                                     fVar58 * (float)((ulong)uVar45 >> 0x20),
                                     (float)puVar24[-1] + fVar56 * (float)uVar45);
              puVar24[-2] = CONCAT44((float)((ulong)puVar24[-2] >> 0x20) +
                                     fVar54 * (float)((ulong)uVar44 >> 0x20),
                                     (float)puVar24[-2] + fVar47 * (float)uVar44);
              puVar24[1] = CONCAT44((float)((ulong)puVar24[1] >> 0x20) + fVar38,
                                    (float)puVar24[1] + fVar35);
              *puVar24 = CONCAT44((float)((ulong)*puVar24 >> 0x20) + fVar32,(float)*puVar24 + fVar29
                                 );
              puVar24[3] = CONCAT44((float)((ulong)puVar24[3] >> 0x20) + fVar39,
                                    (float)puVar24[3] + fVar36);
              puVar24[2] = CONCAT44((float)((ulong)puVar24[2] >> 0x20) + fVar33,
                                    (float)puVar24[2] + fVar30);
              puVar24 = puVar24 + 8;
              puVar27 = puVar27 + 8;
            } while (uVar13 < uVar2);
            if ((uint)uVar13 < param_6) {
LAB__text__0042065c:
              do {
                lVar3 = (uVar13 & 0xffffffff) * 4;
                uVar22 = (int)uVar13 + 4;
                uVar13 = (ulong)uVar22;
                auVar49 = *(undefined1 (*) [16])(lVar19 + lVar3);
                uVar45 = ((undefined8 *)(lVar23 + lVar3))[1];
                uVar44 = *(undefined8 *)(lVar23 + lVar3);
                fVar71 = fVar43 * auVar49._0_4_;
                fVar59 = fVar46 * auVar49._4_4_;
                fVar60 = fVar53 * auVar49._8_4_;
                fVar61 = fVar55 * auVar49._12_4_;
                fVar43 = fVar43 + auVar40._0_4_ * fVar57;
                fVar46 = fVar46 + auVar40._4_4_ * fVar57;
                fVar53 = fVar53 + auVar40._8_4_ * fVar57;
                fVar55 = fVar55 + auVar40._12_4_ * fVar57;
                ((undefined8 *)(lVar23 + lVar3))[1] =
                     CONCAT44((float)((ulong)uVar45 >> 0x20) + fVar61,(float)uVar45 + fVar60);
                *(undefined8 *)(lVar23 + lVar3) =
                     CONCAT44((float)((ulong)uVar44 >> 0x20) + fVar59,(float)uVar44 + fVar71);
              } while (uVar22 < param_6);
            }
          }
        }
        uVar22 = (int)uVar20 + 1;
        uVar20 = (ulong)uVar22;
        uVar22 = uVar22 & 0xffff;
      } while (uVar22 < param_8);
      uVar18 = uVar18 + 1;
    } while (uVar18 != param_7);
  }
  return;
}


