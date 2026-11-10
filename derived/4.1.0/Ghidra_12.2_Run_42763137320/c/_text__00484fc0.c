/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00484fc0; name: FUN_.text__00484fc0
 */


void FUN__text__00484fc0(float param_1,undefined8 *param_2,int param_3,float *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  float fVar6;
  float fVar7;
  undefined8 *puVar8;
  float fVar9;
  float fVar10;
  undefined8 *puVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar17;
  float fVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float fVar21;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 auVar22 [16];
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined1 auVar34 [16];
  
  auVar16 = NEON_fmov(0x3f800000,4);
  fVar17 = 1.5707964 - param_1 * 1.5707964;
  auVar15 = NEON_fmov(0xbf800000,4);
  puVar1 = (undefined8 *)((long)param_2 + (ulong)(uint)(param_3 << 2) * 4);
  do {
    puVar2 = param_2 + 1;
    uVar4 = *param_2;
    fVar18 = (float)((ulong)uVar4 >> 0x20);
    fVar6 = *(float *)(param_2 + 2);
    fVar7 = *(float *)((long)param_2 + 0x14);
    puVar8 = param_2 + 3;
    puVar3 = param_2 + 5;
    fVar12 = *(float *)(param_2 + 4);
    fVar13 = *(float *)((long)param_2 + 0x24);
    fVar9 = *(float *)(param_2 + 6);
    fVar10 = *(float *)((long)param_2 + 0x34);
    puVar11 = param_2 + 7;
    param_2 = param_2 + 8;
    fVar14 = (float)uVar4;
    auVar19._4_4_ = *(undefined4 *)puVar8;
    auVar19._0_4_ = (int)*puVar2;
    auVar19._8_4_ = (int)*puVar3;
    auVar19._12_4_ = *(undefined4 *)puVar11;
    fVar21 = fVar14 * fVar14 + fVar18 * fVar18;
    fVar23 = fVar6 * fVar6 + fVar7 * fVar7;
    fVar24 = fVar12 * fVar12 + fVar13 * fVar13;
    fVar25 = fVar9 * fVar9 + fVar10 * fVar10;
    auVar20 = NEON_fmax(auVar19,auVar15,4);
    auVar34._0_4_ = -(uint)(auVar20._0_4_ < 0.0);
    auVar34._4_4_ = -(uint)(auVar20._4_4_ < 0.0);
    auVar34._8_4_ = -(uint)(auVar20._8_4_ < 0.0);
    auVar34._12_4_ = -(uint)(auVar20._12_4_ < 0.0);
    auVar5._4_4_ = -(uint)(0.0 <= fVar23 + -0.0001);
    auVar5._0_4_ = -(uint)(0.0 <= fVar21 + -0.0001);
    auVar5._8_4_ = -(uint)(0.0 <= fVar24 + -0.0001);
    auVar5._12_4_ = -(uint)(0.0 <= fVar25 + -0.0001);
    auVar20 = auVar20 ^ (auVar20 ^ auVar16 ^ (auVar16 ^ auVar15) & auVar34) & ~auVar5;
    fVar26 = auVar20._0_4_;
    fVar28 = auVar20._4_4_;
    fVar30 = auVar20._8_4_;
    fVar32 = auVar20._12_4_;
    fVar26 = fVar17 + (fVar26 * fVar26 * (fVar26 * fVar26 * 0.719088 + -0.35786) + 1.085865) *
                      fVar26 * param_1;
    fVar28 = fVar17 + (fVar28 * fVar28 * (fVar28 * fVar28 * 0.719088 + -0.35786) + 1.085865) *
                      fVar28 * param_1;
    fVar30 = fVar17 + (fVar30 * fVar30 * (fVar30 * fVar30 * 0.719088 + -0.35786) + 1.085865) *
                      fVar30 * param_1;
    fVar32 = fVar17 + (fVar32 * fVar32 * (fVar32 * fVar32 * 0.719088 + -0.35786) + 1.085865) *
                      fVar32 * param_1;
    fVar26 = (auVar16._0_4_ + fVar26 * fVar26 * (fVar26 * fVar26 * 0.00833216 + -0.16666655)) *
             fVar26;
    fVar28 = (auVar16._4_4_ + fVar28 * fVar28 * (fVar28 * fVar28 * 0.00833216 + -0.16666655)) *
             fVar28;
    fVar30 = (auVar16._8_4_ + fVar30 * fVar30 * (fVar30 * fVar30 * 0.00833216 + -0.16666655)) *
             fVar30;
    fVar32 = (auVar16._12_4_ + fVar32 * fVar32 * (fVar32 * fVar32 * 0.00833216 + -0.16666655)) *
             fVar32;
    fVar27 = auVar16._0_4_ - fVar26 * fVar26;
    fVar29 = auVar16._4_4_ - fVar28 * fVar28;
    fVar31 = auVar16._8_4_ - fVar30 * fVar30;
    fVar33 = auVar16._12_4_ - fVar32 * fVar32;
    auVar22._0_4_ = fVar27 * fVar21;
    auVar22._4_4_ = fVar29 * fVar23;
    auVar22._8_4_ = fVar31 * fVar24;
    auVar22._12_4_ = fVar33 * fVar25;
    auVar20._8_4_ = 0x38d1b717;
    auVar20._0_8_ = 0x38d1b71738d1b717;
    auVar20._12_4_ = 0x38d1b717;
    auVar20 = NEON_fmax(auVar22,auVar20,4);
    auVar20 = NEON_frsqrte(auVar20,4);
    fVar27 = fVar27 * auVar20._0_4_;
    fVar29 = fVar29 * auVar20._4_4_;
    fVar31 = fVar31 * auVar20._8_4_;
    fVar33 = fVar33 * auVar20._12_4_;
    *(ulong *)(param_4 + 10) = CONCAT44(fVar30,fVar30);
    *(ulong *)(param_4 + 8) = CONCAT44(fVar31 * fVar13,fVar31 * fVar12);
    param_4[0xe] = fVar32;
    param_4[0xf] = fVar32;
    param_4[0xc] = fVar33 * fVar9;
    param_4[0xd] = fVar33 * fVar10;
    param_4[2] = fVar26;
    param_4[3] = fVar26;
    *param_4 = fVar27 * fVar14;
    param_4[1] = fVar27 * fVar18;
    *(ulong *)(param_4 + 6) = CONCAT44(fVar28,fVar28);
    *(ulong *)(param_4 + 4) = CONCAT44(fVar29 * fVar7,fVar29 * fVar6);
    param_4 = param_4 + 0x10;
  } while (param_2 < puVar1);
  return;
}


