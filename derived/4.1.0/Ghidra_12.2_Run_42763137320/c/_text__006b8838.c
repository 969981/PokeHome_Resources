/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006b8838; name: FUN_.text__006b8838
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN__text__006b8838(long *param_1,long param_2,uint param_3)

{
  ulong *puVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  long lVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  ulong uVar13;
  float fVar14;
  float __x;
  float local_f8;
  float fStack_f4;
  float local_f0;
  float fStack_ec;
  float local_e8;
  float fStack_e4;
  float local_e0;
  float fStack_dc;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  ulong uStack_a8;
  ulong local_a0;
  ulong uStack_98;
  ulong local_90;
  ulong uStack_88;
  float local_80;
  float fStack_7c;
  float local_78;
  float fStack_74;
  float local_70;
  float fStack_6c;
  float local_68;
  float fStack_64;
  
  local_c0 = 0;
  local_b8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  FUN__text__006b8bb0();
  lVar7 = param_1[0xb];
  if (param_3 == 2) {
    local_b8 = *(undefined8 *)(lVar7 + 100);
    uVar11 = *(undefined4 *)(lVar7 + 0x5c);
    uVar8 = *(undefined4 *)(lVar7 + 0x60);
    local_c8 = *(undefined8 *)(lVar7 + 0x4c);
    local_c0 = *(undefined8 *)(lVar7 + 0x54);
LAB__text__006b88e0:
    local_d0 = CONCAT44(uVar8,uVar11);
  }
  else {
    if (param_3 == 1) {
      local_b8 = *(undefined8 *)(lVar7 + 0x44);
      local_c8 = *(undefined8 *)(lVar7 + 0x34);
      local_c0 = *(undefined8 *)(lVar7 + 0x3c);
LAB__text__006b88d4:
      uVar11 = 0;
      uVar8 = 0;
      goto LAB__text__006b88e0;
    }
    if (param_3 == 0) {
      local_c8 = *(undefined8 *)(lVar7 + 0x24);
      local_c0 = *(undefined8 *)(lVar7 + 0x2c);
      local_b8 = CONCAT44(*(undefined4 *)(lVar7 + 0x20),0x42c80000);
      goto LAB__text__006b88d4;
    }
  }
  local_d8 = 0;
  (**(code **)(*(long *)*param_1 + 0x60))((long *)*param_1,&local_d8);
  lVar7 = param_1[0xb];
  fVar14 = (float)NEON_ucvtf((uint)*(byte *)(lVar7 + 0xc));
  local_e0 = (float)local_d8 + fVar14 * 2.0;
  fStack_dc = local_d8._4_4_ + fVar14 * 2.0;
  if ((((*(byte *)(param_1 + 0x45) >> 2 & 1) == 0) && ((*(byte *)(lVar7 + 8) >> 5 & 1) != 0)) &&
     ((char)param_1[0x13] != '\0')) {
    iVar6 = 0;
    fVar14 = local_d8._4_4_;
  }
  else {
    local_f0 = local_e0 / (float)local_d8;
    lVar7 = (ulong)param_3 * 4;
    local_e8 = local_e0 * -0.5;
    fStack_e4 = fStack_dc * 0.5;
    puVar1 = (ulong *)(*(long *)(*(long *)(param_2 + 200) + 0x38) +
                      (long)*(int *)((long)param_1 + lVar7 + 0x9c));
    fStack_ec = fStack_dc / local_d8._4_4_;
    local_f8 = (local_f0 + -1.0) * 0.5;
    fStack_f4 = (fStack_ec + -1.0) * 0.5;
    local_80 = 0.0 - local_f8;
    fStack_7c = 0.0 - fStack_f4;
    local_78 = local_f8 + 1.0;
    fStack_6c = fStack_f4 + 1.0;
    fStack_74 = fStack_7c;
    local_70 = local_80;
    local_68 = local_78;
    fStack_64 = fStack_6c;
    FUN__text__0069d960(param_2,puVar1,&local_e8,&local_e0,1,&local_80);
    local_90 = 0;
    uStack_88 = 0;
    local_a0 = 0;
    uStack_98 = 0;
    local_b0 = 0;
    uStack_a8 = 0;
    fVar12 = fStack_e4 + (fStack_e4 - fStack_dc);
    fVar14 = local_e8 + local_e8 + local_e0;
    fVar10 = 1.0 / ((fStack_e4 - fStack_dc) - fStack_e4);
    fVar9 = 1.0 / ((local_e8 + local_e0) - local_e8);
    FUN__text__006c1910(&local_b0,param_2);
    puVar1[1] = (ulong)(uint)-(fVar14 * fVar9) << 0x20;
    *puVar1 = (ulong)(uint)(fVar9 + fVar9);
    puVar1[3] = (ulong)(uint)-(fVar12 * fVar10) << 0x20;
    puVar1[2] = (ulong)(uint)(fVar10 + fVar10) << 0x20;
    uVar5 = _DAT_00724ae0;
    uVar4 = uRam0000000000724938;
    uVar13 = _DAT_00724930;
    puVar1[5] = uRam0000000000724ae8;
    puVar1[4] = uVar5;
    puVar1[7] = uVar4;
    puVar1[6] = uVar13;
    puVar1[0xd] = uStack_88;
    puVar1[0xc] = local_90;
    puVar1[9] = uStack_a8;
    puVar1[8] = local_b0;
    puVar1[0xb] = uStack_98;
    puVar1[10] = local_a0;
    uVar13 = local_a0;
    FUN__text__006b85e0(param_1,param_2,*(undefined4 *)((long)param_1 + lVar7 + 0xa8),&local_d0,
                        &local_e8,&local_e0,&local_f0,&local_f8);
    fVar14 = (float)uVar13;
    iVar6 = FUN__text__006b8060(param_1,param_2,*(undefined4 *)((long)param_1 + lVar7 + 0xc0),
                                &local_d0);
    lVar7 = param_1[0xb];
    if (lVar7 == 0) goto LAB__text__006b8b74;
  }
  if (((*(byte *)(param_1 + 0x45) >> 2 & 1) == 0) && ((*(byte *)(lVar7 + 8) >> 5 & 1) != 0)) {
    iVar2 = *(int *)((long)param_1 + (ulong)param_3 * 4 + 0xb4);
    lVar7 = *(long *)(*(long *)(param_2 + 200) + 0x38);
    fVar9 = (float)FUN__text__006b7a20(param_1,&local_e0);
    fVar12 = local_d0._4_4_;
    local_b0._0_4_ = fVar9;
    local_b0._4_4_ = fVar14;
    if (0.0 < local_d0._4_4_) {
      __x = (float)local_d0 * (*_DAT_008a02c8 / *_DAT_008a02d0);
      fVar10 = cosf(__x);
      local_b0 = CONCAT44(local_b0._4_4_,fVar9 - fVar12 * fVar10);
      fVar9 = sinf(__x);
      local_b0._4_4_ = fVar14 - fVar12 * fVar9;
    }
    lVar7 = lVar7 + iVar2;
    fVar14 = (float)NEON_ucvtf((uint)*(byte *)(*param_1 + 0x5a));
    *(float *)(lVar7 + 0xdc) = (fVar14 / 255.0) / 255.0;
    FUN__text__0069d960(param_2,lVar7,&local_b0,&local_e0,1,0x76636c);
  }
LAB__text__006b8b74:
  uVar3 = iVar6 - 1U >> 2;
  if (iVar6 < 1) {
    uVar3 = 0;
  }
  return uVar3;
}


