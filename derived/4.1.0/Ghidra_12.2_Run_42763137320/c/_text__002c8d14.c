/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002c8d14; name: FUN_.text__002c8d14
 */


ulong FUN__text__002c8d14(long *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  uint local_24;
  
  plVar1 = (long *)(**(code **)(*param_1 + 0x18))();
  plVar2 = (long *)(**(code **)(*plVar1 + 0x28))();
  uVar3 = (**(code **)(*plVar2 + 0x10))(plVar2,4,plVar1[1] + param_2);
  if ((uVar3 & 1) == 0) {
    return 0;
  }
  uVar4 = (**(code **)(*plVar1 + 0x10))(plVar1,&local_24,4,param_2);
  uVar3 = (ulong)local_24 << 0x20;
  if ((uVar4 & 1) == 0) {
    uVar3 = 0;
  }
  return uVar3 | uVar4 & 1;
}


