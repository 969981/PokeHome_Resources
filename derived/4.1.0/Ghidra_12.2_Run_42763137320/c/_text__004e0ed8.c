/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004e0ed8; name: FUN_.text__004e0ed8
 */


int FUN__text__004e0ed8(long param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  long *plVar2;
  undefined1 auStack_34 [4];
  
  plVar2 = *(long **)(param_1 + 8);
  if (plVar2 == (long *)0x0) {
    return 2;
  }
  iVar1 = (**(code **)(*plVar2 + 0x50))(plVar2,0,0,0);
  if (iVar1 == 1) {
    iVar1 = (**(code **)(**(long **)(param_1 + 8) + 0x40))
                      (0,*(long **)(param_1 + 8),param_2,param_3,1,0,auStack_34);
  }
  (**(code **)(**(long **)(param_1 + 8) + 0x10))();
  *(undefined8 *)(param_1 + 8) = 0;
  return iVar1;
}


