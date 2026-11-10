/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003ca630; name: FUN_.text__003ca630
 */


void FUN__text__003ca630(undefined8 param_1,undefined8 *param_2,long param_3)

{
  uint *puVar1;
  int *piVar2;
  int *piVar3;
  uint *puVar4;
  uint uVar5;
  ushort uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  ushort *puVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  uint *puVar16;
  long lVar17;
  undefined8 local_d8;
  int *local_d0;
  long local_c8;
  long local_c0;
  long local_b8;
  long *local_b0;
  undefined8 uStack_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 *local_68;
  
  lVar13 = *(long *)(param_3 + 8);
  local_a0 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_b0 = *(long **)(lVar13 + 0x1d0);
  local_d0 = *(int **)(lVar13 + 0x1b0);
  uStack_a8 = 0;
  local_c8 = 0;
  FUN__text__003cb4e0(&local_c8,*(long *)(lVar13 + 0x1b8),*(long *)(lVar13 + 0x1c0),
                      *(long *)(lVar13 + 0x1c0) - *(long *)(lVar13 + 0x1b8) >> 5);
  uStack_80 = *(undefined8 *)(lVar13 + 0x200);
  local_98 = 0;
  uStack_90 = 0;
  local_78 = 0;
  local_70 = 0;
  local_88 = 0;
  FUN__text__003cb630();
  uVar9 = (ulong)*(ushort *)((long)local_d0 + (10 - (long)*local_d0));
  puVar1 = (uint *)((long)local_d0 + uVar9);
  uVar12 = (ulong)*puVar1;
  puVar1 = (uint *)((long)puVar1 + uVar12);
  if (*puVar1 != 0) {
    lVar15 = uVar12 + uVar9;
    lVar13 = (long)local_d0 + lVar15 + 0xc;
    lVar15 = (long)local_d0 + lVar15 + 0x10;
    puVar16 = puVar1 + 1;
    do {
      piVar2 = (int *)((long)puVar16 + (ulong)*puVar16);
      if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 5) ||
         (uVar9 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[2], uVar9 == 0)) {
        local_d8 = 0;
      }
      else {
        local_d8 = *(undefined8 *)((long)piVar2 + uVar9);
      }
      FUN__text__003c8980(&local_68,*param_2,&local_d8);
      uVar5 = *puVar16;
      piVar2 = (int *)((long)puVar16 + (ulong)uVar5);
      puVar10 = (ushort *)((long)piVar2 - (long)*piVar2);
      if (*puVar10 < 9) {
        if ((*puVar10 < 7) || (uVar9 = (ulong)puVar10[3], uVar9 == 0)) goto LAB__text__003ca8d0;
LAB__text__003ca8b4:
        lVar11 = (long)((long)piVar2 + uVar9) + (ulong)*(uint *)((long)piVar2 + uVar9);
LAB__text__003ca8d4:
        uVar7 = FUN__text__003e9680(local_68,lVar11 + 4);
      }
      else {
        uVar9 = (ulong)puVar10[4];
        if (uVar9 == 0) {
          uVar6 = puVar10[3];
joined_r0x003ca8cc:
          uVar9 = (ulong)uVar6;
          if (uVar9 != 0) goto LAB__text__003ca8b4;
LAB__text__003ca8d0:
          lVar11 = 0;
          goto LAB__text__003ca8d4;
        }
        uVar12 = (ulong)*(uint *)((long)piVar2 + uVar9);
        piVar3 = (int *)((long)((long)piVar2 + uVar9) + uVar12);
        if (*piVar3 == 0) {
          uVar6 = puVar10[3];
          goto joined_r0x003ca8cc;
        }
        uVar7 = FUN__text__003e9790(local_68,(long)(piVar3 + 1) + (ulong)(uint)piVar3[1] + 4);
        uVar8 = (ulong)*puVar16;
        piVar2 = (int *)((long)puVar16 + uVar8);
        lVar11 = (long)piVar2 - (long)*piVar2;
        puVar4 = (uint *)((long)piVar2 + (ulong)*(ushort *)(lVar11 + 8));
        puVar4 = (uint *)((long)puVar4 + (ulong)*puVar4);
        if ((uint *)(piVar3 + 2) != puVar4 + (ulong)*puVar4 + 1) {
          lVar14 = uVar9 + uVar5;
          lVar17 = lVar13 + lVar14;
          lVar14 = lVar15 + lVar14;
          do {
            uVar7 = FUN__text__003e98a0(local_68,uVar7,
                                        lVar14 + uVar12 + (ulong)*(uint *)(lVar17 + uVar12));
            uVar8 = (ulong)*puVar16;
            lVar17 = lVar17 + 4;
            lVar14 = lVar14 + 4;
            piVar2 = (int *)((long)puVar16 + uVar8);
            lVar11 = (long)piVar2 - (long)*piVar2;
            puVar4 = (uint *)((long)piVar2 + (ulong)*(ushort *)(lVar11 + 8));
            puVar4 = (uint *)((long)puVar4 + (ulong)*puVar4);
          } while ((uint *)(lVar17 + uVar12) != puVar4 + (ulong)*puVar4 + 1);
        }
        if ((ulong)*(ushort *)(lVar11 + 6) == 0) {
          lVar11 = 0;
        }
        else {
          puVar4 = (uint *)((long)puVar16 + *(ushort *)(lVar11 + 6) + uVar8);
          lVar11 = (long)puVar4 + (ulong)*puVar4;
        }
        uVar7 = FUN__text__003e987c(local_68,uVar7,lVar11 + 4);
      }
      piVar2 = (int *)((long)puVar16 + (ulong)*puVar16);
      if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 0xb) ||
         (uVar9 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[5], uVar9 == 0)) {
        local_d8 = 0;
      }
      else {
        local_d8 = *(undefined8 *)((long)piVar2 + uVar9);
      }
      FUN__text__003c8788(*param_2,&local_d8,uVar7);
      FUN__text__003cb980(param_1,uVar7);
      if (local_68 != (undefined8 *)0x0) {
        (**(code **)(local_68[9] + 0x18))();
      }
      puVar16 = puVar16 + 1;
      lVar13 = lVar13 + 4;
      lVar15 = lVar15 + 4;
    } while (puVar16 != puVar1 + 1 + *puVar1);
  }
  local_68 = &local_98;
  FUN__text__003cb850(&local_68);
  lVar15 = local_c8;
  lVar13 = local_c0;
  if (local_c8 != 0) {
    for (; lVar13 != lVar15; lVar13 = lVar13 + -0x20) {
      if (*(long *)(lVar13 + -8) != 0) {
        (**(code **)(*(long *)(*(long *)(lVar13 + -8) + 0x48) + 0x18))();
        *(undefined8 *)(lVar13 + -8) = 0;
      }
    }
    local_c0 = lVar15;
    (**(code **)(*local_b0 + 0x18))(local_b0,local_c8,local_b8 - local_c8,8);
  }
  return;
}


