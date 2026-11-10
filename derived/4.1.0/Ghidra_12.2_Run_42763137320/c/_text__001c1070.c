/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001c1070; name: FUN_.text__001c1070
 */


void FUN__text__001c1070(undefined2 *param_1,undefined8 *param_2,undefined8 *param_3,char *param_4)

{
  undefined4 uVar1;
  uint uVar2;
  bool bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  uint uVar12;
  int iVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  long *plVar17;
  long lVar18;
  int local_c0;
  uint local_bc;
  long local_b0;
  long local_a8;
  uint local_a0;
  undefined4 uStack_9c;
  undefined5 local_98;
  undefined3 uStack_93;
  int local_8c;
  undefined1 local_88 [4];
  uint local_84;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_70;
  long local_68;
  
  if ((param_3 == (undefined8 *)0x0) || (lVar18 = param_3[2], lVar18 == 0))
  goto LAB__text__001c1784;
  lVar16 = param_3[0x2b];
  local_70 = lVar16;
  local_68 = lVar16;
  if (lVar16 == 0) {
    *param_1 = 0;
    *param_2 = 0;
  }
  else {
    plVar17 = (long *)(lVar16 + 0x48);
    (**(code **)(*plVar17 + 0x10))(plVar17);
    *param_1 = 0;
    *param_2 = 0;
    (**(code **)(*plVar17 + 0x10))(plVar17);
  }
  FUN__text__001916b0(lVar18,&local_70,param_4,1);
  if (local_70 != 0) {
    (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
    local_70 = 0;
  }
  local_80 = 0;
  uStack_78 = 0;
  lVar14 = FUN__text__00195358(lVar18,param_4);
  if (lVar14 == 0) {
    FUN__text__00306588(lVar16);
    goto joined_r0x001c11c0;
  }
  local_80 = *(undefined8 *)(lVar14 + 8);
  uStack_78 = *(undefined8 *)(lVar14 + 0x10);
  uVar15 = FUN__text__00306588(lVar16);
  if ((uVar15 & 1) != 0) goto joined_r0x001c11c0;
  lVar14 = FUN__text__00195844(lVar18,*(undefined4 *)(param_4 + 4));
  iVar13 = *(int *)(lVar14 + 0xc);
  local_84 = 0;
  lVar14 = FUN__text__00196260(lVar18);
  if (lVar14 == 0) {
    if (local_84 != 0) goto LAB__text__001c1180;
LAB__text__001c1204:
    local_88[0] = 0;
    local_bc = 0;
    bVar3 = false;
    bVar4 = 0;
    local_8c = 0xd;
  }
  else {
    local_84 = *(uint *)(lVar14 + 0xc);
    if (local_84 == 0) goto LAB__text__001c1204;
LAB__text__001c1180:
    local_88[0] = 0;
    uVar15 = FUN__text__001969a8(local_84,local_88);
    local_8c = 0xd;
    if (local_84 == 0) {
      bVar3 = false;
      local_bc = 0;
      bVar4 = 0;
      if ((uVar15 & 1) != 0) goto LAB__text__001c122c;
    }
    else {
      local_bc = FUN__text__001969cc(local_84,&local_8c);
      if ((uVar15 & 1) == 0) {
        bVar4 = 0;
        bVar3 = false;
      }
      else {
LAB__text__001c122c:
        bVar4 = FUN__text__0030672c(lVar16);
        local_98 = 0;
        local_a0 = 0;
        uStack_9c = 0;
        FUN__text__00307180(lVar16,&local_a0,0xd);
        lVar14 = FUN__text__00325bc0();
        uVar15 = FUN__text__0016af40(*(undefined4 *)(lVar14 + 0x2c),&local_a0);
        iVar7 = FUN__text__00308390(lVar16);
        iVar8 = FUN__text__00306724(lVar16,0);
        if ((iVar7 == 1) && ((uVar15 & 1) == 0)) {
          FUN__text__00306724(lVar16,1);
          FUN__text__00306724(lVar16,2);
          FUN__text__00306724(lVar16,3);
LAB__text__001c12b0:
          bVar3 = false;
        }
        else {
          bVar6 = iVar8 != 0;
          if ((bVar4 < bVar6) ||
             ((iVar8 == 0 || (uVar15 = FUN__text__00321bb0(local_88[0]), (uVar15 & 1) != 0)))) {
            iVar7 = FUN__text__00306724(lVar16,1);
            if (iVar7 != 0) {
              bVar6 = bVar6 + 1;
            }
            if (((bVar4 < bVar6) || (iVar7 == 0)) ||
               (uVar15 = FUN__text__00321bb0(local_88[0],iVar7), (uVar15 & 1) != 0)) {
              iVar7 = FUN__text__00306724(lVar16,2);
              if (iVar7 != 0) {
                bVar6 = bVar6 + 1;
              }
              if (((bVar4 < bVar6) || (iVar7 == 0)) ||
                 (uVar15 = FUN__text__00321bb0(local_88[0],iVar7), (uVar15 & 1) != 0)) {
                iVar7 = FUN__text__00306724(lVar16,3);
                if (iVar7 != 0) {
                  bVar6 = bVar6 + 1;
                }
                if (((bVar4 < bVar6) || (iVar7 == 0)) ||
                   (uVar15 = FUN__text__00321bb0(local_88[0],iVar7), (uVar15 & 1) != 0))
                goto LAB__text__001c12b0;
              }
            }
          }
          bVar3 = true;
        }
        bVar4 = 1;
      }
    }
  }
  uVar12 = local_bc;
  uVar9 = FUN__text__00307e54(lVar16);
  lVar14 = param_3[0xe3];
  if (lVar14 == 0) {
LAB__text__001c1784:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  local_a0 = *(uint *)(param_4 + 4);
  uStack_9c = *(undefined4 *)(param_4 + 8);
  local_98 = (undefined5)*(undefined8 *)(param_4 + 0xc);
  uStack_93 = (undefined3)((ulong)*(undefined8 *)(param_4 + 0xc) >> 0x28);
  if (*param_4 != '\0') {
    FUN__text__001934c4(lVar18,param_4,&local_a0);
  }
  uVar2 = local_84;
  lVar18 = *(long *)(lVar14 + 0x168);
  if (lVar18 == 0) {
    local_c0 = 8;
    if ((uVar9 & 1) != 0) goto LAB__text__001c14a4;
LAB__text__001c1408:
    if (bVar3) goto LAB__text__001c14a8;
    if (bVar4 == 0) goto LAB__text__001c14b8;
LAB__text__001c1414:
    FUN__text__00306a20(lVar16);
    local_a0 = *(uint *)(lVar16 + 0x98);
    if (((local_a0 - 1 < 2) && (local_84 - 4 < 0xfffffffe)) &&
       (uVar15 = FUN__text__00307b78(lVar16), (uVar15 & 1) == 0)) {
      local_bc = FUN__text__00307ba4(lVar16);
      local_bc = local_bc ^ 1;
    }
    else {
      local_bc = 0;
    }
    uVar10 = FUN__text__00196a40(&local_a0,&local_84);
    uVar2 = uVar10;
    if ((local_84 & 0xfffffffe) != 2) goto LAB__text__001c1504;
LAB__text__001c14d4:
    uVar10 = uVar2;
    if ((1 < *(int *)(lVar16 + 0x98) - 1U) ||
       ((uVar15 = FUN__text__00307b78(lVar16), (uVar15 & 1) == 0 &&
        (uVar15 = FUN__text__00307ba4(lVar16), (uVar15 & 1) == 0)))) goto LAB__text__001c1504;
    bVar6 = 1;
  }
  else {
    iVar7 = *(int *)*param_3;
    plVar17 = (long *)(lVar16 + 0x48);
    (**(code **)(*plVar17 + 0x10))(plVar17);
    uVar15 = FUN__text__00306588(lVar16);
    if ((uVar15 & 1) == 0) {
      uVar15 = FUN__text__00307ba4(lVar16);
      if ((uVar15 & 1) == 0) {
        if ((iVar7 == 2) && (uVar15 = FUN__text__001c6650(lVar18,&local_a0), (uVar15 & 1) != 0)) {
          local_c0 = 7;
        }
        else {
          if ((uVar2 != 0) || (uVar15 = FUN__text__00307b78(lVar16), (uVar15 & 1) == 0))
          goto LAB__text__001c13f0;
          local_c0 = 6;
        }
      }
      else {
        local_c0 = 5;
      }
    }
    else {
LAB__text__001c13f0:
      local_c0 = 8;
    }
    (**(code **)(*plVar17 + 0x18))(plVar17);
    if ((uVar9 & 1) == 0) goto LAB__text__001c1408;
LAB__text__001c14a4:
    param_1 = (undefined2 *)((long)param_1 + 1);
LAB__text__001c14a8:
    *(undefined1 *)param_1 = 1;
    if (bVar4 != 0) goto LAB__text__001c1414;
LAB__text__001c14b8:
    local_bc = 0;
    uVar10 = 0;
    uVar2 = 0;
    if ((local_84 & 0xfffffffe) == 2) goto LAB__text__001c14d4;
LAB__text__001c1504:
    bVar6 = 0;
  }
  local_98 = 0;
  local_a0 = 0;
  uStack_9c = 0;
  FUN__text__00307180(lVar16,&local_a0,0xd);
  if ((uVar12 & 1) == 0) {
    bVar3 = true;
  }
  else {
    bVar3 = local_88[(long)local_8c + -0x18] == '\0';
  }
  uVar12 = local_a0 & 0xff;
  if (local_84 == 0 || ((uVar9 ^ 0xffffffff) & 1) != 0) {
    bVar5 = 1;
  }
  else {
    bVar5 = FUN__text__00307eb0(lVar16);
  }
  uVar1 = local_80._4_4_;
  uVar11 = FUN__text__00191374(&uStack_78);
  if (iVar13 == 1) {
    uVar12 = thunk_FUN__text__00321ad0(uVar1,uVar11,&local_68);
    if (local_c0 == 5) goto LAB__text__001c169c;
    if ((uVar12 >> 1 & 1) == 0) {
      bVar4 = bVar6 | bVar5 ^ 1 | (bVar3 | bVar4 ^ 0xff) & local_84 != 0;
      lVar16 = local_68;
LAB__text__001c15d8:
      bVar6 = FUN__text__00306a08(lVar16,2);
      if (*(int *)*param_3 == 2) {
        local_b0 = local_68;
        if (local_68 != 0) {
          (**(code **)(*(long *)(local_68 + 0x48) + 0x10))();
        }
        iVar13 = FUN__text__001a0ee0(lVar14,&local_b0,&local_80);
        if (local_b0 != 0) {
          (**(code **)(*(long *)(local_b0 + 0x48) + 0x18))();
          local_b0 = 0;
        }
        if (iVar13 == 8 && ((bVar6 | bVar4) & 1) == 0) {
LAB__text__001c1738:
          if (local_c0 == 6) {
            param_2 = (undefined8 *)((long)param_2 + 6);
          }
          else {
            lVar16 = local_68;
            if (local_c0 != 7) goto joined_r0x001c11c0;
            param_2 = (undefined8 *)((long)param_2 + 7);
          }
        }
      }
      else if (((bVar6 | bVar4) & 1) == 0) goto LAB__text__001c1738;
    }
    else {
      param_2 = (undefined8 *)((long)param_2 + 2);
    }
  }
  else {
    local_a8 = lVar16;
    (**(code **)(*(long *)(lVar16 + 0x48) + 0x10))();
    uVar9 = thunk_FUN__text__00320e30(uVar1,uVar11,&local_a8);
    if (local_a8 != 0) {
      (**(code **)(*(long *)(local_a8 + 0x48) + 0x18))();
    }
    if (local_c0 != 5) {
      if (((local_bc | uVar10) & 1) == 0) {
        if (((uVar9 & 1) == 0) && ((uVar9 >> 2 & 1) == 0)) {
          if ((((((uVar9 >> 6 & 1) == 0) && ((uVar9 >> 3 & 1) == 0)) && ((uVar9 >> 5 & 1) == 0)) &&
              (((uVar9 >> 4 & 1) == 0 && ((uVar9 >> 8 & 1) == 0)))) && ((uVar9 >> 0xb & 1) == 0)) {
            bVar4 = (uVar9 & 0x600) != 0 || uVar12 == 0;
            goto LAB__text__001c15d8;
          }
          param_2 = (undefined8 *)((long)param_2 + 3);
        }
        else {
          param_2 = (undefined8 *)((long)param_2 + 1);
        }
      }
      else {
        param_2 = (undefined8 *)((long)param_2 + 4);
      }
      goto LAB__text__001c1770;
    }
LAB__text__001c169c:
    param_2 = (undefined8 *)((long)param_2 + 5);
  }
LAB__text__001c1770:
  *(undefined1 *)param_2 = 1;
  lVar16 = local_68;
joined_r0x001c11c0:
  if (lVar16 != 0) {
    (**(code **)(*(long *)(lVar16 + 0x48) + 0x18))((long *)(lVar16 + 0x48));
  }
  return;
}


