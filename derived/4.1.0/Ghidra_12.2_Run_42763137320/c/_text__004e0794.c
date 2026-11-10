/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004e0794; name: FUN_.text__004e0794
 */


undefined4 FUN__text__004e0794(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  long *plVar3;
  
  plVar3 = *(long **)(param_1 + 0x60);
  if (plVar3 == (long *)0x0) {
    return 1;
  }
  if (*(int *)(param_1 + 0x50) == 0) {
    iVar1 = 0x3c;
  }
  else {
    iVar1 = FUN__text__004e0840(param_1);
    iVar1 = iVar1 + 0x3c;
    plVar3 = *(long **)(param_1 + 0x60);
  }
  *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 4) = iVar1 + *(int *)(param_1 + 0x5c);
  uVar2 = (**(code **)(*plVar3 + 8))(plVar3,param_1,0x44);
  (**(code **)(**(long **)(param_1 + 0x60) + 0x20))();
  *(undefined8 *)(param_1 + 0x60) = 0;
  FUN__text__004e0720(param_1);
  FUN__text__00400fc0(0,param_1);
  return uVar2;
}


