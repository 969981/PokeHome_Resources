/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006be0f8; name: FUN_.text__006be0f8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__006be0f8(undefined1 param_1 [16],float param_2,long *param_3,long param_4,
                        uint param_5)

{
  byte bVar1;
  ushort uVar2;
  ulong uVar3;
  ulong *puVar4;
  long lVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 local_188;
  ulong local_180;
  long lStack_178;
  long local_170;
  long lStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  float local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  long local_f0;
  long lStack_e8;
  long local_e0;
  long lStack_d8;
  long local_d0;
  long lStack_c8;
  undefined8 *local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  long *local_a0;
  undefined8 *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_78 = 0x3f8000003f800000;
  uStack_58 = 0x3f8000003f800000;
  local_88 = 0;
  uStack_80 = 0x3f8000003f800000;
  uStack_68 = 0;
  local_70 = 0xff;
  uStack_48 = 0;
  local_60 = 0x3f80000000000000;
  local_50 = 0xff3f800000;
  local_98 = (undefined8 *)0x0;
  uStack_90 = 0;
  local_a8 = 0;
  local_a0 = (long *)0x0;
  local_b8 = (undefined8 *)0x0;
  uStack_b0 = 0;
  local_d0 = 0;
  lStack_c8 = 0;
  local_e0 = 0;
  lStack_d8 = 0;
  local_f0 = 0;
  lStack_e8 = 0;
  if ((*(byte *)((long)param_3 + 0x62) >> 1 & 1) == 0) {
    local_e0 = param_3[0x10];
    lStack_d8 = param_3[0x11];
    local_d0 = param_3[0x12];
    lStack_c8 = param_3[0x13];
    local_f0 = param_3[0xe];
    lStack_e8 = param_3[0xf];
    fVar7 = (float)FUN__text__006b2e38(param_3);
    lVar5 = param_3[0x27];
  }
  else {
    FUN__text__006c1910(&local_f0,param_4);
    fVar7 = *(float *)(param_3 + 10) * -0.5;
    param_2 = *(float *)((long)param_3 + 0x54) * 0.5;
    lVar5 = param_3[0x27];
  }
  if (lVar5 == 0) {
    bVar1 = *(byte *)((long)param_3 + 0x116);
    if ((bVar1 & 3) == 2) {
      fVar8 = *(float *)(param_3 + 10);
      uVar2 = *(ushort *)((long)param_3 + 0x114);
      bVar1 = bVar1 >> 2 & 3;
      if ((uVar2 & 0x1000) != 0) {
        bVar1 = 0;
      }
    }
    else {
      fVar8 = 0.0;
      if ((bVar1 & 3) == 0) {
        fVar8 = *(float *)(param_3 + 10) * 0.5;
      }
      uVar2 = *(ushort *)((long)param_3 + 0x114);
      bVar1 = bVar1 >> 2 & 3;
      if ((uVar2 & 0x1000) != 0) {
        bVar1 = 0;
      }
    }
    uVar6 = (uint)uVar2;
    if (bVar1 == 2) {
      fVar11 = *(float *)((long)param_3 + 0x54);
    }
    else {
      fVar11 = 0.0;
      if (bVar1 == 0) {
        fVar11 = *(float *)((long)param_3 + 0x54) * 0.5;
      }
    }
  }
  else {
    uVar6 = (uint)*(ushort *)((long)param_3 + 0x114);
    fVar11 = 0.0;
    fVar8 = 0.0;
  }
  fVar7 = fVar7 + fVar8;
  param_2 = param_2 - fVar11;
  local_128 = 0.0;
  local_140 = 0;
  local_138 = 0;
  uStack_130 = 0;
  fVar9 = (float)((ulong)local_e0 >> 0x20);
  fVar13 = (float)local_e0;
  fVar11 = (float)((ulong)local_f0 >> 0x20);
  fVar8 = (float)local_f0;
  fVar12 = (float)((ulong)local_d0 >> 0x20);
  fVar10 = (float)local_d0;
  local_f0 = CONCAT44(-fVar11,fVar8);
  local_e0 = CONCAT44(-fVar9,fVar13);
  local_d0 = CONCAT44(-fVar12,fVar10);
  lStack_d8 = CONCAT44((float)((ulong)lStack_d8 >> 0x20) + param_2 * fVar9 + fVar7 * fVar13,
                       (int)lStack_d8);
  lStack_c8 = CONCAT44((float)((ulong)lStack_c8 >> 0x20) + param_2 * fVar12 + fVar7 * fVar10,
                       (int)lStack_c8);
  lStack_e8 = CONCAT44((float)((ulong)lStack_e8 >> 0x20) + param_2 * fVar11 + fVar7 * fVar8,
                       (int)lStack_e8);
  local_98 = &local_120;
  local_a0 = &local_f0;
  if ((uVar6 >> 3 & 1) != 0) {
    local_128 = *(float *)((long)param_3 + 0x134) * *(float *)(param_3 + 0x1f);
    local_140 = *(undefined8 *)((long)param_3 + 300);
    local_138 = *(undefined8 *)((long)param_3 + 0x11c);
    uStack_130 = *(undefined8 *)((long)param_3 + 0x124);
    local_b8 = &local_140;
  }
  local_120 = _DAT_00724920;
  uStack_118 = uRam0000000000724928;
  uStack_110 = _DAT_00724ba0;
  uStack_108 = uRam0000000000724ba8;
  local_100 = _DAT_00724a00;
  uStack_f8 = uRam0000000000724a08;
  FUN__text__006bdef0(param_3,&local_b8);
  local_150 = 0;
  uStack_148 = 0;
  local_160 = 0;
  uStack_158 = 0;
  local_170 = 0;
  lStack_168 = 0;
  local_180 = 0;
  lStack_178 = 0;
  if ((*(byte *)((long)param_3 + 0x62) >> 1 & 1) == 0) {
    puVar4 = (ulong *)(param_4 + 0x10);
  }
  else {
    local_188 = 0;
    (**(code **)(*param_3 + 0x60))(param_3,&local_188);
    fVar8 = local_188._4_4_ * 0.5;
    fVar7 = (float)local_188 * -0.5;
    fVar13 = 1.0 / ((fVar8 - local_188._4_4_) - fVar8);
    fVar11 = 1.0 / (((float)local_188 + fVar7) - fVar7);
    local_180 = (ulong)(uint)(fVar11 + fVar11);
    local_170 = (ulong)(uint)(fVar13 + fVar13) << 0x20;
    lStack_178 = (ulong)(uint)-((fVar7 + (float)local_188 + fVar7) * fVar11) << 0x20;
    lStack_168 = (ulong)(uint)-((fVar8 + (fVar8 - local_188._4_4_)) * fVar13) << 0x20;
    uStack_158 = uRam0000000000724ae8;
    local_160 = _DAT_00724ae0;
    uStack_148 = uRam0000000000724938;
    local_150 = _DAT_00724930;
    uVar3 = FUN__text__006b316c(param_3);
    if ((uVar3 & 1) != 0) {
      local_70 = CONCAT71(local_70._1_7_,0xff);
    }
    uVar6 = (uint)*(ushort *)((long)param_3 + 0x114);
    puVar4 = &local_180;
  }
  FUN__text__0068ae20(param_3[0x29],puVar4,&local_b8,uVar6 >> 0xb & 1,uVar6 >> 0xc & 1,param_5 & 1);
  return;
}


