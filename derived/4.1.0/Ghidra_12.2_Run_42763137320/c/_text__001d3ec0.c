/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001d3ec0; name: FUN_.text__001d3ec0
 */


void FUN__text__001d3ec0(long param_1)

{
  long *plVar1;
  long *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  bool bVar7;
  uint uVar8;
  undefined4 uVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  undefined8 uVar20;
  long lVar21;
  long lVar22;
  long local_158;
  long local_150;
  long local_120;
  long local_118;
  long local_110;
  long local_108;
  long local_100;
  long local_f8;
  ulong local_f0;
  undefined8 uStack_e8;
  uint local_e0;
  ulong local_d8;
  undefined8 uStack_d0;
  uint local_c8;
  ulong local_c0;
  undefined8 uStack_b8;
  uint local_b0;
  ulong local_a8;
  ulong uStack_a0;
  uint local_98;
  uint local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 local_84;
  uint uStack_80;
  uint local_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  uint uStack_6c;
  
  lVar17 = *(long *)(param_1 + 0x18);
  if (lVar17 == 0) {
LAB__text__001d4488:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  uVar20 = *(undefined8 *)(lVar17 + 0x10);
  lVar15 = *(long *)(lVar17 + 0x158);
  if (lVar15 != 0) {
    (**(code **)(*(long *)(lVar15 + 0x48) + 0x10))();
  }
  lVar16 = *(long *)(lVar17 + 0x250);
  if (lVar16 != 0) {
    (**(code **)(*(long *)(lVar16 + 0x48) + 0x10))();
  }
  lVar21 = *(long *)(lVar17 + 0x140);
  if (lVar21 != 0) {
    (**(code **)(*(long *)(lVar21 + 0x48) + 0x10))();
  }
  lVar22 = *(long *)(lVar17 + 0x148);
  if (lVar22 != 0) {
    (**(code **)(*(long *)(lVar22 + 0x48) + 0x10))();
  }
  lVar11 = FUN__text__001961a8(uVar20);
  lVar12 = FUN__text__001961a8(uVar20);
  *(undefined8 *)(param_1 + 0x54) = 0;
  *(undefined8 *)(param_1 + 0x5c) = 0;
  *(undefined8 *)(param_1 + 100) = 0;
  *(undefined8 *)(param_1 + 0x6a) = 0;
  if ((lVar11 == 0) || (lVar12 == 0)) {
    if (lVar22 == 0) goto joined_r0x001d4000;
  }
  else {
    if (*(long *)(param_1 + 0x18) == 0) goto LAB__text__001d4488;
    uVar18 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x10);
    local_150 = FUN__text__00195844(uVar18,*(undefined4 *)(param_1 + 0x20));
    lVar13 = FUN__text__00195844(uVar18,*(undefined4 *)(param_1 + 0x30));
    if (*(int *)(local_150 + 0xc) == 1) {
      if (*(int *)(lVar13 + 0xc) == 1) {
        local_158 = 0;
        local_150 = 0;
        bVar7 = false;
      }
      else {
        bVar7 = true;
        local_158 = local_150;
        local_150 = lVar13;
      }
    }
    else {
      bVar7 = false;
      if (*(int *)(lVar13 + 0xc) == 1) {
        local_158 = lVar13;
      }
      else {
        local_158 = 0;
        local_150 = 0;
      }
    }
    lVar13 = 0;
    plVar1 = (long *)(lVar15 + 0x48);
    plVar2 = (long *)(lVar16 + 0x48);
    do {
      lVar19 = 0;
      do {
        local_7c = local_7c & 0xffffff00;
        uVar3 = *(undefined4 *)(param_1 + 0x20);
        uStack_78 = 0;
        uStack_74 = 0;
        uStack_70 = 0;
        uStack_6c = 0;
        uStack_74 = FUN__text__00191358(param_1 + 0x24);
        local_7c = local_7c & 0xffffff00;
        uStack_6c = (uint)lVar13 | (uint)((ulong)lVar19 >> 0x20);
        uVar10 = uStack_6c;
        local_90 = local_90 & 0xffffff00;
        uStack_70 = (undefined4)lVar19;
        uVar9 = uStack_70;
        uVar4 = *(undefined4 *)(param_1 + 0x30);
        uStack_8c = 0;
        uStack_88 = 0;
        local_84 = 0;
        uStack_80 = 0;
        uStack_78 = uVar3;
        uStack_88 = FUN__text__00191358(param_1 + 0x34);
        uVar8 = local_90;
        local_90 = local_90 & 0xffffff00;
        uStack_8c = uVar4;
        local_84 = uVar9;
        uStack_80 = uVar10;
        if (local_158 != local_150) {
          local_a8 = CONCAT44(uStack_78,local_7c);
          uStack_a0 = CONCAT44(uStack_70,uStack_74);
          local_c0 = CONCAT44(uVar4,uVar8) & 0xffffffffffffff00;
          uStack_b8 = CONCAT44(uVar9,uStack_88);
          local_98 = uStack_6c;
          local_b0 = uVar10;
          if (!bVar7) {
            local_a8 = CONCAT44(uVar4,uVar8) & 0xffffffffffffff00;
            uStack_a0 = CONCAT44(uVar9,uStack_88);
            local_c0 = CONCAT44(uStack_78,local_7c);
            uStack_b8 = CONCAT44(uStack_70,uStack_74);
            local_98 = uVar10;
            local_b0 = uStack_6c;
          }
          local_d8 = local_c0;
          uStack_d0 = uStack_b8;
          local_c8 = local_b0;
          uVar14 = FUN__text__001aa7a0(lVar17,&local_d8);
          if ((uVar14 & 1) == 0) {
            local_f0 = local_c0;
            uStack_e8 = uStack_b8;
            local_e0 = local_b0;
            uVar14 = FUN__text__001a9004(lVar17,&local_f0);
            if ((uVar14 & 1) == 0) goto LAB__text__001d4228;
          }
          FUN__text__001912c0(&local_a8,param_1 + 0x40);
          *(undefined1 *)(param_1 + (ulong)local_98 + (uStack_a0 >> 0x20) * 5 + 0x54) = 1;
        }
LAB__text__001d4228:
        local_f8 = lVar15;
        if (lVar15 != 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
        }
        FUN__text__0019485c(uVar20,&local_f8,&local_7c);
        if (local_f8 != 0) {
          (**(code **)(*(long *)(local_f8 + 0x48) + 0x18))();
          local_f8 = 0;
        }
        local_100 = lVar16;
        if (lVar16 != 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
        FUN__text__0019485c(uVar20,&local_100,&local_90);
        if (local_100 != 0) {
          (**(code **)(*(long *)(local_100 + 0x48) + 0x18))();
          local_100 = 0;
        }
        *(undefined4 *)(lVar17 + 600) = 1;
        *(uint *)(lVar17 + 0x26c) = uStack_6c;
        *(ulong *)(lVar17 + 0x270) = CONCAT44(uStack_8c,local_90);
        *(ulong *)(lVar17 + 0x278) = CONCAT44(local_84,uStack_88);
        *(ulong *)(lVar17 + 0x25c) = CONCAT44(uStack_78,local_7c);
        *(ulong *)(lVar17 + 0x264) = CONCAT44(uStack_70,uStack_74);
        *(uint *)(lVar17 + 0x280) = uStack_80;
        FUN__text__00193510(uVar20,&local_7c,&local_90);
        local_108 = lVar16;
        if (lVar16 != 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
        FUN__text__001951d4(uVar20,&local_108,&local_7c,1);
        if (local_108 != 0) {
          (**(code **)(*(long *)(local_108 + 0x48) + 0x18))();
          local_108 = 0;
        }
        local_110 = lVar15;
        if (lVar15 != 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
        }
        FUN__text__001951d4(uVar20,&local_110,&local_90,1);
        if (local_110 != 0) {
          (**(code **)(*(long *)(local_110 + 0x48) + 0x18))();
          local_110 = 0;
        }
        FUN__text__001aa8cc(lVar17,&local_7c,&local_90);
        lVar19 = lVar19 + 1;
      } while (lVar19 != 6);
      lVar13 = lVar13 + 1;
    } while (lVar13 != 5);
    lVar17 = *(long *)(lVar11 + 0x20);
    if (lVar17 != 0) {
      (**(code **)(*(long *)(lVar17 + 0x48) + 0x10))();
    }
    FUN__text__005f3280(lVar21,lVar17);
    (**(code **)(*(long *)(lVar17 + 0x48) + 0x18))((long *)(lVar17 + 0x48));
    lVar17 = *(long *)(lVar12 + 0x20);
    if (lVar17 != 0) {
      (**(code **)(*(long *)(lVar17 + 0x48) + 0x10))();
    }
    FUN__text__005f3280(lVar22,lVar17);
    (**(code **)(*(long *)(lVar17 + 0x48) + 0x18))((long *)(lVar17 + 0x48));
    uVar5 = *(undefined1 *)(lVar11 + 0x28);
    uVar6 = *(undefined1 *)(lVar12 + 0x28);
    local_118 = lVar22;
    (**(code **)(*(long *)(lVar22 + 0x48) + 0x10))();
    FUN__text__001d5178(&local_118,uVar6,lVar11,uVar20);
    if (local_118 != 0) {
      (**(code **)(*(long *)(local_118 + 0x48) + 0x18))();
      local_118 = 0;
    }
    local_120 = lVar21;
    (**(code **)(*(long *)(lVar21 + 0x48) + 0x10))();
    FUN__text__001d5178(&local_120,uVar5,lVar12,uVar20);
    if (local_120 != 0) {
      (**(code **)(*(long *)(local_120 + 0x48) + 0x18))();
      local_120 = 0;
    }
  }
  (**(code **)(*(long *)(lVar22 + 0x48) + 0x18))((long *)(lVar22 + 0x48));
joined_r0x001d4000:
  if (lVar21 != 0) {
    (**(code **)(*(long *)(lVar21 + 0x48) + 0x18))((long *)(lVar21 + 0x48));
  }
  if (lVar16 != 0) {
    (**(code **)(*(long *)(lVar16 + 0x48) + 0x18))((long *)(lVar16 + 0x48));
  }
  if (lVar15 != 0) {
    (**(code **)(*(long *)(lVar15 + 0x48) + 0x18))((long *)(lVar15 + 0x48));
  }
  return;
}


