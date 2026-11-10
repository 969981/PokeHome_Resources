/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003ba170; name: FUN_.text__003ba170
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__003ba170(long *param_1,undefined8 param_2,long *param_3,long *param_4,long param_5)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  undefined8 uVar4;
  long *plVar5;
  uint *puVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  long *extraout_x8;
  ushort *puVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long *plVar16;
  long *plVar15;
  long *plVar17;
  uint *puVar18;
  undefined1 auVar19 [16];
  long local_120;
  long *local_118;
  long *local_110;
  long *local_108;
  long *local_100;
  long *local_f0;
  undefined8 uStack_e8;
  long local_e0 [4];
  long *local_c0;
  long *local_b0;
  undefined8 uStack_a8;
  long local_a0 [4];
  long *local_80;
  undefined8 local_70 [2];
  
  local_70[0] = param_2;
  FUN__text__003bb4fc(param_2,local_70);
  lVar9 = _DAT_008a3630;
  puVar6 = *(uint **)(*(long *)(param_5 + 8) + 400);
  local_80 = (long *)0x0;
  local_110 = (long *)0x0;
  local_108 = (long *)0x0;
  local_100 = (long *)0x0;
  local_c0 = (long *)0x0;
  piVar1 = (int *)((long)puVar6 + (ulong)*puVar6);
  uStack_a8 = 0x1fffffffffffffff;
  uStack_e8 = 0x1fffffffffffffff;
  lVar7 = -(long)*piVar1;
  puVar11 = (ushort *)((long)piVar1 - (long)*piVar1);
  local_f0 = param_3;
  local_b0 = param_3;
  if ((6 < *puVar11) && (uVar12 = (ulong)puVar11[3], uVar12 != 0)) {
    puVar6 = (uint *)((long)piVar1 + uVar12);
    puVar6 = (uint *)((long)puVar6 + (ulong)*puVar6);
    if (*puVar6 != 0) {
      uVar12 = tpidr_el0;
      uVar12 = uVar12 & 0xffffffffffffe000;
      puVar18 = puVar6 + 1;
      do {
        if (*(long *)(uVar12 + 0x98) == 0x10) goto LAB__text__003bb4e8;
        *(long **)((uVar12 | 0x18) + *(long *)(uVar12 + 0x98) * 8) = param_3;
        *(long *)(uVar12 + 0x98) = *(long *)(uVar12 + 0x98) + 1;
        plVar5 = (long *)(**(code **)(*param_3 + 0x10))(param_3,0x68,8);
        if (plVar5 == (long *)0x0) goto LAB__text__003bb4ec;
        plVar5[0xc] = 0;
        plVar17 = plVar5 + 9;
        *plVar17 = lVar9 + 0x50;
        *plVar5 = lVar9 + 0x10;
        plVar5[1] = (long)param_3;
        plVar5[4] = 8;
        plVar5[10] = 0;
        plVar5[0xb] = 0;
        plVar5[7] = 0;
        plVar5[8] = 0;
        plVar5[5] = 0;
        plVar5[6] = 0;
        plVar5[2] = (long)plVar5;
        plVar5[3] = 0x68;
        *(long *)(uVar12 + 0x98) = *(long *)(uVar12 + 0x98) + -1;
        (**(code **)(*plVar17 + 0x10))(plVar17);
        uVar13 = (ulong)*puVar18;
        lVar7 = 0;
        lVar14 = uVar13 - (long)*(int *)((long)puVar18 + uVar13);
        if (4 < *(ushort *)((long)puVar18 + lVar14)) {
          uVar8 = (ulong)*(ushort *)((long)puVar18 + lVar14 + 4);
          lVar7 = 0;
          if (uVar8 != 0) {
            lVar7 = *(long *)((long)puVar18 + uVar13 + uVar8);
          }
        }
        plVar5[0xb] = lVar7;
        plVar5[0xc] = (long)puVar18 + (ulong)*puVar18;
        local_118 = plVar5;
        (**(code **)(plVar5[9] + 0x10))(plVar17);
        plVar5 = local_118;
        if (local_108 < local_100) {
          if (*(long *)(uVar12 + 0x98) == 0x10) goto LAB__text__003bb4e8;
          *(long **)((uVar12 | 0x18) + *(long *)(uVar12 + 0x98) * 8) = local_f0;
          *(long *)(uVar12 + 0x98) = *(long *)(uVar12 + 0x98) + 1;
          local_118 = (long *)0x0;
          *local_108 = (long)plVar5;
          *(long *)(uVar12 + 0x98) = *(long *)(uVar12 + 0x98) + -1;
          local_108 = local_108 + 1;
        }
        else {
          FUN__text__003bb620(&local_110,&local_118);
          if (local_118 != (long *)0x0) {
            (**(code **)(local_118[9] + 0x18))();
          }
        }
        (**(code **)(*plVar17 + 0x18))(plVar17);
        puVar18 = puVar18 + 1;
      } while (puVar18 != puVar6 + 1 + *puVar6);
      lVar7 = -(long)*piVar1;
    }
  }
  lVar9 = _DAT_008a3660;
  if ((8 < *(ushort *)((long)piVar1 + lVar7)) &&
     (uVar12 = (ulong)((ushort *)((long)piVar1 + lVar7))[4], uVar12 != 0)) {
    puVar6 = (uint *)((long)piVar1 + uVar12);
    puVar6 = (uint *)((long)puVar6 + (ulong)*puVar6);
    if (*puVar6 != 0) {
      uVar12 = tpidr_el0;
      uVar12 = uVar12 & 0xffffffffffffe000;
      puVar18 = puVar6 + 1;
      do {
        if (*(long *)(uVar12 + 0x98) == 0x10) goto LAB__text__003bb4e8;
        *(long **)((uVar12 | 0x18) + *(long *)(uVar12 + 0x98) * 8) = param_3;
        *(long *)(uVar12 + 0x98) = *(long *)(uVar12 + 0x98) + 1;
        plVar5 = (long *)(**(code **)(*param_3 + 0x10))(param_3,0x68,8);
        if (plVar5 == (long *)0x0) goto LAB__text__003bb4ec;
        plVar5[0xc] = 0;
        plVar17 = plVar5 + 9;
        *plVar17 = lVar9 + 0x50;
        *plVar5 = lVar9 + 0x10;
        plVar5[1] = (long)param_3;
        plVar5[4] = 8;
        plVar5[10] = 0;
        plVar5[0xb] = 0;
        plVar5[7] = 0;
        plVar5[8] = 0;
        plVar5[5] = 0;
        plVar5[6] = 0;
        plVar5[2] = (long)plVar5;
        plVar5[3] = 0x68;
        *(long *)(uVar12 + 0x98) = *(long *)(uVar12 + 0x98) + -1;
        (**(code **)(*plVar17 + 0x10))(plVar17);
        uVar13 = (ulong)*puVar18;
        lVar7 = 0;
        lVar14 = uVar13 - (long)*(int *)((long)puVar18 + uVar13);
        if (4 < *(ushort *)((long)puVar18 + lVar14)) {
          uVar8 = (ulong)*(ushort *)((long)puVar18 + lVar14 + 4);
          lVar7 = 0;
          if (uVar8 != 0) {
            lVar7 = *(long *)((long)puVar18 + uVar13 + uVar8);
          }
        }
        plVar5[0xb] = lVar7;
        plVar5[0xc] = (long)puVar18 + (ulong)*puVar18;
        local_118 = plVar5;
        (**(code **)(plVar5[9] + 0x10))(plVar17);
        plVar5 = local_118;
        if (local_108 < local_100) {
          if (*(long *)(uVar12 + 0x98) == 0x10) goto LAB__text__003bb4e8;
          *(long **)((uVar12 | 0x18) + *(long *)(uVar12 + 0x98) * 8) = local_f0;
          *(long *)(uVar12 + 0x98) = *(long *)(uVar12 + 0x98) + 1;
          local_118 = (long *)0x0;
          *local_108 = (long)plVar5;
          *(long *)(uVar12 + 0x98) = *(long *)(uVar12 + 0x98) + -1;
          local_108 = local_108 + 1;
        }
        else {
          FUN__text__003bb620(&local_110,&local_118);
          if (local_118 != (long *)0x0) {
            (**(code **)(local_118[9] + 0x18))();
          }
        }
        (**(code **)(*plVar17 + 0x18))(plVar17);
        puVar18 = puVar18 + 1;
      } while (puVar18 != puVar6 + 1 + *puVar6);
      lVar7 = -(long)*piVar1;
    }
  }
  lVar9 = _DAT_008a3640;
  if ((0xe < *(ushort *)((long)piVar1 + lVar7)) &&
     (uVar12 = (ulong)((ushort *)((long)piVar1 + lVar7))[7], uVar12 != 0)) {
    puVar6 = (uint *)((long)piVar1 + uVar12);
    puVar6 = (uint *)((long)puVar6 + (ulong)*puVar6);
    if (*puVar6 != 0) {
      uVar12 = tpidr_el0;
      uVar12 = uVar12 & 0xffffffffffffe000;
      puVar18 = puVar6 + 1;
      do {
        if (*(long *)(uVar12 + 0x98) == 0x10) goto LAB__text__003bb4e8;
        *(long **)((uVar12 | 0x18) + *(long *)(uVar12 + 0x98) * 8) = param_3;
        *(long *)(uVar12 + 0x98) = *(long *)(uVar12 + 0x98) + 1;
        plVar5 = (long *)(**(code **)(*param_3 + 0x10))(param_3,0x68,8);
        if (plVar5 == (long *)0x0) goto LAB__text__003bb4ec;
        plVar5[0xc] = 0;
        plVar17 = plVar5 + 9;
        *plVar17 = lVar9 + 0x50;
        *plVar5 = lVar9 + 0x10;
        plVar5[1] = (long)param_3;
        plVar5[4] = 8;
        plVar5[10] = 0;
        plVar5[0xb] = 0;
        plVar5[7] = 0;
        plVar5[8] = 0;
        plVar5[5] = 0;
        plVar5[6] = 0;
        plVar5[2] = (long)plVar5;
        plVar5[3] = 0x68;
        *(long *)(uVar12 + 0x98) = *(long *)(uVar12 + 0x98) + -1;
        (**(code **)(*plVar17 + 0x10))(plVar17);
        uVar13 = (ulong)*puVar18;
        lVar7 = 0;
        lVar14 = uVar13 - (long)*(int *)((long)puVar18 + uVar13);
        if (4 < *(ushort *)((long)puVar18 + lVar14)) {
          uVar8 = (ulong)*(ushort *)((long)puVar18 + lVar14 + 4);
          lVar7 = 0;
          if (uVar8 != 0) {
            lVar7 = *(long *)((long)puVar18 + uVar13 + uVar8);
          }
        }
        plVar5[0xb] = lVar7;
        plVar5[0xc] = (long)puVar18 + (ulong)*puVar18;
        local_118 = plVar5;
        (**(code **)(plVar5[9] + 0x10))(plVar17);
        plVar5 = local_118;
        if (local_108 < local_100) {
          if (*(long *)(uVar12 + 0x98) == 0x10) goto LAB__text__003bb4e8;
          *(long **)((uVar12 | 0x18) + *(long *)(uVar12 + 0x98) * 8) = local_f0;
          *(long *)(uVar12 + 0x98) = *(long *)(uVar12 + 0x98) + 1;
          local_118 = (long *)0x0;
          *local_108 = (long)plVar5;
          *(long *)(uVar12 + 0x98) = *(long *)(uVar12 + 0x98) + -1;
          local_108 = local_108 + 1;
        }
        else {
          FUN__text__003bb620(&local_110,&local_118);
          if (local_118 != (long *)0x0) {
            (**(code **)(local_118[9] + 0x18))();
          }
        }
        (**(code **)(*plVar17 + 0x18))(plVar17);
        puVar18 = puVar18 + 1;
      } while (puVar18 != puVar6 + 1 + *puVar6);
      lVar7 = -(long)*piVar1;
    }
  }
  lVar9 = _DAT_008a3658;
  if ((0xc < *(ushort *)((long)piVar1 + lVar7)) &&
     (uVar12 = (ulong)((ushort *)((long)piVar1 + lVar7))[6], uVar12 != 0)) {
    puVar6 = (uint *)((long)piVar1 + uVar12);
    puVar6 = (uint *)((long)puVar6 + (ulong)*puVar6);
    if (*puVar6 != 0) {
      uVar12 = tpidr_el0;
      uVar12 = uVar12 & 0xffffffffffffe000;
      puVar18 = puVar6 + 1;
      do {
        if (*(long *)(uVar12 + 0x98) == 0x10) goto LAB__text__003bb4e8;
        *(long **)((uVar12 | 0x18) + *(long *)(uVar12 + 0x98) * 8) = param_3;
        *(long *)(uVar12 + 0x98) = *(long *)(uVar12 + 0x98) + 1;
        plVar5 = (long *)(**(code **)(*param_3 + 0x10))(param_3,0x70,8);
        if (plVar5 == (long *)0x0) goto LAB__text__003bb4ec;
        plVar17 = plVar5 + 9;
        *plVar17 = lVar9 + 0x50;
        *plVar5 = lVar9 + 0x10;
        plVar5[1] = (long)param_3;
        plVar5[2] = (long)plVar5;
        plVar5[3] = 0x70;
        plVar5[4] = 8;
        plVar5[0xc] = 0;
        plVar5[0xd] = 0;
        plVar5[10] = 0;
        plVar5[0xb] = 0;
        plVar5[7] = 0;
        plVar5[8] = 0;
        plVar5[5] = 0;
        plVar5[6] = 0;
        *(long *)(uVar12 + 0x98) = *(long *)(uVar12 + 0x98) + -1;
        (**(code **)(*plVar17 + 0x10))(plVar17);
        uVar13 = (ulong)*puVar18;
        lVar7 = 0;
        lVar14 = uVar13 - (long)*(int *)((long)puVar18 + uVar13);
        if (4 < *(ushort *)((long)puVar18 + lVar14)) {
          uVar8 = (ulong)*(ushort *)((long)puVar18 + lVar14 + 4);
          lVar7 = 0;
          if (uVar8 != 0) {
            lVar7 = *(long *)((long)puVar18 + uVar13 + uVar8);
          }
        }
        plVar5[0xb] = lVar7;
        plVar5[0xc] = (long)puVar18 + (ulong)*puVar18;
        plVar5[0xd] = (long)&local_110;
        local_118 = plVar5;
        (**(code **)(plVar5[9] + 0x10))(plVar17);
        plVar5 = local_118;
        if (local_108 < local_100) {
          if (*(long *)(uVar12 + 0x98) == 0x10) goto LAB__text__003bb4e8;
          *(long **)((uVar12 | 0x18) + *(long *)(uVar12 + 0x98) * 8) = local_f0;
          *(long *)(uVar12 + 0x98) = *(long *)(uVar12 + 0x98) + 1;
          local_118 = (long *)0x0;
          *local_108 = (long)plVar5;
          *(long *)(uVar12 + 0x98) = *(long *)(uVar12 + 0x98) + -1;
          local_108 = local_108 + 1;
        }
        else {
          FUN__text__003bb620(&local_110,&local_118);
          if (local_118 != (long *)0x0) {
            (**(code **)(local_118[9] + 0x18))();
          }
        }
        (**(code **)(*plVar17 + 0x18))(plVar17);
        puVar18 = puVar18 + 1;
      } while (puVar18 != puVar6 + 1 + *puVar6);
      lVar7 = -(long)*piVar1;
    }
  }
  lVar9 = _DAT_008a3648;
  if ((10 < *(ushort *)((long)piVar1 + lVar7)) &&
     (uVar12 = (ulong)((ushort *)((long)piVar1 + lVar7))[5], uVar12 != 0)) {
    puVar6 = (uint *)((long)piVar1 + uVar12);
    puVar6 = (uint *)((long)puVar6 + (ulong)*puVar6);
    if (*puVar6 != 0) {
      uVar12 = tpidr_el0;
      uVar12 = uVar12 & 0xffffffffffffe000;
      puVar18 = puVar6 + 1;
      do {
        if (*(long *)(uVar12 + 0x98) == 0x10) goto LAB__text__003bb4e8;
        *(long **)((uVar12 | 0x18) + *(long *)(uVar12 + 0x98) * 8) = param_3;
        *(long *)(uVar12 + 0x98) = *(long *)(uVar12 + 0x98) + 1;
        plVar5 = (long *)(**(code **)(*param_3 + 0x10))(param_3,0x70,8);
        if (plVar5 == (long *)0x0) goto LAB__text__003bb4ec;
        plVar17 = plVar5 + 9;
        *plVar17 = lVar9 + 0x50;
        *plVar5 = lVar9 + 0x10;
        plVar5[1] = (long)param_3;
        plVar5[2] = (long)plVar5;
        plVar5[3] = 0x70;
        plVar5[4] = 8;
        plVar5[10] = 0;
        plVar5[0xb] = 0;
        plVar5[7] = 0;
        plVar5[8] = 0;
        plVar5[5] = 0;
        plVar5[6] = 0;
        plVar5[0xc] = 0;
        plVar5[0xd] = 0;
        *(long *)(uVar12 + 0x98) = *(long *)(uVar12 + 0x98) + -1;
        (**(code **)(*plVar17 + 0x10))(plVar17);
        uVar13 = (ulong)*puVar18;
        lVar7 = 0;
        lVar14 = uVar13 - (long)*(int *)((long)puVar18 + uVar13);
        if (4 < *(ushort *)((long)puVar18 + lVar14)) {
          uVar8 = (ulong)*(ushort *)((long)puVar18 + lVar14 + 4);
          lVar7 = 0;
          if (uVar8 != 0) {
            lVar7 = *(long *)((long)puVar18 + uVar13 + uVar8);
          }
        }
        plVar5[0xb] = lVar7;
        plVar5[0xc] = (long)puVar18 + (ulong)*puVar18;
        plVar5[0xd] = (long)&local_110;
        local_118 = plVar5;
        (**(code **)(plVar5[9] + 0x10))(plVar17);
        plVar5 = local_118;
        if (local_108 < local_100) {
          if (*(long *)(uVar12 + 0x98) == 0x10) goto LAB__text__003bb4e8;
          *(long **)((uVar12 | 0x18) + *(long *)(uVar12 + 0x98) * 8) = local_f0;
          *(long *)(uVar12 + 0x98) = *(long *)(uVar12 + 0x98) + 1;
          local_118 = (long *)0x0;
          *local_108 = (long)plVar5;
          *(long *)(uVar12 + 0x98) = *(long *)(uVar12 + 0x98) + -1;
          local_108 = local_108 + 1;
        }
        else {
          FUN__text__003bb620(&local_110,&local_118);
          if (local_118 != (long *)0x0) {
            (**(code **)(local_118[9] + 0x18))();
          }
        }
        (**(code **)(*plVar17 + 0x18))(plVar17);
        puVar18 = puVar18 + 1;
      } while (puVar18 != puVar6 + 1 + *puVar6);
      lVar7 = -(long)*piVar1;
    }
  }
  lVar9 = _DAT_008a3638;
  if ((0x10 < *(ushort *)((long)piVar1 + lVar7)) &&
     (uVar12 = (ulong)((ushort *)((long)piVar1 + lVar7))[8], uVar12 != 0)) {
    puVar6 = (uint *)((long)piVar1 + uVar12);
    puVar6 = (uint *)((long)puVar6 + (ulong)*puVar6);
    if (*puVar6 != 0) {
      uVar12 = tpidr_el0;
      uVar12 = uVar12 & 0xffffffffffffe000;
      puVar18 = puVar6 + 1;
      do {
        if (*(long *)(uVar12 + 0x98) == 0x10) goto LAB__text__003bb4e8;
        *(long **)((uVar12 | 0x18) + *(long *)(uVar12 + 0x98) * 8) = param_3;
        *(long *)(uVar12 + 0x98) = *(long *)(uVar12 + 0x98) + 1;
        plVar5 = (long *)(**(code **)(*param_3 + 0x10))(param_3,0x68,8);
        if (plVar5 == (long *)0x0) goto LAB__text__003bb4ec;
        plVar5[0xc] = 0;
        plVar17 = plVar5 + 9;
        *plVar17 = lVar9 + 0x50;
        *plVar5 = lVar9 + 0x10;
        plVar5[1] = (long)param_3;
        plVar5[4] = 8;
        plVar5[10] = 0;
        plVar5[0xb] = 0;
        plVar5[7] = 0;
        plVar5[8] = 0;
        plVar5[5] = 0;
        plVar5[6] = 0;
        plVar5[2] = (long)plVar5;
        plVar5[3] = 0x68;
        *(long *)(uVar12 + 0x98) = *(long *)(uVar12 + 0x98) + -1;
        (**(code **)(*plVar17 + 0x10))(plVar17);
        uVar13 = (ulong)*puVar18;
        lVar7 = 0;
        lVar14 = uVar13 - (long)*(int *)((long)puVar18 + uVar13);
        if (4 < *(ushort *)((long)puVar18 + lVar14)) {
          uVar8 = (ulong)*(ushort *)((long)puVar18 + lVar14 + 4);
          lVar7 = 0;
          if (uVar8 != 0) {
            lVar7 = *(long *)((long)puVar18 + uVar13 + uVar8);
          }
        }
        plVar5[0xb] = lVar7;
        plVar5[0xc] = (long)puVar18 + (ulong)*puVar18;
        local_118 = plVar5;
        (**(code **)(plVar5[9] + 0x10))(plVar17);
        plVar5 = local_118;
        if (local_108 < local_100) {
          if (*(long *)(uVar12 + 0x98) == 0x10) goto LAB__text__003bb4e8;
          *(long **)((uVar12 | 0x18) + *(long *)(uVar12 + 0x98) * 8) = local_f0;
          *(long *)(uVar12 + 0x98) = *(long *)(uVar12 + 0x98) + 1;
          local_118 = (long *)0x0;
          *local_108 = (long)plVar5;
          *(long *)(uVar12 + 0x98) = *(long *)(uVar12 + 0x98) + -1;
          local_108 = local_108 + 1;
        }
        else {
          FUN__text__003bb620(&local_110,&local_118);
          if (local_118 != (long *)0x0) {
            (**(code **)(local_118[9] + 0x18))();
          }
        }
        (**(code **)(*plVar17 + 0x18))(plVar17);
        puVar18 = puVar18 + 1;
      } while (puVar18 != puVar6 + 1 + *puVar6);
      lVar7 = -(long)*piVar1;
    }
  }
  if ((0x12 < *(ushort *)((long)piVar1 + lVar7)) &&
     (uVar12 = (ulong)((ushort *)((long)piVar1 + lVar7))[9], uVar12 != 0)) {
    uVar13 = tpidr_el0;
    uVar13 = uVar13 & 0xffffffffffffe000;
    if (*(long *)(uVar13 + 0x98) == 0x10) {
LAB__text__003bb4e8:
                    /* WARNING: Subroutine does not return */
      FUN__text__00102c10();
    }
    puVar6 = (uint *)((long)piVar1 + uVar12);
    uVar3 = *puVar6;
    *(long **)(uVar13 + 0x18 + *(long *)(uVar13 + 0x98) * 8) = param_3;
    *(long *)(uVar13 + 0x98) = *(long *)(uVar13 + 0x98) + 1;
    plVar5 = (long *)(**(code **)(*param_3 + 0x10))(param_3,0x68,8);
    lVar9 = _DAT_008a3650;
    if (plVar5 == (long *)0x0) {
LAB__text__003bb4ec:
      auVar19 = (**(code **)(*param_3 + 0xb8))(param_3);
      plVar5 = auVar19._0_8_;
      uVar12 = tpidr_el0;
      uVar12 = uVar12 & 0xffffffffffffe000;
      if (*(long *)(uVar12 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
        FUN__text__00102c10();
      }
      *(long **)(uVar12 + *(long *)(uVar12 + 0x98) * 8 + 0x18) = plVar5;
      *(long *)(uVar12 + 0x98) = *(long *)(uVar12 + 0x98) + 1;
      lVar9 = (**(code **)(*plVar5 + 0x10))(plVar5,0xc0,8);
      if (lVar9 == 0) {
        (**(code **)(*plVar5 + 0xb8))(plVar5);
        FUN__text__003c0004(0,*auVar19._8_8_);
        _DAT_00000010 = 0;
        _DAT_00000018 = 0xc0;
        _DAT_00000020 = 8;
        _DAT_00000008 = plVar5;
        *(long *)(uVar12 + 0x98) = *(long *)(uVar12 + 0x98) + -1;
        *extraout_x8 = 0;
        return;
      }
      FUN__text__003c0004(lVar9,*auVar19._8_8_);
      *(long **)(lVar9 + 8) = plVar5;
      *(long *)(lVar9 + 0x10) = lVar9;
      *(undefined8 *)(lVar9 + 0x18) = 0xc0;
      *(undefined8 *)(lVar9 + 0x20) = 8;
      *(long *)(uVar12 + 0x98) = *(long *)(uVar12 + 0x98) + -1;
      (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
      *extraout_x8 = lVar9;
      return;
    }
    plVar5[7] = 0;
    plVar5[8] = 0;
    plVar5[5] = 0;
    plVar5[6] = 0;
    piVar2 = (int *)((long)puVar6 + (ulong)uVar3);
    plVar5[0xc] = 0;
    *plVar5 = lVar9 + 0x10;
    plVar5[1] = (long)param_3;
    plVar17 = plVar5 + 9;
    *plVar17 = lVar9 + 0x50;
    plVar5[10] = 0;
    plVar5[0xb] = 0;
    plVar5[2] = (long)plVar5;
    plVar5[3] = 0x68;
    plVar5[4] = 8;
    *(long *)(uVar13 + 0x98) = *(long *)(uVar13 + 0x98) + -1;
    (**(code **)(*plVar17 + 0x10))(plVar17);
    lVar9 = 0;
    if (4 < *(ushort *)((long)piVar2 - (long)*piVar2)) {
      uVar12 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[2];
      lVar9 = 0;
      if (uVar12 != 0) {
        lVar9 = *(long *)((long)piVar2 + uVar12);
      }
    }
    plVar5[0xb] = lVar9;
    plVar5[0xc] = (long)piVar2;
    local_118 = plVar5;
    (**(code **)(plVar5[9] + 0x10))(plVar17);
    plVar5 = local_118;
    if (local_108 < local_100) {
      if (*(long *)(uVar13 + 0x98) == 0x10) goto LAB__text__003bb4e8;
      *(long **)(uVar13 + 0x18 + *(long *)(uVar13 + 0x98) * 8) = local_f0;
      *(long *)(uVar13 + 0x98) = *(long *)(uVar13 + 0x98) + 1;
      local_118 = (long *)0x0;
      *local_108 = (long)plVar5;
      *(long *)(uVar13 + 0x98) = *(long *)(uVar13 + 0x98) + -1;
      local_108 = local_108 + 1;
    }
    else {
      FUN__text__003bb620(&local_110,&local_118);
      if (local_118 != (long *)0x0) {
        (**(code **)(local_118[9] + 0x18))();
      }
    }
    (**(code **)(*plVar17 + 0x18))(plVar17);
    lVar7 = -(long)*piVar1;
  }
  lVar9 = _DAT_008a3620;
  if ((0x14 < *(ushort *)((long)piVar1 + lVar7)) &&
     (uVar12 = (ulong)((ushort *)((long)piVar1 + lVar7))[10], uVar12 != 0)) {
    puVar6 = (uint *)((long)piVar1 + uVar12);
    puVar6 = (uint *)((long)puVar6 + (ulong)*puVar6);
    if (*puVar6 != 0) {
      uVar12 = tpidr_el0;
      uVar12 = uVar12 & 0xffffffffffffe000;
      puVar18 = puVar6 + 1;
      do {
        if (*(long *)(uVar12 + 0x98) == 0x10) goto LAB__text__003bb4e8;
        *(long **)((uVar12 | 0x18) + *(long *)(uVar12 + 0x98) * 8) = param_3;
        *(long *)(uVar12 + 0x98) = *(long *)(uVar12 + 0x98) + 1;
        plVar5 = (long *)(**(code **)(*param_3 + 0x10))(param_3,0x68,8);
        if (plVar5 == (long *)0x0) goto LAB__text__003bb4ec;
        plVar5[0xc] = 0;
        plVar17 = plVar5 + 9;
        *plVar17 = lVar9 + 0x50;
        *plVar5 = lVar9 + 0x10;
        plVar5[1] = (long)param_3;
        plVar5[4] = 8;
        plVar5[10] = 0;
        plVar5[0xb] = 0;
        plVar5[7] = 0;
        plVar5[8] = 0;
        plVar5[5] = 0;
        plVar5[6] = 0;
        plVar5[2] = (long)plVar5;
        plVar5[3] = 0x68;
        *(long *)(uVar12 + 0x98) = *(long *)(uVar12 + 0x98) + -1;
        (**(code **)(*plVar17 + 0x10))(plVar17);
        uVar13 = (ulong)*puVar18;
        lVar7 = 0;
        lVar14 = uVar13 - (long)*(int *)((long)puVar18 + uVar13);
        if (4 < *(ushort *)((long)puVar18 + lVar14)) {
          uVar8 = (ulong)*(ushort *)((long)puVar18 + lVar14 + 4);
          lVar7 = 0;
          if (uVar8 != 0) {
            lVar7 = *(long *)((long)puVar18 + uVar13 + uVar8);
          }
        }
        plVar5[0xb] = lVar7;
        plVar5[0xc] = (long)puVar18 + (ulong)*puVar18;
        local_118 = plVar5;
        (**(code **)(plVar5[9] + 0x10))(plVar17);
        plVar5 = local_118;
        if (local_108 < local_100) {
          if (*(long *)(uVar12 + 0x98) == 0x10) goto LAB__text__003bb4e8;
          *(long **)((uVar12 | 0x18) + *(long *)(uVar12 + 0x98) * 8) = local_f0;
          *(long *)(uVar12 + 0x98) = *(long *)(uVar12 + 0x98) + 1;
          local_118 = (long *)0x0;
          *local_108 = (long)plVar5;
          *(long *)(uVar12 + 0x98) = *(long *)(uVar12 + 0x98) + -1;
          local_108 = local_108 + 1;
        }
        else {
          FUN__text__003bb620(&local_110,&local_118);
          if (local_118 != (long *)0x0) {
            (**(code **)(local_118[9] + 0x18))();
          }
        }
        (**(code **)(*plVar17 + 0x18))(plVar17);
        puVar18 = puVar18 + 1;
      } while (puVar18 != puVar6 + 1 + *puVar6);
      lVar7 = -(long)*piVar1;
    }
  }
  lVar9 = _DAT_008a3628;
  if ((0x16 < *(ushort *)((long)piVar1 + lVar7)) &&
     (uVar12 = (ulong)((ushort *)((long)piVar1 + lVar7))[0xb], uVar12 != 0)) {
    puVar6 = (uint *)((long)piVar1 + uVar12);
    puVar6 = (uint *)((long)puVar6 + (ulong)*puVar6);
    if (*puVar6 != 0) {
      uVar12 = tpidr_el0;
      uVar12 = uVar12 & 0xffffffffffffe000;
      puVar18 = puVar6 + 1;
      do {
        if (*(long *)(uVar12 + 0x98) == 0x10) goto LAB__text__003bb4e8;
        *(long **)((uVar12 | 0x18) + *(long *)(uVar12 + 0x98) * 8) = param_3;
        *(long *)(uVar12 + 0x98) = *(long *)(uVar12 + 0x98) + 1;
        plVar5 = (long *)(**(code **)(*param_3 + 0x10))(param_3,0x70,8);
        if (plVar5 == (long *)0x0) goto LAB__text__003bb4ec;
        plVar17 = plVar5 + 9;
        *plVar17 = lVar9 + 0x50;
        *plVar5 = lVar9 + 0x10;
        plVar5[1] = (long)param_3;
        plVar5[2] = (long)plVar5;
        plVar5[3] = 0x70;
        plVar5[4] = 8;
        plVar5[10] = 0;
        plVar5[0xb] = 0;
        plVar5[7] = 0;
        plVar5[8] = 0;
        plVar5[5] = 0;
        plVar5[6] = 0;
        plVar5[0xc] = 0;
        plVar5[0xd] = 0;
        *(long *)(uVar12 + 0x98) = *(long *)(uVar12 + 0x98) + -1;
        (**(code **)(*plVar17 + 0x10))(plVar17);
        uVar13 = (ulong)*puVar18;
        lVar7 = 0;
        lVar14 = uVar13 - (long)*(int *)((long)puVar18 + uVar13);
        if (4 < *(ushort *)((long)puVar18 + lVar14)) {
          uVar8 = (ulong)*(ushort *)((long)puVar18 + lVar14 + 4);
          lVar7 = 0;
          if (uVar8 != 0) {
            lVar7 = *(long *)((long)puVar18 + uVar13 + uVar8);
          }
        }
        plVar5[0xb] = lVar7;
        plVar5[0xc] = (long)puVar18 + (ulong)*puVar18;
        plVar5[0xd] = (long)&local_110;
        local_118 = plVar5;
        (**(code **)(plVar5[9] + 0x10))(plVar17);
        plVar5 = local_118;
        if (local_108 < local_100) {
          if (*(long *)(uVar12 + 0x98) == 0x10) goto LAB__text__003bb4e8;
          *(long **)((uVar12 | 0x18) + *(long *)(uVar12 + 0x98) * 8) = local_f0;
          *(long *)(uVar12 + 0x98) = *(long *)(uVar12 + 0x98) + 1;
          local_118 = (long *)0x0;
          *local_108 = (long)plVar5;
          *(long *)(uVar12 + 0x98) = *(long *)(uVar12 + 0x98) + -1;
          local_108 = local_108 + 1;
        }
        else {
          FUN__text__003bb620(&local_110,&local_118);
          if (local_118 != (long *)0x0) {
            (**(code **)(local_118[9] + 0x18))();
          }
        }
        (**(code **)(*plVar17 + 0x18))(plVar17);
        puVar18 = puVar18 + 1;
      } while (puVar18 != puVar6 + 1 + *puVar6);
      lVar7 = -(long)*piVar1;
    }
  }
  if ((4 < *(ushort *)((long)piVar1 + lVar7)) &&
     (uVar12 = (ulong)((ushort *)((long)piVar1 + lVar7))[2], uVar12 != 0)) {
    puVar6 = (uint *)((long)piVar1 + uVar12);
    puVar6 = (uint *)((long)puVar6 + (ulong)*puVar6);
    if (*puVar6 != 0) {
      puVar18 = puVar6 + 1;
      do {
        uVar4 = local_70[0];
        plVar5 = local_110;
        if (local_110 == local_108) {
LAB__text__003bb370:
          if (plVar5 != local_108) {
            plVar5 = (long *)*plVar5;
            lVar9 = *(long *)(*param_1 + 0x58);
            if (lVar9 == 0) {
              (**(code **)(*plVar5 + 0x28))(plVar5,local_70[0],0);
            }
            else {
              plVar17 = (long *)(lVar9 + 0x48);
              (**(code **)(*plVar17 + 0x10))(plVar17);
              (**(code **)(*plVar5 + 0x28))(plVar5,uVar4,lVar9);
              (**(code **)(*plVar17 + 0x18))(plVar17);
            }
          }
        }
        else {
          piVar1 = (int *)((long)puVar18 + (ulong)*puVar18);
          if (*(ushort *)((long)piVar1 - (long)*piVar1) < 5) {
            do {
              if (*(long *)(*plVar5 + 0x58) == 0) goto LAB__text__003bb370;
              plVar5 = plVar5 + 1;
            } while (plVar5 != local_108);
          }
          else {
            uVar12 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[2];
            if (uVar12 == 0) {
              do {
                if (*(long *)(*plVar5 + 0x58) == 0) goto LAB__text__003bb370;
                plVar5 = plVar5 + 1;
              } while (plVar5 != local_108);
            }
            else {
              do {
                if (*(long *)((long)piVar1 + uVar12) == *(long *)(*plVar5 + 0x58))
                goto LAB__text__003bb370;
                plVar5 = plVar5 + 1;
              } while (plVar5 != local_108);
            }
          }
        }
        puVar18 = puVar18 + 1;
      } while (puVar18 != puVar6 + 1 + *puVar6);
    }
  }
  lVar9 = *param_1;
  local_120 = *param_4;
  if (local_120 != 0) {
    (**(code **)(*(long *)(local_120 + 0x48) + 0x10))();
  }
  FUN__text__003c034c(lVar9,&local_120);
  if (local_120 != 0) {
    (**(code **)(*(long *)(local_120 + 0x48) + 0x18))();
    local_120 = 0;
  }
  plVar17 = local_110;
  plVar5 = local_e0;
  if (local_110 != (long *)0x0) {
    if (local_108 != local_110) {
      plVar15 = local_108;
      do {
        plVar16 = plVar15 + -1;
        if (*plVar16 != 0) {
          (**(code **)(*(long *)(*plVar16 + 0x48) + 0x18))();
          plVar15[-1] = 0;
        }
        plVar15 = plVar16;
      } while (plVar16 != plVar17);
    }
    local_108 = plVar17;
    (**(code **)(*local_f0 + 0x18))(local_f0,local_110,(long)local_100 - (long)local_110,8);
  }
  if (local_c0 == plVar5) {
    puVar10 = (undefined8 *)(local_e0[0] + 0x20);
  }
  else {
    if (local_c0 == (long *)0x0) goto LAB__text__003bb490;
    puVar10 = (undefined8 *)(*local_c0 + 0x28);
    plVar5 = local_c0;
  }
  (*(code *)*puVar10)(plVar5);
LAB__text__003bb490:
  plVar5 = local_a0;
  if (local_80 == plVar5) {
    puVar10 = (undefined8 *)(local_a0[0] + 0x20);
  }
  else {
    if (local_80 == (long *)0x0) {
      return;
    }
    puVar10 = (undefined8 *)(*local_80 + 0x28);
    plVar5 = local_80;
  }
  (*(code *)*puVar10)(plVar5);
  return;
}


