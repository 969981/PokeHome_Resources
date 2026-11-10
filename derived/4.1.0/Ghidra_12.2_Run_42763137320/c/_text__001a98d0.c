/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001a98d0; name: FUN_.text__001a98d0
 */


undefined8 FUN__text__001a98d0(long param_1,int *param_2,ulong *param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  undefined4 uVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  uint uVar16;
  undefined1 local_f0;
  undefined8 local_ef;
  undefined7 local_e7;
  undefined4 uStack_e0;
  undefined1 local_dc;
  long local_db;
  undefined7 local_d3;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined7 uStack_c0;
  undefined4 local_b9;
  undefined4 local_b0;
  uint uStack_ac;
  undefined8 local_a8;
  undefined7 uStack_a0;
  undefined4 uStack_99;
  undefined1 uStack_95;
  long local_90;
  char local_88 [4];
  undefined8 local_84;
  undefined8 local_7c;
  undefined1 local_74 [4];
  int local_70;
  undefined8 local_6c;
  int local_64;
  
  iVar3 = *param_2;
  plVar1 = (long *)(param_1 + 0x20);
  local_6c = *(undefined8 *)(param_2 + 1);
  local_64 = param_2[3];
  local_74[0] = 0;
  local_88[0] = '\0';
  *param_3 = 0;
  local_84 = 0;
  local_7c = 0;
  local_70 = iVar3;
  FUN__text__001912c0(plVar1,local_88);
  if ((local_88[0] == '\0') && ((int)local_84 == iVar3)) {
    if (local_84._4_4_ == (int)local_6c) {
      if (((int)local_7c == local_6c._4_4_) && (local_7c._4_4_ == local_64)) {
        *(long *)(param_1 + 0x34) = *plVar1;
        *(undefined8 *)(param_1 + 0x3c) = *(undefined8 *)(param_1 + 0x28);
        *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x30);
        return 3;
      }
    }
  }
  lVar14 = *(long *)(param_1 + 0x18);
  if (lVar14 == 0) goto LAB__text__001aa05c;
  uVar15 = *(undefined8 *)(lVar14 + 0x10);
  lVar13 = *(long *)(lVar14 + 0x158);
  if (lVar13 == 0) {
    lVar4 = FUN__text__001961a8(uVar15,param_2);
    if (lVar4 != 0) {
      uVar16 = 0;
      uVar11 = 5;
      do {
        local_a8 = (ulong)uVar16 << 0x20;
        lVar7 = FUN__text__00191d1c(lVar4,&local_a8);
        if (*(int *)(lVar7 + 0x18) != 0) {
          local_c8 = *(undefined8 *)(lVar7 + 8);
          local_90 = 0;
          uStack_c0 = (undefined7)*(undefined8 *)(lVar7 + 0x10);
          local_b9._0_1_ = (undefined1)((ulong)*(undefined8 *)(lVar7 + 0x10) >> 0x38);
          uVar6 = FUN__text__00194e98(uVar15,&local_90,&local_c8);
          if (local_90 != 0) {
            (**(code **)(*(long *)(local_90 + 0x48) + 0x18))();
            local_90 = 0;
          }
          if ((uVar6 & 1) == 0) goto LAB__text__001a9eb8;
        }
        local_a8 = CONCAT44(uVar16,1);
        lVar7 = FUN__text__00191d1c(lVar4,&local_a8);
        if (*(int *)(lVar7 + 0x18) != 0) {
          local_c8 = *(undefined8 *)(lVar7 + 8);
          local_90 = 0;
          uStack_c0 = (undefined7)*(undefined8 *)(lVar7 + 0x10);
          local_b9._0_1_ = (undefined1)((ulong)*(undefined8 *)(lVar7 + 0x10) >> 0x38);
          uVar6 = FUN__text__00194e98(uVar15,&local_90,&local_c8);
          if (local_90 != 0) {
            (**(code **)(*(long *)(local_90 + 0x48) + 0x18))();
            local_90 = 0;
          }
          if ((uVar6 & 1) == 0) goto LAB__text__001a9ec0;
        }
        local_a8 = CONCAT44(uVar16,2);
        lVar7 = FUN__text__00191d1c(lVar4,&local_a8);
        if (*(int *)(lVar7 + 0x18) != 0) {
          local_c8 = *(undefined8 *)(lVar7 + 8);
          local_90 = 0;
          uStack_c0 = (undefined7)*(undefined8 *)(lVar7 + 0x10);
          local_b9._0_1_ = (undefined1)((ulong)*(undefined8 *)(lVar7 + 0x10) >> 0x38);
          uVar6 = FUN__text__00194e98(uVar15,&local_90,&local_c8);
          if (local_90 != 0) {
            (**(code **)(*(long *)(local_90 + 0x48) + 0x18))();
            local_90 = 0;
          }
          if ((uVar6 & 1) == 0) goto LAB__text__001a9ec8;
        }
        local_a8 = CONCAT44(uVar16,3);
        lVar7 = FUN__text__00191d1c(lVar4,&local_a8);
        if (*(int *)(lVar7 + 0x18) != 0) {
          local_c8 = *(undefined8 *)(lVar7 + 8);
          local_90 = 0;
          uStack_c0 = (undefined7)*(undefined8 *)(lVar7 + 0x10);
          local_b9._0_1_ = (undefined1)((ulong)*(undefined8 *)(lVar7 + 0x10) >> 0x38);
          uVar6 = FUN__text__00194e98(uVar15,&local_90,&local_c8);
          if (local_90 != 0) {
            (**(code **)(*(long *)(local_90 + 0x48) + 0x18))();
            local_90 = 0;
          }
          if ((uVar6 & 1) == 0) goto LAB__text__001a9ed0;
        }
        local_a8 = CONCAT44(uVar16,4);
        lVar7 = FUN__text__00191d1c(lVar4,&local_a8);
        if (*(int *)(lVar7 + 0x18) != 0) {
          local_c8 = *(undefined8 *)(lVar7 + 8);
          local_90 = 0;
          uStack_c0 = (undefined7)*(undefined8 *)(lVar7 + 0x10);
          local_b9._0_1_ = (undefined1)((ulong)*(undefined8 *)(lVar7 + 0x10) >> 0x38);
          uVar6 = FUN__text__00194e98(uVar15,&local_90,&local_c8);
          if (local_90 != 0) {
            (**(code **)(*(long *)(local_90 + 0x48) + 0x18))();
            local_90 = 0;
          }
          if ((uVar6 & 1) == 0) goto LAB__text__001a9ed8;
        }
        local_a8 = CONCAT44(uVar16,5);
        lVar7 = FUN__text__00191d1c(lVar4,&local_a8);
        if (*(int *)(lVar7 + 0x18) != 0) {
          local_c8 = *(undefined8 *)(lVar7 + 8);
          local_90 = 0;
          uStack_c0 = (undefined7)*(undefined8 *)(lVar7 + 0x10);
          local_b9._0_1_ = (undefined1)((ulong)*(undefined8 *)(lVar7 + 0x10) >> 0x38);
          uVar6 = FUN__text__00194e98(uVar15,&local_90,&local_c8);
          if (local_90 != 0) {
            (**(code **)(*(long *)(local_90 + 0x48) + 0x18))();
            local_90 = 0;
          }
          if ((uVar6 & 1) == 0) goto LAB__text__001a9edc;
        }
        uVar16 = uVar16 + 1;
      } while (uVar16 != 5);
      goto LAB__text__001a9eb0;
    }
    uVar15 = 0;
    goto LAB__text__001aa024;
  }
  (**(code **)(*(long *)(lVar13 + 0x48) + 0x10))();
  lVar4 = FUN__text__001961a8(uVar15,param_2);
  if (lVar4 != 0) {
    uVar16 = 0;
    lVar7 = lVar13 + 0x48;
    uVar11 = 5;
    do {
      local_a8 = (ulong)uVar16 << 0x20;
      lVar5 = FUN__text__00191d1c(lVar4,&local_a8);
      if (*(int *)(lVar5 + 0x18) != 0) {
        local_c8 = *(undefined8 *)(lVar5 + 8);
        uStack_c0 = (undefined7)*(undefined8 *)(lVar5 + 0x10);
        local_b9._0_1_ = (undefined1)((ulong)*(undefined8 *)(lVar5 + 0x10) >> 0x38);
        local_90 = lVar13;
        (**(code **)(*(long *)(lVar13 + 0x48) + 0x10))(lVar7);
        uVar6 = FUN__text__00194e98(uVar15,&local_90,&local_c8);
        if (local_90 != 0) {
          (**(code **)(*(long *)(local_90 + 0x48) + 0x18))();
          local_90 = 0;
        }
        if ((uVar6 & 1) == 0) goto LAB__text__001a9eb8;
      }
      local_a8 = CONCAT44(uVar16,1);
      lVar5 = FUN__text__00191d1c(lVar4,&local_a8);
      if (*(int *)(lVar5 + 0x18) != 0) {
        local_c8 = *(undefined8 *)(lVar5 + 8);
        uStack_c0 = (undefined7)*(undefined8 *)(lVar5 + 0x10);
        local_b9._0_1_ = (undefined1)((ulong)*(undefined8 *)(lVar5 + 0x10) >> 0x38);
        local_90 = lVar13;
        (**(code **)(*(long *)(lVar13 + 0x48) + 0x10))(lVar7);
        uVar6 = FUN__text__00194e98(uVar15,&local_90,&local_c8);
        if (local_90 != 0) {
          (**(code **)(*(long *)(local_90 + 0x48) + 0x18))();
          local_90 = 0;
        }
        if ((uVar6 & 1) == 0) goto LAB__text__001a9ec0;
      }
      local_a8 = CONCAT44(uVar16,2);
      lVar5 = FUN__text__00191d1c(lVar4,&local_a8);
      if (*(int *)(lVar5 + 0x18) != 0) {
        local_c8 = *(undefined8 *)(lVar5 + 8);
        uStack_c0 = (undefined7)*(undefined8 *)(lVar5 + 0x10);
        local_b9._0_1_ = (undefined1)((ulong)*(undefined8 *)(lVar5 + 0x10) >> 0x38);
        local_90 = lVar13;
        (**(code **)(*(long *)(lVar13 + 0x48) + 0x10))(lVar7);
        uVar6 = FUN__text__00194e98(uVar15,&local_90,&local_c8);
        if (local_90 != 0) {
          (**(code **)(*(long *)(local_90 + 0x48) + 0x18))();
          local_90 = 0;
        }
        if ((uVar6 & 1) == 0) goto LAB__text__001a9ec8;
      }
      local_a8 = CONCAT44(uVar16,3);
      lVar5 = FUN__text__00191d1c(lVar4,&local_a8);
      if (*(int *)(lVar5 + 0x18) != 0) {
        local_c8 = *(undefined8 *)(lVar5 + 8);
        uStack_c0 = (undefined7)*(undefined8 *)(lVar5 + 0x10);
        local_b9._0_1_ = (undefined1)((ulong)*(undefined8 *)(lVar5 + 0x10) >> 0x38);
        local_90 = lVar13;
        (**(code **)(*(long *)(lVar13 + 0x48) + 0x10))(lVar7);
        uVar6 = FUN__text__00194e98(uVar15,&local_90,&local_c8);
        if (local_90 != 0) {
          (**(code **)(*(long *)(local_90 + 0x48) + 0x18))();
          local_90 = 0;
        }
        if ((uVar6 & 1) == 0) goto LAB__text__001a9ed0;
      }
      local_a8 = CONCAT44(uVar16,4);
      lVar5 = FUN__text__00191d1c(lVar4,&local_a8);
      if (*(int *)(lVar5 + 0x18) != 0) {
        local_c8 = *(undefined8 *)(lVar5 + 8);
        uStack_c0 = (undefined7)*(undefined8 *)(lVar5 + 0x10);
        local_b9._0_1_ = (undefined1)((ulong)*(undefined8 *)(lVar5 + 0x10) >> 0x38);
        local_90 = lVar13;
        (**(code **)(*(long *)(lVar13 + 0x48) + 0x10))(lVar7);
        uVar6 = FUN__text__00194e98(uVar15,&local_90,&local_c8);
        if (local_90 != 0) {
          (**(code **)(*(long *)(local_90 + 0x48) + 0x18))();
          local_90 = 0;
        }
        if ((uVar6 & 1) == 0) goto LAB__text__001a9ed8;
      }
      local_a8 = CONCAT44(uVar16,5);
      lVar5 = FUN__text__00191d1c(lVar4,&local_a8);
      if (*(int *)(lVar5 + 0x18) != 0) {
        local_c8 = *(undefined8 *)(lVar5 + 8);
        uStack_c0 = (undefined7)*(undefined8 *)(lVar5 + 0x10);
        local_b9._0_1_ = (undefined1)((ulong)*(undefined8 *)(lVar5 + 0x10) >> 0x38);
        local_90 = lVar13;
        (**(code **)(*(long *)(lVar13 + 0x48) + 0x10))(lVar7);
        uVar6 = FUN__text__00194e98(uVar15,&local_90,&local_c8);
        if (local_90 != 0) {
          (**(code **)(*(long *)(local_90 + 0x48) + 0x18))();
          local_90 = 0;
        }
        if ((uVar6 & 1) == 0) goto LAB__text__001a9edc;
      }
      uVar16 = uVar16 + 1;
    } while (uVar16 != 5);
LAB__text__001a9eb0:
    uVar15 = 1;
    goto LAB__text__001aa024;
  }
  uVar15 = 0;
  goto LAB__text__001aa028;
LAB__text__001a9eb8:
  uVar11 = 0;
  goto LAB__text__001a9edc;
LAB__text__001a9ec0:
  uVar11 = 1;
  goto LAB__text__001a9edc;
LAB__text__001a9ec8:
  uVar11 = 2;
  goto LAB__text__001a9edc;
LAB__text__001a9ed0:
  uVar11 = 3;
  goto LAB__text__001a9edc;
LAB__text__001a9ed8:
  uVar11 = 4;
LAB__text__001a9edc:
  local_b0 = uVar11;
  uStack_ac = uVar16;
  FUN__text__00191328(&local_a8,local_74,&local_b0);
  plVar12 = (long *)(param_1 + 0x34);
  *plVar12 = local_a8;
  *(ulong *)(param_1 + 0x3c) = CONCAT17((undefined1)uStack_99,uStack_a0);
  *(uint *)(param_1 + 0x44) = CONCAT13(uStack_95,uStack_99._1_3_);
  if (*(long *)(param_1 + 0x18) == 0) {
LAB__text__001aa05c:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  uVar15 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x10);
  lVar7 = FUN__text__00195844(uVar15,*(undefined4 *)(param_1 + 0x24));
  lVar4 = FUN__text__00195844(uVar15,*(undefined4 *)(param_1 + 0x38));
  if (*(int *)(lVar7 + 0xc) == 1) {
    if (*(int *)(lVar4 + 0xc) != 1) {
      lVar8 = 0x35;
      lVar10 = 0x21;
      lVar5 = lVar4;
      plVar9 = plVar12;
      plVar12 = plVar1;
      lVar4 = lVar7;
LAB__text__001a9f80:
      plVar1 = (long *)(param_1 + lVar10);
      puVar2 = (undefined8 *)(param_1 + lVar8);
      local_a8 = *plVar1;
      uStack_99 = *(undefined4 *)((long)plVar1 + 0xf);
      uStack_a0 = (undefined7)plVar1[1];
      local_c8 = *puVar2;
      local_b9 = *(undefined4 *)((long)puVar2 + 0xf);
      lVar7 = *plVar9;
      uStack_c0 = (undefined7)puVar2[1];
      if (lVar4 != lVar5) {
        local_dc = (char)*plVar12;
        local_db = local_a8;
        local_d3 = uStack_a0;
        uStack_cc = uStack_99;
        uVar6 = FUN__text__001a93b0(lVar14,&local_dc,*(undefined4 *)(lVar5 + 0xc));
        *param_3 = *param_3 | uVar6;
        local_e7 = uStack_c0;
        local_ef = local_c8;
        uStack_e0 = local_b9;
        local_f0 = (char)lVar7;
        uVar6 = FUN__text__001a96cc(lVar14,&local_f0,*(undefined4 *)(lVar4 + 0xc));
        *param_3 = *param_3 | uVar6;
      }
    }
  }
  else if (*(int *)(lVar4 + 0xc) == 1) {
    lVar8 = 0x21;
    lVar10 = 0x35;
    lVar5 = lVar7;
    plVar9 = plVar1;
    goto LAB__text__001a9f80;
  }
  uVar15 = 2;
LAB__text__001aa024:
  if (lVar13 != 0) {
LAB__text__001aa028:
    (**(code **)(*(long *)(lVar13 + 0x48) + 0x18))((long *)(lVar13 + 0x48));
  }
  return uVar15;
}


