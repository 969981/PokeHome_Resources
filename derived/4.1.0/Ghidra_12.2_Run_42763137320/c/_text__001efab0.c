/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001efab0; name: FUN_.text__001efab0
 */


void FUN__text__001efab0(long param_1)

{
  byte bVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  long local_e0;
  long local_d8;
  long local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined1 local_84;
  undefined4 local_82;
  undefined8 local_70;
  undefined8 uStack_68;
  long local_58;
  long local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined1 local_34;
  
  puVar4 = *(undefined8 **)(*(long *)(param_1 + 0x60) + 0x60);
  plVar2 = (long *)(**(code **)*puVar4)(puVar4);
  plVar3 = (long *)FUN__text__0012615c();
  if (plVar3 != plVar2) {
    do {
      plVar2 = (long *)*plVar2;
    } while (plVar2 != plVar3 && plVar2 != (long *)0x0);
  }
  FUN__text__001156d0(&local_d0,puVar4[0xd],0);
  lVar5 = *(long *)(local_d0 + 0x60);
  if ((lVar5 == 0) || ((**(code **)(*(long *)(lVar5 + 0x48) + 0x10))(), local_d0 != 0)) {
    (**(code **)(*(long *)(local_d0 + 0x48) + 0x18))();
  }
  local_50 = *(long *)(param_1 + 0x88);
  local_38 = 0x1000101;
  local_34 = 1;
  local_48 = 0;
  uStack_40 = 0;
  if (local_50 != 0) {
    (**(code **)(*(long *)(local_50 + 0x48) + 0x10))();
  }
  local_58 = lVar5;
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  local_d0 = -0x43173e4c49609077;
  FUN__text__001acec4(&local_50,&local_58,&local_d0);
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    local_58 = 0;
  }
  if (local_50 != 0) {
    (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
    local_50 = 0;
  }
  local_48 = *(undefined8 *)(param_1 + 0x88);
  puVar4 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
  plVar2 = (long *)(**(code **)*puVar4)(puVar4);
  plVar3 = (long *)FUN__text__0018d6a0();
  if (plVar3 != plVar2) {
    do {
      plVar2 = (long *)*plVar2;
    } while (plVar2 != plVar3 && plVar2 != (long *)0x0);
  }
  bVar1 = *(byte *)((long)puVar4 + 0xbc);
  *(undefined1 *)((long)puVar4 + 0xbc) = 0;
  local_d8 = *(long *)(param_1 + 0x90);
  local_98 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_84 = 1;
  local_38._0_2_ = CONCAT11(bVar1 ^ 1,1);
  local_90 = 0x8abaf272a347e952;
  local_88 = 4;
  local_82 = 0xffff;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_d0 = 0;
  if (local_d8 != 0) {
    (**(code **)(*(long *)(local_d8 + 0x48) + 0x10))();
  }
  plVar2 = (long *)(lVar5 + 0x48);
  local_e0 = lVar5;
  if (lVar5 != 0) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
  }
  FUN__text__001acec4(&local_d8,&local_e0,0x726e68);
  if (local_e0 != 0) {
    (**(code **)(*(long *)(local_e0 + 0x48) + 0x18))();
    local_e0 = 0;
  }
  if (local_d8 != 0) {
    (**(code **)(*(long *)(local_d8 + 0x48) + 0x18))();
  }
  local_d0 = *(long *)(param_1 + 0x90);
  local_d8 = *(long *)(param_1 + 0x98);
  if (local_d8 != 0) {
    (**(code **)(*(long *)(local_d8 + 0x48) + 0x10))();
  }
  local_e0 = lVar5;
  if (lVar5 != 0) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
  }
  FUN__text__001acec4(&local_d8,&local_e0,0x726e70);
  if (local_e0 != 0) {
    (**(code **)(*(long *)(local_e0 + 0x48) + 0x18))();
    local_e0 = 0;
  }
  if (local_d8 != 0) {
    (**(code **)(*(long *)(local_d8 + 0x48) + 0x18))();
    local_d8 = 0;
  }
  local_c8 = *(undefined8 *)(param_1 + 0x98);
  FUN__text__00131e04(*(undefined8 *)(param_1 + 200),&local_48,&local_d0);
  if (lVar5 != 0) {
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  return;
}


