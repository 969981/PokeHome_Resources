/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00551840; name: FUN_.text__00551840
 */


void FUN__text__00551840(uint param_1,uint param_2,uint param_3,long param_4,long param_5,
                        long param_6)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  bool bVar9;
  ulong uVar10;
  long lVar11;
  int iVar12;
  ulong uVar13;
  ulong uVar14;
  uint uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
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
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  
  if ((param_3 != 0) && (param_2 != 0)) {
    uVar16 = (ulong)(param_2 * 4);
    uVar17 = (ulong)(param_2 * 2);
    lVar11 = 0;
    uVar13 = 0;
    uVar15 = 0;
    uVar10 = (ulong)(param_2 * 3);
    fVar20 = 1.0 / (float)param_1;
    uVar14 = (ulong)(param_2 * 5);
    uVar18 = (ulong)param_2;
    do {
      iVar12 = (int)uVar13;
      uVar19 = 0;
      pfVar1 = (float *)(param_5 + (ulong)(uint)(iVar12 << 2) * 8);
      pfVar2 = (float *)(param_5 + (ulong)(iVar12 << 2 | 2) * 8);
      pfVar3 = (float *)(param_5 + (ulong)(iVar12 << 2 | 1) * 8);
      pfVar4 = (float *)(param_5 + (ulong)(iVar12 << 2 | 3) * 8);
      do {
        iVar12 = (int)uVar19;
        pfVar5 = (float *)(param_4 + (ulong)(uint)((int)uVar18 + iVar12) * 8);
        pfVar6 = (float *)(param_4 + (ulong)(uint)((int)uVar17 + iVar12) * 8);
        pfVar7 = (float *)(param_4 + (ulong)(uint)((int)uVar10 + iVar12) * 8);
        fVar21 = *pfVar1;
        fVar22 = pfVar1[1];
        pfVar8 = (float *)(param_4 + (ulong)(uint)((int)uVar16 + iVar12) * 8);
        fVar23 = *pfVar3;
        fVar26 = pfVar3[1];
        fVar24 = *pfVar5;
        fVar25 = pfVar5[1];
        fVar27 = *pfVar6;
        fVar28 = pfVar6[1];
        pfVar5 = (float *)(param_4 + (ulong)(uint)((int)lVar11 + iVar12) * 8);
        fVar29 = *pfVar2;
        fVar32 = pfVar2[1];
        bVar9 = param_2 == 1;
        fVar30 = *pfVar7;
        fVar31 = pfVar7[1];
        fVar33 = *pfVar8;
        fVar34 = pfVar8[1];
        fVar35 = *pfVar4;
        fVar36 = pfVar4[1];
        fVar37 = fVar24 * fVar21 + fVar22 * fVar25;
        fVar21 = fVar25 * fVar21 - fVar24 * fVar22;
        fVar22 = fVar27 * fVar23 + fVar26 * fVar28;
        fVar24 = fVar28 * fVar23 - fVar27 * fVar26;
        fVar23 = fVar30 * fVar29 + fVar32 * fVar31;
        fVar25 = fVar31 * fVar29 - fVar30 * fVar32;
        fVar26 = fVar33 * fVar35 + fVar36 * fVar34;
        fVar27 = fVar34 * fVar35 - fVar33 * fVar36;
        pfVar6 = (float *)(param_6 + (ulong)((param_1 / 5) * 2 + uVar15 + iVar12) * 8);
        fVar31 = fVar26 + fVar37;
        fVar33 = fVar23 + fVar22;
        fVar34 = fVar25 + fVar24;
        fVar22 = fVar22 - fVar23;
        fVar24 = fVar24 - fVar25;
        fVar37 = fVar37 - fVar26;
        fVar32 = fVar21 + fVar27;
        fVar21 = fVar21 - fVar27;
        fVar23 = *pfVar5;
        fVar29 = pfVar5[1];
        fVar36 = fVar37 * -0.95105654 + fVar22 * -0.58778524;
        fVar35 = fVar24 * -0.58778524 + fVar21 * -0.95105654;
        pfVar5 = (float *)(param_6 + (uVar15 + uVar19 & 0xffffffff) * 8);
        pfVar7 = (float *)(param_6 + (ulong)((param_1 / 5) * 3 + uVar15 + iVar12) * 8);
        fVar27 = fVar31 + fVar33 + fVar23;
        fVar25 = fVar23 + (fVar31 * 0.309017 - fVar33 * 0.809017);
        fVar26 = (fVar32 * 0.309017 - fVar34 * 0.809017) + fVar29;
        fVar28 = fVar22 * 0.95105654 + fVar37 * -0.58778524;
        fVar30 = fVar21 * -0.58778524 + fVar24 * 0.95105654;
        fVar23 = fVar23 + (fVar33 * 0.309017 - fVar31 * 0.809017);
        fVar24 = (fVar34 * 0.309017 - fVar32 * 0.809017) + fVar29;
        fVar29 = fVar34 + fVar32 + fVar29;
        fVar21 = fVar35 + fVar25;
        fVar37 = fVar26 - fVar36;
        fVar26 = fVar26 + fVar36;
        fVar22 = fVar24 - fVar28;
        fVar24 = fVar24 + fVar28;
        fVar25 = fVar25 - fVar35;
        fVar28 = fVar30 + fVar23;
        fVar23 = fVar23 - fVar30;
        if (bVar9) {
          fVar29 = fVar29 * fVar20;
          fVar21 = fVar21 * fVar20;
        }
        if (bVar9) {
          fVar27 = fVar27 * fVar20;
        }
        *pfVar5 = fVar27;
        pfVar5[1] = fVar29;
        uVar19 = uVar19 + 1;
        pfVar5 = (float *)(param_6 + (ulong)(param_1 / 5 + uVar15 + iVar12) * 8);
        if (bVar9) {
          fVar28 = fVar28 * fVar20;
          fVar22 = fVar22 * fVar20;
          fVar23 = fVar23 * fVar20;
          fVar24 = fVar24 * fVar20;
          fVar25 = fVar25 * fVar20;
          fVar37 = fVar37 * fVar20;
          fVar26 = fVar26 * fVar20;
        }
        *pfVar5 = fVar21;
        pfVar5[1] = fVar37;
        pfVar5 = (float *)(param_6 +
                          (ulong)(((uint)((ulong)param_1 * 0xcccccccd >> 0x20) & 0xfffffffc) +
                                  uVar15 + iVar12) * 8);
        *pfVar6 = fVar28;
        pfVar6[1] = fVar22;
        *pfVar7 = fVar23;
        pfVar7[1] = fVar24;
        *pfVar5 = fVar25;
        pfVar5[1] = fVar26;
      } while (param_2 != uVar19);
      uVar13 = uVar13 + 1;
      uVar15 = uVar15 + (int)uVar19;
      uVar16 = uVar16 + uVar14;
      uVar10 = uVar10 + uVar14;
      uVar17 = uVar17 + uVar14;
      uVar18 = uVar18 + uVar14;
      lVar11 = lVar11 + uVar14;
    } while (uVar13 != param_3);
  }
  return;
}


