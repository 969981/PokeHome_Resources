/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0047e310; name: FUN_.text__0047e310
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0047e310(undefined8 *param_1,uint param_2,long *param_3,char param_4,char param_5,
                        long param_6,long *param_7,long *param_8,long param_9)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  float *pfVar4;
  undefined8 *puVar5;
  float *pfVar6;
  float *pfVar7;
  ulong uVar8;
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
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float local_a8;
  undefined4 local_a4;
  
  pfVar4 = _DAT_008a4490;
  if (*(char *)(param_6 + 0x94) == '\0') {
    if (param_9 != 0) {
      puVar5 = (undefined8 *)(param_9 + 0x18);
      if (param_2 < 2) {
        param_2 = 1;
      }
      uVar8 = (ulong)param_2;
      do {
        puVar5[1] = 0x3f80000000000000;
        puVar5[2] = 0xffff3f800000;
        uVar8 = uVar8 - 1;
        puVar5[-1] = 0x3f800000;
        *puVar5 = 0;
        puVar5[-3] = 0;
        puVar5[-2] = 0x3f800000;
        puVar5 = puVar5 + 6;
      } while (uVar8 != 0);
    }
  }
  else {
    if (param_2 < 2) {
      param_2 = 1;
    }
    uVar8 = (ulong)param_2;
    pfVar7 = (float *)(param_9 + 0x18);
    do {
      uVar1 = param_1[1];
      *(undefined8 *)(pfVar7 + -6) = *param_1;
      *(undefined8 *)(pfVar7 + -4) = uVar1;
      uVar1 = param_1[2];
      uVar2 = param_1[3];
      uVar3 = param_1[5];
      *(undefined8 *)(pfVar7 + 2) = param_1[4];
      *(undefined8 *)(pfVar7 + 4) = uVar3;
      *(undefined8 *)(pfVar7 + -2) = uVar1;
      *(undefined8 *)pfVar7 = uVar2;
      if (param_5 == '\0') {
        fVar31 = *pfVar4;
        fVar32 = pfVar4[1];
        fVar12 = 0.0;
        fVar20 = pfVar4[2];
        fVar28 = pfVar4[3];
        fVar13 = 0.0;
        fVar29 = pfVar4[4];
        fVar22 = pfVar4[5];
        fVar25 = 0.0;
        fVar30 = pfVar4[6];
        fVar23 = pfVar4[7];
        fVar24 = pfVar4[8];
      }
      else {
        pfVar6 = (float *)*param_3;
        fVar10 = (float)(*(double *)(pfVar6 + 8) - *(double *)(param_6 + 0x80));
        fVar9 = (float)(*(double *)(pfVar6 + 6) - *(double *)(param_6 + 0x78));
        fVar11 = (float)(*(double *)(pfVar6 + 10) - *(double *)(param_6 + 0x88));
        if (param_5 == '\x02') {
          fVar22 = pfVar6[4];
          fVar23 = pfVar6[5];
          fVar25 = *pfVar6;
          fVar24 = pfVar6[1];
          fVar26 = pfVar6[2];
          fVar27 = pfVar6[3];
          fVar20 = fVar26 * fVar22 - fVar24 * fVar23;
          fVar28 = fVar25 * fVar23 - fVar27 * fVar26;
          fVar12 = *(float *)(param_6 + 0x3c);
          fVar13 = *(float *)(param_6 + 0x40);
          fVar30 = fVar27 * fVar24 - fVar25 * fVar22;
          fVar14 = *(float *)(param_6 + 0x44);
          fVar15 = *(float *)(param_6 + 0x48);
          fVar31 = fVar12 * fVar20 + fVar13 * fVar28 + fVar30 * fVar14;
          fVar16 = *(float *)(param_6 + 0x4c);
          fVar17 = *(float *)(param_6 + 0x50);
          fVar32 = fVar15 * fVar20 + fVar28 * fVar16 + fVar30 * fVar17;
          fVar18 = *(float *)(param_6 + 0x54);
          fVar19 = *(float *)(param_6 + 0x58);
          fVar21 = *(float *)(param_6 + 0x5c);
          fVar29 = fVar15 * fVar27 + fVar22 * fVar16 + fVar23 * fVar17;
          fVar20 = fVar18 * fVar20 + fVar28 * fVar19 + fVar30 * fVar21;
          fVar28 = fVar12 * fVar27 + fVar22 * fVar13 + fVar23 * fVar14;
          fVar30 = fVar12 * fVar25 + fVar24 * fVar13 + fVar26 * fVar14;
          fVar22 = fVar18 * fVar27 + fVar22 * fVar19 + fVar23 * fVar21;
          fVar23 = fVar15 * fVar25 + fVar24 * fVar16 + fVar26 * fVar17;
          fVar24 = fVar18 * fVar25 + fVar24 * fVar19 + fVar26 * fVar21;
        }
        else {
          fVar31 = *pfVar4;
          fVar32 = pfVar4[1];
          fVar24 = pfVar4[8];
          fVar20 = pfVar4[2];
          fVar28 = pfVar4[3];
          fVar21 = *(float *)(param_6 + 0x5c);
          fVar29 = pfVar4[4];
          fVar22 = pfVar4[5];
          fVar30 = pfVar4[6];
          fVar23 = pfVar4[7];
          fVar12 = *(float *)(param_6 + 0x3c);
          fVar13 = *(float *)(param_6 + 0x40);
          fVar14 = *(float *)(param_6 + 0x44);
          fVar15 = *(float *)(param_6 + 0x48);
          fVar16 = *(float *)(param_6 + 0x4c);
          fVar17 = *(float *)(param_6 + 0x50);
          fVar18 = *(float *)(param_6 + 0x54);
          fVar19 = *(float *)(param_6 + 0x58);
        }
        fVar26 = pfVar6[0x16];
        fVar27 = 0.0;
        fVar25 = 1.0 / pfVar6[0x18];
        fVar12 = fVar25 * (fVar12 * fVar9 + fVar10 * fVar13 + fVar11 * fVar14);
        fVar13 = fVar25 * (fVar15 * fVar9 + fVar10 * fVar16 + fVar11 * fVar17);
        fVar25 = (fVar18 * fVar9 + fVar10 * fVar19 + fVar11 * fVar21) * fVar25;
        local_a8 = fVar27;
        if (param_7 != (long *)0x0 || param_8 != (long *)0x0) {
          fVar9 = SQRT(fVar12 * fVar12 + fVar13 * fVar13 + fVar25 * fVar25);
          if (param_7 != (long *)0x0) {
            if (*param_7 == 0) {
              fVar26 = 0.0;
            }
            else {
              local_a4 = (undefined4)param_7[2];
              local_a8 = 0.0;
              FUN__text__0041a060(fVar9,param_7,&local_a4,&local_a8);
              *(undefined4 *)(param_7 + 2) = local_a4;
              fVar26 = local_a8;
            }
          }
          local_a8 = fVar27;
          if ((param_8 != (long *)0x0) && (*param_8 != 0)) {
            local_a4 = (undefined4)param_8[2];
            local_a8 = 0.0;
            FUN__text__0041a060(fVar9,param_8,&local_a4,&local_a8);
            *(undefined4 *)(param_8 + 2) = local_a4;
          }
        }
        fVar9 = (float)NEON_fminnm(fVar26,pfVar6[0x17]);
        pfVar7[3] = fVar9 * pfVar7[3] * 0.01;
        pfVar7[4] = local_a8 * 0.01 * pfVar7[4];
        pfVar7[5] = (float)((uint)pfVar7[5] & (uint)pfVar6[0x19]);
      }
      if (param_4 != '\0') {
        fVar9 = *pfVar7;
        fVar10 = pfVar7[1];
        fVar11 = pfVar7[2];
        fVar25 = fVar25 + fVar20 * fVar9 + fVar22 * fVar10 + fVar24 * fVar11;
        fVar14 = pfVar7[-2];
        fVar15 = pfVar7[-1];
        fVar13 = fVar13 + fVar32 * fVar9 + fVar29 * fVar10 + fVar23 * fVar11;
        fVar17 = pfVar7[-4];
        fVar18 = pfVar7[-3];
        fVar12 = fVar12 + fVar31 * fVar9 + fVar28 * fVar10 + fVar30 * fVar11;
        fVar16 = pfVar7[-6];
        fVar11 = pfVar7[-5];
        fVar9 = fVar28 * fVar11;
        fVar10 = fVar22 * fVar11;
        fVar28 = fVar14 * fVar28 + fVar30 * fVar15 + fVar31 * fVar18;
        fVar11 = fVar29 * fVar11;
        fVar29 = fVar14 * fVar29 + fVar23 * fVar15 + fVar32 * fVar18;
        fVar22 = fVar14 * fVar22 + fVar24 * fVar15 + fVar20 * fVar18;
        fVar30 = fVar17 * fVar30 + fVar9 + fVar31 * fVar16;
        fVar24 = fVar17 * fVar24 + fVar10 + fVar20 * fVar16;
        fVar23 = fVar17 * fVar23 + fVar11 + fVar32 * fVar16;
      }
      *pfVar7 = fVar12;
      uVar8 = uVar8 - 1;
      param_3 = param_3 + 1;
      pfVar7[1] = fVar13;
      pfVar7[2] = fVar25;
      pfVar7[-6] = fVar30;
      pfVar7[-5] = fVar23;
      pfVar7[-4] = fVar24;
      pfVar7[-3] = fVar28;
      pfVar7[-2] = fVar29;
      pfVar7[-1] = fVar22;
      pfVar7 = pfVar7 + 0xc;
    } while (uVar8 != 0);
  }
  return;
}


