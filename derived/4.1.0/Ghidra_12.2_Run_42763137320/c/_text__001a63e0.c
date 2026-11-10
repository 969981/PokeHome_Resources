/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001a63e0; name: FUN_.text__001a63e0
 */


undefined8 FUN__text__001a63e0(long param_1,int *param_2,ulong *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  uint uVar10;
  long lVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  char *pcVar15;
  long lVar16;
  int iVar17;
  uint uVar18;
  ulong uVar19;
  undefined8 uVar20;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  long local_70;
  undefined4 local_68;
  int iStack_64;
  
  iVar17 = *param_2;
  iVar3 = param_2[1];
  iVar2 = param_2[2];
  iVar4 = param_2[3];
  *param_3 = 0;
  pcVar15 = (char *)(param_1 + 0x20);
  if ((((*pcVar15 == '\0') && (*(int *)(param_1 + 0x24) == iVar17)) &&
      (*(int *)(param_1 + 0x28) == iVar3)) &&
     ((*(int *)(param_1 + 0x2c) == iVar2 && (*(int *)(param_1 + 0x30) == iVar4)))) {
    *(undefined1 *)(param_1 + 0x90) = 0;
    *(undefined8 *)(param_1 + 0x74) = *(undefined8 *)pcVar15;
    *(undefined8 *)(param_1 + 0x7c) = *(undefined8 *)(param_1 + 0x28);
    *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_1 + 0x44);
    return 3;
  }
  lVar11 = *(long *)(param_1 + 0x18);
  if (lVar11 == 0) goto LAB__text__001a6f88;
  uVar20 = *(undefined8 *)(lVar11 + 0x10);
  lVar16 = *(long *)(lVar11 + 0x158);
  if (lVar16 == 0) {
    lVar6 = FUN__text__001961a8(uVar20,param_2);
    if (lVar6 != 0) {
      uVar19 = 0;
      iVar17 = 0;
      do {
        local_68 = 0;
        iStack_64 = iVar17;
        lVar9 = FUN__text__00191d1c(lVar6,&local_68);
        if (*(int *)(lVar9 + 0x18) != 0) {
          local_88 = *(undefined8 *)(lVar9 + 8);
          uStack_80 = *(undefined8 *)(lVar9 + 0x10);
          local_70 = 0;
          uVar8 = FUN__text__00194e98(uVar20,&local_70,&local_88);
          if (local_70 != 0) {
            (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
            local_70 = 0;
          }
          if ((uVar8 & 1) == 0) {
            lVar9 = uVar19 * 8;
            uVar19 = (ulong)((int)uVar19 + 1);
            *(ulong *)(param_1 + lVar9 + 0xa8) = CONCAT44(iStack_64,local_68);
          }
        }
        local_68 = 1;
        iStack_64 = iVar17;
        lVar9 = FUN__text__00191d1c(lVar6,&local_68);
        if (*(int *)(lVar9 + 0x18) != 0) {
          local_88 = *(undefined8 *)(lVar9 + 8);
          uStack_80 = *(undefined8 *)(lVar9 + 0x10);
          local_70 = 0;
          uVar8 = FUN__text__00194e98(uVar20,&local_70,&local_88);
          if (local_70 != 0) {
            (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
            local_70 = 0;
          }
          if ((uVar8 & 1) == 0) {
            lVar9 = uVar19 * 8;
            uVar19 = (ulong)((int)uVar19 + 1);
            *(ulong *)(param_1 + lVar9 + 0xa8) = CONCAT44(iStack_64,local_68);
          }
        }
        local_68 = 2;
        iStack_64 = iVar17;
        lVar9 = FUN__text__00191d1c(lVar6,&local_68);
        if (*(int *)(lVar9 + 0x18) != 0) {
          local_88 = *(undefined8 *)(lVar9 + 8);
          uStack_80 = *(undefined8 *)(lVar9 + 0x10);
          local_70 = 0;
          uVar8 = FUN__text__00194e98(uVar20,&local_70,&local_88);
          if (local_70 != 0) {
            (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
            local_70 = 0;
          }
          if ((uVar8 & 1) == 0) {
            lVar9 = uVar19 * 8;
            uVar19 = (ulong)((int)uVar19 + 1);
            *(ulong *)(param_1 + lVar9 + 0xa8) = CONCAT44(iStack_64,local_68);
          }
        }
        local_68 = 3;
        iStack_64 = iVar17;
        lVar9 = FUN__text__00191d1c(lVar6,&local_68);
        if (*(int *)(lVar9 + 0x18) != 0) {
          local_88 = *(undefined8 *)(lVar9 + 8);
          uStack_80 = *(undefined8 *)(lVar9 + 0x10);
          local_70 = 0;
          uVar8 = FUN__text__00194e98(uVar20,&local_70,&local_88);
          if (local_70 != 0) {
            (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
            local_70 = 0;
          }
          if ((uVar8 & 1) == 0) {
            lVar9 = uVar19 * 8;
            uVar19 = (ulong)((int)uVar19 + 1);
            *(ulong *)(param_1 + lVar9 + 0xa8) = CONCAT44(iStack_64,local_68);
          }
        }
        local_68 = 4;
        iStack_64 = iVar17;
        lVar9 = FUN__text__00191d1c(lVar6,&local_68);
        if (*(int *)(lVar9 + 0x18) != 0) {
          local_88 = *(undefined8 *)(lVar9 + 8);
          uStack_80 = *(undefined8 *)(lVar9 + 0x10);
          local_70 = 0;
          uVar8 = FUN__text__00194e98(uVar20,&local_70,&local_88);
          if (local_70 != 0) {
            (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
            local_70 = 0;
          }
          if ((uVar8 & 1) == 0) {
            lVar9 = uVar19 * 8;
            uVar19 = (ulong)((int)uVar19 + 1);
            *(ulong *)(param_1 + lVar9 + 0xa8) = CONCAT44(iStack_64,local_68);
          }
        }
        local_68 = 5;
        iStack_64 = iVar17;
        lVar9 = FUN__text__00191d1c(lVar6,&local_68);
        if (*(int *)(lVar9 + 0x18) != 0) {
          local_88 = *(undefined8 *)(lVar9 + 8);
          uStack_80 = *(undefined8 *)(lVar9 + 0x10);
          local_70 = 0;
          uVar8 = FUN__text__00194e98(uVar20,&local_70,&local_88);
          if (local_70 != 0) {
            (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
            local_70 = 0;
          }
          if ((uVar8 & 1) == 0) {
            lVar9 = uVar19 * 8;
            uVar19 = (ulong)((int)uVar19 + 1);
            *(ulong *)(param_1 + lVar9 + 0xa8) = CONCAT44(iStack_64,local_68);
          }
        }
        uVar18 = (uint)uVar19;
        iVar17 = iVar17 + 1;
      } while (iVar17 != 5);
      goto LAB__text__001a6a4c;
    }
    uVar18 = 0;
    uVar13 = *(uint *)(param_1 + 0x48);
    uVar10 = *(uint *)(param_1 + 0x50);
    uVar12 = 0;
    if (uVar13 <= uVar10) goto LAB__text__001a6a5c;
  }
  else {
    (**(code **)(*(long *)(lVar16 + 0x48) + 0x10))();
    lVar6 = FUN__text__001961a8(uVar20,param_2);
    if (lVar6 == 0) {
      uVar18 = 0;
    }
    else {
      uVar19 = 0;
      iVar17 = 0;
      lVar9 = lVar16 + 0x48;
      do {
        local_68 = 0;
        iStack_64 = iVar17;
        lVar7 = FUN__text__00191d1c(lVar6,&local_68);
        if (*(int *)(lVar7 + 0x18) != 0) {
          local_88 = *(undefined8 *)(lVar7 + 8);
          uStack_80 = *(undefined8 *)(lVar7 + 0x10);
          local_70 = lVar16;
          (**(code **)(*(long *)(lVar16 + 0x48) + 0x10))(lVar9);
          uVar8 = FUN__text__00194e98(uVar20,&local_70,&local_88);
          if (local_70 != 0) {
            (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
            local_70 = 0;
          }
          if ((uVar8 & 1) == 0) {
            lVar7 = uVar19 * 8;
            uVar19 = (ulong)((int)uVar19 + 1);
            *(ulong *)(param_1 + lVar7 + 0xa8) = CONCAT44(iStack_64,local_68);
          }
        }
        local_68 = 1;
        iStack_64 = iVar17;
        lVar7 = FUN__text__00191d1c(lVar6,&local_68);
        if (*(int *)(lVar7 + 0x18) != 0) {
          local_88 = *(undefined8 *)(lVar7 + 8);
          uStack_80 = *(undefined8 *)(lVar7 + 0x10);
          local_70 = lVar16;
          (**(code **)(*(long *)(lVar16 + 0x48) + 0x10))(lVar9);
          uVar8 = FUN__text__00194e98(uVar20,&local_70,&local_88);
          if (local_70 != 0) {
            (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
            local_70 = 0;
          }
          if ((uVar8 & 1) == 0) {
            lVar7 = uVar19 * 8;
            uVar19 = (ulong)((int)uVar19 + 1);
            *(ulong *)(param_1 + lVar7 + 0xa8) = CONCAT44(iStack_64,local_68);
          }
        }
        local_68 = 2;
        iStack_64 = iVar17;
        lVar7 = FUN__text__00191d1c(lVar6,&local_68);
        if (*(int *)(lVar7 + 0x18) != 0) {
          local_88 = *(undefined8 *)(lVar7 + 8);
          uStack_80 = *(undefined8 *)(lVar7 + 0x10);
          local_70 = lVar16;
          (**(code **)(*(long *)(lVar16 + 0x48) + 0x10))(lVar9);
          uVar8 = FUN__text__00194e98(uVar20,&local_70,&local_88);
          if (local_70 != 0) {
            (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
            local_70 = 0;
          }
          if ((uVar8 & 1) == 0) {
            lVar7 = uVar19 * 8;
            uVar19 = (ulong)((int)uVar19 + 1);
            *(ulong *)(param_1 + lVar7 + 0xa8) = CONCAT44(iStack_64,local_68);
          }
        }
        local_68 = 3;
        iStack_64 = iVar17;
        lVar7 = FUN__text__00191d1c(lVar6,&local_68);
        if (*(int *)(lVar7 + 0x18) != 0) {
          local_88 = *(undefined8 *)(lVar7 + 8);
          uStack_80 = *(undefined8 *)(lVar7 + 0x10);
          local_70 = lVar16;
          (**(code **)(*(long *)(lVar16 + 0x48) + 0x10))(lVar9);
          uVar8 = FUN__text__00194e98(uVar20,&local_70,&local_88);
          if (local_70 != 0) {
            (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
            local_70 = 0;
          }
          if ((uVar8 & 1) == 0) {
            lVar7 = uVar19 * 8;
            uVar19 = (ulong)((int)uVar19 + 1);
            *(ulong *)(param_1 + lVar7 + 0xa8) = CONCAT44(iStack_64,local_68);
          }
        }
        local_68 = 4;
        iStack_64 = iVar17;
        lVar7 = FUN__text__00191d1c(lVar6,&local_68);
        if (*(int *)(lVar7 + 0x18) != 0) {
          local_88 = *(undefined8 *)(lVar7 + 8);
          uStack_80 = *(undefined8 *)(lVar7 + 0x10);
          local_70 = lVar16;
          (**(code **)(*(long *)(lVar16 + 0x48) + 0x10))(lVar9);
          uVar8 = FUN__text__00194e98(uVar20,&local_70,&local_88);
          if (local_70 != 0) {
            (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
            local_70 = 0;
          }
          if ((uVar8 & 1) == 0) {
            lVar7 = uVar19 * 8;
            uVar19 = (ulong)((int)uVar19 + 1);
            *(ulong *)(param_1 + lVar7 + 0xa8) = CONCAT44(iStack_64,local_68);
          }
        }
        local_68 = 5;
        iStack_64 = iVar17;
        lVar7 = FUN__text__00191d1c(lVar6,&local_68);
        if (*(int *)(lVar7 + 0x18) != 0) {
          local_88 = *(undefined8 *)(lVar7 + 8);
          uStack_80 = *(undefined8 *)(lVar7 + 0x10);
          local_70 = lVar16;
          (**(code **)(*(long *)(lVar16 + 0x48) + 0x10))(lVar9);
          uVar8 = FUN__text__00194e98(uVar20,&local_70,&local_88);
          if (local_70 != 0) {
            (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
            local_70 = 0;
          }
          if ((uVar8 & 1) == 0) {
            lVar7 = uVar19 * 8;
            uVar19 = (ulong)((int)uVar19 + 1);
            *(ulong *)(param_1 + lVar7 + 0xa8) = CONCAT44(iStack_64,local_68);
          }
        }
        uVar18 = (uint)uVar19;
        iVar17 = iVar17 + 1;
      } while (iVar17 != 5);
    }
LAB__text__001a6a4c:
    uVar13 = *(uint *)(param_1 + 0x48);
    uVar10 = *(uint *)(param_1 + 0x50);
    uVar12 = uVar18;
    if (uVar13 <= uVar10) {
LAB__text__001a6a5c:
      uVar18 = uVar12;
      if (*(uint *)(param_1 + 0x4c) < *(uint *)(param_1 + 0x44)) {
        do {
          uVar13 = uVar13 + 1;
        } while (uVar13 <= uVar10);
      }
      else {
        uVar12 = 0;
        do {
          uVar14 = *(uint *)(param_1 + 0x44);
          do {
            uVar8 = (ulong)uVar14;
            uVar19 = (ulong)uVar14;
            uVar14 = uVar14 + 1;
            uVar12 = uVar12 + *(byte *)(param_1 + (ulong)uVar13 + uVar8 + uVar19 * 4 + 0x54);
          } while (uVar14 <= *(uint *)(param_1 + 0x4c));
          uVar13 = uVar13 + 1;
        } while (uVar13 <= uVar10);
        uVar20 = 1;
        if (uVar18 < uVar12) goto LAB__text__001a6f50;
      }
    }
  }
  uVar20 = *(undefined8 *)param_2;
  uVar5 = *(undefined8 *)(param_2 + 2);
  *(uint *)(param_1 + 0xa4) = uVar18;
  *(undefined1 *)(param_1 + 0x90) = 1;
  *(undefined8 *)(param_1 + 0x94) = uVar20;
  *(undefined8 *)(param_1 + 0x9c) = uVar5;
  if (*(long *)(param_1 + 0x18) == 0) {
LAB__text__001a6f88:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  uVar20 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x10);
  lVar6 = FUN__text__00195844(uVar20,*(undefined4 *)(param_1 + 0x24));
  puVar1 = (undefined4 *)(param_1 + 0x78);
  if (*(char *)(param_1 + 0x90) != '\0') {
    puVar1 = (undefined4 *)(param_1 + 0x94);
  }
  lVar9 = FUN__text__00195844(uVar20,*puVar1);
  uVar20 = 2;
  if (*(int *)(lVar6 + 0xc) == 1) {
    if (*(int *)(lVar9 + 0xc) == 1 || lVar6 == lVar9) goto LAB__text__001a6f50;
    lVar6 = 0;
    do {
      lVar7 = param_1 + 0x6d + lVar6;
      iVar17 = (int)lVar6;
      if (*(char *)(lVar7 + -0x19) != '\0') {
        local_68 = 0;
        iStack_64 = iVar17;
        FUN__text__00191328(&local_88,pcVar15,&local_68);
        local_90 = local_78;
        local_a0 = local_88;
        uStack_98 = uStack_80;
        uVar19 = FUN__text__001a93b0(lVar11,&local_a0,*(undefined4 *)(lVar9 + 0xc));
        *param_3 = *param_3 | uVar19;
      }
      if (*(char *)(lVar7 + -0x14) != '\0') {
        local_68 = 1;
        iStack_64 = iVar17;
        FUN__text__00191328(&local_88,pcVar15,&local_68);
        local_90 = local_78;
        local_a0 = local_88;
        uStack_98 = uStack_80;
        uVar19 = FUN__text__001a93b0(lVar11,&local_a0,*(undefined4 *)(lVar9 + 0xc));
        *param_3 = *param_3 | uVar19;
      }
      if (*(char *)(lVar7 + -0xf) != '\0') {
        local_68 = 2;
        iStack_64 = iVar17;
        FUN__text__00191328(&local_88,pcVar15,&local_68);
        local_90 = local_78;
        local_a0 = local_88;
        uStack_98 = uStack_80;
        uVar19 = FUN__text__001a93b0(lVar11,&local_a0,*(undefined4 *)(lVar9 + 0xc));
        *param_3 = *param_3 | uVar19;
      }
      if (*(char *)(lVar7 + -10) != '\0') {
        local_68 = 3;
        iStack_64 = iVar17;
        FUN__text__00191328(&local_88,pcVar15,&local_68);
        local_90 = local_78;
        local_a0 = local_88;
        uStack_98 = uStack_80;
        uVar19 = FUN__text__001a93b0(lVar11,&local_a0,*(undefined4 *)(lVar9 + 0xc));
        *param_3 = *param_3 | uVar19;
      }
      if (*(char *)(lVar7 + -5) != '\0') {
        local_68 = 4;
        iStack_64 = iVar17;
        FUN__text__00191328(&local_88,pcVar15,&local_68);
        local_90 = local_78;
        local_a0 = local_88;
        uStack_98 = uStack_80;
        uVar19 = FUN__text__001a93b0(lVar11,&local_a0,*(undefined4 *)(lVar9 + 0xc));
        *param_3 = *param_3 | uVar19;
      }
      if (*(char *)(param_1 + 0x6d + lVar6) != '\0') {
        local_68 = 5;
        iStack_64 = iVar17;
        FUN__text__00191328(&local_88,pcVar15,&local_68);
        local_90 = local_78;
        local_a0 = local_88;
        uStack_98 = uStack_80;
        uVar19 = FUN__text__001a93b0(lVar11,&local_a0,*(undefined4 *)(lVar9 + 0xc));
        *param_3 = *param_3 | uVar19;
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 != 5);
  }
  else {
    if ((lVar9 == lVar6) || (*(int *)(lVar9 + 0xc) != 1)) goto LAB__text__001a6f50;
    lVar6 = 0;
    do {
      lVar7 = param_1 + 0x6d + lVar6;
      iVar17 = (int)lVar6;
      if (*(char *)(lVar7 + -0x19) != '\0') {
        local_68 = 0;
        iStack_64 = iVar17;
        FUN__text__00191328(&local_88,pcVar15,&local_68);
        local_a8 = local_78;
        local_b8 = local_88;
        uStack_b0 = uStack_80;
        uVar19 = FUN__text__001a96cc(lVar11,&local_b8,*(undefined4 *)(lVar9 + 0xc));
        *param_3 = *param_3 | uVar19;
      }
      if (*(char *)(lVar7 + -0x14) != '\0') {
        local_68 = 1;
        iStack_64 = iVar17;
        FUN__text__00191328(&local_88,pcVar15,&local_68);
        local_a8 = local_78;
        local_b8 = local_88;
        uStack_b0 = uStack_80;
        uVar19 = FUN__text__001a96cc(lVar11,&local_b8,*(undefined4 *)(lVar9 + 0xc));
        *param_3 = *param_3 | uVar19;
      }
      if (*(char *)(lVar7 + -0xf) != '\0') {
        local_68 = 2;
        iStack_64 = iVar17;
        FUN__text__00191328(&local_88,pcVar15,&local_68);
        local_a8 = local_78;
        local_b8 = local_88;
        uStack_b0 = uStack_80;
        uVar19 = FUN__text__001a96cc(lVar11,&local_b8,*(undefined4 *)(lVar9 + 0xc));
        *param_3 = *param_3 | uVar19;
      }
      if (*(char *)(lVar7 + -10) != '\0') {
        local_68 = 3;
        iStack_64 = iVar17;
        FUN__text__00191328(&local_88,pcVar15,&local_68);
        local_a8 = local_78;
        local_b8 = local_88;
        uStack_b0 = uStack_80;
        uVar19 = FUN__text__001a96cc(lVar11,&local_b8,*(undefined4 *)(lVar9 + 0xc));
        *param_3 = *param_3 | uVar19;
      }
      if (*(char *)(lVar7 + -5) != '\0') {
        local_68 = 4;
        iStack_64 = iVar17;
        FUN__text__00191328(&local_88,pcVar15,&local_68);
        local_a8 = local_78;
        local_b8 = local_88;
        uStack_b0 = uStack_80;
        uVar19 = FUN__text__001a96cc(lVar11,&local_b8,*(undefined4 *)(lVar9 + 0xc));
        *param_3 = *param_3 | uVar19;
      }
      if (*(char *)(param_1 + 0x6d + lVar6) != '\0') {
        local_68 = 5;
        iStack_64 = iVar17;
        FUN__text__00191328(&local_88,pcVar15,&local_68);
        local_a8 = local_78;
        local_b8 = local_88;
        uStack_b0 = uStack_80;
        uVar19 = FUN__text__001a96cc(lVar11,&local_b8,*(undefined4 *)(lVar9 + 0xc));
        *param_3 = *param_3 | uVar19;
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 != 5);
  }
  uVar20 = 2;
LAB__text__001a6f50:
  if (lVar16 != 0) {
    (**(code **)(*(long *)(lVar16 + 0x48) + 0x18))((long *)(lVar16 + 0x48));
  }
  return uVar20;
}


