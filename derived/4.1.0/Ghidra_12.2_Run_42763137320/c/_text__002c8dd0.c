/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002c8dd0; name: FUN_.text__002c8dd0
 */


undefined8 FUN__text__002c8dd0(long *param_1,long param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  undefined1 local_28 [4];
  undefined4 local_24;
  
  if ((param_2 != 0) || (param_3 == 0)) {
    plVar1 = (long *)(**(code **)(*param_1 + 0x18))(param_1);
    plVar2 = (long *)(**(code **)(*plVar1 + 0x28))();
    uVar3 = (**(code **)(*plVar2 + 0x18))(plVar2,param_3 + 5,plVar1[1]);
    if ((uVar3 & 1) != 0) {
      local_28[0] = 4;
      plVar1 = (long *)(**(code **)(*param_1 + 0x10))(param_1);
      plVar2 = (long *)(**(code **)(*plVar1 + 0x28))();
      uVar3 = (**(code **)(*plVar2 + 0x18))(plVar2,1,plVar1[1]);
      if ((uVar3 & 1) != 0) {
        (**(code **)(*plVar1 + 0x18))(plVar1,local_28,1,0);
      }
      lVar4 = (**(code **)(*param_1 + 0x10))(param_1);
      local_24 = (undefined4)param_3;
      *(long *)(lVar4 + 8) = *(long *)(lVar4 + 8) + 1;
      plVar1 = (long *)(**(code **)(*param_1 + 0x10))(param_1);
      plVar2 = (long *)(**(code **)(*plVar1 + 0x28))();
      uVar3 = (**(code **)(*plVar2 + 0x18))(plVar2,4,plVar1[1]);
      if ((uVar3 & 1) != 0) {
        (**(code **)(*plVar1 + 0x18))(plVar1,&local_24,4,0);
      }
      lVar4 = (**(code **)(*param_1 + 0x10))(param_1);
      *(long *)(lVar4 + 8) = *(long *)(lVar4 + 8) + 4;
      plVar1 = (long *)(**(code **)(*param_1 + 0x10))(param_1);
      if (param_2 != 0) {
        plVar2 = (long *)(**(code **)(*plVar1 + 0x28))();
        uVar3 = (**(code **)(*plVar2 + 0x18))(plVar2,param_3,plVar1[1]);
        if ((uVar3 & 1) != 0) {
          (**(code **)(*plVar1 + 0x18))(plVar1,param_2,param_3,0);
        }
      }
      lVar4 = (**(code **)(*param_1 + 0x10))(param_1);
      *(long *)(lVar4 + 8) = *(long *)(lVar4 + 8) + param_3;
      return 1;
    }
  }
  return 0;
}


