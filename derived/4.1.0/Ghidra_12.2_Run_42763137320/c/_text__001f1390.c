/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001f1390; name: FUN_.text__001f1390
 */


void FUN__text__001f1390(long param_1)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 local_60;
  long local_58;
  long local_50;
  long local_48 [2];
  uint local_38;
  undefined1 local_34;
  
  puVar3 = *(undefined8 **)(*(long *)(param_1 + 0x60) + 0x60);
  plVar1 = (long *)(**(code **)*puVar3)(puVar3);
  plVar2 = (long *)FUN__text__0012615c();
  if (plVar2 != plVar1) {
    do {
      plVar1 = (long *)*plVar1;
    } while (plVar1 != plVar2 && plVar1 != (long *)0x0);
  }
  FUN__text__001156d0(local_48,puVar3[0xd],0);
  lVar4 = *(long *)(local_48[0] + 0x60);
  if ((lVar4 == 0) || ((**(code **)(*(long *)(lVar4 + 0x48) + 0x10))(), local_48[0] != 0)) {
    (**(code **)(*(long *)(local_48[0] + 0x48) + 0x18))();
  }
  local_50 = *(long *)(param_1 + 0x88);
  local_38 = 0x1000101;
  local_34 = 1;
  local_48[0] = 0;
  local_48[1] = 0;
  if (local_50 != 0) {
    (**(code **)(*(long *)(local_50 + 0x48) + 0x10))();
  }
  local_58 = lVar4;
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  local_60 = 0x849034fc5d6a3638;
  FUN__text__001acec4(&local_50,&local_58,&local_60);
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    local_58 = 0;
  }
  if (local_50 != 0) {
    (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
    local_50 = 0;
  }
  local_48[0] = *(long *)(param_1 + 0x88);
  puVar3 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
  plVar1 = (long *)(**(code **)*puVar3)(puVar3);
  plVar2 = (long *)FUN__text__0018d6a0();
  if (plVar2 != plVar1) {
    do {
      plVar1 = (long *)*plVar1;
    } while (plVar1 != plVar2 && plVar1 != (long *)0x0);
  }
  local_38 = (uint)CONCAT21((short)(local_38 >> 0x10),*(undefined1 *)((long)puVar3 + 0xbc)) << 8 ^
             0x100;
  *(undefined1 *)((long)puVar3 + 0xbc) = 1;
  FUN__text__00131da0(*(undefined8 *)(param_1 + 200),local_48);
  plVar1 = (long *)(*(long *)(*(long *)(param_1 + 200) + 0x640) + 0x60);
  (**(code **)(*plVar1 + 8))(plVar1,1);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  }
  return;
}


