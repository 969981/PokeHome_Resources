/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001d3630; name: FUN_.text__001d3630
 */


undefined8 FUN__text__001d3630(long param_1,undefined8 *param_2,ulong *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  int *piVar9;
  undefined8 *puVar10;
  bool bVar11;
  int *piVar12;
  int *piVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  long local_1d8;
  ulong local_1d0;
  undefined8 uStack_1c8;
  uint local_1c0;
  uint local_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  uint uStack_1ac;
  int local_1a8 [61];
  undefined1 local_b4 [4];
  undefined4 local_b0;
  undefined4 uStack_ac;
  long local_a8;
  undefined1 local_a0;
  long local_98;
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  
  uVar15 = param_2[1];
  piVar13 = (int *)(param_1 + 0x30);
  *(undefined8 *)piVar13 = *param_2;
  *(undefined8 *)(param_1 + 0x38) = uVar15;
  *param_3 = 0;
  piVar12 = (int *)(param_1 + 0x20);
  if ((((*piVar12 == *piVar13) && (*(int *)(param_1 + 0x24) == *(int *)(param_1 + 0x34))) &&
      (*(int *)(param_1 + 0x28) == *(int *)(param_1 + 0x38))) &&
     (*(int *)(param_1 + 0x2c) == *(int *)(param_1 + 0x3c))) {
    return 3;
  }
  lVar17 = *(long *)(param_1 + 0x18);
  if (lVar17 != 0) {
    lVar6 = FUN__text__001961a8(*(undefined8 *)(lVar17 + 0x10),piVar13);
    if (lVar6 == 0) {
      return 0;
    }
    if (*(int *)(lVar6 + 0x2c) != 0x1e) {
      *param_3 = *param_3 | 0x40;
      return 2;
    }
    if (*(long *)(param_1 + 0x18) != 0) {
      uVar15 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x10);
      lVar6 = FUN__text__00195844(uVar15,*piVar12);
      local_98 = FUN__text__00195844(uVar15,*piVar13);
      if (*(int *)(lVar6 + 0xc) == 1) {
        if (*(int *)(local_98 + 0xc) == 1) {
          return 1;
        }
        local_a0 = 1;
        local_80 = local_98;
        local_98 = lVar6;
        piVar9 = piVar12;
        piVar12 = piVar13;
      }
      else {
        if (*(int *)(local_98 + 0xc) != 1) {
          return 1;
        }
        local_a0 = 0;
        local_80 = lVar6;
        piVar9 = piVar13;
      }
      local_90 = *(undefined8 *)piVar9;
      local_88 = *(undefined8 *)(piVar9 + 2);
      local_78 = *(undefined8 *)piVar12;
      uStack_70 = *(undefined8 *)(piVar12 + 2);
      if (local_98 != local_80) {
        lVar14 = 0;
        lVar6 = (long)&local_90 + 4;
        lVar16 = 5;
        do {
          uVar4 = (undefined4)local_90;
          uStack_ac = FUN__text__00191358(lVar6);
          local_b0 = uVar4;
          local_b4[0] = 0;
          local_a8 = lVar14;
          uVar7 = FUN__text__001a93b0(lVar17,local_b4,*(undefined4 *)(local_80 + 0xc));
          uVar4 = (undefined4)local_90;
          *param_3 = *param_3 | uVar7;
          uStack_ac = FUN__text__00191358(lVar6);
          local_a8 = lVar14 + 1;
          local_b0 = uVar4;
          local_b4[0] = 0;
          uVar7 = FUN__text__001a93b0(lVar17,local_b4,*(undefined4 *)(local_80 + 0xc));
          uVar4 = (undefined4)local_90;
          *param_3 = *param_3 | uVar7;
          uStack_ac = FUN__text__00191358(lVar6);
          local_a8 = lVar14 + 2;
          local_b0 = uVar4;
          local_b4[0] = 0;
          uVar7 = FUN__text__001a93b0(lVar17,local_b4,*(undefined4 *)(local_80 + 0xc));
          uVar4 = (undefined4)local_90;
          *param_3 = *param_3 | uVar7;
          uStack_ac = FUN__text__00191358(lVar6);
          local_a8 = lVar14 + 3;
          local_b0 = uVar4;
          local_b4[0] = 0;
          uVar7 = FUN__text__001a93b0(lVar17,local_b4,*(undefined4 *)(local_80 + 0xc));
          uVar4 = (undefined4)local_90;
          *param_3 = *param_3 | uVar7;
          uStack_ac = FUN__text__00191358(lVar6);
          local_a8 = lVar14 + 4;
          local_b0 = uVar4;
          local_b4[0] = 0;
          uVar7 = FUN__text__001a93b0(lVar17,local_b4,*(undefined4 *)(local_80 + 0xc));
          uVar4 = (undefined4)local_90;
          *param_3 = *param_3 | uVar7;
          uStack_ac = FUN__text__00191358(lVar6);
          local_a8 = lVar14 + 5;
          local_b0 = uVar4;
          local_b4[0] = 0;
          uVar7 = FUN__text__001a93b0(lVar17,local_b4,*(undefined4 *)(local_80 + 0xc));
          lVar14 = lVar14 + 0x100000000;
          lVar16 = lVar16 + -1;
          *param_3 = *param_3 | uVar7;
        } while (lVar16 != 0);
        uVar15 = *(undefined8 *)(lVar17 + 0x10);
        lVar6 = *(long *)(lVar17 + 0x158);
        local_1a8[0x38] = 0;
        local_1a8[0x39] = 0;
        local_1a8[0x3a] = 0;
        local_1a8[0x3b] = 0;
        local_1a8[0x34] = 0;
        local_1a8[0x35] = 0;
        local_1a8[0x36] = 0;
        local_1a8[0x37] = 0;
        local_1a8[0x30] = 0;
        local_1a8[0x31] = 0;
        local_1a8[0x32] = 0;
        local_1a8[0x33] = 0;
        local_1a8[0x2c] = 0;
        local_1a8[0x2d] = 0;
        local_1a8[0x2e] = 0;
        local_1a8[0x2f] = 0;
        local_1a8[0x28] = 0;
        local_1a8[0x29] = 0;
        local_1a8[0x2a] = 0;
        local_1a8[0x2b] = 0;
        local_1a8[0x24] = 0;
        local_1a8[0x25] = 0;
        local_1a8[0x26] = 0;
        local_1a8[0x27] = 0;
        local_1a8[0x20] = 0;
        local_1a8[0x21] = 0;
        local_1a8[0x22] = 0;
        local_1a8[0x23] = 0;
        local_1a8[0x1c] = 0;
        local_1a8[0x1d] = 0;
        local_1a8[0x1e] = 0;
        local_1a8[0x1f] = 0;
        local_1a8[0x18] = 0;
        local_1a8[0x19] = 0;
        local_1a8[0x1a] = 0;
        local_1a8[0x1b] = 0;
        local_1a8[0x14] = 0;
        local_1a8[0x15] = 0;
        local_1a8[0x16] = 0;
        local_1a8[0x17] = 0;
        local_1a8[0x10] = 0;
        local_1a8[0x11] = 0;
        local_1a8[0x12] = 0;
        local_1a8[0x13] = 0;
        local_1a8[0xc] = 0;
        local_1a8[0xd] = 0;
        local_1a8[0xe] = 0;
        local_1a8[0xf] = 0;
        local_1a8[8] = 0;
        local_1a8[9] = 0;
        local_1a8[10] = 0;
        local_1a8[0xb] = 0;
        local_1a8[4] = 0;
        local_1a8[5] = 0;
        local_1a8[6] = 0;
        local_1a8[7] = 0;
        local_1a8[0] = 0;
        local_1a8[1] = 0;
        local_1a8[2] = 0;
        local_1a8[3] = 0;
        if (lVar6 != 0) {
          (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
        }
        lVar14 = 0;
        bVar11 = false;
        uVar2 = 0;
        uVar1 = 0;
        do {
          lVar16 = 0;
          do {
            uVar4 = (undefined4)local_78;
            local_1bc = local_1bc & 0xffffff00;
            uStack_1b8 = 0;
            uStack_1b4 = 0;
            uStack_1b0 = 0;
            uStack_1ac = 0;
            uStack_1b4 = FUN__text__00191358((long)&local_78 + 4);
            uVar3 = local_1bc;
            uStack_1ac = (uint)lVar14 | (uint)((ulong)lVar16 >> 0x20);
            local_1bc = local_1bc & 0xffffff00;
            uStack_1b0 = (undefined4)lVar16;
            uStack_1b8 = uVar4;
            local_1d0 = CONCAT44(uVar4,uVar3) & 0xffffffffffffff00;
            local_1c0 = uStack_1ac;
            uStack_1c8 = CONCAT44(uStack_1b0,uStack_1b4);
            uVar7 = FUN__text__001a96cc(lVar17,&local_1d0,*(undefined4 *)(local_98 + 0xc));
            *param_3 = *param_3 | uVar7;
            if (bVar11) {
              bVar11 = true;
            }
            else {
              local_1d8 = lVar6;
              if (lVar6 != 0) {
                (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
              }
              FUN__text__0019485c(uVar15,&local_1d8,&local_1bc);
              if (local_1d8 != 0) {
                (**(code **)(*(long *)(local_1d8 + 0x48) + 0x18))();
                local_1d8 = 0;
              }
              uVar7 = FUN__text__00308324(lVar6);
              if ((uVar7 & 1) == 0) {
                bVar11 = false;
              }
              else {
                iVar5 = FUN__text__003065f8(lVar6);
                uVar7 = FUN__text__003067fc(lVar6);
                if ((uVar7 & 1) == 0) {
                  if ((int)uVar2 < 1) {
                    uVar7 = (ulong)(int)uVar2;
                  }
                  else {
                    uVar8 = 0;
                    uVar7 = (ulong)uVar2;
                    do {
                      if (local_1a8[uVar8 + 0x1e] == iVar5) {
                        uVar7 = *param_3 | 0x40000;
                        goto LAB__text__001d3b4c;
                      }
                      uVar8 = uVar8 + 1;
                    } while (uVar8 < uVar7);
                  }
                  bVar11 = false;
                  uVar2 = uVar2 + 1;
                  local_1a8[uVar7 + 0x1e] = iVar5;
                }
                else {
                  if (0 < (int)uVar1) {
                    uVar7 = 0;
                    uVar8 = (ulong)uVar1;
LAB__text__001d3aa0:
                    if (local_1a8[uVar7] != iVar5) goto code_r0x001d3aac;
                    uVar7 = *param_3 | 0x80000;
LAB__text__001d3b4c:
                    *param_3 = uVar7;
                    bVar11 = true;
                    puVar10 = *(undefined8 **)(lVar17 + 0x68);
                    *(uint *)(puVar10 + 2) = uStack_1ac;
                    *puVar10 = CONCAT44(uStack_1b8,local_1bc);
                    puVar10[1] = CONCAT44(uStack_1b0,uStack_1b4);
                    goto LAB__text__001d39b4;
                  }
                  uVar8 = (ulong)(int)uVar1;
LAB__text__001d3b0c:
                  uVar1 = uVar1 + 1;
                  bVar11 = false;
                  local_1a8[uVar8] = iVar5;
                }
              }
            }
LAB__text__001d39b4:
            lVar16 = lVar16 + 1;
          } while (lVar16 != 6);
          lVar14 = lVar14 + 1;
        } while (lVar14 != 5);
        if (lVar6 != 0) {
          (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))();
        }
      }
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl();
code_r0x001d3aac:
  uVar7 = uVar7 + 1;
  if (uVar8 <= uVar7) goto LAB__text__001d3b0c;
  goto LAB__text__001d3aa0;
}


