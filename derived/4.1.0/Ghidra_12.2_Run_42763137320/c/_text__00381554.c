/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00381554; name: FUN_.text__00381554
 */


uint FUN__text__00381554(long *param_1,long param_2)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  int extraout_w9;
  byte local_24 [4];
  
  plVar2 = (long *)(**(code **)(*param_1 + 0x18))();
  plVar3 = (long *)(**(code **)(*plVar2 + 0x28))();
  uVar4 = (**(code **)(*plVar3 + 0x10))(plVar3,1,plVar2[1] + param_2);
  if ((uVar4 & 1) == 0) {
    return extraout_w9 << 8;
  }
  uVar1 = (**(code **)(*plVar2 + 0x10))(plVar2,local_24,1,param_2);
  return uVar1 & 1 | (uint)local_24[0] << 8;
}


