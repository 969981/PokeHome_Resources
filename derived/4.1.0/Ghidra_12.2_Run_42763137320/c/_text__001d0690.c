/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001d0690; name: FUN_.text__001d0690
 */


void FUN__text__001d0690(long param_1,undefined4 param_2,ulong param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  bool bVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  long lVar20;
  long *plVar21;
  int local_c0;
  int iStack_bc;
  int local_b0;
  int iStack_8c;
  ulong local_78;
  int iStack_70;
  undefined8 local_6c;
  
  lVar10 = *(long *)(param_1 + 0x18);
  if (lVar10 == 0) {
LAB__text__001d0c14:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  lVar15 = *(long *)(param_1 + 8);
  lVar20 = *(long *)(lVar15 + 0x2d0);
  if (lVar20 != 0) {
    (**(code **)(*(long *)(lVar20 + 0x48) + 0x10))();
  }
  lVar15 = lVar15 + 0x110;
  lVar7 = FUN__text__00192b40(*(undefined8 *)(param_1 + 0x5788),param_2);
  uVar3 = *(uint *)(lVar7 + 8);
  uVar8 = FUN__text__0019f5bc(*(undefined8 *)(param_1 + 0x38));
  if ((uVar8 & 1) != 0) {
    lVar14 = *(long *)(param_1 + 0x38);
    lVar11 = *(long *)(lVar14 + 0x148);
    iStack_8c = *(int *)(lVar11 + 0x20);
    if (*(uint *)(param_1 + 0x30) ==
        (uint)(*(int *)(lVar14 + 0x1b0) != iStack_8c && *(int *)(lVar14 + 0x1b4) == iStack_8c)) {
      local_c0 = *(int *)(lVar11 + 0x2c);
      bVar4 = true;
      local_b0 = *(int *)(lVar11 + 0x24);
      iStack_bc = *(int *)(lVar11 + 0x28);
      goto joined_r0x001d09b4;
    }
  }
  local_c0 = 0;
  iStack_bc = 0;
  local_b0 = 0;
  bVar4 = false;
  iStack_8c = 0;
joined_r0x001d09b4:
  if ((param_3 & 1) == 0) {
    lVar11 = 0;
    lVar14 = param_1 + 0x13f0;
    do {
      lVar17 = 0;
      lVar18 = lVar14;
      do {
        local_78 = CONCAT44((int)lVar11,(int)lVar17);
        uVar5 = FUN__text__00191374(&local_78);
        if (uVar5 < uVar3) {
          local_78 = CONCAT44((int)lVar11,(int)lVar17);
          lVar9 = FUN__text__001920e4(lVar7,&local_78);
          if (*(int *)(lVar9 + 0x18) == 0) goto LAB__text__001d07a0;
          iVar1 = *(int *)(lVar9 + 8);
          iVar2 = *(int *)(lVar9 + 0xc);
          uVar16 = *(undefined8 *)(lVar9 + 0x10);
          bVar13 = false;
          if (iStack_8c == iVar1) {
            bVar13 = bVar4;
          }
          if (((bVar13) && (local_b0 == iVar2)) &&
             ((iStack_bc == (int)uVar16 && (local_c0 == (int)((ulong)uVar16 >> 0x20))))) {
            bVar13 = false;
          }
          else {
            bVar13 = true;
          }
          lVar12 = *(long *)(param_1 + 0x18);
          if (lVar12 == 0) goto LAB__text__001d0c14;
          uVar19 = *(undefined8 *)(lVar12 + 0x10);
          uVar8 = *(ulong *)(lVar12 + 0x158);
          if (uVar8 == 0) {
            lVar12 = *(long *)(param_1 + 8);
          }
          else {
            plVar21 = (long *)(uVar8 + 0x48);
            (**(code **)(*plVar21 + 0x10))(plVar21);
            lVar12 = *(long *)(param_1 + 8);
            (**(code **)(*plVar21 + 0x10))(plVar21);
          }
          local_78 = uVar8;
          iVar6 = FUN__text__00195870(uVar19,&local_78,lVar9);
          if (local_78 != 0) {
            (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
            local_78 = 0;
          }
          if (iVar6 == 0) {
            FUN__text__0012c378(lVar12 + 0x110,param_1 + lVar17 * 0x3c0 + lVar11 * 0xc0 + 0x1470);
          }
          else if (iVar6 == *(int *)(lVar9 + 0x2c)) {
            FUN__text__0012c378(lVar12 + 0x110,param_1 + lVar17 * 0x3c0 + lVar11 * 0xc0 + 0x1480);
          }
          else {
            FUN__text__0012c378(lVar12 + 0x110,lVar18 + 0x88);
          }
          if (uVar8 != 0) {
            (**(code **)(*(long *)(uVar8 + 0x48) + 0x18))((long *)(uVar8 + 0x48));
          }
          local_78 = CONCAT44(iVar1,(int)local_78) & 0xffffffffffffff00;
          iStack_70 = iVar2;
          local_6c = uVar16;
          FUN__text__001d2940(lVar15,lVar10,&local_78,lVar18);
          lVar9 = 0xa8;
          if (!bVar13) {
            lVar9 = 0xb0;
          }
          FUN__text__0012c378(*(long *)(param_1 + 8) + 0x110,lVar18 + lVar9);
          uVar16 = 1;
        }
        else {
LAB__text__001d07a0:
          uVar16 = 0;
        }
        FUN__text__003c7c60(lVar20,lVar18 + 8,uVar16);
        lVar17 = lVar17 + 1;
        lVar18 = lVar18 + 0x3c0;
      } while (lVar17 != 6);
      lVar11 = lVar11 + 1;
      lVar14 = lVar14 + 0xc0;
    } while (lVar11 != 5);
  }
  else {
    lVar11 = 0;
    lVar14 = param_1 + 0x2a70;
    do {
      lVar17 = 0;
      lVar18 = lVar14;
      do {
        local_78 = CONCAT44((int)lVar11,(int)lVar17);
        uVar5 = FUN__text__00191374(&local_78);
        if (uVar5 < uVar3) {
          local_78 = CONCAT44((int)lVar11,(int)lVar17);
          lVar9 = FUN__text__001920e4(lVar7,&local_78);
          if (*(int *)(lVar9 + 0x18) == 0) goto LAB__text__001d09e4;
          iVar1 = *(int *)(lVar9 + 8);
          iVar2 = *(int *)(lVar9 + 0xc);
          uVar16 = *(undefined8 *)(lVar9 + 0x10);
          bVar13 = false;
          if (iStack_8c == iVar1) {
            bVar13 = bVar4;
          }
          if ((((bVar13) && (local_b0 == iVar2)) && (iStack_bc == (int)uVar16)) &&
             (local_c0 == (int)((ulong)uVar16 >> 0x20))) {
            bVar13 = false;
          }
          else {
            bVar13 = true;
          }
          lVar12 = *(long *)(param_1 + 0x18);
          if (lVar12 == 0) goto LAB__text__001d0c14;
          uVar19 = *(undefined8 *)(lVar12 + 0x10);
          uVar8 = *(ulong *)(lVar12 + 0x158);
          if (uVar8 == 0) {
            lVar12 = *(long *)(param_1 + 8);
          }
          else {
            plVar21 = (long *)(uVar8 + 0x48);
            (**(code **)(*plVar21 + 0x10))(plVar21);
            lVar12 = *(long *)(param_1 + 8);
            (**(code **)(*plVar21 + 0x10))(plVar21);
          }
          local_78 = uVar8;
          iVar6 = FUN__text__00195870(uVar19,&local_78,lVar9);
          if (local_78 != 0) {
            (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
            local_78 = 0;
          }
          if (iVar6 == 0) {
            FUN__text__0012c378(lVar12 + 0x110,param_1 + lVar17 * 0x3c0 + lVar11 * 0xc0 + 0x2af0);
          }
          else if (iVar6 == *(int *)(lVar9 + 0x2c)) {
            FUN__text__0012c378(lVar12 + 0x110,param_1 + lVar17 * 0x3c0 + lVar11 * 0xc0 + 0x2b00);
          }
          else {
            FUN__text__0012c378(lVar12 + 0x110,lVar18 + 0x88);
          }
          if (uVar8 != 0) {
            (**(code **)(*(long *)(uVar8 + 0x48) + 0x18))((long *)(uVar8 + 0x48));
          }
          local_78 = CONCAT44(iVar1,(int)local_78) & 0xffffffffffffff00;
          iStack_70 = iVar2;
          local_6c = uVar16;
          FUN__text__001d2940(lVar15,lVar10,&local_78,lVar18);
          lVar9 = 0xa8;
          if (!bVar13) {
            lVar9 = 0xb0;
          }
          FUN__text__0012c378(*(long *)(param_1 + 8) + 0x110,lVar18 + lVar9);
          uVar16 = 1;
        }
        else {
LAB__text__001d09e4:
          uVar16 = 0;
        }
        FUN__text__003c7c60(lVar20,lVar18 + 8,uVar16);
        lVar17 = lVar17 + 1;
        lVar18 = lVar18 + 0x3c0;
      } while (lVar17 != 6);
      lVar11 = lVar11 + 1;
      lVar14 = lVar14 + 0xc0;
    } while (lVar11 != 5);
  }
  if (lVar20 != 0) {
    (**(code **)(*(long *)(lVar20 + 0x48) + 0x18))((long *)(lVar20 + 0x48));
  }
  return;
}


