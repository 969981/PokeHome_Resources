/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0050f4f0; name: FUN_.text__0050f4f0
 */


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN__text__0050f4f0(long param_1,long param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  long lStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  float local_100;
  float fStack_fc;
  float local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  long lStack_b8;
  undefined8 local_b0;
  float local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_84;
  
  *(undefined2 *)(param_1 + 0x76) = 0;
  if (*(int *)(param_1 + 0xa0) == 0) {
    uVar7 = FUN__text__00400f90(9,0,0x10);
    uVar8 = local_c8;
    uVar4 = local_d0;
    iVar3 = *(int *)(param_1 + 0xa0);
    *(undefined8 *)(param_1 + 0x28) = uVar7;
    uVar5 = local_d0._4_4_;
    uVar6 = local_c8._4_4_;
  }
  else {
    uVar9 = 0;
    uVar4 = local_d0;
    uVar8 = local_c8;
    do {
      local_c8 = uVar8;
      local_d0 = uVar4;
      uVar6 = local_c8._4_4_;
      uVar5 = local_d0._4_4_;
      *(short *)(param_1 + 0x76) = *(short *)(param_1 + 0x76) + 1;
      lVar10 = *(long *)(*(long *)(param_1 + 0x98) + uVar9 * 8);
      uVar4 = local_d0;
      local_d0._4_4_ = uVar5;
      uVar8 = local_c8;
      local_c8._4_4_ = uVar6;
      FUN__text__00516af0(lVar10);
      uVar8 = local_c8;
      uVar4 = local_d0;
      fVar13 = *(float *)(lVar10 + 0x28) + *(float *)(lVar10 + 0x1c);
      fVar14 = *(float *)(lVar10 + 0x2c) + *(float *)(lVar10 + 0x20);
      fVar15 = *(float *)(lVar10 + 0x30) + *(float *)(lVar10 + 0x24);
      if (SQRT(fVar13 * fVar13 + fVar14 * fVar14 + fVar15 * fVar15) <= 1.1920929e-07) {
        *(short *)(param_1 + 0x76) = *(short *)(param_1 + 0x76) + 1;
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < *(uint *)(param_1 + 0xa0));
    uVar7 = FUN__text__00400f90(9,(ulong)*(ushort *)(param_1 + 0x76) << 6,0x10);
    local_c8 = uVar8;
    local_d0 = uVar4;
    uVar8 = local_c8;
    uVar4 = local_d0;
    iVar3 = *(int *)(param_1 + 0xa0);
    *(undefined8 *)(param_1 + 0x28) = uVar7;
    uVar5 = local_d0._4_4_;
    uVar6 = local_c8._4_4_;
  }
  local_c8 = uVar8;
  local_d0 = uVar4;
  if (iVar3 != 0) {
    uVar9 = 0;
    uVar12 = 0;
    plVar1 = (long *)(param_2 + 8);
    do {
      local_c8._4_4_ = uVar6;
      local_d0._4_4_ = uVar5;
      uVar6 = local_c8._4_4_;
      uVar5 = local_d0._4_4_;
      lVar11 = *(long *)(*(long *)(param_1 + 0x98) + uVar9 * 8);
      lVar10 = *(long *)(param_1 + 0x28) + uVar12 * 0x40;
      local_100 = *(float *)(lVar11 + 0x28) + *(float *)(lVar11 + 0x1c);
      fStack_fc = *(float *)(lVar11 + 0x2c) + *(float *)(lVar11 + 0x20);
      local_f8 = *(float *)(lVar11 + 0x30) + *(float *)(lVar11 + 0x24);
      fVar14 = SQRT(local_100 * local_100 + fStack_fc * fStack_fc + local_f8 * local_f8);
      uVar4 = local_d0;
      local_d0._4_4_ = uVar5;
      uVar8 = local_c8;
      local_c8._4_4_ = uVar6;
      FUN__text__00516578(lVar10);
      uVar8 = local_c8;
      uVar4 = local_d0;
      *(undefined8 *)(lVar10 + 0x38) = 0;
      *(long *)(*(long *)(param_1 + 0x28) + uVar12 * 0x40 + 0x38) = lVar11;
      fVar13 = *(float *)(lVar11 + 0x50);
      lVar10 = *(long *)(lVar11 + 0x40);
      local_c8 = uVar8;
      if (fVar14 <= 1.1920929e-07) {
        fVar14 = fVar13;
        if ((lVar10 != 0) && (*(long *)(lVar10 + 0x38) != 0)) {
          fVar14 = (float)NEON_fminnm(fVar13,*(float *)(*(long *)(lVar10 + 0x38) + 0x14) / fVar13);
        }
        uVar8 = *(undefined8 *)(lVar11 + 0x1c);
        local_100 = (float)uVar8;
        fStack_fc = (float)((ulong)uVar8 >> 0x20);
        fStack_fc = fStack_fc * fVar14;
        local_100 = local_100 * fVar14;
        local_f8 = *(float *)(lVar11 + 0x24) * fVar14;
        local_168 = CONCAT44(local_168._4_4_,*(float *)(lVar11 + 0xc) - local_f8 * 0.5);
        local_170 = CONCAT44(*(float *)(lVar11 + 8) - fStack_fc * 0.5,
                             *(float *)(lVar11 + 4) - local_100 * 0.5);
        local_d8 = CONCAT44(*(float *)(lVar11 + 0x14) * fVar13,*(float *)(lVar11 + 0x10) * fVar13);
        local_d0._4_4_ = SUB84(uVar4,4);
        local_d0 = CONCAT44(local_d0._4_4_,*(float *)(lVar11 + 0x18) * fVar13);
        uVar5 = local_c8._4_4_;
        uVar4 = local_c8;
        local_c8._4_4_ = uVar5;
        FUN__text__00516598(&local_138,&local_170,&local_d8,&local_100);
        puVar2 = (undefined8 *)(*(long *)(param_1 + 0x28) + uVar12 * 0x40);
        puVar2[1] = uStack_130;
        puVar2[2] = local_128;
        *puVar2 = local_138;
        puVar2[5] = local_110;
        puVar2[6] = uStack_108;
        puVar2[3] = local_120;
        puVar2[4] = uStack_118;
        local_d8 = 0x7f7fffff7f7fffff;
        local_d0 = 0xff7fffff7f7fffff;
        local_d0._4_4_ = 0xff7fffff;
        lVar10 = *(long *)(param_1 + 0x28) + uVar12 * 0x40;
        local_c8 = 0xff7fffffff7fffff;
        local_c8._4_4_ = 0xff7fffff;
        FUN__text__005166c0(lVar10,&local_d8);
        uVar8 = local_c8;
        uVar4 = local_d0;
        local_b0 = local_d8;
        uStack_9c = local_c8._4_4_;
        local_d0._0_4_ = (undefined4)uVar4;
        local_a8 = (float)(undefined4)local_d0;
        uStack_a4 = local_d0._4_4_;
        uStack_a0 = (undefined4)uVar8;
        if (*plVar1 != 0) {
          local_168 = CONCAT44(local_d0._4_4_,(undefined4)local_d0);
          local_158 = 0;
          local_170 = local_d8;
          local_160 = CONCAT44(local_c8._4_4_,uStack_a0);
          local_f0 = CONCAT44(local_f0._4_4_,1);
          lStack_150 = lVar10;
          uVar5 = local_d0._4_4_;
          local_d0 = uVar4;
          uVar6 = local_c8._4_4_;
          local_c8 = uVar8;
          uVar4 = local_d0;
          local_d0._4_4_ = uVar5;
          uVar8 = local_c8;
          local_c8._4_4_ = uVar6;
          FUN__text__00513f40(param_2,&local_170,plVar1,0,&local_f0);
          uVar8 = local_c8;
          uVar4 = local_d0;
        }
        local_c8 = uVar8;
        local_d0 = uVar4;
        uVar6 = local_c8._4_4_;
        uVar5 = local_d0._4_4_;
        uVar12 = (ulong)((int)uVar12 + 1);
        lVar10 = *(long *)(param_1 + 0x28) + uVar12 * 0x40;
        uVar4 = local_d0;
        local_d0._4_4_ = uVar5;
        uVar8 = local_c8;
        local_c8._4_4_ = uVar6;
        FUN__text__00516578(lVar10);
        uVar4 = local_c8;
        *(undefined8 *)(lVar10 + 0x38) = 0;
        *(long *)(*(long *)(param_1 + 0x28) + uVar12 * 0x40 + 0x38) = lVar11;
        fVar15 = *(float *)(lVar11 + 0x10);
        fVar13 = *(float *)(lVar11 + 0x14);
        local_a8 = *(float *)(lVar11 + 0x18);
        fVar16 = local_a8 * *(float *)(lVar11 + 0x20) - fVar13 * *(float *)(lVar11 + 0x24);
        fVar17 = fVar15 * *(float *)(lVar11 + 0x24) - *(float *)(lVar11 + 0x1c) * local_a8;
        local_f8 = *(float *)(lVar11 + 0x1c) * fVar13 - fVar15 * *(float *)(lVar11 + 0x20);
        fVar18 = SQRT(fVar16 * fVar16 + fVar17 * fVar17 + local_f8 * local_f8);
        if (fVar18 == 0.0) {
          fVar16 = 0.0;
          fVar17 = 0.0;
          local_f8 = 0.0;
        }
        else {
          fVar18 = 1.0 / fVar18;
          fVar16 = fVar16 * fVar18;
          fVar17 = fVar17 * fVar18;
          local_f8 = local_f8 * fVar18;
        }
        fVar14 = fVar14 * 0.5;
        local_f8 = local_f8 * fVar14;
        _local_100 = CONCAT44(fVar17 * fVar14,fVar16 * fVar14);
        local_d0._4_4_ = SUB84(local_d0,4);
        local_d0 = CONCAT44(local_d0._4_4_,*(float *)(lVar11 + 0xc) - local_f8);
        fVar18 = *(float *)(lVar11 + 0x50);
        local_a8 = local_a8 * fVar18;
        local_d8 = CONCAT44(*(float *)(lVar11 + 8) - fVar17 * fVar14,
                            *(float *)(lVar11 + 4) - fVar16 * fVar14);
        local_b0 = CONCAT44(fVar13 * fVar18,fVar15 * fVar18);
        uVar5 = local_c8._4_4_;
        local_c8 = uVar4;
        uVar4 = local_c8;
        local_c8._4_4_ = uVar5;
        FUN__text__00516598(&local_170,&local_d8,&local_b0,&local_100);
        uVar8 = local_c8;
        uVar4 = local_d0;
        puVar2 = (undefined8 *)(*(long *)(param_1 + 0x28) + uVar12 * 0x40);
        puVar2[1] = local_168;
        puVar2[2] = local_160;
        *puVar2 = local_170;
        puVar2[5] = local_148;
        puVar2[6] = uStack_140;
        puVar2[3] = local_158;
        puVar2[4] = lStack_150;
        local_b0 = 0x7f7fffff7f7fffff;
        local_a8 = 3.4028235e+38;
        uStack_a4 = 0xff7fffff;
        lVar10 = *(long *)(param_1 + 0x28) + uVar12 * 0x40;
        uStack_a0 = 0xff7fffff;
        uStack_9c = 0xff7fffff;
        uVar5 = local_d0._4_4_;
        local_d0 = uVar4;
        uVar6 = local_c8._4_4_;
        local_c8 = uVar8;
        uVar4 = local_d0;
        local_d0._4_4_ = uVar5;
        uVar8 = local_c8;
        local_c8._4_4_ = uVar6;
        FUN__text__005166c0(lVar10,&local_b0);
        uVar8 = local_c8;
        uVar4 = local_d0;
        local_f0 = local_b0;
        local_e8 = local_a8;
        uStack_e0 = CONCAT44(uStack_e0._4_4_,uStack_a0);
        if (*plVar1 != 0) {
          local_c0 = 0;
          local_d8 = local_b0;
          local_d0._4_4_ = uStack_a4;
          local_c8._4_4_ = uStack_e0._4_4_;
          local_84 = 1;
          uVar5 = local_d0._4_4_;
          local_d0 = CONCAT44(uStack_a4,local_a8);
          uVar6 = local_c8._4_4_;
          local_c8 = uStack_e0;
          lStack_b8 = lVar10;
          uVar4 = local_d0;
          local_d0._4_4_ = uVar5;
          uVar8 = local_c8;
          local_c8._4_4_ = uVar6;
          FUN__text__00513f40(param_2,&local_d8,plVar1,0,&local_84);
          uVar8 = local_c8;
          uVar4 = local_d0;
        }
      }
      else {
        fVar15 = 0.0;
        if (((lVar10 != 0) && (*(long *)(lVar10 + 0x38) != 0)) &&
           (fVar15 = *(float *)(*(long *)(lVar10 + 0x38) + 0x14), fVar15 <= 0.0)) {
          fVar15 = 0.0;
        }
        if (((*(long *)(lVar11 + 0x48) != 0) &&
            (lVar10 = *(long *)(*(long *)(lVar11 + 0x48) + 0x38), lVar10 != 0)) &&
           (fVar16 = *(float *)(lVar10 + 0x14), fVar15 <= fVar16)) {
          fVar15 = fVar16;
        }
        local_170 = CONCAT44(*(float *)(lVar11 + 0x14) * fVar13,*(float *)(lVar11 + 0x10) * fVar13);
        fVar17 = (float)NEON_fminnm(fVar13,fVar15 / fVar13);
        fVar16 = fVar13;
        if (0.0 < fVar15) {
          fVar16 = fVar17;
        }
        fVar14 = 1.0 / fVar14;
        local_f8 = local_f8 * fVar16 * fVar14;
        _local_100 = CONCAT44(fStack_fc * fVar16 * fVar14,local_100 * fVar16 * fVar14);
        local_168 = CONCAT44(local_168._4_4_,*(float *)(lVar11 + 0x18) * fVar13);
        uVar5 = local_d0._4_4_;
        local_d0 = uVar4;
        uVar6 = local_c8._4_4_;
        uVar4 = local_d0;
        local_d0._4_4_ = uVar5;
        uVar8 = local_c8;
        local_c8._4_4_ = uVar6;
        FUN__text__00516598(&local_138,lVar11 + 4,&local_170,&local_100);
        puVar2 = (undefined8 *)(*(long *)(param_1 + 0x28) + uVar12 * 0x40);
        puVar2[1] = uStack_130;
        puVar2[2] = local_128;
        *puVar2 = local_138;
        puVar2[5] = local_110;
        puVar2[6] = uStack_108;
        puVar2[3] = local_120;
        puVar2[4] = uStack_118;
        local_d8 = 0x7f7fffff7f7fffff;
        local_d0 = 0xff7fffff7f7fffff;
        local_d0._4_4_ = 0xff7fffff;
        lVar10 = *(long *)(param_1 + 0x28) + uVar12 * 0x40;
        local_c8 = 0xff7fffffff7fffff;
        local_c8._4_4_ = 0xff7fffff;
        FUN__text__005166c0(lVar10,&local_d8);
        uVar8 = local_c8;
        uVar4 = local_d0;
        local_b0 = local_d8;
        uStack_9c = local_c8._4_4_;
        local_d0._0_4_ = (undefined4)uVar4;
        local_a8 = (float)(undefined4)local_d0;
        uStack_a4 = local_d0._4_4_;
        uStack_a0 = (undefined4)uVar8;
        if (*plVar1 != 0) {
          local_168 = CONCAT44(local_d0._4_4_,(undefined4)local_d0);
          local_158 = 0;
          local_170 = local_d8;
          local_160 = CONCAT44(local_c8._4_4_,uStack_a0);
          local_f0 = CONCAT44(local_f0._4_4_,1);
          lStack_150 = lVar10;
          uVar5 = local_d0._4_4_;
          local_d0 = uVar4;
          uVar6 = local_c8._4_4_;
          local_c8 = uVar8;
          uVar4 = local_d0;
          local_d0._4_4_ = uVar5;
          uVar8 = local_c8;
          local_c8._4_4_ = uVar6;
          FUN__text__00513f40(param_2,&local_170,plVar1,0,&local_f0);
          uVar8 = local_c8;
          uVar4 = local_d0;
        }
      }
      local_c8 = uVar8;
      local_d0 = uVar4;
      uVar6 = local_c8._4_4_;
      uVar5 = local_d0._4_4_;
      uVar9 = uVar9 + 1;
      uVar12 = (ulong)((int)uVar12 + 1);
    } while (uVar9 < *(uint *)(param_1 + 0xa0));
  }
  return;
}


