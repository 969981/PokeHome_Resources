/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0041f100; name: thunk_FUN_.text__004207a0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN__text__004207a0(float param_1,float param_2,long param_3,long param_4,uint param_5)

{
  uint uVar1;
  long lVar2;
  float *pfVar3;
  ulong uVar4;
  float *pfVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
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
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar35;
  float fVar36;
  undefined1 auVar34 [16];
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  undefined8 uVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  
  if (1.1920929e-07 <= ABS(param_2)) {
    fVar24 = param_1 + (float)_DAT_00724b40 * param_2;
    fVar25 = param_1 + (float)((ulong)_DAT_00724b40 >> 0x20) * param_2;
    fVar26 = param_1 + (float)uRam0000000000724b48 * param_2;
    fVar27 = param_1 + (float)((ulong)uRam0000000000724b48 >> 0x20) * param_2;
    if ((param_5 & 0xfffffff0) == 0) {
      uVar4 = 0;
      if (param_5 == 0) {
        return;
      }
    }
    else {
      auVar34 = NEON_fmov(0x41800000,4);
      uVar4 = 0;
      fVar33 = auVar34._0_4_ * param_2;
      fVar35 = auVar34._4_4_ * param_2;
      fVar36 = auVar34._8_4_ * param_2;
      fVar37 = auVar34._12_4_ * param_2;
      fVar38 = param_1 + (float)_DAT_00724a30 * param_2;
      fVar39 = param_1 + (float)((ulong)_DAT_00724a30 >> 0x20) * param_2;
      fVar40 = param_1 + (float)uRam0000000000724a38 * param_2;
      fVar42 = param_1 + (float)((ulong)uRam0000000000724a38 >> 0x20) * param_2;
      fVar43 = param_1 + (float)_DAT_00724840 * param_2;
      fVar44 = param_1 + (float)((ulong)_DAT_00724840 >> 0x20) * param_2;
      fVar45 = param_1 + (float)uRam0000000000724848 * param_2;
      fVar46 = param_1 + (float)((ulong)uRam0000000000724848 >> 0x20) * param_2;
      fVar30 = param_1 + (float)_DAT_00724850 * param_2;
      fVar31 = param_1 + (float)((ulong)_DAT_00724850 >> 0x20) * param_2;
      fVar32 = param_1 + (float)uRam0000000000724858 * param_2;
      param_1 = param_1 + (float)((ulong)uRam0000000000724858 >> 0x20) * param_2;
      puVar6 = (undefined8 *)(param_3 + 0x20);
      puVar7 = (undefined8 *)(param_4 + 0x20);
      do {
        uVar4 = uVar4 + 0x10;
        fVar8 = fVar30 * (float)puVar6[-2];
        fVar12 = fVar31 * (float)((ulong)puVar6[-2] >> 0x20);
        fVar16 = fVar32 * (float)puVar6[-1];
        fVar20 = param_1 * (float)((ulong)puVar6[-1] >> 0x20);
        fVar30 = fVar30 + fVar33;
        fVar31 = fVar31 + fVar35;
        fVar32 = fVar32 + fVar36;
        param_1 = param_1 + fVar37;
        fVar9 = fVar24 * (float)puVar6[-4];
        fVar13 = fVar25 * (float)((ulong)puVar6[-4] >> 0x20);
        fVar17 = fVar26 * (float)puVar6[-3];
        fVar21 = fVar27 * (float)((ulong)puVar6[-3] >> 0x20);
        fVar24 = fVar24 + fVar33;
        fVar25 = fVar25 + fVar35;
        fVar26 = fVar26 + fVar36;
        fVar27 = fVar27 + fVar37;
        fVar10 = fVar43 * (float)*puVar6;
        fVar14 = fVar44 * (float)((ulong)*puVar6 >> 0x20);
        fVar18 = fVar45 * (float)puVar6[1];
        fVar22 = fVar46 * (float)((ulong)puVar6[1] >> 0x20);
        fVar11 = fVar38 * (float)puVar6[2];
        fVar15 = fVar39 * (float)((ulong)puVar6[2] >> 0x20);
        fVar19 = fVar40 * (float)puVar6[3];
        fVar23 = fVar42 * (float)((ulong)puVar6[3] >> 0x20);
        fVar43 = fVar43 + fVar33;
        fVar44 = fVar44 + fVar35;
        fVar45 = fVar45 + fVar36;
        fVar46 = fVar46 + fVar37;
        fVar38 = fVar38 + fVar33;
        fVar39 = fVar39 + fVar35;
        fVar40 = fVar40 + fVar36;
        fVar42 = fVar42 + fVar37;
        puVar7[-3] = CONCAT44((float)((ulong)puVar7[-3] >> 0x20) + fVar21,(float)puVar7[-3] + fVar17
                             );
        puVar7[-4] = CONCAT44((float)((ulong)puVar7[-4] >> 0x20) + fVar13,(float)puVar7[-4] + fVar9)
        ;
        puVar7[-1] = CONCAT44((float)((ulong)puVar7[-1] >> 0x20) + fVar20,(float)puVar7[-1] + fVar16
                             );
        puVar7[-2] = CONCAT44((float)((ulong)puVar7[-2] >> 0x20) + fVar12,(float)puVar7[-2] + fVar8)
        ;
        puVar7[1] = CONCAT44((float)((ulong)puVar7[1] >> 0x20) + fVar22,(float)puVar7[1] + fVar18);
        *puVar7 = CONCAT44((float)((ulong)*puVar7 >> 0x20) + fVar14,(float)*puVar7 + fVar10);
        puVar7[3] = CONCAT44((float)((ulong)puVar7[3] >> 0x20) + fVar23,(float)puVar7[3] + fVar19);
        puVar7[2] = CONCAT44((float)((ulong)puVar7[2] >> 0x20) + fVar15,(float)puVar7[2] + fVar11);
        puVar6 = puVar6 + 8;
        puVar7 = puVar7 + 8;
      } while (uVar4 < (param_5 & 0xfffffff0));
      if (param_5 <= (uint)uVar4) {
        return;
      }
    }
    auVar34 = NEON_fmov(0x40800000,4);
    do {
      lVar2 = (uVar4 & 0xffffffff) * 4;
      uVar1 = (int)uVar4 + 4;
      uVar4 = (ulong)uVar1;
      pfVar5 = (float *)(param_3 + lVar2);
      pfVar3 = (float *)(param_4 + lVar2);
      fVar30 = *pfVar3;
      fVar31 = pfVar3[1];
      fVar32 = fVar24 * *pfVar5;
      fVar33 = fVar25 * pfVar5[1];
      fVar35 = fVar26 * pfVar5[2];
      fVar36 = fVar27 * pfVar5[3];
      fVar24 = fVar24 + auVar34._0_4_ * param_2;
      fVar25 = fVar25 + auVar34._4_4_ * param_2;
      fVar26 = fVar26 + auVar34._8_4_ * param_2;
      fVar27 = fVar27 + auVar34._12_4_ * param_2;
      pfVar5 = (float *)(param_4 + lVar2);
      pfVar5[2] = pfVar3[2] + fVar35;
      pfVar5[3] = pfVar3[3] + fVar36;
      *pfVar5 = fVar30 + fVar32;
      pfVar5[1] = fVar31 + fVar33;
    } while (uVar1 < param_5);
  }
  else if (1.1920929e-07 <= ABS(param_1)) {
    if ((param_5 & 0xfffffff0) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = 0;
      pfVar5 = (float *)(param_3 + 0x20);
      puVar6 = (undefined8 *)(param_4 + 0x20);
      do {
        uVar28 = *(undefined8 *)(pfVar5 + -8);
        fVar24 = pfVar5[-4];
        fVar25 = pfVar5[-3];
        fVar26 = pfVar5[-2];
        fVar27 = pfVar5[-1];
        uVar4 = uVar4 + 0x10;
        fVar30 = *pfVar5;
        fVar31 = pfVar5[1];
        fVar32 = pfVar5[2];
        fVar33 = pfVar5[3];
        uVar41 = *(undefined8 *)(pfVar5 + 6);
        uVar29 = *(undefined8 *)(pfVar5 + 4);
        puVar6[-3] = CONCAT44((float)((ulong)puVar6[-3] >> 0x20) +
                              (float)((ulong)*(undefined8 *)(pfVar5 + -6) >> 0x20) * param_1,
                              (float)puVar6[-3] + (float)*(undefined8 *)(pfVar5 + -6) * param_1);
        puVar6[-4] = CONCAT44((float)((ulong)puVar6[-4] >> 0x20) +
                              (float)((ulong)uVar28 >> 0x20) * param_1,
                              (float)puVar6[-4] + (float)uVar28 * param_1);
        puVar6[-1] = CONCAT44((float)((ulong)puVar6[-1] >> 0x20) + fVar27 * param_1,
                              (float)puVar6[-1] + fVar26 * param_1);
        puVar6[-2] = CONCAT44((float)((ulong)puVar6[-2] >> 0x20) + fVar25 * param_1,
                              (float)puVar6[-2] + fVar24 * param_1);
        puVar6[1] = CONCAT44((float)((ulong)puVar6[1] >> 0x20) + fVar33 * param_1,
                             (float)puVar6[1] + fVar32 * param_1);
        *puVar6 = CONCAT44((float)((ulong)*puVar6 >> 0x20) + fVar31 * param_1,
                           (float)*puVar6 + fVar30 * param_1);
        *(float *)(puVar6 + 3) = *(float *)(puVar6 + 3) + (float)uVar41 * param_1;
        *(float *)((long)puVar6 + 0x1c) =
             *(float *)((long)puVar6 + 0x1c) + (float)((ulong)uVar41 >> 0x20) * param_1;
        *(float *)(puVar6 + 2) = *(float *)(puVar6 + 2) + (float)uVar29 * param_1;
        *(float *)((long)puVar6 + 0x14) =
             *(float *)((long)puVar6 + 0x14) + (float)((ulong)uVar29 >> 0x20) * param_1;
        pfVar5 = pfVar5 + 0x10;
        puVar6 = puVar6 + 8;
      } while (uVar4 < (param_5 & 0xfffffff0));
    }
    for (; (uint)uVar4 < param_5; uVar4 = (ulong)((uint)uVar4 + 4)) {
      lVar2 = (uVar4 & 0xffffffff) * 4;
      uVar29 = ((undefined8 *)(param_3 + lVar2))[1];
      uVar28 = *(undefined8 *)(param_3 + lVar2);
      pfVar5 = (float *)(param_4 + lVar2);
      fVar24 = *pfVar5;
      fVar25 = pfVar5[1];
      pfVar3 = (float *)(param_4 + lVar2);
      pfVar3[2] = pfVar5[2] + (float)uVar29 * param_1;
      pfVar3[3] = pfVar5[3] + (float)((ulong)uVar29 >> 0x20) * param_1;
      *pfVar3 = fVar24 + (float)uVar28 * param_1;
      pfVar3[1] = fVar25 + (float)((ulong)uVar28 >> 0x20) * param_1;
    }
  }
  return;
}


