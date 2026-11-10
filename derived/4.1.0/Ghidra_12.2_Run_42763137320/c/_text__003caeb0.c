/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003caeb0; name: FUN_.text__003caeb0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__003caeb0(long param_1,undefined8 *param_2,long param_3)

{
  uint *puVar1;
  int *piVar2;
  uint *puVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  uint *puVar11;
  long *plVar12;
  long local_e8;
  undefined8 uStack_e0;
  long local_d8;
  int *local_d0;
  long *local_c8;
  long *local_c0;
  long local_b8;
  long *local_b0;
  undefined8 uStack_a8;
  undefined4 local_a0;
  long local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_70;
  long *local_68;
  
  lVar9 = *(long *)(param_3 + 8);
  local_a0 = 0;
  local_c0 = (long *)0x0;
  local_b8 = 0;
  local_b0 = *(long **)(lVar9 + 0x1d0);
  local_d0 = *(int **)(lVar9 + 0x1b0);
  uStack_a8 = 0;
  local_c8 = (long *)0x0;
  FUN__text__003cb4e0(&local_c8,*(long *)(lVar9 + 0x1b8),*(long *)(lVar9 + 0x1c0),
                      *(long *)(lVar9 + 0x1c0) - *(long *)(lVar9 + 0x1b8) >> 5);
  uStack_80 = *(undefined8 *)(lVar9 + 0x200);
  local_98 = 0;
  uStack_90 = 0;
  local_78 = 0;
  local_70 = 0;
  local_88 = 0;
  FUN__text__003cb630();
  plVar7 = _DAT_0089f5c8;
  puVar1 = (uint *)((long)local_d0 + (ulong)*(ushort *)((long)local_d0 + (4 - (long)*local_d0)));
  puVar1 = (uint *)((long)puVar1 + (ulong)*puVar1);
  if (*puVar1 != 0) {
    puVar11 = puVar1 + 1;
    do {
      piVar2 = (int *)((long)puVar11 + (ulong)*puVar11);
      if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 5) ||
         (uVar8 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[2], uVar8 == 0)) {
        FUN__text__00109fd4(&local_68,4);
        plVar12 = local_c8;
        plVar5 = local_c0;
        plVar6 = local_68;
      }
      else {
        puVar3 = (uint *)((long)piVar2 + uVar8);
        FUN__text__00109fd4(&local_68,(long)puVar3 + (ulong)*puVar3 + 4);
        plVar12 = local_c8;
        plVar5 = local_c0;
        plVar6 = local_68;
      }
      local_c8 = plVar12;
      local_c0 = plVar5;
      local_68 = plVar6;
      if (plVar6 != (long *)0x0) {
        (**(code **)(plVar6[9] + 0x10))();
      }
      if (plVar12 != plVar5) {
        plVar4 = plVar7;
        if (plVar6 != (long *)0x0) {
          plVar4 = plVar6 + 0xb;
        }
        do {
          if (*plVar4 == *plVar12) goto LAB__text__003cb040;
          plVar12 = plVar12 + 4;
        } while (plVar12 != plVar5);
        plVar12 = plVar5;
      }
LAB__text__003cb040:
      if (plVar6 != (long *)0x0) {
        (**(code **)(plVar6[9] + 0x18))(plVar6 + 9);
      }
      lVar9 = (long)plVar12 - (long)local_c8;
      FUN__text__003c4944(&local_d8,*(undefined8 *)(param_1 + 8));
      FUN__text__003e705c(local_d8,local_98 + (lVar9 >> 5) * 0x110);
      piVar2 = (int *)((long)puVar11 + (ulong)*puVar11);
      uVar10 = *param_2;
      if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 7) ||
         (uVar8 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[3], uVar8 == 0)) {
        uStack_e0 = 0;
      }
      else {
        uStack_e0 = *(undefined8 *)((long)piVar2 + uVar8);
      }
      local_e8 = local_d8;
      if (local_d8 != 0) {
        (**(code **)(*(long *)(local_d8 + 0x48) + 0x10))();
      }
      FUN__text__003c859c(uVar10,&uStack_e0,&local_e8,0);
      if (local_e8 != 0) {
        (**(code **)(*(long *)(local_e8 + 0x48) + 0x18))();
        local_e8 = 0;
      }
      if (local_d8 != 0) {
        (**(code **)(*(long *)(local_d8 + 0x48) + 0x18))();
      }
      if (local_68 != (long *)0x0) {
        (**(code **)(local_68[9] + 0x18))();
      }
      puVar11 = puVar11 + 1;
    } while (puVar11 != puVar1 + 1 + *puVar1);
  }
  local_68 = &local_98;
  FUN__text__003cb850(&local_68);
  plVar12 = local_c8;
  plVar7 = local_c0;
  if (local_c8 != (long *)0x0) {
    for (; plVar7 != plVar12; plVar7 = plVar7 + -4) {
      if (plVar7[-1] != 0) {
        (**(code **)(*(long *)(plVar7[-1] + 0x48) + 0x18))();
        plVar7[-1] = 0;
      }
    }
    local_c0 = plVar12;
    (**(code **)(*local_b0 + 0x18))(local_b0,local_c8,local_b8 - (long)local_c8,8);
  }
  return;
}


