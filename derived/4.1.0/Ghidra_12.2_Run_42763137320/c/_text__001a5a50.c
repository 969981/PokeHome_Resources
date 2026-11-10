/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001a5a50; name: FUN_.text__001a5a50
 */


undefined8 FUN__text__001a5a50(long param_1,undefined8 *param_2,undefined8 *param_3,ulong *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  ulong uVar11;
  char *pcVar12;
  undefined8 *puVar13;
  uint uVar14;
  long lVar15;
  uint uVar16;
  long lVar17;
  undefined8 uVar18;
  uint uVar19;
  long lVar20;
  long lVar21;
  bool bVar22;
  char *pcVar23;
  long local_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined4 local_1a0;
  uint local_19c;
  uint uStack_198;
  undefined8 local_194;
  undefined4 local_18c;
  undefined4 local_188;
  undefined4 uStack_184;
  uint local_180 [4];
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
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  long local_78;
  long local_70 [2];
  
  uVar10 = *param_2;
  uVar18 = param_2[1];
  *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(param_2 + 2);
  *(undefined8 *)(param_1 + 0x7c) = uVar18;
  pcVar12 = (char *)(param_1 + 0x74);
  *(undefined8 *)pcVar12 = uVar10;
  uVar10 = *param_3;
  *(undefined1 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x88) = uVar10;
  *param_4 = 0;
  pcVar23 = (char *)(param_1 + 0x20);
  if ((((*pcVar23 == *pcVar12) && (*(int *)(param_1 + 0x24) == *(int *)(param_1 + 0x78))) &&
      (*(int *)(param_1 + 0x28) == *(int *)(param_1 + 0x7c))) &&
     (((*(int *)(param_1 + 0x2c) == *(int *)(param_1 + 0x80) &&
       (*(int *)(param_1 + 0x30) == *(int *)(param_1 + 0x84))) &&
      ((*(int *)(param_1 + 0x44) == *(int *)(param_1 + 0x88) &&
       (*(int *)(param_1 + 0x48) == *(int *)(param_1 + 0x8c))))))) {
    return 2;
  }
  lVar17 = *(long *)(param_1 + 0x18);
  if (lVar17 == 0) {
LAB__text__001a63dc:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  uVar10 = *(undefined8 *)(lVar17 + 0x10);
  lVar20 = *(long *)(lVar17 + 0x158);
  if (lVar20 != 0) {
    (**(code **)(*(long *)(lVar20 + 0x48) + 0x10))();
  }
  uVar18 = 0;
  uVar5 = *(uint *)(param_1 + 0x88);
  uVar14 = (*(int *)(param_1 + 0x4c) - *(int *)(param_1 + 0x44)) + uVar5;
  if (uVar14 < 6) {
    uVar6 = *(uint *)(param_1 + 0x8c);
    uVar1 = (*(int *)(param_1 + 0x50) - *(int *)(param_1 + 0x48)) + uVar6;
    if (uVar1 < 5) {
      if (*pcVar12 == '\0') {
        local_180[0] = *(uint *)(param_1 + 0x78);
        local_180[3] = *(undefined4 *)(param_1 + 0x84);
        local_180[1] = (uint)*(undefined8 *)(param_1 + 0x7c);
        local_180[2] = (uint)((ulong)*(undefined8 *)(param_1 + 0x7c) >> 0x20);
        uVar18 = FUN__text__001961a8(uVar10,local_180);
        if (uVar6 <= uVar1) {
          if (uVar14 < uVar5) {
            do {
              uVar6 = uVar6 + 1;
            } while (uVar6 <= uVar1);
          }
          else {
            uVar16 = uVar6;
            do {
              uVar19 = uVar5;
              if (uVar16 < uVar6) {
                do {
                  uVar19 = uVar19 + 1;
                } while (uVar19 <= uVar14);
              }
              else {
                do {
                  if ((uVar5 <= uVar19) &&
                     (uVar2 = *(uint *)(param_1 + 0x48) + (uVar16 - uVar6),
                     !CARRY4(*(uint *)(param_1 + 0x48),uVar16 - uVar6))) {
                    uVar3 = (uVar19 - uVar5) + *(uint *)(param_1 + 0x44);
                    if ((*(uint *)(param_1 + 0x44) <= uVar3) &&
                       (((uVar3 <= *(uint *)(param_1 + 0x4c) && (uVar2 <= *(uint *)(param_1 + 0x50))
                         ) && (*(char *)(param_1 + (ulong)uVar3 + (ulong)uVar3 * 4 + (ulong)uVar2 +
                                        0x54) != '\0')))) {
                      local_108 = CONCAT44(uVar16,uVar19);
                      lVar7 = FUN__text__00191d1c(uVar18,&local_108);
                      if (*(int *)(lVar7 + 0x18) != 0) {
                        local_19c = uVar19;
                        uStack_198 = uVar16;
                        FUN__text__00191328(&local_108,pcVar12,&local_19c);
                        local_78 = lVar20;
                        if (lVar20 != 0) {
                          (**(code **)(*(long *)(lVar20 + 0x48) + 0x10))();
                        }
                        uVar9 = FUN__text__00194730(uVar10,&local_78,&local_108);
                        if (local_78 != 0) {
                          (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
                          local_78 = 0;
                        }
                        if (((uVar9 & 1) == 0) ||
                           (uVar9 = FUN__text__001a5810(param_1,&local_108), (uVar9 & 1) != 0))
                        goto LAB__text__001a62e0;
                      }
                      uVar18 = 0;
                      goto joined_r0x001a63d4;
                    }
                  }
LAB__text__001a62e0:
                  uVar19 = uVar19 + 1;
                } while (uVar19 <= uVar14);
              }
              uVar16 = uVar16 + 1;
            } while (uVar16 <= uVar1);
          }
        }
      }
      else {
        uVar18 = FUN__text__00196200(uVar10,*(undefined4 *)(param_1 + 0x78));
        if (uVar6 <= uVar1) {
          if (uVar14 < uVar5) {
            do {
              uVar6 = uVar6 + 1;
            } while (uVar6 <= uVar1);
          }
          else {
            uVar16 = uVar6;
            do {
              uVar19 = uVar5;
              if (uVar16 < uVar6) {
                do {
                  uVar19 = uVar19 + 1;
                } while (uVar19 <= uVar14);
              }
              else {
                do {
                  if ((uVar5 <= uVar19) &&
                     (uVar2 = *(uint *)(param_1 + 0x48) + (uVar16 - uVar6),
                     !CARRY4(*(uint *)(param_1 + 0x48),uVar16 - uVar6))) {
                    uVar3 = (uVar19 - uVar5) + *(uint *)(param_1 + 0x44);
                    if ((*(uint *)(param_1 + 0x44) <= uVar3) &&
                       (((uVar3 <= *(uint *)(param_1 + 0x4c) && (uVar2 <= *(uint *)(param_1 + 0x50))
                         ) && (*(char *)(param_1 + (ulong)uVar3 + (ulong)uVar3 * 4 + (ulong)uVar2 +
                                        0x54) != '\0')))) {
                      local_108 = CONCAT44(uVar16,uVar19);
                      lVar7 = FUN__text__0019264c(uVar18,&local_108);
                      if (*(int *)(lVar7 + 0x18) != 0) {
                        local_180[0] = uVar19;
                        local_180[1] = uVar16;
                        FUN__text__00191328(&local_108,pcVar12,local_180);
                        local_70[0] = lVar20;
                        if (lVar20 != 0) {
                          (**(code **)(*(long *)(lVar20 + 0x48) + 0x10))((long *)(lVar20 + 0x48));
                        }
                        uVar9 = FUN__text__00194730(uVar10,local_70,&local_108);
                        if (local_70[0] != 0) {
                          (**(code **)(*(long *)(local_70[0] + 0x48) + 0x18))();
                          local_70[0] = 0;
                        }
                        if (((uVar9 & 1) == 0) ||
                           (uVar9 = FUN__text__001a5810(param_1,&local_108), (uVar9 & 1) != 0))
                        goto LAB__text__001a6154;
                      }
                      uVar18 = 0;
                      goto joined_r0x001a63d4;
                    }
                  }
LAB__text__001a6154:
                  uVar19 = uVar19 + 1;
                } while (uVar19 <= uVar14);
              }
              uVar16 = uVar16 + 1;
            } while (uVar16 <= uVar1);
          }
        }
      }
      if (*(long *)(param_1 + 0x18) == 0) goto LAB__text__001a63dc;
      uVar10 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x10);
      lVar7 = FUN__text__00195844(uVar10,*(undefined4 *)(param_1 + 0x24));
      puVar4 = (undefined4 *)(param_1 + 0x78);
      if (*(char *)(param_1 + 0x90) != '\0') {
        puVar4 = (undefined4 *)(param_1 + 0x94);
      }
      lVar8 = FUN__text__00195844(uVar10,*puVar4);
      if (*(int *)(lVar7 + 0xc) == 1) {
        uVar18 = 1;
        if (*(int *)(lVar8 + 0xc) == 1 || lVar7 == lVar8) goto joined_r0x001a63d4;
        lVar7 = 0;
        do {
          lVar15 = param_1 + 0x6d + lVar7;
          uVar14 = (uint)lVar7;
          if (*(char *)(lVar15 + -0x19) != '\0') {
            local_180[0] = 0;
            local_180[1] = uVar14;
            FUN__text__00191328(&local_108,pcVar23,local_180);
            local_80 = (undefined4)local_f8;
            local_90 = local_108;
            uStack_88 = local_100;
            uVar9 = FUN__text__001a93b0(lVar17,&local_90,*(undefined4 *)(lVar8 + 0xc));
            *param_4 = *param_4 | uVar9;
          }
          if (*(char *)(lVar15 + -0x14) != '\0') {
            local_180[0] = 1;
            local_180[1] = uVar14;
            FUN__text__00191328(&local_108,pcVar23,local_180);
            local_80 = (undefined4)local_f8;
            local_90 = local_108;
            uStack_88 = local_100;
            uVar9 = FUN__text__001a93b0(lVar17,&local_90,*(undefined4 *)(lVar8 + 0xc));
            *param_4 = *param_4 | uVar9;
          }
          if (*(char *)(lVar15 + -0xf) != '\0') {
            local_180[0] = 2;
            local_180[1] = uVar14;
            FUN__text__00191328(&local_108,pcVar23,local_180);
            local_80 = (undefined4)local_f8;
            local_90 = local_108;
            uStack_88 = local_100;
            uVar9 = FUN__text__001a93b0(lVar17,&local_90,*(undefined4 *)(lVar8 + 0xc));
            *param_4 = *param_4 | uVar9;
          }
          if (*(char *)(lVar15 + -10) != '\0') {
            local_180[0] = 3;
            local_180[1] = uVar14;
            FUN__text__00191328(&local_108,pcVar23,local_180);
            local_80 = (undefined4)local_f8;
            local_90 = local_108;
            uStack_88 = local_100;
            uVar9 = FUN__text__001a93b0(lVar17,&local_90,*(undefined4 *)(lVar8 + 0xc));
            *param_4 = *param_4 | uVar9;
          }
          if (*(char *)(lVar15 + -5) != '\0') {
            local_180[0] = 4;
            local_180[1] = uVar14;
            FUN__text__00191328(&local_108,pcVar23,local_180);
            local_80 = (undefined4)local_f8;
            local_90 = local_108;
            uStack_88 = local_100;
            uVar9 = FUN__text__001a93b0(lVar17,&local_90,*(undefined4 *)(lVar8 + 0xc));
            *param_4 = *param_4 | uVar9;
          }
          if (*(char *)(param_1 + 0x6d + lVar7) != '\0') {
            local_180[0] = 5;
            local_180[1] = uVar14;
            FUN__text__00191328(&local_108,pcVar23,local_180);
            local_80 = (undefined4)local_f8;
            local_90 = local_108;
            uStack_88 = local_100;
            uVar9 = FUN__text__001a93b0(lVar17,&local_90,*(undefined4 *)(lVar8 + 0xc));
            *param_4 = *param_4 | uVar9;
          }
          lVar7 = lVar7 + 1;
        } while (lVar7 != 5);
      }
      else if (lVar8 != lVar7 && *(int *)(lVar8 + 0xc) == 1) {
        local_a0 = 0;
        uStack_98 = 0;
        lVar7 = *(long *)(lVar17 + 0x158);
        local_b0 = 0;
        uStack_a8 = 0;
        local_c0 = 0;
        uStack_b8 = 0;
        local_108 = 0;
        local_180[0] = 0;
        local_180[1] = 0;
        local_d0 = 0;
        uStack_c8 = 0;
        local_e0 = 0;
        uStack_d8 = 0;
        local_f0 = 0;
        uStack_e8 = 0;
        local_100 = 0;
        local_f8 = 0;
        local_118 = 0;
        uStack_110 = 0;
        local_128 = 0;
        uStack_120 = 0;
        local_138 = 0;
        uStack_130 = 0;
        local_148 = 0;
        uStack_140 = 0;
        local_158 = 0;
        uStack_150 = 0;
        local_168 = 0;
        uStack_160 = 0;
        local_180[2] = 0;
        local_180[3] = 0;
        uStack_170 = 0;
        uVar10 = *(undefined8 *)(lVar17 + 0x10);
        if (lVar7 != 0) {
          (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
        }
        lVar15 = 0;
        bVar22 = false;
        uVar14 = 0;
        uVar5 = 0;
        do {
          lVar21 = 0;
          do {
            if (*(char *)(param_1 + lVar15 + lVar21 * 5 + 0x54) != '\0') {
              local_188 = (undefined4)lVar21;
              uStack_184 = (undefined4)lVar15;
              FUN__text__00191328(&local_19c,pcVar23,&local_188);
              local_1a0 = local_18c;
              local_1b0 = CONCAT44(uStack_198,local_19c);
              uStack_1a8 = local_194;
              uVar9 = FUN__text__001a96cc(lVar17,&local_1b0,*(undefined4 *)(lVar8 + 0xc));
              *param_4 = *param_4 | uVar9;
              if (bVar22) {
                bVar22 = true;
              }
              else {
                local_1b8 = lVar7;
                if (lVar7 != 0) {
                  (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
                }
                FUN__text__0019485c(uVar10,&local_1b8,&local_19c);
                if (local_1b8 != 0) {
                  (**(code **)(*(long *)(local_1b8 + 0x48) + 0x18))();
                  local_1b8 = 0;
                }
                uVar9 = FUN__text__00308324(lVar7);
                if ((uVar9 & 1) == 0) {
                  bVar22 = false;
                }
                else {
                  uVar6 = FUN__text__003065f8(lVar7);
                  uVar9 = FUN__text__003067fc(lVar7);
                  if ((uVar9 & 1) == 0) {
                    if ((int)uVar5 < 1) {
                      uVar11 = (ulong)(int)uVar5;
                    }
                    else {
                      uVar9 = 0;
                      uVar11 = (ulong)uVar5;
                      do {
                        if (local_180[uVar9 + 0x1e] == uVar6) {
                          uVar9 = *param_4 | 0x40000;
                          goto LAB__text__001a60b4;
                        }
                        uVar9 = uVar9 + 1;
                      } while (uVar9 < uVar11);
                    }
                    bVar22 = false;
                    uVar5 = uVar5 + 1;
                    local_180[uVar11 + 0x1e] = uVar6;
                  }
                  else {
                    if (0 < (int)uVar14) {
                      uVar9 = 0;
                      uVar11 = (ulong)uVar14;
LAB__text__001a6010:
                      if (local_180[uVar9] != uVar6) goto code_r0x001a601c;
                      uVar9 = *param_4 | 0x80000;
LAB__text__001a60b4:
                      *param_4 = uVar9;
                      bVar22 = true;
                      puVar13 = *(undefined8 **)(lVar17 + 0x68);
                      *(undefined4 *)(puVar13 + 2) = local_18c;
                      *puVar13 = CONCAT44(uStack_198,local_19c);
                      puVar13[1] = local_194;
                      goto LAB__text__001a5f28;
                    }
                    uVar11 = (ulong)(int)uVar14;
LAB__text__001a6070:
                    bVar22 = false;
                    uVar14 = uVar14 + 1;
                    local_180[uVar11] = uVar6;
                  }
                }
              }
            }
LAB__text__001a5f28:
            lVar21 = lVar21 + 1;
          } while (lVar21 != 6);
          lVar15 = lVar15 + 1;
        } while (lVar15 != 5);
        if (lVar7 != 0) {
          (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))();
        }
      }
      uVar18 = 1;
    }
  }
joined_r0x001a63d4:
  if (lVar20 != 0) {
    (**(code **)(*(long *)(lVar20 + 0x48) + 0x18))((long *)(lVar20 + 0x48));
  }
  return uVar18;
code_r0x001a601c:
  uVar9 = uVar9 + 1;
  if (uVar11 <= uVar9) goto LAB__text__001a6070;
  goto LAB__text__001a6010;
}


