/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00194ca0; name: FUN_.text__00194ca0
 */


void FUN__text__00194ca0(long param_1,long *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  long local_28;
  
  lVar4 = *(long *)(*(long *)(*(long *)(*(long *)(param_1 + 0x40) + (ulong)*param_3 * 0x20 + 0x10) +
                             0x10) + 8);
  if (lVar4 == 0) {
    FUN__text__00306824(*param_2);
    return;
  }
  plVar3 = (long *)(lVar4 + 0x48);
  (**(code **)(*plVar3 + 0x10))(plVar3);
  uVar1 = param_3[2];
  uVar2 = param_3[3];
  local_28 = *param_2;
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x10))();
  }
  FUN__text__00300588(lVar4,&local_28,param_3[1],uVar1 + uVar2 * 6);
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
    local_28 = 0;
  }
  (**(code **)(*plVar3 + 0x18))(plVar3);
  return;
}


