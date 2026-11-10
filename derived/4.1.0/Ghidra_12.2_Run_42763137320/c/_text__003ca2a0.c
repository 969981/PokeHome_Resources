/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003ca2a0; name: FUN_.text__003ca2a0
 */


void FUN__text__003ca2a0(long param_1,undefined8 *param_2,long param_3,undefined4 param_4)

{
  uint *puVar1;
  uint *puVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  uint *puVar9;
  undefined4 *puVar10;
  long local_e8;
  undefined8 uStack_e0;
  undefined8 *local_d8;
  long local_d0;
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
  undefined8 *local_48;
  
  lVar7 = *(long *)(param_3 + 8);
  local_98 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = *(long **)(lVar7 + 0x1d0);
  local_c8 = *(int **)(lVar7 + 0x1b0);
  uStack_a0 = 0;
  local_c0 = 0;
  FUN__text__003cb4e0(&local_c0,*(long *)(lVar7 + 0x1b8),*(long *)(lVar7 + 0x1c0),
                      *(long *)(lVar7 + 0x1c0) - *(long *)(lVar7 + 0x1b8) >> 5);
  uStack_78 = *(undefined8 *)(lVar7 + 0x200);
  local_90 = 0;
  uStack_88 = 0;
  local_70 = 0;
  local_68 = 0;
  local_80 = 0;
  FUN__text__003cb630(&local_90,*(long *)(lVar7 + 0x1e8),*(long *)(lVar7 + 0x1f0),
                      (*(long *)(lVar7 + 0x1f0) - *(long *)(lVar7 + 0x1e8) >> 4) *
                      -0xf0f0f0f0f0f0f0f);
  uVar4 = (ulong)*(ushort *)((long)local_c8 + (6 - (long)*local_c8));
  puVar1 = (uint *)((long)local_c8 + uVar4);
  uVar6 = (ulong)*puVar1;
  puVar1 = (uint *)((long)puVar1 + uVar6);
  if (*puVar1 != 0) {
    puVar9 = (uint *)((long)local_c8 + uVar6 + uVar4 + 8);
    do {
      uVar4 = (ulong)puVar9[-1];
      lVar7 = uVar4 - (long)*(int *)((long)puVar9 + (uVar4 - 4));
      if ((*(ushort *)((long)puVar9 + lVar7 + -4) < 5) ||
         (uVar6 = (ulong)*(ushort *)((long)puVar9 + lVar7), uVar6 == 0)) {
        local_d0 = 0;
      }
      else {
        local_d0 = *(long *)((long)puVar9 + uVar4 + uVar6 + -4);
      }
      FUN__text__003c8360(&local_48,*param_2,&local_d0);
      FUN__text__003c4a48(&local_d0,*(undefined8 *)(param_1 + 8));
      lVar7 = local_d0;
      if ((*(ushort *)((long)local_c8 - (long)*local_c8) < 9) ||
         (uVar4 = (ulong)((ushort *)((long)local_c8 - (long)*local_c8))[4], uVar4 == 0)) {
        puVar10 = (undefined4 *)0x0;
      }
      else {
        puVar2 = (uint *)((long)local_c8 + uVar4);
        puVar10 = (undefined4 *)((long)puVar2 + (ulong)*puVar2);
      }
      local_d8 = local_48;
      if (local_48 != (undefined8 *)0x0) {
        (**(code **)(local_48[9] + 0x10))();
      }
      uVar4 = (ulong)puVar9[-1];
      lVar5 = uVar4 - (long)*(int *)((long)puVar9 + (uVar4 - 4));
      if ((*(ushort *)((long)puVar9 + lVar5 + -4) < 7) ||
         (uVar6 = (ulong)*(ushort *)((long)puVar9 + lVar5 + 2), uVar6 == 0)) {
        lVar5 = 0;
      }
      else {
        lVar5 = uVar4 + uVar6;
        lVar5 = (long)puVar9 + (ulong)*(uint *)((long)puVar9 + lVar5 + -4) + lVar5 + -4;
      }
      FUN__text__003e8c40(lVar7,&local_d8,*puVar10,lVar5 + 4,0,0);
      if (local_d8 != (undefined8 *)0x0) {
        (**(code **)(local_d8[9] + 0x18))();
        local_d8 = (undefined8 *)0x0;
      }
      FUN__text__003ea004(local_d0,param_4);
      uVar4 = (ulong)puVar9[-1];
      uVar8 = *param_2;
      lVar7 = uVar4 - (long)*(int *)((long)puVar9 + (uVar4 - 4));
      if ((*(ushort *)((long)puVar9 + lVar7 + -4) < 9) ||
         (uVar6 = (ulong)*(ushort *)((long)puVar9 + lVar7 + 4), uVar6 == 0)) {
        uStack_e0 = 0;
      }
      else {
        uStack_e0 = *(undefined8 *)((long)puVar9 + uVar4 + uVar6 + -4);
      }
      local_e8 = local_d0;
      if (local_d0 != 0) {
        (**(code **)(*(long *)(local_d0 + 0x48) + 0x10))();
      }
      FUN__text__003c84d0(uVar8,&uStack_e0,&local_e8);
      if (local_e8 != 0) {
        (**(code **)(*(long *)(local_e8 + 0x48) + 0x18))();
        local_e8 = 0;
      }
      if (local_d0 != 0) {
        (**(code **)(*(long *)(local_d0 + 0x48) + 0x18))();
      }
      if (local_48 != (undefined8 *)0x0) {
        (**(code **)(local_48[9] + 0x18))();
      }
      bVar3 = puVar9 != puVar1 + (ulong)*puVar1 + 1;
      puVar9 = puVar9 + 1;
    } while (bVar3);
  }
  local_48 = &local_90;
  FUN__text__003cb850(&local_48);
  lVar5 = local_c0;
  lVar7 = local_b8;
  if (local_c0 != 0) {
    for (; lVar7 != lVar5; lVar7 = lVar7 + -0x20) {
      if (*(long *)(lVar7 + -8) != 0) {
        (**(code **)(*(long *)(*(long *)(lVar7 + -8) + 0x48) + 0x18))();
        *(undefined8 *)(lVar7 + -8) = 0;
      }
    }
    local_b8 = lVar5;
    (**(code **)(*local_a8 + 0x18))(local_a8,local_c0,local_b0 - local_c0,8);
  }
  return;
}


