/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001aa418; name: FUN_.text__001aa418
 */


void FUN__text__001aa418(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long local_128;
  long local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined4 local_f0;
  long local_e8;
  long local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined4 local_b0;
  long local_a8;
  undefined1 local_a0 [4];
  ulong uStack_9c;
  ulong local_94;
  long local_88;
  uint local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 local_74;
  undefined4 uStack_70;
  
  lVar8 = *(long *)(param_1 + 0x18);
  if (lVar8 == 0) {
LAB__text__001aa79c:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  uVar10 = *(undefined8 *)(lVar8 + 0x10);
  lVar7 = *(long *)(lVar8 + 0x158);
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  lVar9 = *(long *)(lVar8 + 0x250);
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
  }
  *(undefined8 *)(param_1 + 0x72) = 0;
  *(undefined8 *)(param_1 + 0x6c) = 0;
  *(undefined8 *)(param_1 + 100) = 0;
  *(undefined8 *)(param_1 + 0x5c) = 0;
  local_a8 = 0;
  local_a0[0] = 0;
  uStack_9c = 0;
  local_94 = 0;
  local_88 = 0;
  local_80 = local_80 & 0xffffff00;
  uStack_7c = 0;
  uStack_78 = 0;
  local_74 = 0;
  uStack_70 = 0;
  if (*(long *)(param_1 + 0x18) == 0) goto LAB__text__001aa79c;
  uVar11 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x10);
  puVar1 = (undefined8 *)(param_1 + 0x20);
  lVar4 = FUN__text__00195844(uVar11,*(undefined4 *)(param_1 + 0x24));
  puVar2 = (undefined8 *)(param_1 + 0x34);
  lVar5 = FUN__text__00195844(uVar11,*(undefined4 *)(param_1 + 0x38));
  if (*(int *)(lVar4 + 0xc) == 1) {
    if (*(int *)(lVar5 + 0xc) == 1) goto LAB__text__001aa5e8;
    uStack_9c = *(ulong *)(param_1 + 0x28);
    uVar3 = *(uint *)(param_1 + 0x30);
    local_a0[0] = (undefined1)*puVar1;
    uStack_70 = *(undefined4 *)(param_1 + 0x44);
    local_80 = (uint)*puVar2;
    uStack_7c = (undefined4)((ulong)*puVar2 >> 0x20);
    uStack_78 = (undefined4)*(undefined8 *)(param_1 + 0x3c);
    local_74 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x3c) >> 0x20);
    local_88 = lVar5;
    local_a8 = lVar4;
  }
  else {
    if (*(int *)(lVar5 + 0xc) != 1) goto LAB__text__001aa5e8;
    uStack_9c = *(ulong *)(param_1 + 0x3c);
    uVar3 = *(uint *)(param_1 + 0x44);
    local_a0[0] = (undefined1)*puVar2;
    local_80 = (uint)*puVar1;
    uStack_7c = (undefined4)((ulong)*puVar1 >> 0x20);
    uStack_78 = (undefined4)*(undefined8 *)(param_1 + 0x28);
    local_74 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x28) >> 0x20);
    uStack_70 = *(undefined4 *)(param_1 + 0x30);
    local_88 = lVar4;
    local_a8 = lVar5;
  }
  local_94 = (ulong)uVar3;
  uStack_9c = uStack_9c & 0xffffffff;
  if (lVar5 != lVar4) {
    local_c0 = CONCAT44(uStack_7c,local_80);
    uStack_b8 = CONCAT44(local_74,uStack_78);
    local_b0 = uStack_70;
    uVar6 = FUN__text__001aa7a0(lVar8,&local_c0);
    if ((uVar6 & 1) == 0) {
      local_d8 = CONCAT44(uStack_7c,local_80);
      uStack_d0 = CONCAT44(local_74,uStack_78);
      local_c8 = uStack_70;
      uVar6 = FUN__text__001a9004(lVar8,&local_d8);
      if ((uVar6 & 1) == 0) goto LAB__text__001aa5e8;
    }
    FUN__text__001912c0(local_a0,param_1 + 0x48);
    *(undefined1 *)(param_1 + (local_94 >> 0x20) + (local_94 & 0xffffffff) * 5 + 0x5c) = 1;
  }
LAB__text__001aa5e8:
  local_e0 = lVar7;
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  FUN__text__0019485c(uVar10,&local_e0,puVar1);
  if (local_e0 != 0) {
    (**(code **)(*(long *)(local_e0 + 0x48) + 0x18))();
    local_e0 = 0;
  }
  local_e8 = lVar9;
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
  }
  FUN__text__0019485c(uVar10,&local_e8,puVar2);
  if (local_e8 != 0) {
    (**(code **)(*(long *)(local_e8 + 0x48) + 0x18))();
    local_e8 = 0;
  }
  *(undefined4 *)(lVar8 + 600) = 0;
  local_100 = *puVar1;
  uStack_f8 = *(undefined8 *)(param_1 + 0x28);
  local_f0 = *(undefined4 *)(param_1 + 0x30);
  local_118 = *puVar2;
  uStack_110 = *(undefined8 *)(param_1 + 0x3c);
  local_108 = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(lVar8 + 600) = 1;
  *(undefined4 *)(lVar8 + 0x26c) = local_f0;
  *(undefined4 *)(lVar8 + 0x280) = local_108;
  *(undefined8 *)(lVar8 + 0x278) = uStack_110;
  *(undefined8 *)(lVar8 + 0x270) = local_118;
  *(undefined8 *)(lVar8 + 0x25c) = local_100;
  *(undefined8 *)(lVar8 + 0x264) = uStack_f8;
  FUN__text__00193510(uVar10,puVar1,puVar2);
  local_120 = lVar9;
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
  }
  FUN__text__001951d4(uVar10,&local_120,puVar1,1);
  if (local_120 != 0) {
    (**(code **)(*(long *)(local_120 + 0x48) + 0x18))();
    local_120 = 0;
  }
  local_128 = lVar7;
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  FUN__text__001951d4(uVar10,&local_128,puVar2,1);
  if (local_128 != 0) {
    (**(code **)(*(long *)(local_128 + 0x48) + 0x18))();
    local_128 = 0;
  }
  FUN__text__001aa8cc(lVar8,puVar1,puVar2);
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
  }
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
  }
  return;
}


