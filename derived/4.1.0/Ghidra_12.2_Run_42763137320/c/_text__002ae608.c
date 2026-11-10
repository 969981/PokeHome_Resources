/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002ae608; name: FUN_.text__002ae608
 */


ulong FUN__text__002ae608(long *param_1)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  char local_28 [4];
  uint local_24;
  
  plVar1 = (long *)(**(code **)(*param_1 + 0x18))();
  plVar2 = (long *)(**(code **)(*plVar1 + 0x28))();
  uVar3 = (**(code **)(*plVar2 + 0x10))(plVar2,1,plVar1[1]);
  if ((uVar3 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (**(code **)(*plVar1 + 0x10))(plVar1,local_28,1,0);
    uVar3 = uVar3 & 0xffffffff;
  }
  lVar4 = (**(code **)(*param_1 + 0x10))(param_1);
  uVar5 = 0;
  *(long *)(lVar4 + 8) = *(long *)(lVar4 + 8) + 1;
  if (((uVar3 & 1) != 0) && (local_28[0] == '\n')) {
    plVar1 = (long *)(**(code **)(*param_1 + 0x18))(param_1);
    plVar2 = (long *)(**(code **)(*plVar1 + 0x28))();
    uVar3 = (**(code **)(*plVar2 + 0x10))(plVar2,4,plVar1[1]);
    if ((uVar3 & 1) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = (**(code **)(*plVar1 + 0x10))(plVar1,&local_24,4,0);
      uVar3 = uVar3 & 0xffffffff;
    }
    lVar4 = (**(code **)(*param_1 + 0x10))(param_1);
    *(long *)(lVar4 + 8) = *(long *)(lVar4 + 8) + 4;
    uVar5 = (ulong)local_24 << 0x20;
    if ((uVar3 & 1) == 0) {
      uVar5 = 0;
    }
    uVar5 = uVar5 | uVar3 & 1;
  }
  return uVar5;
}


