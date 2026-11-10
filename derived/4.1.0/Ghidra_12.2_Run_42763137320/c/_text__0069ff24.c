/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0069ff24; name: FUN_.text__0069ff24
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0069ff24(long param_1,long param_2,long param_3,uint param_4)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
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
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float fVar21;
  float fVar22;
  undefined4 uVar23;
  ulong local_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  local_50 = *(undefined8 *)(param_2 + 0x40);
  uStack_48 = *(undefined8 *)(param_2 + 0x48);
  local_80 = *(undefined8 *)(param_2 + 0x10);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  local_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  if ((param_4 & 1) != 0) {
    FUN__text__006b373c(param_1,param_3);
  }
  fVar8 = *(float *)(param_1 + 0x7c);
  fVar11 = *(float *)(param_1 + 0x8c);
  fVar14 = fVar8 - *(float *)(param_1 + 0x50) * 0.5;
  fVar18 = fVar11 - *(float *)(param_1 + 0x54) * 0.5;
  fVar13 = *(float *)(param_1 + 0x50) + fVar14;
  fVar12 = *(float *)(param_1 + 0x54) + fVar18;
  fVar21 = 1.0 / (fVar18 - fVar12);
  fVar9 = 1.0 / (fVar13 - fVar14);
  fVar22 = fVar21 + fVar21;
  fVar18 = -((fVar18 + fVar12) * fVar21);
  fVar12 = fVar9 + fVar9;
  fVar9 = -((fVar14 + fVar13) * fVar9);
  uVar23 = *(undefined4 *)(param_1 + 0x9c);
  local_c0 = (ulong)(uint)fVar12;
  uStack_98 = uRam0000000000724ae8;
  local_a0 = _DAT_00724ae0;
  uStack_88 = uRam0000000000724938;
  uStack_90 = _DAT_00724930;
  lStack_b0 = (ulong)(uint)fVar22 << 0x20;
  lStack_b8 = (ulong)(uint)fVar9 << 0x20;
  lStack_a8 = (ulong)(uint)fVar18 << 0x20;
  if ((*(byte *)(param_2 + 0x194) >> 3 & 1) != 0) {
    auVar19 = NEON_fmov(0xbf800000,4);
    fVar15 = fVar12 * 0.0 + 0.0;
    fVar16 = fVar22 * 0.0 + 0.0;
    fVar17 = fVar9 * 0.0 + fVar18 * 0.0;
    fVar13 = (float)_DAT_00724ae0;
    fVar14 = (float)((ulong)_DAT_00724ae0 >> 0x20);
    fVar21 = (float)uRam0000000000724ae8;
    fVar10 = (float)((ulong)uRam0000000000724ae8 >> 0x20);
    local_c0 = CONCAT44(fVar22 * 0.0 + 0.0 + fVar14 * 0.0 + 0.0,fVar12 + 0.0 + fVar13 * 0.0 + 0.0);
    lStack_b8 = CONCAT44(fVar9 + fVar18 * 0.0 + fVar10 * 0.0 + 0.0,fVar21 * 0.0 + 0.0 + 0.0);
    local_a0 = CONCAT44(fVar16 + fVar14 + 0.0,fVar15 + fVar13 + 0.0);
    uStack_98 = CONCAT44(fVar17 + fVar10 + 0.0,fVar21 + 0.0 + 0.0);
    auVar20._0_8_ =
         CONCAT44(auVar19._4_4_ * fVar22 + 0.0 + fVar14 * 0.0 + 0.0,
                  fVar12 * 0.0 + auVar19._0_4_ * 0.0 + fVar13 * 0.0 + 0.0);
    auVar20._8_4_ = auVar19._8_4_ * 0.0 + 0.0 + fVar21 * 0.0 + 0.0;
    auVar20._12_4_ = fVar9 * 0.0 + auVar19._12_4_ * fVar18 + fVar10 * 0.0 + 0.0;
    uStack_90 = CONCAT44(fVar16 + fVar14 * 0.0 + (float)((ulong)_DAT_00724930 >> 0x20),
                         fVar15 + fVar13 * 0.0 + (float)_DAT_00724930);
    uStack_88 = CONCAT44(fVar17 + fVar10 * 0.0 + (float)((ulong)uRam0000000000724938 >> 0x20),
                         fVar21 * 0.0 + 0.0 + (float)uRam0000000000724938);
    lStack_a8 = auVar20._8_8_;
    lStack_b0 = auVar20._0_8_;
  }
  FUN__text__0069de0c(param_2,&local_c0);
  uVar6 = uRam0000000000724ba8;
  uVar5 = _DAT_00724ba0;
  uVar4 = uRam0000000000724a08;
  uVar3 = _DAT_00724a00;
  uVar2 = _DAT_00724920;
  bVar1 = *(byte *)(param_1 + 0x58);
  uVar7 = (undefined4)uRam0000000000724928;
  *(byte *)(param_1 + 0x58) = bVar1 | 0x40;
  *(ulong *)(param_1 + 0x78) = CONCAT44(fVar8,uVar7);
  *(undefined8 *)(param_1 + 0x70) = uVar2;
  *(ulong *)(param_1 + 0x88) = CONCAT44(fVar11,(int)uVar6);
  *(undefined8 *)(param_1 + 0x80) = uVar5;
  *(ulong *)(param_1 + 0x98) = CONCAT44(uVar23,(int)uVar4);
  *(undefined8 *)(param_1 + 0x90) = uVar3;
  uVar23 = *(undefined4 *)(param_3 + 0x18);
  if ((bVar1 >> 1 & 1) == 0) {
    *(undefined4 *)(param_3 + 0x18) = 0x3f800000;
  }
  FUN__text__006b34b0(param_1,param_2,param_3,param_4 & 1);
  if ((*(byte *)(param_1 + 0x58) >> 1 & 1) == 0) {
    *(undefined4 *)(param_3 + 0x18) = uVar23;
  }
  FUN__text__0069de0c(param_2,&local_80);
  if (*(code **)(param_2 + 0x168) != (code *)0x0) {
    (**(code **)(param_2 + 0x168))(param_2,param_1,*(undefined8 *)(param_2 + 0x170));
  }
  return;
}


