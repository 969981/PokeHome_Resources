/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00366684; name: FUN_.text__00366684
 */


uint FUN__text__00366684(long *param_1,undefined4 *param_2)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  undefined1 local_38 [4];
  undefined4 local_34;
  
  plVar2 = (long *)(**(code **)(*param_1 + 0x18))();
  plVar3 = (long *)(**(code **)(*plVar2 + 0x28))();
  uVar1 = (**(code **)(*plVar3 + 0x18))(plVar3,5,plVar2[1]);
  if ((uVar1 & 1) != 0) {
    local_38[0] = 0xe;
    plVar2 = (long *)(**(code **)(*param_1 + 0x10))(param_1);
    plVar3 = (long *)(**(code **)(*plVar2 + 0x28))();
    uVar4 = (**(code **)(*plVar3 + 0x18))(plVar3,1,plVar2[1]);
    if ((uVar4 & 1) != 0) {
      (**(code **)(*plVar2 + 0x18))(plVar2,local_38,1,0);
    }
    lVar5 = (**(code **)(*param_1 + 0x10))(param_1);
    *(long *)(lVar5 + 8) = *(long *)(lVar5 + 8) + 1;
    local_34 = *param_2;
    plVar2 = (long *)(**(code **)(*param_1 + 0x10))(param_1);
    plVar3 = (long *)(**(code **)(*plVar2 + 0x28))();
    uVar4 = (**(code **)(*plVar3 + 0x18))(plVar3,4,plVar2[1]);
    if ((uVar4 & 1) != 0) {
      (**(code **)(*plVar2 + 0x18))(plVar2,&local_34,4,0);
    }
    lVar5 = (**(code **)(*param_1 + 0x10))(param_1);
    *(long *)(lVar5 + 8) = *(long *)(lVar5 + 8) + 4;
  }
  return uVar1 & 1;
}


