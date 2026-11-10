/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002e73b4; name: FUN_.text__002e73b4
 */


uint FUN__text__002e73b4(long *param_1,long param_2,long param_3)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  undefined1 local_24 [4];
  
  plVar2 = (long *)(**(code **)(*param_1 + 0x18))();
  plVar3 = (long *)(**(code **)(*plVar2 + 0x28))();
  uVar1 = (**(code **)(*plVar3 + 0x18))(plVar3,param_3 + 1,plVar2[1]);
  if ((uVar1 & 1) != 0) {
    local_24[0] = 8;
    plVar2 = (long *)(**(code **)(*param_1 + 0x10))(param_1);
    plVar3 = (long *)(**(code **)(*plVar2 + 0x28))();
    uVar4 = (**(code **)(*plVar3 + 0x18))(plVar3,1,plVar2[1]);
    if ((uVar4 & 1) != 0) {
      (**(code **)(*plVar2 + 0x18))(plVar2,local_24,1,0);
    }
    lVar5 = (**(code **)(*param_1 + 0x10))(param_1);
    *(long *)(lVar5 + 8) = *(long *)(lVar5 + 8) + 1;
    plVar2 = (long *)(**(code **)(*param_1 + 0x10))(param_1);
    if (param_2 != 0) {
      plVar3 = (long *)(**(code **)(*plVar2 + 0x28))();
      uVar4 = (**(code **)(*plVar3 + 0x18))(plVar3,param_3,plVar2[1]);
      if ((uVar4 & 1) != 0) {
        (**(code **)(*plVar2 + 0x18))(plVar2,param_2,param_3,0);
      }
    }
    lVar5 = (**(code **)(*param_1 + 0x10))(param_1);
    *(long *)(lVar5 + 8) = *(long *)(lVar5 + 8) + param_3;
  }
  return uVar1 & 1;
}


