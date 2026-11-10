/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005d7230; name: FUN_.text__005d7230
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005d7230(long *param_1,int *param_2,uint param_3,undefined4 param_4,uint param_5,
                        undefined8 param_6)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  code *pcVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  int *piVar13;
  int *piVar14;
  undefined8 *puVar15;
  long *plVar16;
  int iVar17;
  int iVar18;
  long *plVar19;
  int iVar20;
  ulong uVar21;
  undefined8 local_418;
  undefined1 *local_410;
  int *local_408;
  undefined8 uStack_400;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  int local_3e8 [64];
  undefined1 local_2e8 [2];
  undefined2 local_2e6 [3];
  int aiStack_2e0 [152];
  long local_80;
  ulong local_78;
  int *local_70;
  uint local_64;
  
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = _DAT_0089f690 + 0x10;
  uVar21 = tpidr_el0;
  param_1[4] = 0;
  param_1[5] = 0;
  uVar21 = uVar21 & 0xffffffffffffe000;
  *(undefined4 *)(param_1 + 6) = 0;
  if (uVar21 == 0) {
    lVar10 = 0;
  }
  else {
    lVar10 = 0;
    if (*(long *)(uVar21 + 0x98) != 0) {
      lVar10 = *(long *)(uVar21 + *(long *)(uVar21 + 0x98) * 8 + 0x10);
    }
  }
  *(undefined4 *)(param_1 + 10) = 0;
  lVar8 = _DAT_008a59f8;
  *param_1 = _DAT_008a59f8 + 0x10;
  param_1[1] = lVar10;
  param_1[9] = lVar8 + 0x50;
  local_70 = param_2;
  FUN__text__006f4a74(param_1 + 0xb);
  *(undefined8 *)((long)param_1 + 0xac) = 0xffffffff00000000;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  *(undefined1 *)(param_1 + 0x15) = 1;
  *(undefined4 *)((long)param_1 + 0xb4) = 0;
  *(undefined1 *)(param_1 + 0x17) = 0;
  *(undefined8 *)((long)param_1 + 0xbc) = 0xffffffff00000000;
  *(undefined4 *)((long)param_1 + 0xc4) = 0;
  *(undefined1 *)(param_1 + 0x19) = 0;
  *(undefined8 *)((long)param_1 + 0xcc) = 0xffffffff00000000;
  *(undefined4 *)((long)param_1 + 0xd4) = 0;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  *(undefined8 *)((long)param_1 + 0xdc) = 0xffffffff00000000;
  *(undefined4 *)((long)param_1 + 0xe4) = 0;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  *(undefined8 *)((long)param_1 + 0xec) = 0xffffffff00000000;
  *(undefined4 *)((long)param_1 + 0xf4) = 0;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  *(undefined8 *)((long)param_1 + 0xfc) = 0xffffffff00000000;
  *(undefined4 *)((long)param_1 + 0x104) = 0;
  *(undefined1 *)(param_1 + 0x21) = 0;
  *(undefined8 *)((long)param_1 + 0x10c) = 0xffffffff00000000;
  *(undefined4 *)((long)param_1 + 0x114) = 0;
  *(undefined1 *)(param_1 + 0x23) = 0;
  *(undefined8 *)((long)param_1 + 0x11c) = 0xffffffff00000000;
  *(undefined4 *)((long)param_1 + 0x124) = 0;
  *(undefined1 *)(param_1 + 0x25) = 0;
  *(undefined8 *)((long)param_1 + 300) = 0xffffffff00000000;
  *(undefined4 *)((long)param_1 + 0x134) = 0;
  *(undefined1 *)(param_1 + 0x27) = 0;
  *(undefined8 *)((long)param_1 + 0x13c) = 0xffffffff00000000;
  *(undefined4 *)((long)param_1 + 0x144) = 0;
  *(undefined1 *)(param_1 + 0x29) = 0;
  *(undefined8 *)((long)param_1 + 0x14c) = 0xffffffff00000000;
  *(undefined4 *)((long)param_1 + 0x154) = 0;
  *(undefined1 *)(param_1 + 0x2b) = 0;
  *(undefined8 *)((long)param_1 + 0x15c) = 0xffffffff00000000;
  *(undefined4 *)((long)param_1 + 0x164) = 0;
  *(undefined1 *)(param_1 + 0x2d) = 0;
  *(undefined8 *)((long)param_1 + 0x16c) = 0xffffffff00000000;
  *(undefined4 *)((long)param_1 + 0x174) = 0;
  *(undefined1 *)(param_1 + 0x2f) = 0;
  *(undefined8 *)((long)param_1 + 0x17c) = 0xffffffff00000000;
  *(undefined4 *)((long)param_1 + 0x184) = 0;
  *(undefined1 *)(param_1 + 0x31) = 0;
  *(undefined8 *)((long)param_1 + 0x18c) = 0xffffffff00000000;
  *(undefined4 *)((long)param_1 + 0x194) = 0;
  *(undefined1 *)(param_1 + 0x33) = 0;
  *(undefined8 *)((long)param_1 + 0x19c) = 0xffffffff00000000;
  *(undefined4 *)((long)param_1 + 0x1a4) = 0;
  *(undefined1 *)(param_1 + 0x35) = 0;
  if (*(long *)(uVar21 + 0x98) == 0x10) {
LAB__text__005d76c8:
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  plVar19 = (long *)param_1[1];
  *(long **)(uVar21 + 0x18 + *(long *)(uVar21 + 0x98) * 8) = plVar19;
  *(long *)(uVar21 + 0x98) = *(long *)(uVar21 + 0x98) + 1;
  plVar7 = (long *)(**(code **)(*plVar19 + 0x10))(plVar19,0x100,0x10);
  if (plVar7 == (long *)0x0) {
    (**(code **)(*plVar19 + 0xb8))(plVar19);
                    /* WARNING: Does not return */
    pcVar6 = (code *)UndefinedInstructionException(0,0x5d76dc);
    (*pcVar6)();
  }
  plVar7[7] = 0;
  lVar10 = _DAT_008a5a00;
  *(undefined4 *)(plVar7 + 8) = 0;
  *(undefined4 *)(plVar7 + 6) = 0;
  *(undefined4 *)(plVar7 + 10) = 0;
  plVar7[0x10] = 0;
  plVar7[0x11] = 0;
  plVar16 = plVar7 + 0xb;
  *plVar16 = 0;
  plVar7[0xe] = 0;
  plVar7[0x12] = 0;
  plVar7[0x13] = 0;
  plVar7[9] = lVar10 + 0x48;
  plVar7[2] = (long)plVar7;
  plVar7[3] = 0x100;
  plVar7[0xc] = 0;
  plVar7[0xd] = 0;
  *plVar7 = lVar10 + 0x10;
  plVar7[1] = (long)plVar19;
  plVar7[4] = 0x10;
  plVar7[5] = 0;
  *(long *)(uVar21 + 0x98) = *(long *)(uVar21 + 0x98) + -1;
  (**(code **)(plVar7[9] + 0x10))();
  lVar10 = (long)(int)param_3;
  if ((param_5 & 1) != 0) {
    lVar10 = 1;
  }
  local_80 = lVar10 * 0x70;
  local_78 = (ulong)param_3;
  local_64 = param_5;
  lVar8 = (**(code **)(*plVar19 + 0x10))(plVar19,local_80,8);
  if (*(long *)(uVar21 + 0x98) == 0x10) goto LAB__text__005d76c8;
  *(long **)(uVar21 + 0x18 + *(long *)(uVar21 + 0x98) * 8) = plVar19;
  lVar11 = *(long *)(uVar21 + 0x98);
  *(long *)(uVar21 + 0x98) = lVar11 + 1;
  if (lVar10 != 0) {
    lVar11 = lVar8;
    do {
      FUN__text__005b4f04(lVar11);
      lVar10 = lVar10 + -1;
      lVar11 = lVar11 + 0x70;
    } while (lVar10 != 0);
    lVar11 = *(long *)(uVar21 + 0x98) + -1;
  }
  *(long *)(uVar21 + 0x98) = lVar11;
  lVar10 = *plVar16;
  *plVar16 = lVar8;
  uVar21 = local_78;
  if (lVar10 != 0) {
    uVar9 = plVar7[0xd];
    if (0x6f < uVar9) {
      uVar9 = uVar9 / 0x70;
      lVar8 = lVar10;
      do {
        FUN__text__005b4f34(lVar8);
        uVar9 = uVar9 - 1;
        lVar8 = lVar8 + 0x70;
      } while (uVar9 != 0);
      uVar9 = plVar7[0xd];
    }
    uVar21 = local_78;
    (**(code **)(*(long *)plVar7[0xc] + 0x18))((long *)plVar7[0xc],lVar10,uVar9,plVar7[0xe]);
  }
  plVar7[0xc] = (long)plVar19;
  plVar7[0xd] = local_80;
  plVar7[0xe] = 8;
  iVar20 = (int)uVar21;
  if ((local_64 & 1) == 0) {
    if (0 < iVar20) {
      lVar10 = 0;
      piVar14 = local_70;
      do {
        FUN__text__005b4f8c(*plVar16 + lVar10,4,(long)*(int *)((long)*piVar14 * 8 + 0x757cec),
                            param_4,param_6);
        lVar10 = lVar10 + 0x70;
        piVar14 = piVar14 + 4;
      } while ((uVar21 & 0xffffffff) * 0x70 != lVar10);
    }
  }
  else {
    if (iVar20 < 1) {
      lVar10 = 0;
    }
    else {
      if (iVar20 == 1) {
        uVar9 = 0;
        iVar18 = 0;
      }
      else {
        uVar9 = 0;
        iVar18 = 0;
        piVar14 = local_70 + 4;
        do {
          piVar13 = piVar14 + -4;
          uVar9 = uVar9 + 2;
          iVar17 = *piVar14;
          piVar14 = piVar14 + 8;
          iVar18 = *(int *)((long)iVar17 * 8 + 0x757cec) +
                   *(int *)((long)*piVar13 * 8 + 0x757cec) + iVar18;
        } while ((uVar21 & 0xfffffffe) != uVar9);
      }
      if ((uVar21 & 1) != 0) {
        iVar18 = *(int *)((long)local_70[uVar9 * 4] * 8 + 0x757cec) + iVar18;
      }
      lVar10 = (long)iVar18;
    }
    FUN__text__005b4f8c(*plVar16,4,lVar10,param_4,param_6);
  }
  if (param_1[0x13] != 0) {
    (**(code **)(*(long *)(param_1[0x13] + 0x48) + 0x18))();
  }
  piVar14 = local_70;
  param_1[0x13] = (long)plVar7;
  uVar2 = local_64 & 1;
  *(char *)(param_1 + 0x15) = (char)uVar2;
  iVar18 = iVar20;
  if (uVar2 != 0) {
    iVar18 = 1;
  }
  *(int *)(param_1 + 0x14) = iVar20;
  *(int *)((long)param_1 + 0xa4) = iVar18;
  memset(local_2e8,0,0x280);
  local_3e8[0x3c] = 0;
  local_3e8[0x3d] = 0;
  local_3e8[0x3e] = 0;
  local_3e8[0x3f] = 0;
  local_3e8[0x38] = 0;
  local_3e8[0x39] = 0;
  local_3e8[0x3a] = 0;
  local_3e8[0x3b] = 0;
  local_3e8[0x34] = 0;
  local_3e8[0x35] = 0;
  local_3e8[0x36] = 0;
  local_3e8[0x37] = 0;
  local_3e8[0x30] = 0;
  local_3e8[0x31] = 0;
  local_3e8[0x32] = 0;
  local_3e8[0x33] = 0;
  local_3e8[0x2c] = 0;
  local_3e8[0x2d] = 0;
  local_3e8[0x2e] = 0;
  local_3e8[0x2f] = 0;
  local_3e8[0x28] = 0;
  local_3e8[0x29] = 0;
  local_3e8[0x2a] = 0;
  local_3e8[0x2b] = 0;
  local_3e8[0x24] = 0;
  local_3e8[0x25] = 0;
  local_3e8[0x26] = 0;
  local_3e8[0x27] = 0;
  local_3e8[0x20] = 0;
  local_3e8[0x21] = 0;
  local_3e8[0x22] = 0;
  local_3e8[0x23] = 0;
  local_3e8[0x1c] = 0;
  local_3e8[0x1d] = 0;
  local_3e8[0x1e] = 0;
  local_3e8[0x1f] = 0;
  local_3e8[0x18] = 0;
  local_3e8[0x19] = 0;
  local_3e8[0x1a] = 0;
  local_3e8[0x1b] = 0;
  local_3e8[0x14] = 0;
  local_3e8[0x15] = 0;
  local_3e8[0x16] = 0;
  local_3e8[0x17] = 0;
  local_3e8[0x10] = 0;
  local_3e8[0x11] = 0;
  local_3e8[0x12] = 0;
  local_3e8[0x13] = 0;
  local_3e8[0xc] = 0;
  local_3e8[0xd] = 0;
  local_3e8[0xe] = 0;
  local_3e8[0xf] = 0;
  local_3e8[8] = 0;
  local_3e8[9] = 0;
  local_3e8[10] = 0;
  local_3e8[0xb] = 0;
  local_3e8[4] = 0;
  local_3e8[5] = 0;
  local_3e8[6] = 0;
  local_3e8[7] = 0;
  local_3e8[0] = 0;
  local_3e8[1] = 0;
  local_3e8[2] = 0;
  local_3e8[3] = 0;
  if (iVar20 < 1) {
    iVar17 = 0;
    iVar20 = 0;
    iVar18 = 0;
    if (uVar2 == 0) goto LAB__text__005d7954;
  }
  else {
    if (iVar20 == 1) {
      uVar9 = 0;
    }
    else {
      uVar9 = 0;
      piVar13 = piVar14 + 4;
      puVar15 = (undefined8 *)((long)param_1 + 0xbc);
      do {
        uVar12 = *(undefined8 *)(piVar13 + -4);
        uVar9 = uVar9 + 2;
        *(undefined8 *)((long)puVar15 + -0xb) = *(undefined8 *)((long)piVar13 + -0xb);
        puVar15[-2] = uVar12;
        uVar12 = *(undefined8 *)piVar13;
        puVar1 = (undefined8 *)((long)piVar13 + 5);
        piVar13 = piVar13 + 8;
        *(undefined8 *)((long)puVar15 + 5) = *puVar1;
        *puVar15 = uVar12;
        puVar15 = puVar15 + 4;
      } while ((uVar21 & 0xfffffffe) != uVar9);
    }
    if ((uVar21 & 1) != 0) {
      piVar14 = piVar14 + uVar9 * 4;
      uVar12 = *(undefined8 *)piVar14;
      *(undefined8 *)((long)param_1 + uVar9 * 0x10 + 0xb1) = *(undefined8 *)((long)piVar14 + 5);
      *(undefined8 *)((long)param_1 + uVar9 * 0x10 + 0xac) = uVar12;
    }
    if (uVar2 == 0) {
      if (iVar20 < 1) {
        iVar20 = 0;
      }
      else {
        lVar10 = 0;
        iVar18 = 0;
        piVar14 = (int *)((long)param_1 + 0xac);
        piVar13 = local_3e8;
        do {
          FUN__text__006ebdbc(local_2e8 + lVar10);
          iVar4 = piVar14[1];
          iVar17 = piVar14[2];
          uVar5 = *(undefined4 *)((long)*piVar14 * 8 + 0x757ce8);
          *(short *)((long)local_2e6 + lVar10 + 2) = (short)iVar18;
          local_2e8[lVar10] = (char)iVar17;
          *(undefined4 *)((long)aiStack_2e0 + lVar10 + 4) = uVar5;
          iVar17 = iVar18;
          if (-1 < iVar4) {
            iVar17 = iVar4;
          }
          iVar18 = iVar18 + 1;
          *(short *)((long)local_2e6 + lVar10) = (short)iVar17;
          FUN__text__006ebdd0(piVar13);
          iVar17 = *piVar14;
          lVar10 = lVar10 + 0x28;
          piVar14 = piVar14 + 4;
          *piVar13 = *(int *)((long)iVar17 * 8 + 0x757cec);
          piVar13 = piVar13 + 4;
        } while ((uVar21 & 0xffffffff) * 0x28 != lVar10);
      }
      goto LAB__text__005d7954;
    }
    if (iVar20 < 1) {
      iVar17 = 0;
      iVar18 = 0;
    }
    else {
      iVar20 = 0;
      lVar10 = 0;
      iVar17 = 0;
      piVar14 = (int *)((long)param_1 + 0xac);
      iVar18 = 0;
      do {
        if ((char)piVar14[3] == '\0') {
          FUN__text__006ebdbc(local_2e8 + lVar10);
          iVar3 = piVar14[1];
          lVar8 = (long)*piVar14;
          iVar18 = iVar18 + 1;
          local_2e8[lVar10] = (char)piVar14[2];
          iVar4 = iVar20;
          if (-1 < iVar3) {
            iVar4 = iVar3;
          }
          *(short *)((long)local_2e6 + lVar10) = (short)iVar4;
          uVar5 = *(undefined4 *)(lVar8 * 8 + 0x757ce8);
          *(int *)((long)aiStack_2e0 + lVar10) = iVar17;
          *(undefined4 *)((long)aiStack_2e0 + lVar10 + 4) = uVar5;
        }
        else {
          lVar8 = (long)*piVar14;
        }
        lVar10 = lVar10 + 0x28;
        piVar14 = piVar14 + 4;
        iVar20 = iVar20 + 1;
        iVar17 = *(int *)(lVar8 * 8 + 0x757cec) + iVar17;
      } while ((uVar21 & 0xffffffff) * 0x28 != lVar10);
    }
  }
  iVar20 = iVar18;
  FUN__text__006ebdd0(local_3e8);
  local_3e8[0] = iVar17;
LAB__text__005d7954:
  local_3f8 = 0;
  uStack_3f0 = 0;
  local_408 = (int *)0x0;
  uStack_400 = 0;
  local_418 = 0;
  local_410 = (undefined1 *)0x0;
  FUN__text__006ebdd8(&local_418);
  local_410 = local_2e8;
  local_408 = local_3e8;
  local_418._0_4_ = CONCAT22((short)*(undefined4 *)((long)param_1 + 0xa4),(short)iVar20);
  lVar10 = FUN__text__006f49f0(&local_418);
  plVar7 = (long *)param_1[1];
  lVar8 = (**(code **)(*plVar7 + 0x10))(plVar7,lVar10,8);
  lVar11 = param_1[0xf];
  param_1[0xf] = lVar8;
  if (lVar11 != 0) {
    (**(code **)(*(long *)param_1[0x10] + 0x18))
              ((long *)param_1[0x10],lVar11,param_1[0x11],param_1[0x12]);
    lVar8 = param_1[0xf];
  }
  param_1[0x10] = (long)plVar7;
  param_1[0x11] = lVar10;
  param_1[0x12] = 8;
  FUN__text__006f4a84(param_1 + 0xb,lVar8,lVar10);
  FUN__text__006f4aa0(param_1 + 0xb,_DAT_008a0448,&local_418,0);
  return;
}


