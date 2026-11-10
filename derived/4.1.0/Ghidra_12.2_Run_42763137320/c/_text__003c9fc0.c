/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003c9fc0; name: FUN_.text__003c9fc0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__003c9fc0(undefined8 param_1,undefined8 *param_2,long param_3,long *param_4)

{
  uint *puVar1;
  int *piVar2;
  uint *puVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  undefined8 uVar12;
  uint *puVar13;
  long local_e0;
  undefined8 uStack_d8;
  int *local_d0;
  long *local_c8;
  long *local_c0;
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
  
  lVar11 = *(long *)(param_3 + 8);
  local_a0 = 0;
  local_c0 = (long *)0x0;
  local_b8 = 0;
  local_b0 = *(long **)(lVar11 + 0x1d0);
  local_d0 = *(int **)(lVar11 + 0x1b0);
  uStack_a8 = 0;
  local_c8 = (long *)0x0;
  FUN__text__003cb4e0(&local_c8,*(long *)(lVar11 + 0x1b8),*(long *)(lVar11 + 0x1c0),
                      *(long *)(lVar11 + 0x1c0) - *(long *)(lVar11 + 0x1b8) >> 5);
  uStack_80 = *(undefined8 *)(lVar11 + 0x200);
  local_98 = 0;
  uStack_90 = 0;
  local_78 = 0;
  local_70 = 0;
  local_88 = 0;
  FUN__text__003cb630(&local_98,*(long *)(lVar11 + 0x1e8),*(long *)(lVar11 + 0x1f0),
                      (*(long *)(lVar11 + 0x1f0) - *(long *)(lVar11 + 0x1e8) >> 4) *
                      -0xf0f0f0f0f0f0f0f);
  plVar8 = _DAT_0089f5c8;
  puVar1 = (uint *)((long)local_d0 + (ulong)*(ushort *)((long)local_d0 + (4 - (long)*local_d0)));
  puVar1 = (uint *)((long)puVar1 + (ulong)*puVar1);
  if (*puVar1 != 0) {
    puVar13 = puVar1 + 1;
    do {
      piVar2 = (int *)((long)puVar13 + (ulong)*puVar13);
      if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 5) ||
         (uVar9 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[2], uVar9 == 0)) {
        FUN__text__00109fd4(&local_68,4);
        plVar5 = local_c8;
        plVar6 = local_c0;
        puVar7 = local_68;
      }
      else {
        puVar3 = (uint *)((long)piVar2 + uVar9);
        FUN__text__00109fd4(&local_68,(long)puVar3 + (ulong)*puVar3 + 4);
        plVar5 = local_c8;
        plVar6 = local_c0;
        puVar7 = local_68;
      }
      local_c8 = plVar5;
      local_c0 = plVar6;
      local_68 = puVar7;
      if (puVar7 != (undefined8 *)0x0) {
        (**(code **)(puVar7[9] + 0x10))();
      }
      if (plVar5 != plVar6) {
        plVar4 = plVar8;
        if (puVar7 != (undefined8 *)0x0) {
          plVar4 = puVar7 + 0xb;
        }
        do {
          plVar10 = plVar5 + 4;
          lVar11 = *plVar5;
          plVar5 = plVar10;
        } while (*plVar4 != lVar11 && plVar10 != plVar6);
      }
      if (puVar7 != (undefined8 *)0x0) {
        (**(code **)(puVar7[9] + 0x18))(puVar7 + 9);
      }
      piVar2 = (int *)((long)puVar13 + (ulong)*puVar13);
      uVar12 = *param_2;
      if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 7) ||
         (uVar9 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[3], uVar9 == 0)) {
        local_e0 = *param_4;
        uStack_d8 = 0;
      }
      else {
        uStack_d8 = *(undefined8 *)((long)piVar2 + uVar9);
        local_e0 = *param_4;
      }
      if (local_e0 != 0) {
        (**(code **)(*(long *)(local_e0 + 0x48) + 0x10))();
      }
      FUN__text__003c859c(uVar12,&uStack_d8,&local_e0,0);
      if (local_e0 != 0) {
        (**(code **)(*(long *)(local_e0 + 0x48) + 0x18))();
        local_e0 = 0;
      }
      if (local_68 != (undefined8 *)0x0) {
        (**(code **)(local_68[9] + 0x18))();
      }
      puVar13 = puVar13 + 1;
    } while (puVar13 != puVar1 + 1 + *puVar1);
  }
  local_68 = &local_98;
  FUN__text__003cb850(&local_68);
  plVar5 = local_c8;
  plVar8 = local_c0;
  if (local_c8 != (long *)0x0) {
    for (; plVar8 != plVar5; plVar8 = plVar8 + -4) {
      if (plVar8[-1] != 0) {
        (**(code **)(*(long *)(plVar8[-1] + 0x48) + 0x18))();
        plVar8[-1] = 0;
      }
    }
    local_c0 = plVar5;
    (**(code **)(*local_b0 + 0x18))(local_b0,local_c8,local_b8 - (long)local_c8,8);
  }
  return;
}


