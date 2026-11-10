/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002b5bf0; name: FUN_.text__002b5bf0
 */


undefined8 FUN__text__002b5bf0(long *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  char local_38 [4];
  byte local_34 [4];
  
  plVar1 = (long *)(**(code **)(*param_1 + 0x18))();
  plVar2 = (long *)(**(code **)(*plVar1 + 0x28))();
  uVar3 = (**(code **)(*plVar2 + 0x10))(plVar2,1,plVar1[1]);
  if ((uVar3 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (**(code **)(*plVar1 + 0x10))(plVar1,local_38,1,0);
    uVar3 = uVar3 & 0xffffffff;
  }
  lVar4 = (**(code **)(*param_1 + 0x10))(param_1);
  *(long *)(lVar4 + 8) = *(long *)(lVar4 + 8) + 1;
  if ((((uVar3 & 1) != 0) && (local_38[0] == '\x03')) && (param_2 != 0)) {
    do {
      plVar1 = (long *)(**(code **)(*param_1 + 0x18))(param_1);
      plVar2 = (long *)(**(code **)(*plVar1 + 0x28))();
      uVar3 = (**(code **)(*plVar2 + 0x10))(plVar2,1,plVar1[1]);
      if ((uVar3 & 1) == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = (**(code **)(*plVar1 + 0x10))(plVar1,local_34,1,0);
        uVar3 = uVar3 & 0xffffffff;
      }
      lVar4 = (**(code **)(*param_1 + 0x10))(param_1);
      *(long *)(lVar4 + 8) = *(long *)(lVar4 + 8) + 1;
      if ((uVar3 & 1) == 0) {
        return 0;
      }
      if (1 < local_34[0] - 1) {
        return 0;
      }
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return 1;
}


