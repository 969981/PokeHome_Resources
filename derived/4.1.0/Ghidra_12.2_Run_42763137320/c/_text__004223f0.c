/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004223f0; name: FUN_.text__004223f0
 */


void FUN__text__004223f0(long param_1,long param_2,long param_3,undefined8 param_4,long param_5,
                        long param_6,long param_7,uint *param_8,uint param_9,uint param_10,
                        undefined4 param_11)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  uint uVar11;
  long local_180 [4];
  long local_160;
  long local_158;
  uint *local_150;
  ulong local_148;
  undefined4 local_13c;
  long local_138;
  undefined8 local_130;
  long *local_128;
  long lStack_120;
  long local_118;
  long lStack_110;
  long local_108;
  long lStack_100;
  long local_f8;
  long lStack_f0;
  long local_e8;
  long lStack_e0;
  long local_d8;
  long lStack_d0;
  long local_c8;
  long lStack_c0;
  long local_b8;
  long lStack_b0;
  long *local_a8;
  long lStack_a0;
  long local_98;
  long lStack_90;
  long local_88;
  long lStack_80;
  long local_78;
  long lStack_70;
  
  local_180[3] = (long)param_9;
  if (param_9 == 0) {
    uVar11 = 0;
  }
  else {
    uVar3 = local_180[3] & 3;
    if (param_9 < 4) {
      lVar5 = 0;
      uVar11 = 0;
    }
    else {
      lVar5 = 0;
      uVar11 = 0;
      puVar6 = param_8 + 2;
      do {
        lVar5 = lVar5 + -4;
        uVar11 = puVar6[1] + *puVar6 + puVar6[-1] + puVar6[-2] + uVar11;
        puVar6 = puVar6 + 4;
      } while (-lVar5 != (local_180[3] & 0xfffffffcU));
      lVar5 = -lVar5;
    }
    if ((param_9 & 3) != 0) {
      puVar6 = param_8 + lVar5;
      do {
        uVar3 = uVar3 - 1;
        uVar11 = *puVar6 + uVar11;
        puVar6 = puVar6 + 1;
      } while (uVar3 != 0);
    }
  }
  local_a8 = local_180 + (ulong)uVar11 * -4;
  lStack_a0 = (long)local_a8 + (ulong)uVar11 * 4;
  local_98 = (long)local_a8 + (ulong)(uVar11 * 2) * 4;
  lStack_90 = (long)local_a8 + (ulong)(uVar11 * 3) * 4;
  local_88 = (long)local_a8 + (ulong)(uVar11 * 4) * 4;
  lStack_80 = (long)local_a8 + (ulong)(uVar11 * 5) * 4;
  local_78 = (long)local_a8 + (ulong)(uVar11 * 6) * 4;
  lStack_70 = (long)local_a8 + (ulong)(uVar11 * 7) * 4;
  if (param_10 != 0) {
    local_13c = param_11;
    local_160 = param_2;
    local_158 = param_3;
    local_150 = param_8;
    local_138 = param_1;
    local_130 = param_4;
    if (param_9 == 1) {
      uVar3 = 0;
      uVar8 = param_10;
      do {
        uVar7 = uVar8 - 8;
        lVar5 = uVar3 * 8;
        if (7 < uVar8) {
          uVar8 = 8;
        }
        FUN__text__00420ee0(local_138 + lVar5,&local_a8,local_160 + lVar5,local_158 + lVar5,
                            *local_150,uVar8);
        FUN__text__00420400(&local_a8,local_130,param_5 + lVar5,param_6 + lVar5,param_7 + lVar5,
                            uVar11,uVar8,local_13c);
        uVar1 = (int)uVar3 + 8;
        uVar3 = (ulong)uVar1;
        uVar8 = uVar7;
      } while (uVar1 < param_10);
    }
    else {
      uVar8 = 0;
      local_180[0] = param_5;
      local_180[1] = param_6;
      local_180[2] = param_7;
      do {
        lVar5 = local_180[3];
        uVar7 = param_10 - uVar8;
        uVar3 = (ulong)uVar8;
        if (7 < uVar7) {
          uVar7 = 8;
        }
        memcpy(&local_e8,(void *)(local_138 + (ulong)uVar8 * 8),(ulong)(uVar7 << 3));
        lVar9 = uVar3 * 8;
        local_108 = local_88;
        lStack_100 = lStack_80;
        local_f8 = local_78;
        lStack_f0 = lStack_70;
        local_128 = local_a8;
        lStack_120 = lStack_a0;
        local_118 = local_98;
        lStack_110 = lStack_90;
        local_148 = uVar3;
        if ((int)lVar5 != 0) {
          uVar10 = 0;
          lVar5 = local_160 + lVar9;
          lVar2 = local_158 + lVar9;
          puVar6 = local_150;
          uVar3 = local_180[3];
          do {
            uVar8 = *puVar6;
            FUN__text__00420ee0(&local_e8,&local_128,lVar5 + uVar10 * 8,lVar2,(ulong)uVar8,uVar7);
            lVar4 = (ulong)uVar8 * 4;
            uVar10 = (ulong)((int)uVar10 + param_10);
            uVar3 = uVar3 - 1;
            local_e8 = local_e8 + lVar4;
            lStack_e0 = lStack_e0 + lVar4;
            local_128 = (long *)((long)local_128 + lVar4);
            lStack_120 = lStack_120 + lVar4;
            local_d8 = local_d8 + lVar4;
            lStack_d0 = lStack_d0 + lVar4;
            local_118 = local_118 + lVar4;
            lStack_110 = lStack_110 + lVar4;
            local_c8 = local_c8 + lVar4;
            lStack_c0 = lStack_c0 + lVar4;
            local_108 = local_108 + lVar4;
            lStack_100 = lStack_100 + lVar4;
            local_b8 = local_b8 + lVar4;
            lStack_b0 = lStack_b0 + lVar4;
            local_f8 = local_f8 + lVar4;
            lStack_f0 = lStack_f0 + lVar4;
            puVar6 = puVar6 + 1;
          } while (uVar3 != 0);
        }
        FUN__text__00420400(&local_a8,local_130,local_180[0] + lVar9,local_180[1] + lVar9,
                            local_180[2] + lVar9,uVar11,uVar7,local_13c);
        uVar8 = (int)local_148 + 8;
      } while (uVar8 < param_10);
    }
  }
  return;
}


