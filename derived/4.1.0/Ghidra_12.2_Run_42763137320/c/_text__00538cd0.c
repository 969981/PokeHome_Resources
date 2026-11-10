/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00538cd0; name: FUN_.text__00538cd0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN__text__00538cd0(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  int iVar2;
  undefined8 *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 *__dest;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  uint *puVar15;
  long lVar16;
  undefined8 *puVar17;
  float fVar18;
  long local_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 local_260;
  undefined4 local_258;
  undefined8 local_250;
  void *local_248;
  ulong local_240;
  undefined8 local_238;
  undefined4 local_230 [2];
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined4 local_100;
  long local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  long local_c8;
  ulong local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  plVar14 = *(long **)(param_3 + 0x18);
  lVar16 = *plVar14;
  local_b8 = 0;
  local_d8 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_70 = 7;
  local_e8 = 0;
  uStack_e0 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_b0 = 0;
  uStack_a8 = 1;
  local_a0 = 3;
  uStack_98 = 5;
  local_90 = 7;
  uStack_88 = 1;
  local_80 = 3;
  uStack_78 = 5;
  lVar9 = *plVar14;
  uVar12 = (ulong)*(uint *)(plVar14 + 1);
  if (lVar16 != lVar9 + uVar12 * 0x50) {
    lVar1 = _DAT_008a4288 + 0x10;
    do {
      if (*(int *)(lVar16 + 0x40) != 0) {
        local_230[0] = 0;
        local_108 = 0x3f80000000000000;
        local_228 = 0;
        uStack_220 = 0;
        local_218 = 0;
        uStack_210 = 0;
        local_100 = 0;
        local_258 = 0;
        local_208 = 0;
        uStack_200 = 0;
        local_1f8 = 0;
        uStack_1f0 = 0;
        local_1e8 = 0;
        uStack_1e0 = 0;
        local_1d8 = 0;
        uStack_1d0 = 0;
        local_1c8 = 0;
        uStack_1c0 = 0;
        local_1b8 = 0;
        uStack_1b0 = 0;
        local_1a8 = 0;
        uStack_1a0 = 0;
        local_198 = 0;
        uStack_190 = 0;
        local_188 = 0;
        uStack_180 = 0;
        local_178 = 0;
        uStack_170 = 0;
        local_168 = 0;
        uStack_160 = 0;
        local_158 = 0;
        uStack_150 = 0;
        local_148 = 0;
        uStack_140 = 0;
        local_138 = 0;
        uStack_130 = 0;
        local_128 = 0;
        uStack_120 = 0;
        local_118 = 0;
        uStack_110 = 0;
        local_278 = 0;
        uStack_270 = 0;
        local_268 = 0;
        local_260 = 0;
        local_250 = 0;
        local_248 = (void *)0x0;
        local_240 = 0;
        local_238 = 0;
        local_280 = lVar1;
        uVar12 = FUN__text__00536cb0(param_1,param_3,param_2,lVar16,local_230,&local_280);
        if ((uVar12 & 1) != 0) {
          uVar6 = FUN__text__005426f0(&local_280);
          if ((uint)local_c0 == 0) {
LAB__text__00538e80:
            fVar18 = (float)FUN__text__00531650(local_230,param_2,param_3);
            if (fVar18 < *(float *)(param_3 + 0x30)) {
              plVar10 = (long *)(*(long *)(param_3 + 0x20) +
                                (ulong)*(uint *)(*(long *)(param_3 + 0x20) + 0x30) * 0x10);
              puVar15 = (uint *)(plVar10 + 1);
              uVar6 = *puVar15;
              uVar4 = *(uint *)((long)plVar10 + 0xc);
              if (uVar6 < uVar4) {
LAB__text__00538ee8:
                *puVar15 = uVar6 + 1;
                if (*plVar10 != 0) {
                  __dest = (undefined4 *)(*plVar10 + (ulong)uVar6 * 0x138);
                  *__dest = 0;
                  *(undefined8 *)(__dest + 2) = 0;
                  *(undefined8 *)(__dest + 4) = 0;
                  __dest[0x4c] = 0;
                  *(undefined8 *)(__dest + 6) = 0;
                  *(undefined8 *)(__dest + 8) = 0;
                  *(undefined8 *)(__dest + 0x46) = 0;
                  *(undefined8 *)(__dest + 10) = 0;
                  *(undefined8 *)(__dest + 0xc) = 0;
                  *(undefined8 *)(__dest + 0xe) = 0;
                  *(undefined8 *)(__dest + 0x10) = 0;
                  *(undefined8 *)(__dest + 0x12) = 0;
                  *(undefined8 *)(__dest + 0x14) = 0;
                  *(undefined8 *)(__dest + 0x16) = 0;
                  *(undefined8 *)(__dest + 0x18) = 0;
                  *(undefined8 *)(__dest + 0x1a) = 0;
                  *(undefined8 *)(__dest + 0x1c) = 0;
                  *(undefined8 *)(__dest + 0x1e) = 0;
                  *(undefined8 *)(__dest + 0x20) = 0;
                  *(undefined8 *)(__dest + 0x22) = 0;
                  *(undefined8 *)(__dest + 0x24) = 0;
                  *(undefined8 *)(__dest + 0x26) = 0;
                  *(undefined8 *)(__dest + 0x28) = 0;
                  *(undefined8 *)(__dest + 0x2a) = 0;
                  *(undefined8 *)(__dest + 0x2c) = 0;
                  *(undefined8 *)(__dest + 0x2e) = 0;
                  *(undefined8 *)(__dest + 0x30) = 0;
                  *(undefined8 *)(__dest + 0x48) = 0;
                  *(undefined8 *)(__dest + 0x4a) = 0x3f80000000000000;
                  *(undefined8 *)(__dest + 0x32) = 0;
                  *(undefined8 *)(__dest + 0x34) = 0;
                  *(undefined8 *)(__dest + 0x36) = 0;
                  *(undefined8 *)(__dest + 0x38) = 0;
                  *(undefined8 *)(__dest + 0x3a) = 0;
                  *(undefined8 *)(__dest + 0x3c) = 0;
                  *(undefined8 *)(__dest + 0x3e) = 0;
                  *(undefined8 *)(__dest + 0x40) = 0;
                  *(undefined8 *)(__dest + 0x42) = 0;
                  *(undefined8 *)(__dest + 0x44) = 0;
                  memcpy(__dest,local_230,0x134);
                }
              }
              else {
                iVar2 = uVar4 + (uVar4 >> 1);
                if (uVar4 == 0) {
                  iVar2 = 1;
                }
                uVar12 = FUN__text__0053d5f0(plVar10,iVar2);
                if (((uVar12 & 1) != 0) && (uVar6 < *(uint *)((long)plVar10 + 0xc))) {
                  uVar6 = *puVar15;
                  goto LAB__text__00538ee8;
                }
              }
              uVar6 = (uint)local_f0;
              if (local_f0._4_4_ <= (uint)local_f0) {
                iVar2 = local_f0._4_4_ + (local_f0._4_4_ >> 1);
                if (local_f0._4_4_ == 0) {
                  iVar2 = 1;
                }
                uVar12 = FUN__text__0053d990(&local_f8,iVar2);
                if (((uVar12 & 1) == 0) || (local_f0._4_4_ <= uVar6)) goto LAB__text__00539100;
                uVar6 = (uint)local_f0;
              }
              lVar9 = local_f8;
              local_f0 = CONCAT44(local_f0._4_4_,uVar6 + 1);
              if (local_f8 != 0) {
                puVar17 = (undefined8 *)(local_f8 + (ulong)uVar6 * 0x50);
                puVar17[4] = 0;
                puVar17[2] = 0;
                puVar17[3] = 0;
                *(undefined4 *)(puVar17 + 5) = 0;
                puVar17[6] = 0;
                puVar17[8] = 0;
                puVar17[9] = 0;
                plVar10 = puVar17 + 7;
                *plVar10 = 0;
                *puVar17 = 0x891fe0;
                puVar17[1] = 0;
                puVar17[6] = local_250;
                puVar17[2] = uStack_270;
                puVar17[3] = local_268;
                puVar17[1] = local_278;
                *(undefined4 *)(puVar17 + 5) = local_258;
                puVar17[4] = local_260;
                uVar4 = *(uint *)((long)puVar17 + 0x44);
                *(undefined4 *)(puVar17 + 9) = (undefined4)local_238;
                *(undefined4 *)((long)puVar17 + 0x4c) = 0;
                uVar5 = (uint)local_240;
                uVar12 = local_240 & 0xffffffff;
                iVar2 = ((uint)local_240 + 1) - uVar4;
                if (((uint)local_240 + 1 < uVar4 || iVar2 == 0) ||
                   (uVar8 = FUN__text__0051bfc0(plVar10,iVar2), (uVar8 & 1) != 0)) {
                  puVar15 = (uint *)(lVar9 + (ulong)uVar6 * 0x50 + 0x40);
                  uVar6 = *puVar15;
                  if (uVar5 < uVar6) {
LAB__text__005390cc:
                    *puVar15 = uVar5;
                  }
                  else {
                    uVar4 = *(uint *)((long)puVar17 + 0x44);
                    iVar2 = uVar5 - uVar4;
                    if ((uVar5 < uVar4 || iVar2 == 0) ||
                       (uVar8 = FUN__text__0051bfc0(plVar10,iVar2), (uVar8 & 1) != 0)) {
                      if ((uVar6 < uVar5) && (lVar9 = *plVar10, lVar9 != 0)) {
                        lVar11 = ~(ulong)uVar6 + uVar12;
                        lVar13 = (ulong)uVar6 * 0x28;
                        while( true ) {
                          if (lVar9 != 0) {
                            puVar3 = (undefined8 *)(lVar9 + lVar13);
                            *puVar3 = 0;
                            *(undefined4 *)(puVar3 + 1) = 0;
                            puVar3[2] = 0;
                            puVar3[3] = 0;
                          }
                          if (lVar11 == 0) break;
                          lVar9 = *plVar10;
                          lVar11 = lVar11 + -1;
                          lVar13 = lVar13 + 0x28;
                        }
                      }
                      goto LAB__text__005390cc;
                    }
                  }
                  memcpy((void *)*plVar10,local_248,uVar12 * 0x28);
                }
                uVar7 = FUN__text__005426f0(puVar17);
                FUN__text__0053d870(&local_f8,uVar7);
              }
            }
          }
          else {
            uVar4 = 0;
            if ((uint)local_c0 != 0) {
              uVar4 = uVar6 / (uint)local_c0;
            }
            plVar10 = (long *)(local_c8 + (ulong)(uVar6 - uVar4 * (uint)local_c0) * 8);
            do {
              plVar10 = (long *)*plVar10;
              if (plVar10 == (long *)0x0) goto LAB__text__00538e80;
            } while (*(uint *)(plVar10 + 1) != uVar6);
          }
        }
LAB__text__00539100:
        local_280 = 0x891fe0;
        if (local_248 != (void *)0x0) {
          local_240 = local_240 & 0xffffffff00000000;
          FUN__text__00400fc0(0xb);
        }
        lVar9 = *plVar14;
        uVar12 = (ulong)*(uint *)(plVar14 + 1);
      }
      lVar16 = lVar16 + 0x50;
    } while (lVar16 != lVar9 + uVar12 * 0x50);
  }
  FUN__text__00539370(plVar14,&local_f8);
  FUN__text__00507b30(&local_f8);
  FUN__text__00507b30(&local_f8);
  if (local_c8 != 0) {
    local_c0 = local_c0 & 0xffffffff00000000;
    FUN__text__00400fc0(0xb);
    local_c8 = 0;
    local_c0 = local_c0 & 0xffffffff;
  }
  FUN__text__0051cae0(&local_e8);
  return;
}


