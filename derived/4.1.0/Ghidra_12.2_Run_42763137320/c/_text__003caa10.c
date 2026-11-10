/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003caa10; name: FUN_.text__003caa10
 */


void FUN__text__003caa10(undefined8 param_1,undefined8 *param_2,long param_3)

{
  uint *puVar1;
  int *piVar2;
  int *piVar3;
  uint *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ushort *puVar11;
  ulong uVar12;
  long lVar13;
  uint uVar14;
  undefined8 *puVar15;
  long lVar16;
  long lVar17;
  uint *puVar18;
  undefined8 *local_e8;
  uint local_e0;
  undefined8 local_d8;
  undefined8 *local_d0;
  int *local_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  long *local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined4 local_68;
  
  lVar13 = *(long *)(param_3 + 8);
  local_b8 = 0;
  local_b0 = 0;
  local_98 = 0;
  local_a8 = *(long **)(lVar13 + 0x1d0);
  local_c8 = *(int **)(lVar13 + 0x1b0);
  uStack_a0 = 0;
  local_c0 = 0;
  FUN__text__003cb4e0(&local_c0,*(long *)(lVar13 + 0x1b8),*(long *)(lVar13 + 0x1c0),
                      *(long *)(lVar13 + 0x1c0) - *(long *)(lVar13 + 0x1b8) >> 5);
  uStack_78 = *(undefined8 *)(lVar13 + 0x200);
  local_90 = 0;
  uStack_88 = 0;
  local_70 = 0;
  local_68 = 0;
  local_80 = 0;
  FUN__text__003cb630(&local_90,*(long *)(lVar13 + 0x1e8),*(long *)(lVar13 + 0x1f0),
                      (*(long *)(lVar13 + 0x1f0) - *(long *)(lVar13 + 0x1e8) >> 4) *
                      -0xf0f0f0f0f0f0f0f);
  uVar10 = (ulong)*(ushort *)((long)local_c8 + (8 - (long)*local_c8));
  puVar1 = (uint *)((long)local_c8 + uVar10);
  uVar12 = (ulong)*puVar1;
  puVar1 = (uint *)((long)puVar1 + uVar12);
  if (*puVar1 != 0) {
    lVar17 = uVar12 + uVar10;
    lVar13 = (long)local_c8 + lVar17 + 0xc;
    lVar17 = (long)local_c8 + lVar17 + 0x10;
    puVar15 = (undefined8 *)0x0;
    puVar18 = puVar1 + 1;
    uVar6 = 0;
    do {
      piVar2 = (int *)((long)puVar18 + (ulong)*puVar18);
      if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 5) ||
         (uVar10 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[2], uVar10 == 0)) {
        local_e8 = (undefined8 *)0x0;
      }
      else {
        local_e8 = *(undefined8 **)((long)piVar2 + uVar10);
      }
      FUN__text__003c8980(&local_d0,*param_2,&local_e8);
      puVar5 = local_d0;
      uVar14 = 0;
      if (puVar15 == local_d0) {
        uVar14 = uVar6 + 1;
      }
      if (local_d0 != (undefined8 *)0x0) {
        (**(code **)(local_d0[9] + 0x10))();
      }
      if (puVar15 != (undefined8 *)0x0) {
        (**(code **)(puVar15[9] + 0x18))(puVar15 + 9);
      }
      uVar6 = FUN__text__003e9c0c(local_d0);
      if (uVar14 < uVar6) {
        do {
          uVar10 = FUN__text__003e9c14(local_d0,uVar14);
          if ((uVar10 & 1) == 0) break;
          uVar14 = uVar14 + 1;
          uVar6 = FUN__text__003e9c0c(local_d0);
        } while (uVar14 < uVar6);
      }
      uVar6 = *puVar18;
      piVar2 = (int *)((long)puVar18 + (ulong)uVar6);
      puVar11 = (ushort *)((long)piVar2 - (long)*piVar2);
      if (*puVar11 < 7) {
LAB__text__003cad30:
        lVar9 = 0;
LAB__text__003cad34:
        FUN__text__003e99b4(local_d0,uVar14,lVar9 + 4,0);
      }
      else {
        uVar10 = (ulong)puVar11[3];
        if (uVar10 == 0) {
LAB__text__003cad00:
          if ((*puVar11 < 9) || ((ulong)puVar11[4] == 0)) goto LAB__text__003cad30;
          puVar4 = (uint *)((long)piVar2 + (ulong)puVar11[4]);
          lVar9 = (long)puVar4 + (ulong)*puVar4;
          goto LAB__text__003cad34;
        }
        uVar12 = (ulong)*(uint *)((long)piVar2 + uVar10);
        piVar3 = (int *)((long)((long)piVar2 + uVar10) + uVar12);
        if (*piVar3 == 0) goto LAB__text__003cad00;
        uVar7 = FUN__text__003e9790(local_d0,(long)(piVar3 + 1) + (ulong)(uint)piVar3[1] + 4);
        uVar8 = (ulong)*puVar18;
        piVar2 = (int *)((long)puVar18 + uVar8);
        puVar11 = (ushort *)((long)piVar2 - (long)*piVar2);
        puVar4 = (uint *)((long)((long)piVar2 + (ulong)puVar11[3]) +
                         (ulong)*(uint *)((long)piVar2 + (ulong)puVar11[3]));
        if ((uint *)(piVar3 + 2) != puVar4 + (ulong)*puVar4 + 1) {
          lVar16 = uVar10 + uVar6;
          lVar9 = lVar13 + lVar16;
          lVar16 = lVar17 + lVar16;
          do {
            uVar7 = FUN__text__003e98a0(local_d0,uVar7,
                                        lVar16 + uVar12 + (ulong)*(uint *)(lVar9 + uVar12));
            uVar8 = (ulong)*puVar18;
            lVar9 = lVar9 + 4;
            lVar16 = lVar16 + 4;
            piVar2 = (int *)((long)puVar18 + uVar8);
            puVar11 = (ushort *)((long)piVar2 - (long)*piVar2);
            puVar4 = (uint *)((long)((long)piVar2 + (ulong)puVar11[3]) +
                             (ulong)*(uint *)((long)piVar2 + (ulong)puVar11[3]));
          } while ((uint *)(lVar9 + uVar12) != puVar4 + (ulong)*puVar4 + 1);
        }
        if ((*puVar11 < 9) || ((ulong)puVar11[4] == 0)) {
          lVar9 = 0;
        }
        else {
          puVar4 = (uint *)((long)puVar18 + puVar11[4] + uVar8);
          lVar9 = (long)puVar4 + (ulong)*puVar4;
        }
        FUN__text__003e9ad8(local_d0,uVar7,uVar14,lVar9 + 4,0);
      }
      piVar2 = (int *)((long)puVar18 + (ulong)*puVar18);
      uVar7 = *param_2;
      if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 0xb) ||
         (uVar10 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[5], uVar10 == 0)) {
        local_d8 = 0;
      }
      else {
        local_d8 = *(undefined8 *)((long)piVar2 + uVar10);
      }
      local_e8 = local_d0;
      if (local_d0 != (undefined8 *)0x0) {
        (**(code **)(local_d0[9] + 0x10))();
      }
      local_e0 = uVar14;
      FUN__text__003c8680(uVar7,&local_d8,&local_e8);
      if (local_e8 != (undefined8 *)0x0) {
        (**(code **)(local_e8[9] + 0x18))();
      }
      if (local_d0 != (undefined8 *)0x0) {
        (**(code **)(local_d0[9] + 0x18))();
      }
      puVar18 = puVar18 + 1;
      lVar13 = lVar13 + 4;
      lVar17 = lVar17 + 4;
      puVar15 = puVar5;
      uVar6 = uVar14;
    } while (puVar18 != puVar1 + 1 + *puVar1);
    if (puVar5 != (undefined8 *)0x0) {
      (**(code **)(puVar5[9] + 0x18))(puVar5 + 9);
    }
  }
  local_e8 = &local_90;
  FUN__text__003cb850(&local_e8);
  lVar17 = local_c0;
  lVar13 = local_b8;
  if (local_c0 != 0) {
    for (; lVar13 != lVar17; lVar13 = lVar13 + -0x20) {
      if (*(long *)(lVar13 + -8) != 0) {
        (**(code **)(*(long *)(*(long *)(lVar13 + -8) + 0x48) + 0x18))();
        *(undefined8 *)(lVar13 + -8) = 0;
      }
    }
    local_b8 = lVar17;
    (**(code **)(*local_a8 + 0x18))(local_a8,local_c0,local_b0 - local_c0,8);
  }
  return;
}


