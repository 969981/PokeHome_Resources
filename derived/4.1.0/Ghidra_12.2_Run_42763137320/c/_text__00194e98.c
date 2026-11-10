/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00194e98; name: FUN_.text__00194e98
 */


uint FUN__text__00194e98(long param_1,long *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  long local_28;
  
  lVar5 = *(long *)(*(long *)(*(long *)(*(long *)(param_1 + 0x40) + (ulong)*param_3 * 0x20 + 0x10) +
                             0x10) + 8);
  uVar3 = 0;
  if (lVar5 != 0) {
    plVar4 = (long *)(lVar5 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    uVar3 = param_3[2];
    uVar1 = param_3[3];
    uVar2 = param_3[1];
    local_28 = *param_2;
    if (local_28 != 0) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x10))();
    }
    uVar3 = FUN__text__00301310(lVar5,uVar2,uVar3 + uVar1 * 6,&local_28,1);
    if (local_28 != 0) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
      local_28 = 0;
    }
    (**(code **)(*plVar4 + 0x18))(plVar4);
  }
  return uVar3 & 1;
}


