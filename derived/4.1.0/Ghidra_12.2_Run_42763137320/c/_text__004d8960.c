/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004d8960; name: FUN_.text__004d8960
 */


undefined1  [16]
FUN__text__004d8960(undefined8 *param_1,undefined8 *param_2,long param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  uint uVar4;
  ulong uVar5;
  float *pfVar6;
  float *pfVar8;
  float *pfVar7;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar16;
  float fVar17;
  undefined1 auVar15 [16];
  undefined1 auVar18 [16];
  float fVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  float fVar36;
  undefined8 uVar37;
  float fVar38;
  undefined8 uVar39;
  float fVar40;
  float fVar41;
  float afStack_250 [128];
  
  pfVar6 = (float *)((long)afStack_250 + (0x200 - ((ulong)param_4 * 4 + 0xf & 0x7fffffff0)));
  uVar2 = param_4 & 3;
  uVar4 = param_4;
  if (uVar2 != 0) {
    memset((void *)(param_3 + (ulong)param_4 * 4),0,(ulong)((4 - uVar2) * 4));
    uVar4 = (4 - uVar2) + param_4;
  }
  fVar14 = (float)((ulong)*param_1 >> 0x20);
  fVar19 = (float)*param_1;
  fVar41 = (float)param_1[1];
  fVar40 = (float)((ulong)param_1[1] >> 0x20);
  if (uVar4 != 0) {
    uVar21 = param_1[3];
    uVar20 = param_1[2];
    uVar23 = param_1[5];
    uVar22 = param_1[4];
    uVar25 = param_1[7];
    uVar24 = param_1[6];
    uVar27 = param_1[9];
    uVar26 = param_1[8];
    uVar29 = param_1[0xb];
    uVar28 = param_1[10];
    uVar31 = param_1[0xd];
    uVar30 = param_1[0xc];
    uVar33 = param_1[0xf];
    uVar32 = param_1[0xe];
    uVar35 = param_1[0x11];
    uVar34 = param_1[0x10];
    uVar5 = 0;
    fVar16 = fVar14;
    fVar17 = fVar19;
    do {
      uVar1 = (int)uVar5 + 4;
      puVar3 = (undefined8 *)(param_3 + uVar5 * 4);
      uVar39 = puVar3[1];
      uVar37 = *puVar3;
      fVar36 = (float)uVar37;
      fVar38 = (float)((ulong)uVar37 >> 0x20);
      fVar14 = (float)uVar39;
      fVar19 = (float)((ulong)uVar39 >> 0x20);
      fVar9 = (float)uVar32 * fVar41;
      fVar11 = (float)((ulong)uVar32 >> 0x20) * fVar41;
      fVar10 = (float)uVar34 * fVar40;
      fVar12 = (float)((ulong)uVar34 >> 0x20) * fVar40;
      fVar13 = (float)((ulong)uVar35 >> 0x20) * fVar40;
      fVar40 = fVar14 * (float)uVar21 + (float)uVar29 * fVar17 + (float)uVar31 * fVar16 +
               (float)uVar23 * fVar14 + (float)uVar25 * fVar38 + (float)uVar27 * fVar36 +
               (float)uVar33 * fVar41 + (float)uVar35 * fVar40;
      fVar41 = fVar19 * (float)((ulong)uVar21 >> 0x20) + (float)((ulong)uVar29 >> 0x20) * fVar17 +
               (float)((ulong)uVar31 >> 0x20) * fVar16 + (float)((ulong)uVar23 >> 0x20) * fVar14 +
               (float)((ulong)uVar25 >> 0x20) * fVar38 + (float)((ulong)uVar27 >> 0x20) * fVar36 +
               (float)((ulong)uVar33 >> 0x20) * fVar41 + fVar13;
      *(ulong *)(pfVar6 + uVar5 + 2) = CONCAT44(fVar41,fVar40);
      *(ulong *)(pfVar6 + uVar5) =
           CONCAT44(fVar38 * (float)((ulong)uVar20 >> 0x20) +
                    (float)((ulong)uVar28 >> 0x20) * fVar17 +
                    (float)((ulong)uVar30 >> 0x20) * fVar16 +
                    (float)((ulong)uVar22 >> 0x20) * fVar14 +
                    (float)((ulong)uVar24 >> 0x20) * fVar38 +
                    (float)((ulong)uVar26 >> 0x20) * fVar36 + fVar11 + fVar12,
                    fVar36 * (float)uVar20 + (float)uVar28 * fVar17 + (float)uVar30 * fVar16 +
                    (float)uVar22 * fVar14 + (float)uVar24 * fVar38 + (float)uVar26 * fVar36 + fVar9
                    + fVar10);
      uVar5 = (ulong)uVar1;
      fVar16 = fVar14;
      fVar17 = fVar19;
    } while (uVar1 < uVar4);
  }
  *param_1 = CONCAT44(fVar14,fVar19);
  param_1[1] = CONCAT44(fVar40,fVar41);
  uVar4 = param_4;
  if (uVar2 != 0) {
    memset(pfVar6 + param_4,0,(ulong)((4 - uVar2) * 4));
    uVar4 = (4 - uVar2) + param_4;
  }
  fVar14 = (float)((ulong)*param_2 >> 0x20);
  fVar19 = (float)*param_2;
  fVar41 = (float)param_2[1];
  fVar40 = (float)((ulong)param_2[1] >> 0x20);
  if (uVar4 != 0) {
    uVar21 = param_2[3];
    uVar20 = param_2[2];
    uVar23 = param_2[5];
    uVar22 = param_2[4];
    uVar25 = param_2[7];
    uVar24 = param_2[6];
    uVar27 = param_2[9];
    uVar26 = param_2[8];
    uVar29 = param_2[0xb];
    uVar28 = param_2[10];
    uVar31 = param_2[0xd];
    uVar30 = param_2[0xc];
    uVar33 = param_2[0xf];
    uVar32 = param_2[0xe];
    uVar35 = param_2[0x11];
    uVar34 = param_2[0x10];
    uVar5 = 0;
    fVar16 = fVar14;
    fVar17 = fVar19;
    do {
      uVar2 = (int)uVar5 + 4;
      uVar39 = *(undefined8 *)(pfVar6 + uVar5 + 2);
      uVar37 = *(undefined8 *)(pfVar6 + uVar5);
      fVar36 = (float)uVar37;
      fVar38 = (float)((ulong)uVar37 >> 0x20);
      fVar14 = (float)uVar39;
      fVar19 = (float)((ulong)uVar39 >> 0x20);
      fVar9 = (float)uVar32 * fVar41;
      fVar11 = (float)((ulong)uVar32 >> 0x20) * fVar41;
      fVar10 = (float)uVar34 * fVar40;
      fVar12 = (float)((ulong)uVar34 >> 0x20) * fVar40;
      fVar13 = (float)((ulong)uVar35 >> 0x20) * fVar40;
      fVar40 = fVar14 * (float)uVar21 + (float)uVar29 * fVar17 + (float)uVar31 * fVar16 +
               (float)uVar23 * fVar14 + (float)uVar25 * fVar38 + (float)uVar27 * fVar36 +
               (float)uVar33 * fVar41 + (float)uVar35 * fVar40;
      fVar41 = fVar19 * (float)((ulong)uVar21 >> 0x20) + (float)((ulong)uVar29 >> 0x20) * fVar17 +
               (float)((ulong)uVar31 >> 0x20) * fVar16 + (float)((ulong)uVar23 >> 0x20) * fVar14 +
               (float)((ulong)uVar25 >> 0x20) * fVar38 + (float)((ulong)uVar27 >> 0x20) * fVar36 +
               (float)((ulong)uVar33 >> 0x20) * fVar41 + fVar13;
      *(ulong *)(pfVar6 + uVar5 + 2) = CONCAT44(fVar41,fVar40);
      *(ulong *)(pfVar6 + uVar5) =
           CONCAT44(fVar38 * (float)((ulong)uVar20 >> 0x20) +
                    (float)((ulong)uVar28 >> 0x20) * fVar17 +
                    (float)((ulong)uVar30 >> 0x20) * fVar16 +
                    (float)((ulong)uVar22 >> 0x20) * fVar14 +
                    (float)((ulong)uVar24 >> 0x20) * fVar38 +
                    (float)((ulong)uVar26 >> 0x20) * fVar36 + fVar11 + fVar12,
                    fVar36 * (float)uVar20 + (float)uVar28 * fVar17 + (float)uVar30 * fVar16 +
                    (float)uVar22 * fVar14 + (float)uVar24 * fVar38 + (float)uVar26 * fVar36 + fVar9
                    + fVar10);
      uVar5 = (ulong)uVar2;
      fVar16 = fVar14;
      fVar17 = fVar19;
    } while (uVar2 < uVar4);
  }
  param_2[1] = CONCAT44(fVar40,fVar41);
  fVar41 = 0.0;
  fVar40 = 0.0;
  fVar16 = 0.0;
  fVar17 = 0.0;
  *param_2 = CONCAT44(fVar14,fVar19);
  pfVar7 = pfVar6;
  do {
    pfVar8 = pfVar7 + 4;
    fVar41 = fVar41 + *pfVar7 * *pfVar7;
    fVar40 = fVar40 + pfVar7[1] * pfVar7[1];
    fVar16 = fVar16 + pfVar7[2] * pfVar7[2];
    fVar17 = fVar17 + pfVar7[3] * pfVar7[3];
    pfVar7 = pfVar8;
  } while (pfVar8 < pfVar6 + (ulong)(param_4 >> 2) * 4);
  auVar18._4_4_ = fVar40;
  auVar18._0_4_ = fVar41;
  auVar18._8_4_ = fVar16;
  auVar18._12_4_ = fVar17;
  auVar18 = NEON_rev64(auVar18,4);
  fVar16 = auVar18._8_4_ + fVar16;
  auVar15._0_4_ = fVar16 + auVar18._0_4_ + fVar41;
  auVar15._4_4_ = fVar16 + auVar18._4_4_ + fVar40;
  auVar15._8_4_ = fVar16 + fVar16;
  auVar15._12_4_ = fVar16 + auVar18._12_4_ + fVar17;
  return auVar15;
}


