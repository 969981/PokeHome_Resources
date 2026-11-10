/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001a7024; name: FUN_.text__001a7024
 */


void FUN__text__001a7024(long param_1)

{
  uint uVar1;
  byte *pbVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 uVar6;
  long *plVar7;
  bool bVar8;
  bool bVar9;
  byte bVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  uint uVar15;
  long *plVar16;
  uint uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong *puVar20;
  long *plVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  long lVar24;
  uint uVar25;
  long lVar26;
  ulong uVar27;
  uint uVar28;
  ulong *puVar29;
  long local_380 [3];
  undefined4 local_368;
  undefined4 uStack_364;
  undefined4 local_360;
  undefined4 uStack_35c;
  undefined4 local_358;
  undefined4 uStack_354;
  undefined4 local_350;
  undefined4 uStack_34c;
  undefined4 local_348;
  undefined4 uStack_344;
  undefined4 local_340;
  undefined4 uStack_33c;
  undefined4 local_338;
  undefined4 uStack_334;
  long alStack_330 [21];
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined4 local_258;
  long local_250;
  undefined4 local_248;
  undefined4 local_244;
  ulong local_240;
  ulong uStack_238;
  undefined4 local_230;
  uint local_22c;
  uint uStack_228;
  undefined8 uStack_224;
  undefined4 local_21c;
  ulong local_218;
  undefined8 local_210;
  ulong uStack_208;
  long *local_200;
  long local_1f8;
  undefined8 local_1f0;
  ulong *local_1e8;
  ulong *local_1e0;
  ulong *local_1d8;
  undefined8 local_1d0;
  ulong local_1c8;
  undefined4 local_1c0;
  uint local_1bc;
  long *local_1b8;
  ulong local_1b0;
  ulong local_1a8;
  ulong local_1a0;
  long local_198;
  ulong local_190;
  ulong local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined4 local_168;
  undefined2 uStack_164;
  undefined2 uStack_162;
  undefined6 local_160;
  undefined2 uStack_15a;
  long local_158;
  uint local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 local_13c;
  undefined4 uStack_138;
  undefined4 local_134;
  undefined4 uStack_130;
  undefined4 local_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 local_120;
  undefined4 uStack_11c;
  long local_118;
  undefined8 local_110;
  ulong local_108 [2];
  uint local_f8;
  uint uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  uint local_e8;
  uint uStack_e4;
  long local_e0 [2];
  long local_d0;
  long local_c8;
  long local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined8 local_a0;
  undefined8 *local_98;
  long *local_90 [2];
  long local_80;
  long local_78;
  undefined8 local_70;
  
  if (*(char *)(param_1 + 0x90) != '\0') {
    lVar26 = *(long *)(param_1 + 0x18);
    if (lVar26 != 0) {
      uVar23 = *(undefined8 *)(lVar26 + 0x10);
      puVar20 = *(ulong **)(lVar26 + 0x158);
      if (puVar20 != (ulong *)0x0) {
        (**(code **)(*(long *)((long)puVar20 + 0x48) + 0x10))();
      }
      puVar29 = *(ulong **)(lVar26 + 0x150);
      if (puVar29 != (ulong *)0x0) {
        (**(code **)(*(long *)((long)puVar29 + 0x48) + 0x10))();
      }
      *(undefined8 *)(param_1 + 0x1c2) = 0;
      *(undefined8 *)(param_1 + 0x1bc) = 0;
      *(undefined8 *)(param_1 + 0x1b4) = 0;
      *(undefined8 *)(param_1 + 0x1ac) = 0;
      if (*(long *)(param_1 + 0x18) != 0) {
        uVar22 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x10);
        lVar11 = FUN__text__00195844(uVar22,*(undefined4 *)(param_1 + 0x24));
        puVar4 = (undefined4 *)(param_1 + 0x78);
        if (*(char *)(param_1 + 0x90) != '\0') {
          puVar4 = (undefined4 *)(param_1 + 0x94);
        }
        lVar12 = FUN__text__00195844(uVar22,*puVar4);
        bVar8 = *(int *)(lVar12 + 0xc) == 1;
        bVar9 = *(int *)(lVar11 + 0xc) != 1;
        local_1d0 = (long *)(ulong)CONCAT14((lVar12 != lVar11 && bVar8) && bVar9,
                                            (undefined4)local_1d0);
        if ((lVar12 != lVar11 && bVar8) && bVar9) {
          *(undefined1 *)(param_1 + 0x198) = 0;
          *(undefined4 *)(param_1 + 0x19c) = *(undefined4 *)(param_1 + 0x94);
          *(undefined8 *)(param_1 + 0x1a0) = *(undefined8 *)(param_1 + 0x98);
          *(undefined4 *)(param_1 + 0x1a8) = *(undefined4 *)(param_1 + 0xa0);
        }
        local_78 = 0;
        local_98 = (undefined8 *)0x0;
        local_90[0] = (undefined8 *)0x0;
        local_70 = (ulong)local_70._4_4_ << 0x20;
        local_80 = *(undefined8 *)(DAT_008e1518 + 0x2a8);
        *(undefined4 *)(lVar26 + 600) = 0;
        uVar25 = *(uint *)(param_1 + 0x48);
        uVar17 = *(uint *)(param_1 + 0x50);
        local_90[1] = (undefined8 *)0x0;
        plVar21 = local_90[0];
        if (uVar25 <= uVar17) {
          uVar15 = *(uint *)(param_1 + 0x4c);
          if (uVar15 < *(uint *)(param_1 + 0x44)) {
            do {
              uVar25 = uVar25 + 1;
            } while (uVar25 <= uVar17);
          }
          else {
            local_1e8 = (ulong *)(param_1 + 0x20);
            uVar27 = 0;
            local_1f0 = (undefined8 *)&uStack_f0;
            local_1b8 = (long *)((long)puVar20 + 0x48);
            local_1f8 = param_1 + 0x98;
            local_200 = (long *)((long)puVar29 + 0x48);
            local_1e0 = puVar20;
            local_1d8 = puVar29;
            do {
              uVar28 = *(uint *)(param_1 + 0x44);
              if (uVar28 <= uVar15) {
                uVar19 = (ulong)uVar25;
                local_1c8 = uVar19;
                local_1bc = uVar25;
                do {
                  if (*(char *)(param_1 + uVar19 + (ulong)uVar28 + (ulong)uVar28 * 4 + 0x54) != '\0'
                      && uVar27 < *(uint *)(param_1 + 0xa4)) {
                    local_a0 = CONCAT44(uVar25,uVar28);
                    FUN__text__00191328(&uStack_b4,local_1e8,&local_a0);
                    if (local_1d0._4_4_ == 0) {
                      uVar19 = 0;
                    }
                    else {
                      local_b8 = uStack_a4;
                      uVar19 = FUN__text__001aa7a0(lVar26,&local_c8);
                      if ((uVar19 & 1) == 0) {
                        local_d0 = CONCAT44(local_d0._4_4_,uStack_a4);
                        uVar19 = FUN__text__001a9004(lVar26,local_e0);
                        uVar19 = uVar19 & 0xffffffff;
                      }
                      else {
                        uVar19 = 1;
                      }
                    }
                    uVar6 = *(undefined4 *)(param_1 + 0x94);
                    uStack_f4 = uStack_f4 & 0xffffff00;
                    *local_1f0 = 0;
                    local_1f0[1] = 0;
                    uStack_ec = FUN__text__00191358(local_1f8);
                    uVar25 = uStack_f4;
                    uStack_f4 = uStack_f4 & 0xffffff00;
                    uVar22 = *(undefined8 *)((undefined4 *)(param_1 + 0x94) + uVar27 * 2 + 5);
                    local_e8 = (uint)uVar22;
                    uStack_e4 = (uint)((ulong)uVar22 >> 0x20);
                    local_108[0] = CONCAT44(uVar6,uVar25) & 0xffffffffffffff00;
                    local_108[1] = CONCAT44(local_e8,uStack_ec);
                    local_f8 = uStack_e4;
                    lVar11 = lVar26 + (ulong)*(uint *)(lVar26 + 600) * 0x28;
                    *(uint *)(lVar26 + 600) = *(uint *)(lVar26 + 600) + 1;
                    *(ulong *)(lVar11 + 0x25c) = CONCAT44(uStack_b0,uStack_b4);
                    *(ulong *)(lVar11 + 0x264) = CONCAT44(local_a8,uStack_ac);
                    *(undefined4 *)(lVar11 + 0x26c) = uStack_a4;
                    *(uint *)(lVar11 + 0x280) = uStack_e4;
                    *(ulong *)(lVar11 + 0x278) = local_108[1];
                    *(ulong *)(lVar11 + 0x270) = local_108[0];
                    uStack_f0 = uVar6;
                    FUN__text__00193404(&local_118,uVar23,&uStack_b4,(long)&local_110 + 4,&local_110
                                       );
                    puVar20 = local_1e0;
                    if (local_118 != 0) {
                      local_158 = CONCAT44(local_e8,uStack_ec);
                      uStack_11c = 0;
                      local_12c = 0;
                      uStack_128 = 0;
                      uStack_124 = 0;
                      local_120 = 0;
                      local_150 = uStack_e4;
                      local_13c = 0;
                      uStack_138 = 0;
                      local_134 = 0;
                      uStack_130 = 0;
                      uStack_14c = 0;
                      uStack_148 = 0;
                      uStack_144 = 0;
                      uStack_140 = 0;
                      local_160 = (undefined6)CONCAT44(uStack_f0,uStack_f4);
                      uStack_15a = (undefined2)((uint)uStack_f0 >> 0x10);
                      puVar13 = (undefined8 *)
                                FUN__text__00302eb4(local_118,local_110._4_4_,local_110 & 0xffffffff
                                                   );
                      uStack_14c = (undefined4)*puVar13;
                      uStack_148 = (undefined4)((ulong)*puVar13 >> 0x20);
                      uStack_144 = (undefined4)puVar13[1];
                      uStack_140 = (undefined4)((ulong)puVar13[1] >> 0x20);
                      local_13c = (undefined4)puVar13[2];
                      uStack_138 = (undefined4)((ulong)puVar13[2] >> 0x20);
                      uStack_11c = *(undefined4 *)(puVar13 + 6);
                      local_134 = (undefined4)puVar13[3];
                      uStack_130 = (undefined4)((ulong)puVar13[3] >> 0x20);
                      local_12c = (undefined4)puVar13[4];
                      uStack_128 = (undefined4)((ulong)puVar13[4] >> 0x20);
                      uStack_124 = (undefined4)puVar13[5];
                      local_120 = (undefined4)((ulong)puVar13[5] >> 0x20);
                      if (local_90[0] == local_90[1]) {
                        FUN__text__001a89e0(&local_98,&local_160);
                      }
                      else {
                        uVar18 = tpidr_el0;
                        uVar18 = uVar18 & 0xffffffffffffe000;
                        if (*(long *)(uVar18 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
                          FUN__text__00102c10();
                        }
                        *(long *)(uVar18 + *(long *)(uVar18 + 0x98) * 8 + 0x18) = local_80;
                        *(long *)(uVar18 + 0x98) = *(long *)(uVar18 + 0x98) + 1;
                        *local_90[0] = CONCAT26(uStack_15a,local_160);
                        local_90[0][3] = CONCAT44(uStack_144,uStack_148);
                        local_90[0][4] = CONCAT44(local_13c,uStack_140);
                        local_90[0][1] = local_158;
                        local_90[0][2] = CONCAT44(uStack_14c,local_150);
                        local_90[0][7] = CONCAT44(uStack_124,uStack_128);
                        local_90[0][8] = CONCAT44(uStack_11c,local_120);
                        local_90[0][5] = CONCAT44(local_134,uStack_138);
                        local_90[0][6] = CONCAT44(local_12c,uStack_130);
                        local_90[0] = local_90[0] + 9;
                        *(long *)(uVar18 + 0x98) = *(long *)(uVar18 + 0x98) + -1;
                      }
                      local_168 = 0;
                      local_178 = 0;
                      local_170 = 0;
                      local_188 = 0;
                      local_180 = 0;
                      local_198 = 0;
                      local_190 = 0;
                      FUN__text__00302f68(local_118,local_110._4_4_,local_110 & 0xffffffff,
                                          &local_198);
                      if (local_118 != 0) {
                        (**(code **)(*(long *)(local_118 + 0x48) + 0x18))();
                      }
                    }
                    local_1a0 = (ulong)puVar20;
                    if (puVar20 != (ulong *)0x0) {
                      (**(code **)(*local_1b8 + 0x10))();
                    }
                    FUN__text__0019485c(uVar23,&local_1a0,&uStack_b4);
                    uVar25 = local_1bc;
                    if (local_1a0 != 0) {
                      (**(code **)(*(long *)(local_1a0 + 0x48) + 0x18))();
                      local_1a0 = 0;
                    }
                    local_1a8 = (ulong)local_1d8;
                    if (local_1d8 != (ulong *)0x0) {
                      (**(code **)(*local_200 + 0x10))();
                    }
                    FUN__text__001951d4(uVar23,&local_1a8,&uStack_b4,1);
                    if (local_1a8 != 0) {
                      (**(code **)(*(long *)(local_1a8 + 0x48) + 0x18))();
                      local_1a8 = 0;
                    }
                    local_1b0 = (ulong)puVar20;
                    if (puVar20 != (ulong *)0x0) {
                      (**(code **)(*local_1b8 + 0x10))();
                    }
                    FUN__text__001951d4(uVar23,&local_1b0,&uStack_f4,1);
                    if (local_1b0 != 0) {
                      (**(code **)(*(long *)(local_1b0 + 0x48) + 0x18))();
                      local_1b0 = 0;
                    }
                    if ((uVar19 & 1) != 0) {
                      *(undefined1 *)(param_1 + (ulong)uStack_e4 + (ulong)local_e8 * 5 + 0x1ac) = 1;
                    }
                    FUN__text__001aa8cc(lVar26,&uStack_b4,&uStack_f4);
                    uVar15 = *(uint *)(param_1 + 0x4c);
                    uVar27 = uVar27 + 1;
                    uVar19 = local_1c8;
                  }
                  uVar28 = uVar28 + 1;
                } while (uVar28 <= uVar15);
                uVar17 = *(uint *)(param_1 + 0x50);
              }
              plVar16 = local_90[0];
              puVar29 = local_1d8;
              uVar25 = uVar25 + 1;
            } while (uVar25 <= uVar17);
            plVar7 = local_90[0];
            plVar21 = local_90[0];
            if (local_98 != local_90[0]) {
              puVar13 = local_98;
              do {
                local_160 = (undefined6)*puVar13;
                uStack_15a = (undefined2)((ulong)*puVar13 >> 0x30);
                local_158 = puVar13[1];
                uStack_148 = (undefined4)puVar13[3];
                uStack_144 = (undefined4)((ulong)puVar13[3] >> 0x20);
                uStack_140 = (undefined4)puVar13[4];
                local_13c = (undefined4)((ulong)puVar13[4] >> 0x20);
                local_150 = (uint)puVar13[2];
                uStack_14c = (undefined4)((ulong)puVar13[2] >> 0x20);
                uStack_138 = (undefined4)puVar13[5];
                local_134 = (undefined4)((ulong)puVar13[5] >> 0x20);
                uStack_130 = (undefined4)puVar13[6];
                local_12c = (undefined4)((ulong)puVar13[6] >> 0x20);
                uStack_128 = (undefined4)puVar13[7];
                uStack_124 = (undefined4)((ulong)puVar13[7] >> 0x20);
                local_120 = (undefined4)puVar13[8];
                uStack_11c = (undefined4)((ulong)puVar13[8] >> 0x20);
                FUN__text__00193404(&local_198,uVar23,&local_160,&uStack_b4,&uStack_f4);
                if ((local_198 != 0) &&
                   (FUN__text__00302f68(local_198,uStack_b4,uStack_f4,&uStack_14c), local_198 != 0))
                {
                  (**(code **)(*(long *)(local_198 + 0x48) + 0x18))();
                }
                puVar13 = puVar13 + 9;
                plVar7 = local_98;
                plVar21 = local_90[0];
              } while (puVar13 != plVar16);
            }
            local_90[0] = plVar7;
            if (local_90[0] != (undefined8 *)0x0) {
              (**(code **)(*(long *)local_80 + 0x18))
                        (local_80,local_90[0],(long)local_90[1] - (long)local_90[0],4);
              plVar21 = local_90[0];
            }
          }
        }
        local_90[0] = plVar21;
        if (puVar29 != (ulong *)0x0) {
          (**(code **)(*(long *)((long)puVar29 + 0x48U) + 0x18))((long *)((long)puVar29 + 0x48U));
        }
        if (puVar20 != (ulong *)0x0) {
          (**(code **)(*(long *)((long)puVar20 + 0x48U) + 0x18))((long *)((long)puVar20 + 0x48U));
        }
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  lVar26 = *(long *)(param_1 + 0x18);
  if (lVar26 == 0) {
LAB__text__001a8448:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  uVar23 = *(undefined8 *)(lVar26 + 0x10);
  plVar21 = *(long **)(lVar26 + 0x150);
  if (plVar21 != (long *)0x0) {
    (**(code **)(plVar21[9] + 0x10))();
  }
  lVar11 = 0x228;
  local_78 = 0;
  local_70 = 0;
  local_90[1] = (long *)0x0;
  local_80 = 0;
  local_98 = (undefined8 *)0x0;
  local_90[0] = (long *)0x0;
  local_a8 = 0;
  uStack_a4 = 0;
  local_a0 = 0;
  local_b8 = 0;
  uStack_b4 = 0;
  uStack_b0 = 0;
  uStack_ac = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_e0[1] = 0;
  local_d0 = 0;
  local_e8 = 0;
  uStack_e4 = 0;
  local_e0[0] = 0;
  local_f8 = 0;
  uStack_f4 = 0;
  uStack_f0 = 0;
  uStack_ec = 0;
  local_108[0] = 0;
  local_108[1] = 0;
  local_118 = 0;
  local_110 = 0;
  uStack_128 = 0;
  uStack_124 = 0;
  local_120 = 0;
  uStack_11c = 0;
  uStack_138 = 0;
  local_134 = 0;
  uStack_130 = 0;
  local_12c = 0;
  uStack_148 = 0;
  uStack_144 = 0;
  uStack_140 = 0;
  local_13c = 0;
  local_158 = 0;
  local_150 = 0;
  uStack_14c = 0;
  do {
    lVar12 = lVar26 + lVar11;
    lVar24 = *(long *)(lVar12 + -200);
    if (lVar24 != 0) {
      (**(code **)(*(long *)(lVar24 + 0x48) + 0x10))();
    }
    lVar14 = *(long *)((long)local_380 + lVar11);
    *(long *)((long)local_380 + lVar11) = lVar24;
    if (lVar14 != 0) {
      (**(code **)(*(long *)(lVar14 + 0x48) + 0x18))();
    }
    lVar24 = *(long *)(lVar12 + -0xa0);
    if (lVar24 != 0) {
      (**(code **)(*(long *)(lVar24 + 0x48) + 0x10))();
    }
    plVar16 = (long *)((long)alStack_330 + lVar11 + -0x28);
    lVar14 = *plVar16;
    *plVar16 = lVar24;
    if (lVar14 != 0) {
      (**(code **)(*(long *)(lVar14 + 0x48) + 0x18))();
    }
    lVar24 = *(long *)(lVar12 + -0x78);
    if (lVar24 != 0) {
      (**(code **)(*(long *)(lVar24 + 0x48) + 0x10))();
    }
    lVar14 = *(long *)((long)alStack_330 + lVar11);
    *(long *)((long)alStack_330 + lVar11) = lVar24;
    if (lVar14 != 0) {
      (**(code **)(*(long *)(lVar14 + 0x48) + 0x18))();
    }
    lVar24 = *(long *)(lVar12 + -0x50);
    if (lVar24 != 0) {
      (**(code **)(*(long *)(lVar24 + 0x48) + 0x10))();
    }
    plVar16 = (long *)((long)alStack_330 + lVar11 + 0x28);
    lVar14 = *plVar16;
    *plVar16 = lVar24;
    if (lVar14 != 0) {
      (**(code **)(*(long *)(lVar14 + 0x48) + 0x18))();
    }
    lVar12 = *(long *)(lVar12 + -0x28);
    if (lVar12 != 0) {
      (**(code **)(*(long *)(lVar12 + 0x48) + 0x10))();
    }
    plVar16 = (long *)((long)alStack_330 + lVar11 + 0x50);
    lVar24 = *plVar16;
    *plVar16 = lVar12;
    if (lVar24 != 0) {
      (**(code **)(*(long *)(lVar24 + 0x48) + 0x18))();
    }
    lVar12 = *(long *)(lVar26 + lVar11);
    if (lVar12 != 0) {
      (**(code **)(*(long *)(lVar12 + 0x48) + 0x10))();
    }
    plVar16 = (long *)((long)alStack_330 + lVar11 + 0x78);
    lVar24 = *plVar16;
    *plVar16 = lVar12;
    if (lVar24 != 0) {
      (**(code **)(*(long *)(lVar24 + 0x48) + 0x18))();
    }
    lVar11 = lVar11 + 8;
  } while (lVar11 != 0x250);
  local_160 = 0;
  local_168 = 0;
  uStack_164 = 0;
  uStack_162 = 0;
  local_170 = 0;
  local_178 = 0;
  *(undefined8 *)(param_1 + 0x1ac) = 0;
  *(undefined8 *)(param_1 + 0x1b4) = 0;
  *(undefined8 *)(param_1 + 0x1bc) = 0;
  *(undefined8 *)(param_1 + 0x1c2) = 0;
  if (*(long *)(param_1 + 0x18) == 0) goto LAB__text__001a8448;
  uVar22 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x10);
  lVar11 = FUN__text__00195844(uVar22,*(undefined4 *)(param_1 + 0x24));
  puVar4 = (undefined4 *)(param_1 + 0x78);
  if (*(char *)(param_1 + 0x90) != '\0') {
    puVar4 = (undefined4 *)(param_1 + 0x94);
  }
  lVar12 = FUN__text__00195844(uVar22,*puVar4);
  bVar8 = *(int *)(lVar12 + 0xc) == 1;
  bVar9 = *(int *)(lVar11 + 0xc) != 1;
  if ((lVar12 != lVar11 && bVar8) && bVar9) {
    *(undefined8 *)(param_1 + 0x198) = *(undefined8 *)(param_1 + 0x74);
    *(undefined8 *)(param_1 + 0x1a0) = *(undefined8 *)(param_1 + 0x7c);
    *(undefined4 *)(param_1 + 0x1a8) = *(undefined4 *)(param_1 + 0x84);
  }
  uVar25 = *(uint *)(param_1 + 0x48);
  local_380[0] = param_1 + 0x20;
  uVar17 = *(uint *)(param_1 + 0x50);
  if (uVar25 <= uVar17) {
    uVar15 = *(uint *)(param_1 + 0x4c);
    if (uVar15 < *(uint *)(param_1 + 0x44)) {
      do {
        uVar25 = uVar25 + 1;
      } while (uVar25 <= uVar17);
    }
    else {
      do {
        uVar28 = *(uint *)(param_1 + 0x44);
        if (uVar28 <= uVar15) {
          uVar27 = (ulong)uVar25;
          do {
            uVar19 = (ulong)uVar28;
            if (*(char *)(param_1 + uVar27 + uVar19 + (ulong)uVar28 * 4 + 0x54) != '\0') {
              local_288 = CONCAT44(uVar25,uVar28);
              FUN__text__00191328(local_380 + 1,local_380[0],&local_288);
              if ((lVar12 != lVar11 && bVar8) && bVar9) {
                local_190 = local_380[1];
                local_188 = local_380[2];
                local_180 = CONCAT44(local_180._4_4_,local_368);
                bVar10 = FUN__text__001aa7a0(lVar26,&local_190);
                pbVar2 = (byte *)((long)&local_178 + uVar19 * 5 + uVar27);
                *pbVar2 = bVar10 & 1;
                if ((bVar10 & 1) == 0) {
                  local_1a8 = local_380[1];
                  local_1a0 = local_380[2];
                  local_198 = CONCAT44(local_198._4_4_,local_368);
                  bVar10 = FUN__text__001a9004(lVar26,&local_1a8);
                  *pbVar2 = bVar10 & 1;
                }
              }
              local_1b0 = local_108[uVar19 * 5 + (uVar27 - 10)];
              if (local_1b0 != 0) {
                (**(code **)(*(long *)(local_1b0 + 0x48) + 0x10))();
              }
              FUN__text__0019485c(uVar23,&local_1b0,local_380 + 1);
              if (local_1b0 != 0) {
                (**(code **)(*(long *)(local_1b0 + 0x48) + 0x18))();
                local_1b0 = 0;
              }
              local_1b8 = plVar21;
              if (plVar21 != (long *)0x0) {
                (**(code **)(plVar21[9] + 0x10))(plVar21 + 9);
              }
              FUN__text__001951d4(uVar23,&local_1b8,local_380 + 1,1);
              if (local_1b8 != (long *)0x0) {
                (**(code **)(local_1b8[9] + 0x18))();
                local_1b8 = (long *)0x0;
              }
              uVar15 = *(uint *)(param_1 + 0x4c);
            }
            uVar28 = uVar28 + 1;
          } while (uVar28 <= uVar15);
          uVar17 = *(uint *)(param_1 + 0x50);
        }
        uVar25 = uVar25 + 1;
      } while (uVar25 <= uVar17);
    }
  }
  local_1c8 = 0;
  local_1e8 = (ulong *)0x0;
  local_1e0 = (ulong *)0x0;
  local_1c0 = 0;
  local_1d0 = *(long **)(DAT_008e1518 + 0x2a8);
  *(undefined4 *)(lVar26 + 600) = 0;
  uVar25 = *(uint *)(param_1 + 0x48);
  uVar17 = *(uint *)(param_1 + 0x50);
  local_1d8 = (ulong *)0x0;
  if (uVar25 <= uVar17) {
    uVar15 = *(uint *)(param_1 + 0x4c);
    if (uVar15 < *(uint *)(param_1 + 0x44)) {
      do {
        uVar25 = uVar25 + 1;
      } while (uVar25 <= uVar17);
    }
    else {
      do {
        uVar28 = *(uint *)(param_1 + 0x44);
        if (uVar28 <= uVar15) {
          uVar27 = (ulong)uVar25;
          do {
            uVar19 = (ulong)uVar28;
            if (*(char *)(param_1 + uVar27 + uVar19 + (ulong)uVar28 * 4 + 0x54) != '\0') {
              uVar17 = *(uint *)(param_1 + 0x44);
              local_1f0 = (undefined8 *)CONCAT44(uVar25,uVar28);
              if (((uVar17 <= uVar28) && (uVar5 = *(uint *)(param_1 + 0x48), uVar5 <= uVar25)) &&
                 (uVar25 <= *(uint *)(param_1 + 0x50))) {
                uVar15 = *(int *)(param_1 + 0x88) + uVar28;
                uVar1 = *(int *)(param_1 + 0x8c) + uVar25;
                if (uVar15 <= uVar17) {
                  uVar17 = uVar15;
                }
                iVar3 = 0;
                if (uVar5 <= uVar1) {
                  iVar3 = uVar1 - uVar5;
                }
                local_1f8 = CONCAT44(iVar3,uVar28 + (*(int *)(param_1 + 0x88) - uVar17));
                FUN__text__00191328(&local_210,param_1 + 0x74,&local_1f8);
                local_218 = local_108[uVar19 * 5 + (uVar27 - 10)];
                if (local_218 != 0) {
                  (**(code **)(*(long *)(local_218 + 0x48) + 0x10))();
                }
                FUN__text__001951d4(uVar23,&local_218,&local_210,1);
                if (local_218 != 0) {
                  (**(code **)(*(long *)(local_218 + 0x48) + 0x18))();
                  local_218 = 0;
                }
                FUN__text__00191328(&local_22c,local_380[0],&local_1f0);
                lVar11 = lVar26 + (ulong)*(uint *)(lVar26 + 600) * 0x28;
                local_240 = local_210;
                uStack_238 = uStack_208;
                local_230 = local_200._0_4_;
                *(uint *)(lVar26 + 600) = *(uint *)(lVar26 + 600) + 1;
                *(undefined4 *)(lVar11 + 0x26c) = local_21c;
                *(ulong *)(lVar11 + 0x270) = local_210;
                *(undefined4 *)(lVar11 + 0x280) = local_200._0_4_;
                *(ulong *)(lVar11 + 0x278) = uStack_208;
                *(ulong *)(lVar11 + 0x25c) = CONCAT44(uStack_228,local_22c);
                *(undefined8 *)(lVar11 + 0x264) = uStack_224;
                FUN__text__00193404(&local_250,uVar23,&local_22c,&local_244,&local_248);
                if (local_250 != 0) {
                  uStack_334 = 0;
                  uStack_344 = 0;
                  local_340 = 0;
                  uStack_33c = 0;
                  local_338 = 0;
                  local_368 = local_200._0_4_;
                  uStack_354 = 0;
                  local_350 = 0;
                  uStack_34c = 0;
                  local_348 = 0;
                  uStack_364 = 0;
                  local_360 = 0;
                  uStack_35c = 0;
                  local_358 = 0;
                  local_380[1] = local_210;
                  local_380[2] = uStack_208;
                  puVar13 = (undefined8 *)FUN__text__00302eb4(local_250,local_244,local_248);
                  uStack_364 = (undefined4)*puVar13;
                  local_360 = (undefined4)((ulong)*puVar13 >> 0x20);
                  uStack_35c = (undefined4)puVar13[1];
                  local_358 = (undefined4)((ulong)puVar13[1] >> 0x20);
                  uStack_354 = (undefined4)puVar13[2];
                  local_350 = (undefined4)((ulong)puVar13[2] >> 0x20);
                  uStack_334 = *(undefined4 *)(puVar13 + 6);
                  uStack_34c = (undefined4)puVar13[3];
                  local_348 = (undefined4)((ulong)puVar13[3] >> 0x20);
                  uStack_344 = (undefined4)puVar13[4];
                  local_340 = (undefined4)((ulong)puVar13[4] >> 0x20);
                  uStack_33c = (undefined4)puVar13[5];
                  local_338 = (undefined4)((ulong)puVar13[5] >> 0x20);
                  if (local_1e0 == local_1d8) {
                    FUN__text__001a89e0(&local_1e8,local_380 + 1);
                  }
                  else {
                    uVar18 = tpidr_el0;
                    uVar18 = uVar18 & 0xffffffffffffe000;
                    if (*(long *)(uVar18 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
                      FUN__text__00102c10();
                    }
                    *(long **)(uVar18 + *(long *)(uVar18 + 0x98) * 8 + 0x18) = local_1d0;
                    *(long *)(uVar18 + 0x98) = *(long *)(uVar18 + 0x98) + 1;
                    *local_1e0 = local_380[1];
                    local_1e0[3] = CONCAT44(uStack_35c,local_360);
                    local_1e0[4] = CONCAT44(uStack_354,local_358);
                    local_1e0[1] = local_380[2];
                    local_1e0[2] = CONCAT44(uStack_364,local_368);
                    local_1e0[7] = CONCAT44(uStack_33c,local_340);
                    local_1e0[8] = CONCAT44(uStack_334,local_338);
                    local_1e0[5] = CONCAT44(uStack_34c,local_350);
                    local_1e0[6] = CONCAT44(uStack_344,local_348);
                    local_1e0 = local_1e0 + 9;
                    *(long *)(uVar18 + 0x98) = *(long *)(uVar18 + 0x98) + -1;
                  }
                  local_258 = 0;
                  local_268 = 0;
                  uStack_260 = 0;
                  local_278 = 0;
                  uStack_270 = 0;
                  local_288 = 0;
                  uStack_280 = 0;
                  FUN__text__00302f68(local_250,local_244,local_248,&local_288);
                  if (local_250 != 0) {
                    (**(code **)(*(long *)(local_250 + 0x48) + 0x18))();
                  }
                }
                if (*(char *)((long)&local_178 + uVar27 + uVar19 * 5) != '\0') {
                  *(undefined1 *)
                   (param_1 + ((ulong)local_200 & 0xffffffff) + (uStack_208 >> 0x20) * 5 + 0x1ac) =
                       1;
                }
                uVar15 = *(uint *)(param_1 + 0x4c);
              }
            }
            uVar28 = uVar28 + 1;
          } while (uVar28 <= uVar15);
          uVar17 = *(uint *)(param_1 + 0x50);
        }
        puVar20 = local_1e0;
        uVar25 = uVar25 + 1;
      } while (uVar25 <= uVar17);
      if (local_1e8 != local_1e0) {
        puVar29 = local_1e8;
        do {
          local_380[1] = *puVar29;
          local_380[2] = puVar29[1];
          local_360 = (undefined4)puVar29[3];
          uStack_35c = (undefined4)(puVar29[3] >> 0x20);
          local_358 = (undefined4)puVar29[4];
          uStack_354 = (undefined4)(puVar29[4] >> 0x20);
          local_368 = (undefined4)puVar29[2];
          uStack_364 = (undefined4)(puVar29[2] >> 0x20);
          local_350 = (undefined4)puVar29[5];
          uStack_34c = (undefined4)(puVar29[5] >> 0x20);
          local_348 = (undefined4)puVar29[6];
          uStack_344 = (undefined4)(puVar29[6] >> 0x20);
          local_340 = (undefined4)puVar29[7];
          uStack_33c = (undefined4)(puVar29[7] >> 0x20);
          local_338 = (undefined4)puVar29[8];
          uStack_334 = (undefined4)(puVar29[8] >> 0x20);
          FUN__text__00193404(&local_288,uVar23,local_380 + 1,&local_210,&local_22c);
          if ((local_288 != 0) &&
             (FUN__text__00302f68(local_288,local_210 & 0xffffffff,local_22c,&uStack_364),
             local_288 != 0)) {
            (**(code **)(*(long *)(local_288 + 0x48) + 0x18))();
          }
          puVar29 = puVar29 + 9;
        } while (puVar29 != puVar20);
      }
    }
  }
  if (**(int **)(lVar26 + 0x38) != 1) goto LAB__text__001a811c;
  uVar25 = *(uint *)(param_1 + 0x48);
  alStack_330[0x13] = 0;
  alStack_330[0x14] = 0;
  uVar17 = *(uint *)(param_1 + 0x50);
  alStack_330[0x11] = 0;
  alStack_330[0x12] = 0;
  alStack_330[0xf] = 0;
  alStack_330[0x10] = 0;
  alStack_330[0xd] = 0;
  alStack_330[0xe] = 0;
  alStack_330[0xb] = 0;
  alStack_330[0xc] = 0;
  alStack_330[9] = 0;
  alStack_330[10] = 0;
  alStack_330[7] = 0;
  alStack_330[8] = 0;
  alStack_330[5] = 0;
  alStack_330[6] = 0;
  alStack_330[3] = 0;
  alStack_330[4] = 0;
  alStack_330[1] = 0;
  alStack_330[2] = 0;
  local_338 = 0;
  uStack_334 = 0;
  alStack_330[0] = 0;
  local_348 = 0;
  uStack_344 = 0;
  local_340 = 0;
  uStack_33c = 0;
  local_358 = 0;
  uStack_354 = 0;
  local_350 = 0;
  uStack_34c = 0;
  local_368 = 0;
  uStack_364 = 0;
  local_360 = 0;
  uStack_35c = 0;
  local_380[1] = 0;
  local_380[2] = 0;
  if (uVar17 < uVar25) {
LAB__text__001a7edc:
    if (uVar17 < uVar25) goto LAB__text__001a811c;
  }
  else {
    uVar15 = *(uint *)(param_1 + 0x4c);
    if (uVar15 < *(uint *)(param_1 + 0x44)) {
      uVar15 = uVar25;
      do {
        uVar15 = uVar15 + 1;
      } while (uVar15 <= uVar17);
      goto LAB__text__001a7edc;
    }
    do {
      uVar28 = *(uint *)(param_1 + 0x44);
      if (uVar28 <= uVar15) {
        do {
          if (((*(char *)(param_1 + (ulong)uVar25 + (ulong)uVar28 + (ulong)uVar28 * 4 + 0x54) !=
                '\0') &&
              (local_22c = uVar28, uStack_228 = uVar25, *(uint *)(param_1 + 0x44) <= uVar28)) &&
             ((*(uint *)(param_1 + 0x48) <= uVar25 && (uVar25 <= *(uint *)(param_1 + 0x50))))) {
            FUN__text__00191328(&local_288,local_380[0],&local_22c);
            uVar22 = FUN__text__00196200(uVar23,local_288._4_4_);
            lVar26 = FUN__text__00195358(uVar23,&local_288);
            local_210 = *(ulong *)(lVar26 + 8);
            uStack_208 = *(ulong *)(lVar26 + 0x10);
            if ((char)local_288 == '\0') {
              lVar26 = FUN__text__00192680(uVar22,&local_210);
            }
            else {
              lVar26 = FUN__text__0019264c(uVar22,(long)&uStack_280 + 4);
            }
            uVar15 = *(uint *)(param_1 + 0x4c);
            local_380[(ulong)uVar28 * 5 + (ulong)uVar25 + 1] = lVar26;
          }
          uVar28 = uVar28 + 1;
        } while (uVar28 <= uVar15);
        uVar17 = *(uint *)(param_1 + 0x50);
      }
      uVar25 = uVar25 + 1;
    } while (uVar25 <= uVar17);
    uVar25 = *(uint *)(param_1 + 0x48);
    if (uVar17 < uVar25) goto LAB__text__001a811c;
  }
  uVar15 = *(uint *)(param_1 + 0x4c);
  if (uVar15 < *(uint *)(param_1 + 0x44)) {
    do {
      uVar25 = uVar25 + 1;
    } while (uVar25 <= uVar17);
  }
  else {
    do {
      uVar28 = *(uint *)(param_1 + 0x44);
      if (uVar28 <= uVar15) {
        do {
          if ((((*(char *)(param_1 + (ulong)uVar25 + (ulong)uVar28 + (ulong)uVar28 * 4 + 0x54) !=
                 '\0') &&
               (uVar17 = *(uint *)(param_1 + 0x44), local_22c = uVar28, uStack_228 = uVar25,
               uVar17 <= uVar28)) && (uVar5 = *(uint *)(param_1 + 0x48), uVar5 <= uVar25)) &&
             (uVar25 <= *(uint *)(param_1 + 0x50))) {
            uVar15 = *(int *)(param_1 + 0x88) + uVar28;
            uVar1 = *(int *)(param_1 + 0x8c) + uVar25;
            if (uVar15 <= uVar17) {
              uVar17 = uVar15;
            }
            iVar3 = 0;
            if (uVar5 <= uVar1) {
              iVar3 = uVar1 - uVar5;
            }
            local_1f0 = (undefined8 *)CONCAT44(iVar3,uVar28 + (*(int *)(param_1 + 0x88) - uVar17));
            FUN__text__00191328(&local_288,local_380[0],&local_22c);
            FUN__text__00191328(&local_210,param_1 + 0x74,&local_1f0);
            lVar26 = FUN__text__00195358(uVar23,&local_210);
            lVar11 = local_380[(ulong)uVar28 * 5 + (ulong)uVar25 + 1];
            if (lVar11 != 0) {
              if (local_288._4_4_ == local_210._4_4_) {
                uVar22 = *(undefined8 *)(lVar26 + 0x10);
                *(undefined8 *)(lVar11 + 8) = *(undefined8 *)(lVar26 + 8);
                *(undefined8 *)(lVar11 + 0x10) = uVar22;
              }
              else {
                *(undefined4 *)(lVar11 + 0x18) = 0;
              }
            }
            uVar15 = *(uint *)(param_1 + 0x4c);
          }
          uVar28 = uVar28 + 1;
        } while (uVar28 <= uVar15);
        uVar17 = *(uint *)(param_1 + 0x50);
      }
      uVar25 = uVar25 + 1;
    } while (uVar25 <= uVar17);
  }
LAB__text__001a811c:
  if (local_1e8 != (ulong *)0x0) {
    local_1e0 = local_1e8;
    (**(code **)(*local_1d0 + 0x18))(local_1d0,local_1e8,(long)local_1d8 - (long)local_1e8,4);
  }
  if (local_70 != 0) {
    (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
    local_70 = 0;
  }
  if (local_78 != 0) {
    (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
    local_78 = 0;
  }
  if (local_80 != 0) {
    (**(code **)(*(long *)(local_80 + 0x48) + 0x18))();
    local_80 = 0;
  }
  if (local_90[1] != (long *)0x0) {
    (**(code **)(*(long *)((long)local_90[1] + 0x48) + 0x18))();
    local_90[1] = (long *)0x0;
  }
  if (local_90[0] != (long *)0x0) {
    (**(code **)(*(long *)((long)local_90[0] + 0x48) + 0x18))();
    local_90[0] = (long *)0x0;
  }
  if (local_98 != (undefined8 *)0x0) {
    (**(code **)(local_98[9] + 0x18))();
    local_98 = (undefined8 *)0x0;
  }
  if (local_a0 != 0) {
    (**(code **)(*(long *)(local_a0 + 0x48) + 0x18))();
    local_a0 = 0;
  }
  if (CONCAT44(uStack_a4,local_a8) != 0) {
    (**(code **)(*(long *)(CONCAT44(uStack_a4,local_a8) + 0x48) + 0x18))();
    local_a8 = 0;
    uStack_a4 = 0;
  }
  if (CONCAT44(uStack_ac,uStack_b0) != 0) {
    (**(code **)(*(long *)(CONCAT44(uStack_ac,uStack_b0) + 0x48) + 0x18))();
    uStack_b0 = 0;
    uStack_ac = 0;
  }
  if (CONCAT44(uStack_b4,local_b8) != 0) {
    (**(code **)(*(long *)(CONCAT44(uStack_b4,local_b8) + 0x48) + 0x18))();
    local_b8 = 0;
    uStack_b4 = 0;
  }
  if (local_c0 != 0) {
    (**(code **)(*(long *)(local_c0 + 0x48) + 0x18))();
    local_c0 = 0;
  }
  if (local_c8 != 0) {
    (**(code **)(*(long *)(local_c8 + 0x48) + 0x18))();
    local_c8 = 0;
  }
  if (local_d0 != 0) {
    (**(code **)(*(long *)(local_d0 + 0x48) + 0x18))();
    local_d0 = 0;
  }
  if (local_e0[1] != 0) {
    (**(code **)(*(long *)(local_e0[1] + 0x48) + 0x18))();
    local_e0[1] = 0;
  }
  if (local_e0[0] != 0) {
    (**(code **)(*(long *)(local_e0[0] + 0x48) + 0x18))();
    local_e0[0] = 0;
  }
  if (CONCAT44(uStack_e4,local_e8) != 0) {
    (**(code **)(*(long *)(CONCAT44(uStack_e4,local_e8) + 0x48) + 0x18))();
    local_e8 = 0;
    uStack_e4 = 0;
  }
  if (CONCAT44(uStack_ec,uStack_f0) != 0) {
    (**(code **)(*(long *)(CONCAT44(uStack_ec,uStack_f0) + 0x48) + 0x18))();
    uStack_f0 = 0;
    uStack_ec = 0;
  }
  if (CONCAT44(uStack_f4,local_f8) != 0) {
    (**(code **)(*(long *)(CONCAT44(uStack_f4,local_f8) + 0x48) + 0x18))();
    local_f8 = 0;
    uStack_f4 = 0;
  }
  if (local_108[1] != 0) {
    (**(code **)(*(long *)(local_108[1] + 0x48) + 0x18))();
    local_108[1] = 0;
  }
  if (local_108[0] != 0) {
    (**(code **)(*(long *)(local_108[0] + 0x48) + 0x18))();
    local_108[0] = 0;
  }
  if (local_110 != 0) {
    (**(code **)(*(long *)(local_110 + 0x48) + 0x18))();
    local_110 = 0;
  }
  if (local_118 != 0) {
    (**(code **)(*(long *)(local_118 + 0x48) + 0x18))();
    local_118 = 0;
  }
  if (CONCAT44(uStack_11c,local_120) != 0) {
    (**(code **)(*(long *)(CONCAT44(uStack_11c,local_120) + 0x48) + 0x18))();
    local_120 = 0;
    uStack_11c = 0;
  }
  if (CONCAT44(uStack_124,uStack_128) != 0) {
    (**(code **)(*(long *)(CONCAT44(uStack_124,uStack_128) + 0x48) + 0x18))();
    uStack_128 = 0;
    uStack_124 = 0;
  }
  if (CONCAT44(local_12c,uStack_130) != 0) {
    (**(code **)(*(long *)(CONCAT44(local_12c,uStack_130) + 0x48) + 0x18))();
    uStack_130 = 0;
    local_12c = 0;
  }
  if (CONCAT44(local_134,uStack_138) != 0) {
    (**(code **)(*(long *)(CONCAT44(local_134,uStack_138) + 0x48) + 0x18))();
    uStack_138 = 0;
    local_134 = 0;
  }
  if (CONCAT44(local_13c,uStack_140) != 0) {
    (**(code **)(*(long *)(CONCAT44(local_13c,uStack_140) + 0x48) + 0x18))();
    uStack_140 = 0;
    local_13c = 0;
  }
  if (CONCAT44(uStack_144,uStack_148) != 0) {
    (**(code **)(*(long *)(CONCAT44(uStack_144,uStack_148) + 0x48) + 0x18))();
    uStack_148 = 0;
    uStack_144 = 0;
  }
  if (CONCAT44(uStack_14c,local_150) != 0) {
    (**(code **)(*(long *)(CONCAT44(uStack_14c,local_150) + 0x48) + 0x18))();
    local_150 = 0;
    uStack_14c = 0;
  }
  if (local_158 != 0) {
    (**(code **)(*(long *)(local_158 + 0x48) + 0x18))();
  }
  if (plVar21 != (long *)0x0) {
    (**(code **)(plVar21[9] + 0x18))(plVar21 + 9);
  }
  return;
}


