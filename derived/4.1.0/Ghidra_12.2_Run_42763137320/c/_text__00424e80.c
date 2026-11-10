/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00424e80; name: FUN_.text__00424e80
 */


void FUN__text__00424e80(long param_1,long param_2,long param_3,long param_4,long param_5,
                        undefined8 param_6,long param_7,long param_8,long param_9,uint *param_10,
                        uint param_11,uint param_12,undefined4 param_13)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  undefined1 auStack_1a0 [8];
  long local_198;
  undefined8 local_190;
  long local_188;
  long local_180;
  ulong local_178;
  long local_170;
  long local_168;
  long local_160;
  long local_158;
  uint *local_150;
  ulong local_148;
  long local_140;
  undefined4 local_138;
  uint uStack_134;
  long local_130;
  undefined1 *local_128;
  undefined1 *puStack_120;
  undefined1 *local_118;
  undefined1 *puStack_110;
  undefined1 *local_108;
  undefined1 *puStack_100;
  undefined1 *local_f8;
  undefined1 *puStack_f0;
  long local_e8;
  long lStack_e0;
  long local_d8;
  long lStack_d0;
  long local_c8;
  long lStack_c0;
  long local_b8;
  long lStack_b0;
  undefined1 *local_a8;
  undefined1 *puStack_a0;
  undefined1 *local_98;
  undefined1 *puStack_90;
  undefined1 *local_88;
  undefined1 *puStack_80;
  undefined1 *local_78;
  undefined1 *puStack_70;
  
  local_178 = (ulong)param_11;
  local_150 = param_10;
  if (param_11 == 0) {
    uStack_134 = 0;
  }
  else {
    uVar5 = local_178 & 3;
    if (param_11 < 4) {
      lVar7 = 0;
      uStack_134 = 0;
    }
    else {
      lVar7 = 0;
      uStack_134 = 0;
      puVar8 = param_10 + 2;
      do {
        lVar7 = lVar7 + -4;
        uStack_134 = puVar8[1] + *puVar8 + puVar8[-1] + puVar8[-2] + uStack_134;
        puVar8 = puVar8 + 4;
      } while (-lVar7 != (local_178 & 0xfffffffc));
      lVar7 = -lVar7;
    }
    if ((param_11 & 3) != 0) {
      puVar8 = param_10 + lVar7;
      do {
        uVar5 = uVar5 - 1;
        uStack_134 = *puVar8 + uStack_134;
        puVar8 = puVar8 + 1;
      } while (uVar5 != 0);
    }
  }
  local_a8 = auStack_1a0 + (ulong)uStack_134 * -0x20;
  puStack_a0 = local_a8 + (ulong)uStack_134 * 4;
  local_98 = local_a8 + (ulong)(uStack_134 * 2) * 4;
  puStack_90 = local_a8 + (ulong)(uStack_134 * 3) * 4;
  local_88 = local_a8 + (ulong)(uStack_134 * 4) * 4;
  puStack_80 = local_a8 + (ulong)(uStack_134 * 5) * 4;
  local_78 = local_a8 + (ulong)(uStack_134 * 6) * 4;
  puStack_70 = local_a8 + (ulong)(uStack_134 * 7) * 4;
  if (param_12 != 0) {
    local_138 = param_13;
    local_140 = param_9;
    local_170 = param_2;
    local_168 = param_3;
    local_160 = param_4;
    local_158 = param_5;
    if (param_11 == 1) {
      uVar5 = 0;
      uVar10 = param_12;
      do {
        uVar9 = uVar10 - 8;
        lVar7 = uVar5 * 8;
        if (7 < uVar10) {
          uVar10 = 8;
        }
        FUN__text__00422770(param_1 + lVar7,&local_a8,local_170 + lVar7,local_168 + lVar7,
                            local_160 + lVar7,local_158 + lVar7,*local_150,uVar10);
        FUN__text__00420400(&local_a8,param_6,param_7 + lVar7,param_8 + lVar7,local_140 + lVar7,
                            uStack_134,uVar10,local_138);
        uVar1 = (int)uVar5 + 8;
        uVar5 = (ulong)uVar1;
        uVar10 = uVar9;
      } while (uVar1 < param_12);
    }
    else {
      uVar10 = 0;
      local_198 = param_1;
      local_190 = param_6;
      local_188 = param_7;
      local_180 = param_8;
      do {
        uVar5 = local_178;
        uVar9 = param_12 - uVar10;
        uVar11 = (ulong)uVar10;
        if (7 < uVar9) {
          uVar9 = 8;
        }
        memcpy(&local_e8,(void *)(local_198 + (ulong)uVar10 * 8),(ulong)(uVar9 << 3));
        local_108 = local_88;
        puStack_100 = puStack_80;
        local_f8 = local_78;
        puStack_f0 = puStack_70;
        local_128 = local_a8;
        puStack_120 = puStack_a0;
        local_118 = local_98;
        puStack_110 = puStack_90;
        local_130 = uVar11 * 8;
        local_148 = uVar11;
        if ((int)uVar5 != 0) {
          uVar11 = 0;
          lVar7 = local_170 + local_130;
          lVar2 = local_168 + local_130;
          lVar3 = local_160 + local_130;
          lVar4 = local_158 + local_130;
          puVar8 = local_150;
          uVar5 = local_178;
          do {
            uVar10 = *puVar8;
            FUN__text__00422770(&local_e8,&local_128,lVar7 + uVar11 * 8,lVar2,lVar3 + uVar11 * 8,
                                lVar4,(ulong)uVar10,uVar9);
            lVar6 = (ulong)uVar10 * 4;
            uVar11 = (ulong)((int)uVar11 + param_12);
            uVar5 = uVar5 - 1;
            local_e8 = local_e8 + lVar6;
            lStack_e0 = lStack_e0 + lVar6;
            local_128 = local_128 + lVar6;
            puStack_120 = puStack_120 + lVar6;
            local_d8 = local_d8 + lVar6;
            lStack_d0 = lStack_d0 + lVar6;
            local_118 = local_118 + lVar6;
            puStack_110 = puStack_110 + lVar6;
            local_c8 = local_c8 + lVar6;
            lStack_c0 = lStack_c0 + lVar6;
            local_108 = local_108 + lVar6;
            puStack_100 = puStack_100 + lVar6;
            local_b8 = local_b8 + lVar6;
            lStack_b0 = lStack_b0 + lVar6;
            local_f8 = local_f8 + lVar6;
            puStack_f0 = puStack_f0 + lVar6;
            puVar8 = puVar8 + 1;
          } while (uVar5 != 0);
        }
        FUN__text__00420400(&local_a8,local_190,local_188 + local_130,local_180 + local_130,
                            local_140 + local_130,uStack_134,uVar9,local_138);
        uVar10 = (int)local_148 + 8;
      } while (uVar10 < param_12);
    }
  }
  return;
}


