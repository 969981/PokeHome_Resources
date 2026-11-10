/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004e0ab8; name: FUN_.text__004e0ab8
 */


undefined8 FUN__text__004e0ab8(long param_1,long param_2,int param_3)

{
  undefined8 uVar1;
  long *plVar2;
  
  uVar1 = 2;
  if (((param_2 != 0) && (plVar2 = *(long **)(param_1 + 0x60), plVar2 != (long *)0x0)) &&
     (uVar1 = (**(code **)(*plVar2 + 0x10))(plVar2), (int)uVar1 == 1)) {
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + param_3;
  }
  return uVar1;
}


