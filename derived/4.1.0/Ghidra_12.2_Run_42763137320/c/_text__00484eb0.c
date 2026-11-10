/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00484eb0; name: FUN_.text__00484eb0
 */


void FUN__text__00484eb0(float param_1,float *param_2,int param_3,float *param_4)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float *pfVar7;
  float fVar8;
  float fVar9;
  float *pfVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar17;
  float fVar18;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar24;
  float fVar25;
  undefined1 auVar23 [16];
  float fVar26;
  
  fVar13 = param_1 * -1.2732395 * ABS(param_1 * 3.1415927) + param_1 * 4.0;
  pfVar2 = param_2 + (uint)(param_3 << 2);
  fVar13 = 1.0 / (fVar13 + 0.0001 + (ABS(fVar13) * fVar13 - fVar13) * 0.225);
  do {
    fVar5 = *param_2;
    fVar6 = param_2[1];
    pfVar7 = param_2 + 2;
    pfVar3 = param_2 + 6;
    fVar20 = (float)*(undefined8 *)(param_2 + 4);
    fVar21 = (float)((ulong)*(undefined8 *)(param_2 + 4) >> 0x20);
    pfVar1 = param_2 + 8;
    pfVar4 = param_2 + 10;
    fVar8 = param_2[0xc];
    fVar9 = param_2[0xd];
    pfVar10 = param_2 + 0xe;
    param_2 = param_2 + 0x10;
    auVar15._4_4_ = (int)*(undefined8 *)pfVar3;
    auVar15._0_4_ = *pfVar7;
    auVar15._8_4_ = (int)*(undefined8 *)pfVar4;
    auVar15._12_4_ = *pfVar10;
    fVar11 = (float)*(undefined8 *)pfVar1;
    fVar12 = (float)((ulong)*(undefined8 *)pfVar1 >> 0x20);
    auVar16._8_4_ = 0xbf7fbe77;
    auVar16._0_8_ = 0xbf7fbe77bf7fbe77;
    auVar16._12_4_ = 0xbf7fbe77;
    auVar16 = NEON_fmax(auVar15,auVar16,4);
    fVar14 = auVar16._0_4_ + fVar13;
    fVar17 = auVar16._4_4_ + fVar13;
    fVar18 = auVar16._8_4_ + fVar13;
    fVar19 = auVar16._12_4_ + fVar13;
    auVar23._0_4_ = fVar14 * fVar14 + fVar5 * fVar5 + fVar6 * fVar6;
    auVar23._4_4_ = fVar17 * fVar17 + fVar20 * fVar20 + fVar21 * fVar21;
    auVar23._8_4_ = fVar18 * fVar18 + fVar11 * fVar11 + fVar12 * fVar12;
    auVar23._12_4_ = fVar19 * fVar19 + fVar8 * fVar8 + fVar9 * fVar9;
    auVar16 = NEON_frsqrte(auVar23,4);
    fVar22 = auVar16._0_4_;
    fVar24 = auVar16._4_4_;
    fVar25 = auVar16._8_4_;
    fVar26 = auVar16._12_4_;
    *(ulong *)(param_4 + 10) = CONCAT44(fVar18 * fVar25,fVar18 * fVar25);
    *(ulong *)(param_4 + 8) = CONCAT44(fVar12 * fVar25,fVar25 * fVar11);
    param_4[0xe] = fVar19 * fVar26;
    param_4[0xf] = fVar19 * fVar26;
    param_4[0xc] = fVar26 * fVar8;
    param_4[0xd] = fVar9 * fVar26;
    param_4[2] = fVar14 * fVar22;
    param_4[3] = fVar14 * fVar22;
    *param_4 = fVar22 * fVar5;
    param_4[1] = fVar6 * fVar22;
    *(ulong *)(param_4 + 6) = CONCAT44(fVar17 * fVar24,fVar17 * fVar24);
    *(ulong *)(param_4 + 4) = CONCAT44(fVar21 * fVar24,fVar24 * fVar20);
    param_4 = param_4 + 0x10;
  } while (param_2 < pfVar2);
  return;
}


